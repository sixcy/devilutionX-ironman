#pragma once

#include <string>
namespace devilution {

constexpr bool IsIronman = true;
bool LevelIsClearMonsters();
bool CurrentLevelIsClear(uint8_t nextLevel = -1);
std::string SelectImMsg();
bool ShouldHighlightObjects();
int GetHostileMonsterCount();

} // namespace devilution
