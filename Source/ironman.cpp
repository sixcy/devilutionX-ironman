#include "ironman.h"
#include "multi.h"
#include "player.h"
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

static bool LevelHasPlayers(uint8_t level)
{
	return std::any_of(std::cbegin(Players), std::cend(Players), [level](const Player &p) { return p.plrlevel == level; });
}

bool CurrentLevelIsClear(uint8_t nextLevel)
{
	bool multiplayerBypass = gbIsMultiplayer && LevelHasPlayers(nextLevel);
	return multiplayerBypass || (LevelIsClearMonsters() && LevelIsClearBarrels() && LevelIsClearChests());
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
