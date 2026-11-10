// gameart.h - banner/icon art taken from the user's own game data.
//
// Profiles that set artBannerFile / artIconFile ship only neutral placeholder art
// (":/assets/banner.png", ":/assets/icon.png"). Once a game root is known (an XBLA
// import, or a detected game folder), the art is built from the named files in the
// game data, cached under the launcher's app-data folder and used on every later start.
// Profiles without those fields keep their bundled art unchanged.
#pragma once

#include <QIcon>
#include <QPixmap>
#include <QString>

#include "gameprofile.h"

namespace gameart {

// Builds the cached art from gameRoot (or gameRoot/gamedata) if it does not exist yet.
// Returns true when cached art is available afterwards.
bool ensureFromGameData(const GameProfile &profile, const QString &gameRoot);

// The cached banner/icon when present, otherwise the bundled resources.
QPixmap banner(const GameProfile &profile);
QIcon icon(const GameProfile &profile);

} // namespace gameart
