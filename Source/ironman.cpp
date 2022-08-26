#include "ironman.h"
#include "multi.h"
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

bool LevelIsClear(){
	return LevelIsClearMonsters() && LevelIsClearBarrels() && LevelIsClearChests();
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
		msg += (msg.empty() ? "" : "\n") + _(ImMustBreakAllMsg);
	if (!LevelIsClearChests())
		msg += (msg.empty() ? "" : "\n") + _(ImMustOpenAllChests);
	return msg;
}

}
