# Agent notes

Comic Jumper: The Adventures of Captain Smiley (Twisted Pixel, XBLA, title 58410A20), statically
recompiled with ReXGlue. Same Twisted Pixel "Eg" engine as `../SplosionManRecomp` (227 of 267
RTTI classes shared): reuse its fixes, map addresses with `tools/sigmap.py`.

## Hard rules

1. Every test run goes through `tools/linux/headless_run.sh` (private Xvfb, muted, input backend
   off, the user's PowerA `20d6:2062` ignored). Never use the user's display or speakers.
2. The user's play build is `/mnt/sdb1/Games/comicjumper` (`play.sh`, saves in
   `~/.local/share/comicjumper`). Never build into it, copy over it or kill a game running from it
   without asking; update it only on request, keeping the previous binary as `comicjumper.prev`.
3. Build only against this repo's private SDK copy `out/sdk`. The SDK's CMake writes its libraries
   and `rexglue` into `${REXSDK_DIR}/out/linux-amd64`, so pointing `REXSDK_DIR` at another
   project's SDK overwrites that project's build (it happened once to SplosionMan).
4. Commit only when the user asks; push only when asked. Public repo:
   https://github.com/thefixinhixon/ComicJumperRecomp (created 2026-11-10, `.recomp.json` for recomp.fyi).

## Pipeline

```bash
out/sdk/out/linux-amd64/rexglue codegen --ignore-stamp comicjumper_manifest.toml
python3 -I scripts/fix-labels.py && python3 -I scripts/smart-patch.py generated/default
cmake --preset linux-amd64-release -DREXSDK_DIR=$PWD/out/sdk -DREXGLUE_ENABLE_FIDELITYFX=ON
cmake --build out/build/linux-amd64-release -j6
tools/linux/headless_run.sh boot 60
```

All SDK changes (SplosionMan's house patch committed in `out/sdk` up to `6263069`, plus Comic
Jumper's uncommitted ones) are kept as one patch against upstream `f5337cdc`, the commit CI builds:
`git -C out/sdk diff f5337cdc947ff6d4c4196737e2c807a48f2a1fc2 > patches/house-sdk.patch`.
SDK code must also build on Windows (guard POSIX-only calls with `#if !defined(_WIN32)`).

## CI (`.github/workflows/build.yml`)

Push to `main` builds the Linux AppImage (ubuntu:24.04 container, glibc 2.39 floor;
`packaging/linux/build-release.sh`, locally `packaging/linux/container-build.sh`) and the Windows
zip (game + launcher in one folder), then replaces the rolling `nightly` pre-release; a `v*` tag
makes a normal release. Codegen is skipped without `assets/default.xex`, so `generated/` must be
committed up to date (after `fix-labels.py` / `smart-patch.py`).

## Things learned

- **Manual functions** (`comicjumper_config.toml`): 34 mapped from SplosionMan's config by
  signature; setjmp `825E4B60`, longjmp `825E2AB0`, null-callback site `loc_825E2E54`.
- **Jump table** at `sub_825A0D10` (bctr `0x825A0D54`) has no bounds check; auto-detection read
  513 entries. Pinned to 16 in `[[switch_tables]]`.
- **Lua C functions** are only reachable through `lua_pushcclosure` (`821FDA88`, `821FDDE0`).
  Leaf functions right after a `li r11,1; b -44` tail get folded into the previous function.
  `tools/find_cfuncs.py re/cj.bin generated/default` must report 0 missing; two were
  (`poGetBaseLinkingActor`, `bIsSolid`), the first lost level geometry after restarts.
- **Null vertex streams** (fetch constants 91-93, D3D `SetStreamSource(n, NULL)`): drawn via
  `gpu_null_vertex_stream_draw` (SDK patch) instead of dropped; recovers the suit glow.
- **Full game** is built in (`OnPreSetup` sets `license_mask=1`). Trial check:
  `EXTRA=--license_mask=2` -> pause menu shows "UNLOCK FULL GAME".
- **Pacing:** game time is real-time, not frame- or vblank-driven (identical cutscene frames at
  30 / 60 fps and with guest vblank 60 Hz / 1 kHz). Title screen runs 300+ fps uncapped.
- **Frame limit "match display"** (SDK patch): `frame_limit=-1` paces at cvar
  `display_refresh_hz`, which the app keeps at the window's SDL display rate (re-read every 2 s;
  Xvfb reports none, so headless stays at 60). Launcher and F1 menu default to it; the launcher
  migrates the old default `frame_limit=0` to `frame_limit_v2=-1`. Unlimited + mailbox vsync
  renders frames nobody sees (the user's high CPU/GPU report).
- **CPU** (headless, 60 fps cap, title/intro): 4.2 -> 3.2 cores (-0.4 is headless WSI copy).
  1. SDK `WaitMultiple` woke *every* multi-waiter on any signal anywhere (one global futex
     generation): 224k context switches/s. Now each handle keeps its own waiter list
     (`threading_posix.cpp`, SDK patch); 64k/s.
  2. Streaming thread (`sub_821C48C8`) waits on 4 events; #2 is a manual-reset flag the game
     leaves set, so it acks (`SetEvent`) ~7000x/s. `[[midasm_hook]] 0x821C4A54` ->
     `CjStreamingAckThrottle` (`src/hooks.cpp`) sleeps 1 ms after 16 rapid acks: 547/s.
  3. Left as is: zero-timeout polls in Streaming / LuaGC (`sub_821BCE88`, incremental Lua GC
     on its own thread, real work) / Main; Main ~50% and GPU Commands ~36% are real work.
  - `--diag_wait_stats=true` logs per-thread wait/set rates every 5 s (SDK patch).
  - SDK fix: `XEvent::Initialize` now records `manual_reset_` (Query() reported every
    NtCreateEvent event as auto-reset).
- **UI repaint loop (the real "high CPU/GPU at 720p")**: the SDK's achievement toast dialog lives
  all session, and `ImGuiDrawer` requested a UI repaint after every paint while any dialog existed.
  With mailbox vsync (the user's Wayland desktop; Xvfb has no mailbox, so headless never showed it)
  the UI thread re-presented the same frame (with FSR) nonstop: 71% of a core, GPU busy 57%.
  SDK patch: `ImGuiDialog::WantsContinuousRepaint()` (toast: only while queued; `PerfOverlay`:
  false). On the user's display: UI thread 4%, GPU busy 23%. Keep new always-on dialogs at false.
- **`skip_msr = true`** (codegen): all 479 `mtmsrd r13` regions only wrap `lwarx`/`stwcx.`, so the
  emulated global "interrupts off" mutex was pure contention (job counter `sub_821BD500`, Main vs
  Work threads). Hub uncapped 13.1 -> 11.9 ms. `ctr/xer/reserved_as_local` load fine but gain
  nothing; adding `cr_as_local` + `non_argument_as_local` hangs on the Twisted Pixel logo.
- Per-frame CPU cost matches SplosionMan (same flags, 60 fps: both ~2.7 cores, 27 W headless).
  Uncapped is CPU-bound: Main ~10 ms/frame of guest work, handing off to the Draw thread.
- **Resolution scale 2x is GPU-bound** (the user's "pegged GPU"): hub 23 W at 1x vs 74-84 W
  at 2x (2.6 GHz); level 1 at 2x can't hold 75 fps (fbo ~65, fsi ~50). Per frame the game does
  ~12 resolves (~8 Mpx guest) and ~31 render-target ownership transfers, all scaled 4x.
  `render_target_path_vulkan=fsi` is 15% faster in the hub but 25% slower in levels (overdraw):
  keep fbo. Not fixed by the RTT texture limit, memexport readback off or null-stream draws off.
  Menu/launcher text now warns; recommend 1x + FSR/CAS.
- Headless profile `out/headless/userdata-93` holds a copy of the user's save (2026-11-09):
  Return at ~25 s and ~32 s loads the hub ("overworld"). Display 94 has a fresh profile.
- **GPU "100%"**: headless the RX 6600 sits at ~900-1100 MHz and 22-23 W (17 W idle) with
  gpu_busy 55-70%: amdgpu's busy % is time-busy at a low DPM clock, not load.
- **Sparse shared memory** stays off on the user's RX 6600 (RADV black screen, per SplosionMan).
- **Achievements:** `rexglue init achievements --project-name comicjumper --xex-path X X outdir`,
  installed to `<game data>/metadata/` (achievements.toml + icons).

## Headless key script

The intro (~3.5 min) can't be skipped wholesale; Back skips one line. Level 1 starts at ~215 s.
See the comment block in `tools/linux/headless.conf`. MnK pad: Return=Start, Tab=Back, Space=A,
Backspace=B, WASD=move.

## App and launcher (ported from SplosionMan, 2026-11-09)

- `src/comicjumper_app.*`, `src/options_menu.*`, `src/recomp_options.*`: F1 / L3+R3 options menu,
  perf overlay, persisted `recomp_options.toml`, vibration filter. Not ported: SplosionMan's
  `execute_unclipped_draw_vs_on_cpu` RADV workaround (Comic Jumper renders fine without it).
- FidelityFX is ON (`-DREXGLUE_ENABLE_FIDELITYFX=ON`) for the menu's FSR 1 / CAS upscaling.
- `tp-launcher/` is a copy of the shared house launcher with a `comicjumper` profile
  (`-DTP_GAME=comicjumper` -> `TPComicJumperLauncher`). It ships only placeholder art
  (`assets-comicjumper/`, drawn, no game art). `src/gameart.*`: profiles with `artBannerFile` /
  `artIconFile` build the real banner/icon from the user's game data (`Background.png`, bottom
  crop to 2352:1008; `Title Image.png`, 256 px) on first load or after an import, cached in
  `~/.local/share/HouseRecomp/TP Comic Jumper Launcher/art/`. Maw/SplosionMan profiles unchanged.
- Uncapped is safe: movement and cutscenes use real elapsed time (30 fps vs uncapped A/B
  identical); Bink FMV paces itself at 30 fps; title screen 300+ fps uncapped headless.
- **Achievements page** (F1 menu, 2nd tab) lists every achievement from the runtime's
  AchievementManager. The game's own pause-menu "Achievements" calls `XamShowAchievementsUI`,
  which the SDK patch now routes to `rex::kernel::xam::SetShowAchievementsUIHandler`
  (`include/rex/kernel/xam/ui_hooks.h`, new file, `git add -N` so the patch includes it); the app
  opens the menu on that page.

## AppImage

```bash
mkdir -p out/stage && cp out/build/linux-amd64-release/comicjumper \
  out/sdk/out/linux-amd64/librex{runtime,gpu-xenos}.so out/launcher-build/TPComicJumperLauncher out/stage/
STAGE_DIR=$PWD/out/stage QMAKE=/usr/bin/qmake6 VERSION=test1 packaging/appimage/build-appimage-x86_64.sh
```

Built on the host, so its glibc floor is the host's (2.43). The launcher prefers a program set in
the game folder over its bundled one, so keep the play folder's binaries in sync with the AppImage.
