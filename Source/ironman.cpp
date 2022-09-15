#include "ironman.h"
#include "monster.h"
#include "multi.h"
#include "options.h"
#include "player.h"
#include "qol/itemlabels.h"
#include "utils/language.h"

namespace devilution {

static bool LevelIsClearMonsters()
{
	return ActiveMonsterCount <= MAX_PLRS;
}

static bool LevelIsClearBarrels()
{
	return RemainingBarrelCount <= 0;
}

static bool LevelIsClearChests()
{
	return RemainingChestCount <= 0;
}

static bool LevelDeq(uint8_t a, uint8_t b) // Is 'a' deeper or equal than 'b'?
{
	constexpr uint8_t HiveStart = 17;
	constexpr uint8_t CryptStart = 21;

	if (a >= CryptStart) {
		if (b >= CryptStart) {
			return a >= b;
		}
		return false;
	}

	assert(a < CryptStart);
	if (a >= HiveStart) {
		if (b >= HiveStart && b < CryptStart)
			return a >= b;
		return false;
	}

	assert(a < HiveStart);
	if (b < HiveStart)
		return a >= b;

	return false;
}

static bool LevelIsClearedOrEntered(uint8_t level)
{
	/* A player has entered a deeper level than 'level'
	 * implies that 'level' is either cleared or entered */
	return std::any_of(std::cbegin(Players), std::cend(Players),
	    [level](const Player &p) { return LevelDeq(p.plrlevel, level); });
}

bool CurrentLevelIsClear(uint8_t nextLevel)
{
	bool multiplayerBypass = gbIsMultiplayer && LevelIsClearedOrEntered(nextLevel);
	return multiplayerBypass || (LevelIsClearMonsters() && LevelIsClearBarrels() && LevelIsClearChests());
}

bool ShouldHighlightObjects()
{
	if (!IsIronman)
		return false;
	auto objectsHighlightMode = *sgOptions.Ironman.objectsHighlightMode;
	bool whenAlt = IsAnyOf(objectsHighlightMode, IMObjectsHighlightMode::WhenAltAndSafe, IMObjectsHighlightMode::WhenAlt);
	bool whenSafe = IsAnyOf(objectsHighlightMode, IMObjectsHighlightMode::WhenAltAndSafe, IMObjectsHighlightMode::WhenSafe);
	return !(
	    (!whenAlt && !whenSafe)
	    || (whenAlt && !IsHighlightingLabelsEnabled())
	    || (whenSafe && !LevelIsClearMonsters()));
}

constexpr const char *ImMustKillAllMsg = "All monsters must be killed";
constexpr const char *ImMustBreakAllMsg = "All barrels must be broken";
constexpr const char *ImMustOpenAllChests = "All chests must be opened";

std::string SelectImMsg()
{
	std::string msg {};
	if (!LevelIsClearMonsters())
		msg += _(ImMustKillAllMsg);
	if (!LevelIsClearBarrels())
		msg += std::string((msg.empty() ? "" : "\n")) + std::string(_(ImMustBreakAllMsg));
	if (!LevelIsClearChests())
		msg += std::string((msg.empty() ? "" : "\n")) + std::string(_(ImMustOpenAllChests));
	return msg;
}

} // namespace devilution
