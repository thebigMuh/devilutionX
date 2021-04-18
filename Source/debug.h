/**
 * @file debug.h
 *
 * Interface of debug functions.
 */
#pragma once

#include "miniwin/miniwin.h"

namespace devilution {

extern BYTE *pSquareCel;

void FreeDebugGFX();
void CheckDungeonClear();
void LoadDebugGFX();
void GiveGoldCheat();
void TakeGoldCheat();
void MaxSpellsCheat();
void SetAllSpellsCheat();
void PrintDebugPlayer(bool bNextPlayer);
void PrintDebugQuest();
void GetDebugMonster();
void NextDebugMonster();

} // namespace devilution
