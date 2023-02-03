#include "stdafx.h"
#include "CJass.h"

int __cdecl AbilityId(CJassString abilityIdString)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB5F0
		jmp eax
	}
}

CJassStringSID __cdecl AbilityId2String(int AbilID)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB620
		jmp eax
	}
}

DWFP __cdecl Acos(float *x)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2AB0
		jmp eax
	}
}

BOOL __cdecl AddAssault(int arg1, int arg2)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD9C0
		jmp eax
	}
}

BOOL __cdecl AddDefenders(int arg1, int arg2)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DDA00
		jmp eax
	}
}

void __cdecl AddGuardPost(int arg1, float *arg2, float *arg3)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DCE30
		jmp eax
	}
}

void __cdecl AddHeroXP(HUNIT hero, int xpToAdd, BOOL showEyeCandy)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C6CF0
		jmp eax
	}
}

void __cdecl AddIndicator(HWIDGET widget, int red, int green, int blue, int alpha)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C6C60
		jmp eax
	}
}

void __cdecl AddItemToAllStock(int itemId, int currentStock, int stockMax)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3270
		jmp eax
	}
}

void __cdecl AddItemToStock(HUNIT unit, int itemId, int currentStock, int stockMax)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9350
		jmp eax
	}
}

HLIGHTNING __cdecl AddLightning(CJassString codeName, BOOL checkVisibility, float *x1, float *y1, float *x2, float *y2)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BCC20
		jmp eax
	}
}

HLIGHTNING __cdecl AddLightningEx(CJassString codeName, BOOL checkVisibility, float *x1, float *y1, float *z1, float *x2, float *y2, float *z2)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BCB30
		jmp eax
	}
}

void __cdecl AddPlayerTechResearched(HPLAYER player, int techid, int levels)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C96D0
		jmp eax
	}
}

void __cdecl AddResourceAmount(HUNIT unit, int amount)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7850
		jmp eax
	}
}

HEFFECT __cdecl AddSpecialEffect(CJassString modelName, float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BCA90
		jmp eax
	}
}

HEFFECT __cdecl AddSpecialEffectLoc(CJassString modelName, HLOCATION where)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CD260
		jmp eax
	}
}

HEFFECT __cdecl AddSpecialEffectTarget(CJassString modelName, HWIDGET targetWidget, CJassString attachPointName)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CD2A0
		jmp eax
	}
}

HEFFECT __cdecl AddSpellEffect(CJassString abilityString, HEFFECTTYPE t, float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BCB10
		jmp eax
	}
}

HEFFECT __cdecl AddSpellEffectById(int AbilID, HEFFECTTYPE t, float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BCAE0
		jmp eax
	}
}

HEFFECT __cdecl AddSpellEffectByIdLoc(int AbilID, HEFFECTTYPE t, HLOCATION where)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CD2D0
		jmp eax
	}
}

HEFFECT __cdecl AddSpellEffectLoc(CJassString abilityString, HEFFECTTYPE t, HLOCATION where)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CD320
		jmp eax
	}
}

HEFFECT __cdecl AddSpellEffectTarget(CJassString modelName, HEFFECTTYPE t, HWIDGET targetWidget, CJassString attachPoint)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CD4A0
		jmp eax
	}
}

HEFFECT __cdecl AddSpellEffectTargetById(int AbilID, HEFFECTTYPE t, HWIDGET targetWidget, CJassString attachPoint)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CD380
		jmp eax
	}
}

void __cdecl AddUnitAnimationProperties(HUNIT unit, CJassString animProperties, BOOL add)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C6220
		jmp eax
	}
}

void __cdecl AddUnitToAllStock(int unitId, int currentStock, int stockMax)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3290
		jmp eax
	}
}

void __cdecl AddUnitToStock(HUNIT unit, int unitId, int currentStock, int stockMax)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C93A0
		jmp eax
	}
}

HWEATHEREFFECT __cdecl AddWeatherEffect(HRECT where, int effectID)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCFE0
		jmp eax
	}
}

void __cdecl AdjustCameraField(HCAMERAFIELD field, float *offset, float *duration)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B48F0
		jmp eax
	}
}

HBOOLEXPR __cdecl And(HBOOLEXPR operandA, HBOOLEXPR operandB)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D05F0
		jmp eax
	}
}

DWFP __cdecl Asin(float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2A70
		jmp eax
	}
}

DWFP __cdecl Atan(float *x)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2AF0
		jmp eax
	}
}

DWFP __cdecl Atan2(float *y, float *x)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2B10
		jmp eax
	}
}

void __cdecl AttachSoundToUnit(HSOUND soundHandle, HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCE50
		jmp eax
	}
}

void __cdecl AttackMoveKill(HUNIT arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E0A40
		jmp eax
	}
}

void __cdecl AttackMoveXY(int arg1, int arg2)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DDC10
		jmp eax
	}
}

void __cdecl CachePlayerHeroData(HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9DE0
		jmp eax
	}
}

void __cdecl CameraSetSmoothingFactor(float *factor)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4BB0
		jmp eax
	}
}

void __cdecl CameraSetSourceNoise(float *mag, float *velocity)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B49E0
		jmp eax
	}
}

void __cdecl CameraSetSourceNoiseEx(float *mag, float *velocity, BOOL vertOnly)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4B20
		jmp eax
	}
}

void __cdecl CameraSetTargetNoise(float *mag, float *velocity)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4930
		jmp eax
	}
}

void __cdecl CameraSetTargetNoiseEx(float *mag, float *velocity, BOOL vertOnly)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4A70
		jmp eax
	}
}

void __cdecl CameraSetupApply(HCAMERASETUP Setup, BOOL doPan, BOOL panTimed)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CD900
		jmp eax
	}
}

void __cdecl CameraSetupApplyForceDuration(HCAMERASETUP Setup, BOOL doPan, float *forceDuration)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CD960
		jmp eax
	}
}

void __cdecl CameraSetupApplyForceDurationWithZ(HCAMERASETUP Setup, float *zDestOffset, float *forceDuration)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CD990
		jmp eax
	}
}

void __cdecl CameraSetupApplyWithZ(HCAMERASETUP Setup, float *zDestOffset)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CD930
		jmp eax
	}
}

HLOCATION __cdecl CameraSetupGetDestPositionLoc(HCAMERASETUP Setup)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D3E40
		jmp eax
	}
}

DWFP __cdecl CameraSetupGetDestPositionX(HCAMERASETUP Setup)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CD8C0
		jmp eax
	}
}

DWFP __cdecl CameraSetupGetDestPositionY(HCAMERASETUP Setup)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CD8E0
		jmp eax
	}
}

DWFP __cdecl CameraSetupGetField(HCAMERASETUP Setup, HCAMERAFIELD field)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CD830
		jmp eax
	}
}

void __cdecl CameraSetupSetDestPosition(HCAMERASETUP Setup, float *x, float *y, float *duration)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CD870
		jmp eax
	}
}

void __cdecl CameraSetupSetField(HCAMERASETUP Setup, HCAMERAFIELD field, float *value, float *duration)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CD800
		jmp eax
	}
}

BOOL __cdecl CaptainAtGoal()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD930
		jmp eax
	}
}

void __cdecl CaptainAttack(float *arg1, float *arg2)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD700
		jmp eax
	}
}

void __cdecl CaptainGoHome()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD800
		jmp eax
	}
}

int __cdecl CaptainGroupSize()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DDB90
		jmp eax
	}
}

BOOL __cdecl CaptainInCombat(BOOL arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD8A0
		jmp eax
	}
}

BOOL __cdecl CaptainIsEmpty()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DDB50
		jmp eax
	}
}

BOOL __cdecl CaptainIsFull()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DDB10
		jmp eax
	}
}

BOOL __cdecl CaptainIsHome()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD870
		jmp eax
	}
}

int __cdecl CaptainReadiness()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DDA40
		jmp eax
	}
}

int __cdecl CaptainReadinessHP()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DDA90
		jmp eax
	}
}

int __cdecl CaptainReadinessMa()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DDAD0
		jmp eax
	}
}

BOOL __cdecl CaptainRetreating()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD830
		jmp eax
	}
}

void __cdecl CaptainVsPlayer(HPLAYER arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E2C80
		jmp eax
	}
}

void __cdecl CaptainVsUnits(HPLAYER arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E2BF0
		jmp eax
	}
}

void __cdecl ChangeLevel(CJassString newLevel, BOOL doScoreScreen)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BBC30
		jmp eax
	}
}

void __cdecl Cheat(CJassString cheatStr)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3BC0
		jmp eax
	}
}

int __cdecl ChooseRandomCreep(int level)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3660
		jmp eax
	}
}

int __cdecl ChooseRandomItem(int level)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3690
		jmp eax
	}
}

int __cdecl ChooseRandomItemEx(HITEMTYPE Type, int level)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B36B0
		jmp eax
	}
}

int __cdecl ChooseRandomNPBuilding()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3680
		jmp eax
	}
}

void __cdecl ClearCaptainTargets()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD6C0
		jmp eax
	}
}

void __cdecl ClearHarvestAI()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD5B0
		jmp eax
	}
}

void __cdecl ClearMapMusic()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3D20
		jmp eax
	}
}

void __cdecl ClearSelection()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BBAA0
		jmp eax
	}
}

void __cdecl ClearStackedSound(CJassString arg1, float *arg2, float *arg3)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3C80
		jmp eax
	}
}

void __cdecl ClearStackedSoundRect(CJassString arg1, HRECT arg2)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCB20
		jmp eax
	}
}

void __cdecl ClearTextMessages()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4E60
		jmp eax
	}
}

void __cdecl CommandAI(HPLAYER num, int command, int data)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB7A0
		jmp eax
	}
}

int __cdecl CommandsWaiting()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DCDD0
		jmp eax
	}
}

HCONDITIONFUNC __cdecl Condition(CODE func)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB0A0
		jmp eax
	}
}

HAIDIFFICULTY __cdecl ConvertAIDifficulty(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2690
		jmp eax
	}
}

HALLIANCETYPE __cdecl ConvertAllianceType(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2610
		jmp eax
	}
}

HATTACKTYPE __cdecl ConvertAttackType(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2870
		jmp eax
	}
}

HBLENDMODE __cdecl ConvertBlendMode(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2810
		jmp eax
	}
}

HCAMERAFIELD __cdecl ConvertCameraField(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B27F0
		jmp eax
	}
}

HDAMAGETYPE __cdecl ConvertDamageType(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2880
		jmp eax
	}
}

HDIALOGEVENT __cdecl ConvertDialogEvent(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B26F0
		jmp eax
	}
}

HEFFECTTYPE __cdecl ConvertEffectType(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2840
		jmp eax
	}
}

HFGAMESTATE __cdecl ConvertFGameState(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2640
		jmp eax
	}
}

HFOGSTATE __cdecl ConvertFogState(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2830
		jmp eax
	}
}

HGAMEDIFFICULTY __cdecl ConvertGameDifficulty(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2750
		jmp eax
	}
}

HGAMEEVENT __cdecl ConvertGameEvent(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B26A0
		jmp eax
	}
}

HGAMESPEED __cdecl ConvertGameSpeed(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2720
		jmp eax
	}
}

HGAMETYPE __cdecl ConvertGameType(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2760
		jmp eax
	}
}

HIGAMESTATE __cdecl ConvertIGameState(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2630
		jmp eax
	}
}

HITEMTYPE __cdecl ConvertItemType(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2860
		jmp eax
	}
}

HLIMITOP __cdecl ConvertLimitOp(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2700
		jmp eax
	}
}

HMAPCONTROL __cdecl ConvertMapControl(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B27B0
		jmp eax
	}
}

HMAPDENSITY __cdecl ConvertMapDensity(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B27A0
		jmp eax
	}
}

HMAPFLAG __cdecl ConvertMapFlag(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2770
		jmp eax
	}
}

HMAPSETTING __cdecl ConvertMapSetting(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2790
		jmp eax
	}
}

HMAPVISIBILITY __cdecl ConvertMapVisibility(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2780
		jmp eax
	}
}

HPATHINGTYPE __cdecl ConvertPathingType(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B28B0
		jmp eax
	}
}

HPLACEMENT __cdecl ConvertPlacement(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2730
		jmp eax
	}
}

HPLAYERCOLOR __cdecl ConvertPlayerColor(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B27C0
		jmp eax
	}
}

HPLAYEREVENT __cdecl ConvertPlayerEvent(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B26B0
		jmp eax
	}
}

HPLAYERGAMERESULT __cdecl ConvertPlayerGameResult(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2670
		jmp eax
	}
}

HPLAYERSCORE __cdecl ConvertPlayerScore(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2660
		jmp eax
	}
}

HPLAYERSLOTSTATE __cdecl ConvertPlayerSlotState(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B27D0
		jmp eax
	}
}

HPLAYERSTATE __cdecl ConvertPlayerState(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2650
		jmp eax
	}
}

HPLAYERUNITEVENT __cdecl ConvertPlayerUnitEvent(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B26C0
		jmp eax
	}
}

HRACE __cdecl ConvertRace(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2600
		jmp eax
	}
}

HRACEPREFERENCE __cdecl ConvertRacePref(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2620
		jmp eax
	}
}

HRARITYCONTROL __cdecl ConvertRarityControl(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2800
		jmp eax
	}
}

HSOUNDTYPE __cdecl ConvertSoundType(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B28A0
		jmp eax
	}
}

HSTARTLOCPRIO __cdecl ConvertStartLocPrio(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2740
		jmp eax
	}
}

HTEXMAPFLAGS __cdecl ConvertTexMapFlags(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2820
		jmp eax
	}
}

HUNITEVENT __cdecl ConvertUnitEvent(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B26D0
		jmp eax
	}
}

HUNITSTATE __cdecl ConvertUnitState(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2680
		jmp eax
	}
}

HUNITTYPE __cdecl ConvertUnitType(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2710
		jmp eax
	}
}

BOOL __cdecl ConvertUnits(int arg1, int arg2)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD2E0
		jmp eax
	}
}

HVERSION __cdecl ConvertVersion(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2850
		jmp eax
	}
}

HVOLUMEGROUP __cdecl ConvertVolumeGroup(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B27E0
		jmp eax
	}
}

HWEAPONTYPE __cdecl ConvertWeaponType(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2890
		jmp eax
	}
}

HWIDGETEVENT __cdecl ConvertWidgetEvent(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B26E0
		jmp eax
	}
}

BOOL __cdecl CopySaveGame(CJassString sourceSaveName, CJassString destSaveName)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC180
		jmp eax
	}
}

DWFP __cdecl Cos(float *radians)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2A30
		jmp eax
	}
}

HUNIT __cdecl CreateBlightedGoldmine(HPLAYER id, float *x, float *y, float *face)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CD630
		jmp eax
	}
}

HCAMERASETUP __cdecl CreateCameraSetup()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D3D40
		jmp eax
	}
}

void __cdecl CreateCaptains()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD960
		jmp eax
	}
}

HUNIT __cdecl CreateCorpse(HPLAYER player, int unitid, float *x, float *y, float *face)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5350
		jmp eax
	}
}

HDESTRUCTABLE __cdecl CreateDeadDestructable(int objectid, float *x, float *y, float *face, float *scale, int variation)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB840
		jmp eax
	}
}

HDESTRUCTABLE __cdecl CreateDeadDestructableZ(int objectid, float *x, float *y, float *z, float *face, float *scale, int variation)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB890
		jmp eax
	}
}

HDEFEATCONDITION __cdecl CreateDefeatCondition()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC9E0
		jmp eax
	}
}

HDESTRUCTABLE __cdecl CreateDestructable(int objectid, float *x, float *y, float *face, float *scale, int variation)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB790
		jmp eax
	}
}

HDESTRUCTABLE __cdecl CreateDestructableZ(int objectid, float *x, float *y, float *z, float *face, float *scale, int variation)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB7E0
		jmp eax
	}
}

HFOGMODIFIER __cdecl CreateFogModifierRadius(HPLAYER forWhichPlayer, HFOGSTATE State, float *centerx, float *centerY, float *radius, BOOL useSharedVision, BOOL afterUnits)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D0F90
		jmp eax
	}
}

HFOGMODIFIER __cdecl CreateFogModifierRadiusLoc(HPLAYER forWhichPlayer, HFOGSTATE State, HLOCATION center, float *radius, BOOL useSharedVision, BOOL afterUnits)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D10F0
		jmp eax
	}
}

HFOGMODIFIER __cdecl CreateFogModifierRect(HPLAYER forWhichPlayer, HFOGSTATE State, HRECT where, BOOL useSharedVision, BOOL afterUnits)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D0E70
		jmp eax
	}
}

HFORCE __cdecl CreateForce()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D29F0
		jmp eax
	}
}

HGROUP __cdecl CreateGroup()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D2900
		jmp eax
	}
}

HIMAGE __cdecl CreateImage(CJassString file, float *sizeX, float *sizeY, float *sizeZ, float *posX, float *posY, float *posZ, float *originX, float *originY, float *originZ, int imageType)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4320
		jmp eax
	}
}

HITEM __cdecl CreateItem(int itemid, float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB9A0
		jmp eax
	}
}

HITEMPOOL __cdecl CreateItemPool()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D2FC0
		jmp eax
	}
}

HLEADERBOARD __cdecl CreateLeaderboard()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D35B0
		jmp eax
	}
}

HSOUND __cdecl CreateMIDISound(CJassString soundLabel, int fadeInRate, int fadeOutRate)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D3C30
		jmp eax
	}
}

HMULTIBOARD __cdecl CreateMultiboard()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D36B0
		jmp eax
	}
}

HQUEST __cdecl CreateQuest()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC970
		jmp eax
	}
}

HREGION __cdecl CreateRegion()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D0930
		jmp eax
	}
}

HSOUND __cdecl CreateSound(CJassString fileName, BOOL looping, BOOL is3D, BOOL stopwhenoutofrange, int fadeInRate, int fadeOutRate, CJassString eaxSetting)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D38D0
		jmp eax
	}
}

HSOUND __cdecl CreateSoundFilenameWithLabel(CJassString fileName, BOOL looping, BOOL is3D, BOOL stopwhenoutofrange, int fadeInRate, int fadeOutRate, CJassString SLKEntryName)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D39F0
		jmp eax
	}
}

HSOUND __cdecl CreateSoundFromLabel(CJassString soundLabel, BOOL looping, BOOL is3D, BOOL stopwhenoutofrange, int fadeInRate, int fadeOutRate)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D3B10
		jmp eax
	}
}

HTEXTTAG __cdecl CreateTextTag()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC580
		jmp eax
	}
}

HTIMER __cdecl CreateTimer()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D0500
		jmp eax
	}
}

HTIMERDIALOG __cdecl CreateTimerDialog(HTIMER t)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D34B0
		jmp eax
	}
}

HTRACKABLE __cdecl CreateTrackable(CJassString trackableModelPath, float *x, float *y, float *facing)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D30B0
		jmp eax
	}
}

HTRIGGER __cdecl CreateTrigger()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D11F0
		jmp eax
	}
}

HUBERSPLAT __cdecl CreateUbersplat(float *x, float *y, CJassString name, int red, int green, int blue, int alpha, BOOL forcePaused, BOOL noBirthTime)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B85F0
		jmp eax
	}
}

HUNIT __cdecl CreateUnit(HPLAYER id, int unitid, float *x, float *y, float *face)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5230
		jmp eax
	}
}

HUNIT __cdecl CreateUnitAtLoc(HPLAYER id, int unitid, HLOCATION Location, float *face)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C52D0
		jmp eax
	}
}

HUNIT __cdecl CreateUnitAtLocByName(HPLAYER id, CJassString unitname, HLOCATION Location, float *face)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5320
		jmp eax
	}
}

HUNIT __cdecl CreateUnitByName(HPLAYER player, CJassString unitname, float *x, float *y, float *face)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C52A0
		jmp eax
	}
}

HUNITPOOL __cdecl CreateUnitPool()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D2ED0
		jmp eax
	}
}

BOOL __cdecl CreepsOnMap()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DC0F0
		jmp eax
	}
}

void __cdecl CripplePlayer(HPLAYER player, HFORCE toWhichPlayers, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1310
		jmp eax
	}
}

void __cdecl DebugBreak(int arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DC050
		jmp eax
	}
}

void __cdecl DebugFI(CJassString arg1, int arg2)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DC0B0
		jmp eax
	}
}

void __cdecl DebugS(CJassString arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DC0A0
		jmp eax
	}
}

void __cdecl DebugUnitID(CJassString arg1, int arg2)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DC0C0
		jmp eax
	}
}

int __cdecl DecUnitAbilityLevel(HUNIT unit, int abilcode)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C70B0
		jmp eax
	}
}

void __cdecl DefeatConditionSetDescription(HDEFEATCONDITION Condition, CJassString description)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBE00
		jmp eax
	}
}

void __cdecl DefineStartLocation(int StartLoc, float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BAF70
		jmp eax
	}
}

void __cdecl DefineStartLocationLoc(int StartLoc, HLOCATION Location)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C0EA0
		jmp eax
	}
}

DWFP __cdecl Deg2Rad(float *degrees)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B29D0
		jmp eax
	}
}

void __cdecl DestroyBoolExpr(HBOOLEXPR e)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C14A0
		jmp eax
	}
}

void __cdecl DestroyCondition(HCONDITIONFUNC c)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1440
		jmp eax
	}
}

void __cdecl DestroyDefeatCondition(HDEFEATCONDITION Condition)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBDB0
		jmp eax
	}
}

void __cdecl DestroyEffect(HEFFECT Effect)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CD240
		jmp eax
	}
}

void __cdecl DestroyFilter(HFILTERFUNC f)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1470
		jmp eax
	}
}

void __cdecl DestroyFogModifier(HFOGMODIFIER FogModifier)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1BA0
		jmp eax
	}
}

void __cdecl DestroyForce(HFORCE Force)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C44C0
		jmp eax
	}
}

void __cdecl DestroyGroup(HGROUP Group)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3FA0
		jmp eax
	}
}

void __cdecl DestroyImage(HIMAGE Image)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B43B0
		jmp eax
	}
}

void __cdecl DestroyItemPool(HITEMPOOL ItemPool)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB6A0
		jmp eax
	}
}

void __cdecl DestroyLeaderboard(HLEADERBOARD lb)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBFD0
		jmp eax
	}
}

BOOL __cdecl DestroyLightning(HLIGHTNING Bolt)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4150
		jmp eax
	}
}

void __cdecl DestroyMultiboard(HMULTIBOARD lb)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC650
		jmp eax
	}
}

void __cdecl DestroyQuest(HQUEST Quest)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBB20
		jmp eax
	}
}

void __cdecl DestroyTextTag(HTEXTTAG t)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC5A0
		jmp eax
	}
}

void __cdecl DestroyTimer(HTIMER Timer)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1350
		jmp eax
	}
}

void __cdecl DestroyTimerDialog(HTIMERDIALOG Dialog)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBE30
		jmp eax
	}
}

void __cdecl DestroyTrigger(HTRIGGER Trigger)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1C00
		jmp eax
	}
}

void __cdecl DestroyUbersplat(HUBERSPLAT Splat)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B44C0
		jmp eax
	}
}

void __cdecl DestroyUnitPool(HUNITPOOL Pool)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB5C0
		jmp eax
	}
}

void __cdecl DestructableRestoreLife(HDESTRUCTABLE d, float *life, BOOL birth)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4870
		jmp eax
	}
}

HBUTTON __cdecl DialogAddButton(HDIALOG Dialog, CJassString buttonText, int hotkey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9F90
		jmp eax
	}
}

HBUTTON __cdecl DialogAddQuitButton(HDIALOG Dialog, BOOL doScoreScreen, CJassString buttonText, int hotkey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9FE0
		jmp eax
	}
}

void __cdecl DialogClear(HDIALOG Dialog)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9F40
		jmp eax
	}
}

HDIALOG __cdecl DialogCreate()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D2BC0
		jmp eax
	}
}

void __cdecl DialogDestroy(HDIALOG Dialog)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9F00
		jmp eax
	}
}

void __cdecl DialogDisplay(HPLAYER player, HDIALOG Dialog, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA030
		jmp eax
	}
}

void __cdecl DialogSetAsync(HDIALOG arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9F20
		jmp eax
	}
}

void __cdecl DialogSetMessage(HDIALOG Dialog, CJassString messageText)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9F60
		jmp eax
	}
}

void __cdecl DisablePathing()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E06E0
		jmp eax
	}
}

void __cdecl DisableRestartMission(BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B38C0
		jmp eax
	}
}

void __cdecl DisableTrigger(HTRIGGER Trigger)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1C60
		jmp eax
	}
}

void __cdecl DisplayCineFilter(BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B5120
		jmp eax
	}
}

void __cdecl DisplayLoadDialog()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3A10
		jmp eax
	}
}

void __cdecl DisplayText(int arg1, CJassString arg2)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DC060
		jmp eax
	}
}

void __cdecl DisplayTextI(int arg1, CJassString arg2, int arg3)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DC070
		jmp eax
	}
}

void __cdecl DisplayTextII(int arg1, CJassString arg2, int arg3, int arg4)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DC080
		jmp eax
	}
}

void __cdecl DisplayTextIII(int arg1, CJassString arg2, int arg3, int arg4, int arg5)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DC090
		jmp eax
	}
}

void __cdecl DisplayTextToPlayer(HPLAYER toPlayer, float *x, float *y, CJassString message)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB900
		jmp eax
	}
}

void __cdecl DisplayTimedTextFromPlayer(HPLAYER toPlayer, float *x, float *y, float *duration, CJassString message)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBA30
		jmp eax
	}
}

void __cdecl DisplayTimedTextToPlayer(HPLAYER toPlayer, float *x, float *y, float *duration, CJassString message)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB9B0
		jmp eax
	}
}

BOOL __cdecl DoAiScriptDebug()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DC0D0
		jmp eax
	}
}

void __cdecl DoNotSaveReplay()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3550
		jmp eax
	}
}

void __cdecl EnableDragSelect(BOOL state, BOOL ui)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3B30
		jmp eax
	}
}

void __cdecl EnableMinimapFilterButtons(BOOL enableAlly, BOOL enableCreep)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3AF0
		jmp eax
	}
}

void __cdecl EnableOcclusion(BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3B90
		jmp eax
	}
}

void __cdecl EnablePreSelect(BOOL state, BOOL ui)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3B50
		jmp eax
	}
}

void __cdecl EnableSelect(BOOL state, BOOL ui)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3B70
		jmp eax
	}
}

void __cdecl EnableTrigger(HTRIGGER Trigger)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1C40
		jmp eax
	}
}

void __cdecl EnableUserControl(BOOL b)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3880
		jmp eax
	}
}

void __cdecl EnableUserUI(BOOL b)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B38A0
		jmp eax
	}
}

void __cdecl EnableWeatherEffect(HWEATHEREFFECT Effect, BOOL enable)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3E80
		jmp eax
	}
}

void __cdecl EnableWorldFogBoundary(BOOL b)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3BB0
		jmp eax
	}
}

void __cdecl EndCinematicScene()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4E20
		jmp eax
	}
}

void __cdecl EndGame(BOOL doScoreScreen)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BBBB0
		jmp eax
	}
}

void __cdecl EndThematicMusic()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3DE0
		jmp eax
	}
}

void __cdecl EnumDestructablesInRect(HRECT r, HBOOLEXPR filter, CODE actionFunc)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4A90
		jmp eax
	}
}

void __cdecl EnumItemsInRect(HRECT r, HBOOLEXPR filter, CODE actionFunc)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5110
		jmp eax
	}
}

void __cdecl ExecuteFunc(CJassString funcName)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D3F30
		jmp eax
	}
}

void __cdecl FillGuardPosts()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DCF80
		jmp eax
	}
}

HFILTERFUNC __cdecl Filter(CODE func)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB140
		jmp eax
	}
}

void __cdecl FinishUbersplat(HUBERSPLAT Splat)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B44E0
		jmp eax
	}
}

HUNIT __cdecl FirstOfGroup(HGROUP Group)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4460
		jmp eax
	}
}

void __cdecl FlashQuestDialogButton()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC920
		jmp eax
	}
}

void __cdecl FlushChildHashtable(HHASHTABLE table, int parentKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB590
		jmp eax
	}
}

void __cdecl FlushGameCache(HGAMECACHE cache)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB200
		jmp eax
	}
}

void __cdecl FlushParentHashtable(HHASHTABLE table)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB550
		jmp eax
	}
}

void __cdecl FlushStoredBoolean(HGAMECACHE cache, CJassString missionKey, CJassString key)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB320
		jmp eax
	}
}

void __cdecl FlushStoredInteger(HGAMECACHE cache, CJassString missionKey, CJassString key)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB280
		jmp eax
	}
}

void __cdecl FlushStoredMission(HGAMECACHE cache, CJassString missionKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB240
		jmp eax
	}
}

void __cdecl FlushStoredReal(HGAMECACHE cache, CJassString missionKey, CJassString key)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB2D0
		jmp eax
	}
}

void __cdecl FlushStoredString(HGAMECACHE cache, CJassString missionKey, CJassString key)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB3C0
		jmp eax
	}
}

void __cdecl FlushStoredUnit(HGAMECACHE cache, CJassString missionKey, CJassString key)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB370
		jmp eax
	}
}

void __cdecl FogEnable(BOOL enable)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB1E0
		jmp eax
	}
}

void __cdecl FogMaskEnable(BOOL enable)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB210
		jmp eax
	}
}

void __cdecl FogModifierStart(HFOGMODIFIER FogModifier)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1BC0
		jmp eax
	}
}

void __cdecl FogModifierStop(HFOGMODIFIER FogModifier)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1BE0
		jmp eax
	}
}

void __cdecl ForForce(HFORCE Force, CODE callback)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4640
		jmp eax
	}
}

void __cdecl ForGroup(HGROUP Group, CODE callback)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C44A0
		jmp eax
	}
}

void __cdecl ForceAddPlayer(HFORCE Force, HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C44E0
		jmp eax
	}
}

void __cdecl ForceCampaignSelectScreen()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC400
		jmp eax
	}
}

void __cdecl ForceCinematicSubtitles(BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4E40
		jmp eax
	}
}

void __cdecl ForceClear(HFORCE Force)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4540
		jmp eax
	}
}

void __cdecl ForceEnumAllies(HFORCE Force, HPLAYER player, HBOOLEXPR filter)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C45C0
		jmp eax
	}
}

void __cdecl ForceEnumEnemies(HFORCE Force, HPLAYER player, HBOOLEXPR filter)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4600
		jmp eax
	}
}

void __cdecl ForceEnumPlayers(HFORCE Force, HBOOLEXPR filter)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4560
		jmp eax
	}
}

void __cdecl ForceEnumPlayersCounted(HFORCE Force, HBOOLEXPR filter, int countLimit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4590
		jmp eax
	}
}

void __cdecl ForcePlayerStartLocation(HPLAYER player, int startLocIndex)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C0FA0
		jmp eax
	}
}

void __cdecl ForceQuestDialogUpdate()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3BE0
		jmp eax
	}
}

void __cdecl ForceRemovePlayer(HFORCE Force, HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4510
		jmp eax
	}
}

void __cdecl ForceUICancel()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3990
		jmp eax
	}
}

void __cdecl ForceUIKey(CJassString key)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B38E0
		jmp eax
	}
}

HAIDIFFICULTY __cdecl GetAIDifficulty(HPLAYER num)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB7E0
		jmp eax
	}
}

CJassStringSID __cdecl GetAbilityEffect(CJassString abilityString, HEFFECTTYPE t, int index)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BCAB0
		jmp eax
	}
}

CJassStringSID __cdecl GetAbilityEffectById(int AbilID, HEFFECTTYPE t, int index)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BCE40
		jmp eax
	}
}

CJassStringSID __cdecl GetAbilitySound(CJassString abilityString, HSOUNDTYPE t)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BCE60
		jmp eax
	}
}

CJassStringSID __cdecl GetAbilitySoundById(int AbilID, HSOUNDTYPE t)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BCEA0
		jmp eax
	}
}

int __cdecl GetAiPlayer()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DCFE0
		jmp eax
	}
}

HUNIT __cdecl GetAllianceTarget()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD570
		jmp eax
	}
}

int __cdecl GetAllyColorFilterState()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3A50
		jmp eax
	}
}

HUNIT __cdecl GetAttacker()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C20F0
		jmp eax
	}
}

HUNIT __cdecl GetBuilding(HPLAYER arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E2E80
		jmp eax
	}
}

HUNIT __cdecl GetBuyingUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C27B0
		jmp eax
	}
}

DWFP __cdecl GetCameraBoundMaxX()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4C90
		jmp eax
	}
}

DWFP __cdecl GetCameraBoundMaxY()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4CB0
		jmp eax
	}
}

DWFP __cdecl GetCameraBoundMinX()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4C50
		jmp eax
	}
}

DWFP __cdecl GetCameraBoundMinY()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4C70
		jmp eax
	}
}

HLOCATION __cdecl GetCameraEyePositionLoc()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D3EE0
		jmp eax
	}
}

DWFP __cdecl GetCameraEyePositionX()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4D90
		jmp eax
	}
}

DWFP __cdecl GetCameraEyePositionY()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4DC0
		jmp eax
	}
}

DWFP __cdecl GetCameraEyePositionZ()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4DF0
		jmp eax
	}
}

DWFP __cdecl GetCameraField(HCAMERAFIELD field)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4CD0
		jmp eax
	}
}

DWFP __cdecl GetCameraMargin(int Margin)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4BE0
		jmp eax
	}
}

HLOCATION __cdecl GetCameraTargetPositionLoc()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D3E90
		jmp eax
	}
}

DWFP __cdecl GetCameraTargetPositionX()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4D00
		jmp eax
	}
}

DWFP __cdecl GetCameraTargetPositionY()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4D30
		jmp eax
	}
}

DWFP __cdecl GetCameraTargetPositionZ()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4D60
		jmp eax
	}
}

HUNIT __cdecl GetCancelledStructure()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB470
		jmp eax
	}
}

HUNIT __cdecl GetChangingUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C2680
		jmp eax
	}
}

HPLAYER __cdecl GetChangingUnitPrevOwner()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C26E0
		jmp eax
	}
}

HBUTTON __cdecl GetClickedButton()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1DE0
		jmp eax
	}
}

HDIALOG __cdecl GetClickedDialog()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1E30
		jmp eax
	}
}

HUNIT __cdecl GetConstructedStructure()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB490
		jmp eax
	}
}

HUNIT __cdecl GetConstructingStructure()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB450
		jmp eax
	}
}

HMAPDENSITY __cdecl GetCreatureDensity()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BAF60
		jmp eax
	}
}

HUNIT __cdecl GetCreepCamp(int arg1, int arg2, BOOL arg3)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E3D50
		jmp eax
	}
}

BOOL __cdecl GetCreepCampFilterState()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3AA0
		jmp eax
	}
}

BOOL __cdecl GetCustomCampaignButtonVisible(int Button)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3530
		jmp eax
	}
}

HUNIT __cdecl GetDecayingUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB430
		jmp eax
	}
}

HGAMEDIFFICULTY __cdecl GetDefaultDifficulty()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B33A0
		jmp eax
	}
}

DWFP __cdecl GetDestructableLife(HDESTRUCTABLE d)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4890
		jmp eax
	}
}

DWFP __cdecl GetDestructableMaxLife(HDESTRUCTABLE d)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4920
		jmp eax
	}
}

CJassStringSID __cdecl GetDestructableName(HDESTRUCTABLE d)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4C10
		jmp eax
	}
}

DWFP __cdecl GetDestructableOccluderHeight(HDESTRUCTABLE d)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4BB0
		jmp eax
	}
}

int __cdecl GetDestructableTypeId(HDESTRUCTABLE d)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C47B0
		jmp eax
	}
}

DWFP __cdecl GetDestructableX(HDESTRUCTABLE d)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C47D0
		jmp eax
	}
}

DWFP __cdecl GetDestructableY(HDESTRUCTABLE d)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4810
		jmp eax
	}
}

HUNIT __cdecl GetDetectedUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB4B0
		jmp eax
	}
}

HUNIT __cdecl GetDyingUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB410
		jmp eax
	}
}

HUNIT __cdecl GetEnemyBase()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DDD20
		jmp eax
	}
}

HUNIT __cdecl GetEnemyExpansion()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD4F0
		jmp eax
	}
}

int __cdecl GetEnemyPower()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DC150
		jmp eax
	}
}

HUNIT __cdecl GetEnteringUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB6D0
		jmp eax
	}
}

HDESTRUCTABLE __cdecl GetEnumDestructable()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB360
		jmp eax
	}
}

HITEM __cdecl GetEnumItem()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB3A0
		jmp eax
	}
}

HPLAYER __cdecl GetEnumPlayer()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB320
		jmp eax
	}
}

HUNIT __cdecl GetEnumUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB300
		jmp eax
	}
}

DWFP __cdecl GetEventDamage()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3C40
		jmp eax
	}
}

HUNIT __cdecl GetEventDamageSource()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3C60
		jmp eax
	}
}

HPLAYER __cdecl GetEventDetectingPlayer()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3CB0
		jmp eax
	}
}

HGAMESTATE __cdecl GetEventGameState()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C2020
		jmp eax
	}
}

CJassStringSID __cdecl GetEventPlayerChatString()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C20B0
		jmp eax
	}
}

CJassStringSID __cdecl GetEventPlayerChatStringMatched()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C2080
		jmp eax
	}
}

HPLAYERSTATE __cdecl GetEventPlayerState()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C2050
		jmp eax
	}
}

HUNIT __cdecl GetEventTargetUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3D00
		jmp eax
	}
}

HUNITSTATE __cdecl GetEventUnitState()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3C10
		jmp eax
	}
}

HUNIT __cdecl GetExpansionFoe()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E2E40
		jmp eax
	}
}

HUNIT __cdecl GetExpansionPeon()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD530
		jmp eax
	}
}

int __cdecl GetExpansionX()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E2DA0
		jmp eax
	}
}

int __cdecl GetExpansionY()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E2DF0
		jmp eax
	}
}

HTIMER __cdecl GetExpiredTimer()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1D80
		jmp eax
	}
}

HDESTRUCTABLE __cdecl GetFilterDestructable()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB380
		jmp eax
	}
}

HITEM __cdecl GetFilterItem()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB3C0
		jmp eax
	}
}

HPLAYER __cdecl GetFilterPlayer()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB340
		jmp eax
	}
}

HUNIT __cdecl GetFilterUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB2E0
		jmp eax
	}
}

DWFP __cdecl GetFloatGameState(HFGAMESTATE FloatGameState)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC310
		jmp eax
	}
}

int __cdecl GetFoodMade(int unitId)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2E00
		jmp eax
	}
}

int __cdecl GetFoodUsed(int unitId)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2E10
		jmp eax
	}
}

HGAMEDIFFICULTY __cdecl GetGameDifficulty()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BAF20
		jmp eax
	}
}

HPLACEMENT __cdecl GetGamePlacement()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BAF00
		jmp eax
	}
}

HGAMESPEED __cdecl GetGameSpeed()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BAEC0
		jmp eax
	}
}

HGAMETYPE __cdecl GetGameTypeSelected()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BAE60
		jmp eax
	}
}

int __cdecl GetGoldOwned()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DE000
		jmp eax
	}
}

int __cdecl GetHandleId(HHANDLE h)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2D00
		jmp eax
	}
}

int __cdecl GetHeroAgi(HUNIT hero, BOOL includeBonuses)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C6850
		jmp eax
	}
}

int __cdecl GetHeroId()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DDF50
		jmp eax
	}
}

int __cdecl GetHeroInt(HUNIT hero, BOOL includeBonuses)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C68C0
		jmp eax
	}
}

int __cdecl GetHeroLevel(HUNIT hero)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C6ED0
		jmp eax
	}
}

int __cdecl GetHeroLevelAI()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DE0E0
		jmp eax
	}
}

CJassStringSID __cdecl GetHeroProperName(HUNIT hero)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C6FA0
		jmp eax
	}
}

int __cdecl GetHeroSkillPoints(HUNIT hero)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C6780
		jmp eax
	}
}

int __cdecl GetHeroStr(HUNIT hero, BOOL includeBonuses)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C67E0
		jmp eax
	}
}

int __cdecl GetHeroXP(HUNIT hero)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C6A10
		jmp eax
	}
}

int __cdecl GetIntegerGameState(HIGAMESTATE IntegerGameState)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC380
		jmp eax
	}
}

int __cdecl GetIssuedOrderId()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C2C80
		jmp eax
	}
}

int __cdecl GetItemCharges(HITEM item)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5050
		jmp eax
	}
}

int __cdecl GetItemLevel(HITEM item)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4E50
		jmp eax
	}
}

CJassStringSID __cdecl GetItemName(HITEM item)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4E90
		jmp eax
	}
}

HPLAYER __cdecl GetItemPlayer(HITEM item)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4E10
		jmp eax
	}
}

HITEMTYPE __cdecl GetItemType(HITEM item)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4E70
		jmp eax
	}
}

int __cdecl GetItemTypeId(HITEM i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4C60
		jmp eax
	}
}

int __cdecl GetItemUserData(HITEM item)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C50D0
		jmp eax
	}
}

DWFP __cdecl GetItemX(HITEM i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4D90
		jmp eax
	}
}

DWFP __cdecl GetItemY(HITEM i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4DD0
		jmp eax
	}
}

HUNIT __cdecl GetKillingUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C23F0
		jmp eax
	}
}

int __cdecl GetLastCommand()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E0450
		jmp eax
	}
}

int __cdecl GetLastData()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E0490
		jmp eax
	}
}

int __cdecl GetLearnedSkill()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C2210
		jmp eax
	}
}

int __cdecl GetLearnedSkillLevel()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C2250
		jmp eax
	}
}

HUNIT __cdecl GetLearningUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C21B0
		jmp eax
	}
}

HUNIT __cdecl GetLeavingUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB6F0
		jmp eax
	}
}

HUNIT __cdecl GetLevelingUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C2150
		jmp eax
	}
}

DWFP __cdecl GetLightningColorA(HLIGHTNING Bolt)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B8310
		jmp eax
	}
}

DWFP __cdecl GetLightningColorB(HLIGHTNING Bolt)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B8430
		jmp eax
	}
}

DWFP __cdecl GetLightningColorG(HLIGHTNING Bolt)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B83D0
		jmp eax
	}
}

DWFP __cdecl GetLightningColorR(HLIGHTNING Bolt)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B8370
		jmp eax
	}
}

HUNIT __cdecl GetLoadedUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C2A00
		jmp eax
	}
}

HPLAYER __cdecl GetLocalPlayer()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BBB60
		jmp eax
	}
}

int __cdecl GetLocalizedHotkey(CJassString source)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2D80
		jmp eax
	}
}

CJassStringSID __cdecl GetLocalizedString(CJassString source)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BACF0
		jmp eax
	}
}

DWFP __cdecl GetLocationX(HLOCATION Location)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C0E10
		jmp eax
	}
}

DWFP __cdecl GetLocationY(HLOCATION Location)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C0E30
		jmp eax
	}
}

DWFP __cdecl GetLocationZ(HLOCATION Location)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C0E50
		jmp eax
	}
}

HITEM __cdecl GetManipulatedItem()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C2B00
		jmp eax
	}
}

HUNIT __cdecl GetManipulatingUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C2A60
		jmp eax
	}
}

HUNIT __cdecl GetMegaTarget()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DDD60
		jmp eax
	}
}

int __cdecl GetMinesOwned()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DDFD0
		jmp eax
	}
}

int __cdecl GetNextExpansion()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E2BC0
		jmp eax
	}
}

CJassStringSID __cdecl GetObjectName(int objectId)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB6B0
		jmp eax
	}
}

HLOCATION __cdecl GetOrderPointLoc()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D1FF0
		jmp eax
	}
}

DWFP __cdecl GetOrderPointX()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C2D00
		jmp eax
	}
}

DWFP __cdecl GetOrderPointY()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C2D50
		jmp eax
	}
}

HWIDGET __cdecl GetOrderTarget()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C2DE0
		jmp eax
	}
}

HDESTRUCTABLE __cdecl GetOrderTargetDestructable()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C2F10
		jmp eax
	}
}

HITEM __cdecl GetOrderTargetItem()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3040
		jmp eax
	}
}

HUNIT __cdecl GetOrderTargetUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3170
		jmp eax
	}
}

HUNIT __cdecl GetOrderedUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB530
		jmp eax
	}
}

HPLAYER __cdecl GetOwningPlayer(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8190
		jmp eax
	}
}

BOOL __cdecl GetPlayerAlliance(HPLAYER sourcePlayer, HPLAYER otherPlayer, HALLIANCETYPE AllianceSetting)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9D70
		jmp eax
	}
}

HPLAYERCOLOR __cdecl GetPlayerColor(HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1240
		jmp eax
	}
}

HMAPCONTROL __cdecl GetPlayerController(HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C12B0
		jmp eax
	}
}

DWFP __cdecl GetPlayerHandicap(HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9E10
		jmp eax
	}
}

DWFP __cdecl GetPlayerHandicapXP(HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9EC0
		jmp eax
	}
}

int __cdecl GetPlayerId(HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9640
		jmp eax
	}
}

CJassStringSID __cdecl GetPlayerName(HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C0F60
		jmp eax
	}
}

HRACE __cdecl GetPlayerRace(HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9620
		jmp eax
	}
}

int __cdecl GetPlayerScore(HPLAYER player, HPLAYERSCORE PlayerScore)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9B70
		jmp eax
	}
}

BOOL __cdecl GetPlayerSelectable(HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1290
		jmp eax
	}
}

HPLAYERSLOTSTATE __cdecl GetPlayerSlotState(HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C12D0
		jmp eax
	}
}

int __cdecl GetPlayerStartLocation(HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C0FD0
		jmp eax
	}
}

DWFP __cdecl GetPlayerStartLocationX(HPLAYER arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C0FF0
		jmp eax
	}
}

DWFP __cdecl GetPlayerStartLocationY(HPLAYER arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1020
		jmp eax
	}
}

int __cdecl GetPlayerState(HPLAYER player, HPLAYERSTATE PlayerState)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9B00
		jmp eax
	}
}

int __cdecl GetPlayerStructureCount(HPLAYER player, BOOL includeIncomplete)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C98C0
		jmp eax
	}
}

int __cdecl GetPlayerTaxRate(HPLAYER sourcePlayer, HPLAYER otherPlayer, HPLAYERSTATE Resource)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1150
		jmp eax
	}
}

int __cdecl GetPlayerTeam(HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C0F40
		jmp eax
	}
}

int __cdecl GetPlayerTechCount(HPLAYER player, int techid, BOOL specificonly)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C97A0
		jmp eax
	}
}

int __cdecl GetPlayerTechMaxAllowed(HPLAYER player, int techid)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9690
		jmp eax
	}
}

BOOL __cdecl GetPlayerTechResearched(HPLAYER player, int techid, BOOL specificonly)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9770
		jmp eax
	}
}

int __cdecl GetPlayerTypedUnitCount(HPLAYER player, CJassString unitName, BOOL includeIncomplete, BOOL includeUpgrades)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9850
		jmp eax
	}
}

int __cdecl GetPlayerUnitCount(HPLAYER player, BOOL includeIncomplete)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9820
		jmp eax
	}
}

int __cdecl GetPlayerUnitTypeCount(HPLAYER arg1, int arg2)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E2B60
		jmp eax
	}
}

int __cdecl GetPlayers()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BAE00
		jmp eax
	}
}

int __cdecl GetRandomInt(int lowBound, int highBound)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3560
		jmp eax
	}
}

DWFP __cdecl GetRandomReal(float *lowBound, float *highBound)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B35A0
		jmp eax
	}
}

DWFP __cdecl GetRectCenterX(HRECT Rect)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C18E0
		jmp eax
	}
}

DWFP __cdecl GetRectCenterY(HRECT Rect)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1910
		jmp eax
	}
}

DWFP __cdecl GetRectMaxX(HRECT Rect)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1980
		jmp eax
	}
}

DWFP __cdecl GetRectMaxY(HRECT Rect)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C19A0
		jmp eax
	}
}

DWFP __cdecl GetRectMinX(HRECT Rect)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1940
		jmp eax
	}
}

DWFP __cdecl GetRectMinY(HRECT Rect)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1960
		jmp eax
	}
}

HUNIT __cdecl GetRescuer()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C2390
		jmp eax
	}
}

int __cdecl GetResearched()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C2870
		jmp eax
	}
}

HUNIT __cdecl GetResearchingUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB4D0
		jmp eax
	}
}

int __cdecl GetResourceAmount(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C78B0
		jmp eax
	}
}

HMAPDENSITY __cdecl GetResourceDensity()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BAF40
		jmp eax
	}
}

HUNIT __cdecl GetRevivableUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C2290
		jmp eax
	}
}

HUNIT __cdecl GetRevivingUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C22F0
		jmp eax
	}
}

CJassStringSID __cdecl GetSaveBasicFilename()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1F80
		jmp eax
	}
}

HUNIT __cdecl GetSellingUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C2560
		jmp eax
	}
}

HITEM __cdecl GetSoldItem()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C25F0
		jmp eax
	}
}

HUNIT __cdecl GetSoldUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C2750
		jmp eax
	}
}

int __cdecl GetSoundDuration(HSOUND soundHandle)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCF20
		jmp eax
	}
}

int __cdecl GetSoundFileDuration(CJassString musicFileName)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3E20
		jmp eax
	}
}

BOOL __cdecl GetSoundIsLoading(HSOUND soundHandle)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCF60
		jmp eax
	}
}

BOOL __cdecl GetSoundIsPlaying(HSOUND soundHandle)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCF40
		jmp eax
	}
}

HABILITY __cdecl GetSpellAbility()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3380
		jmp eax
	}
}

int __cdecl GetSpellAbilityId()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C32A0
		jmp eax
	}
}

HUNIT __cdecl GetSpellAbilityUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3470
		jmp eax
	}
}

HDESTRUCTABLE __cdecl GetSpellTargetDestructable()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3760
		jmp eax
	}
}

HITEM __cdecl GetSpellTargetItem()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C38F0
		jmp eax
	}
}

HLOCATION __cdecl GetSpellTargetLoc()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D2090
		jmp eax
	}
}

HUNIT __cdecl GetSpellTargetUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3A80
		jmp eax
	}
}

DWFP __cdecl GetSpellTargetX()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3580
		jmp eax
	}
}

DWFP __cdecl GetSpellTargetY()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3670
		jmp eax
	}
}

HSTARTLOCPRIO __cdecl GetStartLocPrio(int StartLoc, int prioSlotIndex)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB030
		jmp eax
	}
}

int __cdecl GetStartLocPrioSlot(int StartLoc, int prioSlotIndex)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB000
		jmp eax
	}
}

HLOCATION __cdecl GetStartLocationLoc(int StartLocation)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D04B0
		jmp eax
	}
}

DWFP __cdecl GetStartLocationX(int StartLocation)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB060
		jmp eax
	}
}

DWFP __cdecl GetStartLocationY(int StartLocation)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB080
		jmp eax
	}
}

BOOL __cdecl GetStoredBoolean(HGAMECACHE cache, CJassString missionKey, CJassString key)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA920
		jmp eax
	}
}

int __cdecl GetStoredInteger(HGAMECACHE cache, CJassString missionKey, CJassString key)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA870
		jmp eax
	}
}

DWFP __cdecl GetStoredReal(HGAMECACHE cache, CJassString missionKey, CJassString key)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA8C0
		jmp eax
	}
}

CJassStringSID __cdecl GetStoredString(HGAMECACHE cache, CJassString missionKey, CJassString key)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAA40
		jmp eax
	}
}

HUNIT __cdecl GetSummonedUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C2950
		jmp eax
	}
}

HUNIT __cdecl GetSummoningUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C28F0
		jmp eax
	}
}

int __cdecl GetTeams()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BADE0
		jmp eax
	}
}

int __cdecl GetTerrainCliffLevel(float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4190
		jmp eax
	}
}

int __cdecl GetTerrainType(float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BCED0
		jmp eax
	}
}

int __cdecl GetTerrainVariance(float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4250
		jmp eax
	}
}

DWFP __cdecl GetTimeOfDayScale()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC4B0
		jmp eax
	}
}

HPLAYER __cdecl GetTournamentFinishNowPlayer()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1F00
		jmp eax
	}
}

int __cdecl GetTournamentFinishNowRule()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1ED0
		jmp eax
	}
}

DWFP __cdecl GetTournamentFinishSoonTimeRemaining()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1EA0
		jmp eax
	}
}

int __cdecl GetTournamentScore(HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1F60
		jmp eax
	}
}

int __cdecl GetTownUnitCount(int arg1, int arg2, BOOL arg3)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD0C0
		jmp eax
	}
}

HUNIT __cdecl GetTrainedUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C2500
		jmp eax
	}
}

int __cdecl GetTrainedUnitType()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C2450
		jmp eax
	}
}

HUNIT __cdecl GetTransportUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C29A0
		jmp eax
	}
}

HDESTRUCTABLE __cdecl GetTriggerDestructable()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1D20
		jmp eax
	}
}

int __cdecl GetTriggerEvalCount(HTRIGGER Trigger)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1CE0
		jmp eax
	}
}

HEVENTID __cdecl GetTriggerEventId()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB2C0
		jmp eax
	}
}

int __cdecl GetTriggerExecCount(HTRIGGER Trigger)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1D00
		jmp eax
	}
}

HPLAYER __cdecl GetTriggerPlayer()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB280
		jmp eax
	}
}

HUNIT __cdecl GetTriggerUnit()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB240
		jmp eax
	}
}

HWIDGET __cdecl GetTriggerWidget()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB260
		jmp eax
	}
}

HREGION __cdecl GetTriggeringRegion()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3D50
		jmp eax
	}
}

HTRACKABLE __cdecl GetTriggeringTrackable()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3DA0
		jmp eax
	}
}

HTRIGGER __cdecl GetTriggeringTrigger()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB2A0
		jmp eax
	}
}

int __cdecl GetUnitAbilityLevel(HUNIT unit, int abilcode)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7290
		jmp eax
	}
}

DWFP __cdecl GetUnitAcquireRange(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5D10
		jmp eax
	}
}

int __cdecl GetUnitBuildTime(int arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD190
		jmp eax
	}
}

int __cdecl GetUnitCount(int arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD050
		jmp eax
	}
}

int __cdecl GetUnitCountDone(int arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD010
		jmp eax
	}
}

int __cdecl GetUnitCurrentOrder(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7780
		jmp eax
	}
}

DWFP __cdecl GetUnitDefaultAcquireRange(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5DC0
		jmp eax
	}
}

DWFP __cdecl GetUnitDefaultFlyHeight(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5E50
		jmp eax
	}
}

DWFP __cdecl GetUnitDefaultMoveSpeed(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5870
		jmp eax
	}
}

DWFP __cdecl GetUnitDefaultPropWindow(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5E20
		jmp eax
	}
}

DWFP __cdecl GetUnitDefaultTurnSpeed(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5DF0
		jmp eax
	}
}

DWFP __cdecl GetUnitFacing(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5790
		jmp eax
	}
}

DWFP __cdecl GetUnitFlyHeight(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5DA0
		jmp eax
	}
}

int __cdecl GetUnitFoodMade(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5460
		jmp eax
	}
}

int __cdecl GetUnitFoodUsed(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5440
		jmp eax
	}
}

int __cdecl GetUnitGoldCost(int arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD1E0
		jmp eax
	}
}

int __cdecl GetUnitLevel(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C6F30
		jmp eax
	}
}

HLOCATION __cdecl GetUnitLoc(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D2AE0
		jmp eax
	}
}

DWFP __cdecl GetUnitMoveSpeed(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5810
		jmp eax
	}
}

CJassStringSID __cdecl GetUnitName(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5950
		jmp eax
	}
}

int __cdecl GetUnitPointValue(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5E80
		jmp eax
	}
}

int __cdecl GetUnitPointValueByType(int unitType)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2E20
		jmp eax
	}
}

DWFP __cdecl GetUnitPropWindow(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5D70
		jmp eax
	}
}

HRACE __cdecl GetUnitRace(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5930
		jmp eax
	}
}

HDESTRUCTABLE __cdecl GetUnitRallyDestructable(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5690
		jmp eax
	}
}

HLOCATION __cdecl GetUnitRallyPoint(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D2B40
		jmp eax
	}
}

HUNIT __cdecl GetUnitRallyUnit(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5590
		jmp eax
	}
}

DWFP __cdecl GetUnitState(HUNIT unit, HUNITSTATE UnitState)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5400
		jmp eax
	}
}

DWFP __cdecl GetUnitTurnSpeed(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5D40
		jmp eax
	}
}

int __cdecl GetUnitTypeId(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5910
		jmp eax
	}
}

int __cdecl GetUnitUserData(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C94F0
		jmp eax
	}
}

int __cdecl GetUnitWoodCost(int arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD240
		jmp eax
	}
}

DWFP __cdecl GetUnitX(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5510
		jmp eax
	}
}

DWFP __cdecl GetUnitY(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5550
		jmp eax
	}
}

int __cdecl GetUpgradeGoldCost(int arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD2A0
		jmp eax
	}
}

int __cdecl GetUpgradeLevel(int arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD130
		jmp eax
	}
}

int __cdecl GetUpgradeWoodCost(int arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD2C0
		jmp eax
	}
}

DWFP __cdecl GetWidgetLife(HWIDGET widget)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4660
		jmp eax
	}
}

DWFP __cdecl GetWidgetX(HWIDGET widget)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C46B0
		jmp eax
	}
}

DWFP __cdecl GetWidgetY(HWIDGET widget)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C46F0
		jmp eax
	}
}

HPLAYER __cdecl GetWinningPlayer()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB3E0
		jmp eax
	}
}

HRECT __cdecl GetWorldBounds()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D0D60
		jmp eax
	}
}

void __cdecl GroupAddUnit(HGROUP Group, HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3FC0
		jmp eax
	}
}

void __cdecl GroupClear(HGROUP Group)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4020
		jmp eax
	}
}

void __cdecl GroupEnumUnitsInRange(HGROUP Group, float *x, float *y, float *radius, HBOOLEXPR filter)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C41A0
		jmp eax
	}
}

void __cdecl GroupEnumUnitsInRangeCounted(HGROUP Group, float *x, float *y, float *radius, HBOOLEXPR filter, int countLimit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4230
		jmp eax
	}
}

void __cdecl GroupEnumUnitsInRangeOfLoc(HGROUP Group, HLOCATION Location, float *radius, HBOOLEXPR filter)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C41E0
		jmp eax
	}
}

void __cdecl GroupEnumUnitsInRangeOfLocCounted(HGROUP Group, HLOCATION Location, float *radius, HBOOLEXPR filter, int countLimit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4270
		jmp eax
	}
}

void __cdecl GroupEnumUnitsInRect(HGROUP Group, HRECT r, HBOOLEXPR filter)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C40E0
		jmp eax
	}
}

void __cdecl GroupEnumUnitsInRectCounted(HGROUP Group, HRECT r, HBOOLEXPR filter, int countLimit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4140
		jmp eax
	}
}

void __cdecl GroupEnumUnitsOfPlayer(HGROUP Group, HPLAYER player, HBOOLEXPR filter)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C42C0
		jmp eax
	}
}

void __cdecl GroupEnumUnitsOfType(HGROUP Group, CJassString unitname, HBOOLEXPR filter)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4040
		jmp eax
	}
}

void __cdecl GroupEnumUnitsOfTypeCounted(HGROUP Group, CJassString unitname, HBOOLEXPR filter, int countLimit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4090
		jmp eax
	}
}

void __cdecl GroupEnumUnitsSelected(HGROUP Group, HPLAYER player, HBOOLEXPR filter)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CE590
		jmp eax
	}
}

BOOL __cdecl GroupImmediateOrder(HGROUP Group, CJassString order)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4320
		jmp eax
	}
}

BOOL __cdecl GroupImmediateOrderById(HGROUP Group, int order)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4300
		jmp eax
	}
}

BOOL __cdecl GroupPointOrder(HGROUP Group, CJassString order, float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4370
		jmp eax
	}
}

BOOL __cdecl GroupPointOrderById(HGROUP Group, int order, float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4340
		jmp eax
	}
}

BOOL __cdecl GroupPointOrderByIdLoc(HGROUP Group, int order, HLOCATION Location)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4390
		jmp eax
	}
}

BOOL __cdecl GroupPointOrderLoc(HGROUP Group, CJassString order, HLOCATION Location)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C43E0
		jmp eax
	}
}

void __cdecl GroupRemoveUnit(HGROUP Group, HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3FF0
		jmp eax
	}
}

BOOL __cdecl GroupTargetOrder(HGROUP Group, CJassString order, HWIDGET targetWidget)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4440
		jmp eax
	}
}

BOOL __cdecl GroupTargetOrderById(HGROUP Group, int order, HWIDGET targetWidget)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4400
		jmp eax
	}
}

void __cdecl GroupTimedLife(BOOL arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E2D60
		jmp eax
	}
}

void __cdecl HarvestGold(int arg1, int arg2)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD5E0
		jmp eax
	}
}

void __cdecl HarvestWood(int arg1, int arg2)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD630
		jmp eax
	}
}

BOOL __cdecl HaveSavedBoolean(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB140
		jmp eax
	}
}

BOOL __cdecl HaveSavedHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB1C0
		jmp eax
	}
}

BOOL __cdecl HaveSavedInteger(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB0C0
		jmp eax
	}
}

BOOL __cdecl HaveSavedReal(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB100
		jmp eax
	}
}

BOOL __cdecl HaveSavedString(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB180
		jmp eax
	}
}

BOOL __cdecl HaveStoredBoolean(HGAMECACHE cache, CJassString missionKey, CJassString key)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAFD0
		jmp eax
	}
}

BOOL __cdecl HaveStoredInteger(HGAMECACHE cache, CJassString missionKey, CJassString key)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAF30
		jmp eax
	}
}

BOOL __cdecl HaveStoredReal(HGAMECACHE cache, CJassString missionKey, CJassString key)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAF80
		jmp eax
	}
}

BOOL __cdecl HaveStoredString(HGAMECACHE cache, CJassString missionKey, CJassString key)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB070
		jmp eax
	}
}

BOOL __cdecl HaveStoredUnit(HGAMECACHE cache, CJassString missionKey, CJassString key)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB020
		jmp eax
	}
}

DWFP __cdecl I2R(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2CC0
		jmp eax
	}
}

CJassStringSID __cdecl I2S(int i)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BAAA0
		jmp eax
	}
}

int __cdecl IgnoredUnits(int arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DCE80
		jmp eax
	}
}

int __cdecl IncUnitAbilityLevel(HUNIT unit, int abilcode)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7130
		jmp eax
	}
}

void __cdecl InitAssault()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD990
		jmp eax
	}
}

HGAMECACHE __cdecl InitGameCache(CJassString campaignFile)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D2CC0
		jmp eax
	}
}

HHASHTABLE __cdecl InitHashtable()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D2DF0
		jmp eax
	}
}

BOOL __cdecl IsCineFilterDisplayed()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B5150
		jmp eax
	}
}

BOOL __cdecl IsDestructableInvulnerable(HDESTRUCTABLE d)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4790
		jmp eax
	}
}

BOOL __cdecl IsFogEnabled()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB200
		jmp eax
	}
}

BOOL __cdecl IsFogMaskEnabled()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB230
		jmp eax
	}
}

BOOL __cdecl IsFoggedToPlayer(float *x, float *y, HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9980
		jmp eax
	}
}

BOOL __cdecl IsGameTypeSupported(HGAMETYPE GameType)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BAE40
		jmp eax
	}
}

BOOL __cdecl IsHeroUnitId(int unitId)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2E90
		jmp eax
	}
}

BOOL __cdecl IsItemIdPawnable(int itemId)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2DF0
		jmp eax
	}
}

BOOL __cdecl IsItemIdPowerup(int itemId)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2DD0
		jmp eax
	}
}

BOOL __cdecl IsItemIdSellable(int itemId)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2DE0
		jmp eax
	}
}

BOOL __cdecl IsItemInvulnerable(HITEM item)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4F00
		jmp eax
	}
}

BOOL __cdecl IsItemOwned(HITEM item)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4F90
		jmp eax
	}
}

BOOL __cdecl IsItemPawnable(HITEM item)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5010
		jmp eax
	}
}

BOOL __cdecl IsItemPowerup(HITEM item)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4FD0
		jmp eax
	}
}

BOOL __cdecl IsItemSellable(HITEM item)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4FF0
		jmp eax
	}
}

BOOL __cdecl IsItemVisible(HITEM item)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4F70
		jmp eax
	}
}

BOOL __cdecl IsLeaderboardDisplayed(HLEADERBOARD lb)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC220
		jmp eax
	}
}

BOOL __cdecl IsLocationFoggedToPlayer(HLOCATION Location, HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C99D0
		jmp eax
	}
}

BOOL __cdecl IsLocationInRegion(HREGION Region, HLOCATION Location)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C16B0
		jmp eax
	}
}

BOOL __cdecl IsLocationMaskedToPlayer(HLOCATION Location, HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9A60
		jmp eax
	}
}

BOOL __cdecl IsLocationVisibleToPlayer(HLOCATION Location, HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9940
		jmp eax
	}
}

BOOL __cdecl IsMapFlagSet(HMAPFLAG MapFlag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BAEA0
		jmp eax
	}
}

BOOL __cdecl IsMaskedToPlayer(float *x, float *y, HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9A10
		jmp eax
	}
}

BOOL __cdecl IsMultiboardDisplayed(HMULTIBOARD lb)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC690
		jmp eax
	}
}

BOOL __cdecl IsMultiboardMinimized(HMULTIBOARD lb)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC6D0
		jmp eax
	}
}

BOOL __cdecl IsNoDefeatCheat()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC8F0
		jmp eax
	}
}

BOOL __cdecl IsNoVictoryCheat()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC8C0
		jmp eax
	}
}

BOOL __cdecl IsPlayerAlly(HPLAYER player, HPLAYER otherPlayer)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9530
		jmp eax
	}
}

BOOL __cdecl IsPlayerEnemy(HPLAYER player, HPLAYER otherPlayer)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9580
		jmp eax
	}
}

BOOL __cdecl IsPlayerInForce(HPLAYER player, HFORCE Force)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C95D0
		jmp eax
	}
}

BOOL __cdecl IsPlayerObserver(HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9600
		jmp eax
	}
}

BOOL __cdecl IsPlayerRacePrefSet(HPLAYER player, HRACEPREFERENCE pref)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1260
		jmp eax
	}
}

BOOL __cdecl IsPointBlighted(float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4550
		jmp eax
	}
}

BOOL __cdecl IsPointInRegion(HREGION Region, float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1690
		jmp eax
	}
}

BOOL __cdecl IsQuestCompleted(HQUEST Quest)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBCC0
		jmp eax
	}
}

BOOL __cdecl IsQuestDiscovered(HQUEST Quest)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBCE0
		jmp eax
	}
}

BOOL __cdecl IsQuestEnabled(HQUEST Quest)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBD20
		jmp eax
	}
}

BOOL __cdecl IsQuestFailed(HQUEST Quest)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBD00
		jmp eax
	}
}

BOOL __cdecl IsQuestItemCompleted(HQUESTITEM QuestItem)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBD90
		jmp eax
	}
}

BOOL __cdecl IsQuestRequired(HQUEST Quest)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBCA0
		jmp eax
	}
}

BOOL __cdecl IsSuspendedXP(HUNIT hero)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C6E70
		jmp eax
	}
}

BOOL __cdecl IsTerrainPathable(float *x, float *y, HPATHINGTYPE t)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B42D0
		jmp eax
	}
}

BOOL __cdecl IsTimerDialogDisplayed(HTIMERDIALOG Dialog)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBF70
		jmp eax
	}
}

BOOL __cdecl IsTowered(HUNIT arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E0950
		jmp eax
	}
}

BOOL __cdecl IsTriggerEnabled(HTRIGGER Trigger)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1C80
		jmp eax
	}
}

BOOL __cdecl IsTriggerWaitOnSleeps(HTRIGGER Trigger)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1CC0
		jmp eax
	}
}

BOOL __cdecl IsUnit(HUNIT unit, HUNIT SpecifiedUnit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8020
		jmp eax
	}
}

BOOL __cdecl IsUnitAlly(HUNIT unit, HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7A70
		jmp eax
	}
}

BOOL __cdecl IsUnitDetected(HUNIT unit, HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7C80
		jmp eax
	}
}

BOOL __cdecl IsUnitEnemy(HUNIT unit, HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7AD0
		jmp eax
	}
}

BOOL __cdecl IsUnitFogged(HUNIT unit, HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7D00
		jmp eax
	}
}

BOOL __cdecl IsUnitHidden(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7B30
		jmp eax
	}
}

BOOL __cdecl IsUnitIdType(int unitId, HUNITTYPE UnitType)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B7F60
		jmp eax
	}
}

BOOL __cdecl IsUnitIllusion(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7B50
		jmp eax
	}
}

BOOL __cdecl IsUnitInForce(HUNIT unit, HFORCE Force)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C79C0
		jmp eax
	}
}

BOOL __cdecl IsUnitInGroup(HUNIT unit, HGROUP Group)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7A00
		jmp eax
	}
}

BOOL __cdecl IsUnitInRange(HUNIT unit, HUNIT otherUnit, float *distance)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8090
		jmp eax
	}
}

BOOL __cdecl IsUnitInRangeLoc(HUNIT unit, HLOCATION Location, float *distance)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8140
		jmp eax
	}
}

BOOL __cdecl IsUnitInRangeXY(HUNIT unit, float *x, float *y, float *distance)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C80E0
		jmp eax
	}
}

BOOL __cdecl IsUnitInRegion(HREGION Region, HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1660
		jmp eax
	}
}

BOOL __cdecl IsUnitInTransport(HUNIT unit, HUNIT Transport)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7B70
		jmp eax
	}
}

BOOL __cdecl IsUnitInvisible(HUNIT unit, HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7CC0
		jmp eax
	}
}

BOOL __cdecl IsUnitLoaded(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7BA0
		jmp eax
	}
}

BOOL __cdecl IsUnitMasked(HUNIT unit, HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7D80
		jmp eax
	}
}

BOOL __cdecl IsUnitOwnedByPlayer(HUNIT unit, HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7A30
		jmp eax
	}
}

BOOL __cdecl IsUnitPaused(HUNIT hero)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C73A0
		jmp eax
	}
}

BOOL __cdecl IsUnitRace(HUNIT unit, HRACE Race)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7E60
		jmp eax
	}
}

BOOL __cdecl IsUnitSelected(HUNIT unit, HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7E00
		jmp eax
	}
}

BOOL __cdecl IsUnitType(HUNIT unit, HUNITTYPE UnitType)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7E90
		jmp eax
	}
}

BOOL __cdecl IsUnitVisible(HUNIT unit, HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7AF0
		jmp eax
	}
}

BOOL __cdecl IsVisibleToPlayer(float *x, float *y, HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C98F0
		jmp eax
	}
}

BOOL __cdecl IssueBuildOrder(HUNIT Peon, CJassString unitToBuild, float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8E80
		jmp eax
	}
}

BOOL __cdecl IssueBuildOrderById(HUNIT Peon, int unitId, float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8BE0
		jmp eax
	}
}

BOOL __cdecl IssueImmediateOrder(HUNIT unit, CJassString order)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8D80
		jmp eax
	}
}

BOOL __cdecl IssueImmediateOrderById(HUNIT unit, int order)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8900
		jmp eax
	}
}

BOOL __cdecl IssueInstantPointOrder(HUNIT unit, CJassString order, float *x, float *y, HWIDGET instantTargetWidget)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8E40
		jmp eax
	}
}

BOOL __cdecl IssueInstantPointOrderById(HUNIT unit, int order, float *x, float *y, HWIDGET instantTargetWidget)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8A20
		jmp eax
	}
}

BOOL __cdecl IssueInstantTargetOrder(HUNIT unit, CJassString order, HWIDGET targetWidget, HWIDGET instantTargetWidget)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8E60
		jmp eax
	}
}

BOOL __cdecl IssueInstantTargetOrderById(HUNIT unit, int order, HWIDGET targetWidget, HWIDGET instantTargetWidget)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8AB0
		jmp eax
	}
}

BOOL __cdecl IssueNeutralImmediateOrder(HPLAYER forWhichPlayer, HUNIT neutralStructure, CJassString unitToBuild)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8EA0
		jmp eax
	}
}

BOOL __cdecl IssueNeutralImmediateOrderById(HPLAYER forWhichPlayer, HUNIT neutralStructure, int unitId)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8CA0
		jmp eax
	}
}

BOOL __cdecl IssueNeutralPointOrder(HPLAYER forWhichPlayer, HUNIT neutralStructure, CJassString unitToBuild, float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8EC0
		jmp eax
	}
}

BOOL __cdecl IssueNeutralPointOrderById(HPLAYER forWhichPlayer, HUNIT neutralStructure, int unitId, float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8CE0
		jmp eax
	}
}

BOOL __cdecl IssueNeutralTargetOrder(HPLAYER forWhichPlayer, HUNIT neutralStructure, CJassString unitToBuild, HWIDGET target)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8EE0
		jmp eax
	}
}

BOOL __cdecl IssueNeutralTargetOrderById(HPLAYER forWhichPlayer, HUNIT neutralStructure, int unitId, HWIDGET target)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8D30
		jmp eax
	}
}

BOOL __cdecl IssuePointOrder(HUNIT unit, CJassString order, float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8DA0
		jmp eax
	}
}

BOOL __cdecl IssuePointOrderById(HUNIT unit, int order, float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8940
		jmp eax
	}
}

BOOL __cdecl IssuePointOrderByIdLoc(HUNIT unit, int order, HLOCATION Location)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8980
		jmp eax
	}
}

BOOL __cdecl IssuePointOrderLoc(HUNIT unit, CJassString order, HLOCATION Location)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8DC0
		jmp eax
	}
}

BOOL __cdecl IssueTargetOrder(HUNIT unit, CJassString order, HWIDGET targetWidget)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8E20
		jmp eax
	}
}

BOOL __cdecl IssueTargetOrderById(HUNIT unit, int order, HWIDGET targetWidget)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C89D0
		jmp eax
	}
}

void __cdecl ItemPoolAddItemType(HITEMPOOL ItemPool, int itemId, float *weight)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB6C0
		jmp eax
	}
}

void __cdecl ItemPoolRemoveItemType(HITEMPOOL ItemPool, int itemId)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB6E0
		jmp eax
	}
}

void __cdecl KillDestructable(HDESTRUCTABLE d)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4750
		jmp eax
	}
}

void __cdecl KillSoundWhenDone(HSOUND soundHandle)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCED0
		jmp eax
	}
}

void __cdecl KillUnit(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8040
		jmp eax
	}
}

void __cdecl LeaderboardAddItem(HLEADERBOARD lb, CJassString label, int value, HPLAYER p)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC060
		jmp eax
	}
}

void __cdecl LeaderboardClear(HLEADERBOARD lb)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC1B0
		jmp eax
	}
}

void __cdecl LeaderboardDisplay(HLEADERBOARD lb, BOOL show)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC1D0
		jmp eax
	}
}

int __cdecl LeaderboardGetItemCount(HLEADERBOARD lb)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC000
		jmp eax
	}
}

CJassStringSID __cdecl LeaderboardGetLabelText(HLEADERBOARD lb)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC2F0
		jmp eax
	}
}

int __cdecl LeaderboardGetPlayerIndex(HLEADERBOARD lb, HPLAYER p)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC2A0
		jmp eax
	}
}

BOOL __cdecl LeaderboardHasPlayerItem(HLEADERBOARD lb, HPLAYER p)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC250
		jmp eax
	}
}

void __cdecl LeaderboardRemoveItem(HLEADERBOARD lb, int index)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC0B0
		jmp eax
	}
}

void __cdecl LeaderboardRemovePlayerItem(HLEADERBOARD lb, HPLAYER p)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC0E0
		jmp eax
	}
}

void __cdecl LeaderboardSetItemLabel(HLEADERBOARD lb, int item, CJassString val)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC520
		jmp eax
	}
}

void __cdecl LeaderboardSetItemLabelColor(HLEADERBOARD lb, int item, int red, int green, int blue, int alpha)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC5B0
		jmp eax
	}
}

void __cdecl LeaderboardSetItemStyle(HLEADERBOARD lb, int item, BOOL showLabel, BOOL showValue, BOOL showIcon)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC560
		jmp eax
	}
}

void __cdecl LeaderboardSetItemValue(HLEADERBOARD lb, int item, int val)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC4F0
		jmp eax
	}
}

void __cdecl LeaderboardSetItemValueColor(HLEADERBOARD lb, int item, int red, int green, int blue, int alpha)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC600
		jmp eax
	}
}

void __cdecl LeaderboardSetLabel(HLEADERBOARD lb, CJassString label)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC3D0
		jmp eax
	}
}

void __cdecl LeaderboardSetLabelColor(HLEADERBOARD lb, int red, int green, int blue, int alpha)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC400
		jmp eax
	}
}

void __cdecl LeaderboardSetSizeByItemCount(HLEADERBOARD lb, int count)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC030
		jmp eax
	}
}

void __cdecl LeaderboardSetStyle(HLEADERBOARD lb, BOOL showLabel, BOOL showNames, BOOL showValues, BOOL showIcons)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC4A0
		jmp eax
	}
}

void __cdecl LeaderboardSetValueColor(HLEADERBOARD lb, int red, int green, int blue, int alpha)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC450
		jmp eax
	}
}

void __cdecl LeaderboardSortItemsByLabel(HLEADERBOARD lb, BOOL ascending)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC180
		jmp eax
	}
}

void __cdecl LeaderboardSortItemsByPlayer(HLEADERBOARD lb, BOOL ascending)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC150
		jmp eax
	}
}

void __cdecl LeaderboardSortItemsByValue(HLEADERBOARD lb, BOOL ascending)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC120
		jmp eax
	}
}

HABILITY __cdecl LoadAbilityHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CEA60
		jmp eax
	}
}

BOOL __cdecl LoadBoolean(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAB10
		jmp eax
	}
}

HBOOLEXPR __cdecl LoadBooleanExprHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAD70
		jmp eax
	}
}

HBUTTON __cdecl LoadButtonHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CADD0
		jmp eax
	}
}

HDEFEATCONDITION __cdecl LoadDefeatConditionHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CEB20
		jmp eax
	}
}

HDESTRUCTABLE __cdecl LoadDestructableHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CABD0
		jmp eax
	}
}

HDIALOG __cdecl LoadDialogHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CADB0
		jmp eax
	}
}

HEFFECT __cdecl LoadEffectHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CEA80
		jmp eax
	}
}

HFOGMODIFIER __cdecl LoadFogModifierHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAEF0
		jmp eax
	}
}

HFOGSTATE __cdecl LoadFogStateHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAED0
		jmp eax
	}
}

HFORCE __cdecl LoadForceHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CACF0
		jmp eax
	}
}

void __cdecl LoadGame(CJassString saveFileName, BOOL doScoreScreen)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BBE60
		jmp eax
	}
}

HGROUP __cdecl LoadGroupHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAD10
		jmp eax
	}
}

HHASHTABLE __cdecl LoadHashtableHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAF10
		jmp eax
	}
}

HIMAGE __cdecl LoadImageHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAE90
		jmp eax
	}
}

int __cdecl LoadInteger(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAA90
		jmp eax
	}
}

HITEM __cdecl LoadItemHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CABF0
		jmp eax
	}
}

HITEMPOOL __cdecl LoadItemPoolHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CEAC0
		jmp eax
	}
}

HLEADERBOARD __cdecl LoadLeaderboardHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CEB60
		jmp eax
	}
}

HLIGHTNING __cdecl LoadLightningHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAE70
		jmp eax
	}
}

HLOCATION __cdecl LoadLocationHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAD30
		jmp eax
	}
}

HMULTIBOARD __cdecl LoadMultiboardHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CEB80
		jmp eax
	}
}

HMULTIBOARDITEM __cdecl LoadMultiboardItemHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CEBA0
		jmp eax
	}
}

HPLAYER __cdecl LoadPlayerHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAB90
		jmp eax
	}
}

HQUEST __cdecl LoadQuestHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CEAE0
		jmp eax
	}
}

HQUESTITEM __cdecl LoadQuestItemHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CEB00
		jmp eax
	}
}

DWFP __cdecl LoadReal(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAAD0
		jmp eax
	}
}

HRECT __cdecl LoadRectHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAD50
		jmp eax
	}
}

HREGION __cdecl LoadRegionHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAC50
		jmp eax
	}
}

HSOUND __cdecl LoadSoundHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAD90
		jmp eax
	}
}

CJassStringSID __cdecl LoadStr(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAB50
		jmp eax
	}
}

HTEXTTAG __cdecl LoadTextTagHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAE50
		jmp eax
	}
}

HTIMERDIALOG __cdecl LoadTimerDialogHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CEB40
		jmp eax
	}
}

HTIMER __cdecl LoadTimerHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAC30
		jmp eax
	}
}

HTRACKABLE __cdecl LoadTrackableHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CEBC0
		jmp eax
	}
}

HTRIGGERACTION __cdecl LoadTriggerActionHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CACB0
		jmp eax
	}
}

HTRIGGERCONDITION __cdecl LoadTriggerConditionHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAC90
		jmp eax
	}
}

HEVENT __cdecl LoadTriggerEventHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CACD0
		jmp eax
	}
}

HTRIGGER __cdecl LoadTriggerHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAC70
		jmp eax
	}
}

HUBERSPLAT __cdecl LoadUbersplatHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAEB0
		jmp eax
	}
}

HUNIT __cdecl LoadUnitHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CAC10
		jmp eax
	}
}

HUNITPOOL __cdecl LoadUnitPoolHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CEAA0
		jmp eax
	}
}

HWIDGET __cdecl LoadWidgetHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CABB0
		jmp eax
	}
}

void __cdecl LoadZepWave(int arg1, int arg2)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DDC50
		jmp eax
	}
}

HLOCATION __cdecl Location(float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D03B0
		jmp eax
	}
}

int __cdecl MeleeDifficulty()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E0500
		jmp eax
	}
}

BOOL __cdecl MergeUnits(int arg1, int arg2, int arg3, int arg4)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD320
		jmp eax
	}
}

BOOL __cdecl MoveLightning(HLIGHTNING Bolt, BOOL checkVisibility, float *x1, float *y1, float *x2, float *y2)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BCDA0
		jmp eax
	}
}

BOOL __cdecl MoveLightningEx(HLIGHTNING Bolt, BOOL checkVisibility, float *x1, float *y1, float *z1, float *x2, float *y2, float *z2)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BCCC0
		jmp eax
	}
}

void __cdecl MoveLocation(HLOCATION Location, float *newX, float *newY)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C0DF0
		jmp eax
	}
}

void __cdecl MoveRectTo(HRECT Rect, float *newCenterX, float *newCenterY)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C19C0
		jmp eax
	}
}

void __cdecl MoveRectToLoc(HRECT Rect, HLOCATION newCenterLoc)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C19F0
		jmp eax
	}
}

void __cdecl MultiboardClear(HMULTIBOARD lb)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC6F0
		jmp eax
	}
}

void __cdecl MultiboardDisplay(HMULTIBOARD lb, BOOL show)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC670
		jmp eax
	}
}

int __cdecl MultiboardGetColumnCount(HMULTIBOARD lb)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC7D0
		jmp eax
	}
}

HMULTIBOARDITEM __cdecl MultiboardGetItem(HMULTIBOARD lb, int row, int column)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D37B0
		jmp eax
	}
}

int __cdecl MultiboardGetRowCount(HMULTIBOARD lb)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC7B0
		jmp eax
	}
}

CJassStringSID __cdecl MultiboardGetTitleText(HMULTIBOARD lb)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC750
		jmp eax
	}
}

void __cdecl MultiboardMinimize(HMULTIBOARD lb, BOOL minimize)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC6B0
		jmp eax
	}
}

void __cdecl MultiboardReleaseItem(HMULTIBOARDITEM mbi)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC950
		jmp eax
	}
}

void __cdecl MultiboardSetColumnCount(HMULTIBOARD lb, int count)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC7F0
		jmp eax
	}
}

void __cdecl MultiboardSetItemIcon(HMULTIBOARDITEM mbi, CJassString iconFileName)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCA20
		jmp eax
	}
}

void __cdecl MultiboardSetItemStyle(HMULTIBOARDITEM mbi, BOOL showValue, BOOL showIcon)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC970
		jmp eax
	}
}

void __cdecl MultiboardSetItemValue(HMULTIBOARDITEM mbi, CJassString val)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC990
		jmp eax
	}
}

void __cdecl MultiboardSetItemValueColor(HMULTIBOARDITEM mbi, int red, int green, int blue, int alpha)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC9C0
		jmp eax
	}
}

void __cdecl MultiboardSetItemWidth(HMULTIBOARDITEM mbi, float *width)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCA00
		jmp eax
	}
}

void __cdecl MultiboardSetItemsIcon(HMULTIBOARD lb, CJassString iconPath)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC920
		jmp eax
	}
}

void __cdecl MultiboardSetItemsStyle(HMULTIBOARD lb, BOOL showValues, BOOL showIcons)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC830
		jmp eax
	}
}

void __cdecl MultiboardSetItemsValue(HMULTIBOARD lb, CJassString value)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC870
		jmp eax
	}
}

void __cdecl MultiboardSetItemsValueColor(HMULTIBOARD lb, int red, int green, int blue, int alpha)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC8A0
		jmp eax
	}
}

void __cdecl MultiboardSetItemsWidth(HMULTIBOARD lb, float *width)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC8F0
		jmp eax
	}
}

void __cdecl MultiboardSetRowCount(HMULTIBOARD lb, int count)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC810
		jmp eax
	}
}

void __cdecl MultiboardSetTitleText(HMULTIBOARD lb, CJassString label)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC720
		jmp eax
	}
}

void __cdecl MultiboardSetTitleTextColor(HMULTIBOARD lb, int red, int green, int blue, int alpha)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC770
		jmp eax
	}
}

void __cdecl MultiboardSuppressDisplay(BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3C00
		jmp eax
	}
}

void __cdecl NewSoundEnvironment(CJassString environmentName)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3E60
		jmp eax
	}
}

HBOOLEXPR __cdecl Not(HBOOLEXPR operand)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D0830
		jmp eax
	}
}

HBOOLEXPR __cdecl Or(HBOOLEXPR operandA, HBOOLEXPR operandB)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D0710
		jmp eax
	}
}

int __cdecl OrderId(CJassString orderIdString)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB590
		jmp eax
	}
}

CJassStringSID __cdecl OrderId2String(int orderId)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB5C0
		jmp eax
	}
}

void __cdecl PanCameraTo(float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4700
		jmp eax
	}
}

void __cdecl PanCameraToTimed(float *x, float *y, float *duration)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4740
		jmp eax
	}
}

void __cdecl PanCameraToTimedWithZ(float *x, float *y, float *zOffsetDest, float *duration)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B47D0
		jmp eax
	}
}

void __cdecl PanCameraToWithZ(float *x, float *y, float *zOffsetDest)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4790
		jmp eax
	}
}

void __cdecl PauseCompAI(HPLAYER p, BOOL pause)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB7C0
		jmp eax
	}
}

void __cdecl PauseGame(BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC4D0
		jmp eax
	}
}

void __cdecl PauseTimer(HTIMER Timer)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1400
		jmp eax
	}
}

void __cdecl PauseUnit(HUNIT unit, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7340
		jmp eax
	}
}

void __cdecl PingMinimap(float *x, float *y, float *duration)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4650
		jmp eax
	}
}

void __cdecl PingMinimapEx(float *x, float *y, float *duration, int red, int green, int blue, BOOL extraEffects)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B8660
		jmp eax
	}
}

HITEM __cdecl PlaceRandomItem(HITEMPOOL ItemPool, float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB700
		jmp eax
	}
}

HUNIT __cdecl PlaceRandomUnit(HUNITPOOL Pool, HPLAYER forWhichPlayer, float *x, float *y, float *facing)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB620
		jmp eax
	}
}

void __cdecl PlayCinematic(CJassString movieName)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC520
		jmp eax
	}
}

void __cdecl PlayModelCinematic(CJassString modelName)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC500
		jmp eax
	}
}

void __cdecl PlayMusic(CJassString musicName)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3D30
		jmp eax
	}
}

void __cdecl PlayMusicEx(CJassString musicName, int frommsecs, int fadeinmsecs)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3D50
		jmp eax
	}
}

void __cdecl PlayThematicMusic(CJassString musicFileName)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3DA0
		jmp eax
	}
}

void __cdecl PlayThematicMusicEx(CJassString musicFileName, int frommsecs)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3DC0
		jmp eax
	}
}

HPLAYER __cdecl Player(int number)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BBB30
		jmp eax
	}
}

HLEADERBOARD __cdecl PlayerGetLeaderboard(HPLAYER toPlayer)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC380
		jmp eax
	}
}

void __cdecl PlayerSetLeaderboard(HPLAYER toPlayer, HLEADERBOARD lb)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CC340
		jmp eax
	}
}

void __cdecl PopLastCommand()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E04D0
		jmp eax
	}
}

DWFP __cdecl Pow(float *x, float *power)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2C00
		jmp eax
	}
}

void __cdecl Preload(CJassString filename)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B5170
		jmp eax
	}
}

void __cdecl PreloadEnd(float *timeout)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B5190
		jmp eax
	}
}

void __cdecl PreloadEndEx()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B5220
		jmp eax
	}
}

void __cdecl PreloadGenClear()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B52B0
		jmp eax
	}
}

void __cdecl PreloadGenEnd(CJassString filename)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B52D0
		jmp eax
	}
}

void __cdecl PreloadGenStart()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B5290
		jmp eax
	}
}

void __cdecl PreloadRefresh()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B5210
		jmp eax
	}
}

void __cdecl PreloadStart()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B51F0
		jmp eax
	}
}

void __cdecl Preloader(CJassString filename)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B5310
		jmp eax
	}
}

void __cdecl PurchaseZeppelin()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD410
		jmp eax
	}
}

HQUESTITEM __cdecl QuestCreateItem(HQUEST Quest)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D3380
		jmp eax
	}
}

void __cdecl QuestItemSetCompleted(HQUESTITEM QuestItem, BOOL completed)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBD70
		jmp eax
	}
}

void __cdecl QuestItemSetDescription(HQUESTITEM QuestItem, CJassString description)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBD40
		jmp eax
	}
}

void __cdecl QuestSetCompleted(HQUEST Quest, BOOL completed)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBC20
		jmp eax
	}
}

void __cdecl QuestSetDescription(HQUEST Quest, CJassString description)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBBA0
		jmp eax
	}
}

void __cdecl QuestSetDiscovered(HQUEST Quest, BOOL discovered)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBC60
		jmp eax
	}
}

void __cdecl QuestSetEnabled(HQUEST Quest, BOOL enabled)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBC80
		jmp eax
	}
}

void __cdecl QuestSetFailed(HQUEST Quest, BOOL failed)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBC40
		jmp eax
	}
}

void __cdecl QuestSetIconPath(HQUEST Quest, CJassString iconPath)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBBD0
		jmp eax
	}
}

void __cdecl QuestSetRequired(HQUEST Quest, BOOL required)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBC00
		jmp eax
	}
}

void __cdecl QuestSetTitle(HQUEST Quest, CJassString title)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBB70
		jmp eax
	}
}

void __cdecl QueueDestructableAnimation(HDESTRUCTABLE d, CJassString Animation)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4A00
		jmp eax
	}
}

void __cdecl QueueUnitAnimation(HUNIT unit, CJassString Animation)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C6180
		jmp eax
	}
}

int __cdecl R2I(float *r)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2CE0
		jmp eax
	}
}

CJassStringSID __cdecl R2S(float *r)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BAAF0
		jmp eax
	}
}

CJassStringSID __cdecl R2SW(float *r, int width, int precision)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BAB40
		jmp eax
	}
}

DWFP __cdecl Rad2Deg(float *radians)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B29F0
		jmp eax
	}
}

HRECT __cdecl Rect(float *minx, float *miny, float *maxx, float *maxy)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D0A20
		jmp eax
	}
}

HRECT __cdecl RectFromLoc(HLOCATION min, HLOCATION max)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D0BD0
		jmp eax
	}
}

void __cdecl RecycleGuardPosition(HUNIT hUnit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB800
		jmp eax
	}
}

void __cdecl RegionAddCell(HREGION Region, float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1580
		jmp eax
	}
}

void __cdecl RegionAddCellAtLoc(HREGION Region, HLOCATION Location)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C15B0
		jmp eax
	}
}

void __cdecl RegionAddRect(HREGION Region, HRECT r)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C14E0
		jmp eax
	}
}

void __cdecl RegionClearCell(HREGION Region, float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C15F0
		jmp eax
	}
}

void __cdecl RegionClearCellAtLoc(HREGION Region, HLOCATION Location)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1620
		jmp eax
	}
}

void __cdecl RegionClearRect(HREGION Region, HRECT r)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1530
		jmp eax
	}
}

void __cdecl RegisterStackedSound(HSOUND soundHandle, BOOL byPosition, float *rectwidth, float *rectheight)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCF80
		jmp eax
	}
}

void __cdecl ReloadGame()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BBBE0
		jmp eax
	}
}

BOOL __cdecl ReloadGameCachesFromDisk()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC430
		jmp eax
	}
}

void __cdecl RemoveAllGuardPositions(HPLAYER num)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB840
		jmp eax
	}
}

void __cdecl RemoveDestructable(HDESTRUCTABLE d)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4730
		jmp eax
	}
}

void __cdecl RemoveGuardPosition(HUNIT hUnit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB820
		jmp eax
	}
}

void __cdecl RemoveInjuries()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DDDA0
		jmp eax
	}
}

void __cdecl RemoveItem(HITEM item)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4C30
		jmp eax
	}
}

void __cdecl RemoveItemFromAllStock(int itemId)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B32B0
		jmp eax
	}
}

void __cdecl RemoveItemFromStock(HUNIT unit, int itemId)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C93F0
		jmp eax
	}
}

void __cdecl RemoveLocation(HLOCATION Location)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C0DD0
		jmp eax
	}
}

void __cdecl RemovePlayer(HPLAYER player, HPLAYERGAMERESULT gameResult)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9DC0
		jmp eax
	}
}

void __cdecl RemoveRect(HRECT Rect)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C16F0
		jmp eax
	}
}

void __cdecl RemoveRegion(HREGION Region)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C14C0
		jmp eax
	}
}

BOOL __cdecl RemoveSaveDirectory(CJassString sourceDirName)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC070
		jmp eax
	}
}

void __cdecl RemoveSavedBoolean(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB490
		jmp eax
	}
}

void __cdecl RemoveSavedHandle(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB510
		jmp eax
	}
}

void __cdecl RemoveSavedInteger(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB410
		jmp eax
	}
}

void __cdecl RemoveSavedReal(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB450
		jmp eax
	}
}

void __cdecl RemoveSavedString(HHASHTABLE table, int parentKey, int childKey)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB4D0
		jmp eax
	}
}

void __cdecl RemoveSiege()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DDE00
		jmp eax
	}
}

void __cdecl RemoveUnit(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8060
		jmp eax
	}
}

void __cdecl RemoveUnitFromAllStock(int unitId)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B32C0
		jmp eax
	}
}

void __cdecl RemoveUnitFromStock(HUNIT unit, int unitId)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9430
		jmp eax
	}
}

void __cdecl RemoveWeatherEffect(HWEATHEREFFECT Effect)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3E70
		jmp eax
	}
}

BOOL __cdecl RenameSaveDirectory(CJassString sourceDirName, CJassString destDirName)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BBFB0
		jmp eax
	}
}

void __cdecl ResetCaptainLocs()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD780
		jmp eax
	}
}

void __cdecl ResetTerrainFog()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3860
		jmp eax
	}
}

void __cdecl ResetToGameCamera(float *duration)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B46B0
		jmp eax
	}
}

void __cdecl ResetTrigger(HTRIGGER Trigger)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1C20
		jmp eax
	}
}

void __cdecl ResetUbersplat(HUBERSPLAT Splat)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B44D0
		jmp eax
	}
}

void __cdecl ResetUnitLookAt(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C65F0
		jmp eax
	}
}

void __cdecl RestartGame(BOOL doScoreScreen)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BBC00
		jmp eax
	}
}

HUNIT __cdecl RestoreUnit(HGAMECACHE cache, CJassString missionKey, CJassString key, HPLAYER forWhichPlayer, float *x, float *y, float *facing)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA970
		jmp eax
	}
}

void __cdecl ResumeMusic()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3D90
		jmp eax
	}
}

void __cdecl ResumeTimer(HTIMER Timer)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1420
		jmp eax
	}
}

void __cdecl ReturnGuardPosts()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DCFB0
		jmp eax
	}
}

BOOL __cdecl ReviveHero(HUNIT hero, float *x, float *y, BOOL doEyecandy)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C6AF0
		jmp eax
	}
}

BOOL __cdecl ReviveHeroLoc(HUNIT hero, HLOCATION loc, BOOL doEyecandy)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C6B80
		jmp eax
	}
}

int __cdecl S2I(CJassString s)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2D10
		jmp eax
	}
}

DWFP __cdecl S2R(CJassString s)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2D50
		jmp eax
	}
}

BOOL __cdecl SaveAbilityHandle(HHASHTABLE table, int parentKey, int childKey, HABILITY Ability)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CE8C0
		jmp eax
	}
}

BOOL __cdecl SaveAgentHandle(HHASHTABLE table, int parentKey, int childKey, HAGENT Agent)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CEA40
		jmp eax
	}
}

void __cdecl SaveBoolean(HHASHTABLE table, int parentKey, int childKey, BOOL value)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA280
		jmp eax
	}
}

BOOL __cdecl SaveBooleanExprHandle(HHASHTABLE table, int parentKey, int childKey, HBOOLEXPR Boolexpr)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA4E0
		jmp eax
	}
}

BOOL __cdecl SaveButtonHandle(HHASHTABLE table, int parentKey, int childKey, HBUTTON Button)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA540
		jmp eax
	}
}

BOOL __cdecl SaveDefeatConditionHandle(HHASHTABLE table, int parentKey, int childKey, HDEFEATCONDITION Defeatcondition)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CE980
		jmp eax
	}
}

BOOL __cdecl SaveDestructableHandle(HHASHTABLE table, int parentKey, int childKey, HDESTRUCTABLE Destructable)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA340
		jmp eax
	}
}

BOOL __cdecl SaveDialogHandle(HHASHTABLE table, int parentKey, int childKey, HDIALOG Dialog)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA520
		jmp eax
	}
}

BOOL __cdecl SaveEffectHandle(HHASHTABLE table, int parentKey, int childKey, HEFFECT Effect)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CE8E0
		jmp eax
	}
}

BOOL __cdecl SaveFogModifierHandle(HHASHTABLE table, int parentKey, int childKey, HFOGMODIFIER FogModifier)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA640
		jmp eax
	}
}

BOOL __cdecl SaveFogStateHandle(HHASHTABLE table, int parentKey, int childKey, HFOGSTATE FogState)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA620
		jmp eax
	}
}

BOOL __cdecl SaveForceHandle(HHASHTABLE table, int parentKey, int childKey, HFORCE Force)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA460
		jmp eax
	}
}

void __cdecl SaveGame(CJassString saveFileName)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BBEE0
		jmp eax
	}
}

BOOL __cdecl SaveGameCache(HGAMECACHE Cache)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA080
		jmp eax
	}
}

BOOL __cdecl SaveGameExists(CJassString saveName)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC100
		jmp eax
	}
}

BOOL __cdecl SaveGroupHandle(HHASHTABLE table, int parentKey, int childKey, HGROUP Group)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA480
		jmp eax
	}
}

BOOL __cdecl SaveHashtableHandle(HHASHTABLE table, int parentKey, int childKey, HHASHTABLE Hashtable)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA660
		jmp eax
	}
}

BOOL __cdecl SaveImageHandle(HHASHTABLE table, int parentKey, int childKey, HIMAGE Image)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA5E0
		jmp eax
	}
}

void __cdecl SaveInteger(HHASHTABLE table, int parentKey, int childKey, int value)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA200
		jmp eax
	}
}

BOOL __cdecl SaveItemHandle(HHASHTABLE table, int parentKey, int childKey, HITEM item)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA360
		jmp eax
	}
}

BOOL __cdecl SaveItemPoolHandle(HHASHTABLE table, int parentKey, int childKey, HITEMPOOL Itempool)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CE920
		jmp eax
	}
}

BOOL __cdecl SaveLeaderboardHandle(HHASHTABLE table, int parentKey, int childKey, HLEADERBOARD Leaderboard)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CE9C0
		jmp eax
	}
}

BOOL __cdecl SaveLightningHandle(HHASHTABLE table, int parentKey, int childKey, HLIGHTNING Lightning)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA5C0
		jmp eax
	}
}

BOOL __cdecl SaveLocationHandle(HHASHTABLE table, int parentKey, int childKey, HLOCATION Location)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA4A0
		jmp eax
	}
}

BOOL __cdecl SaveMultiboardHandle(HHASHTABLE table, int parentKey, int childKey, HMULTIBOARD Multiboard)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CE9E0
		jmp eax
	}
}

BOOL __cdecl SaveMultiboardItemHandle(HHASHTABLE table, int parentKey, int childKey, HMULTIBOARDITEM Multiboarditem)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CEA00
		jmp eax
	}
}

BOOL __cdecl SavePlayerHandle(HHASHTABLE table, int parentKey, int childKey, HPLAYER player)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA300
		jmp eax
	}
}

BOOL __cdecl SaveQuestHandle(HHASHTABLE table, int parentKey, int childKey, HQUEST Quest)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CE940
		jmp eax
	}
}

BOOL __cdecl SaveQuestItemHandle(HHASHTABLE table, int parentKey, int childKey, HQUESTITEM Questitem)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CE960
		jmp eax
	}
}

void __cdecl SaveReal(HHASHTABLE table, int parentKey, int childKey, float *value)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA240
		jmp eax
	}
}

BOOL __cdecl SaveRectHandle(HHASHTABLE table, int parentKey, int childKey, HRECT Rect)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA4C0
		jmp eax
	}
}

BOOL __cdecl SaveRegionHandle(HHASHTABLE table, int parentKey, int childKey, HREGION Region)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA3C0
		jmp eax
	}
}

BOOL __cdecl SaveSoundHandle(HHASHTABLE table, int parentKey, int childKey, HSOUND Sound)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA500
		jmp eax
	}
}

BOOL __cdecl SaveStr(HHASHTABLE table, int parentKey, int childKey, CJassString value)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA2C0
		jmp eax
	}
}

BOOL __cdecl SaveTextTagHandle(HHASHTABLE table, int parentKey, int childKey, HTEXTTAG Texttag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA5A0
		jmp eax
	}
}

BOOL __cdecl SaveTimerDialogHandle(HHASHTABLE table, int parentKey, int childKey, HTIMERDIALOG Timerdialog)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CE9A0
		jmp eax
	}
}

BOOL __cdecl SaveTimerHandle(HHASHTABLE table, int parentKey, int childKey, HTIMER Timer)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA3A0
		jmp eax
	}
}

BOOL __cdecl SaveTrackableHandle(HHASHTABLE table, int parentKey, int childKey, HTRACKABLE Trackable)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CEA20
		jmp eax
	}
}

BOOL __cdecl SaveTriggerActionHandle(HHASHTABLE table, int parentKey, int childKey, HTRIGGERACTION Triggeraction)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA420
		jmp eax
	}
}

BOOL __cdecl SaveTriggerConditionHandle(HHASHTABLE table, int parentKey, int childKey, HTRIGGERCONDITION Triggercondition)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA400
		jmp eax
	}
}

BOOL __cdecl SaveTriggerEventHandle(HHASHTABLE table, int parentKey, int childKey, HEVENT Event)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA440
		jmp eax
	}
}

BOOL __cdecl SaveTriggerHandle(HHASHTABLE table, int parentKey, int childKey, HTRIGGER Trigger)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA3E0
		jmp eax
	}
}

BOOL __cdecl SaveUbersplatHandle(HHASHTABLE table, int parentKey, int childKey, HUBERSPLAT Ubersplat)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA600
		jmp eax
	}
}

BOOL __cdecl SaveUnitHandle(HHASHTABLE table, int parentKey, int childKey, HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA380
		jmp eax
	}
}

BOOL __cdecl SaveUnitPoolHandle(HHASHTABLE table, int parentKey, int childKey, HUNITPOOL Unitpool)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CE900
		jmp eax
	}
}

BOOL __cdecl SaveWidgetHandle(HHASHTABLE table, int parentKey, int childKey, HWIDGET widget)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA320
		jmp eax
	}
}

void __cdecl SelectHeroSkill(HUNIT hero, int abilcode)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7050
		jmp eax
	}
}

void __cdecl SelectUnit(HUNIT unit, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7910
		jmp eax
	}
}

void __cdecl SetAllItemTypeSlots(int slots)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B32D0
		jmp eax
	}
}

void __cdecl SetAllUnitTypeSlots(int slots)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B32E0
		jmp eax
	}
}

void __cdecl SetAllianceTarget(HUNIT arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E0630
		jmp eax
	}
}

void __cdecl SetAllyColorFilterState(int state)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3A70
		jmp eax
	}
}

void __cdecl SetAltMinimapIcon(CJassString iconPath)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC540
		jmp eax
	}
}

void __cdecl SetAmphibious()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E0720
		jmp eax
	}
}

void __cdecl SetBlight(HPLAYER player, float *x, float *y, float *radius, BOOL addBlight)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CD4C0
		jmp eax
	}
}

void __cdecl SetBlightLoc(HPLAYER player, HLOCATION Location, float *radius, BOOL addBlight)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CD5D0
		jmp eax
	}
}

void __cdecl SetBlightPoint(HPLAYER player, float *x, float *y, BOOL addBlight)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CD580
		jmp eax
	}
}

void __cdecl SetBlightRect(HPLAYER player, HRECT r, BOOL addBlight)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CD520
		jmp eax
	}
}

void __cdecl SetCameraBounds(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3, float *x4, float *y4)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B86F0
		jmp eax
	}
}

void __cdecl SetCameraField(HCAMERAFIELD field, float *value, float *duration)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B48B0
		jmp eax
	}
}

void __cdecl SetCameraOrientController(HUNIT unit, float *xoffset, float *yoffset)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CD7B0
		jmp eax
	}
}

void __cdecl SetCameraPosition(float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B45D0
		jmp eax
	}
}

void __cdecl SetCameraQuickPosition(float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4610
		jmp eax
	}
}

void __cdecl SetCameraRotateMode(float *x, float *y, float *radiansToSweep, float *duration)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4850
		jmp eax
	}
}

void __cdecl SetCameraTargetController(HUNIT unit, float *xoffset, float *yoffset, BOOL inheritOrientation)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CD760
		jmp eax
	}
}

void __cdecl SetCampaignAI()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DDEA0
		jmp eax
	}
}

void __cdecl SetCampaignAvailable(int campaignNumber, BOOL available)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3370
		jmp eax
	}
}

void __cdecl SetCampaignMenuRace(HRACE r)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC3D0
		jmp eax
	}
}

void __cdecl SetCampaignMenuRaceEx(int campaignIndex)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC3B0
		jmp eax
	}
}

void __cdecl SetCaptainChanges(BOOL arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E2D20
		jmp eax
	}
}

void __cdecl SetCaptainHome(int arg1, float *arg2, float *arg3)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD7B0
		jmp eax
	}
}

void __cdecl SetCineFilterBlendMode(HBLENDMODE Mode)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4EB0
		jmp eax
	}
}

void __cdecl SetCineFilterDuration(float *duration)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B5100
		jmp eax
	}
}

void __cdecl SetCineFilterEndColor(int red, int green, int blue, int alpha)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CECD0
		jmp eax
	}
}

void __cdecl SetCineFilterEndUV(float *minu, float *minv, float *maxu, float *maxv)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B5020
		jmp eax
	}
}

void __cdecl SetCineFilterStartColor(int red, int green, int blue, int alpha)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CEBE0
		jmp eax
	}
}

void __cdecl SetCineFilterStartUV(float *minu, float *minv, float *maxu, float *maxv)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4F40
		jmp eax
	}
}

void __cdecl SetCineFilterTexMapFlags(HTEXMAPFLAGS Flags)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4EF0
		jmp eax
	}
}

void __cdecl SetCineFilterTexture(CJassString filename)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4E80
		jmp eax
	}
}

void __cdecl SetCinematicCamera(CJassString cameraModelFile)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4820
		jmp eax
	}
}

void __cdecl SetCinematicScene(int portraitUnitId, HPLAYERCOLOR color, CJassString speakerTitle, CJassString text, float *sceneDuration, float *voiceoverDuration)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BCF80
		jmp eax
	}
}

void __cdecl SetCreatureDensity(HMAPDENSITY density)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BAF50
		jmp eax
	}
}

void __cdecl SetCreepCampFilterState(BOOL state)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3AC0
		jmp eax
	}
}

void __cdecl SetCustomCampaignButtonVisible(int Button, BOOL visible)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3510
		jmp eax
	}
}

void __cdecl SetDayNightModels(CJassString terrainDNCFile, CJassString unitDNCFile)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3790
		jmp eax
	}
}

void __cdecl SetDefaultDifficulty(HGAMEDIFFICULTY g)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B33D0
		jmp eax
	}
}

void __cdecl SetDefendPlayer(BOOL arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E30E0
		jmp eax
	}
}

void __cdecl SetDestructableAnimation(HDESTRUCTABLE d, CJassString Animation)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4A20
		jmp eax
	}
}

void __cdecl SetDestructableAnimationSpeed(HDESTRUCTABLE d, float *speedFactor)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4A40
		jmp eax
	}
}

void __cdecl SetDestructableInvulnerable(HDESTRUCTABLE d, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4770
		jmp eax
	}
}

void __cdecl SetDestructableLife(HDESTRUCTABLE d, float *life)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4850
		jmp eax
	}
}

void __cdecl SetDestructableMaxLife(HDESTRUCTABLE d, float *max)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C48D0
		jmp eax
	}
}

void __cdecl SetDestructableOccluderHeight(HDESTRUCTABLE d, float *height)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4BD0
		jmp eax
	}
}

void __cdecl SetDoodadAnimation(float *x, float *y, float *radius, int doodadID, BOOL nearestOnly, CJassString animName, BOOL animRandom)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4570
		jmp eax
	}
}

void __cdecl SetDoodadAnimationRect(HRECT r, int doodadID, CJassString animName, BOOL animRandom)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CD6F0
		jmp eax
	}
}

void __cdecl SetEdCinematicAvailable(int campaignNumber, BOOL available)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3460
		jmp eax
	}
}

BOOL __cdecl SetExpansion(HUNIT arg1, int arg2)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E0570
		jmp eax
	}
}

void __cdecl SetFloatGameState(HFGAMESTATE FloatGameState, float *value)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC2E0
		jmp eax
	}
}

void __cdecl SetFogStateRadius(HPLAYER forWhichPlayer, HFOGSTATE State, float *centerx, float *centerY, float *radius, BOOL useSharedVision)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1AB0
		jmp eax
	}
}

void __cdecl SetFogStateRadiusLoc(HPLAYER forWhichPlayer, HFOGSTATE State, HLOCATION center, float *radius, BOOL useSharedVision)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1B20
		jmp eax
	}
}

void __cdecl SetFogStateRect(HPLAYER forWhichPlayer, HFOGSTATE State, HRECT where, BOOL useSharedVision)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1A30
		jmp eax
	}
}

void __cdecl SetGameDifficulty(HGAMEDIFFICULTY difficulty)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BAF10
		jmp eax
	}
}

void __cdecl SetGamePlacement(HPLACEMENT PlacementType)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BAEF0
		jmp eax
	}
}

void __cdecl SetGameSpeed(HGAMESPEED speed)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BAED0
		jmp eax
	}
}

void __cdecl SetGameTypeSupported(HGAMETYPE GameType, BOOL value)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BAE10
		jmp eax
	}
}

void __cdecl SetGroupsFlee(BOOL arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E32A0
		jmp eax
	}
}

void __cdecl SetHeroAgi(HUNIT hero, int newAgi, BOOL permanent)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C66A0
		jmp eax
	}
}

void __cdecl SetHeroInt(HUNIT hero, int newInt, BOOL permanent)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C6710
		jmp eax
	}
}

void __cdecl SetHeroLevel(HUNIT hero, int level, BOOL showEyeCandy)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C6D70
		jmp eax
	}
}

void __cdecl SetHeroLevels(CODE arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E0B00
		jmp eax
	}
}

void __cdecl SetHeroStr(HUNIT hero, int newStr, BOOL permanent)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C6630
		jmp eax
	}
}

void __cdecl SetHeroXP(HUNIT hero, int newXpVal, BOOL showEyeCandy)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C6A70
		jmp eax
	}
}

void __cdecl SetHeroesBuyItems(BOOL arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E3160
		jmp eax
	}
}

void __cdecl SetHeroesFlee(BOOL arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E3120
		jmp eax
	}
}

void __cdecl SetHeroesTakeItems(BOOL arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E3220
		jmp eax
	}
}

void __cdecl SetIgnoreInjured(BOOL arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E31E0
		jmp eax
	}
}

void __cdecl SetImageAboveWater(HIMAGE Image, BOOL flag, BOOL useWaterAlpha)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4480
		jmp eax
	}
}

void __cdecl SetImageColor(HIMAGE Image, int red, int green, int blue, int alpha)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B85B0
		jmp eax
	}
}

void __cdecl SetImageConstantHeight(HIMAGE Image, BOOL flag, float *height)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B43E0
		jmp eax
	}
}

void __cdecl SetImagePosition(HIMAGE Image, float *x, float *y, float *z)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4400
		jmp eax
	}
}

void __cdecl SetImageRender(HIMAGE Image, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4440
		jmp eax
	}
}

void __cdecl SetImageRenderAlways(HIMAGE Image, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4460
		jmp eax
	}
}

void __cdecl SetImageType(HIMAGE Image, int imageType)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B44A0
		jmp eax
	}
}

void __cdecl SetIntegerGameState(HIGAMESTATE IntegerGameState, int value)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC350
		jmp eax
	}
}

void __cdecl SetIntroShotModel(CJassString introModelPath)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC8A0
		jmp eax
	}
}

void __cdecl SetIntroShotText(CJassString introText)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC880
		jmp eax
	}
}

void __cdecl SetItemCharges(HITEM item, int charges)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5070
		jmp eax
	}
}

void __cdecl SetItemDropID(HITEM item, int unitId)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5030
		jmp eax
	}
}

void __cdecl SetItemDropOnDeath(HITEM item, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4D00
		jmp eax
	}
}

void __cdecl SetItemDroppable(HITEM i, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4D30
		jmp eax
	}
}

void __cdecl SetItemInvulnerable(HITEM item, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4EE0
		jmp eax
	}
}

void __cdecl SetItemPawnable(HITEM i, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4D60
		jmp eax
	}
}

void __cdecl SetItemPlayer(HITEM item, HPLAYER player, BOOL changeColor)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4EB0
		jmp eax
	}
}

void __cdecl SetItemPosition(HITEM i, float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4C80
		jmp eax
	}
}

void __cdecl SetItemTypeSlots(HUNIT unit, int slots)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9470
		jmp eax
	}
}

void __cdecl SetItemUserData(HITEM item, int data)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C50F0
		jmp eax
	}
}

void __cdecl SetItemVisible(HITEM item, BOOL show)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4F20
		jmp eax
	}
}

BOOL __cdecl SetLightningColor(HLIGHTNING Bolt, float *r, float *g, float *b, float *a)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B8490
		jmp eax
	}
}

void __cdecl SetMapDescription(CJassString description)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BADC0
		jmp eax
	}
}

void __cdecl SetMapFlag(HMAPFLAG MapFlag, BOOL value)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BAE70
		jmp eax
	}
}

void __cdecl SetMapMusic(CJassString musicName, BOOL random, int index)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3CE0
		jmp eax
	}
}

void __cdecl SetMapName(CJassString name)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BADA0
		jmp eax
	}
}

void __cdecl SetMeleeAI()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DDEE0
		jmp eax
	}
}

void __cdecl SetMissionAvailable(int campaignNumber, int missionNumber, BOOL available)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3340
		jmp eax
	}
}

void __cdecl SetMusicPlayPosition(int millisecs)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3E00
		jmp eax
	}
}

void __cdecl SetMusicVolume(int volume)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3DF0
		jmp eax
	}
}

void __cdecl SetNewHeroes(BOOL arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E3020
		jmp eax
	}
}

void __cdecl SetOpCinematicAvailable(int campaignNumber, BOOL available)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3400
		jmp eax
	}
}

void __cdecl SetPeonsRepair(BOOL arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E3060
		jmp eax
	}
}

void __cdecl SetPlayerAbilityAvailable(HPLAYER player, int abilid, BOOL avail)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C97D0
		jmp eax
	}
}

void __cdecl SetPlayerAlliance(HPLAYER sourcePlayer, HPLAYER otherPlayer, HALLIANCETYPE AllianceSetting, BOOL value)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1050
		jmp eax
	}
}

void __cdecl SetPlayerColor(HPLAYER player, HPLAYERCOLOR color)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1220
		jmp eax
	}
}

void __cdecl SetPlayerController(HPLAYER player, HMAPCONTROL controlType)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1200
		jmp eax
	}
}

void __cdecl SetPlayerHandicap(HPLAYER player, float *handicap)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9E30
		jmp eax
	}
}

void __cdecl SetPlayerHandicapXP(HPLAYER player, float *handicap)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9EE0
		jmp eax
	}
}

void __cdecl SetPlayerName(HPLAYER player, CJassString name)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C0F10
		jmp eax
	}
}

void __cdecl SetPlayerOnScoreScreen(HPLAYER player, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9800
		jmp eax
	}
}

void __cdecl SetPlayerRacePreference(HPLAYER player, HRACEPREFERENCE RacePreference)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C11A0
		jmp eax
	}
}

void __cdecl SetPlayerRaceSelectable(HPLAYER player, BOOL value)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C11D0
		jmp eax
	}
}

void __cdecl SetPlayerStartLocation(HPLAYER player, int startLocIndex)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C0F80
		jmp eax
	}
}

void __cdecl SetPlayerState(HPLAYER player, HPLAYERSTATE PlayerState, int value)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9AA0
		jmp eax
	}
}

void __cdecl SetPlayerTaxRate(HPLAYER sourcePlayer, HPLAYER otherPlayer, HPLAYERSTATE Resource, int rate)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C10E0
		jmp eax
	}
}

void __cdecl SetPlayerTeam(HPLAYER player, int Team)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C0EE0
		jmp eax
	}
}

void __cdecl SetPlayerTechMaxAllowed(HPLAYER player, int techid, int maximum)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9660
		jmp eax
	}
}

void __cdecl SetPlayerTechResearched(HPLAYER player, int techid, int setToLevel)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9730
		jmp eax
	}
}

void __cdecl SetPlayerUnitsOwner(HPLAYER player, int newOwner)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C12F0
		jmp eax
	}
}

void __cdecl SetPlayers(int playercount)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BADF0
		jmp eax
	}
}

BOOL __cdecl SetProduce(int arg1, int arg2, int arg3)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD450
		jmp eax
	}
}

void __cdecl SetRandomPaths(BOOL arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E30A0
		jmp eax
	}
}

void __cdecl SetRandomSeed(int seed)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B36D0
		jmp eax
	}
}

void __cdecl SetRect(HRECT Rect, float *minx, float *miny, float *maxx, float *maxy)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1710
		jmp eax
	}
}

void __cdecl SetRectFromLoc(HRECT Rect, HLOCATION min, HLOCATION max)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C17F0
		jmp eax
	}
}

void __cdecl SetReplacementCount(int arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E0B30
		jmp eax
	}
}

void __cdecl SetReservedLocalHeroButtons(int reserved)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3A30
		jmp eax
	}
}

void __cdecl SetResourceAmount(HUNIT unit, int amount)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C77F0
		jmp eax
	}
}

void __cdecl SetResourceDensity(HMAPDENSITY density)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BAF30
		jmp eax
	}
}

void __cdecl SetSkyModel(CJassString skyModelFile)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B37D0
		jmp eax
	}
}

void __cdecl SetSlowChopping(BOOL arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E32E0
		jmp eax
	}
}

void __cdecl SetSmartArtillery(BOOL arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DDF10
		jmp eax
	}
}

void __cdecl SetSoundChannel(HSOUND soundHandle, int channel)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCC20
		jmp eax
	}
}

void __cdecl SetSoundConeAngles(HSOUND soundHandle, float *inside, float *outside, int outsideVolume)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCCF0
		jmp eax
	}
}

void __cdecl SetSoundConeOrientation(HSOUND soundHandle, float *x, float *y, float *z)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCD30
		jmp eax
	}
}

void __cdecl SetSoundDistanceCutoff(HSOUND soundHandle, float *cutoff)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCCD0
		jmp eax
	}
}

void __cdecl SetSoundDistances(HSOUND soundHandle, float *minDist, float *maxDist)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCCA0
		jmp eax
	}
}

void __cdecl SetSoundDuration(HSOUND soundHandle, int duration)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCEF0
		jmp eax
	}
}

void __cdecl SetSoundParamsFromLabel(HSOUND soundHandle, CJassString soundLabel)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCBF0
		jmp eax
	}
}

void __cdecl SetSoundPitch(HSOUND soundHandle, float *pitch)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCC60
		jmp eax
	}
}

void __cdecl SetSoundPlayPosition(HSOUND soundHandle, int millisecs)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCC80
		jmp eax
	}
}

void __cdecl SetSoundPosition(HSOUND soundHandle, float *x, float *y, float *z)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCD90
		jmp eax
	}
}

void __cdecl SetSoundVelocity(HSOUND soundHandle, float *x, float *y, float *z)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCDF0
		jmp eax
	}
}

void __cdecl SetSoundVolume(HSOUND soundHandle, int volume)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCC40
		jmp eax
	}
}

void __cdecl SetStackedSound(CJassString arg1, float *arg2, float *arg3)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3C20
		jmp eax
	}
}

void __cdecl SetStackedSoundRect(CJassString arg1, HRECT arg2)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCA50
		jmp eax
	}
}

void __cdecl SetStagePoint(float *arg1, float *arg2)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DDBD0
		jmp eax
	}
}

void __cdecl SetStartLocPrio(int StartLoc, int prioSlotIndex, int otherStartLocIndex, HSTARTLOCPRIO priority)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BAFC0
		jmp eax
	}
}

void __cdecl SetStartLocPrioCount(int StartLoc, int prioSlotCount)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BAF90
		jmp eax
	}
}

void __cdecl SetTargetHeroes(BOOL arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DDE60
		jmp eax
	}
}

void __cdecl SetTeams(int teamcount)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D4000
		jmp eax
	}
}

void __cdecl SetTerrainFog(float *a, float *b, float *c, float *d, float *e)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3840
		jmp eax
	}
}

void __cdecl SetTerrainFogEx(int style, float *zstart, float *zend, float *density, float *red, float *green, float *blue)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B81B0
		jmp eax
	}
}

void __cdecl SetTerrainPathable(float *x, float *y, HPATHINGTYPE t, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B42F0
		jmp eax
	}
}

void __cdecl SetTerrainType(float *x, float *y, int terrainType, int variation, int area, int shape)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BCF20
		jmp eax
	}
}

void __cdecl SetTextTagAge(HTEXTTAG t, float *age)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC7F0
		jmp eax
	}
}

void __cdecl SetTextTagColor(HTEXTTAG t, int red, int green, int blue, int alpha)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC6A0
		jmp eax
	}
}

void __cdecl SetTextTagFadepoint(HTEXTTAG t, float *fadepoint)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC850
		jmp eax
	}
}

void __cdecl SetTextTagLifespan(HTEXTTAG t, float *lifespan)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC820
		jmp eax
	}
}

void __cdecl SetTextTagPermanent(HTEXTTAG t, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC7C0
		jmp eax
	}
}

void __cdecl SetTextTagPos(HTEXTTAG t, float *x, float *y, float *heightOffset)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC610
		jmp eax
	}
}

void __cdecl SetTextTagPosUnit(HTEXTTAG t, HUNIT unit, float *heightOffset)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB890
		jmp eax
	}
}

void __cdecl SetTextTagSuspended(HTEXTTAG t, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC790
		jmp eax
	}
}

void __cdecl SetTextTagText(HTEXTTAG t, CJassString s, float *height)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC5D0
		jmp eax
	}
}

void __cdecl SetTextTagVelocity(HTEXTTAG t, float *xvel, float *yvel)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC700
		jmp eax
	}
}

void __cdecl SetTextTagVisibility(HTEXTTAG t, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC760
		jmp eax
	}
}

void __cdecl SetThematicMusicPlayPosition(int millisecs)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3E10
		jmp eax
	}
}

void __cdecl SetTimeOfDayScale(float *r)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC490
		jmp eax
	}
}

void __cdecl SetTutorialCleared(BOOL cleared)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3430
		jmp eax
	}
}

void __cdecl SetUbersplatRender(HUBERSPLAT Splat, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4510
		jmp eax
	}
}

void __cdecl SetUbersplatRenderAlways(HUBERSPLAT Splat, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4530
		jmp eax
	}
}

int __cdecl SetUnitAbilityLevel(HUNIT unit, int abilcode, int level)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C71B0
		jmp eax
	}
}

void __cdecl SetUnitAcquireRange(HUNIT unit, float *newAcquireRange)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5CF0
		jmp eax
	}
}

void __cdecl SetUnitAnimation(HUNIT unit, CJassString Animation)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C61A0
		jmp eax
	}
}

void __cdecl SetUnitAnimationByIndex(HUNIT unit, int Animation)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C61F0
		jmp eax
	}
}

void __cdecl SetUnitAnimationWithRarity(HUNIT unit, CJassString Animation, HRARITYCONTROL rarity)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C61C0
		jmp eax
	}
}

void __cdecl SetUnitBlendTime(HUNIT unit, float *blendTime)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C6320
		jmp eax
	}
}

void __cdecl SetUnitColor(HUNIT unit, HPLAYERCOLOR Color)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5F60
		jmp eax
	}
}

void __cdecl SetUnitCreepGuard(HUNIT unit, BOOL creepGuard)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5480
		jmp eax
	}
}

void __cdecl SetUnitExploded(HUNIT unit, BOOL exploded)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CE6D0
		jmp eax
	}
}

void __cdecl SetUnitFacing(HUNIT unit, float *facingAngle)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5AF0
		jmp eax
	}
}

void __cdecl SetUnitFacingTimed(HUNIT unit, float *facingAngle, float *duration)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5B30
		jmp eax
	}
}

void __cdecl SetUnitFlyHeight(HUNIT unit, float *newHeight, float *rate)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5C60
		jmp eax
	}
}

void __cdecl SetUnitFog(float *a, float *b, float *c, float *d, float *e)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3850
		jmp eax
	}
}

void __cdecl SetUnitInvulnerable(HUNIT unit, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C72F0
		jmp eax
	}
}

void __cdecl SetUnitLookAt(HUNIT unit, CJassString Bone, HUNIT lookAtTarget, float *offsetX, float *offsetY, float *offsetZ)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C64C0
		jmp eax
	}
}

void __cdecl SetUnitMoveSpeed(HUNIT unit, float *newSpeed)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5C40
		jmp eax
	}
}

void __cdecl SetUnitOwner(HUNIT unit, HPLAYER player, BOOL changeColor)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5ED0
		jmp eax
	}
}

void __cdecl SetUnitPathing(HUNIT unit, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5FA0
		jmp eax
	}
}

void __cdecl SetUnitPosition(HUNIT unit, float *newX, float *newY)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5A50
		jmp eax
	}
}

void __cdecl SetUnitPositionLoc(HUNIT unit, HLOCATION Location)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5AB0
		jmp eax
	}
}

void __cdecl SetUnitPropWindow(HUNIT unit, float *newPropWindowAngle)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5CD0
		jmp eax
	}
}

void __cdecl SetUnitRescuable(HUNIT unit, HPLAYER byWhichPlayer, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5F10
		jmp eax
	}
}

void __cdecl SetUnitRescueRange(HUNIT unit, float *range)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5F40
		jmp eax
	}
}

void __cdecl SetUnitScale(HUNIT unit, float *scaleX, float *scaleY, float *scaleZ)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C62D0
		jmp eax
	}
}

void __cdecl SetUnitState(HUNIT unit, HUNITSTATE UnitState, float *newVal)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5EA0
		jmp eax
	}
}

void __cdecl SetUnitTimeScale(HUNIT unit, float *timeScale)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C6300
		jmp eax
	}
}

void __cdecl SetUnitTurnSpeed(HUNIT unit, float *newTurnSpeed)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5CB0
		jmp eax
	}
}

void __cdecl SetUnitTypeSlots(HUNIT unit, int slots)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C94B0
		jmp eax
	}
}

void __cdecl SetUnitUseFood(HUNIT unit, BOOL useFood)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C54A0
		jmp eax
	}
}

void __cdecl SetUnitUserData(HUNIT unit, int data)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9510
		jmp eax
	}
}

void __cdecl SetUnitVertexColor(HUNIT unit, int red, int green, int blue, int alpha)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C6340
		jmp eax
	}
}

void __cdecl SetUnitX(HUNIT unit, float *newX)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C5970
		jmp eax
	}
}

void __cdecl SetUnitY(HUNIT unit, float *newY)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C59E0
		jmp eax
	}
}

void __cdecl SetUnitsFlee(BOOL arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E3260
		jmp eax
	}
}

BOOL __cdecl SetUpgrade(int arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD4B0
		jmp eax
	}
}

void __cdecl SetWatchMegaTargets(BOOL arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E31A0
		jmp eax
	}
}

void __cdecl SetWaterBaseColor(int red, int green, int blue, int alpha)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B8580
		jmp eax
	}
}

void __cdecl SetWaterDeforms(BOOL val)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4240
		jmp eax
	}
}

void __cdecl SetWidgetLife(HWIDGET widget, float *newLife)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4690
		jmp eax
	}
}

void __cdecl ShiftTownSpot(float *arg1, float *arg2)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD740
		jmp eax
	}
}

void __cdecl ShowDestructable(HDESTRUCTABLE d, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C4A60
		jmp eax
	}
}

void __cdecl ShowImage(HIMAGE Image, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B43C0
		jmp eax
	}
}

void __cdecl ShowInterface(BOOL flag, float *fadeDuration)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3810
		jmp eax
	}
}

void __cdecl ShowUbersplat(HUBERSPLAT Splat, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B44F0
		jmp eax
	}
}

void __cdecl ShowUnit(HUNIT unit, BOOL show)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CE730
		jmp eax
	}
}

DWFP __cdecl Sin(float *radians)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2A10
		jmp eax
	}
}

void __cdecl Sleep(float *arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DE380
		jmp eax
	}
}

DWFP __cdecl SquareRoot(float *x)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2BA0
		jmp eax
	}
}

void __cdecl StartCampaignAI(HPLAYER num, CJassString script)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB770
		jmp eax
	}
}

void __cdecl StartGetEnemyBase()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DDCC0
		jmp eax
	}
}

void __cdecl StartMeleeAI(HPLAYER num, CJassString script)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB740
		jmp eax
	}
}

void __cdecl StartSound(HSOUND soundHandle)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCE80
		jmp eax
	}
}

void __cdecl StartThread(CODE arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DE2A0
		jmp eax
	}
}

void __cdecl StopCamera()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B46E0
		jmp eax
	}
}

void __cdecl StopGathering()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DCE00
		jmp eax
	}
}

void __cdecl StopMusic(BOOL fadeOut)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3D80
		jmp eax
	}
}

void __cdecl StopSound(HSOUND soundHandle, BOOL killWhenDone, BOOL fadeOut)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCEB0
		jmp eax
	}
}

void __cdecl StoreBoolean(HGAMECACHE cache, CJassString missionKey, CJassString key, BOOL value)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA140
		jmp eax
	}
}

void __cdecl StoreInteger(HGAMECACHE cache, CJassString missionKey, CJassString key, int value)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA0A0
		jmp eax
	}
}

void __cdecl StoreReal(HGAMECACHE cache, CJassString missionKey, CJassString key, float *value)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA0F0
		jmp eax
	}
}

BOOL __cdecl StoreString(HGAMECACHE cache, CJassString missionKey, CJassString key, CJassString value)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA680
		jmp eax
	}
}

BOOL __cdecl StoreUnit(HGAMECACHE cache, CJassString missionKey, CJassString key, HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA1A0
		jmp eax
	}
}

CJassStringSID __cdecl StringCase(CJassString source, BOOL upper)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BAC40
		jmp eax
	}
}

int __cdecl StringHash(CJassString s)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2D30
		jmp eax
	}
}

int __cdecl StringLength(CJassString s)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BAC20
		jmp eax
	}
}

CJassStringSID __cdecl SubString(CJassString source, int start, int end)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BABA0
		jmp eax
	}
}

BOOL __cdecl SuicidePlayer(HPLAYER arg1, BOOL arg2)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E2F00
		jmp eax
	}
}

BOOL __cdecl SuicidePlayerUnits(HPLAYER arg1, BOOL arg2)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E2F90
		jmp eax
	}
}

void __cdecl SuicideUnit(int arg1, int arg2)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DE330
		jmp eax
	}
}

void __cdecl SuicideUnitEx(int arg1, int arg2, int arg3)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DE2E0
		jmp eax
	}
}

void __cdecl SuspendHeroXP(HUNIT hero, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C6E10
		jmp eax
	}
}

void __cdecl SuspendTimeOfDay(BOOL b)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BC460
		jmp eax
	}
}

void __cdecl SyncSelections()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB740
		jmp eax
	}
}

void __cdecl SyncStoredBoolean(HGAMECACHE cache, CJassString missionKey, CJassString key)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA780
		jmp eax
	}
}

void __cdecl SyncStoredInteger(HGAMECACHE cache, CJassString missionKey, CJassString key)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA6E0
		jmp eax
	}
}

void __cdecl SyncStoredReal(HGAMECACHE cache, CJassString missionKey, CJassString key)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA730
		jmp eax
	}
}

void __cdecl SyncStoredString(HGAMECACHE cache, CJassString missionKey, CJassString key)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA820
		jmp eax
	}
}

void __cdecl SyncStoredUnit(HGAMECACHE cache, CJassString missionKey, CJassString key)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CA7D0
		jmp eax
	}
}

DWFP __cdecl Tan(float *radians)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2A50
		jmp eax
	}
}

void __cdecl TeleportCaptain(float *arg1, float *arg2)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD680
		jmp eax
	}
}

HTERRAINDEFORMATION __cdecl TerrainDeformCrater(float *x, float *y, float *radius, float *depth, int duration, BOOL permanent)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3E90
		jmp eax
	}
}

HTERRAINDEFORMATION __cdecl TerrainDeformRandom(float *x, float *y, float *radius, float *minDelta, float *maxDelta, int duration, int updateInterval)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B4040
		jmp eax
	}
}

HTERRAINDEFORMATION __cdecl TerrainDeformRipple(float *x, float *y, float *radius, float *depth, int duration, int count, float *spaceWaves, float *timeWaves, float *radiusStartPct, BOOL limitNeg)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3F00
		jmp eax
	}
}

void __cdecl TerrainDeformStop(HTERRAINDEFORMATION deformation, int duration)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B40B0
		jmp eax
	}
}

void __cdecl TerrainDeformStopAll()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B40C0
		jmp eax
	}
}

HTERRAINDEFORMATION __cdecl TerrainDeformWave(float *x, float *y, float *dirX, float *dirY, float *distance, float *speed, float *radius, float *depth, int trailTime, int count)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3FA0
		jmp eax
	}
}

void __cdecl TimerDialogDisplay(HTIMERDIALOG Dialog, BOOL display)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBF50
		jmp eax
	}
}

void __cdecl TimerDialogSetRealTimeRemaining(HTIMERDIALOG Dialog, float *timeRemaining)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBFA0
		jmp eax
	}
}

void __cdecl TimerDialogSetSpeed(HTIMERDIALOG Dialog, float *speedMultFactor)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBF20
		jmp eax
	}
}

void __cdecl TimerDialogSetTimeColor(HTIMERDIALOG Dialog, int red, int green, int blue, int alpha)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBED0
		jmp eax
	}
}

void __cdecl TimerDialogSetTitle(HTIMERDIALOG Dialog, CJassString title)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBE50
		jmp eax
	}
}

void __cdecl TimerDialogSetTitleColor(HTIMERDIALOG Dialog, int red, int green, int blue, int alpha)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CBE80
		jmp eax
	}
}

DWFP __cdecl TimerGetElapsed(HTIMER Timer)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C13A0
		jmp eax
	}
}

DWFP __cdecl TimerGetRemaining(HTIMER Timer)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C13C0
		jmp eax
	}
}

DWFP __cdecl TimerGetTimeout(HTIMER Timer)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C13E0
		jmp eax
	}
}

void __cdecl TimerStart(HTIMER Timer, float *timeout, BOOL periodic, CODE handlerFunc)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1370
		jmp eax
	}
}

BOOL __cdecl TownHasHall(int arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DE0A0
		jmp eax
	}
}

BOOL __cdecl TownHasMine(int arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DE060
		jmp eax
	}
}

BOOL __cdecl TownThreatened()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DD8E0
		jmp eax
	}
}

int __cdecl TownWithMine()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DE030
		jmp eax
	}
}

HTRIGGERACTION __cdecl TriggerAddAction(HTRIGGER Trigger, CODE actionFunc)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3E90
		jmp eax
	}
}

HTRIGGERCONDITION __cdecl TriggerAddCondition(HTRIGGER Trigger, HBOOLEXPR condition)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3DF0
		jmp eax
	}
}

void __cdecl TriggerClearActions(HTRIGGER Trigger)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3F00
		jmp eax
	}
}

void __cdecl TriggerClearConditions(HTRIGGER Trigger)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3E70
		jmp eax
	}
}

BOOL __cdecl TriggerEvaluate(HTRIGGER Trigger)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3F80
		jmp eax
	}
}

void __cdecl TriggerExecute(HTRIGGER Trigger)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3F40
		jmp eax
	}
}

void __cdecl TriggerExecuteWait(HTRIGGER Trigger)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3F60
		jmp eax
	}
}

HEVENT __cdecl TriggerRegisterDeathEvent(HTRIGGER Trigger, HWIDGET widget)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D22C0
		jmp eax
	}
}

HEVENT __cdecl TriggerRegisterDialogButtonEvent(HTRIGGER Trigger, HBUTTON Button)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D1880
		jmp eax
	}
}

HEVENT __cdecl TriggerRegisterDialogEvent(HTRIGGER Trigger, HDIALOG Dialog)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D17A0
		jmp eax
	}
}

HEVENT __cdecl TriggerRegisterEnterRegion(HTRIGGER Trigger, HREGION Region, HBOOLEXPR filter)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D2700
		jmp eax
	}
}

HEVENT __cdecl TriggerRegisterFilterUnitEvent(HTRIGGER Trigger, HUNIT unit, HUNITEVENT Event, HBOOLEXPR filter)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D24D0
		jmp eax
	}
}

HEVENT __cdecl TriggerRegisterGameEvent(HTRIGGER Trigger, HGAMEEVENT GameEvent)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D1960
		jmp eax
	}
}

HEVENT __cdecl TriggerRegisterGameStateEvent(HTRIGGER Trigger, HGAMESTATE State, HLIMITOP opcode, float *limitval)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D1630
		jmp eax
	}
}

HEVENT __cdecl TriggerRegisterLeaveRegion(HTRIGGER Trigger, HREGION Region, HBOOLEXPR filter)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D2800
		jmp eax
	}
}

HEVENT __cdecl TriggerRegisterPlayerAllianceChange(HTRIGGER Trigger, HPLAYER player, HALLIANCETYPE Alliance)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D1BA0
		jmp eax
	}
}

HEVENT __cdecl TriggerRegisterPlayerChatEvent(HTRIGGER Trigger, HPLAYER player, CJassString chatMessageToDetect, BOOL exactMatchOnly)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D1EF0
		jmp eax
	}
}

HEVENT __cdecl TriggerRegisterPlayerEvent(HTRIGGER Trigger, HPLAYER player, HPLAYEREVENT PlayerEvent)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D1C90
		jmp eax
	}
}

HEVENT __cdecl TriggerRegisterPlayerStateEvent(HTRIGGER Trigger, HPLAYER player, HPLAYERSTATE State, HLIMITOP opcode, float *limitval)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D1A60
		jmp eax
	}
}

HEVENT __cdecl TriggerRegisterPlayerUnitEvent(HTRIGGER Trigger, HPLAYER player, HPLAYERUNITEVENT PlayerUnitEvent, HBOOLEXPR filter)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D1DD0
		jmp eax
	}
}

HEVENT __cdecl TriggerRegisterTimerEvent(HTRIGGER Trigger, float *timeout, BOOL periodic)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D1420
		jmp eax
	}
}

HEVENT __cdecl TriggerRegisterTimerExpireEvent(HTRIGGER Trigger, HTIMER t)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D1550
		jmp eax
	}
}

HEVENT __cdecl TriggerRegisterTrackableHitEvent(HTRIGGER Trigger, HTRACKABLE t)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D31C0
		jmp eax
	}
}

HEVENT __cdecl TriggerRegisterTrackableTrackEvent(HTRIGGER Trigger, HTRACKABLE t)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D32A0
		jmp eax
	}
}

HEVENT __cdecl TriggerRegisterUnitEvent(HTRIGGER Trigger, HUNIT unit, HUNITEVENT Event)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D23B0
		jmp eax
	}
}

HEVENT __cdecl TriggerRegisterUnitInRange(HTRIGGER Trigger, HUNIT unit, float *range, HBOOLEXPR filter)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D25F0
		jmp eax
	}
}

HEVENT __cdecl TriggerRegisterUnitStateEvent(HTRIGGER Trigger, HUNIT unit, HUNITSTATE State, HLIMITOP opcode, float *limitval)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D21B0
		jmp eax
	}
}

HEVENT __cdecl TriggerRegisterVariableEvent(HTRIGGER Trigger, CJassString varName, HLIMITOP opcode, float *limitval)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3D12E0
		jmp eax
	}
}

void __cdecl TriggerRemoveAction(HTRIGGER Trigger, HTRIGGERACTION Action)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3ED0
		jmp eax
	}
}

void __cdecl TriggerRemoveCondition(HTRIGGER Trigger, HTRIGGERCONDITION Condition)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3E40
		jmp eax
	}
}

void __cdecl TriggerSleepAction(float *timeout)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2DB0
		jmp eax
	}
}

void __cdecl TriggerSyncReady()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB710
		jmp eax
	}
}

void __cdecl TriggerSyncStart()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B2DC0
		jmp eax
	}
}

void __cdecl TriggerWaitForSound(HSOUND s, float *offset)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C3F20
		jmp eax
	}
}

void __cdecl TriggerWaitOnSleeps(HTRIGGER Trigger, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C1CA0
		jmp eax
	}
}

BOOL __cdecl UnitAddAbility(HUNIT unit, int AbilID)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C82A0
		jmp eax
	}
}

void __cdecl UnitAddIndicator(HUNIT unit, int red, int green, int blue, int alpha)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C6BD0
		jmp eax
	}
}

BOOL __cdecl UnitAddItem(HUNIT unit, HITEM item)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C73F0
		jmp eax
	}
}

HITEM __cdecl UnitAddItemById(HUNIT unit, int itemId)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C74F0
		jmp eax
	}
}

BOOL __cdecl UnitAddItemToSlotById(HUNIT unit, int itemId, int itemSlot)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C75B0
		jmp eax
	}
}

void __cdecl UnitAddSleep(HUNIT unit, BOOL add)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8450
		jmp eax
	}
}

void __cdecl UnitAddSleepPerm(HUNIT unit, BOOL add)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C84D0
		jmp eax
	}
}

BOOL __cdecl UnitAddType(HUNIT unit, HUNITTYPE UnitType)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7BC0
		jmp eax
	}
}

BOOL __cdecl UnitAlive(HUNIT arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E0760
		jmp eax
	}
}

void __cdecl UnitApplyTimedLife(HUNIT unit, int buffId, float *duration)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C85D0
		jmp eax
	}
}

BOOL __cdecl UnitCanSleep(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C84A0
		jmp eax
	}
}

BOOL __cdecl UnitCanSleepPerm(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8520
		jmp eax
	}
}

int __cdecl UnitCountBuffsEx(HUNIT unit, BOOL removePositive, BOOL removeNegative, BOOL magic, BOOL physical, BOOL timedLife, BOOL aura, BOOL autoDispel)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C83A0
		jmp eax
	}
}

BOOL __cdecl UnitDamagePoint(HUNIT unit, float *delay, float *radius, float *x, float *y, float *amount, BOOL attack, BOOL ranged, HATTACKTYPE attackType, HDAMAGETYPE damageType, HWEAPONTYPE weaponType)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8770
		jmp eax
	}
}

BOOL __cdecl UnitDamageTarget(HUNIT unit, HWIDGET target, float *amount, BOOL attack, BOOL ranged, HATTACKTYPE attackType, HDAMAGETYPE damageType, HWEAPONTYPE weaponType)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8850
		jmp eax
	}
}

BOOL __cdecl UnitDropItemPoint(HUNIT unit, HITEM item, float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8F30
		jmp eax
	}
}

BOOL __cdecl UnitDropItemSlot(HUNIT unit, HITEM item, int slot)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9010
		jmp eax
	}
}

BOOL __cdecl UnitDropItemTarget(HUNIT unit, HITEM item, HWIDGET target)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8FA0
		jmp eax
	}
}

BOOL __cdecl UnitHasBuffsEx(HUNIT unit, BOOL removePositive, BOOL removeNegative, BOOL magic, BOOL physical, BOOL timedLife, BOOL aura, BOOL autoDispel)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8360
		jmp eax
	}
}

BOOL __cdecl UnitHasItem(HUNIT unit, HITEM item)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C76F0
		jmp eax
	}
}

int __cdecl UnitId(CJassString unitIdString)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB650
		jmp eax
	}
}

CJassStringSID __cdecl UnitId2String(int unitId)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3BB680
		jmp eax
	}
}

BOOL __cdecl UnitIgnoreAlarm(HUNIT unit, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8640
		jmp eax
	}
}

BOOL __cdecl UnitIgnoreAlarmToggled(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8690
		jmp eax
	}
}

int __cdecl UnitInventorySize(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8F00
		jmp eax
	}
}

BOOL __cdecl UnitInvis(HUNIT arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E07C0
		jmp eax
	}
}

BOOL __cdecl UnitIsSleeping(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8550
		jmp eax
	}
}

HITEM __cdecl UnitItemInSlot(HUNIT unit, int itemSlot)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7730
		jmp eax
	}
}

BOOL __cdecl UnitMakeAbilityPermanent(HUNIT unit, BOOL permanent, int AbilID)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8250
		jmp eax
	}
}

BOOL __cdecl UnitModifySkillPoints(HUNIT hero, int skillPointDelta)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C69A0
		jmp eax
	}
}

void __cdecl UnitPauseTimedLife(HUNIT unit, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8750
		jmp eax
	}
}

void __cdecl UnitPoolAddUnitType(HUNITPOOL Pool, int unitId, float *weight)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB5E0
		jmp eax
	}
}

void __cdecl UnitPoolRemoveUnitType(HUNITPOOL Pool, int unitId)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB600
		jmp eax
	}
}

BOOL __cdecl UnitRemoveAbility(HUNIT unit, int AbilID)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8310
		jmp eax
	}
}

void __cdecl UnitRemoveBuffs(HUNIT unit, BOOL removePositive, BOOL removeNegative)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C83E0
		jmp eax
	}
}

void __cdecl UnitRemoveBuffsEx(HUNIT unit, BOOL removePositive, BOOL removeNegative, BOOL magic, BOOL physical, BOOL timedLife, BOOL aura, BOOL autoDispel)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8410
		jmp eax
	}
}

void __cdecl UnitRemoveItem(HUNIT unit, HITEM item)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7660
		jmp eax
	}
}

HITEM __cdecl UnitRemoveItemFromSlot(HUNIT unit, int itemSlot)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C76A0
		jmp eax
	}
}

BOOL __cdecl UnitRemoveType(HUNIT unit, HUNITTYPE UnitType)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C7C20
		jmp eax
	}
}

void __cdecl UnitResetCooldown(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C86D0
		jmp eax
	}
}

void __cdecl UnitSetConstructionProgress(HUNIT unit, int constructionPercentage)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C86F0
		jmp eax
	}
}

void __cdecl UnitSetUpgradeProgress(HUNIT unit, int upgradePercentage)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8720
		jmp eax
	}
}

void __cdecl UnitSetUsesAltIcon(HUNIT unit, BOOL flag)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CB860
		jmp eax
	}
}

void __cdecl UnitShareVision(HUNIT unit, HPLAYER player, BOOL share)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C81C0
		jmp eax
	}
}

BOOL __cdecl UnitStripHeroLevel(HUNIT hero, int howManyLevels)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C6930
		jmp eax
	}
}

void __cdecl UnitSuspendDecay(HUNIT unit, BOOL suspend)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C81F0
		jmp eax
	}
}

BOOL __cdecl UnitUseItem(HUNIT unit, HITEM item)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9090
		jmp eax
	}
}

BOOL __cdecl UnitUseItemPoint(HUNIT unit, HITEM item, float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9100
		jmp eax
	}
}

BOOL __cdecl UnitUseItemTarget(HUNIT unit, HITEM item, HWIDGET target)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9170
		jmp eax
	}
}

void __cdecl UnitWakeUp(HUNIT unit)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C8590
		jmp eax
	}
}

void __cdecl UnregisterStackedSound(HSOUND soundHandle, BOOL byPosition, float *rectwidth, float *rectheight)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3CCFB0
		jmp eax
	}
}

void __cdecl Unsummon(HUNIT arg1)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2E08A0
		jmp eax
	}
}

BOOL __cdecl VersionCompatible(HVERSION Version)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3300
		jmp eax
	}
}

HVERSION __cdecl VersionGet()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B32F0
		jmp eax
	}
}

BOOL __cdecl VersionSupported(HVERSION Version)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3310
		jmp eax
	}
}

void __cdecl VolumeGroupReset()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3E50
		jmp eax
	}
}

void __cdecl VolumeGroupSetVolume(HVOLUMEGROUP vgroup, float *scale)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3B3E30
		jmp eax
	}
}

BOOL __cdecl WaitGetEnemyBase()
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x2DDCF0
		jmp eax
	}
}

void __cdecl WaygateActivate(HUNIT waygate, BOOL activate)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C92D0
		jmp eax
	}
}

DWFP __cdecl WaygateGetDestinationX(HUNIT waygate)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C91F0
		jmp eax
	}
}

DWFP __cdecl WaygateGetDestinationY(HUNIT waygate)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9240
		jmp eax
	}
}

BOOL __cdecl WaygateIsActive(HUNIT waygate)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9310
		jmp eax
	}
}

void __cdecl WaygateSetDestination(HUNIT waygate, float *x, float *y)
{
	_asm
	{
		mov eax, g_GameDllAddress
		add eax, 0x3C9290
		jmp eax
	}
}

