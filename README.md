# Comic Jumper — Linux & Windows Recompilation

Native **Linux and Windows** ports of the Xbox 360 XBLA game
**Comic Jumper: The Adventures of Captain Smiley** (Twisted Pixel, 2010),
built with the [ReXGlue SDK](https://github.com/ReXGlue/rexglue-sdk) static
recompiler. Comic Jumper runs on the same Twisted Pixel engine as
['Splosion Man](https://github.com/thefixinhixon/SplosionManRecomp), and this
port reuses that project's fixes, launcher and options menu.

**Status:**

- **Linux: playable.** Tested through the opening chapters and into level 2:
  graphics, audio (6-channel or stereo), controller + vibration, full-game
  unlock, achievements, FSR/CAS upscaling. Verified on Kubuntu (AMD RX 6600 /
  RADV).
- **Windows: test build.** Built by CI, not yet tested on real hardware.
  Reports welcome.

> **No game data is included in this repository or its releases.**
> You must supply your own legally obtained copy of the game. The launcher
> imports your XBLA package directly, or you can point it at a folder
> containing `default.xex`. Comic Jumper is © Twisted Pixel Games /
> Microsoft. This is a fan-made interoperability project; do not
> redistribute game assets.

## Download

Get the files from the [latest release](https://github.com/thefixinhixon/ComicJumperRecomp/releases/latest).

### Linux

`ComicJumper-x86_64-<version>.AppImage`: `chmod +x` it and run it. Import
your XBLA package on the launcher's Game tab and press Play.

Requirements: x86_64 with **glibc 2.39+** (Steam Deck / SteamOS 3.7,
Ubuntu 24.04+, Debian 13+, Fedora 40+, Arch), Vulkan drivers for your GPU,
and PipeWire or PulseAudio.

### Windows (test build)

`ComicJumper-windows-x86_64-<version>.zip`: extract the folder anywhere, run
`TPComicJumperLauncher.exe`, import your XBLA package on the Game tab and
press Play. Keep the game files (`comicjumper.exe`, `rexruntime.dll`,
`rexgpu-xenos.dll`, `amd_fidelityfx_dx12.dll`) together in that folder.
Install `vc_redist.x64.exe` (included) if Windows reports a missing
runtime DLL.

Requirements: Windows 10/11 64-bit and a GPU with Vulkan support.

## The launcher

The **TP Comic Jumper Launcher** (Qt 6) comes from the shared launcher in
`tp-launcher/`:

- **Import XBLA package** on the Game tab, with built-in STFS extraction
  (no external tools).
- Settings with plain-language explanations: internal resolution, FSR / CAS
  upscaling, FXAA, MSAA, anisotropic filtering, VSync, frame limit, audio
  and storage options.
- The release ships with placeholder art only. The real banner and icon are
  made from your own game package the first time it loads.

## In-game options menu

Press **F1** on the keyboard or **click both sticks (L3 + R3)** to open the
options over the game. D-pad / left stick or arrow keys move, Left / Right
change a value, LB / RB (Q / E) switch pages, B / Esc closes.

| Page | Contents |
|---|---|
| Game | Resume, Quit game (press twice) |
| Achievements | every achievement and whether you've unlocked it (the game's own pause-menu Achievements entry opens this page) |
| Performance | frame rate limit (match display, 30–360 or unlimited), VSync, frame queue, performance overlay, pause while open, fullscreen / windowed |
| Graphics | upscaling (bilinear / AMD FSR 1 / AMD CAS) + sharpness, FXAA, internal resolution, MSAA, anisotropic filtering |
| Audio | master volume, mute, force stereo |
| Controls | vibration strength, keyboard as controller |

Choices are saved to `recomp_options.toml` next to your saves.

**Keyboard as controller:** WASD move, arrow keys = right stick,
Space = A, Backspace = B, L = X, P = Y, Q / E = triggers, Enter = Start,
Tab = Back.

## Performance

Comic Jumper's game logic runs on real elapsed time, so it plays at the
correct speed at any frame rate, including uncapped. The default frame
limit is **Match display** (your monitor's refresh rate).

Fixed in this port:

- **UI repaint loop.** The runtime's always-present achievement popup made
  the UI thread redraw the screen nonstop with mailbox VSync (common on
  Wayland). On the test machine at the title screen this took the UI thread
  from 71% of a core to 4%, and GPU busy from 57% to 23%.
- **Thread wakeups.** Waiting on several events at once used to wake every
  waiting thread on any signal (224k context switches/s, now 64k/s). The
  streaming thread's busy loop is throttled with a hook.
- **Unneeded global lock.** The recompiled code no longer takes a global lock
  around the game's atomic operations (`skip_msr`): about 10% faster frames
  in the hub.

**Internal resolution 2x is GPU-heavy.** The game copies render targets
around a lot each frame, and at 2x every copy costs four times as much. For
a sharper image, use **1x + FSR or CAS** instead.

## Known issues

- Windows build untested on real hardware.
- Only tested into level 2 so far; later levels are unverified.
- On AMD + RADV, leave the launcher's sparse shared memory option off (black
  screen).

## Building from source

1. Check out the ReXGlue SDK at the commit pinned in
   `.github/workflows/build.yml` (`REXSDK_COMMIT`) and apply
   `patches/house-sdk.patch` (`git apply --whitespace=nowarn`). All of this
   port's runtime changes are in that patch. On Windows, exclude the two
   `d3d12_presenter` files as the workflow does.
2. `generated/` (the recompiled code) is committed, so you don't need the
   game to build. To regenerate it from your own `default.xex` (placed in
   `assets/`), run `rexglue codegen comicjumper_manifest.toml`, then
   `scripts/fix-labels.py` and `scripts/smart-patch.py generated/default`.
3. Configure and build:
   ```bash
   cmake --preset linux-amd64-release -DREXSDK_DIR=<sdk> -DREXGLUE_ENABLE_FIDELITYFX=ON
   cmake --build out/build/linux-amd64-release
   ```
   Windows uses the `win-amd64-release` preset. Build the launcher from
   `tp-launcher/` with `-DTP_GAME=comicjumper`.
4. Linux packaging: `packaging/linux/container-build.sh` reproduces the
   release AppImage in an Ubuntu 24.04 container (podman or docker).

**Never mix** the executable and runtime libraries from different builds;
it corrupts the heap.

CI (`.github/workflows/build.yml`) builds both platforms on every push to
`main` (files on the Actions run page) and publishes a release when a `v*`
tag is pushed.

## Credits & disclosure

- The ReXGlue SDK team, for the recompiler and runtime.
- The launcher descends from the **Linux Qt launcher written by MaSieS4Fun**
  for [hells-gate-recomp](https://github.com/florinp93/hells-gate-recomp),
  Zerkiller's (florinp93's) Dante's Inferno recompilation, and from
  Zerkiller's original launcher for that project. Thank you both.
- Twisted Pixel Games, for Captain Smiley and Star.
- Built by Jason Hixon with heavy AI assistance (Claude, by Anthropic) on
  the coding side, and tested by playing it.
