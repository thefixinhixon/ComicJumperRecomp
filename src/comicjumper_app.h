// comicjumper - ReXGlue Recompiled Project
//
// App hooks: in-game options menu (F1 / L3+R3), performance overlay,
// persisted options, controller filters.

#pragma once

#include <array>
#include <atomic>
#include <memory>
#include <string>

#include <rex/cvar.h>
#include <rex/rex_app.h>
#include <rex/system/flags.h>

#include "options_menu.h"
#include "recomp_options.h"

struct ImFontAtlas;

// Defined by the generated init code (comicjumper_init.cpp).
extern const rex::PPCImageInfo PPCImageConfig;

class ComicjumperApp : public rex::ReXApp {
 public:
  using rex::ReXApp::ReXApp;

  static std::unique_ptr<rex::ui::WindowedApp> Create(rex::ui::WindowedAppContext& ctx) {
    return std::unique_ptr<ComicjumperApp>(new ComicjumperApp(ctx, "comicjumper", PPCImageConfig));
  }

protected:
  // Full game, not the XBLA trial: XamContentGetLicenseMask returns the license_mask
  // cvar, and bit 0 is the "purchased" license. Built in so the binary is unlocked
  // without a launcher passing --license_mask=1; an explicit non-zero mask still wins.
  void OnPreSetup(rex::RuntimeConfig& config) override {
    (void)config;
    if (REXCVAR_GET(license_mask) == 0) {
      REXCVAR_SET(license_mask, 1u);
    }
  }
  void OnPostInitLogging() override;
  void OnConfigureFonts(ImFontAtlas* atlas) override;
  void OnCreateDialogs(rex::ui::ImGuiDrawer* drawer) override;
  void OnPostSetup() override;
  void OnShutdown() override;

 private:
  cj::MenuHost MakeHost();
  void ToggleMenu();
  void OpenMenu();
  void OpenMenuAt(const std::string& page);
  void CloseMenu();
  void QuitGame();
  void SyncPerfOverlay();
  void ApplyLive(const std::string& cvar);
  void InstallInputFilters();
  // Reports the window's display refresh rate to the frame limiter ("match display"). UI thread.
  void UpdateDisplayRefresh();

  cj::OptionsStore store_;
  std::array<ImFont*, 4> fonts_{};
  std::unique_ptr<cj::OptionsMenu> menu_;
  std::unique_ptr<cj::PerfOverlay> perf_overlay_;
  std::unique_ptr<cj::HintToast> hint_;
  std::atomic<bool> menu_open_{false};
  std::atomic<int64_t> next_refresh_check_ns_{0};
  int last_refresh_hz_ = 0;  // UI thread
  // After the menu closes, keep the pad neutral for the game until every
  // button is released, so the B that closed it doesn't reach the game.
  std::atomic<bool> suppress_until_release_{false};
  std::array<std::atomic<bool>, 4> chord_down_{};
  bool frame_held_ = false;
};
