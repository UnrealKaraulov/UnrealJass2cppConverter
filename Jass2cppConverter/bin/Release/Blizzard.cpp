#include "Blizzard.h"
namespace Blizzard
{
//Global vars
JASSCPP::force bj_FORCE_ALL_PLAYERS = null;
JASSCPP::force bj_FORCE_PLAYER[32768];
JASSCPP::integer bj_MELEE_MAX_TWINKED_HEROES = 0;
JASSCPP::rect bj_mapInitialPlayableArea = null;
JASSCPP::rect bj_mapInitialCameraBounds = null;
JASSCPP::integer bj_forLoopAIndex = 0;
JASSCPP::integer bj_forLoopBIndex = 0;
JASSCPP::integer bj_forLoopAIndexEnd = 0;
JASSCPP::integer bj_forLoopBIndexEnd = 0;
JASSCPP::boolean bj_slotControlReady = false;
JASSCPP::boolean bj_slotControlUsed[32768];
JASSCPP::mapcontrol bj_slotControl[32768];
JASSCPP::timer bj_gameStartedTimer = null;
JASSCPP::boolean bj_gameStarted = false;
JASSCPP::timer bj_volumeGroupsTimer = CreateTimer();
JASSCPP::boolean bj_isSinglePlayer = false;
JASSCPP::trigger bj_dncSoundsDay = null;
JASSCPP::trigger bj_dncSoundsNight = null;
JASSCPP::sound bj_dayAmbientSound = null;
JASSCPP::sound bj_nightAmbientSound = null;
JASSCPP::trigger bj_dncSoundsDawn = null;
JASSCPP::trigger bj_dncSoundsDusk = null;
JASSCPP::sound bj_dawnSound = null;
JASSCPP::sound bj_duskSound = null;
JASSCPP::boolean bj_useDawnDuskSounds = true;
JASSCPP::boolean bj_dncIsDaytime = false;
JASSCPP::sound bj_rescueSound = null;
JASSCPP::sound bj_questDiscoveredSound = null;
JASSCPP::sound bj_questUpdatedSound = null;
JASSCPP::sound bj_questCompletedSound = null;
JASSCPP::sound bj_questFailedSound = null;
JASSCPP::sound bj_questHintSound = null;
JASSCPP::sound bj_questSecretSound = null;
JASSCPP::sound bj_questItemAcquiredSound = null;
JASSCPP::sound bj_questWarningSound = null;
JASSCPP::sound bj_victoryDialogSound = null;
JASSCPP::sound bj_defeatDialogSound = null;
JASSCPP::trigger bj_stockItemPurchased = null;
JASSCPP::timer bj_stockUpdateTimer = null;
JASSCPP::boolean bj_stockAllowedPermanent[32768];
JASSCPP::boolean bj_stockAllowedCharged[32768];
JASSCPP::boolean bj_stockAllowedArtifact[32768];
JASSCPP::integer bj_stockPickedItemLevel = 0;
JASSCPP::itemtype bj_stockPickedItemType;
JASSCPP::trigger bj_meleeVisibilityTrained = null;
JASSCPP::boolean bj_meleeVisibilityIsDay = true;
JASSCPP::boolean bj_meleeGrantHeroItems = false;
JASSCPP::location bj_meleeNearestMineToLoc = null;
JASSCPP::unit bj_meleeNearestMine = null;
JASSCPP::real bj_meleeNearestMineDist = 0.00;
JASSCPP::boolean bj_meleeGameOver = false;
JASSCPP::boolean bj_meleeDefeated[32768];
JASSCPP::boolean bj_meleeVictoried[32768];
JASSCPP::unit bj_ghoul[32768];
JASSCPP::timer bj_crippledTimer[32768];
JASSCPP::timerdialog bj_crippledTimerWindows[32768];
JASSCPP::boolean bj_playerIsCrippled[32768];
JASSCPP::boolean bj_playerIsExposed[32768];
JASSCPP::boolean bj_finishSoonAllExposed = false;
JASSCPP::timerdialog bj_finishSoonTimerDialog = null;
JASSCPP::integer bj_meleeTwinkedHeroes[32768];
JASSCPP::trigger bj_rescueUnitBehavior = null;
JASSCPP::boolean bj_rescueChangeColorUnit = true;
JASSCPP::boolean bj_rescueChangeColorBldg = true;
JASSCPP::timer bj_cineSceneEndingTimer = null;
JASSCPP::sound bj_cineSceneLastSound = null;
JASSCPP::trigger bj_cineSceneBeingSkipped = null;
JASSCPP::gamespeed bj_cineModePriorSpeed = MAP_SPEED_NORMAL;
JASSCPP::boolean bj_cineModePriorFogSetting = false;
JASSCPP::boolean bj_cineModePriorMaskSetting = false;
JASSCPP::boolean bj_cineModeAlreadyIn = false;
JASSCPP::boolean bj_cineModePriorDawnDusk = false;
JASSCPP::integer bj_cineModeSavedSeed = 0;
JASSCPP::timer bj_cineFadeFinishTimer = null;
JASSCPP::timer bj_cineFadeContinueTimer = null;
JASSCPP::real bj_cineFadeContinueRed = 0;
JASSCPP::real bj_cineFadeContinueGreen = 0;
JASSCPP::real bj_cineFadeContinueBlue = 0;
JASSCPP::real bj_cineFadeContinueTrans = 0;
JASSCPP::real bj_cineFadeContinueDuration = 0;
JASSCPP::string bj_cineFadeContinueTex = "";
JASSCPP::integer bj_queuedExecTotal = 0;
JASSCPP::trigger bj_queuedExecTriggers[32768];
JASSCPP::boolean bj_queuedExecUseConds[32768];
JASSCPP::timer bj_queuedExecTimeoutTimer = CreateTimer();
JASSCPP::trigger bj_queuedExecTimeout = null;
JASSCPP::integer bj_destInRegionDiesCount = 0;
JASSCPP::trigger bj_destInRegionDiesTrig = null;
JASSCPP::integer bj_groupCountUnits = 0;
JASSCPP::integer bj_forceCountPlayers = 0;
JASSCPP::integer bj_groupEnumTypeId = 0;
JASSCPP::player bj_groupEnumOwningPlayer = null;
JASSCPP::group bj_groupAddGroupDest = null;
JASSCPP::group bj_groupRemoveGroupDest = null;
JASSCPP::integer bj_groupRandomConsidered = 0;
JASSCPP::unit bj_groupRandomCurrentPick = null;
JASSCPP::group bj_groupLastCreatedDest = null;
JASSCPP::group bj_randomSubGroupGroup = null;
JASSCPP::integer bj_randomSubGroupWant = 0;
JASSCPP::integer bj_randomSubGroupTotal = 0;
JASSCPP::real bj_randomSubGroupChance = 0;
JASSCPP::integer bj_destRandomConsidered = 0;
JASSCPP::destructable bj_destRandomCurrentPick = null;
JASSCPP::destructable bj_elevatorWallBlocker = null;
JASSCPP::destructable bj_elevatorNeighbor = null;
JASSCPP::integer bj_itemRandomConsidered = 0;
JASSCPP::item bj_itemRandomCurrentPick = null;
JASSCPP::integer bj_forceRandomConsidered = 0;
JASSCPP::player bj_forceRandomCurrentPick = null;
JASSCPP::unit bj_makeUnitRescuableUnit = null;
JASSCPP::boolean bj_makeUnitRescuableFlag = true;
JASSCPP::boolean bj_pauseAllUnitsFlag = true;
JASSCPP::location bj_enumDestructableCenter = null;
JASSCPP::real bj_enumDestructableRadius = 0;
JASSCPP::playercolor bj_setPlayerTargetColor = null;
JASSCPP::boolean bj_isUnitGroupDeadResult = true;
JASSCPP::boolean bj_isUnitGroupEmptyResult = true;
JASSCPP::boolean bj_isUnitGroupInRectResult = true;
JASSCPP::rect bj_isUnitGroupInRectRect = null;
JASSCPP::boolean bj_changeLevelShowScores = false;
JASSCPP::string bj_changeLevelMapName = null;
JASSCPP::group bj_suspendDecayFleshGroup = CreateGroup();
JASSCPP::group bj_suspendDecayBoneGroup = CreateGroup();
JASSCPP::timer bj_delayedSuspendDecayTimer = CreateTimer();
JASSCPP::trigger bj_delayedSuspendDecayTrig = null;
JASSCPP::integer bj_livingPlayerUnitsTypeId = 0;
JASSCPP::widget bj_lastDyingWidget = null;
JASSCPP::integer bj_randDistCount = 0;
JASSCPP::integer bj_randDistID[32768];
JASSCPP::integer bj_randDistChance[32768];
JASSCPP::unit bj_lastCreatedUnit = null;
JASSCPP::item bj_lastCreatedItem = null;
JASSCPP::item bj_lastRemovedItem = null;
JASSCPP::unit bj_lastHauntedGoldMine = null;
JASSCPP::destructable bj_lastCreatedDestructable = null;
JASSCPP::group bj_lastCreatedGroup = CreateGroup();
JASSCPP::fogmodifier bj_lastCreatedFogModifier = null;
JASSCPP::effect bj_lastCreatedEffect = null;
JASSCPP::weathereffect bj_lastCreatedWeatherEffect = null;
JASSCPP::terraindeformation bj_lastCreatedTerrainDeformation = null;
JASSCPP::quest bj_lastCreatedQuest = null;
JASSCPP::questitem bj_lastCreatedQuestItem = null;
JASSCPP::defeatcondition bj_lastCreatedDefeatCondition = null;
JASSCPP::timer bj_lastStartedTimer = CreateTimer();
JASSCPP::timerdialog bj_lastCreatedTimerDialog = null;
JASSCPP::leaderboard bj_lastCreatedLeaderboard = null;
JASSCPP::sound bj_lastPlayedSound = null;
JASSCPP::string bj_lastPlayedMusic = "";
JASSCPP::real bj_lastTransmissionDuration = 0;
JASSCPP::gamecache bj_lastCreatedGameCache = null;
JASSCPP::unit bj_lastLoadedUnit = null;
JASSCPP::button bj_lastCreatedButton = null;
JASSCPP::unit bj_lastReplacedUnit = null;
JASSCPP::texttag bj_lastCreatedTextTag = null;
JASSCPP::boolexpr filterIssueHauntOrderAtLocBJ = null;
JASSCPP::boolexpr filterEnumDestructablesInCircleBJ = null;
JASSCPP::boolexpr filterGetUnitsInRectOfPlayer = null;
JASSCPP::boolexpr filterGetUnitsOfTypeIdAll = null;
JASSCPP::boolexpr filterGetUnitsOfPlayerAndTypeId = null;
JASSCPP::boolexpr filterMeleeTrainedUnitIsHeroBJ = null;
JASSCPP::boolexpr filterLivingPlayerUnitsOfTypeId = null;
JASSCPP::boolean bj_wantDestroyGroup = false;
//Functions
void BJDebugMsg(JASSCPP::string msg)
{
    JASSCPP::integer i = 0;
    while (true)
    {
        DisplayTimedTextToPlayer(Player(i),0,0,60,msg);
        i = i + 1;
        if (i == bj_MAX_PLAYERS) break;
    }
}
JASSCPP::real RMinBJ(JASSCPP::real a,JASSCPP::real b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
JASSCPP::real RMaxBJ(JASSCPP::real a,JASSCPP::real b)
{
    if (a < b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
JASSCPP::real RAbsBJ(JASSCPP::real a)
{
    if (a >= 0)
    {
        return a;
    }
    else
    {
        return -a;
    }
}
JASSCPP::real RSignBJ(JASSCPP::real a)
{
    if (a >= 0.0)
    {
        return 1.0;
    }
    else
    {
        return -1.0;
    }
}
JASSCPP::integer IMinBJ(JASSCPP::integer a,JASSCPP::integer b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
JASSCPP::integer IMaxBJ(JASSCPP::integer a,JASSCPP::integer b)
{
    if (a < b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
JASSCPP::integer IAbsBJ(JASSCPP::integer a)
{
    if (a >= 0)
    {
        return a;
    }
    else
    {
        return -a;
    }
}
JASSCPP::integer ISignBJ(JASSCPP::integer a)
{
    if (a >= 0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
JASSCPP::real SinBJ(JASSCPP::real degrees)
{
    return Sin(degrees * bj_DEGTORAD);
}
JASSCPP::real CosBJ(JASSCPP::real degrees)
{
    return Cos(degrees * bj_DEGTORAD);
}
JASSCPP::real TanBJ(JASSCPP::real degrees)
{
    return Tan(degrees * bj_DEGTORAD);
}
JASSCPP::real AsinBJ(JASSCPP::real degrees)
{
    return Asin(degrees) * bj_RADTODEG;
}
JASSCPP::real AcosBJ(JASSCPP::real degrees)
{
    return Acos(degrees) * bj_RADTODEG;
}
JASSCPP::real AtanBJ(JASSCPP::real degrees)
{
    return Atan(degrees) * bj_RADTODEG;
}
JASSCPP::real Atan2BJ(JASSCPP::real y,JASSCPP::real x)
{
    return Atan2(y, x) * bj_RADTODEG;
}
JASSCPP::real AngleBetweenPoints(JASSCPP::location locA,JASSCPP::location locB)
{
    return bj_RADTODEG * Atan2(GetLocationY(locB) - GetLocationY(locA), GetLocationX(locB) - GetLocationX(locA));
}
JASSCPP::real DistanceBetweenPoints(JASSCPP::location locA,JASSCPP::location locB)
{
    JASSCPP::real dx = GetLocationX(locB) - GetLocationX(locA);
    JASSCPP::real dy = GetLocationY(locB) - GetLocationY(locA);
    return SquareRoot(dx * dx + dy * dy);
}
JASSCPP::location PolarProjectionBJ(JASSCPP::location source,JASSCPP::real dist,JASSCPP::real angle)
{
    JASSCPP::real x = GetLocationX(source) + dist * Cos(angle * bj_DEGTORAD);
    JASSCPP::real y = GetLocationY(source) + dist * Sin(angle * bj_DEGTORAD);
    return Location(x, y);
}
JASSCPP::real GetRandomDirectionDeg()
{
    return GetRandomReal(0, 360);
}
JASSCPP::real GetRandomPercentageBJ()
{
    return GetRandomReal(0, 100);
}
JASSCPP::location GetRandomLocInRect(JASSCPP::rect whichRect)
{
    return Location(GetRandomReal(GetRectMinX(whichRect), GetRectMaxX(whichRect)), GetRandomReal(GetRectMinY(whichRect), GetRectMaxY(whichRect)));
}
JASSCPP::integer ModuloInteger(JASSCPP::integer dividend,JASSCPP::integer divisor)
{
    JASSCPP::integer modulus = dividend - (dividend / divisor) * divisor;
    if (modulus < 0)
    {
        modulus = modulus + divisor;
    }
    return modulus;
}
JASSCPP::real ModuloReal(JASSCPP::real dividend,JASSCPP::real divisor)
{
    JASSCPP::real modulus = dividend - I2R(R2I(dividend / divisor)) * divisor;
    if (modulus < 0)
    {
        modulus = modulus + divisor;
    }
    return modulus;
}
JASSCPP::location OffsetLocation(JASSCPP::location loc,JASSCPP::real dx,JASSCPP::real dy)
{
    return Location(GetLocationX(loc) + dx, GetLocationY(loc) + dy);
}
JASSCPP::rect OffsetRectBJ(JASSCPP::rect r,JASSCPP::real dx,JASSCPP::real dy)
{
    return Rect( GetRectMinX(r) + dx, GetRectMinY(r) + dy, GetRectMaxX(r) + dx, GetRectMaxY(r) + dy );
}
JASSCPP::rect RectFromCenterSizeBJ(JASSCPP::location center,JASSCPP::real width,JASSCPP::real height)
{
    JASSCPP::real x = GetLocationX( center );
    JASSCPP::real y = GetLocationY( center );
    return Rect( x - width*0.5, y - height*0.5, x + width*0.5, y + height*0.5 );
}
JASSCPP::boolean RectContainsCoords(JASSCPP::rect r,JASSCPP::real x,JASSCPP::real y)
{
    return (GetRectMinX(r) <= x) && (x <= GetRectMaxX(r)) && (GetRectMinY(r) <= y) && (y <= GetRectMaxY(r));
}
JASSCPP::boolean RectContainsLoc(JASSCPP::rect r,JASSCPP::location loc)
{
    return RectContainsCoords(r, GetLocationX(loc), GetLocationY(loc));
}
JASSCPP::boolean RectContainsUnit(JASSCPP::rect r,JASSCPP::unit whichUnit)
{
    return RectContainsCoords(r, GetUnitX(whichUnit), GetUnitY(whichUnit));
}
JASSCPP::boolean RectContainsItem(JASSCPP::item whichItem,JASSCPP::rect r)
{
    if (whichItem == null)
    {
        return false;
    }
    if (IsItemOwned(whichItem))
    {
        return false;
    }
    return RectContainsCoords(r, GetItemX(whichItem), GetItemY(whichItem));
}
void ConditionalTriggerExecute(JASSCPP::trigger trig)
{
    if (TriggerEvaluate(trig))
    {
        TriggerExecute(trig);
    }
}
JASSCPP::boolean TriggerExecuteBJ(JASSCPP::trigger trig,JASSCPP::boolean checkConditions)
{
    if (checkConditions)
    {
        if (!(TriggerEvaluate(trig)))
        {
            return false;
        }
    }
    TriggerExecute(trig);
    return true;
}
JASSCPP::boolean PostTriggerExecuteBJ(JASSCPP::trigger trig,JASSCPP::boolean checkConditions)
{
    if (checkConditions)
    {
        if (!(TriggerEvaluate(trig)))
        {
            return false;
        }
    }
    TriggerRegisterTimerEvent(trig, 0, false);
    return true;
}
void QueuedTriggerCheck()
{
    JASSCPP::string s = "TrigQueue Check ";
    JASSCPP::integer i;
    i = 0;
    while (true)
    {
        if (i >= bj_queuedExecTotal) break;
        s = s + "q[" + I2S(i) + "]=";
        if (bj_queuedExecTriggers[i] == null)
        {
            s = s + "null ";
        }
        else
        {
            s = s + "x ";
        }
        i = i + 1;
    }
    s = s + "(" + I2S(bj_queuedExecTotal) + " total)";
    DisplayTimedTextToPlayer(GetLocalPlayer(),0,0,600,s);
}
JASSCPP::integer QueuedTriggerGetIndex(JASSCPP::trigger trig)
{
    JASSCPP::integer index = 0;
    while (true)
    {
        if (index >= bj_queuedExecTotal) break;
        if (bj_queuedExecTriggers[index] == trig)
        {
            return index;
        }
        index = index + 1;
    }
    return -1;
}
JASSCPP::boolean QueuedTriggerRemoveByIndex(JASSCPP::integer trigIndex)
{
    JASSCPP::integer index;
    if (trigIndex >= bj_queuedExecTotal)
    {
        return false;
    }
    // Shift all queue entries down to fill in the gap.
    bj_queuedExecTotal = bj_queuedExecTotal - 1;
    index = trigIndex;
    while (true)
    {
        if (index >= bj_queuedExecTotal) break;
        bj_queuedExecTriggers[index] = bj_queuedExecTriggers[index + 1];
        bj_queuedExecUseConds[index] = bj_queuedExecUseConds[index + 1];
        index = index + 1;
    }
    return true;
}
JASSCPP::boolean QueuedTriggerAttemptExec()
{
    while (true)
    {
        if (bj_queuedExecTotal == 0) break;
        if (TriggerExecuteBJ(bj_queuedExecTriggers[0], bj_queuedExecUseConds[0]))
        {
            // Timeout the queue if it sits at the front of the queue for too long.
            TimerStart(bj_queuedExecTimeoutTimer, bj_QUEUED_TRIGGER_TIMEOUT, false, null);
            return true;
        }
        QueuedTriggerRemoveByIndex(0);
    }
    return false;
}
JASSCPP::boolean QueuedTriggerAddBJ(JASSCPP::trigger trig,JASSCPP::boolean checkConditions)
{
    if (bj_queuedExecTotal >= bj_MAX_QUEUED_TRIGGERS)
    {
        return false;
    }
    // Add the trigger to an array of to-be-executed triggers.
    bj_queuedExecTriggers[bj_queuedExecTotal] = trig;
    bj_queuedExecUseConds[bj_queuedExecTotal] = checkConditions;
    bj_queuedExecTotal = bj_queuedExecTotal + 1;
    // If this is the only trigger in the queue, run it.
    if (bj_queuedExecTotal == 1)
    {
        QueuedTriggerAttemptExec();
    }
    return true;
}
void QueuedTriggerRemoveBJ(JASSCPP::trigger trig)
{
    JASSCPP::integer index;
    JASSCPP::integer trigIndex;
    JASSCPP::boolean trigExecuted;
    trigIndex = QueuedTriggerGetIndex(trig);
    if (trigIndex == -1)
    {
        return;
    }
    // Shuffle the other trigger entries down to fill in the gap.
    QueuedTriggerRemoveByIndex(trigIndex);
    // If we just axed the currently running trigger, run the next one.
    if (trigIndex == 0)
    {
        PauseTimer(bj_queuedExecTimeoutTimer);
        QueuedTriggerAttemptExec();
    }
}
void QueuedTriggerDoneBJ()
{
    JASSCPP::integer index;
    if (bj_queuedExecTotal <= 0)
    {
        return;
    }
    // Remove the currently running trigger from the array.
    QueuedTriggerRemoveByIndex(0);
    // If other triggers are waiting to run, run one of them.
    PauseTimer(bj_queuedExecTimeoutTimer);
    QueuedTriggerAttemptExec();
}
void QueuedTriggerClearBJ()
{
    PauseTimer(bj_queuedExecTimeoutTimer);
    bj_queuedExecTotal = 0;
}
void QueuedTriggerClearInactiveBJ()
{
    bj_queuedExecTotal = IMinBJ(bj_queuedExecTotal, 1);
}
JASSCPP::integer QueuedTriggerCountBJ()
{
    return bj_queuedExecTotal;
}
JASSCPP::boolean IsTriggerQueueEmptyBJ()
{
    return bj_queuedExecTotal <= 0;
}
JASSCPP::boolean IsTriggerQueuedBJ(JASSCPP::trigger trig)
{
    return QueuedTriggerGetIndex(trig) != -1;
}
JASSCPP::integer GetForLoopIndexA()
{
    return bj_forLoopAIndex;
}
void SetForLoopIndexA(JASSCPP::integer newIndex)
{
    bj_forLoopAIndex = newIndex;
}
JASSCPP::integer GetForLoopIndexB()
{
    return bj_forLoopBIndex;
}
void SetForLoopIndexB(JASSCPP::integer newIndex)
{
    bj_forLoopBIndex = newIndex;
}
void PolledWait(JASSCPP::real duration)
{
    JASSCPP::timer t;
    JASSCPP::real timeRemaining;
    if (duration > 0)
    {
        t = CreateTimer();
        TimerStart(t, duration, false, null);
        while (true)
        {
            timeRemaining = TimerGetRemaining(t);
            if (timeRemaining <= 0) break;
            // If we have a bit of time left, skip past 10% of the remaining
            // duration instead of checking every interval, to minimize the
            // polling on long waits.
            if (timeRemaining > bj_POLLED_WAIT_SKIP_THRESHOLD)
            {
                TriggerSleepAction(0.1 * timeRemaining);
            }
            else
            {
                TriggerSleepAction(bj_POLLED_WAIT_INTERVAL);
            }
        }
        DestroyTimer(t);
    }
}
JASSCPP::integer IntegerTertiaryOp(JASSCPP::boolean flag,JASSCPP::integer valueA,JASSCPP::integer valueB)
{
    if (flag)
    {
        return valueA;
    }
    else
    {
        return valueB;
    }
}
void DoNothing()
{
}
void CommentString(JASSCPP::string commentString)
{
}
JASSCPP::string StringIdentity(JASSCPP::string theString)
{
    return theString;
}
JASSCPP::boolean GetBooleanAnd(JASSCPP::boolean valueA,JASSCPP::boolean valueB)
{
    return valueA && valueB;
}
JASSCPP::boolean GetBooleanOr(JASSCPP::boolean valueA,JASSCPP::boolean valueB)
{
    return valueA || valueB;
}
JASSCPP::integer PercentToInt(JASSCPP::real percentage,JASSCPP::integer max)
{
    JASSCPP::integer result = R2I(percentage * I2R(max) * 0.01);
    if (result < 0)
    {
        result = 0;
    }
     else if (result > max)
    {
        result = max;
    }
    return result;
}
JASSCPP::integer PercentTo255(JASSCPP::real percentage)
{
    return PercentToInt(percentage, 255);
}
JASSCPP::real GetTimeOfDay()
{
    return GetFloatGameState(GAME_STATE_TIME_OF_DAY);
}
void SetTimeOfDay(JASSCPP::real whatTime)
{
    SetFloatGameState(GAME_STATE_TIME_OF_DAY, whatTime);
}
void SetTimeOfDayScalePercentBJ(JASSCPP::real scalePercent)
{
    SetTimeOfDayScale(scalePercent * 0.01);
}
JASSCPP::real GetTimeOfDayScalePercentBJ()
{
    return GetTimeOfDayScale() * 100;
}
void PlaySound(JASSCPP::string soundName)
{
    JASSCPP::sound soundHandle = CreateSound(soundName, false, false, true, 12700, 12700, "");
    StartSound(soundHandle);
    KillSoundWhenDone(soundHandle);
}
JASSCPP::boolean CompareLocationsBJ(JASSCPP::location A,JASSCPP::location B)
{
    return GetLocationX(A) == GetLocationX(B) && GetLocationY(A) == GetLocationY(B);
}
JASSCPP::boolean CompareRectsBJ(JASSCPP::rect A,JASSCPP::rect B)
{
    return GetRectMinX(A) == GetRectMinX(B) && GetRectMinY(A) == GetRectMinY(B) && GetRectMaxX(A) == GetRectMaxX(B) && GetRectMaxY(A) == GetRectMaxY(B);
}
JASSCPP::rect GetRectFromCircleBJ(JASSCPP::location center,JASSCPP::real radius)
{
    JASSCPP::real centerX = GetLocationX(center);
    JASSCPP::real centerY = GetLocationY(center);
    return Rect(centerX - radius, centerY - radius, centerX + radius, centerY + radius);
}
JASSCPP::camerasetup GetCurrentCameraSetup()
{
    JASSCPP::camerasetup theCam = CreateCameraSetup();
    JASSCPP::real duration = 0;
    CameraSetupSetField(theCam, CAMERA_FIELD_TARGET_DISTANCE, GetCameraField(CAMERA_FIELD_TARGET_DISTANCE), duration);
    CameraSetupSetField(theCam, CAMERA_FIELD_FARZ,            GetCameraField(CAMERA_FIELD_FARZ),            duration);
    CameraSetupSetField(theCam, CAMERA_FIELD_ZOFFSET,         GetCameraField(CAMERA_FIELD_ZOFFSET),         duration);
    CameraSetupSetField(theCam, CAMERA_FIELD_ANGLE_OF_ATTACK, bj_RADTODEG * GetCameraField(CAMERA_FIELD_ANGLE_OF_ATTACK), duration);
    CameraSetupSetField(theCam, CAMERA_FIELD_FIELD_OF_VIEW,   bj_RADTODEG * GetCameraField(CAMERA_FIELD_FIELD_OF_VIEW),   duration);
    CameraSetupSetField(theCam, CAMERA_FIELD_ROLL,            bj_RADTODEG * GetCameraField(CAMERA_FIELD_ROLL),            duration);
    CameraSetupSetField(theCam, CAMERA_FIELD_ROTATION,        bj_RADTODEG * GetCameraField(CAMERA_FIELD_ROTATION),        duration);
    CameraSetupSetDestPosition(theCam, GetCameraTargetPositionX(), GetCameraTargetPositionY(), duration);
    return theCam;
}
void CameraSetupApplyForPlayer(JASSCPP::boolean doPan,JASSCPP::camerasetup whichSetup,JASSCPP::player whichPlayer,JASSCPP::real duration)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        CameraSetupApplyForceDuration(whichSetup, doPan, duration);
    }
}
JASSCPP::real CameraSetupGetFieldSwap(JASSCPP::camerafield whichField,JASSCPP::camerasetup whichSetup)
{
    return CameraSetupGetField(whichSetup, whichField);
}
void SetCameraFieldForPlayer(JASSCPP::player whichPlayer,JASSCPP::camerafield whichField,JASSCPP::real value,JASSCPP::real duration)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        SetCameraField(whichField, value, duration);
    }
}
void SetCameraTargetControllerNoZForPlayer(JASSCPP::player whichPlayer,JASSCPP::unit whichUnit,JASSCPP::real xoffset,JASSCPP::real yoffset,JASSCPP::boolean inheritOrientation)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        SetCameraTargetController(whichUnit, xoffset, yoffset, inheritOrientation);
    }
}
void SetCameraPositionForPlayer(JASSCPP::player whichPlayer,JASSCPP::real x,JASSCPP::real y)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        SetCameraPosition(x, y);
    }
}
void SetCameraPositionLocForPlayer(JASSCPP::player whichPlayer,JASSCPP::location loc)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        SetCameraPosition(GetLocationX(loc), GetLocationY(loc));
    }
}
void RotateCameraAroundLocBJ(JASSCPP::real degrees,JASSCPP::location loc,JASSCPP::player whichPlayer,JASSCPP::real duration)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        SetCameraRotateMode(GetLocationX(loc), GetLocationY(loc), bj_DEGTORAD * degrees, duration);
    }
}
void PanCameraToForPlayer(JASSCPP::player whichPlayer,JASSCPP::real x,JASSCPP::real y)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        PanCameraTo(x, y);
    }
}
void PanCameraToLocForPlayer(JASSCPP::player whichPlayer,JASSCPP::location loc)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        PanCameraTo(GetLocationX(loc), GetLocationY(loc));
    }
}
void PanCameraToTimedForPlayer(JASSCPP::player whichPlayer,JASSCPP::real x,JASSCPP::real y,JASSCPP::real duration)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        PanCameraToTimed(x, y, duration);
    }
}
void PanCameraToTimedLocForPlayer(JASSCPP::player whichPlayer,JASSCPP::location loc,JASSCPP::real duration)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        PanCameraToTimed(GetLocationX(loc), GetLocationY(loc), duration);
    }
}
void PanCameraToTimedLocWithZForPlayer(JASSCPP::player whichPlayer,JASSCPP::location loc,JASSCPP::real zOffset,JASSCPP::real duration)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        PanCameraToTimedWithZ(GetLocationX(loc), GetLocationY(loc), zOffset, duration);
    }
}
void SmartCameraPanBJ(JASSCPP::player whichPlayer,JASSCPP::location loc,JASSCPP::real duration)
{
    JASSCPP::real dist;
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        dist = DistanceBetweenPoints(loc, GetCameraTargetPositionLoc());
        if (dist >= bj_SMARTPAN_TRESHOLD_SNAP)
        {
            // If the user is too far away, snap the camera.
            PanCameraToTimed(GetLocationX(loc), GetLocationY(loc), 0);
        }
         else if (dist >= bj_SMARTPAN_TRESHOLD_PAN)
        {
            // If the user is moderately close, pan the camera.
            PanCameraToTimed(GetLocationX(loc), GetLocationY(loc), duration);
        }
        else
        {
            // User is close enough, so don't touch the camera.
        }
    }
}
void SetCinematicCameraForPlayer(JASSCPP::player whichPlayer,JASSCPP::string cameraModelFile)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        SetCinematicCamera(cameraModelFile);
    }
}
void ResetToGameCameraForPlayer(JASSCPP::player whichPlayer,JASSCPP::real duration)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        ResetToGameCamera(duration);
    }
}
void CameraSetSourceNoiseForPlayer(JASSCPP::player whichPlayer,JASSCPP::real magnitude,JASSCPP::real velocity)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        CameraSetSourceNoise(magnitude, velocity);
    }
}
void CameraSetTargetNoiseForPlayer(JASSCPP::player whichPlayer,JASSCPP::real magnitude,JASSCPP::real velocity)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        CameraSetTargetNoise(magnitude, velocity);
    }
}
void CameraSetEQNoiseForPlayer(JASSCPP::player whichPlayer,JASSCPP::real magnitude)
{
    JASSCPP::real richter = magnitude;
    if (richter > 5.0)
    {
        richter = 5.0;
    }
    if (richter < 2.0)
    {
        richter = 2.0;
    }
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        CameraSetTargetNoiseEx(magnitude*2.0, magnitude*Pow(10,richter),true);
        CameraSetSourceNoiseEx(magnitude*2.0, magnitude*Pow(10,richter),true);
    }
}
void CameraClearNoiseForPlayer(JASSCPP::player whichPlayer)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        CameraSetSourceNoise(0, 0);
        CameraSetTargetNoise(0, 0);
    }
}
JASSCPP::rect GetCurrentCameraBoundsMapRectBJ()
{
    return Rect(GetCameraBoundMinX(), GetCameraBoundMinY(), GetCameraBoundMaxX(), GetCameraBoundMaxY());
}
JASSCPP::rect GetCameraBoundsMapRect()
{
    return bj_mapInitialCameraBounds;
}
JASSCPP::rect GetPlayableMapRect()
{
    return bj_mapInitialPlayableArea;
}
JASSCPP::rect GetEntireMapRect()
{
    return GetWorldBounds();
}
void SetCameraBoundsToRect(JASSCPP::rect r)
{
    JASSCPP::real minX = GetRectMinX(r);
    JASSCPP::real minY = GetRectMinY(r);
    JASSCPP::real maxX = GetRectMaxX(r);
    JASSCPP::real maxY = GetRectMaxY(r);
    SetCameraBounds(minX, minY, minX, maxY, maxX, maxY, maxX, minY);
}
void SetCameraBoundsToRectForPlayerBJ(JASSCPP::player whichPlayer,JASSCPP::rect r)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        SetCameraBoundsToRect(r);
    }
}
void AdjustCameraBoundsBJ(JASSCPP::integer adjustMethod,JASSCPP::real dxWest,JASSCPP::real dxEast,JASSCPP::real dyNorth,JASSCPP::real dySouth)
{
    JASSCPP::real minX = 0;
    JASSCPP::real minY = 0;
    JASSCPP::real maxX = 0;
    JASSCPP::real maxY = 0;
    JASSCPP::real scale = 0;
    if (adjustMethod == bj_CAMERABOUNDS_ADJUST_ADD)
    {
        scale = 1;
    }
     else if (adjustMethod == bj_CAMERABOUNDS_ADJUST_SUB)
    {
        scale = -1;
    }
    else
    {
        // Unrecognized adjustment method - ignore the request.
        return;
    }
    // Adjust the actual camera values
    minX = GetCameraBoundMinX() - scale * dxWest;
    maxX = GetCameraBoundMaxX() + scale * dxEast;
    minY = GetCameraBoundMinY() - scale * dySouth;
    maxY = GetCameraBoundMaxY() + scale * dyNorth;
    // Make sure the camera bounds are still valid.
    if (maxX < minX)
    {
        minX = (minX + maxX) * 0.5;
        maxX = minX;
    }
    if (maxY < minY)
    {
        minY = (minY + maxY) * 0.5;
        maxY = minY;
    }
    // Apply the new camera values.
    SetCameraBounds(minX, minY, minX, maxY, maxX, maxY, maxX, minY);
}
void AdjustCameraBoundsForPlayerBJ(JASSCPP::integer adjustMethod,JASSCPP::player whichPlayer,JASSCPP::real dxWest,JASSCPP::real dxEast,JASSCPP::real dyNorth,JASSCPP::real dySouth)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        AdjustCameraBoundsBJ(adjustMethod, dxWest, dxEast, dyNorth, dySouth);
    }
}
void SetCameraQuickPositionForPlayer(JASSCPP::player whichPlayer,JASSCPP::real x,JASSCPP::real y)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        SetCameraQuickPosition(x, y);
    }
}
void SetCameraQuickPositionLocForPlayer(JASSCPP::player whichPlayer,JASSCPP::location loc)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        SetCameraQuickPosition(GetLocationX(loc), GetLocationY(loc));
    }
}
void SetCameraQuickPositionLoc(JASSCPP::location loc)
{
    SetCameraQuickPosition(GetLocationX(loc), GetLocationY(loc));
}
void StopCameraForPlayerBJ(JASSCPP::player whichPlayer)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        StopCamera();
    }
}
void SetCameraOrientControllerForPlayerBJ(JASSCPP::player whichPlayer,JASSCPP::unit whichUnit,JASSCPP::real xoffset,JASSCPP::real yoffset)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        SetCameraOrientController(whichUnit, xoffset, yoffset);
    }
}
void CameraSetSmoothingFactorBJ(JASSCPP::real factor)
{
    CameraSetSmoothingFactor(factor);
}
void CameraResetSmoothingFactorBJ()
{
    CameraSetSmoothingFactor(0);
}
void DisplayTextToForce(JASSCPP::force toForce,JASSCPP::string message)
{
    if ((IsPlayerInForce(GetLocalPlayer(), toForce)))
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        DisplayTextToPlayer(GetLocalPlayer(), 0, 0, message);
    }
}
void DisplayTimedTextToForce(JASSCPP::force toForce,JASSCPP::real duration,JASSCPP::string message)
{
    if ((IsPlayerInForce(GetLocalPlayer(), toForce)))
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, duration, message);
    }
}
void ClearTextMessagesBJ(JASSCPP::force toForce)
{
    if ((IsPlayerInForce(GetLocalPlayer(), toForce)))
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        ClearTextMessages();
    }
}
JASSCPP::string SubStringBJ(JASSCPP::string source,JASSCPP::integer start,JASSCPP::integer end)
{
    return SubString(source, start-1, end);
}
JASSCPP::event TriggerRegisterTimerEventPeriodic(JASSCPP::trigger trig,JASSCPP::real timeout)
{
    return TriggerRegisterTimerEvent(trig, timeout, true);
}
JASSCPP::event TriggerRegisterTimerEventSingle(JASSCPP::trigger trig,JASSCPP::real timeout)
{
    return TriggerRegisterTimerEvent(trig, timeout, false);
}
JASSCPP::event TriggerRegisterTimerExpireEventBJ(JASSCPP::trigger trig,JASSCPP::timer t)
{
    return TriggerRegisterTimerExpireEvent(trig, t);
}
JASSCPP::event TriggerRegisterPlayerUnitEventSimple(JASSCPP::trigger trig,JASSCPP::player whichPlayer,JASSCPP::playerunitevent whichEvent)
{
    return TriggerRegisterPlayerUnitEvent(trig, whichPlayer, whichEvent, null);
}
void TriggerRegisterAnyUnitEventBJ(JASSCPP::trigger trig,JASSCPP::playerunitevent whichEvent)
{
    JASSCPP::integer index;
    index = 0;
    while (true)
    {
        TriggerRegisterPlayerUnitEvent(trig, Player(index), whichEvent, null);
        index = index + 1;
        if (index == bj_MAX_PLAYER_SLOTS) break;
    }
}
JASSCPP::event TriggerRegisterPlayerSelectionEventBJ(JASSCPP::trigger trig,JASSCPP::player whichPlayer,JASSCPP::boolean selected)
{
    if (selected)
    {
        return TriggerRegisterPlayerUnitEvent(trig, whichPlayer, EVENT_PLAYER_UNIT_SELECTED, null);
    }
    else
    {
        return TriggerRegisterPlayerUnitEvent(trig, whichPlayer, EVENT_PLAYER_UNIT_DESELECTED, null);
    }
}
JASSCPP::event TriggerRegisterPlayerKeyEventBJ(JASSCPP::trigger trig,JASSCPP::player whichPlayer,JASSCPP::integer keType,JASSCPP::integer keKey)
{
    if (keType == bj_KEYEVENTTYPE_DEPRESS)
    {
        // Depress event - find out what key
        if (keKey == bj_KEYEVENTKEY_LEFT)
        {
            return TriggerRegisterPlayerEvent(trig, whichPlayer, EVENT_PLAYER_ARROW_LEFT_DOWN);
        }
         else if (keKey == bj_KEYEVENTKEY_RIGHT)
        {
            return TriggerRegisterPlayerEvent(trig, whichPlayer, EVENT_PLAYER_ARROW_RIGHT_DOWN);
        }
         else if (keKey == bj_KEYEVENTKEY_DOWN)
        {
            return TriggerRegisterPlayerEvent(trig, whichPlayer, EVENT_PLAYER_ARROW_DOWN_DOWN);
        }
         else if (keKey == bj_KEYEVENTKEY_UP)
        {
            return TriggerRegisterPlayerEvent(trig, whichPlayer, EVENT_PLAYER_ARROW_UP_DOWN);
        }
        else
        {
            // Unrecognized key - ignore the request and return failure.
            return null;
        }
    }
     else if (keType == bj_KEYEVENTTYPE_RELEASE)
    {
        // Release event - find out what key
        if (keKey == bj_KEYEVENTKEY_LEFT)
        {
            return TriggerRegisterPlayerEvent(trig, whichPlayer, EVENT_PLAYER_ARROW_LEFT_UP);
        }
         else if (keKey == bj_KEYEVENTKEY_RIGHT)
        {
            return TriggerRegisterPlayerEvent(trig, whichPlayer, EVENT_PLAYER_ARROW_RIGHT_UP);
        }
         else if (keKey == bj_KEYEVENTKEY_DOWN)
        {
            return TriggerRegisterPlayerEvent(trig, whichPlayer, EVENT_PLAYER_ARROW_DOWN_UP);
        }
         else if (keKey == bj_KEYEVENTKEY_UP)
        {
            return TriggerRegisterPlayerEvent(trig, whichPlayer, EVENT_PLAYER_ARROW_UP_UP);
        }
        else
        {
            // Unrecognized key - ignore the request and return failure.
            return null;
        }
    }
    else
    {
        // Unrecognized type - ignore the request and return failure.
        return null;
    }
}
JASSCPP::event TriggerRegisterPlayerEventVictory(JASSCPP::trigger trig,JASSCPP::player whichPlayer)
{
    return TriggerRegisterPlayerEvent(trig, whichPlayer, EVENT_PLAYER_VICTORY);
}
JASSCPP::event TriggerRegisterPlayerEventDefeat(JASSCPP::trigger trig,JASSCPP::player whichPlayer)
{
    return TriggerRegisterPlayerEvent(trig, whichPlayer, EVENT_PLAYER_DEFEAT);
}
JASSCPP::event TriggerRegisterPlayerEventAllianceChanged(JASSCPP::trigger trig,JASSCPP::player whichPlayer)
{
    return TriggerRegisterPlayerEvent(trig, whichPlayer, EVENT_PLAYER_ALLIANCE_CHANGED);
}
JASSCPP::event TriggerRegisterPlayerEventEndCinematic(JASSCPP::trigger trig,JASSCPP::player whichPlayer)
{
    return TriggerRegisterPlayerEvent(trig, whichPlayer, EVENT_PLAYER_END_CINEMATIC);
}
JASSCPP::event TriggerRegisterGameStateEventTimeOfDay(JASSCPP::trigger trig,JASSCPP::limitop opcode,JASSCPP::real limitval)
{
    return TriggerRegisterGameStateEvent(trig, GAME_STATE_TIME_OF_DAY, opcode, limitval);
}
JASSCPP::event TriggerRegisterEnterRegionSimple(JASSCPP::trigger trig,JASSCPP::region whichRegion)
{
    return TriggerRegisterEnterRegion(trig, whichRegion, null);
}
JASSCPP::event TriggerRegisterLeaveRegionSimple(JASSCPP::trigger trig,JASSCPP::region whichRegion)
{
    return TriggerRegisterLeaveRegion(trig, whichRegion, null);
}
JASSCPP::event TriggerRegisterEnterRectSimple(JASSCPP::trigger trig,JASSCPP::rect r)
{
    JASSCPP::region rectRegion = CreateRegion();
    RegionAddRect(rectRegion, r);
    return TriggerRegisterEnterRegion(trig, rectRegion, null);
}
JASSCPP::event TriggerRegisterLeaveRectSimple(JASSCPP::trigger trig,JASSCPP::rect r)
{
    JASSCPP::region rectRegion = CreateRegion();
    RegionAddRect(rectRegion, r);
    return TriggerRegisterLeaveRegion(trig, rectRegion, null);
}
JASSCPP::event TriggerRegisterDistanceBetweenUnits(JASSCPP::trigger trig,JASSCPP::unit whichUnit,JASSCPP::boolexpr condition,JASSCPP::real range)
{
    return TriggerRegisterUnitInRange(trig, whichUnit, range, condition);
}
JASSCPP::event TriggerRegisterUnitInRangeSimple(JASSCPP::trigger trig,JASSCPP::real range,JASSCPP::unit whichUnit)
{
    return TriggerRegisterUnitInRange(trig, whichUnit, range, null);
}
JASSCPP::event TriggerRegisterUnitLifeEvent(JASSCPP::trigger trig,JASSCPP::unit whichUnit,JASSCPP::limitop opcode,JASSCPP::real limitval)
{
    return TriggerRegisterUnitStateEvent(trig, whichUnit, UNIT_STATE_LIFE, opcode, limitval);
}
JASSCPP::event TriggerRegisterUnitManaEvent(JASSCPP::trigger trig,JASSCPP::unit whichUnit,JASSCPP::limitop opcode,JASSCPP::real limitval)
{
    return TriggerRegisterUnitStateEvent(trig, whichUnit, UNIT_STATE_MANA, opcode, limitval);
}
JASSCPP::event TriggerRegisterDialogEventBJ(JASSCPP::trigger trig,JASSCPP::dialog whichDialog)
{
    return TriggerRegisterDialogEvent(trig, whichDialog);
}
JASSCPP::event TriggerRegisterShowSkillEventBJ(JASSCPP::trigger trig)
{
    return TriggerRegisterGameEvent(trig, EVENT_GAME_SHOW_SKILL);
}
JASSCPP::event TriggerRegisterBuildSubmenuEventBJ(JASSCPP::trigger trig)
{
    return TriggerRegisterGameEvent(trig, EVENT_GAME_BUILD_SUBMENU);
}
JASSCPP::event TriggerRegisterGameLoadedEventBJ(JASSCPP::trigger trig)
{
    return TriggerRegisterGameEvent(trig, EVENT_GAME_LOADED);
}
JASSCPP::event TriggerRegisterGameSavedEventBJ(JASSCPP::trigger trig)
{
    return TriggerRegisterGameEvent(trig, EVENT_GAME_SAVE);
}
void RegisterDestDeathInRegionEnum()
{
    bj_destInRegionDiesCount = bj_destInRegionDiesCount + 1;
    if (bj_destInRegionDiesCount <= bj_MAX_DEST_IN_REGION_EVENTS)
    {
        TriggerRegisterDeathEvent(bj_destInRegionDiesTrig, GetEnumDestructable());
    }
}
JASSCPP::event TriggerRegisterDestDeathInRegionEvent(JASSCPP::trigger trig,JASSCPP::rect r)
{
    bj_destInRegionDiesTrig = trig;
    bj_destInRegionDiesCount = 0;
    EnumDestructablesInRect(r, null, function RegisterDestDeathInRegionEnum);
    return trig;
}
JASSCPP::weathereffect AddWeatherEffectSaveLast(JASSCPP::rect where,JASSCPP::integer effectID)
{
    bj_lastCreatedWeatherEffect = AddWeatherEffect(where, effectID);
    return bj_lastCreatedWeatherEffect;
}
JASSCPP::weathereffect GetLastCreatedWeatherEffect()
{
    return bj_lastCreatedWeatherEffect;
}
void RemoveWeatherEffectBJ(JASSCPP::weathereffect whichWeatherEffect)
{
    RemoveWeatherEffect(whichWeatherEffect);
}
JASSCPP::terraindeformation TerrainDeformationCraterBJ(JASSCPP::real duration,JASSCPP::boolean permanent,JASSCPP::location where,JASSCPP::real radius,JASSCPP::real depth)
{
    bj_lastCreatedTerrainDeformation = TerrainDeformCrater(GetLocationX(where), GetLocationY(where), radius, depth, R2I(duration * 1000), permanent);
    return bj_lastCreatedTerrainDeformation;
}
JASSCPP::terraindeformation TerrainDeformationRippleBJ(JASSCPP::real duration,JASSCPP::boolean limitNeg,JASSCPP::location where,JASSCPP::real startRadius,JASSCPP::real endRadius,JASSCPP::real depth,JASSCPP::real wavePeriod,JASSCPP::real waveWidth)
{
    JASSCPP::real spaceWave;
    JASSCPP::real timeWave;
    JASSCPP::real radiusRatio;
    if (endRadius <= 0 || waveWidth <= 0 || wavePeriod <= 0)
    {
        return null;
    }
    timeWave = 2.0 * duration / wavePeriod;
    spaceWave = 2.0 * endRadius / waveWidth;
    radiusRatio = startRadius / endRadius;
    bj_lastCreatedTerrainDeformation = TerrainDeformRipple(GetLocationX(where), GetLocationY(where), endRadius, depth, R2I(duration * 1000), 1, spaceWave, timeWave, radiusRatio, limitNeg);
    return bj_lastCreatedTerrainDeformation;
}
JASSCPP::terraindeformation TerrainDeformationWaveBJ(JASSCPP::real duration,JASSCPP::location source,JASSCPP::location target,JASSCPP::real radius,JASSCPP::real depth,JASSCPP::real trailDelay)
{
    JASSCPP::real distance;
    JASSCPP::real dirX;
    JASSCPP::real dirY;
    JASSCPP::real speed;
    distance = DistanceBetweenPoints(source, target);
    if (distance == 0 || duration <= 0)
    {
        return null;
    }
    dirX = (GetLocationX(target) - GetLocationX(source)) / distance;
    dirY = (GetLocationY(target) - GetLocationY(source)) / distance;
    speed = distance / duration;
    bj_lastCreatedTerrainDeformation = TerrainDeformWave(GetLocationX(source), GetLocationY(source), dirX, dirY, distance, speed, radius, depth, R2I(trailDelay * 1000), 1);
    return bj_lastCreatedTerrainDeformation;
}
JASSCPP::terraindeformation TerrainDeformationRandomBJ(JASSCPP::real duration,JASSCPP::location where,JASSCPP::real radius,JASSCPP::real minDelta,JASSCPP::real maxDelta,JASSCPP::real updateInterval)
{
    bj_lastCreatedTerrainDeformation = TerrainDeformRandom(GetLocationX(where), GetLocationY(where), radius, minDelta, maxDelta, R2I(duration * 1000), R2I(updateInterval * 1000));
    return bj_lastCreatedTerrainDeformation;
}
void TerrainDeformationStopBJ(JASSCPP::terraindeformation deformation,JASSCPP::real duration)
{
    TerrainDeformStop(deformation, R2I(duration * 1000));
}
JASSCPP::terraindeformation GetLastCreatedTerrainDeformation()
{
    return bj_lastCreatedTerrainDeformation;
}
JASSCPP::integer GetTerrainCliffLevelBJ(JASSCPP::location where)
{
    return GetTerrainCliffLevel(GetLocationX(where), GetLocationY(where));
}
void SetWaterBaseColorBJ(JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency)
{
    SetWaterBaseColor(PercentTo255(red), PercentTo255(green), PercentTo255(blue), PercentTo255(100.0-transparency));
}
JASSCPP::fogmodifier CreateFogModifierRectSimple(JASSCPP::player whichPlayer,JASSCPP::fogstate whichFogState,JASSCPP::rect r,JASSCPP::boolean afterUnits)
{
    bj_lastCreatedFogModifier = CreateFogModifierRect(whichPlayer, whichFogState, r, true, afterUnits);
    return bj_lastCreatedFogModifier;
}
JASSCPP::fogmodifier CreateFogModifierRadiusLocSimple(JASSCPP::player whichPlayer,JASSCPP::fogstate whichFogState,JASSCPP::location center,JASSCPP::real radius,JASSCPP::boolean afterUnits)
{
    bj_lastCreatedFogModifier = CreateFogModifierRadiusLoc(whichPlayer, whichFogState, center, radius, true, afterUnits);
    return bj_lastCreatedFogModifier;
}
JASSCPP::fogmodifier CreateFogModifierRectBJ(JASSCPP::boolean enabled,JASSCPP::player whichPlayer,JASSCPP::fogstate whichFogState,JASSCPP::rect r)
{
    bj_lastCreatedFogModifier = CreateFogModifierRect(whichPlayer, whichFogState, r, true, false);
    if (enabled)
    {
        FogModifierStart(bj_lastCreatedFogModifier);
    }
    return bj_lastCreatedFogModifier;
}
JASSCPP::fogmodifier CreateFogModifierRadiusLocBJ(JASSCPP::boolean enabled,JASSCPP::player whichPlayer,JASSCPP::fogstate whichFogState,JASSCPP::location center,JASSCPP::real radius)
{
    bj_lastCreatedFogModifier = CreateFogModifierRadiusLoc(whichPlayer, whichFogState, center, radius, true, false);
    if (enabled)
    {
        FogModifierStart(bj_lastCreatedFogModifier);
    }
    return bj_lastCreatedFogModifier;
}
JASSCPP::fogmodifier GetLastCreatedFogModifier()
{
    return bj_lastCreatedFogModifier;
}
void FogEnableOn()
{
    FogEnable(true);
}
void FogEnableOff()
{
    FogEnable(false);
}
void FogMaskEnableOn()
{
    FogMaskEnable(true);
}
void FogMaskEnableOff()
{
    FogMaskEnable(false);
}
void UseTimeOfDayBJ(JASSCPP::boolean flag)
{
    SuspendTimeOfDay(!flag);
}
void SetTerrainFogExBJ(JASSCPP::integer style,JASSCPP::real zstart,JASSCPP::real zend,JASSCPP::real density,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue)
{
    SetTerrainFogEx(style, zstart, zend, density, red * 0.01, green * 0.01, blue * 0.01);
}
void ResetTerrainFogBJ()
{
    ResetTerrainFog();
}
void SetDoodadAnimationBJ(JASSCPP::string animName,JASSCPP::integer doodadID,JASSCPP::real radius,JASSCPP::location center)
{
    SetDoodadAnimation(GetLocationX(center), GetLocationY(center), radius, doodadID, false, animName, false);
}
void SetDoodadAnimationRectBJ(JASSCPP::string animName,JASSCPP::integer doodadID,JASSCPP::rect r)
{
    SetDoodadAnimationRect(r, doodadID, animName, false);
}
void AddUnitAnimationPropertiesBJ(JASSCPP::boolean add,JASSCPP::string animProperties,JASSCPP::unit whichUnit)
{
    AddUnitAnimationProperties(whichUnit, animProperties, add);
}
void PlaySoundBJ(JASSCPP::sound soundHandle)
{
    bj_lastPlayedSound = soundHandle;
    if (soundHandle != null)
    {
        StartSound(soundHandle);
    }
}
void StopSoundBJ(JASSCPP::sound soundHandle,JASSCPP::boolean fadeOut)
{
    StopSound(soundHandle, false, fadeOut);
}
void SetSoundVolumeBJ(JASSCPP::sound soundHandle,JASSCPP::real volumePercent)
{
    SetSoundVolume(soundHandle, PercentToInt(volumePercent, 127));
}
void SetSoundOffsetBJ(JASSCPP::real newOffset,JASSCPP::sound soundHandle)
{
    SetSoundPlayPosition(soundHandle, R2I(newOffset * 1000));
}
void SetSoundDistanceCutoffBJ(JASSCPP::sound soundHandle,JASSCPP::real cutoff)
{
    SetSoundDistanceCutoff(soundHandle, cutoff);
}
void SetSoundPitchBJ(JASSCPP::sound soundHandle,JASSCPP::real pitch)
{
    SetSoundPitch(soundHandle, pitch);
}
void SetSoundPositionLocBJ(JASSCPP::sound soundHandle,JASSCPP::location loc,JASSCPP::real z)
{
    SetSoundPosition(soundHandle, GetLocationX(loc), GetLocationY(loc), z);
}
void AttachSoundToUnitBJ(JASSCPP::sound soundHandle,JASSCPP::unit whichUnit)
{
    AttachSoundToUnit(soundHandle, whichUnit);
}
void SetSoundConeAnglesBJ(JASSCPP::sound soundHandle,JASSCPP::real inside,JASSCPP::real outside,JASSCPP::real outsideVolumePercent)
{
    SetSoundConeAngles(soundHandle, inside, outside, PercentToInt(outsideVolumePercent, 127));
}
void KillSoundWhenDoneBJ(JASSCPP::sound soundHandle)
{
    KillSoundWhenDone(soundHandle);
}
void PlaySoundAtPointBJ(JASSCPP::sound soundHandle,JASSCPP::real volumePercent,JASSCPP::location loc,JASSCPP::real z)
{
    SetSoundPositionLocBJ(soundHandle, loc, z);
    SetSoundVolumeBJ(soundHandle, volumePercent);
    PlaySoundBJ(soundHandle);
}
void PlaySoundOnUnitBJ(JASSCPP::sound soundHandle,JASSCPP::real volumePercent,JASSCPP::unit whichUnit)
{
    AttachSoundToUnitBJ(soundHandle, whichUnit);
    SetSoundVolumeBJ(soundHandle, volumePercent);
    PlaySoundBJ(soundHandle);
}
void PlaySoundFromOffsetBJ(JASSCPP::sound soundHandle,JASSCPP::real volumePercent,JASSCPP::real startingOffset)
{
    SetSoundVolumeBJ(soundHandle, volumePercent);
    PlaySoundBJ(soundHandle);
    SetSoundOffsetBJ(startingOffset, soundHandle);
}
void PlayMusicBJ(JASSCPP::string musicFileName)
{
    bj_lastPlayedMusic = musicFileName;
    PlayMusic(musicFileName);
}
void PlayMusicExBJ(JASSCPP::string musicFileName,JASSCPP::real startingOffset,JASSCPP::real fadeInTime)
{
    bj_lastPlayedMusic = musicFileName;
    PlayMusicEx(musicFileName, R2I(startingOffset * 1000), R2I(fadeInTime * 1000));
}
void SetMusicOffsetBJ(JASSCPP::real newOffset)
{
    SetMusicPlayPosition(R2I(newOffset * 1000));
}
void PlayThematicMusicBJ(JASSCPP::string musicName)
{
    PlayThematicMusic(musicName);
}
void PlayThematicMusicExBJ(JASSCPP::string musicName,JASSCPP::real startingOffset)
{
    PlayThematicMusicEx(musicName, R2I(startingOffset * 1000));
}
void SetThematicMusicOffsetBJ(JASSCPP::real newOffset)
{
    SetThematicMusicPlayPosition(R2I(newOffset * 1000));
}
void EndThematicMusicBJ()
{
    EndThematicMusic();
}
void StopMusicBJ(JASSCPP::boolean fadeOut)
{
    StopMusic(fadeOut);
}
void ResumeMusicBJ()
{
    ResumeMusic();
}
void SetMusicVolumeBJ(JASSCPP::real volumePercent)
{
    SetMusicVolume(PercentToInt(volumePercent, 127));
}
JASSCPP::real GetSoundDurationBJ(JASSCPP::sound soundHandle)
{
    if (soundHandle == null)
    {
        return bj_NOTHING_SOUND_DURATION;
    }
    else
    {
        return I2R(GetSoundDuration(soundHandle)) * 0.001;
    }
}
JASSCPP::real GetSoundFileDurationBJ(JASSCPP::string musicFileName)
{
    return I2R(GetSoundFileDuration(musicFileName)) * 0.001;
}
JASSCPP::sound GetLastPlayedSound()
{
    return bj_lastPlayedSound;
}
JASSCPP::string GetLastPlayedMusic()
{
    return bj_lastPlayedMusic;
}
void VolumeGroupSetVolumeBJ(JASSCPP::volumegroup vgroup,JASSCPP::real percent)
{
    VolumeGroupSetVolume(vgroup, percent * 0.01);
}
void SetCineModeVolumeGroupsImmediateBJ()
{
    VolumeGroupSetVolume(SOUND_VOLUMEGROUP_UNITMOVEMENT,  bj_CINEMODE_VOLUME_UNITMOVEMENT);
    VolumeGroupSetVolume(SOUND_VOLUMEGROUP_UNITSOUNDS,    bj_CINEMODE_VOLUME_UNITSOUNDS);
    VolumeGroupSetVolume(SOUND_VOLUMEGROUP_COMBAT,        bj_CINEMODE_VOLUME_COMBAT);
    VolumeGroupSetVolume(SOUND_VOLUMEGROUP_SPELLS,        bj_CINEMODE_VOLUME_SPELLS);
    VolumeGroupSetVolume(SOUND_VOLUMEGROUP_UI,            bj_CINEMODE_VOLUME_UI);
    VolumeGroupSetVolume(SOUND_VOLUMEGROUP_MUSIC,         bj_CINEMODE_VOLUME_MUSIC);
    VolumeGroupSetVolume(SOUND_VOLUMEGROUP_AMBIENTSOUNDS, bj_CINEMODE_VOLUME_AMBIENTSOUNDS);
    VolumeGroupSetVolume(SOUND_VOLUMEGROUP_FIRE,          bj_CINEMODE_VOLUME_FIRE);
}
void SetCineModeVolumeGroupsBJ()
{
    if (bj_gameStarted)
    {
        SetCineModeVolumeGroupsImmediateBJ();
    }
    else
    {
        TimerStart(bj_volumeGroupsTimer, bj_GAME_STARTED_THRESHOLD, false, function SetCineModeVolumeGroupsImmediateBJ);
    }
}
void SetSpeechVolumeGroupsImmediateBJ()
{
    VolumeGroupSetVolume(SOUND_VOLUMEGROUP_UNITMOVEMENT,  bj_SPEECH_VOLUME_UNITMOVEMENT);
    VolumeGroupSetVolume(SOUND_VOLUMEGROUP_UNITSOUNDS,    bj_SPEECH_VOLUME_UNITSOUNDS);
    VolumeGroupSetVolume(SOUND_VOLUMEGROUP_COMBAT,        bj_SPEECH_VOLUME_COMBAT);
    VolumeGroupSetVolume(SOUND_VOLUMEGROUP_SPELLS,        bj_SPEECH_VOLUME_SPELLS);
    VolumeGroupSetVolume(SOUND_VOLUMEGROUP_UI,            bj_SPEECH_VOLUME_UI);
    VolumeGroupSetVolume(SOUND_VOLUMEGROUP_MUSIC,         bj_SPEECH_VOLUME_MUSIC);
    VolumeGroupSetVolume(SOUND_VOLUMEGROUP_AMBIENTSOUNDS, bj_SPEECH_VOLUME_AMBIENTSOUNDS);
    VolumeGroupSetVolume(SOUND_VOLUMEGROUP_FIRE,          bj_SPEECH_VOLUME_FIRE);
}
void SetSpeechVolumeGroupsBJ()
{
    if (bj_gameStarted)
    {
        SetSpeechVolumeGroupsImmediateBJ();
    }
    else
    {
        TimerStart(bj_volumeGroupsTimer, bj_GAME_STARTED_THRESHOLD, false, function SetSpeechVolumeGroupsImmediateBJ);
    }
}
void VolumeGroupResetImmediateBJ()
{
    VolumeGroupReset();
}
void VolumeGroupResetBJ()
{
    if (bj_gameStarted)
    {
        VolumeGroupResetImmediateBJ();
    }
    else
    {
        TimerStart(bj_volumeGroupsTimer, bj_GAME_STARTED_THRESHOLD, false, function VolumeGroupResetImmediateBJ);
    }
}
JASSCPP::boolean GetSoundIsPlayingBJ(JASSCPP::sound soundHandle)
{
    return GetSoundIsLoading(soundHandle) || GetSoundIsPlaying(soundHandle);
}
void WaitForSoundBJ(JASSCPP::sound soundHandle,JASSCPP::real offset)
{
    TriggerWaitForSound( soundHandle, offset );
}
void SetMapMusicIndexedBJ(JASSCPP::string musicName,JASSCPP::integer index)
{
    SetMapMusic(musicName, false, index);
}
void SetMapMusicRandomBJ(JASSCPP::string musicName)
{
    SetMapMusic(musicName, true, 0);
}
void ClearMapMusicBJ()
{
    ClearMapMusic();
}
void SetStackedSoundBJ(JASSCPP::boolean add,JASSCPP::sound soundHandle,JASSCPP::rect r)
{
    JASSCPP::real width = GetRectMaxX(r) - GetRectMinX(r);
    JASSCPP::real height = GetRectMaxY(r) - GetRectMinY(r);
    SetSoundPosition(soundHandle, GetRectCenterX(r), GetRectCenterY(r), 0);
    if (add)
    {
        RegisterStackedSound(soundHandle, true, width, height);
    }
    else
    {
        UnregisterStackedSound(soundHandle, true, width, height);
    }
}
void StartSoundForPlayerBJ(JASSCPP::player whichPlayer,JASSCPP::sound soundHandle)
{
    if (whichPlayer == GetLocalPlayer())
    {
        StartSound(soundHandle);
    }
}
void VolumeGroupSetVolumeForPlayerBJ(JASSCPP::player whichPlayer,JASSCPP::volumegroup vgroup,JASSCPP::real scale)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        VolumeGroupSetVolume(vgroup, scale);
    }
}
void EnableDawnDusk(JASSCPP::boolean flag)
{
    bj_useDawnDuskSounds = flag;
}
JASSCPP::boolean IsDawnDuskEnabled()
{
    return bj_useDawnDuskSounds;
}
void SetAmbientDaySound(JASSCPP::string inLabel)
{
    JASSCPP::real ToD;
    if (bj_dayAmbientSound != null)
    {
        StopSound(bj_dayAmbientSound, true, true);
    }
    // Create new sound
    bj_dayAmbientSound = CreateMIDISound(inLabel, 20, 20);
    // Start the sound if necessary, based on current time
    ToD = GetTimeOfDay();
    if (ToD >= bj_TOD_DAWN && ToD < bj_TOD_DUSK)
    {
        StartSound(bj_dayAmbientSound);
    }
}
void SetAmbientNightSound(JASSCPP::string inLabel)
{
    JASSCPP::real ToD;
    if (bj_nightAmbientSound != null)
    {
        StopSound(bj_nightAmbientSound, true, true);
    }
    // Create new sound
    bj_nightAmbientSound = CreateMIDISound(inLabel, 20, 20);
    // Start the sound if necessary, based on current time
    ToD = GetTimeOfDay();
    if (ToD < bj_TOD_DAWN || ToD >= bj_TOD_DUSK)
    {
        StartSound(bj_nightAmbientSound);
    }
}
JASSCPP::effect AddSpecialEffectLocBJ(JASSCPP::location where,JASSCPP::string modelName)
{
    bj_lastCreatedEffect = AddSpecialEffectLoc(modelName, where);
    return bj_lastCreatedEffect;
}
JASSCPP::effect AddSpecialEffectTargetUnitBJ(JASSCPP::string attachPointName,JASSCPP::widget targetWidget,JASSCPP::string modelName)
{
    bj_lastCreatedEffect = AddSpecialEffectTarget(modelName, targetWidget, attachPointName);
    return bj_lastCreatedEffect;
}
void DestroyEffectBJ(JASSCPP::effect whichEffect)
{
    DestroyEffect(whichEffect);
}
JASSCPP::effect GetLastCreatedEffectBJ()
{
    return bj_lastCreatedEffect;
}
JASSCPP::location GetItemLoc(JASSCPP::item whichItem)
{
    return Location(GetItemX(whichItem), GetItemY(whichItem));
}
JASSCPP::real GetItemLifeBJ(JASSCPP::widget whichWidget)
{
    return GetWidgetLife(whichWidget);
}
void SetItemLifeBJ(JASSCPP::widget whichWidget,JASSCPP::real life)
{
    SetWidgetLife(whichWidget, life);
}
void AddHeroXPSwapped(JASSCPP::integer xpToAdd,JASSCPP::unit whichHero,JASSCPP::boolean showEyeCandy)
{
    AddHeroXP(whichHero, xpToAdd, showEyeCandy);
}
void SetHeroLevelBJ(JASSCPP::unit whichHero,JASSCPP::integer newLevel,JASSCPP::boolean showEyeCandy)
{
    JASSCPP::integer oldLevel = GetHeroLevel(whichHero);
    if (newLevel > oldLevel)
    {
        SetHeroLevel(whichHero, newLevel, showEyeCandy);
    }
     else if (newLevel < oldLevel)
    {
        UnitStripHeroLevel(whichHero, oldLevel - newLevel);
    }
    else
    {
        // No change in level - ignore the request.
    }
}
JASSCPP::boolean UnitAddItemSwapped(JASSCPP::item whichItem,JASSCPP::unit whichHero)
{
    return UnitAddItem(whichHero, whichItem);
}
JASSCPP::item UnitAddItemByIdSwapped(JASSCPP::integer itemId,JASSCPP::unit whichHero)
{
    bj_lastCreatedItem = CreateItem(itemId, GetUnitX(whichHero), GetUnitY(whichHero));
    UnitAddItem(whichHero, bj_lastCreatedItem);
    return bj_lastCreatedItem;
}
void UnitRemoveItemSwapped(JASSCPP::item whichItem,JASSCPP::unit whichHero)
{
    bj_lastRemovedItem = whichItem;
    UnitRemoveItem(whichHero, whichItem);
}
JASSCPP::item UnitRemoveItemFromSlotSwapped(JASSCPP::integer itemSlot,JASSCPP::unit whichHero)
{
    bj_lastRemovedItem = UnitRemoveItemFromSlot(whichHero, itemSlot-1);
    return bj_lastRemovedItem;
}
JASSCPP::item CreateItemLoc(JASSCPP::integer itemId,JASSCPP::location loc)
{
    bj_lastCreatedItem = CreateItem(itemId, GetLocationX(loc), GetLocationY(loc));
    return bj_lastCreatedItem;
}
JASSCPP::item GetLastCreatedItem()
{
    return bj_lastCreatedItem;
}
JASSCPP::item GetLastRemovedItem()
{
    return bj_lastRemovedItem;
}
void SetItemPositionLoc(JASSCPP::item whichItem,JASSCPP::location loc)
{
    SetItemPosition(whichItem, GetLocationX(loc), GetLocationY(loc));
}
JASSCPP::integer GetLearnedSkillBJ()
{
    return GetLearnedSkill();
}
void SuspendHeroXPBJ(JASSCPP::boolean flag,JASSCPP::unit whichHero)
{
    SuspendHeroXP(whichHero, !flag);
}
void SetPlayerHandicapXPBJ(JASSCPP::player whichPlayer,JASSCPP::real handicapPercent)
{
    SetPlayerHandicapXP(whichPlayer, handicapPercent * 0.01);
}
JASSCPP::real GetPlayerHandicapXPBJ(JASSCPP::player whichPlayer)
{
    return GetPlayerHandicapXP(whichPlayer) * 100;
}
void SetPlayerHandicapBJ(JASSCPP::player whichPlayer,JASSCPP::real handicapPercent)
{
    SetPlayerHandicap(whichPlayer, handicapPercent * 0.01);
}
JASSCPP::real GetPlayerHandicapBJ(JASSCPP::player whichPlayer)
{
    return GetPlayerHandicap(whichPlayer) * 100;
}
JASSCPP::integer GetHeroStatBJ(JASSCPP::integer whichStat,JASSCPP::unit whichHero,JASSCPP::boolean includeBonuses)
{
    if (whichStat == bj_HEROSTAT_STR)
    {
        return GetHeroStr(whichHero, includeBonuses);
    }
     else if (whichStat == bj_HEROSTAT_AGI)
    {
        return GetHeroAgi(whichHero, includeBonuses);
    }
     else if (whichStat == bj_HEROSTAT_INT)
    {
        return GetHeroInt(whichHero, includeBonuses);
    }
    else
    {
        // Unrecognized hero stat - return 0
        return 0;
    }
}
void SetHeroStat(JASSCPP::unit whichHero,JASSCPP::integer whichStat,JASSCPP::integer value)
{
    if (value <= 0)
    {
        return;
    }
    if (whichStat == bj_HEROSTAT_STR)
    {
        SetHeroStr(whichHero, value, true);
    }
     else if (whichStat == bj_HEROSTAT_AGI)
    {
        SetHeroAgi(whichHero, value, true);
    }
     else if (whichStat == bj_HEROSTAT_INT)
    {
        SetHeroInt(whichHero, value, true);
    }
    else
    {
        // Unrecognized hero stat - ignore the request.
    }
}
void ModifyHeroStat(JASSCPP::integer whichStat,JASSCPP::unit whichHero,JASSCPP::integer modifyMethod,JASSCPP::integer value)
{
    if (modifyMethod == bj_MODIFYMETHOD_ADD)
    {
        SetHeroStat(whichHero, whichStat, GetHeroStatBJ(whichStat, whichHero, false) + value);
    }
     else if (modifyMethod == bj_MODIFYMETHOD_SUB)
    {
        SetHeroStat(whichHero, whichStat, GetHeroStatBJ(whichStat, whichHero, false) - value);
    }
     else if (modifyMethod == bj_MODIFYMETHOD_SET)
    {
        SetHeroStat(whichHero, whichStat, value);
    }
    else
    {
        // Unrecognized modification method - ignore the request.
    }
}
JASSCPP::boolean ModifyHeroSkillPoints(JASSCPP::unit whichHero,JASSCPP::integer modifyMethod,JASSCPP::integer value)
{
    if (modifyMethod == bj_MODIFYMETHOD_ADD)
    {
        return UnitModifySkillPoints(whichHero, value);
    }
     else if (modifyMethod == bj_MODIFYMETHOD_SUB)
    {
        return UnitModifySkillPoints(whichHero, -value);
    }
     else if (modifyMethod == bj_MODIFYMETHOD_SET)
    {
        return UnitModifySkillPoints(whichHero, value - GetHeroSkillPoints(whichHero));
    }
    else
    {
        // Unrecognized modification method - ignore the request and return failure.
        return false;
    }
}
JASSCPP::boolean UnitUseItemDestructable(JASSCPP::unit whichUnit,JASSCPP::item whichItem,JASSCPP::widget target)
{
    return UnitUseItemTarget(whichUnit, whichItem, target);
}
JASSCPP::boolean UnitUseItemPointLoc(JASSCPP::unit whichUnit,JASSCPP::item whichItem,JASSCPP::location loc)
{
    return UnitUseItemPoint(whichUnit, whichItem, GetLocationX(loc), GetLocationY(loc));
}
JASSCPP::item UnitItemInSlotBJ(JASSCPP::unit whichUnit,JASSCPP::integer itemSlot)
{
    return UnitItemInSlot(whichUnit, itemSlot-1);
}
JASSCPP::integer GetInventoryIndexOfItemTypeBJ(JASSCPP::unit whichUnit,JASSCPP::integer itemId)
{
    JASSCPP::integer index;
    JASSCPP::item indexItem;
    index = 0;
    while (true)
    {
        indexItem = UnitItemInSlot(whichUnit, index);
        if ((indexItem != null) && (GetItemTypeId(indexItem) == itemId))
        {
            return index + 1;
        }
        index = index + 1;
        if (index >= bj_MAX_INVENTORY) break;
    }
    return 0;
}
JASSCPP::item GetItemOfTypeFromUnitBJ(JASSCPP::unit whichUnit,JASSCPP::integer itemId)
{
    JASSCPP::integer index = GetInventoryIndexOfItemTypeBJ(whichUnit, itemId);
    if (index == 0)
    {
        return null;
    }
    else
    {
        return UnitItemInSlot(whichUnit, index - 1);
    }
}
JASSCPP::boolean UnitHasItemOfTypeBJ(JASSCPP::unit whichUnit,JASSCPP::integer itemId)
{
    return GetInventoryIndexOfItemTypeBJ(whichUnit, itemId) > 0;
}
void SetItemInvulnerableBJ(JASSCPP::item whichItem,JASSCPP::boolean flag)
{
    SetItemInvulnerable(whichItem, flag);
}
void SetItemDropOnDeathBJ(JASSCPP::item whichItem,JASSCPP::boolean flag)
{
    SetItemDropOnDeath(whichItem, flag);
}
void SetItemDroppableBJ(JASSCPP::item whichItem,JASSCPP::boolean flag)
{
    SetItemDroppable(whichItem, flag);
}
void SetItemPlayerBJ(JASSCPP::item whichItem,JASSCPP::player whichPlayer,JASSCPP::boolean changeColor)
{
    SetItemPlayer(whichItem, whichPlayer, changeColor);
}
void SetItemVisibleBJ(JASSCPP::boolean show,JASSCPP::item whichItem)
{
    SetItemVisible(whichItem, show);
}
JASSCPP::boolean IsItemHiddenBJ(JASSCPP::item whichItem)
{
    return !IsItemVisible(whichItem);
}
JASSCPP::integer ChooseRandomItemBJ(JASSCPP::integer level)
{
    return ChooseRandomItem(level);
}
JASSCPP::integer ChooseRandomItemExBJ(JASSCPP::integer level,JASSCPP::itemtype whichType)
{
    return ChooseRandomItemEx(whichType, level);
}
JASSCPP::integer ChooseRandomNPBuildingBJ()
{
    return ChooseRandomNPBuilding();
}
JASSCPP::integer ChooseRandomCreepBJ(JASSCPP::integer level)
{
    return ChooseRandomCreep(level);
}
void EnumItemsInRectBJ(JASSCPP::rect r,JASSCPP::code actionFunc)
{
    EnumItemsInRect(r, null, actionFunc);
}
void RandomItemInRectBJEnum()
{
    bj_itemRandomConsidered = bj_itemRandomConsidered + 1;
    if (GetRandomInt(1, bj_itemRandomConsidered) == 1)
    {
        bj_itemRandomCurrentPick = GetEnumItem();
    }
}
JASSCPP::item RandomItemInRectBJ(JASSCPP::rect r,JASSCPP::boolexpr filter)
{
    bj_itemRandomConsidered = 0;
    bj_itemRandomCurrentPick = null;
    EnumItemsInRect(r, filter, function RandomItemInRectBJEnum);
    DestroyBoolExpr(filter);
    return bj_itemRandomCurrentPick;
}
JASSCPP::item RandomItemInRectSimpleBJ(JASSCPP::rect r)
{
    return RandomItemInRectBJ(r, null);
}
JASSCPP::boolean CheckItemStatus(JASSCPP::item whichItem,JASSCPP::integer status)
{
    if (status == bj_ITEM_STATUS_HIDDEN)
    {
        return !IsItemVisible(whichItem);
    }
     else if (status == bj_ITEM_STATUS_OWNED)
    {
        return IsItemOwned(whichItem);
    }
     else if (status == bj_ITEM_STATUS_INVULNERABLE)
    {
        return IsItemInvulnerable(whichItem);
    }
     else if (status == bj_ITEM_STATUS_POWERUP)
    {
        return IsItemPowerup(whichItem);
    }
     else if (status == bj_ITEM_STATUS_SELLABLE)
    {
        return IsItemSellable(whichItem);
    }
     else if (status == bj_ITEM_STATUS_PAWNABLE)
    {
        return IsItemPawnable(whichItem);
    }
    else
    {
        // Unrecognized status - return false
        return false;
    }
}
JASSCPP::boolean CheckItemcodeStatus(JASSCPP::integer itemId,JASSCPP::integer status)
{
    if (status == bj_ITEMCODE_STATUS_POWERUP)
    {
        return IsItemIdPowerup(itemId);
    }
     else if (status == bj_ITEMCODE_STATUS_SELLABLE)
    {
        return IsItemIdSellable(itemId);
    }
     else if (status == bj_ITEMCODE_STATUS_PAWNABLE)
    {
        return IsItemIdPawnable(itemId);
    }
    else
    {
        // Unrecognized status - return false
        return false;
    }
}
JASSCPP::integer UnitId2OrderIdBJ(JASSCPP::integer unitId)
{
    return unitId;
}
JASSCPP::integer String2UnitIdBJ(JASSCPP::string unitIdString)
{
    return UnitId(unitIdString);
}
JASSCPP::string UnitId2StringBJ(JASSCPP::integer unitId)
{
    JASSCPP::string unitString = UnitId2String(unitId);
    if (unitString != null)
    {
        return unitString;
    }
    // The unitId was not recognized - return an empty string.
    return "";
}
JASSCPP::integer String2OrderIdBJ(JASSCPP::string orderIdString)
{
    JASSCPP::integer orderId;
    orderId = OrderId(orderIdString);
    if (orderId != 0)
    {
        return orderId;
    }
    // Check to see if it's a (train) unit order.
    orderId = UnitId(orderIdString);
    if (orderId != 0)
    {
        return orderId;
    }
    // Unrecognized - return 0
    return 0;
}
JASSCPP::string OrderId2StringBJ(JASSCPP::integer orderId)
{
    JASSCPP::string orderString;
    orderString = OrderId2String(orderId);
    if (orderString != null)
    {
        return orderString;
    }
    // Check to see if it's a (train) unit order.
    orderString = UnitId2String(orderId);
    if (orderString != null)
    {
        return orderString;
    }
    // Unrecognized - return an empty string.
    return "";
}
JASSCPP::integer GetIssuedOrderIdBJ()
{
    return GetIssuedOrderId();
}
JASSCPP::unit GetKillingUnitBJ()
{
    return GetKillingUnit();
}
JASSCPP::unit CreateUnitAtLocSaveLast(JASSCPP::player id,JASSCPP::integer unitid,JASSCPP::location loc,JASSCPP::real face)
{
    if (unitid == 'ugol')
    {
        bj_lastCreatedUnit = CreateBlightedGoldmine(id, GetLocationX(loc), GetLocationY(loc), face);
    }
    else
    {
        bj_lastCreatedUnit = CreateUnitAtLoc(id, unitid, loc, face);
    }
    return bj_lastCreatedUnit;
}
JASSCPP::unit GetLastCreatedUnit()
{
    return bj_lastCreatedUnit;
}
JASSCPP::group CreateNUnitsAtLoc(JASSCPP::integer count,JASSCPP::integer unitId,JASSCPP::player whichPlayer,JASSCPP::location loc,JASSCPP::real face)
{
    GroupClear(bj_lastCreatedGroup);
    while (true)
    {
        count = count - 1;
        if (count < 0) break;
        CreateUnitAtLocSaveLast(whichPlayer, unitId, loc, face);
        GroupAddUnit(bj_lastCreatedGroup, bj_lastCreatedUnit);
    }
    return bj_lastCreatedGroup;
}
JASSCPP::group CreateNUnitsAtLocFacingLocBJ(JASSCPP::integer count,JASSCPP::integer unitId,JASSCPP::player whichPlayer,JASSCPP::location loc,JASSCPP::location lookAt)
{
    return CreateNUnitsAtLoc(count, unitId, whichPlayer, loc, AngleBetweenPoints(loc, lookAt));
}
void GetLastCreatedGroupEnum()
{
    GroupAddUnit(bj_groupLastCreatedDest, GetEnumUnit());
}
JASSCPP::group GetLastCreatedGroup()
{
    bj_groupLastCreatedDest = CreateGroup();
    ForGroup(bj_lastCreatedGroup, function GetLastCreatedGroupEnum);
    return bj_groupLastCreatedDest;
}
JASSCPP::unit CreateCorpseLocBJ(JASSCPP::integer unitid,JASSCPP::player whichPlayer,JASSCPP::location loc)
{
    bj_lastCreatedUnit = CreateCorpse(whichPlayer, unitid, GetLocationX(loc), GetLocationY(loc), GetRandomReal(0, 360));
    return bj_lastCreatedUnit;
}
void UnitSuspendDecayBJ(JASSCPP::boolean suspend,JASSCPP::unit whichUnit)
{
    UnitSuspendDecay(whichUnit, suspend);
}
void DelayedSuspendDecayStopAnimEnum()
{
    JASSCPP::unit enumUnit = GetEnumUnit();
    if (GetUnitState(enumUnit, UNIT_STATE_LIFE) <= 0)
    {
        SetUnitTimeScale(enumUnit, 0.0001);
    }
}
void DelayedSuspendDecayBoneEnum()
{
    JASSCPP::unit enumUnit = GetEnumUnit();
    if (GetUnitState(enumUnit, UNIT_STATE_LIFE) <= 0)
    {
        UnitSuspendDecay(enumUnit, true);
        SetUnitTimeScale(enumUnit, 0.0001);
    }
}
void DelayedSuspendDecayFleshEnum()
{
    JASSCPP::unit enumUnit = GetEnumUnit();
    if (GetUnitState(enumUnit, UNIT_STATE_LIFE) <= 0)
    {
        UnitSuspendDecay(enumUnit, true);
        SetUnitTimeScale(enumUnit, 10.0);
        SetUnitAnimation(enumUnit, "decay flesh");
    }
}
void DelayedSuspendDecay()
{
    JASSCPP::group boneGroup;
    JASSCPP::group fleshGroup;
    boneGroup = bj_suspendDecayBoneGroup;
    fleshGroup = bj_suspendDecayFleshGroup;
    bj_suspendDecayBoneGroup = CreateGroup();
    bj_suspendDecayFleshGroup = CreateGroup();
    ForGroup(fleshGroup, function DelayedSuspendDecayStopAnimEnum);
    ForGroup(boneGroup, function DelayedSuspendDecayStopAnimEnum);
    TriggerSleepAction(bj_CORPSE_MAX_DEATH_TIME);
    ForGroup(fleshGroup, function DelayedSuspendDecayFleshEnum);
    ForGroup(boneGroup, function DelayedSuspendDecayBoneEnum);
    TriggerSleepAction(0.05);
    ForGroup(fleshGroup, function DelayedSuspendDecayStopAnimEnum);
    DestroyGroup(boneGroup);
    DestroyGroup(fleshGroup);
}
void DelayedSuspendDecayCreate()
{
    bj_delayedSuspendDecayTrig = CreateTrigger();
    TriggerRegisterTimerExpireEvent(bj_delayedSuspendDecayTrig, bj_delayedSuspendDecayTimer);
    TriggerAddAction(bj_delayedSuspendDecayTrig, function DelayedSuspendDecay);
}
JASSCPP::unit CreatePermanentCorpseLocBJ(JASSCPP::integer style,JASSCPP::integer unitid,JASSCPP::player whichPlayer,JASSCPP::location loc,JASSCPP::real facing)
{
    bj_lastCreatedUnit = CreateCorpse(whichPlayer, unitid, GetLocationX(loc), GetLocationY(loc), facing);
    SetUnitBlendTime(bj_lastCreatedUnit, 0);
    if (style == bj_CORPSETYPE_FLESH)
    {
        SetUnitAnimation(bj_lastCreatedUnit, "decay flesh");
        GroupAddUnit(bj_suspendDecayFleshGroup, bj_lastCreatedUnit);
    }
     else if (style == bj_CORPSETYPE_BONE)
    {
        SetUnitAnimation(bj_lastCreatedUnit, "decay bone");
        GroupAddUnit(bj_suspendDecayBoneGroup, bj_lastCreatedUnit);
    }
    else
    {
        // Unknown decay style - treat as skeletal.
        SetUnitAnimation(bj_lastCreatedUnit, "decay bone");
        GroupAddUnit(bj_suspendDecayBoneGroup, bj_lastCreatedUnit);
    }
    TimerStart(bj_delayedSuspendDecayTimer, 0.05, false, null);
    return bj_lastCreatedUnit;
}
JASSCPP::real GetUnitStateSwap(JASSCPP::unitstate whichState,JASSCPP::unit whichUnit)
{
    return GetUnitState(whichUnit, whichState);
}
JASSCPP::real GetUnitStatePercent(JASSCPP::unit whichUnit,JASSCPP::unitstate whichState,JASSCPP::unitstate whichMaxState)
{
    JASSCPP::real value = GetUnitState(whichUnit, whichState);
    JASSCPP::real maxValue = GetUnitState(whichUnit, whichMaxState);
    if ((whichUnit == null) || (maxValue == 0))
    {
        return 0.0;
    }
    return value / maxValue * 100.0;
}
JASSCPP::real GetUnitLifePercent(JASSCPP::unit whichUnit)
{
    return GetUnitStatePercent(whichUnit, UNIT_STATE_LIFE, UNIT_STATE_MAX_LIFE);
}
JASSCPP::real GetUnitManaPercent(JASSCPP::unit whichUnit)
{
    return GetUnitStatePercent(whichUnit, UNIT_STATE_MANA, UNIT_STATE_MAX_MANA);
}
void SelectUnitSingle(JASSCPP::unit whichUnit)
{
    ClearSelection();
    SelectUnit(whichUnit, true);
}
void SelectGroupBJEnum()
{
    SelectUnit( GetEnumUnit(), true );
}
void SelectGroupBJ(JASSCPP::group g)
{
    ClearSelection();
    ForGroup( g, function SelectGroupBJEnum );
}
void SelectUnitAdd(JASSCPP::unit whichUnit)
{
    SelectUnit(whichUnit, true);
}
void SelectUnitRemove(JASSCPP::unit whichUnit)
{
    SelectUnit(whichUnit, false);
}
void ClearSelectionForPlayer(JASSCPP::player whichPlayer)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        ClearSelection();
    }
}
void SelectUnitForPlayerSingle(JASSCPP::unit whichUnit,JASSCPP::player whichPlayer)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        ClearSelection();
        SelectUnit(whichUnit, true);
    }
}
void SelectGroupForPlayerBJ(JASSCPP::group g,JASSCPP::player whichPlayer)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        ClearSelection();
        ForGroup( g, function SelectGroupBJEnum );
    }
}
void SelectUnitAddForPlayer(JASSCPP::unit whichUnit,JASSCPP::player whichPlayer)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        SelectUnit(whichUnit, true);
    }
}
void SelectUnitRemoveForPlayer(JASSCPP::unit whichUnit,JASSCPP::player whichPlayer)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        SelectUnit(whichUnit, false);
    }
}
void SetUnitLifeBJ(JASSCPP::unit whichUnit,JASSCPP::real newValue)
{
    SetUnitState(whichUnit, UNIT_STATE_LIFE, RMaxBJ(0,newValue));
}
void SetUnitManaBJ(JASSCPP::unit whichUnit,JASSCPP::real newValue)
{
    SetUnitState(whichUnit, UNIT_STATE_MANA, RMaxBJ(0,newValue));
}
void SetUnitLifePercentBJ(JASSCPP::unit whichUnit,JASSCPP::real percent)
{
    SetUnitState(whichUnit, UNIT_STATE_LIFE, GetUnitState(whichUnit, UNIT_STATE_MAX_LIFE) * RMaxBJ(0,percent) * 0.01);
}
void SetUnitManaPercentBJ(JASSCPP::unit whichUnit,JASSCPP::real percent)
{
    SetUnitState(whichUnit, UNIT_STATE_MANA, GetUnitState(whichUnit, UNIT_STATE_MAX_MANA) * RMaxBJ(0,percent) * 0.01);
}
JASSCPP::boolean IsUnitDeadBJ(JASSCPP::unit whichUnit)
{
    return GetUnitState(whichUnit, UNIT_STATE_LIFE) <= 0;
}
JASSCPP::boolean IsUnitAliveBJ(JASSCPP::unit whichUnit)
{
    return !IsUnitDeadBJ(whichUnit);
}
void IsUnitGroupDeadBJEnum()
{
    if (!IsUnitDeadBJ(GetEnumUnit()))
    {
        bj_isUnitGroupDeadResult = false;
    }
}
JASSCPP::boolean IsUnitGroupDeadBJ(JASSCPP::group g)
{
    JASSCPP::boolean wantDestroy = bj_wantDestroyGroup;
    bj_wantDestroyGroup = false;
    bj_isUnitGroupDeadResult = true;
    ForGroup(g, function IsUnitGroupDeadBJEnum);
    // If the user wants the group destroyed, do so now.
    if (wantDestroy)
    {
        DestroyGroup(g);
    }
    return bj_isUnitGroupDeadResult;
}
void IsUnitGroupEmptyBJEnum()
{
    bj_isUnitGroupEmptyResult = false;
}
JASSCPP::boolean IsUnitGroupEmptyBJ(JASSCPP::group g)
{
    JASSCPP::boolean wantDestroy = bj_wantDestroyGroup;
    bj_wantDestroyGroup = false;
    bj_isUnitGroupEmptyResult = true;
    ForGroup(g, function IsUnitGroupEmptyBJEnum);
    // If the user wants the group destroyed, do so now.
    if (wantDestroy)
    {
        DestroyGroup(g);
    }
    return bj_isUnitGroupEmptyResult;
}
void IsUnitGroupInRectBJEnum()
{
    if (!RectContainsUnit(bj_isUnitGroupInRectRect, GetEnumUnit()))
    {
        bj_isUnitGroupInRectResult = false;
    }
}
JASSCPP::boolean IsUnitGroupInRectBJ(JASSCPP::group g,JASSCPP::rect r)
{
    bj_isUnitGroupInRectResult = true;
    bj_isUnitGroupInRectRect = r;
    ForGroup(g, function IsUnitGroupInRectBJEnum);
    return bj_isUnitGroupInRectResult;
}
JASSCPP::boolean IsUnitHiddenBJ(JASSCPP::unit whichUnit)
{
    return IsUnitHidden(whichUnit);
}
void ShowUnitHide(JASSCPP::unit whichUnit)
{
    ShowUnit(whichUnit, false);
}
void ShowUnitShow(JASSCPP::unit whichUnit)
{
    if (IsUnitType(whichUnit, UNIT_TYPE_HERO) && IsUnitDeadBJ(whichUnit))
    {
        return;
    }
    ShowUnit(whichUnit, true);
}
JASSCPP::boolean IssueHauntOrderAtLocBJFilter()
{
    return GetUnitTypeId(GetFilterUnit()) == 'ngol';
}
JASSCPP::boolean IssueHauntOrderAtLocBJ(JASSCPP::unit whichPeon,JASSCPP::location loc)
{
    JASSCPP::group g = null;
    JASSCPP::unit goldMine = null;
    g = CreateGroup();
    GroupEnumUnitsInRangeOfLoc(g, loc, 2*bj_CELLWIDTH, filterIssueHauntOrderAtLocBJ);
    goldMine = FirstOfGroup(g);
    DestroyGroup(g);
    // If no mine was found, abort the request.
    if (goldMine == null)
    {
        return false;
    }
    // Issue the Haunt Gold Mine order.
    return IssueTargetOrderById(whichPeon, 'ugol', goldMine);
}
JASSCPP::boolean IssueBuildOrderByIdLocBJ(JASSCPP::unit whichPeon,JASSCPP::integer unitId,JASSCPP::location loc)
{
    if (unitId == 'ugol')
    {
        return IssueHauntOrderAtLocBJ(whichPeon, loc);
    }
    else
    {
        return IssueBuildOrderById(whichPeon, unitId, GetLocationX(loc), GetLocationY(loc));
    }
}
JASSCPP::boolean IssueTrainOrderByIdBJ(JASSCPP::unit whichUnit,JASSCPP::integer unitId)
{
    return IssueImmediateOrderById(whichUnit, unitId);
}
JASSCPP::boolean GroupTrainOrderByIdBJ(JASSCPP::group g,JASSCPP::integer unitId)
{
    return GroupImmediateOrderById(g, unitId);
}
JASSCPP::boolean IssueUpgradeOrderByIdBJ(JASSCPP::unit whichUnit,JASSCPP::integer techId)
{
    return IssueImmediateOrderById(whichUnit, techId);
}
JASSCPP::unit GetAttackedUnitBJ()
{
    return GetTriggerUnit();
}
void SetUnitFlyHeightBJ(JASSCPP::unit whichUnit,JASSCPP::real newHeight,JASSCPP::real rate)
{
    SetUnitFlyHeight(whichUnit, newHeight, rate);
}
void SetUnitTurnSpeedBJ(JASSCPP::unit whichUnit,JASSCPP::real turnSpeed)
{
    SetUnitTurnSpeed(whichUnit, turnSpeed);
}
void SetUnitPropWindowBJ(JASSCPP::unit whichUnit,JASSCPP::real propWindow)
{
    JASSCPP::real angle = propWindow;
    if (angle <= 0)
    {
        angle = 1;
    }
     else if (angle >= 360)
    {
        angle = 359;
    }
    angle = angle * bj_DEGTORAD;
    SetUnitPropWindow(whichUnit, angle);
}
JASSCPP::real GetUnitPropWindowBJ(JASSCPP::unit whichUnit)
{
    return GetUnitPropWindow(whichUnit) * bj_RADTODEG;
}
JASSCPP::real GetUnitDefaultPropWindowBJ(JASSCPP::unit whichUnit)
{
    return GetUnitDefaultPropWindow(whichUnit);
}
void SetUnitBlendTimeBJ(JASSCPP::unit whichUnit,JASSCPP::real blendTime)
{
    SetUnitBlendTime(whichUnit, blendTime);
}
void SetUnitAcquireRangeBJ(JASSCPP::unit whichUnit,JASSCPP::real acquireRange)
{
    SetUnitAcquireRange(whichUnit, acquireRange);
}
void UnitSetCanSleepBJ(JASSCPP::unit whichUnit,JASSCPP::boolean canSleep)
{
    UnitAddSleep(whichUnit, canSleep);
}
JASSCPP::boolean UnitCanSleepBJ(JASSCPP::unit whichUnit)
{
    return UnitCanSleep(whichUnit);
}
void UnitWakeUpBJ(JASSCPP::unit whichUnit)
{
    UnitWakeUp(whichUnit);
}
JASSCPP::boolean UnitIsSleepingBJ(JASSCPP::unit whichUnit)
{
    return UnitIsSleeping(whichUnit);
}
void WakePlayerUnitsEnum()
{
    UnitWakeUp(GetEnumUnit());
}
void WakePlayerUnits(JASSCPP::player whichPlayer)
{
    JASSCPP::group g = CreateGroup();
    GroupEnumUnitsOfPlayer(g, whichPlayer, null);
    ForGroup(g, function WakePlayerUnitsEnum);
    DestroyGroup(g);
}
void EnableCreepSleepBJ(JASSCPP::boolean enable)
{
    SetPlayerState(Player(PLAYER_NEUTRAL_AGGRESSIVE), PLAYER_STATE_NO_CREEP_SLEEP, IntegerTertiaryOp(enable, 0, 1));
    // If we're disabling, attempt to wake any already-sleeping creeps.
    if (!enable)
    {
        WakePlayerUnits(Player(PLAYER_NEUTRAL_AGGRESSIVE));
    }
}
JASSCPP::boolean UnitGenerateAlarms(JASSCPP::unit whichUnit,JASSCPP::boolean generate)
{
    return UnitIgnoreAlarm(whichUnit, !generate);
}
JASSCPP::boolean DoesUnitGenerateAlarms(JASSCPP::unit whichUnit)
{
    return !UnitIgnoreAlarmToggled(whichUnit);
}
void PauseAllUnitsBJEnum()
{
    PauseUnit( GetEnumUnit(), bj_pauseAllUnitsFlag );
}
void PauseAllUnitsBJ(JASSCPP::boolean pause)
{
    JASSCPP::integer index;
    JASSCPP::player indexPlayer;
    JASSCPP::group g;
    bj_pauseAllUnitsFlag = pause;
    g = CreateGroup();
    index = 0;
    while (true)
    {
        indexPlayer = Player( index );
        // If this is a computer slot, pause/resume the AI.
        if (GetPlayerController( indexPlayer ) == MAP_CONTROL_COMPUTER)
        {
            PauseCompAI( indexPlayer, pause );
        }
        // Enumerate and unpause every unit owned by the player.
        GroupEnumUnitsOfPlayer( g, indexPlayer, null );
        ForGroup( g, function PauseAllUnitsBJEnum );
        GroupClear( g );
        index = index + 1;
        if (index == bj_MAX_PLAYER_SLOTS) break;
    }
    DestroyGroup(g);
}
void PauseUnitBJ(JASSCPP::boolean pause,JASSCPP::unit whichUnit)
{
    PauseUnit(whichUnit, pause);
}
JASSCPP::boolean IsUnitPausedBJ(JASSCPP::unit whichUnit)
{
    return IsUnitPaused(whichUnit);
}
void UnitPauseTimedLifeBJ(JASSCPP::boolean flag,JASSCPP::unit whichUnit)
{
    UnitPauseTimedLife(whichUnit, flag);
}
void UnitApplyTimedLifeBJ(JASSCPP::real duration,JASSCPP::integer buffId,JASSCPP::unit whichUnit)
{
    UnitApplyTimedLife(whichUnit, buffId, duration);
}
void UnitShareVisionBJ(JASSCPP::boolean share,JASSCPP::unit whichUnit,JASSCPP::player whichPlayer)
{
    UnitShareVision(whichUnit, whichPlayer, share);
}
void UnitRemoveBuffsBJ(JASSCPP::integer buffType,JASSCPP::unit whichUnit)
{
    if (buffType == bj_REMOVEBUFFS_POSITIVE)
    {
        UnitRemoveBuffs(whichUnit, true, false);
    }
     else if (buffType == bj_REMOVEBUFFS_NEGATIVE)
    {
        UnitRemoveBuffs(whichUnit, false, true);
    }
     else if (buffType == bj_REMOVEBUFFS_ALL)
    {
        UnitRemoveBuffs(whichUnit, true, true);
    }
     else if (buffType == bj_REMOVEBUFFS_NONTLIFE)
    {
        UnitRemoveBuffsEx(whichUnit, true, true, false, false, false, true, false);
    }
    else
    {
        // Unrecognized dispel type - ignore the request.
    }
}
void UnitRemoveBuffsExBJ(JASSCPP::integer polarity,JASSCPP::integer resist,JASSCPP::unit whichUnit,JASSCPP::boolean bTLife,JASSCPP::boolean bAura)
{
    JASSCPP::boolean bPos = (polarity == bj_BUFF_POLARITY_EITHER) or (polarity == bj_BUFF_POLARITY_POSITIVE);
    JASSCPP::boolean bNeg = (polarity == bj_BUFF_POLARITY_EITHER) or (polarity == bj_BUFF_POLARITY_NEGATIVE);
    JASSCPP::boolean bMagic = (resist == bj_BUFF_RESIST_BOTH) or (resist == bj_BUFF_RESIST_MAGIC);
    JASSCPP::boolean bPhys = (resist == bj_BUFF_RESIST_BOTH) or (resist == bj_BUFF_RESIST_PHYSICAL);
    UnitRemoveBuffsEx(whichUnit, bPos, bNeg, bMagic, bPhys, bTLife, bAura, false);
}
JASSCPP::integer UnitCountBuffsExBJ(JASSCPP::integer polarity,JASSCPP::integer resist,JASSCPP::unit whichUnit,JASSCPP::boolean bTLife,JASSCPP::boolean bAura)
{
    JASSCPP::boolean bPos = (polarity == bj_BUFF_POLARITY_EITHER) or (polarity == bj_BUFF_POLARITY_POSITIVE);
    JASSCPP::boolean bNeg = (polarity == bj_BUFF_POLARITY_EITHER) or (polarity == bj_BUFF_POLARITY_NEGATIVE);
    JASSCPP::boolean bMagic = (resist == bj_BUFF_RESIST_BOTH) or (resist == bj_BUFF_RESIST_MAGIC);
    JASSCPP::boolean bPhys = (resist == bj_BUFF_RESIST_BOTH) or (resist == bj_BUFF_RESIST_PHYSICAL);
    return UnitCountBuffsEx(whichUnit, bPos, bNeg, bMagic, bPhys, bTLife, bAura, false);
}
JASSCPP::boolean UnitRemoveAbilityBJ(JASSCPP::integer abilityId,JASSCPP::unit whichUnit)
{
    return UnitRemoveAbility(whichUnit, abilityId);
}
JASSCPP::boolean UnitAddAbilityBJ(JASSCPP::integer abilityId,JASSCPP::unit whichUnit)
{
    return UnitAddAbility(whichUnit, abilityId);
}
void SetUnitExplodedBJ(JASSCPP::unit whichUnit,JASSCPP::boolean exploded)
{
    SetUnitExploded(whichUnit, exploded);
}
void ExplodeUnitBJ(JASSCPP::unit whichUnit)
{
    SetUnitExploded(whichUnit, true);
    KillUnit(whichUnit);
}
JASSCPP::unit GetTransportUnitBJ()
{
    return GetTransportUnit();
}
JASSCPP::unit GetLoadedUnitBJ()
{
    return GetLoadedUnit();
}
JASSCPP::boolean IsUnitInTransportBJ(JASSCPP::unit whichUnit,JASSCPP::unit whichTransport)
{
    return IsUnitInTransport(whichUnit, whichTransport);
}
JASSCPP::boolean IsUnitLoadedBJ(JASSCPP::unit whichUnit)
{
    return IsUnitLoaded(whichUnit);
}
JASSCPP::boolean IsUnitIllusionBJ(JASSCPP::unit whichUnit)
{
    return IsUnitIllusion(whichUnit);
}
JASSCPP::unit ReplaceUnitBJ(JASSCPP::unit whichUnit,JASSCPP::integer newUnitId,JASSCPP::integer unitStateMethod)
{
    JASSCPP::unit oldUnit = whichUnit;
    JASSCPP::unit newUnit;
    JASSCPP::boolean wasHidden;
    JASSCPP::integer index;
    JASSCPP::item indexItem;
    JASSCPP::real oldRatio;
    if (oldUnit == null)
    {
        bj_lastReplacedUnit = oldUnit;
        return oldUnit;
    }
    // Hide the original unit.
    wasHidden = IsUnitHidden(oldUnit);
    ShowUnit(oldUnit, false);
    // Create the replacement unit.
    if (newUnitId == 'ugol')
    {
        newUnit = CreateBlightedGoldmine(GetOwningPlayer(oldUnit), GetUnitX(oldUnit), GetUnitY(oldUnit), GetUnitFacing(oldUnit));
    }
    else
    {
        newUnit = CreateUnit(GetOwningPlayer(oldUnit), newUnitId, GetUnitX(oldUnit), GetUnitY(oldUnit), GetUnitFacing(oldUnit));
    }
    // Set the unit's life and mana according to the requested method.
    if (unitStateMethod == bj_UNIT_STATE_METHOD_RELATIVE)
    {
        // Set the replacement's current/max life ratio to that of the old unit.
        // If both units have mana, do the same for mana.
        if (GetUnitState(oldUnit, UNIT_STATE_MAX_LIFE) > 0)
        {
            oldRatio = GetUnitState(oldUnit, UNIT_STATE_LIFE) / GetUnitState(oldUnit, UNIT_STATE_MAX_LIFE);
            SetUnitState(newUnit, UNIT_STATE_LIFE, oldRatio * GetUnitState(newUnit, UNIT_STATE_MAX_LIFE));
        }
        if ((GetUnitState(oldUnit, UNIT_STATE_MAX_MANA) > 0) && (GetUnitState(newUnit, UNIT_STATE_MAX_MANA) > 0))
        {
            oldRatio = GetUnitState(oldUnit, UNIT_STATE_MANA) / GetUnitState(oldUnit, UNIT_STATE_MAX_MANA);
            SetUnitState(newUnit, UNIT_STATE_MANA, oldRatio * GetUnitState(newUnit, UNIT_STATE_MAX_MANA));
        }
    }
     else if (unitStateMethod == bj_UNIT_STATE_METHOD_ABSOLUTE)
    {
        // Set the replacement's current life to that of the old unit.
        // If the new unit has mana, do the same for mana.
        SetUnitState(newUnit, UNIT_STATE_LIFE, GetUnitState(oldUnit, UNIT_STATE_LIFE));
        if (GetUnitState(newUnit, UNIT_STATE_MAX_MANA) > 0)
        {
            SetUnitState(newUnit, UNIT_STATE_MANA, GetUnitState(oldUnit, UNIT_STATE_MANA));
        }
    }
     else if (unitStateMethod == bj_UNIT_STATE_METHOD_DEFAULTS)
    {
        // The newly created unit should already have default life and mana.
    }
     else if (unitStateMethod == bj_UNIT_STATE_METHOD_MAXIMUM)
    {
        // Use max life and mana.
        SetUnitState(newUnit, UNIT_STATE_LIFE, GetUnitState(newUnit, UNIT_STATE_MAX_LIFE));
        SetUnitState(newUnit, UNIT_STATE_MANA, GetUnitState(newUnit, UNIT_STATE_MAX_MANA));
    }
    else
    {
        // Unrecognized unit state method - ignore the request.
    }
    // Mirror properties of the old unit onto the new unit.
    //call PauseUnit(newUnit, IsUnitPaused(oldUnit))
    SetResourceAmount(newUnit, GetResourceAmount(oldUnit));
    // If both the old and new units are heroes, handle their hero info.
    if (IsUnitType(oldUnit, UNIT_TYPE_HERO) && IsUnitType(newUnit, UNIT_TYPE_HERO))
    {
        SetHeroXP(newUnit, GetHeroXP(oldUnit), false);
        index = 0;
        while (true)
        {
            indexItem = UnitItemInSlot(oldUnit, index);
            if (indexItem != null)
            {
                UnitRemoveItem(oldUnit, indexItem);
                UnitAddItem(newUnit, indexItem);
            }
            index = index + 1;
            if (index >= bj_MAX_INVENTORY) break;
        }
    }
    // Remove or kill the original unit.  It is sometimes unsafe to remove
    // hidden units, so kill the original unit if it was previously hidden.
    if (wasHidden)
    {
        KillUnit(oldUnit);
        RemoveUnit(oldUnit);
    }
    else
    {
        RemoveUnit(oldUnit);
    }
    bj_lastReplacedUnit = newUnit;
    return newUnit;
}
JASSCPP::unit GetLastReplacedUnitBJ()
{
    return bj_lastReplacedUnit;
}
void SetUnitPositionLocFacingBJ(JASSCPP::unit whichUnit,JASSCPP::location loc,JASSCPP::real facing)
{
    SetUnitPositionLoc(whichUnit, loc);
    SetUnitFacing(whichUnit, facing);
}
void SetUnitPositionLocFacingLocBJ(JASSCPP::unit whichUnit,JASSCPP::location loc,JASSCPP::location lookAt)
{
    SetUnitPositionLoc(whichUnit, loc);
    SetUnitFacing(whichUnit, AngleBetweenPoints(loc, lookAt));
}
void AddItemToStockBJ(JASSCPP::integer itemId,JASSCPP::unit whichUnit,JASSCPP::integer currentStock,JASSCPP::integer stockMax)
{
    AddItemToStock(whichUnit, itemId, currentStock, stockMax);
}
void AddUnitToStockBJ(JASSCPP::integer unitId,JASSCPP::unit whichUnit,JASSCPP::integer currentStock,JASSCPP::integer stockMax)
{
    AddUnitToStock(whichUnit, unitId, currentStock, stockMax);
}
void RemoveItemFromStockBJ(JASSCPP::integer itemId,JASSCPP::unit whichUnit)
{
    RemoveItemFromStock(whichUnit, itemId);
}
void RemoveUnitFromStockBJ(JASSCPP::integer unitId,JASSCPP::unit whichUnit)
{
    RemoveUnitFromStock(whichUnit, unitId);
}
void SetUnitUseFoodBJ(JASSCPP::boolean enable,JASSCPP::unit whichUnit)
{
    SetUnitUseFood(whichUnit, enable);
}
JASSCPP::destructable CreateDestructableLoc(JASSCPP::integer objectid,JASSCPP::location loc,JASSCPP::real facing,JASSCPP::real scale,JASSCPP::integer variation)
{
    bj_lastCreatedDestructable = CreateDestructable(objectid, GetLocationX(loc), GetLocationY(loc), facing, scale, variation);
    return bj_lastCreatedDestructable;
}
JASSCPP::destructable CreateDeadDestructableLocBJ(JASSCPP::integer objectid,JASSCPP::location loc,JASSCPP::real facing,JASSCPP::real scale,JASSCPP::integer variation)
{
    bj_lastCreatedDestructable = CreateDeadDestructable(objectid, GetLocationX(loc), GetLocationY(loc), facing, scale, variation);
    return bj_lastCreatedDestructable;
}
JASSCPP::destructable GetLastCreatedDestructable()
{
    return bj_lastCreatedDestructable;
}
void ShowDestructableBJ(JASSCPP::boolean flag,JASSCPP::destructable d)
{
    ShowDestructable(d, flag);
}
void SetDestructableInvulnerableBJ(JASSCPP::destructable d,JASSCPP::boolean flag)
{
    SetDestructableInvulnerable(d, flag);
}
JASSCPP::boolean IsDestructableInvulnerableBJ(JASSCPP::destructable d)
{
    return IsDestructableInvulnerable(d);
}
JASSCPP::location GetDestructableLoc(JASSCPP::destructable whichDestructable)
{
    return Location(GetDestructableX(whichDestructable), GetDestructableY(whichDestructable));
}
void EnumDestructablesInRectAll(JASSCPP::rect r,JASSCPP::code actionFunc)
{
    EnumDestructablesInRect(r, null, actionFunc);
}
JASSCPP::boolean EnumDestructablesInCircleBJFilter()
{
    JASSCPP::location destLoc = GetDestructableLoc(GetFilterDestructable());
    JASSCPP::boolean result;
    result = DistanceBetweenPoints(destLoc, bj_enumDestructableCenter) <= bj_enumDestructableRadius;
    RemoveLocation(destLoc);
    return result;
}
JASSCPP::boolean IsDestructableDeadBJ(JASSCPP::destructable d)
{
    return GetDestructableLife(d) <= 0;
}
JASSCPP::boolean IsDestructableAliveBJ(JASSCPP::destructable d)
{
    return !IsDestructableDeadBJ(d);
}
void RandomDestructableInRectBJEnum()
{
    bj_destRandomConsidered = bj_destRandomConsidered + 1;
    if (GetRandomInt(1,bj_destRandomConsidered) == 1)
    {
        bj_destRandomCurrentPick = GetEnumDestructable();
    }
}
JASSCPP::destructable RandomDestructableInRectBJ(JASSCPP::rect r,JASSCPP::boolexpr filter)
{
    bj_destRandomConsidered = 0;
    bj_destRandomCurrentPick = null;
    EnumDestructablesInRect(r, filter, function RandomDestructableInRectBJEnum);
    DestroyBoolExpr(filter);
    return bj_destRandomCurrentPick;
}
JASSCPP::destructable RandomDestructableInRectSimpleBJ(JASSCPP::rect r)
{
    return RandomDestructableInRectBJ(r, null);
}
void EnumDestructablesInCircleBJ(JASSCPP::real radius,JASSCPP::location loc,JASSCPP::code actionFunc)
{
    JASSCPP::rect r;
    if (radius >= 0)
    {
        bj_enumDestructableCenter = loc;
        bj_enumDestructableRadius = radius;
        r = GetRectFromCircleBJ(loc, radius);
        EnumDestructablesInRect(r, filterEnumDestructablesInCircleBJ, actionFunc);
        RemoveRect(r);
    }
}
void SetDestructableLifePercentBJ(JASSCPP::destructable d,JASSCPP::real percent)
{
    SetDestructableLife(d, GetDestructableMaxLife(d) * percent * 0.01);
}
void SetDestructableMaxLifeBJ(JASSCPP::destructable d,JASSCPP::real max)
{
    SetDestructableMaxLife(d, max);
}
void ModifyGateBJ(JASSCPP::integer gateOperation,JASSCPP::destructable d)
{
    if (gateOperation == bj_GATEOPERATION_CLOSE)
    {
        if (GetDestructableLife(d) <= 0)
        {
            DestructableRestoreLife(d, GetDestructableMaxLife(d), true);
        }
        SetDestructableAnimation(d, "stand");
    }
     else if (gateOperation == bj_GATEOPERATION_OPEN)
    {
        if (GetDestructableLife(d) > 0)
        {
            KillDestructable(d);
        }
        SetDestructableAnimation(d, "death alternate");
    }
     else if (gateOperation == bj_GATEOPERATION_DESTROY)
    {
        if (GetDestructableLife(d) > 0)
        {
            KillDestructable(d);
        }
        SetDestructableAnimation(d, "death");
    }
    else
    {
        // Unrecognized gate state - ignore the request.
    }
}
JASSCPP::integer GetElevatorHeight(JASSCPP::destructable d)
{
    JASSCPP::integer height;
    height = 1 + R2I(GetDestructableOccluderHeight(d) / bj_CLIFFHEIGHT);
    if ((height < 1) || (height > 3))
    {
        height = 1;
    }
    return height;
}
void ChangeElevatorHeight(JASSCPP::destructable d,JASSCPP::integer newHeight)
{
    JASSCPP::integer oldHeight;
    newHeight = IMaxBJ(1, newHeight);
    newHeight = IMinBJ(3, newHeight);
    // Find out what height the elevator is already at.
    oldHeight = GetElevatorHeight(d);
    // Set the elevator's occlusion height.
    SetDestructableOccluderHeight(d, bj_CLIFFHEIGHT*(newHeight-1));
    if (newHeight == 1)
    {
        if (oldHeight == 2)
        {
            SetDestructableAnimation(d, "birth");
            QueueDestructableAnimation(d, "stand");
        }
         else if (oldHeight == 3)
        {
            SetDestructableAnimation(d, "birth third");
            QueueDestructableAnimation(d, "stand");
        }
        else
        {
            // Unrecognized old height - snap to new height.
            SetDestructableAnimation(d, "stand");
        }
    }
     else if (newHeight == 2)
    {
        if (oldHeight == 1)
        {
            SetDestructableAnimation(d, "death");
            QueueDestructableAnimation(d, "stand second");
        }
         else if (oldHeight == 3)
        {
            SetDestructableAnimation(d, "birth second");
            QueueDestructableAnimation(d, "stand second");
        }
        else
        {
            // Unrecognized old height - snap to new height.
            SetDestructableAnimation(d, "stand second");
        }
    }
     else if (newHeight == 3)
    {
        if (oldHeight == 1)
        {
            SetDestructableAnimation(d, "death third");
            QueueDestructableAnimation(d, "stand third");
        }
         else if (oldHeight == 2)
        {
            SetDestructableAnimation(d, "death second");
            QueueDestructableAnimation(d, "stand third");
        }
        else
        {
            // Unrecognized old height - snap to new height.
            SetDestructableAnimation(d, "stand third");
        }
    }
    else
    {
        // Unrecognized new height - ignore the request.
    }
}
void NudgeUnitsInRectEnum()
{
    JASSCPP::unit nudgee = GetEnumUnit();
    SetUnitPosition(nudgee, GetUnitX(nudgee), GetUnitY(nudgee));
}
void NudgeItemsInRectEnum()
{
    JASSCPP::item nudgee = GetEnumItem();
    SetItemPosition(nudgee, GetItemX(nudgee), GetItemY(nudgee));
}
void NudgeObjectsInRect(JASSCPP::rect nudgeArea)
{
    JASSCPP::group g;
    g = CreateGroup();
    GroupEnumUnitsInRect(g, nudgeArea, null);
    ForGroup(g, function NudgeUnitsInRectEnum);
    DestroyGroup(g);
    EnumItemsInRect(nudgeArea, null, function NudgeItemsInRectEnum);
}
void NearbyElevatorExistsEnum()
{
    JASSCPP::destructable d = GetEnumDestructable();
    JASSCPP::integer dType = GetDestructableTypeId(d);
    if ((dType == bj_ELEVATOR_CODE01) || (dType == bj_ELEVATOR_CODE02))
    {
        bj_elevatorNeighbor = d;
    }
}
JASSCPP::boolean NearbyElevatorExists(JASSCPP::real x,JASSCPP::real y)
{
    JASSCPP::real findThreshold = 32;
    JASSCPP::rect r;
    r = Rect(x - findThreshold, y - findThreshold, x + findThreshold, y + findThreshold);
    bj_elevatorNeighbor = null;
    EnumDestructablesInRect(r, null, function NearbyElevatorExistsEnum);
    RemoveRect(r);
    return bj_elevatorNeighbor != null;
}
void FindElevatorWallBlockerEnum()
{
    bj_elevatorWallBlocker = GetEnumDestructable();
}
void ChangeElevatorWallBlocker(JASSCPP::real x,JASSCPP::real y,JASSCPP::real facing,JASSCPP::boolean open)
{
    JASSCPP::destructable blocker = null;
    JASSCPP::real findThreshold = 32;
    JASSCPP::real nudgeLength = 4.25 * bj_CELLWIDTH;
    JASSCPP::real nudgeWidth = 1.25 * bj_CELLWIDTH;
    JASSCPP::rect r;
    r = Rect(x - findThreshold, y - findThreshold, x + findThreshold, y + findThreshold);
    bj_elevatorWallBlocker = null;
    EnumDestructablesInRect(r, null, function FindElevatorWallBlockerEnum);
    RemoveRect(r);
    blocker = bj_elevatorWallBlocker;
    // Ensure that the blocker exists.
    if (blocker == null)
    {
        blocker = CreateDeadDestructable(bj_ELEVATOR_BLOCKER_CODE, x, y, facing, 1, 0);
    }
     else if (GetDestructableTypeId(blocker) != bj_ELEVATOR_BLOCKER_CODE)
    {
        // If a different destructible exists in the blocker's spot, ignore
        // the request.  (Two destructibles cannot occupy the same location
        // on the map, so we cannot create an elevator blocker here.)
        return;
    }
    if (open)
    {
        // Ensure that the blocker is dead.
        if (GetDestructableLife(blocker) > 0)
        {
            KillDestructable(blocker);
        }
    }
    else
    {
        // Ensure that the blocker is alive.
        if (GetDestructableLife(blocker) <= 0)
        {
            DestructableRestoreLife(blocker, GetDestructableMaxLife(blocker), false);
        }
        // Nudge any objects standing in the blocker's way.
        if (facing == 0)
        {
            r = Rect(x - nudgeWidth/2, y - nudgeLength/2, x + nudgeWidth/2, y + nudgeLength/2);
            NudgeObjectsInRect(r);
            RemoveRect(r);
        }
         else if (facing == 90)
        {
            r = Rect(x - nudgeLength/2, y - nudgeWidth/2, x + nudgeLength/2, y + nudgeWidth/2);
            NudgeObjectsInRect(r);
            RemoveRect(r);
        }
        else
        {
            // Unrecognized blocker angle - don't nudge anything.
        }
    }
}
void ChangeElevatorWalls(JASSCPP::boolean open,JASSCPP::integer walls,JASSCPP::destructable d)
{
    JASSCPP::real x = GetDestructableX(d);
    JASSCPP::real y = GetDestructableY(d);
    JASSCPP::real distToBlocker = 192;
    JASSCPP::real distToNeighbor = 256;
    if ((walls == bj_ELEVATOR_WALL_TYPE_ALL) || (walls == bj_ELEVATOR_WALL_TYPE_EAST))
    {
        if (!NearbyElevatorExists(x + distToNeighbor, y))
        {
            ChangeElevatorWallBlocker(x + distToBlocker, y, 0, open);
        }
    }
    if ((walls == bj_ELEVATOR_WALL_TYPE_ALL) || (walls == bj_ELEVATOR_WALL_TYPE_NORTH))
    {
        if (!NearbyElevatorExists(x, y + distToNeighbor))
        {
            ChangeElevatorWallBlocker(x, y + distToBlocker, 90, open);
        }
    }
    if ((walls == bj_ELEVATOR_WALL_TYPE_ALL) || (walls == bj_ELEVATOR_WALL_TYPE_SOUTH))
    {
        if (!NearbyElevatorExists(x, y - distToNeighbor))
        {
            ChangeElevatorWallBlocker(x, y - distToBlocker, 90, open);
        }
    }
    if ((walls == bj_ELEVATOR_WALL_TYPE_ALL) || (walls == bj_ELEVATOR_WALL_TYPE_WEST))
    {
        if (!NearbyElevatorExists(x - distToNeighbor, y))
        {
            ChangeElevatorWallBlocker(x - distToBlocker, y, 0, open);
        }
    }
}
void WaygateActivateBJ(JASSCPP::boolean activate,JASSCPP::unit waygate)
{
    WaygateActivate(waygate, activate);
}
JASSCPP::boolean WaygateIsActiveBJ(JASSCPP::unit waygate)
{
    return WaygateIsActive(waygate);
}
void WaygateSetDestinationLocBJ(JASSCPP::unit waygate,JASSCPP::location loc)
{
    WaygateSetDestination(waygate, GetLocationX(loc), GetLocationY(loc));
}
JASSCPP::location WaygateGetDestinationLocBJ(JASSCPP::unit waygate)
{
    return Location(WaygateGetDestinationX(waygate), WaygateGetDestinationY(waygate));
}
void UnitSetUsesAltIconBJ(JASSCPP::boolean flag,JASSCPP::unit whichUnit)
{
    UnitSetUsesAltIcon(whichUnit, flag);
}
void ForceUIKeyBJ(JASSCPP::player whichPlayer,JASSCPP::string key)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        ForceUIKey(key);
    }
}
void ForceUICancelBJ(JASSCPP::player whichPlayer)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        ForceUICancel();
    }
}
void ForGroupBJ(JASSCPP::group whichGroup,JASSCPP::code callback)
{
    JASSCPP::boolean wantDestroy = bj_wantDestroyGroup;
    bj_wantDestroyGroup = false;
    ForGroup(whichGroup, callback);
    // If the user wants the group destroyed, do so now.
    if (wantDestroy)
    {
        DestroyGroup(whichGroup);
    }
}
void GroupAddUnitSimple(JASSCPP::unit whichUnit,JASSCPP::group whichGroup)
{
    GroupAddUnit(whichGroup, whichUnit);
}
void GroupRemoveUnitSimple(JASSCPP::unit whichUnit,JASSCPP::group whichGroup)
{
    GroupRemoveUnit(whichGroup, whichUnit);
}
void GroupAddGroupEnum()
{
    GroupAddUnit(bj_groupAddGroupDest, GetEnumUnit());
}
void GroupAddGroup(JASSCPP::group sourceGroup,JASSCPP::group destGroup)
{
    JASSCPP::boolean wantDestroy = bj_wantDestroyGroup;
    bj_wantDestroyGroup = false;
    bj_groupAddGroupDest = destGroup;
    ForGroup(sourceGroup, function GroupAddGroupEnum);
    // If the user wants the group destroyed, do so now.
    if (wantDestroy)
    {
        DestroyGroup(sourceGroup);
    }
}
void GroupRemoveGroupEnum()
{
    GroupRemoveUnit(bj_groupRemoveGroupDest, GetEnumUnit());
}
void GroupRemoveGroup(JASSCPP::group sourceGroup,JASSCPP::group destGroup)
{
    JASSCPP::boolean wantDestroy = bj_wantDestroyGroup;
    bj_wantDestroyGroup = false;
    bj_groupRemoveGroupDest = destGroup;
    ForGroup(sourceGroup, function GroupRemoveGroupEnum);
    // If the user wants the group destroyed, do so now.
    if (wantDestroy)
    {
        DestroyGroup(sourceGroup);
    }
}
void ForceAddPlayerSimple(JASSCPP::player whichPlayer,JASSCPP::force whichForce)
{
    ForceAddPlayer(whichForce, whichPlayer);
}
void ForceRemovePlayerSimple(JASSCPP::player whichPlayer,JASSCPP::force whichForce)
{
    ForceRemovePlayer(whichForce, whichPlayer);
}
void GroupPickRandomUnitEnum()
{
    bj_groupRandomConsidered = bj_groupRandomConsidered + 1;
    if (GetRandomInt(1,bj_groupRandomConsidered) == 1)
    {
        bj_groupRandomCurrentPick = GetEnumUnit();
    }
}
JASSCPP::unit GroupPickRandomUnit(JASSCPP::group whichGroup)
{
    JASSCPP::boolean wantDestroy = bj_wantDestroyGroup;
    bj_wantDestroyGroup = false;
    bj_groupRandomConsidered = 0;
    bj_groupRandomCurrentPick = null;
    ForGroup(whichGroup, function GroupPickRandomUnitEnum);
    // If the user wants the group destroyed, do so now.
    if (wantDestroy)
    {
        DestroyGroup(whichGroup);
    }
    return bj_groupRandomCurrentPick;
}
void ForcePickRandomPlayerEnum()
{
    bj_forceRandomConsidered = bj_forceRandomConsidered + 1;
    if (GetRandomInt(1,bj_forceRandomConsidered) == 1)
    {
        bj_forceRandomCurrentPick = GetEnumPlayer();
    }
}
JASSCPP::player ForcePickRandomPlayer(JASSCPP::force whichForce)
{
    bj_forceRandomConsidered = 0;
    bj_forceRandomCurrentPick = null;
    ForForce(whichForce, function ForcePickRandomPlayerEnum);
    return bj_forceRandomCurrentPick;
}
void EnumUnitsSelected(JASSCPP::player whichPlayer,JASSCPP::boolexpr enumFilter,JASSCPP::code enumAction)
{
    JASSCPP::group g = CreateGroup();
    SyncSelections();
    GroupEnumUnitsSelected(g, whichPlayer, enumFilter);
    DestroyBoolExpr(enumFilter);
    ForGroup(g, enumAction);
    DestroyGroup(g);
}
JASSCPP::group GetUnitsInRectMatching(JASSCPP::rect r,JASSCPP::boolexpr filter)
{
    JASSCPP::group g = CreateGroup();
    GroupEnumUnitsInRect(g, r, filter);
    DestroyBoolExpr(filter);
    return g;
}
JASSCPP::group GetUnitsInRectAll(JASSCPP::rect r)
{
    return GetUnitsInRectMatching(r, null);
}
JASSCPP::boolean GetUnitsInRectOfPlayerFilter()
{
    return GetOwningPlayer(GetFilterUnit()) == bj_groupEnumOwningPlayer;
}
JASSCPP::group GetUnitsInRectOfPlayer(JASSCPP::rect r,JASSCPP::player whichPlayer)
{
    JASSCPP::group g = CreateGroup();
    bj_groupEnumOwningPlayer = whichPlayer;
    GroupEnumUnitsInRect(g, r, filterGetUnitsInRectOfPlayer);
    return g;
}
JASSCPP::group GetUnitsInRangeOfLocMatching(JASSCPP::real radius,JASSCPP::location whichLocation,JASSCPP::boolexpr filter)
{
    JASSCPP::group g = CreateGroup();
    GroupEnumUnitsInRangeOfLoc(g, whichLocation, radius, filter);
    DestroyBoolExpr(filter);
    return g;
}
JASSCPP::group GetUnitsInRangeOfLocAll(JASSCPP::real radius,JASSCPP::location whichLocation)
{
    return GetUnitsInRangeOfLocMatching(radius, whichLocation, null);
}
JASSCPP::boolean GetUnitsOfTypeIdAllFilter()
{
    return GetUnitTypeId(GetFilterUnit()) == bj_groupEnumTypeId;
}
JASSCPP::group GetUnitsOfTypeIdAll(JASSCPP::integer unitid)
{
    JASSCPP::group result = CreateGroup();
    JASSCPP::group g = CreateGroup();
    JASSCPP::integer index;
    index = 0;
    while (true)
    {
        bj_groupEnumTypeId = unitid;
        GroupClear(g);
        GroupEnumUnitsOfPlayer(g, Player(index), filterGetUnitsOfTypeIdAll);
        GroupAddGroup(g, result);
        index = index + 1;
        if (index == bj_MAX_PLAYER_SLOTS) break;
    }
    DestroyGroup(g);
    return result;
}
JASSCPP::group GetUnitsOfPlayerMatching(JASSCPP::player whichPlayer,JASSCPP::boolexpr filter)
{
    JASSCPP::group g = CreateGroup();
    GroupEnumUnitsOfPlayer(g, whichPlayer, filter);
    DestroyBoolExpr(filter);
    return g;
}
JASSCPP::group GetUnitsOfPlayerAll(JASSCPP::player whichPlayer)
{
    return GetUnitsOfPlayerMatching(whichPlayer, null);
}
JASSCPP::boolean GetUnitsOfPlayerAndTypeIdFilter()
{
    return GetUnitTypeId(GetFilterUnit()) == bj_groupEnumTypeId;
}
JASSCPP::group GetUnitsOfPlayerAndTypeId(JASSCPP::player whichPlayer,JASSCPP::integer unitid)
{
    JASSCPP::group g = CreateGroup();
    bj_groupEnumTypeId = unitid;
    GroupEnumUnitsOfPlayer(g, whichPlayer, filterGetUnitsOfPlayerAndTypeId);
    return g;
}
JASSCPP::group GetUnitsSelectedAll(JASSCPP::player whichPlayer)
{
    JASSCPP::group g = CreateGroup();
    SyncSelections();
    GroupEnumUnitsSelected(g, whichPlayer, null);
    return g;
}
JASSCPP::force GetForceOfPlayer(JASSCPP::player whichPlayer)
{
    JASSCPP::force f = CreateForce();
    ForceAddPlayer(f, whichPlayer);
    return f;
}
JASSCPP::force GetPlayersAll()
{
    return bj_FORCE_ALL_PLAYERS;
}
JASSCPP::force GetPlayersByMapControl(JASSCPP::mapcontrol whichControl)
{
    JASSCPP::force f = CreateForce();
    JASSCPP::integer playerIndex;
    JASSCPP::player indexPlayer;
    playerIndex = 0;
    while (true)
    {
        indexPlayer = Player(playerIndex);
        if (GetPlayerController(indexPlayer) == whichControl)
        {
            ForceAddPlayer(f, indexPlayer);
        }
        playerIndex = playerIndex + 1;
        if (playerIndex == bj_MAX_PLAYER_SLOTS) break;
    }
    return f;
}
JASSCPP::force GetPlayersAllies(JASSCPP::player whichPlayer)
{
    JASSCPP::force f = CreateForce();
    ForceEnumAllies(f, whichPlayer, null);
    return f;
}
JASSCPP::force GetPlayersEnemies(JASSCPP::player whichPlayer)
{
    JASSCPP::force f = CreateForce();
    ForceEnumEnemies(f, whichPlayer, null);
    return f;
}
JASSCPP::force GetPlayersMatching(JASSCPP::boolexpr filter)
{
    JASSCPP::force f = CreateForce();
    ForceEnumPlayers(f, filter);
    DestroyBoolExpr(filter);
    return f;
}
void CountUnitsInGroupEnum()
{
    bj_groupCountUnits = bj_groupCountUnits + 1;
}
JASSCPP::integer CountUnitsInGroup(JASSCPP::group g)
{
    JASSCPP::boolean wantDestroy = bj_wantDestroyGroup;
    bj_wantDestroyGroup = false;
    bj_groupCountUnits = 0;
    ForGroup(g, function CountUnitsInGroupEnum);
    // If the user wants the group destroyed, do so now.
    if (wantDestroy)
    {
        DestroyGroup(g);
    }
    return bj_groupCountUnits;
}
void CountPlayersInForceEnum()
{
    bj_forceCountPlayers = bj_forceCountPlayers + 1;
}
JASSCPP::integer CountPlayersInForceBJ(JASSCPP::force f)
{
    bj_forceCountPlayers = 0;
    ForForce(f, function CountPlayersInForceEnum);
    return bj_forceCountPlayers;
}
void GetRandomSubGroupEnum()
{
    if (bj_randomSubGroupWant > 0)
    {
        if ((bj_randomSubGroupWant >= bj_randomSubGroupTotal) || (GetRandomReal(0,1) < bj_randomSubGroupChance))
        {
            // We either need every remaining unit, or the unit passed its chance check.
            GroupAddUnit(bj_randomSubGroupGroup, GetEnumUnit());
            bj_randomSubGroupWant = bj_randomSubGroupWant - 1;
        }
    }
    bj_randomSubGroupTotal = bj_randomSubGroupTotal - 1;
}
JASSCPP::group GetRandomSubGroup(JASSCPP::integer count,JASSCPP::group sourceGroup)
{
    JASSCPP::group g = CreateGroup();
    bj_randomSubGroupGroup = g;
    bj_randomSubGroupWant  = count;
    bj_randomSubGroupTotal = CountUnitsInGroup(sourceGroup);
    if (bj_randomSubGroupWant <= 0 || bj_randomSubGroupTotal <= 0)
    {
        return g;
    }
    bj_randomSubGroupChance = I2R(bj_randomSubGroupWant) / I2R(bj_randomSubGroupTotal);
    ForGroup(sourceGroup, function GetRandomSubGroupEnum);
    return g;
}
JASSCPP::boolean LivingPlayerUnitsOfTypeIdFilter()
{
    JASSCPP::unit filterUnit = GetFilterUnit();
    return IsUnitAliveBJ(filterUnit) && GetUnitTypeId(filterUnit) == bj_livingPlayerUnitsTypeId;
}
JASSCPP::integer CountLivingPlayerUnitsOfTypeId(JASSCPP::integer unitId,JASSCPP::player whichPlayer)
{
    JASSCPP::group g;
    JASSCPP::integer matchedCount;
    g = CreateGroup();
    bj_livingPlayerUnitsTypeId = unitId;
    GroupEnumUnitsOfPlayer(g, whichPlayer, filterLivingPlayerUnitsOfTypeId);
    matchedCount = CountUnitsInGroup(g);
    DestroyGroup(g);
    return matchedCount;
}
void ResetUnitAnimation(JASSCPP::unit whichUnit)
{
    SetUnitAnimation(whichUnit, "stand");
}
void SetUnitTimeScalePercent(JASSCPP::unit whichUnit,JASSCPP::real percentScale)
{
    SetUnitTimeScale(whichUnit, percentScale * 0.01);
}
void SetUnitScalePercent(JASSCPP::unit whichUnit,JASSCPP::real percentScaleX,JASSCPP::real percentScaleY,JASSCPP::real percentScaleZ)
{
    SetUnitScale(whichUnit, percentScaleX * 0.01, percentScaleY * 0.01, percentScaleZ * 0.01);
}
void SetUnitVertexColorBJ(JASSCPP::unit whichUnit,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency)
{
    SetUnitVertexColor(whichUnit, PercentTo255(red), PercentTo255(green), PercentTo255(blue), PercentTo255(100.0-transparency));
}
void UnitAddIndicatorBJ(JASSCPP::unit whichUnit,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency)
{
    AddIndicator(whichUnit, PercentTo255(red), PercentTo255(green), PercentTo255(blue), PercentTo255(100.0-transparency));
}
void DestructableAddIndicatorBJ(JASSCPP::destructable whichDestructable,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency)
{
    AddIndicator(whichDestructable, PercentTo255(red), PercentTo255(green), PercentTo255(blue), PercentTo255(100.0-transparency));
}
void ItemAddIndicatorBJ(JASSCPP::item whichItem,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency)
{
    AddIndicator(whichItem, PercentTo255(red), PercentTo255(green), PercentTo255(blue), PercentTo255(100.0-transparency));
}
void SetUnitFacingToFaceLocTimed(JASSCPP::unit whichUnit,JASSCPP::location target,JASSCPP::real duration)
{
    JASSCPP::location unitLoc = GetUnitLoc(whichUnit);
    SetUnitFacingTimed(whichUnit, AngleBetweenPoints(unitLoc, target), duration);
    RemoveLocation(unitLoc);
}
void SetUnitFacingToFaceUnitTimed(JASSCPP::unit whichUnit,JASSCPP::unit target,JASSCPP::real duration)
{
    JASSCPP::location unitLoc = GetUnitLoc(target);
    SetUnitFacingToFaceLocTimed(whichUnit, unitLoc, duration);
    RemoveLocation(unitLoc);
}
void QueueUnitAnimationBJ(JASSCPP::unit whichUnit,JASSCPP::string whichAnimation)
{
    QueueUnitAnimation(whichUnit, whichAnimation);
}
void SetDestructableAnimationBJ(JASSCPP::destructable d,JASSCPP::string whichAnimation)
{
    SetDestructableAnimation(d, whichAnimation);
}
void QueueDestructableAnimationBJ(JASSCPP::destructable d,JASSCPP::string whichAnimation)
{
    QueueDestructableAnimation(d, whichAnimation);
}
void SetDestAnimationSpeedPercent(JASSCPP::destructable d,JASSCPP::real percentScale)
{
    SetDestructableAnimationSpeed(d, percentScale * 0.01);
}
void DialogDisplayBJ(JASSCPP::boolean flag,JASSCPP::dialog whichDialog,JASSCPP::player whichPlayer)
{
    DialogDisplay(whichPlayer, whichDialog, flag);
}
void DialogSetMessageBJ(JASSCPP::dialog whichDialog,JASSCPP::string message)
{
    DialogSetMessage(whichDialog, message);
}
JASSCPP::button DialogAddButtonBJ(JASSCPP::dialog whichDialog,JASSCPP::string buttonText)
{
    bj_lastCreatedButton = DialogAddButton(whichDialog, buttonText,0);
    return bj_lastCreatedButton;
}
JASSCPP::button DialogAddButtonWithHotkeyBJ(JASSCPP::dialog whichDialog,JASSCPP::string buttonText,JASSCPP::integer hotkey)
{
    bj_lastCreatedButton = DialogAddButton(whichDialog, buttonText,hotkey);
    return bj_lastCreatedButton;
}
void DialogClearBJ(JASSCPP::dialog whichDialog)
{
    DialogClear(whichDialog);
}
JASSCPP::button GetLastCreatedButtonBJ()
{
    return bj_lastCreatedButton;
}
JASSCPP::button GetClickedButtonBJ()
{
    return GetClickedButton();
}
JASSCPP::dialog GetClickedDialogBJ()
{
    return GetClickedDialog();
}
void SetPlayerAllianceBJ(JASSCPP::player sourcePlayer,JASSCPP::alliancetype whichAllianceSetting,JASSCPP::boolean value,JASSCPP::player otherPlayer)
{
    if (sourcePlayer == otherPlayer)
    {
        return;
    }
    SetPlayerAlliance(sourcePlayer, otherPlayer, whichAllianceSetting, value);
}
void SetPlayerAllianceStateAllyBJ(JASSCPP::player sourcePlayer,JASSCPP::player otherPlayer,JASSCPP::boolean flag)
{
    SetPlayerAlliance(sourcePlayer, otherPlayer, ALLIANCE_PASSIVE,       flag);
    SetPlayerAlliance(sourcePlayer, otherPlayer, ALLIANCE_HELP_REQUEST,  flag);
    SetPlayerAlliance(sourcePlayer, otherPlayer, ALLIANCE_HELP_RESPONSE, flag);
    SetPlayerAlliance(sourcePlayer, otherPlayer, ALLIANCE_SHARED_XP,     flag);
    SetPlayerAlliance(sourcePlayer, otherPlayer, ALLIANCE_SHARED_SPELLS, flag);
}
void SetPlayerAllianceStateVisionBJ(JASSCPP::player sourcePlayer,JASSCPP::player otherPlayer,JASSCPP::boolean flag)
{
    SetPlayerAlliance(sourcePlayer, otherPlayer, ALLIANCE_SHARED_VISION, flag);
}
void SetPlayerAllianceStateControlBJ(JASSCPP::player sourcePlayer,JASSCPP::player otherPlayer,JASSCPP::boolean flag)
{
    SetPlayerAlliance(sourcePlayer, otherPlayer, ALLIANCE_SHARED_CONTROL, flag);
}
void SetPlayerAllianceStateFullControlBJ(JASSCPP::player sourcePlayer,JASSCPP::player otherPlayer,JASSCPP::boolean flag)
{
    SetPlayerAlliance(sourcePlayer, otherPlayer, ALLIANCE_SHARED_ADVANCED_CONTROL, flag);
}
void SetPlayerAllianceStateBJ(JASSCPP::player sourcePlayer,JASSCPP::player otherPlayer,JASSCPP::integer allianceState)
{
    if (sourcePlayer == otherPlayer)
    {
        return;
    }
    if (allianceState == bj_ALLIANCE_UNALLIED)
    {
        SetPlayerAllianceStateAllyBJ(        sourcePlayer, otherPlayer, false );
        SetPlayerAllianceStateVisionBJ(      sourcePlayer, otherPlayer, false );
        SetPlayerAllianceStateControlBJ(     sourcePlayer, otherPlayer, false );
        SetPlayerAllianceStateFullControlBJ( sourcePlayer, otherPlayer, false );
    }
     else if (allianceState == bj_ALLIANCE_UNALLIED_VISION)
    {
        SetPlayerAllianceStateAllyBJ(        sourcePlayer, otherPlayer, false );
        SetPlayerAllianceStateVisionBJ(      sourcePlayer, otherPlayer, true  );
        SetPlayerAllianceStateControlBJ(     sourcePlayer, otherPlayer, false );
        SetPlayerAllianceStateFullControlBJ( sourcePlayer, otherPlayer, false );
    }
     else if (allianceState == bj_ALLIANCE_ALLIED)
    {
        SetPlayerAllianceStateAllyBJ(        sourcePlayer, otherPlayer, true  );
        SetPlayerAllianceStateVisionBJ(      sourcePlayer, otherPlayer, false );
        SetPlayerAllianceStateControlBJ(     sourcePlayer, otherPlayer, false );
        SetPlayerAllianceStateFullControlBJ( sourcePlayer, otherPlayer, false );
    }
     else if (allianceState == bj_ALLIANCE_ALLIED_VISION)
    {
        SetPlayerAllianceStateAllyBJ(        sourcePlayer, otherPlayer, true  );
        SetPlayerAllianceStateVisionBJ(      sourcePlayer, otherPlayer, true  );
        SetPlayerAllianceStateControlBJ(     sourcePlayer, otherPlayer, false );
        SetPlayerAllianceStateFullControlBJ( sourcePlayer, otherPlayer, false );
    }
     else if (allianceState == bj_ALLIANCE_ALLIED_UNITS)
    {
        SetPlayerAllianceStateAllyBJ(        sourcePlayer, otherPlayer, true  );
        SetPlayerAllianceStateVisionBJ(      sourcePlayer, otherPlayer, true  );
        SetPlayerAllianceStateControlBJ(     sourcePlayer, otherPlayer, true  );
        SetPlayerAllianceStateFullControlBJ( sourcePlayer, otherPlayer, false );
    }
     else if (allianceState == bj_ALLIANCE_ALLIED_ADVUNITS)
    {
        SetPlayerAllianceStateAllyBJ(        sourcePlayer, otherPlayer, true  );
        SetPlayerAllianceStateVisionBJ(      sourcePlayer, otherPlayer, true  );
        SetPlayerAllianceStateControlBJ(     sourcePlayer, otherPlayer, true  );
        SetPlayerAllianceStateFullControlBJ( sourcePlayer, otherPlayer, true  );
    }
     else if (allianceState == bj_ALLIANCE_NEUTRAL)
    {
        SetPlayerAllianceStateAllyBJ(        sourcePlayer, otherPlayer, false );
        SetPlayerAllianceStateVisionBJ(      sourcePlayer, otherPlayer, false );
        SetPlayerAllianceStateControlBJ(     sourcePlayer, otherPlayer, false );
        SetPlayerAllianceStateFullControlBJ( sourcePlayer, otherPlayer, false );
        SetPlayerAlliance( sourcePlayer, otherPlayer, ALLIANCE_PASSIVE, true );
    }
     else if (allianceState == bj_ALLIANCE_NEUTRAL_VISION)
    {
        SetPlayerAllianceStateAllyBJ(        sourcePlayer, otherPlayer, false );
        SetPlayerAllianceStateVisionBJ(      sourcePlayer, otherPlayer, true  );
        SetPlayerAllianceStateControlBJ(     sourcePlayer, otherPlayer, false );
        SetPlayerAllianceStateFullControlBJ( sourcePlayer, otherPlayer, false );
        SetPlayerAlliance( sourcePlayer, otherPlayer, ALLIANCE_PASSIVE, true );
    }
    else
    {
        // Unrecognized alliance state - ignore the request.
    }
}
void SetForceAllianceStateBJ(JASSCPP::force sourceForce,JASSCPP::force targetForce,JASSCPP::integer allianceState)
{
    JASSCPP::integer sourceIndex;
    JASSCPP::integer targetIndex;
    sourceIndex = 0;
    while (true)
    {
        targetIndex = 0;
        while (true)
        {
            SetPlayerAllianceStateBJ(Player(sourceIndex), Player(targetIndex), allianceState);
            targetIndex = targetIndex + 1;
            if (targetIndex == bj_MAX_PLAYER_SLOTS) break;
        }
        sourceIndex = sourceIndex + 1;
        if (sourceIndex == bj_MAX_PLAYER_SLOTS) break;
    }
}
JASSCPP::boolean PlayersAreCoAllied(JASSCPP::player playerA,JASSCPP::player playerB)
{
    if (playerA == playerB)
    {
        return true;
    }
    // Co-allies are both allied with each other.
    if (GetPlayerAlliance(playerA, playerB, ALLIANCE_PASSIVE))
    {
        if (GetPlayerAlliance(playerB, playerA, ALLIANCE_PASSIVE))
        {
            return true;
        }
    }
    return false;
}
void ShareEverythingWithTeamAI(JASSCPP::player whichPlayer)
{
    JASSCPP::integer playerIndex;
    JASSCPP::player indexPlayer;
    playerIndex = 0;
    while (true)
    {
        indexPlayer = Player(playerIndex);
        if (PlayersAreCoAllied(whichPlayer, indexPlayer) && whichPlayer != indexPlayer)
        {
            if (GetPlayerController(indexPlayer) == MAP_CONTROL_COMPUTER)
            {
                SetPlayerAlliance(whichPlayer, indexPlayer, ALLIANCE_SHARED_VISION, true);
                SetPlayerAlliance(whichPlayer, indexPlayer, ALLIANCE_SHARED_CONTROL, true);
                SetPlayerAlliance(whichPlayer, indexPlayer, ALLIANCE_SHARED_ADVANCED_CONTROL, true);
            }
        }
        playerIndex = playerIndex + 1;
        if (playerIndex == bj_MAX_PLAYERS) break;
    }
}
void ShareEverythingWithTeam(JASSCPP::player whichPlayer)
{
    JASSCPP::integer playerIndex;
    JASSCPP::player indexPlayer;
    playerIndex = 0;
    while (true)
    {
        indexPlayer = Player(playerIndex);
        if (PlayersAreCoAllied(whichPlayer, indexPlayer) && whichPlayer != indexPlayer)
        {
            SetPlayerAlliance(whichPlayer, indexPlayer, ALLIANCE_SHARED_VISION, true);
            SetPlayerAlliance(whichPlayer, indexPlayer, ALLIANCE_SHARED_CONTROL, true);
            SetPlayerAlliance(indexPlayer, whichPlayer, ALLIANCE_SHARED_CONTROL, true);
            SetPlayerAlliance(whichPlayer, indexPlayer, ALLIANCE_SHARED_ADVANCED_CONTROL, true);
        }
        playerIndex = playerIndex + 1;
        if (playerIndex == bj_MAX_PLAYERS) break;
    }
}
void ConfigureNeutralVictim()
{
    JASSCPP::integer index;
    JASSCPP::player indexPlayer;
    JASSCPP::player neutralVictim = Player(bj_PLAYER_NEUTRAL_VICTIM);
    index = 0;
    while (true)
    {
        indexPlayer = Player(index);
        SetPlayerAlliance(neutralVictim, indexPlayer, ALLIANCE_PASSIVE, true);
        SetPlayerAlliance(indexPlayer, neutralVictim, ALLIANCE_PASSIVE, false);
        index = index + 1;
        if (index == bj_MAX_PLAYERS) break;
    }
    // Neutral Victim and Neutral Aggressive should not fight each other.
    indexPlayer = Player(PLAYER_NEUTRAL_AGGRESSIVE);
    SetPlayerAlliance(neutralVictim, indexPlayer, ALLIANCE_PASSIVE, true);
    SetPlayerAlliance(indexPlayer, neutralVictim, ALLIANCE_PASSIVE, true);
    // Neutral Victim does not give bounties.
    SetPlayerState(neutralVictim, PLAYER_STATE_GIVES_BOUNTY, 0);
}
void MakeUnitsPassiveForPlayerEnum()
{
    SetUnitOwner(GetEnumUnit(), Player(bj_PLAYER_NEUTRAL_VICTIM), false);
}
void MakeUnitsPassiveForPlayer(JASSCPP::player whichPlayer)
{
    JASSCPP::group playerUnits = CreateGroup();
    CachePlayerHeroData(whichPlayer);
    GroupEnumUnitsOfPlayer(playerUnits, whichPlayer, null);
    ForGroup(playerUnits, function MakeUnitsPassiveForPlayerEnum);
    DestroyGroup(playerUnits);
}
void MakeUnitsPassiveForTeam(JASSCPP::player whichPlayer)
{
    JASSCPP::integer playerIndex;
    JASSCPP::player indexPlayer;
    playerIndex = 0;
    while (true)
    {
        indexPlayer = Player(playerIndex);
        if (PlayersAreCoAllied(whichPlayer, indexPlayer))
        {
            MakeUnitsPassiveForPlayer(indexPlayer);
        }
        playerIndex = playerIndex + 1;
        if (playerIndex == bj_MAX_PLAYERS) break;
    }
}
JASSCPP::boolean AllowVictoryDefeat(JASSCPP::playergameresult gameResult)
{
    if (gameResult == PLAYER_GAME_RESULT_VICTORY)
    {
        return !IsNoVictoryCheat();
    }
    if (gameResult == PLAYER_GAME_RESULT_DEFEAT)
    {
        return !IsNoDefeatCheat();
    }
    if (gameResult == PLAYER_GAME_RESULT_NEUTRAL)
    {
        return (!IsNoVictoryCheat()) && (!IsNoDefeatCheat());
    }
    return true;
}
void EndGameBJ()
{
    EndGame( true );
}
void MeleeVictoryDialogBJ(JASSCPP::player whichPlayer,JASSCPP::boolean leftGame)
{
    JASSCPP::trigger t = CreateTrigger();
    JASSCPP::dialog d = DialogCreate();
    JASSCPP::string formatString;
    if (leftGame)
    {
        formatString = GetLocalizedString( "PLAYER_LEFT_GAME" );
    }
    else
    {
        formatString = GetLocalizedString( "PLAYER_VICTORIOUS" );
    }
    DisplayTimedTextFromPlayer(whichPlayer, 0, 0, 60, formatString);
    DialogSetMessage( d, GetLocalizedString( "GAMEOVER_VICTORY_MSG" ) );
    DialogAddButton( d, GetLocalizedString( "GAMEOVER_CONTINUE_GAME" ), GetLocalizedHotkey("GAMEOVER_CONTINUE_GAME") );
    t = CreateTrigger();
    TriggerRegisterDialogButtonEvent( t, DialogAddQuitButton( d, true, GetLocalizedString( "GAMEOVER_QUIT_GAME" ), GetLocalizedHotkey("GAMEOVER_QUIT_GAME") ) );
    DialogDisplay( whichPlayer, d, true );
    StartSoundForPlayerBJ( whichPlayer, bj_victoryDialogSound );
}
void MeleeDefeatDialogBJ(JASSCPP::player whichPlayer,JASSCPP::boolean leftGame)
{
    JASSCPP::trigger t = CreateTrigger();
    JASSCPP::dialog d = DialogCreate();
    JASSCPP::string formatString;
    if (leftGame)
    {
        formatString = GetLocalizedString( "PLAYER_LEFT_GAME" );
    }
    else
    {
        formatString = GetLocalizedString( "PLAYER_DEFEATED" );
    }
    DisplayTimedTextFromPlayer(whichPlayer, 0, 0, 60, formatString);
    DialogSetMessage( d, GetLocalizedString( "GAMEOVER_DEFEAT_MSG" ) );
    // Only show the continue button if the game is not over and observers on death are allowed
    if (!bj_meleeGameOver && IsMapFlagSet(MAP_OBSERVERS_ON_DEATH))
    {
        DialogAddButton( d, GetLocalizedString( "GAMEOVER_CONTINUE_OBSERVING" ), GetLocalizedHotkey("GAMEOVER_CONTINUE_OBSERVING") );
    }
    t = CreateTrigger();
    TriggerRegisterDialogButtonEvent( t, DialogAddQuitButton( d, true, GetLocalizedString( "GAMEOVER_QUIT_GAME" ), GetLocalizedHotkey("GAMEOVER_QUIT_GAME") ) );
    DialogDisplay( whichPlayer, d, true );
    StartSoundForPlayerBJ( whichPlayer, bj_defeatDialogSound );
}
void GameOverDialogBJ(JASSCPP::player whichPlayer,JASSCPP::boolean leftGame)
{
    JASSCPP::trigger t = CreateTrigger();
    JASSCPP::dialog d = DialogCreate();
    JASSCPP::string s;
    DisplayTimedTextFromPlayer(whichPlayer, 0, 0, 60, GetLocalizedString( "PLAYER_LEFT_GAME" ));
    if (GetIntegerGameState(GAME_STATE_DISCONNECTED) != 0)
    {
        s = GetLocalizedString( "GAMEOVER_DISCONNECTED" );
    }
    else
    {
        s = GetLocalizedString( "GAMEOVER_GAME_OVER" );
    }
    DialogSetMessage( d, s );
    t = CreateTrigger();
    TriggerRegisterDialogButtonEvent( t, DialogAddQuitButton( d, true, GetLocalizedString( "GAMEOVER_OK" ), GetLocalizedHotkey("GAMEOVER_OK") ) );
    DialogDisplay( whichPlayer, d, true );
    StartSoundForPlayerBJ( whichPlayer, bj_defeatDialogSound );
}
void RemovePlayerPreserveUnitsBJ(JASSCPP::player whichPlayer,JASSCPP::playergameresult gameResult,JASSCPP::boolean leftGame)
{
    if (AllowVictoryDefeat(gameResult))
    {
        RemovePlayer(whichPlayer, gameResult);
        if ( gameResult == PLAYER_GAME_RESULT_VICTORY )
        {
            MeleeVictoryDialogBJ( whichPlayer, leftGame );
            return;
        }
         else if ( gameResult == PLAYER_GAME_RESULT_DEFEAT )
        {
            MeleeDefeatDialogBJ( whichPlayer, leftGame );
        }
        else
        {
            GameOverDialogBJ( whichPlayer, leftGame );
        }
    }
}
void CustomVictoryOkBJ()
{
    if (bj_isSinglePlayer)
    {
        PauseGame( false );
        // Bump the difficulty back up to the default.
        SetGameDifficulty(GetDefaultDifficulty());
    }
    if (bj_changeLevelMapName == null)
    {
        EndGame( bj_changeLevelShowScores );
    }
    else
    {
        ChangeLevel( bj_changeLevelMapName, bj_changeLevelShowScores );
    }
}
void CustomVictoryQuitBJ()
{
    if (bj_isSinglePlayer)
    {
        PauseGame( false );
        // Bump the difficulty back up to the default.
        SetGameDifficulty(GetDefaultDifficulty());
    }
    EndGame( bj_changeLevelShowScores );
}
void CustomVictoryDialogBJ(JASSCPP::player whichPlayer)
{
    JASSCPP::trigger t = CreateTrigger();
    JASSCPP::dialog d = DialogCreate();
    DialogSetMessage( d, GetLocalizedString( "GAMEOVER_VICTORY_MSG" ) );
    t = CreateTrigger();
    TriggerRegisterDialogButtonEvent( t, DialogAddButton( d, GetLocalizedString( "GAMEOVER_CONTINUE" ), GetLocalizedHotkey("GAMEOVER_CONTINUE") ) );
    TriggerAddAction( t, function CustomVictoryOkBJ );
    t = CreateTrigger();
    TriggerRegisterDialogButtonEvent( t, DialogAddButton( d, GetLocalizedString( "GAMEOVER_QUIT_MISSION" ), GetLocalizedHotkey("GAMEOVER_QUIT_MISSION") ) );
    TriggerAddAction( t, function CustomVictoryQuitBJ );
    if (GetLocalPlayer() == whichPlayer)
    {
        EnableUserControl( true );
        if (bj_isSinglePlayer)
        {
            PauseGame( true );
        }
    }
    EnableUserUI(false);
    DialogDisplay( whichPlayer, d, true );
    VolumeGroupSetVolumeForPlayerBJ( whichPlayer, SOUND_VOLUMEGROUP_UI, 1.0 );
    StartSoundForPlayerBJ( whichPlayer, bj_victoryDialogSound );
}
void CustomVictorySkipBJ(JASSCPP::player whichPlayer)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        if (bj_isSinglePlayer)
        {
            // Bump the difficulty back up to the default.
            SetGameDifficulty(GetDefaultDifficulty());
        }
        if (bj_changeLevelMapName == null)
        {
            EndGame( bj_changeLevelShowScores );
        }
        else
        {
            ChangeLevel( bj_changeLevelMapName, bj_changeLevelShowScores );
        }
    }
}
void CustomVictoryBJ(JASSCPP::player whichPlayer,JASSCPP::boolean showDialog,JASSCPP::boolean showScores)
{
    if (AllowVictoryDefeat( PLAYER_GAME_RESULT_VICTORY ))
    {
        RemovePlayer( whichPlayer, PLAYER_GAME_RESULT_VICTORY );
        if (!bj_isSinglePlayer)
        {
            DisplayTimedTextFromPlayer(whichPlayer, 0, 0, 60, GetLocalizedString( "PLAYER_VICTORIOUS" ) );
        }
        // UI only needs to be displayed to users.
        if (GetPlayerController(whichPlayer) == MAP_CONTROL_USER)
        {
            bj_changeLevelShowScores = showScores;
            if (showDialog)
            {
                CustomVictoryDialogBJ( whichPlayer );
            }
            else
            {
                CustomVictorySkipBJ( whichPlayer );
            }
        }
    }
}
void CustomDefeatRestartBJ()
{
    PauseGame( false );
    RestartGame( true );
}
void CustomDefeatReduceDifficultyBJ()
{
    JASSCPP::gamedifficulty diff = GetGameDifficulty();
    PauseGame( false );
    // Knock the difficulty down, if possible.
    if (diff == MAP_DIFFICULTY_EASY)
    {
        // Sorry, but it doesn't get any easier than this.
    }
     else if (diff == MAP_DIFFICULTY_NORMAL)
    {
        SetGameDifficulty(MAP_DIFFICULTY_EASY);
    }
     else if (diff == MAP_DIFFICULTY_HARD)
    {
        SetGameDifficulty(MAP_DIFFICULTY_NORMAL);
    }
    else
    {
        // Unrecognized difficulty
    }
    RestartGame( true );
}
void CustomDefeatLoadBJ()
{
    PauseGame( false );
    DisplayLoadDialog();
}
void CustomDefeatQuitBJ()
{
    if (bj_isSinglePlayer)
    {
        PauseGame( false );
    }
    // Bump the difficulty back up to the default.
    SetGameDifficulty(GetDefaultDifficulty());
    EndGame( true );
}
void CustomDefeatDialogBJ(JASSCPP::player whichPlayer,JASSCPP::string message)
{
    JASSCPP::trigger t = CreateTrigger();
    JASSCPP::dialog d = DialogCreate();
    DialogSetMessage( d, message );
    if (bj_isSinglePlayer)
    {
        t = CreateTrigger();
        TriggerRegisterDialogButtonEvent( t, DialogAddButton( d, GetLocalizedString( "GAMEOVER_RESTART" ), GetLocalizedHotkey("GAMEOVER_RESTART") ) );
        TriggerAddAction( t, function CustomDefeatRestartBJ );
        if (GetGameDifficulty() != MAP_DIFFICULTY_EASY)
        {
            t = CreateTrigger();
            TriggerRegisterDialogButtonEvent( t, DialogAddButton( d, GetLocalizedString( "GAMEOVER_REDUCE_DIFFICULTY" ), GetLocalizedHotkey("GAMEOVER_REDUCE_DIFFICULTY") ) );
            TriggerAddAction( t, function CustomDefeatReduceDifficultyBJ );
        }
        t = CreateTrigger();
        TriggerRegisterDialogButtonEvent( t, DialogAddButton( d, GetLocalizedString( "GAMEOVER_LOAD" ), GetLocalizedHotkey("GAMEOVER_LOAD") ) );
        TriggerAddAction( t, function CustomDefeatLoadBJ );
    }
    t = CreateTrigger();
    TriggerRegisterDialogButtonEvent( t, DialogAddButton( d, GetLocalizedString( "GAMEOVER_QUIT_MISSION" ), GetLocalizedHotkey("GAMEOVER_QUIT_MISSION") ) );
    TriggerAddAction( t, function CustomDefeatQuitBJ );
    if (GetLocalPlayer() == whichPlayer)
    {
        EnableUserControl( true );
        if (bj_isSinglePlayer)
        {
            PauseGame( true );
        }
    }
    EnableUserUI(false);
    DialogDisplay( whichPlayer, d, true );
    VolumeGroupSetVolumeForPlayerBJ( whichPlayer, SOUND_VOLUMEGROUP_UI, 1.0 );
    StartSoundForPlayerBJ( whichPlayer, bj_defeatDialogSound );
}
void CustomDefeatBJ(JASSCPP::player whichPlayer,JASSCPP::string message)
{
    if (AllowVictoryDefeat( PLAYER_GAME_RESULT_DEFEAT ))
    {
        RemovePlayer( whichPlayer, PLAYER_GAME_RESULT_DEFEAT );
        if (!bj_isSinglePlayer)
        {
            DisplayTimedTextFromPlayer(whichPlayer, 0, 0, 60, GetLocalizedString( "PLAYER_DEFEATED" ) );
        }
        // UI only needs to be displayed to users.
        if (GetPlayerController(whichPlayer) == MAP_CONTROL_USER)
        {
            CustomDefeatDialogBJ( whichPlayer, message );
        }
    }
}
void SetNextLevelBJ(JASSCPP::string nextLevel)
{
    if (nextLevel == "")
    {
        bj_changeLevelMapName = null;
    }
    else
    {
        bj_changeLevelMapName = nextLevel;
    }
}
void SetPlayerOnScoreScreenBJ(JASSCPP::boolean flag,JASSCPP::player whichPlayer)
{
    SetPlayerOnScoreScreen(whichPlayer, flag);
}
JASSCPP::quest CreateQuestBJ(JASSCPP::integer questType,JASSCPP::string title,JASSCPP::string description,JASSCPP::string iconPath)
{
    JASSCPP::boolean required = (questType == bj_QUESTTYPE_REQ_DISCOVERED) or (questType == bj_QUESTTYPE_REQ_UNDISCOVERED);
    JASSCPP::boolean discovered = (questType == bj_QUESTTYPE_REQ_DISCOVERED) or (questType == bj_QUESTTYPE_OPT_DISCOVERED);
    bj_lastCreatedQuest = CreateQuest();
    QuestSetTitle(bj_lastCreatedQuest, title);
    QuestSetDescription(bj_lastCreatedQuest, description);
    QuestSetIconPath(bj_lastCreatedQuest, iconPath);
    QuestSetRequired(bj_lastCreatedQuest, required);
    QuestSetDiscovered(bj_lastCreatedQuest, discovered);
    QuestSetCompleted(bj_lastCreatedQuest, false);
    return bj_lastCreatedQuest;
}
void DestroyQuestBJ(JASSCPP::quest whichQuest)
{
    DestroyQuest(whichQuest);
}
void QuestSetEnabledBJ(JASSCPP::boolean enabled,JASSCPP::quest whichQuest)
{
    QuestSetEnabled(whichQuest, enabled);
}
void QuestSetTitleBJ(JASSCPP::quest whichQuest,JASSCPP::string title)
{
    QuestSetTitle(whichQuest, title);
}
void QuestSetDescriptionBJ(JASSCPP::quest whichQuest,JASSCPP::string description)
{
    QuestSetDescription(whichQuest, description);
}
void QuestSetCompletedBJ(JASSCPP::quest whichQuest,JASSCPP::boolean completed)
{
    QuestSetCompleted(whichQuest, completed);
}
void QuestSetFailedBJ(JASSCPP::quest whichQuest,JASSCPP::boolean failed)
{
    QuestSetFailed(whichQuest, failed);
}
void QuestSetDiscoveredBJ(JASSCPP::quest whichQuest,JASSCPP::boolean discovered)
{
    QuestSetDiscovered(whichQuest, discovered);
}
JASSCPP::quest GetLastCreatedQuestBJ()
{
    return bj_lastCreatedQuest;
}
JASSCPP::questitem CreateQuestItemBJ(JASSCPP::quest whichQuest,JASSCPP::string description)
{
    bj_lastCreatedQuestItem = QuestCreateItem(whichQuest);
    QuestItemSetDescription(bj_lastCreatedQuestItem, description);
    QuestItemSetCompleted(bj_lastCreatedQuestItem, false);
    return bj_lastCreatedQuestItem;
}
void QuestItemSetDescriptionBJ(JASSCPP::questitem whichQuestItem,JASSCPP::string description)
{
    QuestItemSetDescription(whichQuestItem, description);
}
void QuestItemSetCompletedBJ(JASSCPP::questitem whichQuestItem,JASSCPP::boolean completed)
{
    QuestItemSetCompleted(whichQuestItem, completed);
}
JASSCPP::questitem GetLastCreatedQuestItemBJ()
{
    return bj_lastCreatedQuestItem;
}
JASSCPP::defeatcondition CreateDefeatConditionBJ(JASSCPP::string description)
{
    bj_lastCreatedDefeatCondition = CreateDefeatCondition();
    DefeatConditionSetDescription(bj_lastCreatedDefeatCondition, description);
    return bj_lastCreatedDefeatCondition;
}
void DestroyDefeatConditionBJ(JASSCPP::defeatcondition whichCondition)
{
    DestroyDefeatCondition(whichCondition);
}
void DefeatConditionSetDescriptionBJ(JASSCPP::defeatcondition whichCondition,JASSCPP::string description)
{
    DefeatConditionSetDescription(whichCondition, description);
}
JASSCPP::defeatcondition GetLastCreatedDefeatConditionBJ()
{
    return bj_lastCreatedDefeatCondition;
}
void FlashQuestDialogButtonBJ()
{
    FlashQuestDialogButton();
}
void QuestMessageBJ(JASSCPP::force f,JASSCPP::integer messageType,JASSCPP::string message)
{
    if ((IsPlayerInForce(GetLocalPlayer(), f)))
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        if (messageType == bj_QUESTMESSAGE_DISCOVERED)
        {
            DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_TEXT_DELAY_QUEST, " ");
            DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_TEXT_DELAY_QUEST, message);
            StartSound(bj_questDiscoveredSound);
            FlashQuestDialogButton();
        }
         else if (messageType == bj_QUESTMESSAGE_UPDATED)
        {
            DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_TEXT_DELAY_QUESTUPDATE, " ");
            DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_TEXT_DELAY_QUESTUPDATE, message);
            StartSound(bj_questUpdatedSound);
            FlashQuestDialogButton();
        }
         else if (messageType == bj_QUESTMESSAGE_COMPLETED)
        {
            DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_TEXT_DELAY_QUESTDONE, " ");
            DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_TEXT_DELAY_QUESTDONE, message);
            StartSound(bj_questCompletedSound);
            FlashQuestDialogButton();
        }
         else if (messageType == bj_QUESTMESSAGE_FAILED)
        {
            DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_TEXT_DELAY_QUESTFAILED, " ");
            DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_TEXT_DELAY_QUESTFAILED, message);
            StartSound(bj_questFailedSound);
            FlashQuestDialogButton();
        }
         else if (messageType == bj_QUESTMESSAGE_REQUIREMENT)
        {
            DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_TEXT_DELAY_QUESTREQUIREMENT, message);
        }
         else if (messageType == bj_QUESTMESSAGE_MISSIONFAILED)
        {
            DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_TEXT_DELAY_MISSIONFAILED, " ");
            DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_TEXT_DELAY_MISSIONFAILED, message);
            StartSound(bj_questFailedSound);
        }
         else if (messageType == bj_QUESTMESSAGE_HINT)
        {
            DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_TEXT_DELAY_HINT, " ");
            DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_TEXT_DELAY_HINT, message);
            StartSound(bj_questHintSound);
        }
         else if (messageType == bj_QUESTMESSAGE_ALWAYSHINT)
        {
            DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_TEXT_DELAY_ALWAYSHINT, " ");
            DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_TEXT_DELAY_ALWAYSHINT, message);
            StartSound(bj_questHintSound);
        }
         else if (messageType == bj_QUESTMESSAGE_SECRET)
        {
            DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_TEXT_DELAY_SECRET, " ");
            DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_TEXT_DELAY_SECRET, message);
            StartSound(bj_questSecretSound);
        }
         else if (messageType == bj_QUESTMESSAGE_UNITACQUIRED)
        {
            DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_TEXT_DELAY_UNITACQUIRED, " ");
            DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_TEXT_DELAY_UNITACQUIRED, message);
            StartSound(bj_questHintSound);
        }
         else if (messageType == bj_QUESTMESSAGE_UNITAVAILABLE)
        {
            DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_TEXT_DELAY_UNITAVAILABLE, " ");
            DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_TEXT_DELAY_UNITAVAILABLE, message);
            StartSound(bj_questHintSound);
        }
         else if (messageType == bj_QUESTMESSAGE_ITEMACQUIRED)
        {
            DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_TEXT_DELAY_ITEMACQUIRED, " ");
            DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_TEXT_DELAY_ITEMACQUIRED, message);
            StartSound(bj_questItemAcquiredSound);
        }
         else if (messageType == bj_QUESTMESSAGE_WARNING)
        {
            DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_TEXT_DELAY_WARNING, " ");
            DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_TEXT_DELAY_WARNING, message);
            StartSound(bj_questWarningSound);
        }
        else
        {
            // Unrecognized message type - ignore the request.
        }
    }
}
JASSCPP::timer StartTimerBJ(JASSCPP::timer t,JASSCPP::boolean periodic,JASSCPP::real timeout)
{
    bj_lastStartedTimer = t;
    TimerStart(t, timeout, periodic, null);
    return bj_lastStartedTimer;
}
JASSCPP::timer CreateTimerBJ(JASSCPP::boolean periodic,JASSCPP::real timeout)
{
    bj_lastStartedTimer = CreateTimer();
    TimerStart(bj_lastStartedTimer, timeout, periodic, null);
    return bj_lastStartedTimer;
}
void DestroyTimerBJ(JASSCPP::timer whichTimer)
{
    DestroyTimer(whichTimer);
}
void PauseTimerBJ(JASSCPP::boolean pause,JASSCPP::timer whichTimer)
{
    if (pause)
    {
        PauseTimer(whichTimer);
    }
    else
    {
        ResumeTimer(whichTimer);
    }
}
JASSCPP::timer GetLastCreatedTimerBJ()
{
    return bj_lastStartedTimer;
}
JASSCPP::timerdialog CreateTimerDialogBJ(JASSCPP::timer t,JASSCPP::string title)
{
    bj_lastCreatedTimerDialog = CreateTimerDialog(t);
    TimerDialogSetTitle(bj_lastCreatedTimerDialog, title);
    TimerDialogDisplay(bj_lastCreatedTimerDialog, true);
    return bj_lastCreatedTimerDialog;
}
void DestroyTimerDialogBJ(JASSCPP::timerdialog td)
{
    DestroyTimerDialog(td);
}
void TimerDialogSetTitleBJ(JASSCPP::timerdialog td,JASSCPP::string title)
{
    TimerDialogSetTitle(td, title);
}
void TimerDialogSetTitleColorBJ(JASSCPP::timerdialog td,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency)
{
    TimerDialogSetTitleColor(td, PercentTo255(red), PercentTo255(green), PercentTo255(blue), PercentTo255(100.0-transparency));
}
void TimerDialogSetTimeColorBJ(JASSCPP::timerdialog td,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency)
{
    TimerDialogSetTimeColor(td, PercentTo255(red), PercentTo255(green), PercentTo255(blue), PercentTo255(100.0-transparency));
}
void TimerDialogSetSpeedBJ(JASSCPP::timerdialog td,JASSCPP::real speedMultFactor)
{
    TimerDialogSetSpeed(td, speedMultFactor);
}
void TimerDialogDisplayForPlayerBJ(JASSCPP::boolean show,JASSCPP::timerdialog td,JASSCPP::player whichPlayer)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        TimerDialogDisplay(td, show);
    }
}
void TimerDialogDisplayBJ(JASSCPP::boolean show,JASSCPP::timerdialog td)
{
    TimerDialogDisplay(td, show);
}
JASSCPP::timerdialog GetLastCreatedTimerDialogBJ()
{
    return bj_lastCreatedTimerDialog;
}
void LeaderboardResizeBJ(JASSCPP::leaderboard lb)
{
    JASSCPP::integer size = LeaderboardGetItemCount(lb);
    if (LeaderboardGetLabelText(lb) == "")
    {
        size = size - 1;
    }
    LeaderboardSetSizeByItemCount(lb, size);
}
void LeaderboardSetPlayerItemValueBJ(JASSCPP::player whichPlayer,JASSCPP::leaderboard lb,JASSCPP::integer val)
{
    LeaderboardSetItemValue(lb, LeaderboardGetPlayerIndex(lb, whichPlayer), val);
}
void LeaderboardSetPlayerItemLabelBJ(JASSCPP::player whichPlayer,JASSCPP::leaderboard lb,JASSCPP::string val)
{
    LeaderboardSetItemLabel(lb, LeaderboardGetPlayerIndex(lb, whichPlayer), val);
}
void LeaderboardSetPlayerItemStyleBJ(JASSCPP::player whichPlayer,JASSCPP::leaderboard lb,JASSCPP::boolean showLabel,JASSCPP::boolean showValue,JASSCPP::boolean showIcon)
{
    LeaderboardSetItemStyle(lb, LeaderboardGetPlayerIndex(lb, whichPlayer), showLabel, showValue, showIcon);
}
void LeaderboardSetPlayerItemLabelColorBJ(JASSCPP::player whichPlayer,JASSCPP::leaderboard lb,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency)
{
    LeaderboardSetItemLabelColor(lb, LeaderboardGetPlayerIndex(lb, whichPlayer), PercentTo255(red), PercentTo255(green), PercentTo255(blue), PercentTo255(100.0-transparency));
}
void LeaderboardSetPlayerItemValueColorBJ(JASSCPP::player whichPlayer,JASSCPP::leaderboard lb,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency)
{
    LeaderboardSetItemValueColor(lb, LeaderboardGetPlayerIndex(lb, whichPlayer), PercentTo255(red), PercentTo255(green), PercentTo255(blue), PercentTo255(100.0-transparency));
}
void LeaderboardSetLabelColorBJ(JASSCPP::leaderboard lb,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency)
{
    LeaderboardSetLabelColor(lb, PercentTo255(red), PercentTo255(green), PercentTo255(blue), PercentTo255(100.0-transparency));
}
void LeaderboardSetValueColorBJ(JASSCPP::leaderboard lb,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency)
{
    LeaderboardSetValueColor(lb, PercentTo255(red), PercentTo255(green), PercentTo255(blue), PercentTo255(100.0-transparency));
}
void LeaderboardSetLabelBJ(JASSCPP::leaderboard lb,JASSCPP::string label)
{
    LeaderboardSetLabel(lb, label);
    LeaderboardResizeBJ(lb);
}
void LeaderboardSetStyleBJ(JASSCPP::leaderboard lb,JASSCPP::boolean showLabel,JASSCPP::boolean showNames,JASSCPP::boolean showValues,JASSCPP::boolean showIcons)
{
    LeaderboardSetStyle(lb, showLabel, showNames, showValues, showIcons);
}
JASSCPP::integer LeaderboardGetItemCountBJ(JASSCPP::leaderboard lb)
{
    return LeaderboardGetItemCount(lb);
}
JASSCPP::boolean LeaderboardHasPlayerItemBJ(JASSCPP::leaderboard lb,JASSCPP::player whichPlayer)
{
    return LeaderboardHasPlayerItem(lb, whichPlayer);
}
void ForceSetLeaderboardBJ(JASSCPP::leaderboard lb,JASSCPP::force toForce)
{
    JASSCPP::integer index;
    JASSCPP::player indexPlayer;
    index = 0;
    while (true)
    {
        indexPlayer = Player(index);
        if (IsPlayerInForce(indexPlayer, toForce))
        {
            PlayerSetLeaderboard(indexPlayer, lb);
        }
        index = index + 1;
        if (index == bj_MAX_PLAYERS) break;
    }
}
JASSCPP::leaderboard CreateLeaderboardBJ(JASSCPP::force toForce,JASSCPP::string label)
{
    bj_lastCreatedLeaderboard = CreateLeaderboard();
    LeaderboardSetLabel(bj_lastCreatedLeaderboard, label);
    ForceSetLeaderboardBJ(bj_lastCreatedLeaderboard, toForce);
    LeaderboardDisplay(bj_lastCreatedLeaderboard, true);
    return bj_lastCreatedLeaderboard;
}
void DestroyLeaderboardBJ(JASSCPP::leaderboard lb)
{
    DestroyLeaderboard(lb);
}
void LeaderboardDisplayBJ(JASSCPP::boolean show,JASSCPP::leaderboard lb)
{
    LeaderboardDisplay(lb, show);
}
void LeaderboardAddItemBJ(JASSCPP::player whichPlayer,JASSCPP::leaderboard lb,JASSCPP::string label,JASSCPP::integer value)
{
    if (LeaderboardHasPlayerItem(lb, whichPlayer))
    {
        LeaderboardRemovePlayerItem(lb, whichPlayer);
    }
    LeaderboardAddItem(lb, label, value, whichPlayer);
    LeaderboardResizeBJ(lb);
    //call LeaderboardSetSizeByItemCount(lb, LeaderboardGetItemCount(lb))
}
void LeaderboardRemovePlayerItemBJ(JASSCPP::player whichPlayer,JASSCPP::leaderboard lb)
{
    LeaderboardRemovePlayerItem(lb, whichPlayer);
    LeaderboardResizeBJ(lb);
}
void LeaderboardSortItemsBJ(JASSCPP::leaderboard lb,JASSCPP::integer sortType,JASSCPP::boolean ascending)
{
    if (sortType == bj_SORTTYPE_SORTBYVALUE)
    {
        LeaderboardSortItemsByValue(lb, ascending);
    }
     else if (sortType == bj_SORTTYPE_SORTBYPLAYER)
    {
        LeaderboardSortItemsByPlayer(lb, ascending);
    }
     else if (sortType == bj_SORTTYPE_SORTBYLABEL)
    {
        LeaderboardSortItemsByLabel(lb, ascending);
    }
    else
    {
        // Unrecognized sort type - ignore the request.
    }
}
void LeaderboardSortItemsByPlayerBJ(JASSCPP::leaderboard lb,JASSCPP::boolean ascending)
{
    LeaderboardSortItemsByPlayer(lb, ascending);
}
void LeaderboardSortItemsByLabelBJ(JASSCPP::leaderboard lb,JASSCPP::boolean ascending)
{
    LeaderboardSortItemsByLabel(lb, ascending);
}
JASSCPP::integer LeaderboardGetPlayerIndexBJ(JASSCPP::player whichPlayer,JASSCPP::leaderboard lb)
{
    return LeaderboardGetPlayerIndex(lb, whichPlayer) + 1;
}
JASSCPP::player LeaderboardGetIndexedPlayerBJ(JASSCPP::integer position,JASSCPP::leaderboard lb)
{
    JASSCPP::integer index;
    JASSCPP::player indexPlayer;
    index = 0;
    while (true)
    {
        indexPlayer = Player(index);
        if (LeaderboardGetPlayerIndex(lb, indexPlayer) == position - 1)
        {
            return indexPlayer;
        }
        index = index + 1;
        if (index == bj_MAX_PLAYERS) break;
    }
    return Player(PLAYER_NEUTRAL_PASSIVE);
}
JASSCPP::leaderboard PlayerGetLeaderboardBJ(JASSCPP::player whichPlayer)
{
    return PlayerGetLeaderboard(whichPlayer);
}
JASSCPP::leaderboard GetLastCreatedLeaderboard()
{
    return bj_lastCreatedLeaderboard;
}
void MultiboardAllowDisplayBJ(JASSCPP::boolean flag)
{
    MultiboardSuppressDisplay(!flag);
}
JASSCPP::real TextTagSize2Height(JASSCPP::real size)
{
    return size * 0.023 / 10;
}
JASSCPP::real TextTagSpeed2Velocity(JASSCPP::real speed)
{
    return speed * 0.071 / 128;
}
void SetTextTagColorBJ(JASSCPP::texttag tt,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency)
{
    SetTextTagColor(tt, PercentTo255(red), PercentTo255(green), PercentTo255(blue), PercentTo255(100.0-transparency));
}
JASSCPP::texttag CreateTextTagLocBJ(JASSCPP::string s,JASSCPP::location loc,JASSCPP::real zOffset,JASSCPP::real size,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency)
{
    JASSCPP::real textHeight = TextTagSize2Height(size);
    bj_lastCreatedTextTag = CreateTextTag();
    SetTextTagText(bj_lastCreatedTextTag, s, textHeight);
    SetTextTagPos(bj_lastCreatedTextTag, GetLocationX(loc), GetLocationY(loc), zOffset);
    SetTextTagColorBJ(bj_lastCreatedTextTag, red, green, blue, transparency);
    return bj_lastCreatedTextTag;
}
JASSCPP::texttag CreateTextTagUnitBJ(JASSCPP::string s,JASSCPP::unit whichUnit,JASSCPP::real zOffset,JASSCPP::real size,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency)
{
    JASSCPP::real textHeight = TextTagSize2Height(size);
    bj_lastCreatedTextTag = CreateTextTag();
    SetTextTagText(bj_lastCreatedTextTag, s, textHeight);
    SetTextTagPosUnit(bj_lastCreatedTextTag, whichUnit, zOffset);
    SetTextTagColorBJ(bj_lastCreatedTextTag, red, green, blue, transparency);
    return bj_lastCreatedTextTag;
}
void DestroyTextTagBJ(JASSCPP::texttag tt)
{
    DestroyTextTag(tt);
}
void SetTextTagVelocityBJ(JASSCPP::texttag tt,JASSCPP::real speed,JASSCPP::real angle)
{
    JASSCPP::real vel = TextTagSpeed2Velocity(speed);
    JASSCPP::real xvel = vel * Cos(angle * bj_DEGTORAD);
    JASSCPP::real yvel = vel * Sin(angle * bj_DEGTORAD);
    SetTextTagVelocity(tt, xvel, yvel);
}
void ShowTextTagForceBJ(JASSCPP::boolean show,JASSCPP::texttag tt,JASSCPP::force whichForce)
{
    if ((IsPlayerInForce(GetLocalPlayer(), whichForce)))
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        SetTextTagVisibility(tt, show);
    }
}
JASSCPP::texttag GetLastCreatedTextTag()
{
    return bj_lastCreatedTextTag;
}
void PauseGameOn()
{
    PauseGame(true);
}
void PauseGameOff()
{
    PauseGame(false);
}
void SetUserControlForceOn(JASSCPP::force whichForce)
{
    if ((IsPlayerInForce(GetLocalPlayer(), whichForce)))
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        EnableUserControl(true);
    }
}
void SetUserControlForceOff(JASSCPP::force whichForce)
{
    if ((IsPlayerInForce(GetLocalPlayer(), whichForce)))
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        EnableUserControl(false);
    }
}
void ShowInterfaceForceOn(JASSCPP::force whichForce,JASSCPP::real fadeDuration)
{
    if ((IsPlayerInForce(GetLocalPlayer(), whichForce)))
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        ShowInterface(true, fadeDuration);
    }
}
void ShowInterfaceForceOff(JASSCPP::force whichForce,JASSCPP::real fadeDuration)
{
    if ((IsPlayerInForce(GetLocalPlayer(), whichForce)))
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        ShowInterface(false, fadeDuration);
    }
}
void PingMinimapForForce(JASSCPP::force whichForce,JASSCPP::real x,JASSCPP::real y,JASSCPP::real duration)
{
    if ((IsPlayerInForce(GetLocalPlayer(), whichForce)))
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        PingMinimap(x, y, duration);
        //call StartSound(bj_pingMinimapSound)
    }
}
void PingMinimapLocForForce(JASSCPP::force whichForce,JASSCPP::location loc,JASSCPP::real duration)
{
    PingMinimapForForce(whichForce, GetLocationX(loc), GetLocationY(loc), duration);
}
void PingMinimapForPlayer(JASSCPP::player whichPlayer,JASSCPP::real x,JASSCPP::real y,JASSCPP::real duration)
{
    if (GetLocalPlayer() == whichPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        PingMinimap(x, y, duration);
        //call StartSound(bj_pingMinimapSound)
    }
}
void PingMinimapLocForPlayer(JASSCPP::player whichPlayer,JASSCPP::location loc,JASSCPP::real duration)
{
    PingMinimapForPlayer(whichPlayer, GetLocationX(loc), GetLocationY(loc), duration);
}
void PingMinimapForForceEx(JASSCPP::force whichForce,JASSCPP::real x,JASSCPP::real y,JASSCPP::real duration,JASSCPP::integer style,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue)
{
    JASSCPP::integer red255 = PercentTo255(red);
    JASSCPP::integer green255 = PercentTo255(green);
    JASSCPP::integer blue255 = PercentTo255(blue);
    if ((IsPlayerInForce(GetLocalPlayer(), whichForce)))
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        // Prevent 100% red simple and flashy pings, as they become "attack" pings.
        if ((red255 == 255) && (green255 == 0) && (blue255 == 0))
        {
            red255 = 254;
        }
        if (style == bj_MINIMAPPINGSTYLE_SIMPLE)
        {
            PingMinimapEx(x, y, duration, red255, green255, blue255, false);
        }
         else if (style == bj_MINIMAPPINGSTYLE_FLASHY)
        {
            PingMinimapEx(x, y, duration, red255, green255, blue255, true);
        }
         else if (style == bj_MINIMAPPINGSTYLE_ATTACK)
        {
            PingMinimapEx(x, y, duration, 255, 0, 0, false);
        }
        else
        {
            // Unrecognized ping style - ignore the request.
        }
        //call StartSound(bj_pingMinimapSound)
    }
}
void PingMinimapLocForForceEx(JASSCPP::force whichForce,JASSCPP::location loc,JASSCPP::real duration,JASSCPP::integer style,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue)
{
    PingMinimapForForceEx(whichForce, GetLocationX(loc), GetLocationY(loc), duration, style, red, green, blue);
}
void EnableWorldFogBoundaryBJ(JASSCPP::boolean enable,JASSCPP::force f)
{
    if ((IsPlayerInForce(GetLocalPlayer(), f)))
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        EnableWorldFogBoundary(enable);
    }
}
void EnableOcclusionBJ(JASSCPP::boolean enable,JASSCPP::force f)
{
    if ((IsPlayerInForce(GetLocalPlayer(), f)))
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        EnableOcclusion(enable);
    }
}
void CancelCineSceneBJ()
{
    StopSoundBJ(bj_cineSceneLastSound, true);
    EndCinematicScene();
}
void TryInitCinematicBehaviorBJ()
{
    JASSCPP::integer index;
    if (bj_cineSceneBeingSkipped == null)
    {
        bj_cineSceneBeingSkipped = CreateTrigger();
        index = 0;
        while (true)
        {
            TriggerRegisterPlayerEvent(bj_cineSceneBeingSkipped, Player(index), EVENT_PLAYER_END_CINEMATIC);
            index = index + 1;
            if (index == bj_MAX_PLAYERS) break;
        }
        TriggerAddAction(bj_cineSceneBeingSkipped, function CancelCineSceneBJ);
    }
}
void SetCinematicSceneBJ(JASSCPP::sound soundHandle,JASSCPP::integer portraitUnitId,JASSCPP::playercolor color,JASSCPP::string speakerTitle,JASSCPP::string text,JASSCPP::real sceneDuration,JASSCPP::real voiceoverDuration)
{
    bj_cineSceneLastSound = soundHandle;
    PlaySoundBJ(soundHandle);
    SetCinematicScene(portraitUnitId, color, speakerTitle, text, sceneDuration, voiceoverDuration);
}
JASSCPP::real GetTransmissionDuration(JASSCPP::sound soundHandle,JASSCPP::integer timeType,JASSCPP::real timeVal)
{
    JASSCPP::real duration;
    if (timeType == bj_TIMETYPE_ADD)
    {
        duration = GetSoundDurationBJ(soundHandle) + timeVal;
    }
     else if (timeType == bj_TIMETYPE_SET)
    {
        duration = timeVal;
    }
     else if (timeType == bj_TIMETYPE_SUB)
    {
        duration = GetSoundDurationBJ(soundHandle) - timeVal;
    }
    else
    {
        // Unrecognized timeType - ignore timeVal.
        duration = GetSoundDurationBJ(soundHandle);
    }
    // Make sure we have a non-negative duration.
    if (duration < 0)
    {
        duration = 0;
    }
    return duration;
}
void WaitTransmissionDuration(JASSCPP::sound soundHandle,JASSCPP::integer timeType,JASSCPP::real timeVal)
{
    if (timeType == bj_TIMETYPE_SET)
    {
        // If we have a static duration wait, just perform the wait.
        TriggerSleepAction(timeVal);
    }
     else if (soundHandle == null)
    {
        // If the sound does not exist, perform a default length wait.
        TriggerSleepAction(bj_NOTHING_SOUND_DURATION);
    }
     else if (timeType == bj_TIMETYPE_SUB)
    {
        // If the transmission is cutting off the sound, wait for the sound
        // to be mostly finished.
        WaitForSoundBJ(soundHandle, timeVal);
    }
     else if (timeType == bj_TIMETYPE_ADD)
    {
        // If the transmission is extending beyond the sound's length, wait
        // for it to finish, and then wait the additional time.
        WaitForSoundBJ(soundHandle, 0);
        TriggerSleepAction(timeVal);
    }
    else
    {
        // Unrecognized timeType - ignore.
    }
}
void DoTransmissionBasicsXYBJ(JASSCPP::integer unitId,JASSCPP::playercolor color,JASSCPP::real x,JASSCPP::real y,JASSCPP::sound soundHandle,JASSCPP::string unitName,JASSCPP::string message,JASSCPP::real duration)
{
    SetCinematicSceneBJ(soundHandle, unitId, color, unitName, message, duration + bj_TRANSMISSION_PORT_HANGTIME, duration);
    if (unitId != 0)
    {
        PingMinimap(x, y, bj_TRANSMISSION_PING_TIME);
        //call SetCameraQuickPosition(x, y)
    }
}
void TransmissionFromUnitWithNameBJ(JASSCPP::force toForce,JASSCPP::unit whichUnit,JASSCPP::string unitName,JASSCPP::sound soundHandle,JASSCPP::string message,JASSCPP::integer timeType,JASSCPP::real timeVal,JASSCPP::boolean wait)
{
    TryInitCinematicBehaviorBJ();
    // Ensure that the time value is non-negative.
    timeVal = RMaxBJ(timeVal, 0);
    bj_lastTransmissionDuration = GetTransmissionDuration(soundHandle, timeType, timeVal);
    bj_lastPlayedSound = soundHandle;
    if ((IsPlayerInForce(GetLocalPlayer(), toForce)))
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        if (whichUnit == null)
        {
            // If the unit reference is invalid, send the transmission from the center of the map with no portrait.
            DoTransmissionBasicsXYBJ(0, PLAYER_COLOR_RED, 0, 0, soundHandle, unitName, message, bj_lastTransmissionDuration);
        }
        else
        {
            DoTransmissionBasicsXYBJ(GetUnitTypeId(whichUnit), GetPlayerColor(GetOwningPlayer(whichUnit)), GetUnitX(whichUnit), GetUnitY(whichUnit), soundHandle, unitName, message, bj_lastTransmissionDuration);
            if (!IsUnitHidden(whichUnit))
            {
                UnitAddIndicator(whichUnit, bj_TRANSMISSION_IND_RED, bj_TRANSMISSION_IND_BLUE, bj_TRANSMISSION_IND_GREEN, bj_TRANSMISSION_IND_ALPHA);
            }
        }
    }
    if (wait && (bj_lastTransmissionDuration > 0))
    {
        // call TriggerSleepAction(bj_lastTransmissionDuration)
        WaitTransmissionDuration(soundHandle, timeType, timeVal);
    }
}
void TransmissionFromUnitTypeWithNameBJ(JASSCPP::force toForce,JASSCPP::player fromPlayer,JASSCPP::integer unitId,JASSCPP::string unitName,JASSCPP::location loc,JASSCPP::sound soundHandle,JASSCPP::string message,JASSCPP::integer timeType,JASSCPP::real timeVal,JASSCPP::boolean wait)
{
    TryInitCinematicBehaviorBJ();
    // Ensure that the time value is non-negative.
    timeVal = RMaxBJ(timeVal, 0);
    bj_lastTransmissionDuration = GetTransmissionDuration(soundHandle, timeType, timeVal);
    bj_lastPlayedSound = soundHandle;
    if ((IsPlayerInForce(GetLocalPlayer(), toForce)))
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        DoTransmissionBasicsXYBJ(unitId, GetPlayerColor(fromPlayer), GetLocationX(loc), GetLocationY(loc), soundHandle, unitName, message, bj_lastTransmissionDuration);
    }
    if (wait && (bj_lastTransmissionDuration > 0))
    {
        // call TriggerSleepAction(bj_lastTransmissionDuration)
        WaitTransmissionDuration(soundHandle, timeType, timeVal);
    }
}
JASSCPP::real GetLastTransmissionDurationBJ()
{
    return bj_lastTransmissionDuration;
}
void ForceCinematicSubtitlesBJ(JASSCPP::boolean flag)
{
    ForceCinematicSubtitles(flag);
}
void CinematicModeExBJ(JASSCPP::boolean cineMode,JASSCPP::force forForce,JASSCPP::real interfaceFadeTime)
{
    if (!bj_gameStarted)
    {
        interfaceFadeTime = 0;
    }
    if (cineMode)
    {
        // Save the UI state so that we can restore it later.
        if (!bj_cineModeAlreadyIn)
        {
            bj_cineModeAlreadyIn = true;
            bj_cineModePriorSpeed = GetGameSpeed();
            bj_cineModePriorFogSetting = IsFogEnabled();
            bj_cineModePriorMaskSetting = IsFogMaskEnabled();
            bj_cineModePriorDawnDusk = IsDawnDuskEnabled();
            bj_cineModeSavedSeed = GetRandomInt(0, 1000000);
        }
        // Perform local changes
        if ((IsPlayerInForce(GetLocalPlayer(), forForce)))
        {
            // Use only local code (no net traffic) within this block to avoid desyncs.
            ClearTextMessages();
            ShowInterface(false, interfaceFadeTime);
            EnableUserControl(false);
            EnableOcclusion(false);
            SetCineModeVolumeGroupsBJ();
        }
        // Perform global changes
        SetGameSpeed(bj_CINEMODE_GAMESPEED);
        SetMapFlag(MAP_LOCK_SPEED, true);
        FogMaskEnable(false);
        FogEnable(false);
        EnableWorldFogBoundary(false);
        EnableDawnDusk(false);
        // Use a fixed random seed, so that cinematics play consistently.
        SetRandomSeed(0);
    }
    else
    {
        bj_cineModeAlreadyIn = false;
        // Perform local changes
        if ((IsPlayerInForce(GetLocalPlayer(), forForce)))
        {
            // Use only local code (no net traffic) within this block to avoid desyncs.
            ShowInterface(true, interfaceFadeTime);
            EnableUserControl(true);
            EnableOcclusion(true);
            VolumeGroupReset();
            EndThematicMusic();
            CameraResetSmoothingFactorBJ();
        }
        // Perform global changes
        SetMapFlag(MAP_LOCK_SPEED, false);
        SetGameSpeed(bj_cineModePriorSpeed);
        FogMaskEnable(bj_cineModePriorMaskSetting);
        FogEnable(bj_cineModePriorFogSetting);
        EnableWorldFogBoundary(true);
        EnableDawnDusk(bj_cineModePriorDawnDusk);
        SetRandomSeed(bj_cineModeSavedSeed);
    }
}
void CinematicModeBJ(JASSCPP::boolean cineMode,JASSCPP::force forForce)
{
    CinematicModeExBJ(cineMode, forForce, bj_CINEMODE_INTERFACEFADE);
}
void DisplayCineFilterBJ(JASSCPP::boolean flag)
{
    DisplayCineFilter(flag);
}
void CinematicFadeCommonBJ(JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real duration,JASSCPP::string tex,JASSCPP::real startTrans,JASSCPP::real endTrans)
{
    if (duration == 0)
    {
        // If the fade is instant, use the same starting and ending values,
        // so that we effectively do a set rather than a fade.
        startTrans = endTrans;
    }
    EnableUserUI(false);
    SetCineFilterTexture(tex);
    SetCineFilterBlendMode(BLEND_MODE_BLEND);
    SetCineFilterTexMapFlags(TEXMAP_FLAG_NONE);
    SetCineFilterStartUV(0, 0, 1, 1);
    SetCineFilterEndUV(0, 0, 1, 1);
    SetCineFilterStartColor(PercentTo255(red), PercentTo255(green), PercentTo255(blue), PercentTo255(100-startTrans));
    SetCineFilterEndColor(PercentTo255(red), PercentTo255(green), PercentTo255(blue), PercentTo255(100-endTrans));
    SetCineFilterDuration(duration);
    DisplayCineFilter(true);
}
void FinishCinematicFadeBJ()
{
    DestroyTimer(bj_cineFadeFinishTimer);
    bj_cineFadeFinishTimer = null;
    DisplayCineFilter(false);
    EnableUserUI(true);
}
void FinishCinematicFadeAfterBJ(JASSCPP::real duration)
{
    bj_cineFadeFinishTimer = CreateTimer();
    TimerStart(bj_cineFadeFinishTimer, duration, false, function FinishCinematicFadeBJ);
}
void ContinueCinematicFadeBJ()
{
    DestroyTimer(bj_cineFadeContinueTimer);
    bj_cineFadeContinueTimer = null;
    CinematicFadeCommonBJ(bj_cineFadeContinueRed, bj_cineFadeContinueGreen, bj_cineFadeContinueBlue, bj_cineFadeContinueDuration, bj_cineFadeContinueTex, bj_cineFadeContinueTrans, 100);
}
void ContinueCinematicFadeAfterBJ(JASSCPP::real duration,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real trans,JASSCPP::string tex)
{
    bj_cineFadeContinueRed = red;
    bj_cineFadeContinueGreen = green;
    bj_cineFadeContinueBlue = blue;
    bj_cineFadeContinueTrans = trans;
    bj_cineFadeContinueDuration = duration;
    bj_cineFadeContinueTex = tex;
    // Create a timer to continue the cinematic fade.
    bj_cineFadeContinueTimer = CreateTimer();
    TimerStart(bj_cineFadeContinueTimer, duration, false, function ContinueCinematicFadeBJ);
}
void AbortCinematicFadeBJ()
{
    if (bj_cineFadeContinueTimer != null)
    {
        DestroyTimer(bj_cineFadeContinueTimer);
    }
    if (bj_cineFadeFinishTimer != null)
    {
        DestroyTimer(bj_cineFadeFinishTimer);
    }
}
void CinematicFadeBJ(JASSCPP::integer fadetype,JASSCPP::real duration,JASSCPP::string tex,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real trans)
{
    if (fadetype == bj_CINEFADETYPE_FADEOUT)
    {
        // Fade out to the requested color.
        AbortCinematicFadeBJ();
        CinematicFadeCommonBJ(red, green, blue, duration, tex, 100, trans);
    }
     else if (fadetype == bj_CINEFADETYPE_FADEIN)
    {
        // Fade in from the requested color.
        AbortCinematicFadeBJ();
        CinematicFadeCommonBJ(red, green, blue, duration, tex, trans, 100);
        FinishCinematicFadeAfterBJ(duration);
    }
     else if (fadetype == bj_CINEFADETYPE_FADEOUTIN)
    {
        // Fade out to the requested color, and then fade back in from it.
        if (duration > 0)
        {
            AbortCinematicFadeBJ();
            CinematicFadeCommonBJ(red, green, blue, duration * 0.5, tex, 100, trans);
            ContinueCinematicFadeAfterBJ(duration * 0.5, red, green, blue, trans, tex);
            FinishCinematicFadeAfterBJ(duration);
        }
    }
    else
    {
        // Unrecognized fadetype - ignore the request.
    }
}
void CinematicFilterGenericBJ(JASSCPP::real duration,JASSCPP::blendmode bmode,JASSCPP::string tex,JASSCPP::real red0,JASSCPP::real green0,JASSCPP::real blue0,JASSCPP::real trans0,JASSCPP::real red1,JASSCPP::real green1,JASSCPP::real blue1,JASSCPP::real trans1)
{
    AbortCinematicFadeBJ();
    SetCineFilterTexture(tex);
    SetCineFilterBlendMode(bmode);
    SetCineFilterTexMapFlags(TEXMAP_FLAG_NONE);
    SetCineFilterStartUV(0, 0, 1, 1);
    SetCineFilterEndUV(0, 0, 1, 1);
    SetCineFilterStartColor(PercentTo255(red0), PercentTo255(green0), PercentTo255(blue0), PercentTo255(100-trans0));
    SetCineFilterEndColor(PercentTo255(red1), PercentTo255(green1), PercentTo255(blue1), PercentTo255(100-trans1));
    SetCineFilterDuration(duration);
    DisplayCineFilter(true);
}
void RescueUnitBJ(JASSCPP::unit whichUnit,JASSCPP::player rescuer,JASSCPP::boolean changeColor)
{
    if (IsUnitDeadBJ(whichUnit) || (GetOwningPlayer(whichUnit) == rescuer))
    {
        return;
    }
    StartSound(bj_rescueSound);
    SetUnitOwner(whichUnit, rescuer, changeColor);
    UnitAddIndicator(whichUnit, 0, 255, 0, 255);
    PingMinimapForPlayer(rescuer, GetUnitX(whichUnit), GetUnitY(whichUnit), bj_RESCUE_PING_TIME);
}
void TriggerActionUnitRescuedBJ()
{
    JASSCPP::unit theUnit = GetTriggerUnit();
    if (IsUnitType(theUnit, UNIT_TYPE_STRUCTURE))
    {
        RescueUnitBJ(theUnit, GetOwningPlayer(GetRescuer()), bj_rescueChangeColorBldg);
    }
    else
    {
        RescueUnitBJ(theUnit, GetOwningPlayer(GetRescuer()), bj_rescueChangeColorUnit);
    }
}
void TryInitRescuableTriggersBJ()
{
    JASSCPP::integer index;
    if (bj_rescueUnitBehavior == null)
    {
        bj_rescueUnitBehavior = CreateTrigger();
        index = 0;
        while (true)
        {
            TriggerRegisterPlayerUnitEvent(bj_rescueUnitBehavior, Player(index), EVENT_PLAYER_UNIT_RESCUED, null);
            index = index + 1;
            if (index == bj_MAX_PLAYER_SLOTS) break;
        }
        TriggerAddAction(bj_rescueUnitBehavior, function TriggerActionUnitRescuedBJ);
    }
}
void SetRescueUnitColorChangeBJ(JASSCPP::boolean changeColor)
{
    bj_rescueChangeColorUnit = changeColor;
}
void SetRescueBuildingColorChangeBJ(JASSCPP::boolean changeColor)
{
    bj_rescueChangeColorBldg = changeColor;
}
void MakeUnitRescuableToForceBJEnum()
{
    TryInitRescuableTriggersBJ();
    SetUnitRescuable(bj_makeUnitRescuableUnit, GetEnumPlayer(), bj_makeUnitRescuableFlag);
}
void MakeUnitRescuableToForceBJ(JASSCPP::unit whichUnit,JASSCPP::boolean isRescuable,JASSCPP::force whichForce)
{
    bj_makeUnitRescuableUnit = whichUnit;
    bj_makeUnitRescuableFlag = isRescuable;
    ForForce(whichForce, function MakeUnitRescuableToForceBJEnum);
}
void InitRescuableBehaviorBJ()
{
    JASSCPP::integer index;
    index = 0;
    while (true)
    {
        // If at least one player slot is "Rescuable"-controlled, init the
        // rescue behavior triggers.
        if ((GetPlayerController(Player(index)) == MAP_CONTROL_RESCUABLE))
        {
            TryInitRescuableTriggersBJ();
            return;
        }
        index = index + 1;
        if (index == bj_MAX_PLAYERS) break;
    }
}
void SetPlayerTechResearchedSwap(JASSCPP::integer techid,JASSCPP::integer levels,JASSCPP::player whichPlayer)
{
    SetPlayerTechResearched(whichPlayer, techid, levels);
}
void SetPlayerTechMaxAllowedSwap(JASSCPP::integer techid,JASSCPP::integer maximum,JASSCPP::player whichPlayer)
{
    SetPlayerTechMaxAllowed(whichPlayer, techid, maximum);
}
void SetPlayerMaxHeroesAllowed(JASSCPP::integer maximum,JASSCPP::player whichPlayer)
{
    SetPlayerTechMaxAllowed(whichPlayer, 'HERO', maximum);
}
JASSCPP::integer GetPlayerTechCountSimple(JASSCPP::integer techid,JASSCPP::player whichPlayer)
{
    return GetPlayerTechCount(whichPlayer, techid, true);
}
JASSCPP::integer GetPlayerTechMaxAllowedSwap(JASSCPP::integer techid,JASSCPP::player whichPlayer)
{
    return GetPlayerTechMaxAllowed(whichPlayer, techid);
}
void SetPlayerAbilityAvailableBJ(JASSCPP::boolean avail,JASSCPP::integer abilid,JASSCPP::player whichPlayer)
{
    SetPlayerAbilityAvailable(whichPlayer, abilid, avail);
}
void SetCampaignMenuRaceBJ(JASSCPP::integer campaignNumber)
{
    if (campaignNumber == bj_CAMPAIGN_INDEX_T)
    {
        SetCampaignMenuRace(RACE_OTHER);
    }
     else if (campaignNumber == bj_CAMPAIGN_INDEX_H)
    {
        SetCampaignMenuRace(RACE_HUMAN);
    }
     else if (campaignNumber == bj_CAMPAIGN_INDEX_U)
    {
        SetCampaignMenuRace(RACE_UNDEAD);
    }
     else if (campaignNumber == bj_CAMPAIGN_INDEX_O)
    {
        SetCampaignMenuRace(RACE_ORC);
    }
     else if (campaignNumber == bj_CAMPAIGN_INDEX_N)
    {
        SetCampaignMenuRace(RACE_NIGHTELF);
    }
     else if (campaignNumber == bj_CAMPAIGN_INDEX_XN)
    {
        SetCampaignMenuRaceEx(bj_CAMPAIGN_OFFSET_XN);
    }
     else if (campaignNumber == bj_CAMPAIGN_INDEX_XH)
    {
        SetCampaignMenuRaceEx(bj_CAMPAIGN_OFFSET_XH);
    }
     else if (campaignNumber == bj_CAMPAIGN_INDEX_XU)
    {
        SetCampaignMenuRaceEx(bj_CAMPAIGN_OFFSET_XU);
    }
     else if (campaignNumber == bj_CAMPAIGN_INDEX_XO)
    {
        SetCampaignMenuRaceEx(bj_CAMPAIGN_OFFSET_XO);
    }
    else
    {
        // Unrecognized campaign - ignore the request
    }
}
void SetMissionAvailableBJ(JASSCPP::boolean available,JASSCPP::integer missionIndex)
{
    JASSCPP::integer campaignNumber = missionIndex / 1000;
    JASSCPP::integer missionNumber = missionIndex - campaignNumber * 1000;
    SetMissionAvailable(campaignNumber, missionNumber, available);
}
void SetCampaignAvailableBJ(JASSCPP::boolean available,JASSCPP::integer campaignNumber)
{
    JASSCPP::integer campaignOffset;
    if (campaignNumber == bj_CAMPAIGN_INDEX_H)
    {
        SetTutorialCleared(true);
    }
    if (campaignNumber == bj_CAMPAIGN_INDEX_XN)
    {
        campaignOffset = bj_CAMPAIGN_OFFSET_XN;
    }
     else if (campaignNumber == bj_CAMPAIGN_INDEX_XH)
    {
        campaignOffset = bj_CAMPAIGN_OFFSET_XH;
    }
     else if (campaignNumber == bj_CAMPAIGN_INDEX_XU)
    {
        campaignOffset = bj_CAMPAIGN_OFFSET_XU;
    }
     else if (campaignNumber == bj_CAMPAIGN_INDEX_XO)
    {
        campaignOffset = bj_CAMPAIGN_OFFSET_XO;
    }
    else
    {
        campaignOffset = campaignNumber;
    }
    SetCampaignAvailable(campaignOffset, available);
    SetCampaignMenuRaceBJ(campaignNumber);
    ForceCampaignSelectScreen();
}
void SetCinematicAvailableBJ(JASSCPP::boolean available,JASSCPP::integer cinematicIndex)
{
    if ( cinematicIndex == bj_CINEMATICINDEX_TOP )
    {
        SetOpCinematicAvailable( bj_CAMPAIGN_INDEX_T, available );
        PlayCinematic( "TutorialOp" );
    }
     else if (cinematicIndex == bj_CINEMATICINDEX_HOP)
    {
        SetOpCinematicAvailable( bj_CAMPAIGN_INDEX_H, available );
        PlayCinematic( "HumanOp" );
    }
     else if (cinematicIndex == bj_CINEMATICINDEX_HED)
    {
        SetEdCinematicAvailable( bj_CAMPAIGN_INDEX_H, available );
        PlayCinematic( "HumanEd" );
    }
     else if (cinematicIndex == bj_CINEMATICINDEX_OOP)
    {
        SetOpCinematicAvailable( bj_CAMPAIGN_INDEX_O, available );
        PlayCinematic( "OrcOp" );
    }
     else if (cinematicIndex == bj_CINEMATICINDEX_OED)
    {
        SetEdCinematicAvailable( bj_CAMPAIGN_INDEX_O, available );
        PlayCinematic( "OrcEd" );
    }
     else if (cinematicIndex == bj_CINEMATICINDEX_UOP)
    {
        SetEdCinematicAvailable( bj_CAMPAIGN_INDEX_U, available );
        PlayCinematic( "UndeadOp" );
    }
     else if (cinematicIndex == bj_CINEMATICINDEX_UED)
    {
        SetEdCinematicAvailable( bj_CAMPAIGN_INDEX_U, available );
        PlayCinematic( "UndeadEd" );
    }
     else if (cinematicIndex == bj_CINEMATICINDEX_NOP)
    {
        SetEdCinematicAvailable( bj_CAMPAIGN_INDEX_N, available );
        PlayCinematic( "NightElfOp" );
    }
     else if (cinematicIndex == bj_CINEMATICINDEX_NED)
    {
        SetEdCinematicAvailable( bj_CAMPAIGN_INDEX_N, available );
        PlayCinematic( "NightElfEd" );
    }
     else if (cinematicIndex == bj_CINEMATICINDEX_XOP)
    {
        SetOpCinematicAvailable( bj_CAMPAIGN_OFFSET_XN, available );
        PlayCinematic( "IntroX" );
    }
     else if (cinematicIndex == bj_CINEMATICINDEX_XED)
    {
        SetEdCinematicAvailable( bj_CAMPAIGN_OFFSET_XU, available );
        PlayCinematic( "OutroX" );
    }
    else
    {
        // Unrecognized cinematic - ignore the request.
    }
}
JASSCPP::gamecache InitGameCacheBJ(JASSCPP::string campaignFile)
{
    bj_lastCreatedGameCache = InitGameCache(campaignFile);
    return bj_lastCreatedGameCache;
}
JASSCPP::boolean SaveGameCacheBJ(JASSCPP::gamecache cache)
{
    return SaveGameCache(cache);
}
JASSCPP::gamecache GetLastCreatedGameCacheBJ()
{
    return bj_lastCreatedGameCache;
}
void StoreRealBJ(JASSCPP::real value,JASSCPP::string key,JASSCPP::string missionKey,JASSCPP::gamecache cache)
{
    StoreReal(cache, missionKey, key, value);
}
void StoreIntegerBJ(JASSCPP::integer value,JASSCPP::string key,JASSCPP::string missionKey,JASSCPP::gamecache cache)
{
    StoreInteger(cache, missionKey, key, value);
}
void StoreBooleanBJ(JASSCPP::boolean value,JASSCPP::string key,JASSCPP::string missionKey,JASSCPP::gamecache cache)
{
    StoreBoolean(cache, missionKey, key, value);
}
JASSCPP::boolean StoreStringBJ(JASSCPP::string value,JASSCPP::string key,JASSCPP::string missionKey,JASSCPP::gamecache cache)
{
    return StoreString(cache, missionKey, key, value);
}
JASSCPP::boolean StoreUnitBJ(JASSCPP::unit whichUnit,JASSCPP::string key,JASSCPP::string missionKey,JASSCPP::gamecache cache)
{
    return StoreUnit(cache, missionKey, key, whichUnit);
}
JASSCPP::real GetStoredRealBJ(JASSCPP::string key,JASSCPP::string missionKey,JASSCPP::gamecache cache)
{
    return GetStoredReal(cache, missionKey, key);
}
JASSCPP::integer GetStoredIntegerBJ(JASSCPP::string key,JASSCPP::string missionKey,JASSCPP::gamecache cache)
{
    return GetStoredInteger(cache, missionKey, key);
}
JASSCPP::boolean GetStoredBooleanBJ(JASSCPP::string key,JASSCPP::string missionKey,JASSCPP::gamecache cache)
{
    return GetStoredBoolean(cache, missionKey, key);
}
JASSCPP::string GetStoredStringBJ(JASSCPP::string key,JASSCPP::string missionKey,JASSCPP::gamecache cache)
{
    JASSCPP::string s;
    s = GetStoredString(cache, missionKey, key);
    if (s == null)
    {
        return "";
    }
    else
    {
        return s;
    }
}
JASSCPP::unit RestoreUnitLocFacingAngleBJ(JASSCPP::string key,JASSCPP::string missionKey,JASSCPP::gamecache cache,JASSCPP::player forWhichPlayer,JASSCPP::location loc,JASSCPP::real facing)
{
    bj_lastLoadedUnit = RestoreUnit(cache, missionKey, key, forWhichPlayer, GetLocationX(loc), GetLocationY(loc), facing);
    return bj_lastLoadedUnit;
}
JASSCPP::unit RestoreUnitLocFacingPointBJ(JASSCPP::string key,JASSCPP::string missionKey,JASSCPP::gamecache cache,JASSCPP::player forWhichPlayer,JASSCPP::location loc,JASSCPP::location lookAt)
{
    return RestoreUnitLocFacingAngleBJ(key, missionKey, cache, forWhichPlayer, loc, AngleBetweenPoints(loc, lookAt));
}
JASSCPP::unit GetLastRestoredUnitBJ()
{
    return bj_lastLoadedUnit;
}
void FlushGameCacheBJ(JASSCPP::gamecache cache)
{
    FlushGameCache(cache);
}
void FlushStoredMissionBJ(JASSCPP::string missionKey,JASSCPP::gamecache cache)
{
    FlushStoredMission(cache, missionKey);
}
JASSCPP::boolean HaveStoredValue(JASSCPP::string key,JASSCPP::integer valueType,JASSCPP::string missionKey,JASSCPP::gamecache cache)
{
    if (valueType == bj_GAMECACHE_BOOLEAN)
    {
        return HaveStoredBoolean(cache, missionKey, key);
    }
     else if (valueType == bj_GAMECACHE_INTEGER)
    {
        return HaveStoredInteger(cache, missionKey, key);
    }
     else if (valueType == bj_GAMECACHE_REAL)
    {
        return HaveStoredReal(cache, missionKey, key);
    }
     else if (valueType == bj_GAMECACHE_UNIT)
    {
        return HaveStoredUnit(cache, missionKey, key);
    }
     else if (valueType == bj_GAMECACHE_STRING)
    {
        return HaveStoredString(cache, missionKey, key);
    }
    else
    {
        // Unrecognized value type - ignore the request.
        return false;
    }
}
void ShowCustomCampaignButton(JASSCPP::boolean show,JASSCPP::integer whichButton)
{
    SetCustomCampaignButtonVisible(whichButton - 1, show);
}
JASSCPP::boolean IsCustomCampaignButtonVisibile(JASSCPP::integer whichButton)
{
    return GetCustomCampaignButtonVisible(whichButton - 1);
}
void LoadGameBJ(JASSCPP::string loadFileName,JASSCPP::boolean doScoreScreen)
{
    LoadGame(loadFileName, doScoreScreen);
}
void SaveAndChangeLevelBJ(JASSCPP::string saveFileName,JASSCPP::string newLevel,JASSCPP::boolean doScoreScreen)
{
    SaveGame(saveFileName);
    ChangeLevel(newLevel, doScoreScreen);
}
void SaveAndLoadGameBJ(JASSCPP::string saveFileName,JASSCPP::string loadFileName,JASSCPP::boolean doScoreScreen)
{
    SaveGame(saveFileName);
    LoadGame(loadFileName, doScoreScreen);
}
JASSCPP::boolean RenameSaveDirectoryBJ(JASSCPP::string sourceDirName,JASSCPP::string destDirName)
{
    return RenameSaveDirectory(sourceDirName, destDirName);
}
JASSCPP::boolean RemoveSaveDirectoryBJ(JASSCPP::string sourceDirName)
{
    return RemoveSaveDirectory(sourceDirName);
}
JASSCPP::boolean CopySaveGameBJ(JASSCPP::string sourceSaveName,JASSCPP::string destSaveName)
{
    return CopySaveGame(sourceSaveName, destSaveName);
}
JASSCPP::real GetPlayerStartLocationX(JASSCPP::player whichPlayer)
{
    return GetStartLocationX(GetPlayerStartLocation(whichPlayer));
}
JASSCPP::real GetPlayerStartLocationY(JASSCPP::player whichPlayer)
{
    return GetStartLocationY(GetPlayerStartLocation(whichPlayer));
}
JASSCPP::location GetPlayerStartLocationLoc(JASSCPP::player whichPlayer)
{
    return GetStartLocationLoc(GetPlayerStartLocation(whichPlayer));
}
JASSCPP::location GetRectCenter(JASSCPP::rect whichRect)
{
    return Location(GetRectCenterX(whichRect), GetRectCenterY(whichRect));
}
JASSCPP::boolean IsPlayerSlotState(JASSCPP::player whichPlayer,JASSCPP::playerslotstate whichState)
{
    return GetPlayerSlotState(whichPlayer) == whichState;
}
JASSCPP::integer GetFadeFromSeconds(JASSCPP::real seconds)
{
    if (seconds != 0)
    {
        return 128 / seconds;
    }
    else
    {
        return 10000;
    }
}
void AdjustPlayerStateSimpleBJ(JASSCPP::player whichPlayer,JASSCPP::playerstate whichPlayerState,JASSCPP::integer delta)
{
    SetPlayerState(whichPlayer, whichPlayerState, GetPlayerState(whichPlayer, whichPlayerState) + delta);
}
void AdjustPlayerStateBJ(JASSCPP::integer delta,JASSCPP::player whichPlayer,JASSCPP::playerstate whichPlayerState)
{
    if (delta > 0)
    {
        if (whichPlayerState == PLAYER_STATE_RESOURCE_GOLD)
        {
            AdjustPlayerStateSimpleBJ(whichPlayer, PLAYER_STATE_GOLD_GATHERED, delta);
        }
         else if (whichPlayerState == PLAYER_STATE_RESOURCE_LUMBER)
        {
            AdjustPlayerStateSimpleBJ(whichPlayer, PLAYER_STATE_LUMBER_GATHERED, delta);
        }
    }
    AdjustPlayerStateSimpleBJ(whichPlayer, whichPlayerState, delta);
}
void SetPlayerStateBJ(JASSCPP::player whichPlayer,JASSCPP::playerstate whichPlayerState,JASSCPP::integer value)
{
    JASSCPP::integer oldValue = GetPlayerState(whichPlayer, whichPlayerState);
    AdjustPlayerStateBJ(value - oldValue, whichPlayer, whichPlayerState);
}
void SetPlayerFlagBJ(JASSCPP::playerstate whichPlayerFlag,JASSCPP::boolean flag,JASSCPP::player whichPlayer)
{
    SetPlayerState(whichPlayer, whichPlayerFlag, IntegerTertiaryOp(flag, 1, 0));
}
JASSCPP::boolean IsPlayerFlagSetBJ(JASSCPP::playerstate whichPlayerFlag,JASSCPP::player whichPlayer)
{
    return GetPlayerState(whichPlayer, whichPlayerFlag) == 1;
}
void AddResourceAmountBJ(JASSCPP::integer delta,JASSCPP::unit whichUnit)
{
    AddResourceAmount(whichUnit, delta);
}
JASSCPP::integer GetConvertedPlayerId(JASSCPP::player whichPlayer)
{
    return GetPlayerId(whichPlayer) + 1;
}
JASSCPP::player ConvertedPlayer(JASSCPP::integer convertedPlayerId)
{
    return Player(convertedPlayerId - 1);
}
JASSCPP::real GetRectWidthBJ(JASSCPP::rect r)
{
    return GetRectMaxX(r) - GetRectMinX(r);
}
JASSCPP::real GetRectHeightBJ(JASSCPP::rect r)
{
    return GetRectMaxY(r) - GetRectMinY(r);
}
JASSCPP::unit BlightGoldMineForPlayerBJ(JASSCPP::unit goldMine,JASSCPP::player whichPlayer)
{
    JASSCPP::real mineX;
    JASSCPP::real mineY;
    JASSCPP::integer mineGold;
    JASSCPP::unit newMine;
    if (GetUnitTypeId(goldMine) != 'ngol')
    {
        return null;
    }
    // Save the Gold Mine's properties and remove it.
    mineX    = GetUnitX(goldMine);
    mineY    = GetUnitY(goldMine);
    mineGold = GetResourceAmount(goldMine);
    RemoveUnit(goldMine);
    // Create a Haunted Gold Mine to replace the Gold Mine.
    newMine = CreateBlightedGoldmine(whichPlayer, mineX, mineY, bj_UNIT_FACING);
    SetResourceAmount(newMine, mineGold);
    return newMine;
}
JASSCPP::unit BlightGoldMineForPlayer(JASSCPP::unit goldMine,JASSCPP::player whichPlayer)
{
    bj_lastHauntedGoldMine = BlightGoldMineForPlayerBJ(goldMine, whichPlayer);
    return bj_lastHauntedGoldMine;
}
JASSCPP::unit GetLastHauntedGoldMine()
{
    return bj_lastHauntedGoldMine;
}
void SetPlayerColorBJEnum()
{
    SetUnitColor(GetEnumUnit(), bj_setPlayerTargetColor);
}
void SetPlayerColorBJ(JASSCPP::player whichPlayer,JASSCPP::playercolor color,JASSCPP::boolean changeExisting)
{
    JASSCPP::group g;
    SetPlayerColor(whichPlayer, color);
    if (changeExisting)
    {
        bj_setPlayerTargetColor = color;
        g = CreateGroup();
        GroupEnumUnitsOfPlayer(g, whichPlayer, null);
        ForGroup(g, function SetPlayerColorBJEnum);
        DestroyGroup(g);
    }
}
void SetPlayerUnitAvailableBJ(JASSCPP::integer unitId,JASSCPP::boolean allowed,JASSCPP::player whichPlayer)
{
    if (allowed)
    {
        SetPlayerTechMaxAllowed(whichPlayer, unitId, -1);
    }
    else
    {
        SetPlayerTechMaxAllowed(whichPlayer, unitId, 0);
    }
}
void LockGameSpeedBJ()
{
    SetMapFlag(MAP_LOCK_SPEED, true);
}
void UnlockGameSpeedBJ()
{
    SetMapFlag(MAP_LOCK_SPEED, false);
}
JASSCPP::boolean IssueTargetOrderBJ(JASSCPP::unit whichUnit,JASSCPP::string order,JASSCPP::widget targetWidget)
{
    return IssueTargetOrder( whichUnit, order, targetWidget );
}
JASSCPP::boolean IssuePointOrderLocBJ(JASSCPP::unit whichUnit,JASSCPP::string order,JASSCPP::location whichLocation)
{
    return IssuePointOrderLoc( whichUnit, order, whichLocation );
}
JASSCPP::boolean IssueTargetDestructableOrder(JASSCPP::unit whichUnit,JASSCPP::string order,JASSCPP::widget targetWidget)
{
    return IssueTargetOrder( whichUnit, order, targetWidget );
}
JASSCPP::boolean IssueImmediateOrderBJ(JASSCPP::unit whichUnit,JASSCPP::string order)
{
    return IssueImmediateOrder( whichUnit, order );
}
JASSCPP::boolean GroupTargetOrderBJ(JASSCPP::group whichGroup,JASSCPP::string order,JASSCPP::widget targetWidget)
{
    return GroupTargetOrder( whichGroup, order, targetWidget );
}
JASSCPP::boolean GroupPointOrderLocBJ(JASSCPP::group whichGroup,JASSCPP::string order,JASSCPP::location whichLocation)
{
    return GroupPointOrderLoc( whichGroup, order, whichLocation );
}
JASSCPP::boolean GroupImmediateOrderBJ(JASSCPP::group whichGroup,JASSCPP::string order)
{
    return GroupImmediateOrder( whichGroup, order );
}
JASSCPP::boolean GroupTargetDestructableOrder(JASSCPP::group whichGroup,JASSCPP::string order,JASSCPP::widget targetWidget)
{
    return GroupTargetOrder( whichGroup, order, targetWidget );
}
JASSCPP::destructable GetDyingDestructable()
{
    return GetTriggerWidget();
}
void SaveDyingWidget()
{
    bj_lastDyingWidget = GetTriggerWidget();
}
void SetBlightRectBJ(JASSCPP::boolean addBlight,JASSCPP::player whichPlayer,JASSCPP::rect r)
{
    SetBlightRect(whichPlayer, r, addBlight);
}
void SetBlightRadiusLocBJ(JASSCPP::boolean addBlight,JASSCPP::player whichPlayer,JASSCPP::location loc,JASSCPP::real radius)
{
    SetBlightLoc(whichPlayer, loc, radius, addBlight);
}
void MeleeStartingVisibility()
{
    SetFloatGameState(GAME_STATE_TIME_OF_DAY, bj_MELEE_STARTING_TOD);
    // call FogMaskEnable(true)
    // call FogEnable(true)
}
void MeleeStartingResources()
{
    JASSCPP::integer index;
    JASSCPP::player indexPlayer;
    JASSCPP::version v;
    JASSCPP::integer startingGold;
    JASSCPP::integer startingLumber;
    v = VersionGet();
    if (v == VERSION_REIGN_OF_CHAOS)
    {
        startingGold = bj_MELEE_STARTING_GOLD_V0;
        startingLumber = bj_MELEE_STARTING_LUMBER_V0;
    }
    else
    {
        startingGold = bj_MELEE_STARTING_GOLD_V1;
        startingLumber = bj_MELEE_STARTING_LUMBER_V1;
    }
    // Set each player's starting resources.
    index = 0;
    while (true)
    {
        indexPlayer = Player(index);
        if (GetPlayerSlotState(indexPlayer) == PLAYER_SLOT_STATE_PLAYING)
        {
            SetPlayerState(indexPlayer, PLAYER_STATE_RESOURCE_GOLD, startingGold);
            SetPlayerState(indexPlayer, PLAYER_STATE_RESOURCE_LUMBER, startingLumber);
        }
        index = index + 1;
        if (index == bj_MAX_PLAYERS) break;
    }
}
void ReducePlayerTechMaxAllowed(JASSCPP::player whichPlayer,JASSCPP::integer techId,JASSCPP::integer limit)
{
    JASSCPP::integer oldMax = GetPlayerTechMaxAllowed(whichPlayer, techId);
    if (oldMax < 0 || oldMax > limit)
    {
        SetPlayerTechMaxAllowed(whichPlayer, techId, limit);
    }
}
void MeleeStartingHeroLimit()
{
    JASSCPP::integer index;
    index = 0;
    while (true)
    {
        // max heroes per player
        SetPlayerMaxHeroesAllowed(bj_MELEE_HERO_LIMIT, Player(index));
        // each player is restricted to a limit per hero type as well
        ReducePlayerTechMaxAllowed(Player(index), 'Hamg', bj_MELEE_HERO_TYPE_LIMIT);
        ReducePlayerTechMaxAllowed(Player(index), 'Hmkg', bj_MELEE_HERO_TYPE_LIMIT);
        ReducePlayerTechMaxAllowed(Player(index), 'Hpal', bj_MELEE_HERO_TYPE_LIMIT);
        ReducePlayerTechMaxAllowed(Player(index), 'Hblm', bj_MELEE_HERO_TYPE_LIMIT);
        ReducePlayerTechMaxAllowed(Player(index), 'Obla', bj_MELEE_HERO_TYPE_LIMIT);
        ReducePlayerTechMaxAllowed(Player(index), 'Ofar', bj_MELEE_HERO_TYPE_LIMIT);
        ReducePlayerTechMaxAllowed(Player(index), 'Otch', bj_MELEE_HERO_TYPE_LIMIT);
        ReducePlayerTechMaxAllowed(Player(index), 'Oshd', bj_MELEE_HERO_TYPE_LIMIT);
        ReducePlayerTechMaxAllowed(Player(index), 'Edem', bj_MELEE_HERO_TYPE_LIMIT);
        ReducePlayerTechMaxAllowed(Player(index), 'Ekee', bj_MELEE_HERO_TYPE_LIMIT);
        ReducePlayerTechMaxAllowed(Player(index), 'Emoo', bj_MELEE_HERO_TYPE_LIMIT);
        ReducePlayerTechMaxAllowed(Player(index), 'Ewar', bj_MELEE_HERO_TYPE_LIMIT);
        ReducePlayerTechMaxAllowed(Player(index), 'Udea', bj_MELEE_HERO_TYPE_LIMIT);
        ReducePlayerTechMaxAllowed(Player(index), 'Udre', bj_MELEE_HERO_TYPE_LIMIT);
        ReducePlayerTechMaxAllowed(Player(index), 'Ulic', bj_MELEE_HERO_TYPE_LIMIT);
        ReducePlayerTechMaxAllowed(Player(index), 'Ucrl', bj_MELEE_HERO_TYPE_LIMIT);
        ReducePlayerTechMaxAllowed(Player(index), 'Npbm', bj_MELEE_HERO_TYPE_LIMIT);
        ReducePlayerTechMaxAllowed(Player(index), 'Nbrn', bj_MELEE_HERO_TYPE_LIMIT);
        ReducePlayerTechMaxAllowed(Player(index), 'Nngs', bj_MELEE_HERO_TYPE_LIMIT);
        ReducePlayerTechMaxAllowed(Player(index), 'Nplh', bj_MELEE_HERO_TYPE_LIMIT);
        ReducePlayerTechMaxAllowed(Player(index), 'Nbst', bj_MELEE_HERO_TYPE_LIMIT);
        index = index + 1;
        if (index == bj_MAX_PLAYERS) break;
    }
}
JASSCPP::boolean MeleeTrainedUnitIsHeroBJFilter()
{
    return IsUnitType(GetFilterUnit(), UNIT_TYPE_HERO);
}
void MeleeGrantItemsToHero(JASSCPP::unit whichUnit)
{
    JASSCPP::integer owner = GetPlayerId(GetOwningPlayer(whichUnit));
    if (bj_meleeTwinkedHeroes[owner] < bj_MELEE_MAX_TWINKED_HEROES)
    {
        UnitAddItemById(whichUnit, 'stwp');
        bj_meleeTwinkedHeroes[owner] = bj_meleeTwinkedHeroes[owner] + 1;
    }
}
void MeleeGrantItemsToTrainedHero()
{
    MeleeGrantItemsToHero(GetTrainedUnit());
}
void MeleeGrantItemsToHiredHero()
{
    MeleeGrantItemsToHero(GetSoldUnit());
}
void MeleeGrantHeroItems()
{
    JASSCPP::integer index;
    JASSCPP::trigger trig;
    index = 0;
    while (true)
    {
        bj_meleeTwinkedHeroes[index] = 0;
        index = index + 1;
        if (index == bj_MAX_PLAYER_SLOTS) break;
    }
    // Register for an event whenever a hero is trained, so that we can give
    // him/her their starting items.
    index = 0;
    while (true)
    {
        trig = CreateTrigger();
        TriggerRegisterPlayerUnitEvent(trig, Player(index), EVENT_PLAYER_UNIT_TRAIN_FINISH, filterMeleeTrainedUnitIsHeroBJ);
        TriggerAddAction(trig, function MeleeGrantItemsToTrainedHero);
        index = index + 1;
        if (index == bj_MAX_PLAYERS) break;
    }
    // Register for an event whenever a neutral hero is hired, so that we
    // can give him/her their starting items.
    trig = CreateTrigger();
    TriggerRegisterPlayerUnitEvent(trig, Player(PLAYER_NEUTRAL_PASSIVE), EVENT_PLAYER_UNIT_SELL, filterMeleeTrainedUnitIsHeroBJ);
    TriggerAddAction(trig, function MeleeGrantItemsToHiredHero);
    // Flag that we are giving starting items to heroes, so that the melee
    // starting units code can create them as necessary.
    bj_meleeGrantHeroItems = true;
}
void MeleeClearExcessUnit()
{
    JASSCPP::unit theUnit = GetEnumUnit();
    JASSCPP::integer owner = GetPlayerId(GetOwningPlayer(theUnit));
    if (owner == PLAYER_NEUTRAL_AGGRESSIVE)
    {
        // Remove any Neutral Hostile units from the area.
        RemoveUnit(GetEnumUnit());
    }
     else if (owner == PLAYER_NEUTRAL_PASSIVE)
    {
        // Remove non-structure Neutral Passive units from the area.
        if (!IsUnitType(theUnit, UNIT_TYPE_STRUCTURE))
        {
            RemoveUnit(GetEnumUnit());
        }
    }
}
void MeleeClearNearbyUnits(JASSCPP::real x,JASSCPP::real y,JASSCPP::real range)
{
    JASSCPP::group nearbyUnits;
    nearbyUnits = CreateGroup();
    GroupEnumUnitsInRange(nearbyUnits, x, y, range, null);
    ForGroup(nearbyUnits, function MeleeClearExcessUnit);
    DestroyGroup(nearbyUnits);
}
void MeleeClearExcessUnits()
{
    JASSCPP::integer index;
    JASSCPP::real locX;
    JASSCPP::real locY;
    JASSCPP::player indexPlayer;
    index = 0;
    while (true)
    {
        indexPlayer = Player(index);
        // If the player slot is being used, clear any nearby creeps.
        if (GetPlayerSlotState(indexPlayer) == PLAYER_SLOT_STATE_PLAYING)
        {
            locX = GetStartLocationX(GetPlayerStartLocation(indexPlayer));
            locY = GetStartLocationY(GetPlayerStartLocation(indexPlayer));
            MeleeClearNearbyUnits(locX, locY, bj_MELEE_CLEAR_UNITS_RADIUS);
        }
        index = index + 1;
        if (index == bj_MAX_PLAYERS) break;
    }
}
void MeleeEnumFindNearestMine()
{
    JASSCPP::unit enumUnit = GetEnumUnit();
    JASSCPP::real dist;
    JASSCPP::location unitLoc;
    if (GetUnitTypeId(enumUnit) == 'ngol')
    {
        unitLoc = GetUnitLoc(enumUnit);
        dist = DistanceBetweenPoints(unitLoc, bj_meleeNearestMineToLoc);
        RemoveLocation(unitLoc);
        // If this is our first mine, or the closest thusfar, use it instead.
        if ((bj_meleeNearestMineDist < 0) || (dist < bj_meleeNearestMineDist))
        {
            bj_meleeNearestMine = enumUnit;
            bj_meleeNearestMineDist = dist;
        }
    }
}
JASSCPP::unit MeleeFindNearestMine(JASSCPP::location src,JASSCPP::real range)
{
    JASSCPP::group nearbyMines;
    bj_meleeNearestMine = null;
    bj_meleeNearestMineDist = -1;
    bj_meleeNearestMineToLoc = src;
    nearbyMines = CreateGroup();
    GroupEnumUnitsInRangeOfLoc(nearbyMines, src, range, null);
    ForGroup(nearbyMines, function MeleeEnumFindNearestMine);
    DestroyGroup(nearbyMines);
    return bj_meleeNearestMine;
}
JASSCPP::unit MeleeRandomHeroLoc(JASSCPP::player p,JASSCPP::integer id1,JASSCPP::integer id2,JASSCPP::integer id3,JASSCPP::integer id4,JASSCPP::location loc)
{
    JASSCPP::unit hero = null;
    JASSCPP::integer roll;
    JASSCPP::integer pick;
    JASSCPP::version v;
    v = VersionGet();
    if (v == VERSION_REIGN_OF_CHAOS)
    {
        roll = GetRandomInt(1,3);
    }
    else
    {
        roll = GetRandomInt(1,4);
    }
    // Translate the roll into a unitid.
    if (roll == 1)
    {
        pick = id1;
    }
     else if (roll == 2)
    {
        pick = id2;
    }
     else if (roll == 3)
    {
        pick = id3;
    }
     else if (roll == 4)
    {
        pick = id4;
    }
    else
    {
        // Unrecognized id index - pick the first hero in the list.
        pick = id1;
    }
    // Create the hero.
    hero = CreateUnitAtLoc(p, pick, loc, bj_UNIT_FACING);
    if (bj_meleeGrantHeroItems)
    {
        MeleeGrantItemsToHero(hero);
    }
    return hero;
}
JASSCPP::location MeleeGetProjectedLoc(JASSCPP::location src,JASSCPP::location targ,JASSCPP::real distance,JASSCPP::real deltaAngle)
{
    JASSCPP::real srcX = GetLocationX(src);
    JASSCPP::real srcY = GetLocationY(src);
    JASSCPP::real direction = Atan2(GetLocationY(targ) - srcY, GetLocationX(targ) - srcX) + deltaAngle;
    return Location(srcX + distance * Cos(direction), srcY + distance * Sin(direction));
}
JASSCPP::real MeleeGetNearestValueWithin(JASSCPP::real val,JASSCPP::real minVal,JASSCPP::real maxVal)
{
    if (val < minVal)
    {
        return minVal;
    }
     else if (val > maxVal)
    {
        return maxVal;
    }
    else
    {
        return val;
    }
}
JASSCPP::location MeleeGetLocWithinRect(JASSCPP::location src,JASSCPP::rect r)
{
    JASSCPP::real withinX = MeleeGetNearestValueWithin(GetLocationX(src), GetRectMinX(r), GetRectMaxX(r));
    JASSCPP::real withinY = MeleeGetNearestValueWithin(GetLocationY(src), GetRectMinY(r), GetRectMaxY(r));
    return Location(withinX, withinY);
}
void MeleeStartingUnitsHuman(JASSCPP::player whichPlayer,JASSCPP::location startLoc,JASSCPP::boolean doHeroes,JASSCPP::boolean doCamera,JASSCPP::boolean doPreload)
{
    JASSCPP::boolean useRandomHero = IsMapFlagSet(MAP_RANDOM_HERO);
    JASSCPP::real unitSpacing = 64.00;
    JASSCPP::unit nearestMine;
    JASSCPP::location nearMineLoc;
    JASSCPP::location heroLoc;
    JASSCPP::real peonX;
    JASSCPP::real peonY;
    if (doPreload)
    {
        Preloader( "scripts\\HumanMelee.pld" );
    }
    nearestMine = MeleeFindNearestMine(startLoc, bj_MELEE_MINE_SEARCH_RADIUS);
    if (nearestMine != null)
    {
        // Spawn Town Hall at the start location.
        CreateUnitAtLoc(whichPlayer, 'htow', startLoc, bj_UNIT_FACING);
        // Spawn Peasants near the mine.
        nearMineLoc = MeleeGetProjectedLoc(GetUnitLoc(nearestMine), startLoc, 320, 0);
        peonX = GetLocationX(nearMineLoc);
        peonY = GetLocationY(nearMineLoc);
        CreateUnit(whichPlayer, 'hpea', peonX + 0.00 * unitSpacing, peonY + 1.00 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'hpea', peonX + 1.00 * unitSpacing, peonY + 0.15 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'hpea', peonX - 1.00 * unitSpacing, peonY + 0.15 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'hpea', peonX + 0.60 * unitSpacing, peonY - 1.00 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'hpea', peonX - 0.60 * unitSpacing, peonY - 1.00 * unitSpacing, bj_UNIT_FACING);
        // Set random hero spawn point to be off to the side of the start location.
        heroLoc = MeleeGetProjectedLoc(GetUnitLoc(nearestMine), startLoc, 384, 45);
    }
    else
    {
        // Spawn Town Hall at the start location.
        CreateUnitAtLoc(whichPlayer, 'htow', startLoc, bj_UNIT_FACING);
        // Spawn Peasants directly south of the town hall.
        peonX = GetLocationX(startLoc);
        peonY = GetLocationY(startLoc) - 224.00;
        CreateUnit(whichPlayer, 'hpea', peonX + 2.00 * unitSpacing, peonY + 0.00 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'hpea', peonX + 1.00 * unitSpacing, peonY + 0.00 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'hpea', peonX + 0.00 * unitSpacing, peonY + 0.00 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'hpea', peonX - 1.00 * unitSpacing, peonY + 0.00 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'hpea', peonX - 2.00 * unitSpacing, peonY + 0.00 * unitSpacing, bj_UNIT_FACING);
        // Set random hero spawn point to be just south of the start location.
        heroLoc = Location(peonX, peonY - 2.00 * unitSpacing);
    }
    if (doHeroes)
    {
        // If the "Random Hero" option is set, start the player with a random hero.
        // Otherwise, give them a "free hero" token.
        if (useRandomHero)
        {
            MeleeRandomHeroLoc(whichPlayer, 'Hamg', 'Hmkg', 'Hpal', 'Hblm', heroLoc);
        }
        else
        {
            SetPlayerState(whichPlayer, PLAYER_STATE_RESOURCE_HERO_TOKENS, bj_MELEE_STARTING_HERO_TOKENS);
        }
    }
    if (doCamera)
    {
        // Center the camera on the initial Peasants.
        SetCameraPositionForPlayer(whichPlayer, peonX, peonY);
        SetCameraQuickPositionForPlayer(whichPlayer, peonX, peonY);
    }
}
void MeleeStartingUnitsOrc(JASSCPP::player whichPlayer,JASSCPP::location startLoc,JASSCPP::boolean doHeroes,JASSCPP::boolean doCamera,JASSCPP::boolean doPreload)
{
    JASSCPP::boolean useRandomHero = IsMapFlagSet(MAP_RANDOM_HERO);
    JASSCPP::real unitSpacing = 64.00;
    JASSCPP::unit nearestMine;
    JASSCPP::location nearMineLoc;
    JASSCPP::location heroLoc;
    JASSCPP::real peonX;
    JASSCPP::real peonY;
    if (doPreload)
    {
        Preloader( "scripts\\OrcMelee.pld" );
    }
    nearestMine = MeleeFindNearestMine(startLoc, bj_MELEE_MINE_SEARCH_RADIUS);
    if (nearestMine != null)
    {
        // Spawn Great Hall at the start location.
        CreateUnitAtLoc(whichPlayer, 'ogre', startLoc, bj_UNIT_FACING);
        // Spawn Peons near the mine.
        nearMineLoc = MeleeGetProjectedLoc(GetUnitLoc(nearestMine), startLoc, 320, 0);
        peonX = GetLocationX(nearMineLoc);
        peonY = GetLocationY(nearMineLoc);
        CreateUnit(whichPlayer, 'opeo', peonX + 0.00 * unitSpacing, peonY + 1.00 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'opeo', peonX + 1.00 * unitSpacing, peonY + 0.15 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'opeo', peonX - 1.00 * unitSpacing, peonY + 0.15 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'opeo', peonX + 0.60 * unitSpacing, peonY - 1.00 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'opeo', peonX - 0.60 * unitSpacing, peonY - 1.00 * unitSpacing, bj_UNIT_FACING);
        // Set random hero spawn point to be off to the side of the start location.
        heroLoc = MeleeGetProjectedLoc(GetUnitLoc(nearestMine), startLoc, 384, 45);
    }
    else
    {
        // Spawn Great Hall at the start location.
        CreateUnitAtLoc(whichPlayer, 'ogre', startLoc, bj_UNIT_FACING);
        // Spawn Peons directly south of the town hall.
        peonX = GetLocationX(startLoc);
        peonY = GetLocationY(startLoc) - 224.00;
        CreateUnit(whichPlayer, 'opeo', peonX + 2.00 * unitSpacing, peonY + 0.00 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'opeo', peonX + 1.00 * unitSpacing, peonY + 0.00 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'opeo', peonX + 0.00 * unitSpacing, peonY + 0.00 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'opeo', peonX - 1.00 * unitSpacing, peonY + 0.00 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'opeo', peonX - 2.00 * unitSpacing, peonY + 0.00 * unitSpacing, bj_UNIT_FACING);
        // Set random hero spawn point to be just south of the start location.
        heroLoc = Location(peonX, peonY - 2.00 * unitSpacing);
    }
    if (doHeroes)
    {
        // If the "Random Hero" option is set, start the player with a random hero.
        // Otherwise, give them a "free hero" token.
        if (useRandomHero)
        {
            MeleeRandomHeroLoc(whichPlayer, 'Obla', 'Ofar', 'Otch', 'Oshd', heroLoc);
        }
        else
        {
            SetPlayerState(whichPlayer, PLAYER_STATE_RESOURCE_HERO_TOKENS, bj_MELEE_STARTING_HERO_TOKENS);
        }
    }
    if (doCamera)
    {
        // Center the camera on the initial Peons.
        SetCameraPositionForPlayer(whichPlayer, peonX, peonY);
        SetCameraQuickPositionForPlayer(whichPlayer, peonX, peonY);
    }
}
void MeleeStartingUnitsUndead(JASSCPP::player whichPlayer,JASSCPP::location startLoc,JASSCPP::boolean doHeroes,JASSCPP::boolean doCamera,JASSCPP::boolean doPreload)
{
    JASSCPP::boolean useRandomHero = IsMapFlagSet(MAP_RANDOM_HERO);
    JASSCPP::real unitSpacing = 64.00;
    JASSCPP::unit nearestMine;
    JASSCPP::location nearMineLoc;
    JASSCPP::location nearTownLoc;
    JASSCPP::location heroLoc;
    JASSCPP::real peonX;
    JASSCPP::real peonY;
    JASSCPP::real ghoulX;
    JASSCPP::real ghoulY;
    if (doPreload)
    {
        Preloader( "scripts\\UndeadMelee.pld" );
    }
    nearestMine = MeleeFindNearestMine(startLoc, bj_MELEE_MINE_SEARCH_RADIUS);
    if (nearestMine != null)
    {
        // Spawn Necropolis at the start location.
        CreateUnitAtLoc(whichPlayer, 'unpl', startLoc, bj_UNIT_FACING);
        // Replace the nearest gold mine with a blighted version.
        nearestMine = BlightGoldMineForPlayerBJ(nearestMine, whichPlayer);
        // Spawn Ghoul near the Necropolis.
        nearTownLoc = MeleeGetProjectedLoc(startLoc, GetUnitLoc(nearestMine), 288, 0);
        ghoulX = GetLocationX(nearTownLoc);
        ghoulY = GetLocationY(nearTownLoc);
        bj_ghoul[GetPlayerId(whichPlayer)] = CreateUnit(whichPlayer, 'ugho', ghoulX + 0.00 * unitSpacing, ghoulY + 0.00 * unitSpacing, bj_UNIT_FACING);
        // Spawn Acolytes near the mine.
        nearMineLoc = MeleeGetProjectedLoc(GetUnitLoc(nearestMine), startLoc, 320, 0);
        peonX = GetLocationX(nearMineLoc);
        peonY = GetLocationY(nearMineLoc);
        CreateUnit(whichPlayer, 'uaco', peonX + 0.00 * unitSpacing, peonY + 0.50 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'uaco', peonX + 0.65 * unitSpacing, peonY - 0.50 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'uaco', peonX - 0.65 * unitSpacing, peonY - 0.50 * unitSpacing, bj_UNIT_FACING);
        // Create a patch of blight around the gold mine.
        SetBlightLoc(whichPlayer,nearMineLoc, 768, true);
        // Set random hero spawn point to be off to the side of the start location.
        heroLoc = MeleeGetProjectedLoc(GetUnitLoc(nearestMine), startLoc, 384, 45);
    }
    else
    {
        // Spawn Necropolis at the start location.
        CreateUnitAtLoc(whichPlayer, 'unpl', startLoc, bj_UNIT_FACING);
        // Spawn Acolytes and Ghoul directly south of the Necropolis.
        peonX = GetLocationX(startLoc);
        peonY = GetLocationY(startLoc) - 224.00;
        CreateUnit(whichPlayer, 'uaco', peonX - 1.50 * unitSpacing, peonY + 0.00 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'uaco', peonX - 0.50 * unitSpacing, peonY + 0.00 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'uaco', peonX + 0.50 * unitSpacing, peonY + 0.00 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'ugho', peonX + 1.50 * unitSpacing, peonY + 0.00 * unitSpacing, bj_UNIT_FACING);
        // Create a patch of blight around the start location.
        SetBlightLoc(whichPlayer,startLoc, 768, true);
        // Set random hero spawn point to be just south of the start location.
        heroLoc = Location(peonX, peonY - 2.00 * unitSpacing);
    }
    if (doHeroes)
    {
        // If the "Random Hero" option is set, start the player with a random hero.
        // Otherwise, give them a "free hero" token.
        if (useRandomHero)
        {
            MeleeRandomHeroLoc(whichPlayer, 'Udea', 'Udre', 'Ulic', 'Ucrl', heroLoc);
        }
        else
        {
            SetPlayerState(whichPlayer, PLAYER_STATE_RESOURCE_HERO_TOKENS, bj_MELEE_STARTING_HERO_TOKENS);
        }
    }
    if (doCamera)
    {
        // Center the camera on the initial Acolytes.
        SetCameraPositionForPlayer(whichPlayer, peonX, peonY);
        SetCameraQuickPositionForPlayer(whichPlayer, peonX, peonY);
    }
}
void MeleeStartingUnitsNightElf(JASSCPP::player whichPlayer,JASSCPP::location startLoc,JASSCPP::boolean doHeroes,JASSCPP::boolean doCamera,JASSCPP::boolean doPreload)
{
    JASSCPP::boolean useRandomHero = IsMapFlagSet(MAP_RANDOM_HERO);
    JASSCPP::real unitSpacing = 64.00;
    JASSCPP::real minTreeDist = 3.50 * bj_CELLWIDTH;
    JASSCPP::real minWispDist = 1.75 * bj_CELLWIDTH;
    JASSCPP::unit nearestMine;
    JASSCPP::location nearMineLoc;
    JASSCPP::location wispLoc;
    JASSCPP::location heroLoc;
    JASSCPP::real peonX;
    JASSCPP::real peonY;
    JASSCPP::unit tree;
    if (doPreload)
    {
        Preloader( "scripts\\NightElfMelee.pld" );
    }
    nearestMine = MeleeFindNearestMine(startLoc, bj_MELEE_MINE_SEARCH_RADIUS);
    if (nearestMine != null)
    {
        // Spawn Tree of Life near the mine and have it entangle the mine.
        // Project the Tree's coordinates from the gold mine, and then snap
        // the X and Y values to within minTreeDist of the Gold Mine.
        nearMineLoc = MeleeGetProjectedLoc(GetUnitLoc(nearestMine), startLoc, 650, 0);
        nearMineLoc = MeleeGetLocWithinRect(nearMineLoc, GetRectFromCircleBJ(GetUnitLoc(nearestMine), minTreeDist));
        tree = CreateUnitAtLoc(whichPlayer, 'etol', nearMineLoc, bj_UNIT_FACING);
        IssueTargetOrder(tree, "entangleinstant", nearestMine);
        // Spawn Wisps at the start location.
        wispLoc = MeleeGetProjectedLoc(GetUnitLoc(nearestMine), startLoc, 320, 0);
        wispLoc = MeleeGetLocWithinRect(wispLoc, GetRectFromCircleBJ(GetUnitLoc(nearestMine), minWispDist));
        peonX = GetLocationX(wispLoc);
        peonY = GetLocationY(wispLoc);
        CreateUnit(whichPlayer, 'ewsp', peonX + 0.00 * unitSpacing, peonY + 1.00 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'ewsp', peonX + 1.00 * unitSpacing, peonY + 0.15 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'ewsp', peonX - 1.00 * unitSpacing, peonY + 0.15 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'ewsp', peonX + 0.58 * unitSpacing, peonY - 1.00 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'ewsp', peonX - 0.58 * unitSpacing, peonY - 1.00 * unitSpacing, bj_UNIT_FACING);
        // Set random hero spawn point to be off to the side of the start location.
        heroLoc = MeleeGetProjectedLoc(GetUnitLoc(nearestMine), startLoc, 384, 45);
    }
    else
    {
        // Spawn Tree of Life at the start location.
        CreateUnitAtLoc(whichPlayer, 'etol', startLoc, bj_UNIT_FACING);
        // Spawn Wisps directly south of the town hall.
        peonX = GetLocationX(startLoc);
        peonY = GetLocationY(startLoc) - 224.00;
        CreateUnit(whichPlayer, 'ewsp', peonX - 2.00 * unitSpacing, peonY + 0.00 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'ewsp', peonX - 1.00 * unitSpacing, peonY + 0.00 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'ewsp', peonX + 0.00 * unitSpacing, peonY + 0.00 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'ewsp', peonX + 1.00 * unitSpacing, peonY + 0.00 * unitSpacing, bj_UNIT_FACING);
        CreateUnit(whichPlayer, 'ewsp', peonX + 2.00 * unitSpacing, peonY + 0.00 * unitSpacing, bj_UNIT_FACING);
        // Set random hero spawn point to be just south of the start location.
        heroLoc = Location(peonX, peonY - 2.00 * unitSpacing);
    }
    if (doHeroes)
    {
        // If the "Random Hero" option is set, start the player with a random hero.
        // Otherwise, give them a "free hero" token.
        if (useRandomHero)
        {
            MeleeRandomHeroLoc(whichPlayer, 'Edem', 'Ekee', 'Emoo', 'Ewar', heroLoc);
        }
        else
        {
            SetPlayerState(whichPlayer, PLAYER_STATE_RESOURCE_HERO_TOKENS, bj_MELEE_STARTING_HERO_TOKENS);
        }
    }
    if (doCamera)
    {
        // Center the camera on the initial Wisps.
        SetCameraPositionForPlayer(whichPlayer, peonX, peonY);
        SetCameraQuickPositionForPlayer(whichPlayer, peonX, peonY);
    }
}
void MeleeStartingUnitsUnknownRace(JASSCPP::player whichPlayer,JASSCPP::location startLoc,JASSCPP::boolean doHeroes,JASSCPP::boolean doCamera,JASSCPP::boolean doPreload)
{
    JASSCPP::integer index;
    if (doPreload)
    {
    }
    index = 0;
    while (true)
    {
        CreateUnit(whichPlayer, 'nshe', GetLocationX(startLoc) + GetRandomReal(-256, 256), GetLocationY(startLoc) + GetRandomReal(-256, 256), GetRandomReal(0, 360));
        index = index + 1;
        if (index == 12) break;
    }
    if (doHeroes)
    {
        // Give them a "free hero" token, out of pity.
        SetPlayerState(whichPlayer, PLAYER_STATE_RESOURCE_HERO_TOKENS, bj_MELEE_STARTING_HERO_TOKENS);
    }
    if (doCamera)
    {
        // Center the camera on the initial sheep.
        SetCameraPositionLocForPlayer(whichPlayer, startLoc);
        SetCameraQuickPositionLocForPlayer(whichPlayer, startLoc);
    }
}
void MeleeStartingUnits()
{
    JASSCPP::integer index;
    JASSCPP::player indexPlayer;
    JASSCPP::location indexStartLoc;
    JASSCPP::race indexRace;
    Preloader( "scripts\\SharedMelee.pld" );
    index = 0;
    while (true)
    {
        indexPlayer = Player(index);
        if (GetPlayerSlotState(indexPlayer) == PLAYER_SLOT_STATE_PLAYING)
        {
            indexStartLoc = GetStartLocationLoc(GetPlayerStartLocation(indexPlayer));
            indexRace = GetPlayerRace(indexPlayer);
            // Create initial race-specific starting units
            if (indexRace == RACE_HUMAN)
            {
                MeleeStartingUnitsHuman(indexPlayer, indexStartLoc, true, true, true);
            }
             else if (indexRace == RACE_ORC)
            {
                MeleeStartingUnitsOrc(indexPlayer, indexStartLoc, true, true, true);
            }
             else if (indexRace == RACE_UNDEAD)
            {
                MeleeStartingUnitsUndead(indexPlayer, indexStartLoc, true, true, true);
            }
             else if (indexRace == RACE_NIGHTELF)
            {
                MeleeStartingUnitsNightElf(indexPlayer, indexStartLoc, true, true, true);
            }
            else
            {
                MeleeStartingUnitsUnknownRace(indexPlayer, indexStartLoc, true, true, true);
            }
        }
        index = index + 1;
        if (index == bj_MAX_PLAYERS) break;
    }
}
void MeleeStartingUnitsForPlayer(JASSCPP::race whichRace,JASSCPP::player whichPlayer,JASSCPP::location loc,JASSCPP::boolean doHeroes)
{
    if (whichRace == RACE_HUMAN)
    {
        MeleeStartingUnitsHuman(whichPlayer, loc, doHeroes, false, false);
    }
     else if (whichRace == RACE_ORC)
    {
        MeleeStartingUnitsOrc(whichPlayer, loc, doHeroes, false, false);
    }
     else if (whichRace == RACE_UNDEAD)
    {
        MeleeStartingUnitsUndead(whichPlayer, loc, doHeroes, false, false);
    }
     else if (whichRace == RACE_NIGHTELF)
    {
        MeleeStartingUnitsNightElf(whichPlayer, loc, doHeroes, false, false);
    }
    else
    {
        // Unrecognized race - ignore the request.
    }
}
void PickMeleeAI(JASSCPP::player num,JASSCPP::string s1,JASSCPP::string s2,JASSCPP::string s3)
{
    JASSCPP::integer pick;
    if (GetAIDifficulty(num) == AI_DIFFICULTY_NEWBIE)
    {
        StartMeleeAI(num,s1);
        return;
    }
    if (s2 == null)
    {
        pick = 1;
    }
     else if (s3 == null)
    {
        pick = GetRandomInt(1,2);
    }
    else
    {
        pick = GetRandomInt(1,3);
    }
    if (pick == 1)
    {
        StartMeleeAI(num,s1);
    }
     else if (pick == 2)
    {
        StartMeleeAI(num,s2);
    }
    else
    {
        StartMeleeAI(num,s3);
    }
}
void MeleeStartingAI()
{
    JASSCPP::integer index;
    JASSCPP::player indexPlayer;
    JASSCPP::race indexRace;
    index = 0;
    while (true)
    {
        indexPlayer = Player(index);
        if (GetPlayerSlotState(indexPlayer) == PLAYER_SLOT_STATE_PLAYING)
        {
            indexRace = GetPlayerRace(indexPlayer);
            if (GetPlayerController(indexPlayer) == MAP_CONTROL_COMPUTER)
            {
                // Run a race-specific melee AI script.
                if (indexRace == RACE_HUMAN)
                {
                    PickMeleeAI(indexPlayer, "human.ai", null, null);
                }
                 else if (indexRace == RACE_ORC)
                {
                    PickMeleeAI(indexPlayer, "orc.ai", null, null);
                }
                 else if (indexRace == RACE_UNDEAD)
                {
                    PickMeleeAI(indexPlayer, "undead.ai", null, null);
                    RecycleGuardPosition(bj_ghoul[index]);
                }
                 else if (indexRace == RACE_NIGHTELF)
                {
                    PickMeleeAI(indexPlayer, "elf.ai", null, null);
                }
                else
                {
                    // Unrecognized race.
                }
                ShareEverythingWithTeamAI(indexPlayer);
            }
        }
        index = index + 1;
        if (index == bj_MAX_PLAYERS) break;
    }
}
void LockGuardPosition(JASSCPP::unit targ)
{
    SetUnitCreepGuard(targ,true);
}
JASSCPP::boolean MeleePlayerIsOpponent(JASSCPP::integer playerIndex,JASSCPP::integer opponentIndex)
{
    JASSCPP::player thePlayer = Player(playerIndex);
    JASSCPP::player theOpponent = Player(opponentIndex);
    if (playerIndex == opponentIndex)
    {
        return false;
    }
    // Unused player slots are not opponents.
    if (GetPlayerSlotState(theOpponent) != PLAYER_SLOT_STATE_PLAYING)
    {
        return false;
    }
    // Players who are already defeated are not opponents.
    if (bj_meleeDefeated[opponentIndex])
    {
        return false;
    }
    // Allied players with allied victory set are not opponents.
    if (GetPlayerAlliance(thePlayer, theOpponent, ALLIANCE_PASSIVE))
    {
        if (GetPlayerAlliance(theOpponent, thePlayer, ALLIANCE_PASSIVE))
        {
            if (GetPlayerState(thePlayer, PLAYER_STATE_ALLIED_VICTORY) == 1)
            {
                if (GetPlayerState(theOpponent, PLAYER_STATE_ALLIED_VICTORY) == 1)
                {
                    return false;
                }
            }
        }
    }
    return true;
}
JASSCPP::integer MeleeGetAllyStructureCount(JASSCPP::player whichPlayer)
{
    JASSCPP::integer playerIndex;
    JASSCPP::integer buildingCount;
    JASSCPP::player indexPlayer;
    buildingCount = 0;
    playerIndex = 0;
    while (true)
    {
        indexPlayer = Player(playerIndex);
        // uncomment to cause defeat even if you have control of ally structures, but yours have been nixed
        //if (PlayersAreCoAllied(whichPlayer, indexPlayer) and not bj_meleeDefeated[playerIndex]) then
        if (PlayersAreCoAllied(whichPlayer, indexPlayer))
        {
            buildingCount = buildingCount + GetPlayerStructureCount(indexPlayer, true);
        }
        playerIndex = playerIndex + 1;
        if (playerIndex == bj_MAX_PLAYERS) break;
    }
    return buildingCount;
}
JASSCPP::integer MeleeGetAllyCount(JASSCPP::player whichPlayer)
{
    JASSCPP::integer playerIndex;
    JASSCPP::integer playerCount;
    JASSCPP::player indexPlayer;
    playerCount = 0;
    playerIndex = 0;
    while (true)
    {
        indexPlayer = Player(playerIndex);
        if (PlayersAreCoAllied(whichPlayer, indexPlayer) && !bj_meleeDefeated[playerIndex] && (whichPlayer != indexPlayer))
        {
            playerCount = playerCount + 1;
        }
        playerIndex = playerIndex + 1;
        if (playerIndex == bj_MAX_PLAYERS) break;
    }
    return playerCount;
}
JASSCPP::integer MeleeGetAllyKeyStructureCount(JASSCPP::player whichPlayer)
{
    JASSCPP::integer playerIndex;
    JASSCPP::player indexPlayer;
    JASSCPP::integer keyStructs;
    keyStructs = 0;
    playerIndex = 0;
    while (true)
    {
        indexPlayer = Player(playerIndex);
        if (PlayersAreCoAllied(whichPlayer, indexPlayer))
        {
            keyStructs = keyStructs + GetPlayerTypedUnitCount(indexPlayer, "townhall", true, true);
            keyStructs = keyStructs + GetPlayerTypedUnitCount(indexPlayer, "greathall", true, true);
            keyStructs = keyStructs + GetPlayerTypedUnitCount(indexPlayer, "treeoflife", true, true);
            keyStructs = keyStructs + GetPlayerTypedUnitCount(indexPlayer, "necropolis", true, true);
        }
        playerIndex = playerIndex + 1;
        if (playerIndex == bj_MAX_PLAYERS) break;
    }
    return keyStructs;
}
void MeleeDoDrawEnum()
{
    JASSCPP::player thePlayer = GetEnumPlayer();
    CachePlayerHeroData(thePlayer);
    RemovePlayerPreserveUnitsBJ(thePlayer, PLAYER_GAME_RESULT_TIE, false);
}
void MeleeDoVictoryEnum()
{
    JASSCPP::player thePlayer = GetEnumPlayer();
    JASSCPP::integer playerIndex = GetPlayerId(thePlayer);
    if (!bj_meleeVictoried[playerIndex])
    {
        bj_meleeVictoried[playerIndex] = true;
        CachePlayerHeroData(thePlayer);
        RemovePlayerPreserveUnitsBJ(thePlayer, PLAYER_GAME_RESULT_VICTORY, false);
    }
}
void MeleeDoDefeat(JASSCPP::player whichPlayer)
{
    bj_meleeDefeated[GetPlayerId(whichPlayer)] = true;
    RemovePlayerPreserveUnitsBJ(whichPlayer, PLAYER_GAME_RESULT_DEFEAT, false);
}
void MeleeDoDefeatEnum()
{
    JASSCPP::player thePlayer = GetEnumPlayer();
    CachePlayerHeroData(thePlayer);
    MakeUnitsPassiveForTeam(thePlayer);
    MeleeDoDefeat(thePlayer);
}
void MeleeDoLeave(JASSCPP::player whichPlayer)
{
    if (GetIntegerGameState(GAME_STATE_DISCONNECTED) != 0)
    {
        GameOverDialogBJ( whichPlayer, true );
    }
    else
    {
        bj_meleeDefeated[GetPlayerId(whichPlayer)] = true;
        RemovePlayerPreserveUnitsBJ(whichPlayer, PLAYER_GAME_RESULT_DEFEAT, true);
    }
}
void MeleeRemoveObservers()
{
    JASSCPP::integer playerIndex;
    JASSCPP::player indexPlayer;
    playerIndex = 0;
    while (true)
    {
        indexPlayer = Player(playerIndex);
        if (IsPlayerObserver(indexPlayer))
        {
            RemovePlayerPreserveUnitsBJ(indexPlayer, PLAYER_GAME_RESULT_NEUTRAL, false);
        }
        playerIndex = playerIndex + 1;
        if (playerIndex == bj_MAX_PLAYERS) break;
    }
}
JASSCPP::force MeleeCheckForVictors()
{
    JASSCPP::integer playerIndex;
    JASSCPP::integer opponentIndex;
    JASSCPP::force opponentlessPlayers = CreateForce();
    JASSCPP::boolean gameOver = false;
    playerIndex = 0;
    while (true)
    {
        if (!bj_meleeDefeated[playerIndex])
        {
            // Determine whether or not this player has any remaining opponents.
            opponentIndex = 0;
            while (true)
            {
                // If anyone has an opponent, noone can be victorious yet.
                if (MeleePlayerIsOpponent(playerIndex, opponentIndex))
                {
                    return CreateForce();
                }
                opponentIndex = opponentIndex + 1;
                if (opponentIndex == bj_MAX_PLAYERS) break;
            }
            // Keep track of each opponentless player so that we can give
            // them a victory later.
            ForceAddPlayer(opponentlessPlayers, Player(playerIndex));
            gameOver = true;
        }
        playerIndex = playerIndex + 1;
        if (playerIndex == bj_MAX_PLAYERS) break;
    }
    // Set the game over global flag
    bj_meleeGameOver = gameOver;
    return opponentlessPlayers;
}
void MeleeCheckForLosersAndVictors()
{
    JASSCPP::integer playerIndex;
    JASSCPP::player indexPlayer;
    JASSCPP::force defeatedPlayers = CreateForce();
    JASSCPP::force victoriousPlayers;
    JASSCPP::boolean gameOver = false;
    if (bj_meleeGameOver)
    {
        return;
    }
    // If the game was disconnected then it is over, in this case we
    // don't want to report results for anyone as they will most likely
    // conflict with the actual game results
    if (GetIntegerGameState(GAME_STATE_DISCONNECTED) != 0)
    {
        bj_meleeGameOver = true;
        return;
    }
    // Check each player to see if he or she has been defeated yet.
    playerIndex = 0;
    while (true)
    {
        indexPlayer = Player(playerIndex);
        if (!bj_meleeDefeated[playerIndex] && !bj_meleeVictoried[playerIndex])
        {
            //call DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, 60, "Player"+I2S(playerIndex)+" has "+I2S(MeleeGetAllyStructureCount(indexPlayer))+" ally buildings.")
            if (MeleeGetAllyStructureCount(indexPlayer) <= 0)
            {
                // Keep track of each defeated player so that we can give
                // them a defeat later.
                ForceAddPlayer(defeatedPlayers, Player(playerIndex));
                // Set their defeated flag now so MeleeCheckForVictors
                // can detect victors.
                bj_meleeDefeated[playerIndex] = true;
            }
        }
        playerIndex = playerIndex + 1;
        if (playerIndex == bj_MAX_PLAYERS) break;
    }
    // Now that the defeated flags are set, check if there are any victors
    victoriousPlayers = MeleeCheckForVictors();
    // Defeat all defeated players
    ForForce(defeatedPlayers, function MeleeDoDefeatEnum);
    // Give victory to all victorious players
    ForForce(victoriousPlayers, function MeleeDoVictoryEnum);
    // If the game is over we should remove all observers
    if (bj_meleeGameOver)
    {
        MeleeRemoveObservers();
    }
}
JASSCPP::string MeleeGetCrippledWarningMessage(JASSCPP::player whichPlayer)
{
    JASSCPP::race r = GetPlayerRace(whichPlayer);
    if (r == RACE_HUMAN)
    {
        return GetLocalizedString("CRIPPLE_WARNING_HUMAN");
    }
     else if (r == RACE_ORC)
    {
        return GetLocalizedString("CRIPPLE_WARNING_ORC");
    }
     else if (r == RACE_NIGHTELF)
    {
        return GetLocalizedString("CRIPPLE_WARNING_NIGHTELF");
    }
     else if (r == RACE_UNDEAD)
    {
        return GetLocalizedString("CRIPPLE_WARNING_UNDEAD");
    }
    else
    {
        // Unrecognized Race
        return "";
    }
}
JASSCPP::string MeleeGetCrippledTimerMessage(JASSCPP::player whichPlayer)
{
    JASSCPP::race r = GetPlayerRace(whichPlayer);
    if (r == RACE_HUMAN)
    {
        return GetLocalizedString("CRIPPLE_TIMER_HUMAN");
    }
     else if (r == RACE_ORC)
    {
        return GetLocalizedString("CRIPPLE_TIMER_ORC");
    }
     else if (r == RACE_NIGHTELF)
    {
        return GetLocalizedString("CRIPPLE_TIMER_NIGHTELF");
    }
     else if (r == RACE_UNDEAD)
    {
        return GetLocalizedString("CRIPPLE_TIMER_UNDEAD");
    }
    else
    {
        // Unrecognized Race
        return "";
    }
}
JASSCPP::string MeleeGetCrippledRevealedMessage(JASSCPP::player whichPlayer)
{
    return GetLocalizedString("CRIPPLE_REVEALING_PREFIX") + GetPlayerName(whichPlayer) + GetLocalizedString("CRIPPLE_REVEALING_POSTFIX");
}
void MeleeExposePlayer(JASSCPP::player whichPlayer,JASSCPP::boolean expose)
{
    JASSCPP::integer playerIndex;
    JASSCPP::player indexPlayer;
    JASSCPP::force toExposeTo = CreateForce();
    CripplePlayer( whichPlayer, toExposeTo, false );
    bj_playerIsExposed[GetPlayerId(whichPlayer)] = expose;
    playerIndex = 0;
    while (true)
    {
        indexPlayer = Player(playerIndex);
        if (!PlayersAreCoAllied(whichPlayer, indexPlayer))
        {
            ForceAddPlayer( toExposeTo, indexPlayer );
        }
        playerIndex = playerIndex + 1;
        if (playerIndex == bj_MAX_PLAYERS) break;
    }
    CripplePlayer( whichPlayer, toExposeTo, expose );
    DestroyForce(toExposeTo);
}
void MeleeExposeAllPlayers()
{
    JASSCPP::integer playerIndex;
    JASSCPP::player indexPlayer;
    JASSCPP::integer playerIndex2;
    JASSCPP::player indexPlayer2;
    JASSCPP::force toExposeTo = CreateForce();
    playerIndex = 0;
    while (true)
    {
        indexPlayer = Player(playerIndex);
        ForceClear( toExposeTo );
        CripplePlayer( indexPlayer, toExposeTo, false );
        playerIndex2 = 0;
        while (true)
        {
            indexPlayer2 = Player(playerIndex2);
            if (playerIndex != playerIndex2)
            {
                if (!PlayersAreCoAllied(indexPlayer, indexPlayer2))
                {
                    ForceAddPlayer( toExposeTo, indexPlayer2 );
                }
            }
            playerIndex2 = playerIndex2 + 1;
            if (playerIndex2 == bj_MAX_PLAYERS) break;
        }
        CripplePlayer( indexPlayer, toExposeTo, true );
        playerIndex = playerIndex + 1;
        if (playerIndex == bj_MAX_PLAYERS) break;
    }
    DestroyForce( toExposeTo );
}
void MeleeCrippledPlayerTimeout()
{
    JASSCPP::timer expiredTimer = GetExpiredTimer();
    JASSCPP::integer playerIndex;
    JASSCPP::player exposedPlayer;
    playerIndex = 0;
    while (true)
    {
        if (bj_crippledTimer[playerIndex] == expiredTimer)
        {
            if (true) break;
        }
        playerIndex = playerIndex + 1;
        if (playerIndex == bj_MAX_PLAYERS) break;
    }
    if (playerIndex == bj_MAX_PLAYERS)
    {
        return;
    }
    exposedPlayer = Player(playerIndex);
    if (GetLocalPlayer() == exposedPlayer)
    {
        // Use only local code (no net traffic) within this block to avoid desyncs.
        // Hide the timer window for this player.
        TimerDialogDisplay(bj_crippledTimerWindows[playerIndex], false);
    }
    // Display a text message to all players, explaining the exposure.
    DisplayTimedTextToPlayer(GetLocalPlayer(), 0, 0, bj_MELEE_CRIPPLE_MSG_DURATION, MeleeGetCrippledRevealedMessage(exposedPlayer));
    // Expose the player.
    MeleeExposePlayer(exposedPlayer, true);
}
JASSCPP::boolean MeleePlayerIsCrippled(JASSCPP::player whichPlayer)
{
    JASSCPP::integer allyStructures = MeleeGetAllyStructureCount(whichPlayer);
    JASSCPP::integer allyKeyStructures = MeleeGetAllyKeyStructureCount(whichPlayer);
    return (allyStructures > 0) && (allyKeyStructures <= 0);
}
void MeleeCheckForCrippledPlayers()
{
    JASSCPP::integer playerIndex;
    JASSCPP::player indexPlayer;
    JASSCPP::force crippledPlayers = CreateForce();
    JASSCPP::boolean isNowCrippled;
    JASSCPP::race indexRace;
    if (bj_finishSoonAllExposed)
    {
        return;
    }
    // Check each player to see if he or she has been crippled or uncrippled.
    playerIndex = 0;
    while (true)
    {
        indexPlayer = Player(playerIndex);
        isNowCrippled = MeleePlayerIsCrippled(indexPlayer);
        if (!bj_playerIsCrippled[playerIndex] && isNowCrippled)
        {
            // Player became crippled; start their cripple timer.
            bj_playerIsCrippled[playerIndex] = true;
            TimerStart(bj_crippledTimer[playerIndex], bj_MELEE_CRIPPLE_TIMEOUT, false, function MeleeCrippledPlayerTimeout);
            if (GetLocalPlayer() == indexPlayer)
            {
                // Use only local code (no net traffic) within this block to avoid desyncs.
                // Show the timer window.
                TimerDialogDisplay(bj_crippledTimerWindows[playerIndex], true);
                // Display a warning message.
                DisplayTimedTextToPlayer(indexPlayer, 0, 0, bj_MELEE_CRIPPLE_MSG_DURATION, MeleeGetCrippledWarningMessage(indexPlayer));
            }
        }
         else if (bj_playerIsCrippled[playerIndex] && !isNowCrippled)
        {
            // Player became uncrippled; stop their cripple timer.
            bj_playerIsCrippled[playerIndex] = false;
            PauseTimer(bj_crippledTimer[playerIndex]);
            if (GetLocalPlayer() == indexPlayer)
            {
                // Use only local code (no net traffic) within this block to avoid desyncs.
                // Hide the timer window for this player.
                TimerDialogDisplay(bj_crippledTimerWindows[playerIndex], false);
                // Display a confirmation message if the player's team is still alive.
                if (MeleeGetAllyStructureCount(indexPlayer) > 0)
                {
                    if (bj_playerIsExposed[playerIndex])
                    {
                        DisplayTimedTextToPlayer(indexPlayer, 0, 0, bj_MELEE_CRIPPLE_MSG_DURATION, GetLocalizedString("CRIPPLE_UNREVEALED"));
                    }
                    else
                    {
                        DisplayTimedTextToPlayer(indexPlayer, 0, 0, bj_MELEE_CRIPPLE_MSG_DURATION, GetLocalizedString("CRIPPLE_UNCRIPPLED"));
                    }
                }
            }
            // If the player granted shared vision, deny that vision now.
            MeleeExposePlayer(indexPlayer, false);
        }
        playerIndex = playerIndex + 1;
        if (playerIndex == bj_MAX_PLAYERS) break;
    }
}
void MeleeCheckLostUnit(JASSCPP::unit lostUnit)
{
    JASSCPP::player lostUnitOwner = GetOwningPlayer(lostUnit);
    if (GetPlayerStructureCount(lostUnitOwner, true) <= 0)
    {
        MeleeCheckForLosersAndVictors();
    }
    // Check if the lost unit has crippled or uncrippled the player.
    // (A team with 0 units is dead, and thus considered uncrippled.)
    MeleeCheckForCrippledPlayers();
}
void MeleeCheckAddedUnit(JASSCPP::unit addedUnit)
{
    JASSCPP::player addedUnitOwner = GetOwningPlayer(addedUnit);
    if (bj_playerIsCrippled[GetPlayerId(addedUnitOwner)])
    {
        MeleeCheckForCrippledPlayers();
    }
}
void MeleeTriggerActionConstructCancel()
{
    MeleeCheckLostUnit(GetCancelledStructure());
}
void MeleeTriggerActionUnitDeath()
{
    if ((IsUnitType(GetDyingUnit(), UNIT_TYPE_STRUCTURE)))
    {
        MeleeCheckLostUnit(GetDyingUnit());
    }
}
void MeleeTriggerActionUnitConstructionStart()
{
    MeleeCheckAddedUnit(GetConstructingStructure());
}
void MeleeTriggerActionPlayerDefeated()
{
    JASSCPP::player thePlayer = GetTriggerPlayer();
    CachePlayerHeroData(thePlayer);
    if (MeleeGetAllyCount(thePlayer) > 0)
    {
        // If at least one ally is still alive and kicking, share units with
        // them and proceed with death.
        ShareEverythingWithTeam(thePlayer);
        if (!bj_meleeDefeated[GetPlayerId(thePlayer)])
        {
            MeleeDoDefeat(thePlayer);
        }
    }
    else
    {
        // If no living allies remain, swap all units and buildings over to
        // neutral_passive and proceed with death.
        MakeUnitsPassiveForTeam(thePlayer);
        if (!bj_meleeDefeated[GetPlayerId(thePlayer)])
        {
            MeleeDoDefeat(thePlayer);
        }
    }
    MeleeCheckForLosersAndVictors();
}
void MeleeTriggerActionPlayerLeft()
{
    JASSCPP::player thePlayer = GetTriggerPlayer();
    if (IsPlayerObserver(thePlayer))
    {
        RemovePlayerPreserveUnitsBJ(thePlayer, PLAYER_GAME_RESULT_NEUTRAL, false);
        return;
    }
    CachePlayerHeroData(thePlayer);
    // This is the same as defeat except the player generates the message
    // "player left the game" as opposed to "player was defeated".
    if (MeleeGetAllyCount(thePlayer) > 0)
    {
        // If at least one ally is still alive and kicking, share units with
        // them and proceed with death.
        ShareEverythingWithTeam(thePlayer);
        MeleeDoLeave(thePlayer);
    }
    else
    {
        // If no living allies remain, swap all units and buildings over to
        // neutral_passive and proceed with death.
        MakeUnitsPassiveForTeam(thePlayer);
        MeleeDoLeave(thePlayer);
    }
    MeleeCheckForLosersAndVictors();
}
void MeleeTriggerActionAllianceChange()
{
    MeleeCheckForLosersAndVictors();
    MeleeCheckForCrippledPlayers();
}
void MeleeTriggerTournamentFinishSoon()
{
    JASSCPP::integer playerIndex;
    JASSCPP::player indexPlayer;
    JASSCPP::real timeRemaining = GetTournamentFinishSoonTimeRemaining();
    if (!bj_finishSoonAllExposed)
    {
        bj_finishSoonAllExposed = true;
        // Reset all crippled players and their timers, and hide the local crippled timer dialog
        playerIndex = 0;
        while (true)
        {
            indexPlayer = Player(playerIndex);
            if (bj_playerIsCrippled[playerIndex])
            {
                // Uncripple the player
                bj_playerIsCrippled[playerIndex] = false;
                PauseTimer(bj_crippledTimer[playerIndex]);
                if (GetLocalPlayer() == indexPlayer)
                {
                    // Use only local code (no net traffic) within this block to avoid desyncs.
                    // Hide the timer window.
                    TimerDialogDisplay(bj_crippledTimerWindows[playerIndex], false);
                }
            }
            playerIndex = playerIndex + 1;
            if (playerIndex == bj_MAX_PLAYERS) break;
        }
        // Expose all players
        MeleeExposeAllPlayers();
    }
    // Show the "finish soon" timer dialog and set the real time remaining
    TimerDialogDisplay(bj_finishSoonTimerDialog, true);
    TimerDialogSetRealTimeRemaining(bj_finishSoonTimerDialog, timeRemaining);
}
JASSCPP::boolean MeleeWasUserPlayer(JASSCPP::player whichPlayer)
{
    JASSCPP::playerslotstate slotState;
    if (GetPlayerController(whichPlayer) != MAP_CONTROL_USER)
    {
        return false;
    }
    slotState = GetPlayerSlotState(whichPlayer);
    return (slotState == PLAYER_SLOT_STATE_PLAYING || slotState == PLAYER_SLOT_STATE_LEFT);
}
void MeleeTournamentFinishNowRuleA(JASSCPP::integer multiplier)
{
    JASSCPP::integer playerScore[32768];
    JASSCPP::integer teamScore[32768];
    JASSCPP::force teamForce[32768];
    JASSCPP::integer teamCount;
    JASSCPP::integer index;
    JASSCPP::player indexPlayer;
    JASSCPP::integer index2;
    JASSCPP::player indexPlayer2;
    JASSCPP::integer bestTeam;
    JASSCPP::integer bestScore;
    JASSCPP::boolean draw;
    index = 0;
    while (true)
    {
        indexPlayer = Player(index);
        if (MeleeWasUserPlayer(indexPlayer))
        {
            playerScore[index] = GetTournamentScore(indexPlayer);
            if (playerScore[index] <= 0)
            {
                playerScore[index] = 1;
            }
        }
        else
        {
            playerScore[index] = 0;
        }
        index = index + 1;
        if (index == bj_MAX_PLAYERS) break;
    }
    // Compute team scores and team forces
    teamCount = 0;
    index = 0;
    while (true)
    {
        if (playerScore[index] != 0)
        {
            indexPlayer = Player(index);
            teamScore[teamCount] = 0;
            teamForce[teamCount] = CreateForce();
            index2 = index;
            while (true)
            {
                if (playerScore[index2] != 0)
                {
                    indexPlayer2 = Player(index2);
                    if (PlayersAreCoAllied(indexPlayer, indexPlayer2))
                    {
                        teamScore[teamCount] = teamScore[teamCount] + playerScore[index2];
                        ForceAddPlayer(teamForce[teamCount], indexPlayer2);
                        playerScore[index2] = 0;
                    }
                }
                index2 = index2 + 1;
                if (index2 == bj_MAX_PLAYERS) break;
            }
            teamCount = teamCount + 1;
        }
        index = index + 1;
        if (index == bj_MAX_PLAYERS) break;
    }
    // The game is now over
    bj_meleeGameOver = true;
    // There should always be at least one team, but continue to work if not
    if (teamCount != 0)
    {
        // Find best team score
        bestTeam = -1;
        bestScore = -1;
        index = 0;
        while (true)
        {
            if (teamScore[index] > bestScore)
            {
                bestTeam = index;
                bestScore = teamScore[index];
            }
            index = index + 1;
            if (index == teamCount) break;
        }
        // Check whether the best team's score is 'multiplier' times better than
        // every other team. In the case of multiplier == 1 and exactly equal team
        // scores, the first team (which was randomly chosen by the server) will win.
        draw = false;
        index = 0;
        while (true)
        {
            if (index != bestTeam)
            {
                if (bestScore < (multiplier * teamScore[index]))
                {
                    draw = true;
                }
            }
            index = index + 1;
            if (index == teamCount) break;
        }
        if (draw)
        {
            // Give draw to all players on all teams
            index = 0;
            while (true)
            {
                ForForce(teamForce[index], function MeleeDoDrawEnum);
                index = index + 1;
                if (index == teamCount) break;
            }
        }
        else
        {
            // Give defeat to all players on teams other than the best team
            index = 0;
            while (true)
            {
                if (index != bestTeam)
                {
                    ForForce(teamForce[index], function MeleeDoDefeatEnum);
                }
                index = index + 1;
                if (index == teamCount) break;
            }
            // Give victory to all players on the best team
            ForForce(teamForce[bestTeam], function MeleeDoVictoryEnum);
        }
    }
}
void MeleeTriggerTournamentFinishNow()
{
    JASSCPP::integer rule = GetTournamentFinishNowRule();
    if (bj_meleeGameOver)
    {
        return;
    }
    if (rule == 1)
    {
        // Finals games
        MeleeTournamentFinishNowRuleA(1);
    }
    else
    {
        // Preliminary games
        MeleeTournamentFinishNowRuleA(3);
    }
    // Since the game is over we should remove all observers
    MeleeRemoveObservers();
}
void MeleeInitVictoryDefeat()
{
    JASSCPP::trigger trig;
    JASSCPP::integer index;
    JASSCPP::player indexPlayer;
    bj_finishSoonTimerDialog = CreateTimerDialog(null);
    // Set a trigger to fire when we receive a "finish soon" game event
    trig = CreateTrigger();
    TriggerRegisterGameEvent(trig, EVENT_GAME_TOURNAMENT_FINISH_SOON);
    TriggerAddAction(trig, function MeleeTriggerTournamentFinishSoon);
    // Set a trigger to fire when we receive a "finish now" game event
    trig = CreateTrigger();
    TriggerRegisterGameEvent(trig, EVENT_GAME_TOURNAMENT_FINISH_NOW);
    TriggerAddAction(trig, function MeleeTriggerTournamentFinishNow);
    // Set up each player's mortality code.
    index = 0;
    while (true)
    {
        indexPlayer = Player(index);
        // Make sure this player slot is playing.
        if (GetPlayerSlotState(indexPlayer) == PLAYER_SLOT_STATE_PLAYING)
        {
            bj_meleeDefeated[index] = false;
            bj_meleeVictoried[index] = false;
            // Create a timer and timer window in case the player is crippled.
            bj_playerIsCrippled[index] = false;
            bj_playerIsExposed[index] = false;
            bj_crippledTimer[index] = CreateTimer();
            bj_crippledTimerWindows[index] = CreateTimerDialog(bj_crippledTimer[index]);
            TimerDialogSetTitle(bj_crippledTimerWindows[index], MeleeGetCrippledTimerMessage(indexPlayer));
            // Set a trigger to fire whenever a building is cancelled for this player.
            trig = CreateTrigger();
            TriggerRegisterPlayerUnitEvent(trig, indexPlayer, EVENT_PLAYER_UNIT_CONSTRUCT_CANCEL, null);
            TriggerAddAction(trig, function MeleeTriggerActionConstructCancel);
            // Set a trigger to fire whenever a unit dies for this player.
            trig = CreateTrigger();
            TriggerRegisterPlayerUnitEvent(trig, indexPlayer, EVENT_PLAYER_UNIT_DEATH, null);
            TriggerAddAction(trig, function MeleeTriggerActionUnitDeath);
            // Set a trigger to fire whenever a unit begins construction for this player
            trig = CreateTrigger();
            TriggerRegisterPlayerUnitEvent(trig, indexPlayer, EVENT_PLAYER_UNIT_CONSTRUCT_START, null);
            TriggerAddAction(trig, function MeleeTriggerActionUnitConstructionStart);
            // Set a trigger to fire whenever this player defeats-out
            trig = CreateTrigger();
            TriggerRegisterPlayerEvent(trig, indexPlayer, EVENT_PLAYER_DEFEAT);
            TriggerAddAction(trig, function MeleeTriggerActionPlayerDefeated);
            // Set a trigger to fire whenever this player leaves
            trig = CreateTrigger();
            TriggerRegisterPlayerEvent(trig, indexPlayer, EVENT_PLAYER_LEAVE);
            TriggerAddAction(trig, function MeleeTriggerActionPlayerLeft);
            // Set a trigger to fire whenever this player changes his/her alliances.
            trig = CreateTrigger();
            TriggerRegisterPlayerAllianceChange(trig, indexPlayer, ALLIANCE_PASSIVE);
            TriggerRegisterPlayerStateEvent(trig, indexPlayer, PLAYER_STATE_ALLIED_VICTORY, EQUAL, 1);
            TriggerAddAction(trig, function MeleeTriggerActionAllianceChange);
        }
        else
        {
            bj_meleeDefeated[index] = true;
            bj_meleeVictoried[index] = false;
            // Handle leave events for observers
            if (IsPlayerObserver(indexPlayer))
            {
                // Set a trigger to fire whenever this player leaves
                trig = CreateTrigger();
                TriggerRegisterPlayerEvent(trig, indexPlayer, EVENT_PLAYER_LEAVE);
                TriggerAddAction(trig, function MeleeTriggerActionPlayerLeft);
            }
        }
        index = index + 1;
        if (index == bj_MAX_PLAYERS) break;
    }
    // Test for victory / defeat at startup, in case the user has already won / lost.
    // Allow for a short time to pass first, so that the map can finish loading.
    TimerStart(CreateTimer(), 2.0, false, function MeleeTriggerActionAllianceChange);
}
void CheckInitPlayerSlotAvailability()
{
    JASSCPP::integer index;
    if (!bj_slotControlReady)
    {
        index = 0;
        while (true)
        {
            bj_slotControlUsed[index] = false;
            bj_slotControl[index] = MAP_CONTROL_USER;
            index = index + 1;
            if (index == bj_MAX_PLAYERS) break;
        }
        bj_slotControlReady = true;
    }
}
void SetPlayerSlotAvailable(JASSCPP::player whichPlayer,JASSCPP::mapcontrol control)
{
    JASSCPP::integer playerIndex = GetPlayerId(whichPlayer);
    CheckInitPlayerSlotAvailability();
    bj_slotControlUsed[playerIndex] = true;
    bj_slotControl[playerIndex] = control;
}
void TeamInitPlayerSlots(JASSCPP::integer teamCount)
{
    JASSCPP::integer index;
    JASSCPP::player indexPlayer;
    JASSCPP::integer team;
    SetTeams(teamCount);
    CheckInitPlayerSlotAvailability();
    index = 0;
    team = 0;
    while (true)
    {
        if (bj_slotControlUsed[index])
        {
            indexPlayer = Player(index);
            SetPlayerTeam( indexPlayer, team );
            team = team + 1;
            if (team >= teamCount)
            {
                team = 0;
            }
        }
        index = index + 1;
        if (index == bj_MAX_PLAYERS) break;
    }
}
void MeleeInitPlayerSlots()
{
    TeamInitPlayerSlots(bj_MAX_PLAYERS);
}
void FFAInitPlayerSlots()
{
    TeamInitPlayerSlots(bj_MAX_PLAYERS);
}
void OneOnOneInitPlayerSlots()
{
    SetTeams(2);
    SetPlayers(2);
    TeamInitPlayerSlots(2);
}
void InitGenericPlayerSlots()
{
    JASSCPP::gametype gType = GetGameTypeSelected();
    if (gType == GAME_TYPE_MELEE)
    {
        MeleeInitPlayerSlots();
    }
     else if (gType == GAME_TYPE_FFA)
    {
        FFAInitPlayerSlots();
    }
     else if (gType == GAME_TYPE_USE_MAP_SETTINGS)
    {
        // Do nothing; the map-specific script handles this.
    }
     else if (gType == GAME_TYPE_ONE_ON_ONE)
    {
        OneOnOneInitPlayerSlots();
    }
     else if (gType == GAME_TYPE_TWO_TEAM_PLAY)
    {
        TeamInitPlayerSlots(2);
    }
     else if (gType == GAME_TYPE_THREE_TEAM_PLAY)
    {
        TeamInitPlayerSlots(3);
    }
     else if (gType == GAME_TYPE_FOUR_TEAM_PLAY)
    {
        TeamInitPlayerSlots(4);
    }
    else
    {
        // Unrecognized Game Type
    }
}
void SetDNCSoundsDawn()
{
    if (bj_useDawnDuskSounds)
    {
        StartSound(bj_dawnSound);
    }
}
void SetDNCSoundsDusk()
{
    if (bj_useDawnDuskSounds)
    {
        StartSound(bj_duskSound);
    }
}
void SetDNCSoundsDay()
{
    JASSCPP::real ToD = GetTimeOfDay();
    if ((ToD >= bj_TOD_DAWN && ToD < bj_TOD_DUSK) && !bj_dncIsDaytime)
    {
        bj_dncIsDaytime = true;
        // change ambient sounds
        StopSound(bj_nightAmbientSound, false, true);
        StartSound(bj_dayAmbientSound);
    }
}
void SetDNCSoundsNight()
{
    JASSCPP::real ToD = GetTimeOfDay();
    if ((ToD < bj_TOD_DAWN || ToD >= bj_TOD_DUSK) && bj_dncIsDaytime)
    {
        bj_dncIsDaytime = false;
        // change ambient sounds
        StopSound(bj_dayAmbientSound, false, true);
        StartSound(bj_nightAmbientSound);
    }
}
void InitDNCSounds()
{
    bj_dawnSound = CreateSoundFromLabel("RoosterSound", false, false, false, 10000, 10000);
    bj_duskSound = CreateSoundFromLabel("WolfSound", false, false, false, 10000, 10000);
    // Set up triggers to respond to dawn and dusk.
    bj_dncSoundsDawn = CreateTrigger();
    TriggerRegisterGameStateEvent(bj_dncSoundsDawn, GAME_STATE_TIME_OF_DAY, EQUAL, bj_TOD_DAWN);
    TriggerAddAction(bj_dncSoundsDawn, function SetDNCSoundsDawn);
    bj_dncSoundsDusk = CreateTrigger();
    TriggerRegisterGameStateEvent(bj_dncSoundsDusk, GAME_STATE_TIME_OF_DAY, EQUAL, bj_TOD_DUSK);
    TriggerAddAction(bj_dncSoundsDusk, function SetDNCSoundsDusk);
    // Set up triggers to respond to changes from day to night or vice-versa.
    bj_dncSoundsDay = CreateTrigger();
    TriggerRegisterGameStateEvent(bj_dncSoundsDay,   GAME_STATE_TIME_OF_DAY, GREATER_THAN_OR_EQUAL, bj_TOD_DAWN);
    TriggerRegisterGameStateEvent(bj_dncSoundsDay,   GAME_STATE_TIME_OF_DAY, LESS_THAN,             bj_TOD_DUSK);
    TriggerAddAction(bj_dncSoundsDay, function SetDNCSoundsDay);
    bj_dncSoundsNight = CreateTrigger();
    TriggerRegisterGameStateEvent(bj_dncSoundsNight, GAME_STATE_TIME_OF_DAY, LESS_THAN,             bj_TOD_DAWN);
    TriggerRegisterGameStateEvent(bj_dncSoundsNight, GAME_STATE_TIME_OF_DAY, GREATER_THAN_OR_EQUAL, bj_TOD_DUSK);
    TriggerAddAction(bj_dncSoundsNight, function SetDNCSoundsNight);
}
void InitBlizzardGlobals()
{
    JASSCPP::integer index;
    JASSCPP::integer userControlledPlayers;
    JASSCPP::version v;
    filterIssueHauntOrderAtLocBJ = Filter(function IssueHauntOrderAtLocBJFilter);
    filterEnumDestructablesInCircleBJ = Filter(function EnumDestructablesInCircleBJFilter);
    filterGetUnitsInRectOfPlayer = Filter(function GetUnitsInRectOfPlayerFilter);
    filterGetUnitsOfTypeIdAll = Filter(function GetUnitsOfTypeIdAllFilter);
    filterGetUnitsOfPlayerAndTypeId = Filter(function GetUnitsOfPlayerAndTypeIdFilter);
    filterMeleeTrainedUnitIsHeroBJ = Filter(function MeleeTrainedUnitIsHeroBJFilter);
    filterLivingPlayerUnitsOfTypeId = Filter(function LivingPlayerUnitsOfTypeIdFilter);
    // Init force presets
    index = 0;
    while (true)
    {
        if (index == bj_MAX_PLAYER_SLOTS) break;
        bj_FORCE_PLAYER[index] = CreateForce();
        ForceAddPlayer(bj_FORCE_PLAYER[index], Player(index));
        index = index + 1;
    }
    bj_FORCE_ALL_PLAYERS = CreateForce();
    ForceEnumPlayers(bj_FORCE_ALL_PLAYERS, null);
    // Init Cinematic Mode history
    bj_cineModePriorSpeed = GetGameSpeed();
    bj_cineModePriorFogSetting = IsFogEnabled();
    bj_cineModePriorMaskSetting = IsFogMaskEnabled();
    // Init Trigger Queue
    index = 0;
    while (true)
    {
        if (index >= bj_MAX_QUEUED_TRIGGERS) break;
        bj_queuedExecTriggers[index] = null;
        bj_queuedExecUseConds[index] = false;
        index = index + 1;
    }
    // Init singleplayer check
    bj_isSinglePlayer = false;
    userControlledPlayers = 0;
    index = 0;
    while (true)
    {
        if (index >= bj_MAX_PLAYERS) break;
        if ((GetPlayerController(Player(index)) == MAP_CONTROL_USER && GetPlayerSlotState(Player(index)) == PLAYER_SLOT_STATE_PLAYING))
        {
            userControlledPlayers = userControlledPlayers + 1;
        }
        index = index + 1;
    }
    bj_isSinglePlayer = (userControlledPlayers == 1);
    // Init sounds
    //set bj_pingMinimapSound = CreateSoundFromLabel("AutoCastButtonClick", false, false, false, 10000, 10000)
    bj_rescueSound = CreateSoundFromLabel("Rescue", false, false, false, 10000, 10000);
    bj_questDiscoveredSound = CreateSoundFromLabel("QuestNew", false, false, false, 10000, 10000);
    bj_questUpdatedSound = CreateSoundFromLabel("QuestUpdate", false, false, false, 10000, 10000);
    bj_questCompletedSound = CreateSoundFromLabel("QuestCompleted", false, false, false, 10000, 10000);
    bj_questFailedSound = CreateSoundFromLabel("QuestFailed", false, false, false, 10000, 10000);
    bj_questHintSound = CreateSoundFromLabel("Hint", false, false, false, 10000, 10000);
    bj_questSecretSound = CreateSoundFromLabel("SecretFound", false, false, false, 10000, 10000);
    bj_questItemAcquiredSound = CreateSoundFromLabel("ItemReward", false, false, false, 10000, 10000);
    bj_questWarningSound = CreateSoundFromLabel("Warning", false, false, false, 10000, 10000);
    bj_victoryDialogSound = CreateSoundFromLabel("QuestCompleted", false, false, false, 10000, 10000);
    bj_defeatDialogSound = CreateSoundFromLabel("QuestFailed", false, false, false, 10000, 10000);
    // Init corpse creation triggers.
    DelayedSuspendDecayCreate();
    // Init version-specific data
    v = VersionGet();
    if (v == VERSION_REIGN_OF_CHAOS)
    {
        bj_MELEE_MAX_TWINKED_HEROES = bj_MELEE_MAX_TWINKED_HEROES_V0;
    }
    else
    {
        bj_MELEE_MAX_TWINKED_HEROES = bj_MELEE_MAX_TWINKED_HEROES_V1;
    }
}
void InitQueuedTriggers()
{
    bj_queuedExecTimeout = CreateTrigger();
    TriggerRegisterTimerExpireEvent(bj_queuedExecTimeout, bj_queuedExecTimeoutTimer);
    TriggerAddAction(bj_queuedExecTimeout, function QueuedTriggerDoneBJ);
}
void InitMapRects()
{
    bj_mapInitialPlayableArea = Rect(GetCameraBoundMinX()-GetCameraMargin(CAMERA_MARGIN_LEFT), GetCameraBoundMinY()-GetCameraMargin(CAMERA_MARGIN_BOTTOM), GetCameraBoundMaxX()+GetCameraMargin(CAMERA_MARGIN_RIGHT), GetCameraBoundMaxY()+GetCameraMargin(CAMERA_MARGIN_TOP));
    bj_mapInitialCameraBounds = GetCurrentCameraBoundsMapRectBJ();
}
void InitSummonableCaps()
{
    JASSCPP::integer index;
    index = 0;
    while (true)
    {
        // upgraded units
        SetPlayerTechMaxAllowed(Player(index), 'hrtt', 0);
        SetPlayerTechMaxAllowed(Player(index), 'otbk', 0);
        // max skeletons per player
        SetPlayerTechMaxAllowed(Player(index), 'uske', bj_MAX_SKELETONS);
        index = index + 1;
        if (index == bj_MAX_PLAYERS) break;
    }
}
void UpdateStockAvailability(JASSCPP::item whichItem)
{
    JASSCPP::itemtype iType = GetItemType(whichItem);
    JASSCPP::integer iLevel = GetItemLevel(whichItem);
    if (iType == ITEM_TYPE_PERMANENT)
    {
        bj_stockAllowedPermanent[iLevel] = true;
    }
     else if (iType == ITEM_TYPE_CHARGED)
    {
        bj_stockAllowedCharged[iLevel] = true;
    }
     else if (iType == ITEM_TYPE_ARTIFACT)
    {
        bj_stockAllowedArtifact[iLevel] = true;
    }
    else
    {
        // Not interested in this item type - ignore the item.
    }
}
void UpdateEachStockBuildingEnum()
{
    JASSCPP::integer iteration = 0;
    JASSCPP::integer pickedItemId;
    while (true)
    {
        pickedItemId = ChooseRandomItemEx(bj_stockPickedItemType, bj_stockPickedItemLevel);
        if (IsItemIdSellable(pickedItemId)) break;
        // If we get hung up on an entire class/level combo of unsellable
        // items, or a very unlucky series of random numbers, give up.
        iteration = iteration + 1;
        if (iteration > bj_STOCK_MAX_ITERATIONS)
        {
            return;
        }
    }
    AddItemToStock(GetEnumUnit(), pickedItemId, 1, 1);
}
void UpdateEachStockBuilding(JASSCPP::itemtype iType,JASSCPP::integer iLevel)
{
    JASSCPP::group g;
    bj_stockPickedItemType = iType;
    bj_stockPickedItemLevel = iLevel;
    g = CreateGroup();
    GroupEnumUnitsOfType(g, "marketplace", null);
    ForGroup(g, function UpdateEachStockBuildingEnum);
    DestroyGroup(g);
}
void PerformStockUpdates()
{
    JASSCPP::integer pickedItemId;
    JASSCPP::itemtype pickedItemType;
    JASSCPP::integer pickedItemLevel = 0;
    JASSCPP::integer allowedCombinations = 0;
    JASSCPP::integer iLevel;
    iLevel = 1;
    while (true)
    {
        if (bj_stockAllowedPermanent[iLevel])
        {
            allowedCombinations = allowedCombinations + 1;
            if (GetRandomInt(1, allowedCombinations) == 1)
            {
                pickedItemType = ITEM_TYPE_PERMANENT;
                pickedItemLevel = iLevel;
            }
        }
        if (bj_stockAllowedCharged[iLevel])
        {
            allowedCombinations = allowedCombinations + 1;
            if (GetRandomInt(1, allowedCombinations) == 1)
            {
                pickedItemType = ITEM_TYPE_CHARGED;
                pickedItemLevel = iLevel;
            }
        }
        if (bj_stockAllowedArtifact[iLevel])
        {
            allowedCombinations = allowedCombinations + 1;
            if (GetRandomInt(1, allowedCombinations) == 1)
            {
                pickedItemType = ITEM_TYPE_ARTIFACT;
                pickedItemLevel = iLevel;
            }
        }
        iLevel = iLevel + 1;
        if (iLevel > bj_MAX_ITEM_LEVEL) break;
    }
    // Make sure we found a valid item type to add.
    if (allowedCombinations == 0)
    {
        return;
    }
    UpdateEachStockBuilding(pickedItemType, pickedItemLevel);
}
void StartStockUpdates()
{
    PerformStockUpdates();
    TimerStart(bj_stockUpdateTimer, bj_STOCK_RESTOCK_INTERVAL, true, function PerformStockUpdates);
}
void RemovePurchasedItem()
{
    RemoveItemFromStock(GetSellingUnit(), GetItemTypeId(GetSoldItem()));
}
void InitNeutralBuildings()
{
    JASSCPP::integer iLevel;
    iLevel = 0;
    while (true)
    {
        bj_stockAllowedPermanent[iLevel] = false;
        bj_stockAllowedCharged[iLevel] = false;
        bj_stockAllowedArtifact[iLevel] = false;
        iLevel = iLevel + 1;
        if (iLevel > bj_MAX_ITEM_LEVEL) break;
    }
    // Limit stock inventory slots.
    SetAllItemTypeSlots(bj_MAX_STOCK_ITEM_SLOTS);
    SetAllUnitTypeSlots(bj_MAX_STOCK_UNIT_SLOTS);
    // Arrange the first update.
    bj_stockUpdateTimer = CreateTimer();
    TimerStart(bj_stockUpdateTimer, bj_STOCK_RESTOCK_INITIAL_DELAY, false, function StartStockUpdates);
    // Set up a trigger to fire whenever an item is sold.
    bj_stockItemPurchased = CreateTrigger();
    TriggerRegisterPlayerUnitEvent(bj_stockItemPurchased, Player(PLAYER_NEUTRAL_PASSIVE), EVENT_PLAYER_UNIT_SELL_ITEM, null);
    TriggerAddAction(bj_stockItemPurchased, function RemovePurchasedItem);
}
void MarkGameStarted()
{
    bj_gameStarted = true;
    DestroyTimer(bj_gameStartedTimer);
}
void DetectGameStarted()
{
    bj_gameStartedTimer = CreateTimer();
    TimerStart(bj_gameStartedTimer, bj_GAME_STARTED_THRESHOLD, false, function MarkGameStarted);
}
void InitBlizzard()
{
    ConfigureNeutralVictim();
    InitBlizzardGlobals();
    InitQueuedTriggers();
    InitRescuableBehaviorBJ();
    InitDNCSounds();
    InitMapRects();
    InitSummonableCaps();
    InitNeutralBuildings();
    DetectGameStarted();
}
void RandomDistReset()
{
    bj_randDistCount = 0;
}
void RandomDistAddItem(JASSCPP::integer inID,JASSCPP::integer inChance)
{
    bj_randDistID[bj_randDistCount] = inID;
    bj_randDistChance[bj_randDistCount] = inChance;
    bj_randDistCount = bj_randDistCount + 1;
}
JASSCPP::integer RandomDistChoose()
{
    JASSCPP::integer sum = 0;
    JASSCPP::integer chance = 0;
    JASSCPP::integer index;
    JASSCPP::integer foundID = -1;
    JASSCPP::boolean done;
    if (bj_randDistCount == 0)
    {
        return -1;
    }
    // Find sum of all chances
    index = 0;
    while (true)
    {
        sum = sum + bj_randDistChance[index];
        index = index + 1;
        if (index == bj_randDistCount) break;
    }
    // Choose random number within the total range
    chance = GetRandomInt(1, sum);
    // Find ID which corresponds to this chance
    index = 0;
    sum = 0;
    done = false;
    while (true)
    {
        sum = sum + bj_randDistChance[index];
        if (chance <= sum)
        {
            foundID = bj_randDistID[index];
            done = true;
        }
        index = index + 1;
        if (index == bj_randDistCount)
        {
            done = true;
        }
        if (done == true) break;
    }
    return foundID;
}
JASSCPP::item UnitDropItem(JASSCPP::unit inUnit,JASSCPP::integer inItemID)
{
    JASSCPP::real x;
    JASSCPP::real y;
    JASSCPP::real radius = 32;
    JASSCPP::real unitX;
    JASSCPP::real unitY;
    JASSCPP::item droppedItem;
    if (inItemID == -1)
    {
        return null;
    }
    unitX = GetUnitX(inUnit);
    unitY = GetUnitY(inUnit);
    x = GetRandomReal(unitX - radius, unitX + radius);
    y = GetRandomReal(unitY - radius, unitY + radius);
    droppedItem = CreateItem(inItemID, x, y);
    SetItemDropID(droppedItem, GetUnitTypeId(inUnit));
    UpdateStockAvailability(droppedItem);
    return droppedItem;
}
JASSCPP::item WidgetDropItem(JASSCPP::widget inWidget,JASSCPP::integer inItemID)
{
    JASSCPP::real x;
    JASSCPP::real y;
    JASSCPP::real radius = 32;
    JASSCPP::real widgetX;
    JASSCPP::real widgetY;
    if (inItemID == -1)
    {
        return null;
    }
    widgetX = GetWidgetX(inWidget);
    widgetY = GetWidgetY(inWidget);
    x = GetRandomReal(widgetX - radius, widgetX + radius);
    y = GetRandomReal(widgetY - radius, widgetY + radius);
    return CreateItem(inItemID, x, y);
}
}
