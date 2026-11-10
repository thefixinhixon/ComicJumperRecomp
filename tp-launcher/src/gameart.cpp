// gameart.cpp - see gameart.h.

#include "gameart.h"

#include <QDir>
#include <QFile>
#include <QImage>
#include <QStandardPaths>

namespace gameart {
namespace {

// Banner art is shown at this aspect ratio (same as the bundled banners).
constexpr double kBannerAspect = 2352.0 / 1008.0;
constexpr int kIconSize = 256;

bool usesGameArt(const GameProfile &profile)
{
    return !profile.artBannerFile.isEmpty() || !profile.artIconFile.isEmpty();
}

QString cacheDir()
{
    return QDir(QStandardPaths::writableLocation(QStandardPaths::AppDataLocation))
        .filePath(QStringLiteral("art"));
}

QString cachedBannerPath() { return QDir(cacheDir()).filePath(QStringLiteral("banner.png")); }
QString cachedIconPath() { return QDir(cacheDir()).filePath(QStringLiteral("icon.png")); }

// The file in the game data (top level, or gamedata/ for imported roots).
QString findInGameData(const QString &gameRoot, const QString &name)
{
    if (gameRoot.isEmpty() || name.isEmpty())
        return {};
    const QDir root(gameRoot);
    for (const QString &candidate :
         {root.filePath(name), root.filePath(QStringLiteral("gamedata/") + name)}) {
        if (QFile::exists(candidate))
            return candidate;
    }
    return {};
}

// Widest crop at the banner aspect, anchored to the bottom (title logos sit low).
QImage cropBanner(const QImage &src)
{
    int w = src.width();
    int h = int(w / kBannerAspect);
    if (h > src.height()) {
        h = src.height();
        w = int(h * kBannerAspect);
    }
    const int x = (src.width() - w) / 2;
    const int y = src.height() - h;
    return src.copy(x, y, w, h);
}

bool saveAtomically(const QImage &img, const QString &path)
{
    const QString tmp = path + QStringLiteral(".tmp");
    if (!img.save(tmp, "PNG"))
        return false;
    QFile::remove(path);
    return QFile::rename(tmp, path);
}

} // namespace

bool ensureFromGameData(const GameProfile &profile, const QString &gameRoot)
{
    if (!usesGameArt(profile))
        return false;
    const bool haveBanner = profile.artBannerFile.isEmpty() || QFile::exists(cachedBannerPath());
    const bool haveIcon = profile.artIconFile.isEmpty() || QFile::exists(cachedIconPath());
    if (haveBanner && haveIcon)
        return true;
    QDir().mkpath(cacheDir());
    bool ok = true;
    if (!haveBanner) {
        const QImage src(findInGameData(gameRoot, profile.artBannerFile));
        ok &= !src.isNull() && saveAtomically(cropBanner(src), cachedBannerPath());
    }
    if (!haveIcon) {
        const QImage src(findInGameData(gameRoot, profile.artIconFile));
        ok &= !src.isNull() &&
              saveAtomically(src.scaled(kIconSize, kIconSize, Qt::KeepAspectRatio,
                                        Qt::SmoothTransformation),
                             cachedIconPath());
    }
    return ok;
}

QPixmap banner(const GameProfile &profile)
{
    QPixmap p;
    if (usesGameArt(profile) && p.load(cachedBannerPath()))
        return p;
    p.load(QStringLiteral(":/assets/banner.png"));
    return p;
}

QIcon icon(const GameProfile &profile)
{
    if (usesGameArt(profile) && QFile::exists(cachedIconPath()))
        return QIcon(cachedIconPath());
    return QIcon(QStringLiteral(":/assets/icon.png"));
}

} // namespace gameart
