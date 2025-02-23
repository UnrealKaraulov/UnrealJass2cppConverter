#include "JassTypes.h"
namespace Blizzard
{
//Global defines
#define bj_PI 3.14159
#define bj_E 2.71828
#define bj_CELLWIDTH 128.0
#define bj_CLIFFHEIGHT 128.0
#define bj_UNIT_FACING 270.0
#define bj_RADTODEG 180.0/bj_PI
#define bj_DEGTORAD bj_PI/180.0
#define bj_TEXT_DELAY_QUEST 20.00
#define bj_TEXT_DELAY_QUESTUPDATE 20.00
#define bj_TEXT_DELAY_QUESTDONE 20.00
#define bj_TEXT_DELAY_QUESTFAILED 20.00
#define bj_TEXT_DELAY_QUESTREQUIREMENT 20.00
#define bj_TEXT_DELAY_MISSIONFAILED 20.00
#define bj_TEXT_DELAY_ALWAYSHINT 12.00
#define bj_TEXT_DELAY_HINT 12.00
#define bj_TEXT_DELAY_SECRET 10.00
#define bj_TEXT_DELAY_UNITACQUIRED 15.00
#define bj_TEXT_DELAY_UNITAVAILABLE 10.00
#define bj_TEXT_DELAY_ITEMACQUIRED 10.00
#define bj_TEXT_DELAY_WARNING 12.00
#define bj_QUEUE_DELAY_QUEST 5.00
#define bj_QUEUE_DELAY_HINT 5.00
#define bj_QUEUE_DELAY_SECRET 3.00
#define bj_HANDICAP_EASY 60.00
#define bj_GAME_STARTED_THRESHOLD 0.01
#define bj_WAIT_FOR_COND_MIN_INTERVAL 0.10
#define bj_POLLED_WAIT_INTERVAL 0.10
#define bj_POLLED_WAIT_SKIP_THRESHOLD 2.00
#define bj_MAX_INVENTORY 6
#define bj_MAX_PLAYERS 12
#define bj_PLAYER_NEUTRAL_VICTIM 13
#define bj_PLAYER_NEUTRAL_EXTRA 14
#define bj_MAX_PLAYER_SLOTS 16
#define bj_MAX_SKELETONS 25
#define bj_MAX_STOCK_ITEM_SLOTS 11
#define bj_MAX_STOCK_UNIT_SLOTS 11
#define bj_MAX_ITEM_LEVEL 10
#define bj_TOD_DAWN 6.00
#define bj_TOD_DUSK 18.00
#define bj_MELEE_STARTING_TOD 8.00
#define bj_MELEE_STARTING_GOLD_V0 750
#define bj_MELEE_STARTING_GOLD_V1 500
#define bj_MELEE_STARTING_LUMBER_V0 200
#define bj_MELEE_STARTING_LUMBER_V1 150
#define bj_MELEE_STARTING_HERO_TOKENS 1
#define bj_MELEE_HERO_LIMIT 3
#define bj_MELEE_HERO_TYPE_LIMIT 1
#define bj_MELEE_MINE_SEARCH_RADIUS 2000
#define bj_MELEE_CLEAR_UNITS_RADIUS 1500
#define bj_MELEE_CRIPPLE_TIMEOUT 120.00
#define bj_MELEE_CRIPPLE_MSG_DURATION 20.00
#define bj_MELEE_MAX_TWINKED_HEROES_V0 3
#define bj_MELEE_MAX_TWINKED_HEROES_V1 1
#define bj_CREEP_ITEM_DELAY 0.50
#define bj_STOCK_RESTOCK_INITIAL_DELAY 120
#define bj_STOCK_RESTOCK_INTERVAL 30
#define bj_STOCK_MAX_ITERATIONS 20
#define bj_MAX_DEST_IN_REGION_EVENTS 64
#define bj_CAMERA_MIN_FARZ 100
#define bj_CAMERA_DEFAULT_DISTANCE 1650
#define bj_CAMERA_DEFAULT_FARZ 5000
#define bj_CAMERA_DEFAULT_AOA 304
#define bj_CAMERA_DEFAULT_FOV 70
#define bj_CAMERA_DEFAULT_ROLL 0
#define bj_CAMERA_DEFAULT_ROTATION 90
#define bj_RESCUE_PING_TIME 2.00
#define bj_NOTHING_SOUND_DURATION 5.00
#define bj_TRANSMISSION_PING_TIME 1.00
#define bj_TRANSMISSION_IND_RED 255
#define bj_TRANSMISSION_IND_BLUE 255
#define bj_TRANSMISSION_IND_GREEN 255
#define bj_TRANSMISSION_IND_ALPHA 255
#define bj_TRANSMISSION_PORT_HANGTIME 1.50
#define bj_CINEMODE_INTERFACEFADE 0.50
#define bj_CINEMODE_GAMESPEED MAP_SPEED_NORMAL
#define bj_CINEMODE_VOLUME_UNITMOVEMENT 0.40
#define bj_CINEMODE_VOLUME_UNITSOUNDS 0.00
#define bj_CINEMODE_VOLUME_COMBAT 0.40
#define bj_CINEMODE_VOLUME_SPELLS 0.40
#define bj_CINEMODE_VOLUME_UI 0.00
#define bj_CINEMODE_VOLUME_MUSIC 0.55
#define bj_CINEMODE_VOLUME_AMBIENTSOUNDS 1.00
#define bj_CINEMODE_VOLUME_FIRE 0.60
#define bj_SPEECH_VOLUME_UNITMOVEMENT 0.25
#define bj_SPEECH_VOLUME_UNITSOUNDS 0.00
#define bj_SPEECH_VOLUME_COMBAT 0.25
#define bj_SPEECH_VOLUME_SPELLS 0.25
#define bj_SPEECH_VOLUME_UI 0.00
#define bj_SPEECH_VOLUME_MUSIC 0.55
#define bj_SPEECH_VOLUME_AMBIENTSOUNDS 1.00
#define bj_SPEECH_VOLUME_FIRE 0.60
#define bj_SMARTPAN_TRESHOLD_PAN 500
#define bj_SMARTPAN_TRESHOLD_SNAP 3500
#define bj_MAX_QUEUED_TRIGGERS 100
#define bj_QUEUED_TRIGGER_TIMEOUT 180.00
#define bj_CAMPAIGN_INDEX_T 0
#define bj_CAMPAIGN_INDEX_H 1
#define bj_CAMPAIGN_INDEX_U 2
#define bj_CAMPAIGN_INDEX_O 3
#define bj_CAMPAIGN_INDEX_N 4
#define bj_CAMPAIGN_INDEX_XN 5
#define bj_CAMPAIGN_INDEX_XH 6
#define bj_CAMPAIGN_INDEX_XU 7
#define bj_CAMPAIGN_INDEX_XO 8
#define bj_CAMPAIGN_OFFSET_T 0
#define bj_CAMPAIGN_OFFSET_H 1
#define bj_CAMPAIGN_OFFSET_U 2
#define bj_CAMPAIGN_OFFSET_O 3
#define bj_CAMPAIGN_OFFSET_N 4
#define bj_CAMPAIGN_OFFSET_XN 0
#define bj_CAMPAIGN_OFFSET_XH 1
#define bj_CAMPAIGN_OFFSET_XU 2
#define bj_CAMPAIGN_OFFSET_XO 3
#define bj_MISSION_INDEX_T00 bj_CAMPAIGN_OFFSET_T * 1000 + 0
#define bj_MISSION_INDEX_T01 bj_CAMPAIGN_OFFSET_T * 1000 + 1
#define bj_MISSION_INDEX_H00 bj_CAMPAIGN_OFFSET_H * 1000 + 0
#define bj_MISSION_INDEX_H01 bj_CAMPAIGN_OFFSET_H * 1000 + 1
#define bj_MISSION_INDEX_H02 bj_CAMPAIGN_OFFSET_H * 1000 + 2
#define bj_MISSION_INDEX_H03 bj_CAMPAIGN_OFFSET_H * 1000 + 3
#define bj_MISSION_INDEX_H04 bj_CAMPAIGN_OFFSET_H * 1000 + 4
#define bj_MISSION_INDEX_H05 bj_CAMPAIGN_OFFSET_H * 1000 + 5
#define bj_MISSION_INDEX_H06 bj_CAMPAIGN_OFFSET_H * 1000 + 6
#define bj_MISSION_INDEX_H07 bj_CAMPAIGN_OFFSET_H * 1000 + 7
#define bj_MISSION_INDEX_H08 bj_CAMPAIGN_OFFSET_H * 1000 + 8
#define bj_MISSION_INDEX_H09 bj_CAMPAIGN_OFFSET_H * 1000 + 9
#define bj_MISSION_INDEX_H10 bj_CAMPAIGN_OFFSET_H * 1000 + 10
#define bj_MISSION_INDEX_H11 bj_CAMPAIGN_OFFSET_H * 1000 + 11
#define bj_MISSION_INDEX_U00 bj_CAMPAIGN_OFFSET_U * 1000 + 0
#define bj_MISSION_INDEX_U01 bj_CAMPAIGN_OFFSET_U * 1000 + 1
#define bj_MISSION_INDEX_U02 bj_CAMPAIGN_OFFSET_U * 1000 + 2
#define bj_MISSION_INDEX_U03 bj_CAMPAIGN_OFFSET_U * 1000 + 3
#define bj_MISSION_INDEX_U05 bj_CAMPAIGN_OFFSET_U * 1000 + 4
#define bj_MISSION_INDEX_U07 bj_CAMPAIGN_OFFSET_U * 1000 + 5
#define bj_MISSION_INDEX_U08 bj_CAMPAIGN_OFFSET_U * 1000 + 6
#define bj_MISSION_INDEX_U09 bj_CAMPAIGN_OFFSET_U * 1000 + 7
#define bj_MISSION_INDEX_U10 bj_CAMPAIGN_OFFSET_U * 1000 + 8
#define bj_MISSION_INDEX_U11 bj_CAMPAIGN_OFFSET_U * 1000 + 9
#define bj_MISSION_INDEX_O00 bj_CAMPAIGN_OFFSET_O * 1000 + 0
#define bj_MISSION_INDEX_O01 bj_CAMPAIGN_OFFSET_O * 1000 + 1
#define bj_MISSION_INDEX_O02 bj_CAMPAIGN_OFFSET_O * 1000 + 2
#define bj_MISSION_INDEX_O03 bj_CAMPAIGN_OFFSET_O * 1000 + 3
#define bj_MISSION_INDEX_O04 bj_CAMPAIGN_OFFSET_O * 1000 + 4
#define bj_MISSION_INDEX_O05 bj_CAMPAIGN_OFFSET_O * 1000 + 5
#define bj_MISSION_INDEX_O06 bj_CAMPAIGN_OFFSET_O * 1000 + 6
#define bj_MISSION_INDEX_O07 bj_CAMPAIGN_OFFSET_O * 1000 + 7
#define bj_MISSION_INDEX_O08 bj_CAMPAIGN_OFFSET_O * 1000 + 8
#define bj_MISSION_INDEX_O09 bj_CAMPAIGN_OFFSET_O * 1000 + 9
#define bj_MISSION_INDEX_O10 bj_CAMPAIGN_OFFSET_O * 1000 + 10
#define bj_MISSION_INDEX_N00 bj_CAMPAIGN_OFFSET_N * 1000 + 0
#define bj_MISSION_INDEX_N01 bj_CAMPAIGN_OFFSET_N * 1000 + 1
#define bj_MISSION_INDEX_N02 bj_CAMPAIGN_OFFSET_N * 1000 + 2
#define bj_MISSION_INDEX_N03 bj_CAMPAIGN_OFFSET_N * 1000 + 3
#define bj_MISSION_INDEX_N04 bj_CAMPAIGN_OFFSET_N * 1000 + 4
#define bj_MISSION_INDEX_N05 bj_CAMPAIGN_OFFSET_N * 1000 + 5
#define bj_MISSION_INDEX_N06 bj_CAMPAIGN_OFFSET_N * 1000 + 6
#define bj_MISSION_INDEX_N07 bj_CAMPAIGN_OFFSET_N * 1000 + 7
#define bj_MISSION_INDEX_N08 bj_CAMPAIGN_OFFSET_N * 1000 + 8
#define bj_MISSION_INDEX_N09 bj_CAMPAIGN_OFFSET_N * 1000 + 9
#define bj_MISSION_INDEX_XN00 bj_CAMPAIGN_OFFSET_XN * 1000 + 0
#define bj_MISSION_INDEX_XN01 bj_CAMPAIGN_OFFSET_XN * 1000 + 1
#define bj_MISSION_INDEX_XN02 bj_CAMPAIGN_OFFSET_XN * 1000 + 2
#define bj_MISSION_INDEX_XN03 bj_CAMPAIGN_OFFSET_XN * 1000 + 3
#define bj_MISSION_INDEX_XN04 bj_CAMPAIGN_OFFSET_XN * 1000 + 4
#define bj_MISSION_INDEX_XN05 bj_CAMPAIGN_OFFSET_XN * 1000 + 5
#define bj_MISSION_INDEX_XN06 bj_CAMPAIGN_OFFSET_XN * 1000 + 6
#define bj_MISSION_INDEX_XN07 bj_CAMPAIGN_OFFSET_XN * 1000 + 7
#define bj_MISSION_INDEX_XN08 bj_CAMPAIGN_OFFSET_XN * 1000 + 8
#define bj_MISSION_INDEX_XN09 bj_CAMPAIGN_OFFSET_XN * 1000 + 9
#define bj_MISSION_INDEX_XN10 bj_CAMPAIGN_OFFSET_XN * 1000 + 10
#define bj_MISSION_INDEX_XH00 bj_CAMPAIGN_OFFSET_XH * 1000 + 0
#define bj_MISSION_INDEX_XH01 bj_CAMPAIGN_OFFSET_XH * 1000 + 1
#define bj_MISSION_INDEX_XH02 bj_CAMPAIGN_OFFSET_XH * 1000 + 2
#define bj_MISSION_INDEX_XH03 bj_CAMPAIGN_OFFSET_XH * 1000 + 3
#define bj_MISSION_INDEX_XH04 bj_CAMPAIGN_OFFSET_XH * 1000 + 4
#define bj_MISSION_INDEX_XH05 bj_CAMPAIGN_OFFSET_XH * 1000 + 5
#define bj_MISSION_INDEX_XH06 bj_CAMPAIGN_OFFSET_XH * 1000 + 6
#define bj_MISSION_INDEX_XH07 bj_CAMPAIGN_OFFSET_XH * 1000 + 7
#define bj_MISSION_INDEX_XH08 bj_CAMPAIGN_OFFSET_XH * 1000 + 8
#define bj_MISSION_INDEX_XH09 bj_CAMPAIGN_OFFSET_XH * 1000 + 9
#define bj_MISSION_INDEX_XU00 bj_CAMPAIGN_OFFSET_XU * 1000 + 0
#define bj_MISSION_INDEX_XU01 bj_CAMPAIGN_OFFSET_XU * 1000 + 1
#define bj_MISSION_INDEX_XU02 bj_CAMPAIGN_OFFSET_XU * 1000 + 2
#define bj_MISSION_INDEX_XU03 bj_CAMPAIGN_OFFSET_XU * 1000 + 3
#define bj_MISSION_INDEX_XU04 bj_CAMPAIGN_OFFSET_XU * 1000 + 4
#define bj_MISSION_INDEX_XU05 bj_CAMPAIGN_OFFSET_XU * 1000 + 5
#define bj_MISSION_INDEX_XU06 bj_CAMPAIGN_OFFSET_XU * 1000 + 6
#define bj_MISSION_INDEX_XU07 bj_CAMPAIGN_OFFSET_XU * 1000 + 7
#define bj_MISSION_INDEX_XU08 bj_CAMPAIGN_OFFSET_XU * 1000 + 8
#define bj_MISSION_INDEX_XU09 bj_CAMPAIGN_OFFSET_XU * 1000 + 9
#define bj_MISSION_INDEX_XU10 bj_CAMPAIGN_OFFSET_XU * 1000 + 10
#define bj_MISSION_INDEX_XU11 bj_CAMPAIGN_OFFSET_XU * 1000 + 11
#define bj_MISSION_INDEX_XU12 bj_CAMPAIGN_OFFSET_XU * 1000 + 12
#define bj_MISSION_INDEX_XU13 bj_CAMPAIGN_OFFSET_XU * 1000 + 13
#define bj_MISSION_INDEX_XO00 bj_CAMPAIGN_OFFSET_XO * 1000 + 0
#define bj_CINEMATICINDEX_TOP 0
#define bj_CINEMATICINDEX_HOP 1
#define bj_CINEMATICINDEX_HED 2
#define bj_CINEMATICINDEX_OOP 3
#define bj_CINEMATICINDEX_OED 4
#define bj_CINEMATICINDEX_UOP 5
#define bj_CINEMATICINDEX_UED 6
#define bj_CINEMATICINDEX_NOP 7
#define bj_CINEMATICINDEX_NED 8
#define bj_CINEMATICINDEX_XOP 9
#define bj_CINEMATICINDEX_XED 10
#define bj_ALLIANCE_UNALLIED 0
#define bj_ALLIANCE_UNALLIED_VISION 1
#define bj_ALLIANCE_ALLIED 2
#define bj_ALLIANCE_ALLIED_VISION 3
#define bj_ALLIANCE_ALLIED_UNITS 4
#define bj_ALLIANCE_ALLIED_ADVUNITS 5
#define bj_ALLIANCE_NEUTRAL 6
#define bj_ALLIANCE_NEUTRAL_VISION 7
#define bj_KEYEVENTTYPE_DEPRESS 0
#define bj_KEYEVENTTYPE_RELEASE 1
#define bj_KEYEVENTKEY_LEFT 0
#define bj_KEYEVENTKEY_RIGHT 1
#define bj_KEYEVENTKEY_DOWN 2
#define bj_KEYEVENTKEY_UP 3
#define bj_TIMETYPE_ADD 0
#define bj_TIMETYPE_SET 1
#define bj_TIMETYPE_SUB 2
#define bj_CAMERABOUNDS_ADJUST_ADD 0
#define bj_CAMERABOUNDS_ADJUST_SUB 1
#define bj_QUESTTYPE_REQ_DISCOVERED 0
#define bj_QUESTTYPE_REQ_UNDISCOVERED 1
#define bj_QUESTTYPE_OPT_DISCOVERED 2
#define bj_QUESTTYPE_OPT_UNDISCOVERED 3
#define bj_QUESTMESSAGE_DISCOVERED 0
#define bj_QUESTMESSAGE_UPDATED 1
#define bj_QUESTMESSAGE_COMPLETED 2
#define bj_QUESTMESSAGE_FAILED 3
#define bj_QUESTMESSAGE_REQUIREMENT 4
#define bj_QUESTMESSAGE_MISSIONFAILED 5
#define bj_QUESTMESSAGE_ALWAYSHINT 6
#define bj_QUESTMESSAGE_HINT 7
#define bj_QUESTMESSAGE_SECRET 8
#define bj_QUESTMESSAGE_UNITACQUIRED 9
#define bj_QUESTMESSAGE_UNITAVAILABLE 10
#define bj_QUESTMESSAGE_ITEMACQUIRED 11
#define bj_QUESTMESSAGE_WARNING 12
#define bj_SORTTYPE_SORTBYVALUE 0
#define bj_SORTTYPE_SORTBYPLAYER 1
#define bj_SORTTYPE_SORTBYLABEL 2
#define bj_CINEFADETYPE_FADEIN 0
#define bj_CINEFADETYPE_FADEOUT 1
#define bj_CINEFADETYPE_FADEOUTIN 2
#define bj_REMOVEBUFFS_POSITIVE 0
#define bj_REMOVEBUFFS_NEGATIVE 1
#define bj_REMOVEBUFFS_ALL 2
#define bj_REMOVEBUFFS_NONTLIFE 3
#define bj_BUFF_POLARITY_POSITIVE 0
#define bj_BUFF_POLARITY_NEGATIVE 1
#define bj_BUFF_POLARITY_EITHER 2
#define bj_BUFF_RESIST_MAGIC 0
#define bj_BUFF_RESIST_PHYSICAL 1
#define bj_BUFF_RESIST_EITHER 2
#define bj_BUFF_RESIST_BOTH 3
#define bj_HEROSTAT_STR 0
#define bj_HEROSTAT_AGI 1
#define bj_HEROSTAT_INT 2
#define bj_MODIFYMETHOD_ADD 0
#define bj_MODIFYMETHOD_SUB 1
#define bj_MODIFYMETHOD_SET 2
#define bj_UNIT_STATE_METHOD_ABSOLUTE 0
#define bj_UNIT_STATE_METHOD_RELATIVE 1
#define bj_UNIT_STATE_METHOD_DEFAULTS 2
#define bj_UNIT_STATE_METHOD_MAXIMUM 3
#define bj_GATEOPERATION_CLOSE 0
#define bj_GATEOPERATION_OPEN 1
#define bj_GATEOPERATION_DESTROY 2
#define bj_GAMECACHE_BOOLEAN 0
#define bj_GAMECACHE_INTEGER 1
#define bj_GAMECACHE_REAL 2
#define bj_GAMECACHE_UNIT 3
#define bj_GAMECACHE_STRING 4
#define bj_ITEM_STATUS_HIDDEN 0
#define bj_ITEM_STATUS_OWNED 1
#define bj_ITEM_STATUS_INVULNERABLE 2
#define bj_ITEM_STATUS_POWERUP 3
#define bj_ITEM_STATUS_SELLABLE 4
#define bj_ITEM_STATUS_PAWNABLE 5
#define bj_ITEMCODE_STATUS_POWERUP 0
#define bj_ITEMCODE_STATUS_SELLABLE 1
#define bj_ITEMCODE_STATUS_PAWNABLE 2
#define bj_MINIMAPPINGSTYLE_SIMPLE 0
#define bj_MINIMAPPINGSTYLE_FLASHY 1
#define bj_MINIMAPPINGSTYLE_ATTACK 2
#define bj_CORPSE_MAX_DEATH_TIME 8.00
#define bj_CORPSETYPE_FLESH 0
#define bj_CORPSETYPE_BONE 1
#define bj_ELEVATOR_BLOCKER_CODE 'DTep'
#define bj_ELEVATOR_CODE01 'DTrf'
#define bj_ELEVATOR_CODE02 'DTrx'
#define bj_ELEVATOR_WALL_TYPE_ALL 0
#define bj_ELEVATOR_WALL_TYPE_EAST 1
#define bj_ELEVATOR_WALL_TYPE_NORTH 2
#define bj_ELEVATOR_WALL_TYPE_SOUTH 3
#define bj_ELEVATOR_WALL_TYPE_WEST 4
//Global vars
extern JASSCPP::force bj_FORCE_ALL_PLAYERS;
extern JASSCPP::force bj_FORCE_PLAYER[32768];
extern JASSCPP::integer bj_MELEE_MAX_TWINKED_HEROES;
extern JASSCPP::rect bj_mapInitialPlayableArea;
extern JASSCPP::rect bj_mapInitialCameraBounds;
extern JASSCPP::integer bj_forLoopAIndex;
extern JASSCPP::integer bj_forLoopBIndex;
extern JASSCPP::integer bj_forLoopAIndexEnd;
extern JASSCPP::integer bj_forLoopBIndexEnd;
extern JASSCPP::boolean bj_slotControlReady;
extern JASSCPP::boolean bj_slotControlUsed[32768];
extern JASSCPP::mapcontrol bj_slotControl[32768];
extern JASSCPP::timer bj_gameStartedTimer;
extern JASSCPP::boolean bj_gameStarted;
extern JASSCPP::timer bj_volumeGroupsTimer;
extern JASSCPP::boolean bj_isSinglePlayer;
extern JASSCPP::trigger bj_dncSoundsDay;
extern JASSCPP::trigger bj_dncSoundsNight;
extern JASSCPP::sound bj_dayAmbientSound;
extern JASSCPP::sound bj_nightAmbientSound;
extern JASSCPP::trigger bj_dncSoundsDawn;
extern JASSCPP::trigger bj_dncSoundsDusk;
extern JASSCPP::sound bj_dawnSound;
extern JASSCPP::sound bj_duskSound;
extern JASSCPP::boolean bj_useDawnDuskSounds;
extern JASSCPP::boolean bj_dncIsDaytime;
extern JASSCPP::sound bj_rescueSound;
extern JASSCPP::sound bj_questDiscoveredSound;
extern JASSCPP::sound bj_questUpdatedSound;
extern JASSCPP::sound bj_questCompletedSound;
extern JASSCPP::sound bj_questFailedSound;
extern JASSCPP::sound bj_questHintSound;
extern JASSCPP::sound bj_questSecretSound;
extern JASSCPP::sound bj_questItemAcquiredSound;
extern JASSCPP::sound bj_questWarningSound;
extern JASSCPP::sound bj_victoryDialogSound;
extern JASSCPP::sound bj_defeatDialogSound;
extern JASSCPP::trigger bj_stockItemPurchased;
extern JASSCPP::timer bj_stockUpdateTimer;
extern JASSCPP::boolean bj_stockAllowedPermanent[32768];
extern JASSCPP::boolean bj_stockAllowedCharged[32768];
extern JASSCPP::boolean bj_stockAllowedArtifact[32768];
extern JASSCPP::integer bj_stockPickedItemLevel;
extern JASSCPP::itemtype bj_stockPickedItemType;
extern JASSCPP::trigger bj_meleeVisibilityTrained;
extern JASSCPP::boolean bj_meleeVisibilityIsDay;
extern JASSCPP::boolean bj_meleeGrantHeroItems;
extern JASSCPP::location bj_meleeNearestMineToLoc;
extern JASSCPP::unit bj_meleeNearestMine;
extern JASSCPP::real bj_meleeNearestMineDist;
extern JASSCPP::boolean bj_meleeGameOver;
extern JASSCPP::boolean bj_meleeDefeated[32768];
extern JASSCPP::boolean bj_meleeVictoried[32768];
extern JASSCPP::unit bj_ghoul[32768];
extern JASSCPP::timer bj_crippledTimer[32768];
extern JASSCPP::timerdialog bj_crippledTimerWindows[32768];
extern JASSCPP::boolean bj_playerIsCrippled[32768];
extern JASSCPP::boolean bj_playerIsExposed[32768];
extern JASSCPP::boolean bj_finishSoonAllExposed;
extern JASSCPP::timerdialog bj_finishSoonTimerDialog;
extern JASSCPP::integer bj_meleeTwinkedHeroes[32768];
extern JASSCPP::trigger bj_rescueUnitBehavior;
extern JASSCPP::boolean bj_rescueChangeColorUnit;
extern JASSCPP::boolean bj_rescueChangeColorBldg;
extern JASSCPP::timer bj_cineSceneEndingTimer;
extern JASSCPP::sound bj_cineSceneLastSound;
extern JASSCPP::trigger bj_cineSceneBeingSkipped;
extern JASSCPP::gamespeed bj_cineModePriorSpeed;
extern JASSCPP::boolean bj_cineModePriorFogSetting;
extern JASSCPP::boolean bj_cineModePriorMaskSetting;
extern JASSCPP::boolean bj_cineModeAlreadyIn;
extern JASSCPP::boolean bj_cineModePriorDawnDusk;
extern JASSCPP::integer bj_cineModeSavedSeed;
extern JASSCPP::timer bj_cineFadeFinishTimer;
extern JASSCPP::timer bj_cineFadeContinueTimer;
extern JASSCPP::real bj_cineFadeContinueRed;
extern JASSCPP::real bj_cineFadeContinueGreen;
extern JASSCPP::real bj_cineFadeContinueBlue;
extern JASSCPP::real bj_cineFadeContinueTrans;
extern JASSCPP::real bj_cineFadeContinueDuration;
extern JASSCPP::string bj_cineFadeContinueTex;
extern JASSCPP::integer bj_queuedExecTotal;
extern JASSCPP::trigger bj_queuedExecTriggers[32768];
extern JASSCPP::boolean bj_queuedExecUseConds[32768];
extern JASSCPP::timer bj_queuedExecTimeoutTimer;
extern JASSCPP::trigger bj_queuedExecTimeout;
extern JASSCPP::integer bj_destInRegionDiesCount;
extern JASSCPP::trigger bj_destInRegionDiesTrig;
extern JASSCPP::integer bj_groupCountUnits;
extern JASSCPP::integer bj_forceCountPlayers;
extern JASSCPP::integer bj_groupEnumTypeId;
extern JASSCPP::player bj_groupEnumOwningPlayer;
extern JASSCPP::group bj_groupAddGroupDest;
extern JASSCPP::group bj_groupRemoveGroupDest;
extern JASSCPP::integer bj_groupRandomConsidered;
extern JASSCPP::unit bj_groupRandomCurrentPick;
extern JASSCPP::group bj_groupLastCreatedDest;
extern JASSCPP::group bj_randomSubGroupGroup;
extern JASSCPP::integer bj_randomSubGroupWant;
extern JASSCPP::integer bj_randomSubGroupTotal;
extern JASSCPP::real bj_randomSubGroupChance;
extern JASSCPP::integer bj_destRandomConsidered;
extern JASSCPP::destructable bj_destRandomCurrentPick;
extern JASSCPP::destructable bj_elevatorWallBlocker;
extern JASSCPP::destructable bj_elevatorNeighbor;
extern JASSCPP::integer bj_itemRandomConsidered;
extern JASSCPP::item bj_itemRandomCurrentPick;
extern JASSCPP::integer bj_forceRandomConsidered;
extern JASSCPP::player bj_forceRandomCurrentPick;
extern JASSCPP::unit bj_makeUnitRescuableUnit;
extern JASSCPP::boolean bj_makeUnitRescuableFlag;
extern JASSCPP::boolean bj_pauseAllUnitsFlag;
extern JASSCPP::location bj_enumDestructableCenter;
extern JASSCPP::real bj_enumDestructableRadius;
extern JASSCPP::playercolor bj_setPlayerTargetColor;
extern JASSCPP::boolean bj_isUnitGroupDeadResult;
extern JASSCPP::boolean bj_isUnitGroupEmptyResult;
extern JASSCPP::boolean bj_isUnitGroupInRectResult;
extern JASSCPP::rect bj_isUnitGroupInRectRect;
extern JASSCPP::boolean bj_changeLevelShowScores;
extern JASSCPP::string bj_changeLevelMapName;
extern JASSCPP::group bj_suspendDecayFleshGroup;
extern JASSCPP::group bj_suspendDecayBoneGroup;
extern JASSCPP::timer bj_delayedSuspendDecayTimer;
extern JASSCPP::trigger bj_delayedSuspendDecayTrig;
extern JASSCPP::integer bj_livingPlayerUnitsTypeId;
extern JASSCPP::widget bj_lastDyingWidget;
extern JASSCPP::integer bj_randDistCount;
extern JASSCPP::integer bj_randDistID[32768];
extern JASSCPP::integer bj_randDistChance[32768];
extern JASSCPP::unit bj_lastCreatedUnit;
extern JASSCPP::item bj_lastCreatedItem;
extern JASSCPP::item bj_lastRemovedItem;
extern JASSCPP::unit bj_lastHauntedGoldMine;
extern JASSCPP::destructable bj_lastCreatedDestructable;
extern JASSCPP::group bj_lastCreatedGroup;
extern JASSCPP::fogmodifier bj_lastCreatedFogModifier;
extern JASSCPP::effect bj_lastCreatedEffect;
extern JASSCPP::weathereffect bj_lastCreatedWeatherEffect;
extern JASSCPP::terraindeformation bj_lastCreatedTerrainDeformation;
extern JASSCPP::quest bj_lastCreatedQuest;
extern JASSCPP::questitem bj_lastCreatedQuestItem;
extern JASSCPP::defeatcondition bj_lastCreatedDefeatCondition;
extern JASSCPP::timer bj_lastStartedTimer;
extern JASSCPP::timerdialog bj_lastCreatedTimerDialog;
extern JASSCPP::leaderboard bj_lastCreatedLeaderboard;
extern JASSCPP::sound bj_lastPlayedSound;
extern JASSCPP::string bj_lastPlayedMusic;
extern JASSCPP::real bj_lastTransmissionDuration;
extern JASSCPP::gamecache bj_lastCreatedGameCache;
extern JASSCPP::unit bj_lastLoadedUnit;
extern JASSCPP::button bj_lastCreatedButton;
extern JASSCPP::unit bj_lastReplacedUnit;
extern JASSCPP::texttag bj_lastCreatedTextTag;
extern JASSCPP::boolexpr filterIssueHauntOrderAtLocBJ;
extern JASSCPP::boolexpr filterEnumDestructablesInCircleBJ;
extern JASSCPP::boolexpr filterGetUnitsInRectOfPlayer;
extern JASSCPP::boolexpr filterGetUnitsOfTypeIdAll;
extern JASSCPP::boolexpr filterGetUnitsOfPlayerAndTypeId;
extern JASSCPP::boolexpr filterMeleeTrainedUnitIsHeroBJ;
extern JASSCPP::boolexpr filterLivingPlayerUnitsOfTypeId;
extern JASSCPP::boolean bj_wantDestroyGroup;
//Functions
void BJDebugMsg(JASSCPP::string msg);
JASSCPP::real RMinBJ(JASSCPP::real a,JASSCPP::real b);
JASSCPP::real RMaxBJ(JASSCPP::real a,JASSCPP::real b);
JASSCPP::real RAbsBJ(JASSCPP::real a);
JASSCPP::real RSignBJ(JASSCPP::real a);
JASSCPP::integer IMinBJ(JASSCPP::integer a,JASSCPP::integer b);
JASSCPP::integer IMaxBJ(JASSCPP::integer a,JASSCPP::integer b);
JASSCPP::integer IAbsBJ(JASSCPP::integer a);
JASSCPP::integer ISignBJ(JASSCPP::integer a);
JASSCPP::real SinBJ(JASSCPP::real degrees);
JASSCPP::real CosBJ(JASSCPP::real degrees);
JASSCPP::real TanBJ(JASSCPP::real degrees);
JASSCPP::real AsinBJ(JASSCPP::real degrees);
JASSCPP::real AcosBJ(JASSCPP::real degrees);
JASSCPP::real AtanBJ(JASSCPP::real degrees);
JASSCPP::real Atan2BJ(JASSCPP::real y,JASSCPP::real x);
JASSCPP::real AngleBetweenPoints(JASSCPP::location locA,JASSCPP::location locB);
JASSCPP::real DistanceBetweenPoints(JASSCPP::location locA,JASSCPP::location locB);
JASSCPP::location PolarProjectionBJ(JASSCPP::location source,JASSCPP::real dist,JASSCPP::real angle);
JASSCPP::real GetRandomDirectionDeg();
JASSCPP::real GetRandomPercentageBJ();
JASSCPP::location GetRandomLocInRect(JASSCPP::rect whichRect);
JASSCPP::integer ModuloInteger(JASSCPP::integer dividend,JASSCPP::integer divisor);
JASSCPP::real ModuloReal(JASSCPP::real dividend,JASSCPP::real divisor);
JASSCPP::location OffsetLocation(JASSCPP::location loc,JASSCPP::real dx,JASSCPP::real dy);
JASSCPP::rect OffsetRectBJ(JASSCPP::rect r,JASSCPP::real dx,JASSCPP::real dy);
JASSCPP::rect RectFromCenterSizeBJ(JASSCPP::location center,JASSCPP::real width,JASSCPP::real height);
JASSCPP::boolean RectContainsCoords(JASSCPP::rect r,JASSCPP::real x,JASSCPP::real y);
JASSCPP::boolean RectContainsLoc(JASSCPP::rect r,JASSCPP::location loc);
JASSCPP::boolean RectContainsUnit(JASSCPP::rect r,JASSCPP::unit whichUnit);
JASSCPP::boolean RectContainsItem(JASSCPP::item whichItem,JASSCPP::rect r);
void ConditionalTriggerExecute(JASSCPP::trigger trig);
JASSCPP::boolean TriggerExecuteBJ(JASSCPP::trigger trig,JASSCPP::boolean checkConditions);
JASSCPP::boolean PostTriggerExecuteBJ(JASSCPP::trigger trig,JASSCPP::boolean checkConditions);
void QueuedTriggerCheck();
JASSCPP::integer QueuedTriggerGetIndex(JASSCPP::trigger trig);
JASSCPP::boolean QueuedTriggerRemoveByIndex(JASSCPP::integer trigIndex);
JASSCPP::boolean QueuedTriggerAttemptExec();
JASSCPP::boolean QueuedTriggerAddBJ(JASSCPP::trigger trig,JASSCPP::boolean checkConditions);
void QueuedTriggerRemoveBJ(JASSCPP::trigger trig);
void QueuedTriggerDoneBJ();
void QueuedTriggerClearBJ();
void QueuedTriggerClearInactiveBJ();
JASSCPP::integer QueuedTriggerCountBJ();
JASSCPP::boolean IsTriggerQueueEmptyBJ();
JASSCPP::boolean IsTriggerQueuedBJ(JASSCPP::trigger trig);
JASSCPP::integer GetForLoopIndexA();
void SetForLoopIndexA(JASSCPP::integer newIndex);
JASSCPP::integer GetForLoopIndexB();
void SetForLoopIndexB(JASSCPP::integer newIndex);
void PolledWait(JASSCPP::real duration);
JASSCPP::integer IntegerTertiaryOp(JASSCPP::boolean flag,JASSCPP::integer valueA,JASSCPP::integer valueB);
void DoNothing();
void CommentString(JASSCPP::string commentString);
JASSCPP::string StringIdentity(JASSCPP::string theString);
JASSCPP::boolean GetBooleanAnd(JASSCPP::boolean valueA,JASSCPP::boolean valueB);
JASSCPP::boolean GetBooleanOr(JASSCPP::boolean valueA,JASSCPP::boolean valueB);
JASSCPP::integer PercentToInt(JASSCPP::real percentage,JASSCPP::integer max);
JASSCPP::integer PercentTo255(JASSCPP::real percentage);
JASSCPP::real GetTimeOfDay();
void SetTimeOfDay(JASSCPP::real whatTime);
void SetTimeOfDayScalePercentBJ(JASSCPP::real scalePercent);
JASSCPP::real GetTimeOfDayScalePercentBJ();
void PlaySound(JASSCPP::string soundName);
JASSCPP::boolean CompareLocationsBJ(JASSCPP::location A,JASSCPP::location B);
JASSCPP::boolean CompareRectsBJ(JASSCPP::rect A,JASSCPP::rect B);
JASSCPP::rect GetRectFromCircleBJ(JASSCPP::location center,JASSCPP::real radius);
JASSCPP::camerasetup GetCurrentCameraSetup();
void CameraSetupApplyForPlayer(JASSCPP::boolean doPan,JASSCPP::camerasetup whichSetup,JASSCPP::player whichPlayer,JASSCPP::real duration);
JASSCPP::real CameraSetupGetFieldSwap(JASSCPP::camerafield whichField,JASSCPP::camerasetup whichSetup);
void SetCameraFieldForPlayer(JASSCPP::player whichPlayer,JASSCPP::camerafield whichField,JASSCPP::real value,JASSCPP::real duration);
void SetCameraTargetControllerNoZForPlayer(JASSCPP::player whichPlayer,JASSCPP::unit whichUnit,JASSCPP::real xoffset,JASSCPP::real yoffset,JASSCPP::boolean inheritOrientation);
void SetCameraPositionForPlayer(JASSCPP::player whichPlayer,JASSCPP::real x,JASSCPP::real y);
void SetCameraPositionLocForPlayer(JASSCPP::player whichPlayer,JASSCPP::location loc);
void RotateCameraAroundLocBJ(JASSCPP::real degrees,JASSCPP::location loc,JASSCPP::player whichPlayer,JASSCPP::real duration);
void PanCameraToForPlayer(JASSCPP::player whichPlayer,JASSCPP::real x,JASSCPP::real y);
void PanCameraToLocForPlayer(JASSCPP::player whichPlayer,JASSCPP::location loc);
void PanCameraToTimedForPlayer(JASSCPP::player whichPlayer,JASSCPP::real x,JASSCPP::real y,JASSCPP::real duration);
void PanCameraToTimedLocForPlayer(JASSCPP::player whichPlayer,JASSCPP::location loc,JASSCPP::real duration);
void PanCameraToTimedLocWithZForPlayer(JASSCPP::player whichPlayer,JASSCPP::location loc,JASSCPP::real zOffset,JASSCPP::real duration);
void SmartCameraPanBJ(JASSCPP::player whichPlayer,JASSCPP::location loc,JASSCPP::real duration);
void SetCinematicCameraForPlayer(JASSCPP::player whichPlayer,JASSCPP::string cameraModelFile);
void ResetToGameCameraForPlayer(JASSCPP::player whichPlayer,JASSCPP::real duration);
void CameraSetSourceNoiseForPlayer(JASSCPP::player whichPlayer,JASSCPP::real magnitude,JASSCPP::real velocity);
void CameraSetTargetNoiseForPlayer(JASSCPP::player whichPlayer,JASSCPP::real magnitude,JASSCPP::real velocity);
void CameraSetEQNoiseForPlayer(JASSCPP::player whichPlayer,JASSCPP::real magnitude);
void CameraClearNoiseForPlayer(JASSCPP::player whichPlayer);
JASSCPP::rect GetCurrentCameraBoundsMapRectBJ();
JASSCPP::rect GetCameraBoundsMapRect();
JASSCPP::rect GetPlayableMapRect();
JASSCPP::rect GetEntireMapRect();
void SetCameraBoundsToRect(JASSCPP::rect r);
void SetCameraBoundsToRectForPlayerBJ(JASSCPP::player whichPlayer,JASSCPP::rect r);
void AdjustCameraBoundsBJ(JASSCPP::integer adjustMethod,JASSCPP::real dxWest,JASSCPP::real dxEast,JASSCPP::real dyNorth,JASSCPP::real dySouth);
void AdjustCameraBoundsForPlayerBJ(JASSCPP::integer adjustMethod,JASSCPP::player whichPlayer,JASSCPP::real dxWest,JASSCPP::real dxEast,JASSCPP::real dyNorth,JASSCPP::real dySouth);
void SetCameraQuickPositionForPlayer(JASSCPP::player whichPlayer,JASSCPP::real x,JASSCPP::real y);
void SetCameraQuickPositionLocForPlayer(JASSCPP::player whichPlayer,JASSCPP::location loc);
void SetCameraQuickPositionLoc(JASSCPP::location loc);
void StopCameraForPlayerBJ(JASSCPP::player whichPlayer);
void SetCameraOrientControllerForPlayerBJ(JASSCPP::player whichPlayer,JASSCPP::unit whichUnit,JASSCPP::real xoffset,JASSCPP::real yoffset);
void CameraSetSmoothingFactorBJ(JASSCPP::real factor);
void CameraResetSmoothingFactorBJ();
void DisplayTextToForce(JASSCPP::force toForce,JASSCPP::string message);
void DisplayTimedTextToForce(JASSCPP::force toForce,JASSCPP::real duration,JASSCPP::string message);
void ClearTextMessagesBJ(JASSCPP::force toForce);
JASSCPP::string SubStringBJ(JASSCPP::string source,JASSCPP::integer start,JASSCPP::integer end);
JASSCPP::event TriggerRegisterTimerEventPeriodic(JASSCPP::trigger trig,JASSCPP::real timeout);
JASSCPP::event TriggerRegisterTimerEventSingle(JASSCPP::trigger trig,JASSCPP::real timeout);
JASSCPP::event TriggerRegisterTimerExpireEventBJ(JASSCPP::trigger trig,JASSCPP::timer t);
JASSCPP::event TriggerRegisterPlayerUnitEventSimple(JASSCPP::trigger trig,JASSCPP::player whichPlayer,JASSCPP::playerunitevent whichEvent);
void TriggerRegisterAnyUnitEventBJ(JASSCPP::trigger trig,JASSCPP::playerunitevent whichEvent);
JASSCPP::event TriggerRegisterPlayerSelectionEventBJ(JASSCPP::trigger trig,JASSCPP::player whichPlayer,JASSCPP::boolean selected);
JASSCPP::event TriggerRegisterPlayerKeyEventBJ(JASSCPP::trigger trig,JASSCPP::player whichPlayer,JASSCPP::integer keType,JASSCPP::integer keKey);
JASSCPP::event TriggerRegisterPlayerEventVictory(JASSCPP::trigger trig,JASSCPP::player whichPlayer);
JASSCPP::event TriggerRegisterPlayerEventDefeat(JASSCPP::trigger trig,JASSCPP::player whichPlayer);
JASSCPP::event TriggerRegisterPlayerEventAllianceChanged(JASSCPP::trigger trig,JASSCPP::player whichPlayer);
JASSCPP::event TriggerRegisterPlayerEventEndCinematic(JASSCPP::trigger trig,JASSCPP::player whichPlayer);
JASSCPP::event TriggerRegisterGameStateEventTimeOfDay(JASSCPP::trigger trig,JASSCPP::limitop opcode,JASSCPP::real limitval);
JASSCPP::event TriggerRegisterEnterRegionSimple(JASSCPP::trigger trig,JASSCPP::region whichRegion);
JASSCPP::event TriggerRegisterLeaveRegionSimple(JASSCPP::trigger trig,JASSCPP::region whichRegion);
JASSCPP::event TriggerRegisterEnterRectSimple(JASSCPP::trigger trig,JASSCPP::rect r);
JASSCPP::event TriggerRegisterLeaveRectSimple(JASSCPP::trigger trig,JASSCPP::rect r);
JASSCPP::event TriggerRegisterDistanceBetweenUnits(JASSCPP::trigger trig,JASSCPP::unit whichUnit,JASSCPP::boolexpr condition,JASSCPP::real range);
JASSCPP::event TriggerRegisterUnitInRangeSimple(JASSCPP::trigger trig,JASSCPP::real range,JASSCPP::unit whichUnit);
JASSCPP::event TriggerRegisterUnitLifeEvent(JASSCPP::trigger trig,JASSCPP::unit whichUnit,JASSCPP::limitop opcode,JASSCPP::real limitval);
JASSCPP::event TriggerRegisterUnitManaEvent(JASSCPP::trigger trig,JASSCPP::unit whichUnit,JASSCPP::limitop opcode,JASSCPP::real limitval);
JASSCPP::event TriggerRegisterDialogEventBJ(JASSCPP::trigger trig,JASSCPP::dialog whichDialog);
JASSCPP::event TriggerRegisterShowSkillEventBJ(JASSCPP::trigger trig);
JASSCPP::event TriggerRegisterBuildSubmenuEventBJ(JASSCPP::trigger trig);
JASSCPP::event TriggerRegisterGameLoadedEventBJ(JASSCPP::trigger trig);
JASSCPP::event TriggerRegisterGameSavedEventBJ(JASSCPP::trigger trig);
void RegisterDestDeathInRegionEnum();
JASSCPP::event TriggerRegisterDestDeathInRegionEvent(JASSCPP::trigger trig,JASSCPP::rect r);
JASSCPP::weathereffect AddWeatherEffectSaveLast(JASSCPP::rect where,JASSCPP::integer effectID);
JASSCPP::weathereffect GetLastCreatedWeatherEffect();
void RemoveWeatherEffectBJ(JASSCPP::weathereffect whichWeatherEffect);
JASSCPP::terraindeformation TerrainDeformationCraterBJ(JASSCPP::real duration,JASSCPP::boolean permanent,JASSCPP::location where,JASSCPP::real radius,JASSCPP::real depth);
JASSCPP::terraindeformation TerrainDeformationRippleBJ(JASSCPP::real duration,JASSCPP::boolean limitNeg,JASSCPP::location where,JASSCPP::real startRadius,JASSCPP::real endRadius,JASSCPP::real depth,JASSCPP::real wavePeriod,JASSCPP::real waveWidth);
JASSCPP::terraindeformation TerrainDeformationWaveBJ(JASSCPP::real duration,JASSCPP::location source,JASSCPP::location target,JASSCPP::real radius,JASSCPP::real depth,JASSCPP::real trailDelay);
JASSCPP::terraindeformation TerrainDeformationRandomBJ(JASSCPP::real duration,JASSCPP::location where,JASSCPP::real radius,JASSCPP::real minDelta,JASSCPP::real maxDelta,JASSCPP::real updateInterval);
void TerrainDeformationStopBJ(JASSCPP::terraindeformation deformation,JASSCPP::real duration);
JASSCPP::terraindeformation GetLastCreatedTerrainDeformation();
JASSCPP::integer GetTerrainCliffLevelBJ(JASSCPP::location where);
void SetWaterBaseColorBJ(JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency);
JASSCPP::fogmodifier CreateFogModifierRectSimple(JASSCPP::player whichPlayer,JASSCPP::fogstate whichFogState,JASSCPP::rect r,JASSCPP::boolean afterUnits);
JASSCPP::fogmodifier CreateFogModifierRadiusLocSimple(JASSCPP::player whichPlayer,JASSCPP::fogstate whichFogState,JASSCPP::location center,JASSCPP::real radius,JASSCPP::boolean afterUnits);
JASSCPP::fogmodifier CreateFogModifierRectBJ(JASSCPP::boolean enabled,JASSCPP::player whichPlayer,JASSCPP::fogstate whichFogState,JASSCPP::rect r);
JASSCPP::fogmodifier CreateFogModifierRadiusLocBJ(JASSCPP::boolean enabled,JASSCPP::player whichPlayer,JASSCPP::fogstate whichFogState,JASSCPP::location center,JASSCPP::real radius);
JASSCPP::fogmodifier GetLastCreatedFogModifier();
void FogEnableOn();
void FogEnableOff();
void FogMaskEnableOn();
void FogMaskEnableOff();
void UseTimeOfDayBJ(JASSCPP::boolean flag);
void SetTerrainFogExBJ(JASSCPP::integer style,JASSCPP::real zstart,JASSCPP::real zend,JASSCPP::real density,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue);
void ResetTerrainFogBJ();
void SetDoodadAnimationBJ(JASSCPP::string animName,JASSCPP::integer doodadID,JASSCPP::real radius,JASSCPP::location center);
void SetDoodadAnimationRectBJ(JASSCPP::string animName,JASSCPP::integer doodadID,JASSCPP::rect r);
void AddUnitAnimationPropertiesBJ(JASSCPP::boolean add,JASSCPP::string animProperties,JASSCPP::unit whichUnit);
void PlaySoundBJ(JASSCPP::sound soundHandle);
void StopSoundBJ(JASSCPP::sound soundHandle,JASSCPP::boolean fadeOut);
void SetSoundVolumeBJ(JASSCPP::sound soundHandle,JASSCPP::real volumePercent);
void SetSoundOffsetBJ(JASSCPP::real newOffset,JASSCPP::sound soundHandle);
void SetSoundDistanceCutoffBJ(JASSCPP::sound soundHandle,JASSCPP::real cutoff);
void SetSoundPitchBJ(JASSCPP::sound soundHandle,JASSCPP::real pitch);
void SetSoundPositionLocBJ(JASSCPP::sound soundHandle,JASSCPP::location loc,JASSCPP::real z);
void AttachSoundToUnitBJ(JASSCPP::sound soundHandle,JASSCPP::unit whichUnit);
void SetSoundConeAnglesBJ(JASSCPP::sound soundHandle,JASSCPP::real inside,JASSCPP::real outside,JASSCPP::real outsideVolumePercent);
void KillSoundWhenDoneBJ(JASSCPP::sound soundHandle);
void PlaySoundAtPointBJ(JASSCPP::sound soundHandle,JASSCPP::real volumePercent,JASSCPP::location loc,JASSCPP::real z);
void PlaySoundOnUnitBJ(JASSCPP::sound soundHandle,JASSCPP::real volumePercent,JASSCPP::unit whichUnit);
void PlaySoundFromOffsetBJ(JASSCPP::sound soundHandle,JASSCPP::real volumePercent,JASSCPP::real startingOffset);
void PlayMusicBJ(JASSCPP::string musicFileName);
void PlayMusicExBJ(JASSCPP::string musicFileName,JASSCPP::real startingOffset,JASSCPP::real fadeInTime);
void SetMusicOffsetBJ(JASSCPP::real newOffset);
void PlayThematicMusicBJ(JASSCPP::string musicName);
void PlayThematicMusicExBJ(JASSCPP::string musicName,JASSCPP::real startingOffset);
void SetThematicMusicOffsetBJ(JASSCPP::real newOffset);
void EndThematicMusicBJ();
void StopMusicBJ(JASSCPP::boolean fadeOut);
void ResumeMusicBJ();
void SetMusicVolumeBJ(JASSCPP::real volumePercent);
JASSCPP::real GetSoundDurationBJ(JASSCPP::sound soundHandle);
JASSCPP::real GetSoundFileDurationBJ(JASSCPP::string musicFileName);
JASSCPP::sound GetLastPlayedSound();
JASSCPP::string GetLastPlayedMusic();
void VolumeGroupSetVolumeBJ(JASSCPP::volumegroup vgroup,JASSCPP::real percent);
void SetCineModeVolumeGroupsImmediateBJ();
void SetCineModeVolumeGroupsBJ();
void SetSpeechVolumeGroupsImmediateBJ();
void SetSpeechVolumeGroupsBJ();
void VolumeGroupResetImmediateBJ();
void VolumeGroupResetBJ();
JASSCPP::boolean GetSoundIsPlayingBJ(JASSCPP::sound soundHandle);
void WaitForSoundBJ(JASSCPP::sound soundHandle,JASSCPP::real offset);
void SetMapMusicIndexedBJ(JASSCPP::string musicName,JASSCPP::integer index);
void SetMapMusicRandomBJ(JASSCPP::string musicName);
void ClearMapMusicBJ();
void SetStackedSoundBJ(JASSCPP::boolean add,JASSCPP::sound soundHandle,JASSCPP::rect r);
void StartSoundForPlayerBJ(JASSCPP::player whichPlayer,JASSCPP::sound soundHandle);
void VolumeGroupSetVolumeForPlayerBJ(JASSCPP::player whichPlayer,JASSCPP::volumegroup vgroup,JASSCPP::real scale);
void EnableDawnDusk(JASSCPP::boolean flag);
JASSCPP::boolean IsDawnDuskEnabled();
void SetAmbientDaySound(JASSCPP::string inLabel);
void SetAmbientNightSound(JASSCPP::string inLabel);
JASSCPP::effect AddSpecialEffectLocBJ(JASSCPP::location where,JASSCPP::string modelName);
JASSCPP::effect AddSpecialEffectTargetUnitBJ(JASSCPP::string attachPointName,JASSCPP::widget targetWidget,JASSCPP::string modelName);
void DestroyEffectBJ(JASSCPP::effect whichEffect);
JASSCPP::effect GetLastCreatedEffectBJ();
JASSCPP::location GetItemLoc(JASSCPP::item whichItem);
JASSCPP::real GetItemLifeBJ(JASSCPP::widget whichWidget);
void SetItemLifeBJ(JASSCPP::widget whichWidget,JASSCPP::real life);
void AddHeroXPSwapped(JASSCPP::integer xpToAdd,JASSCPP::unit whichHero,JASSCPP::boolean showEyeCandy);
void SetHeroLevelBJ(JASSCPP::unit whichHero,JASSCPP::integer newLevel,JASSCPP::boolean showEyeCandy);
JASSCPP::boolean UnitAddItemSwapped(JASSCPP::item whichItem,JASSCPP::unit whichHero);
JASSCPP::item UnitAddItemByIdSwapped(JASSCPP::integer itemId,JASSCPP::unit whichHero);
void UnitRemoveItemSwapped(JASSCPP::item whichItem,JASSCPP::unit whichHero);
JASSCPP::item UnitRemoveItemFromSlotSwapped(JASSCPP::integer itemSlot,JASSCPP::unit whichHero);
JASSCPP::item CreateItemLoc(JASSCPP::integer itemId,JASSCPP::location loc);
JASSCPP::item GetLastCreatedItem();
JASSCPP::item GetLastRemovedItem();
void SetItemPositionLoc(JASSCPP::item whichItem,JASSCPP::location loc);
JASSCPP::integer GetLearnedSkillBJ();
void SuspendHeroXPBJ(JASSCPP::boolean flag,JASSCPP::unit whichHero);
void SetPlayerHandicapXPBJ(JASSCPP::player whichPlayer,JASSCPP::real handicapPercent);
JASSCPP::real GetPlayerHandicapXPBJ(JASSCPP::player whichPlayer);
void SetPlayerHandicapBJ(JASSCPP::player whichPlayer,JASSCPP::real handicapPercent);
JASSCPP::real GetPlayerHandicapBJ(JASSCPP::player whichPlayer);
JASSCPP::integer GetHeroStatBJ(JASSCPP::integer whichStat,JASSCPP::unit whichHero,JASSCPP::boolean includeBonuses);
void SetHeroStat(JASSCPP::unit whichHero,JASSCPP::integer whichStat,JASSCPP::integer value);
void ModifyHeroStat(JASSCPP::integer whichStat,JASSCPP::unit whichHero,JASSCPP::integer modifyMethod,JASSCPP::integer value);
JASSCPP::boolean ModifyHeroSkillPoints(JASSCPP::unit whichHero,JASSCPP::integer modifyMethod,JASSCPP::integer value);
JASSCPP::boolean UnitUseItemDestructable(JASSCPP::unit whichUnit,JASSCPP::item whichItem,JASSCPP::widget target);
JASSCPP::boolean UnitUseItemPointLoc(JASSCPP::unit whichUnit,JASSCPP::item whichItem,JASSCPP::location loc);
JASSCPP::item UnitItemInSlotBJ(JASSCPP::unit whichUnit,JASSCPP::integer itemSlot);
JASSCPP::integer GetInventoryIndexOfItemTypeBJ(JASSCPP::unit whichUnit,JASSCPP::integer itemId);
JASSCPP::item GetItemOfTypeFromUnitBJ(JASSCPP::unit whichUnit,JASSCPP::integer itemId);
JASSCPP::boolean UnitHasItemOfTypeBJ(JASSCPP::unit whichUnit,JASSCPP::integer itemId);
void SetItemInvulnerableBJ(JASSCPP::item whichItem,JASSCPP::boolean flag);
void SetItemDropOnDeathBJ(JASSCPP::item whichItem,JASSCPP::boolean flag);
void SetItemDroppableBJ(JASSCPP::item whichItem,JASSCPP::boolean flag);
void SetItemPlayerBJ(JASSCPP::item whichItem,JASSCPP::player whichPlayer,JASSCPP::boolean changeColor);
void SetItemVisibleBJ(JASSCPP::boolean show,JASSCPP::item whichItem);
JASSCPP::boolean IsItemHiddenBJ(JASSCPP::item whichItem);
JASSCPP::integer ChooseRandomItemBJ(JASSCPP::integer level);
JASSCPP::integer ChooseRandomItemExBJ(JASSCPP::integer level,JASSCPP::itemtype whichType);
JASSCPP::integer ChooseRandomNPBuildingBJ();
JASSCPP::integer ChooseRandomCreepBJ(JASSCPP::integer level);
void EnumItemsInRectBJ(JASSCPP::rect r,JASSCPP::code actionFunc);
void RandomItemInRectBJEnum();
JASSCPP::item RandomItemInRectBJ(JASSCPP::rect r,JASSCPP::boolexpr filter);
JASSCPP::item RandomItemInRectSimpleBJ(JASSCPP::rect r);
JASSCPP::boolean CheckItemStatus(JASSCPP::item whichItem,JASSCPP::integer status);
JASSCPP::boolean CheckItemcodeStatus(JASSCPP::integer itemId,JASSCPP::integer status);
JASSCPP::integer UnitId2OrderIdBJ(JASSCPP::integer unitId);
JASSCPP::integer String2UnitIdBJ(JASSCPP::string unitIdString);
JASSCPP::string UnitId2StringBJ(JASSCPP::integer unitId);
JASSCPP::integer String2OrderIdBJ(JASSCPP::string orderIdString);
JASSCPP::string OrderId2StringBJ(JASSCPP::integer orderId);
JASSCPP::integer GetIssuedOrderIdBJ();
JASSCPP::unit GetKillingUnitBJ();
JASSCPP::unit CreateUnitAtLocSaveLast(JASSCPP::player id,JASSCPP::integer unitid,JASSCPP::location loc,JASSCPP::real face);
JASSCPP::unit GetLastCreatedUnit();
JASSCPP::group CreateNUnitsAtLoc(JASSCPP::integer count,JASSCPP::integer unitId,JASSCPP::player whichPlayer,JASSCPP::location loc,JASSCPP::real face);
JASSCPP::group CreateNUnitsAtLocFacingLocBJ(JASSCPP::integer count,JASSCPP::integer unitId,JASSCPP::player whichPlayer,JASSCPP::location loc,JASSCPP::location lookAt);
void GetLastCreatedGroupEnum();
JASSCPP::group GetLastCreatedGroup();
JASSCPP::unit CreateCorpseLocBJ(JASSCPP::integer unitid,JASSCPP::player whichPlayer,JASSCPP::location loc);
void UnitSuspendDecayBJ(JASSCPP::boolean suspend,JASSCPP::unit whichUnit);
void DelayedSuspendDecayStopAnimEnum();
void DelayedSuspendDecayBoneEnum();
void DelayedSuspendDecayFleshEnum();
void DelayedSuspendDecay();
void DelayedSuspendDecayCreate();
JASSCPP::unit CreatePermanentCorpseLocBJ(JASSCPP::integer style,JASSCPP::integer unitid,JASSCPP::player whichPlayer,JASSCPP::location loc,JASSCPP::real facing);
JASSCPP::real GetUnitStateSwap(JASSCPP::unitstate whichState,JASSCPP::unit whichUnit);
JASSCPP::real GetUnitStatePercent(JASSCPP::unit whichUnit,JASSCPP::unitstate whichState,JASSCPP::unitstate whichMaxState);
JASSCPP::real GetUnitLifePercent(JASSCPP::unit whichUnit);
JASSCPP::real GetUnitManaPercent(JASSCPP::unit whichUnit);
void SelectUnitSingle(JASSCPP::unit whichUnit);
void SelectGroupBJEnum();
void SelectGroupBJ(JASSCPP::group g);
void SelectUnitAdd(JASSCPP::unit whichUnit);
void SelectUnitRemove(JASSCPP::unit whichUnit);
void ClearSelectionForPlayer(JASSCPP::player whichPlayer);
void SelectUnitForPlayerSingle(JASSCPP::unit whichUnit,JASSCPP::player whichPlayer);
void SelectGroupForPlayerBJ(JASSCPP::group g,JASSCPP::player whichPlayer);
void SelectUnitAddForPlayer(JASSCPP::unit whichUnit,JASSCPP::player whichPlayer);
void SelectUnitRemoveForPlayer(JASSCPP::unit whichUnit,JASSCPP::player whichPlayer);
void SetUnitLifeBJ(JASSCPP::unit whichUnit,JASSCPP::real newValue);
void SetUnitManaBJ(JASSCPP::unit whichUnit,JASSCPP::real newValue);
void SetUnitLifePercentBJ(JASSCPP::unit whichUnit,JASSCPP::real percent);
void SetUnitManaPercentBJ(JASSCPP::unit whichUnit,JASSCPP::real percent);
JASSCPP::boolean IsUnitDeadBJ(JASSCPP::unit whichUnit);
JASSCPP::boolean IsUnitAliveBJ(JASSCPP::unit whichUnit);
void IsUnitGroupDeadBJEnum();
JASSCPP::boolean IsUnitGroupDeadBJ(JASSCPP::group g);
void IsUnitGroupEmptyBJEnum();
JASSCPP::boolean IsUnitGroupEmptyBJ(JASSCPP::group g);
void IsUnitGroupInRectBJEnum();
JASSCPP::boolean IsUnitGroupInRectBJ(JASSCPP::group g,JASSCPP::rect r);
JASSCPP::boolean IsUnitHiddenBJ(JASSCPP::unit whichUnit);
void ShowUnitHide(JASSCPP::unit whichUnit);
void ShowUnitShow(JASSCPP::unit whichUnit);
JASSCPP::boolean IssueHauntOrderAtLocBJFilter();
JASSCPP::boolean IssueHauntOrderAtLocBJ(JASSCPP::unit whichPeon,JASSCPP::location loc);
JASSCPP::boolean IssueBuildOrderByIdLocBJ(JASSCPP::unit whichPeon,JASSCPP::integer unitId,JASSCPP::location loc);
JASSCPP::boolean IssueTrainOrderByIdBJ(JASSCPP::unit whichUnit,JASSCPP::integer unitId);
JASSCPP::boolean GroupTrainOrderByIdBJ(JASSCPP::group g,JASSCPP::integer unitId);
JASSCPP::boolean IssueUpgradeOrderByIdBJ(JASSCPP::unit whichUnit,JASSCPP::integer techId);
JASSCPP::unit GetAttackedUnitBJ();
void SetUnitFlyHeightBJ(JASSCPP::unit whichUnit,JASSCPP::real newHeight,JASSCPP::real rate);
void SetUnitTurnSpeedBJ(JASSCPP::unit whichUnit,JASSCPP::real turnSpeed);
void SetUnitPropWindowBJ(JASSCPP::unit whichUnit,JASSCPP::real propWindow);
JASSCPP::real GetUnitPropWindowBJ(JASSCPP::unit whichUnit);
JASSCPP::real GetUnitDefaultPropWindowBJ(JASSCPP::unit whichUnit);
void SetUnitBlendTimeBJ(JASSCPP::unit whichUnit,JASSCPP::real blendTime);
void SetUnitAcquireRangeBJ(JASSCPP::unit whichUnit,JASSCPP::real acquireRange);
void UnitSetCanSleepBJ(JASSCPP::unit whichUnit,JASSCPP::boolean canSleep);
JASSCPP::boolean UnitCanSleepBJ(JASSCPP::unit whichUnit);
void UnitWakeUpBJ(JASSCPP::unit whichUnit);
JASSCPP::boolean UnitIsSleepingBJ(JASSCPP::unit whichUnit);
void WakePlayerUnitsEnum();
void WakePlayerUnits(JASSCPP::player whichPlayer);
void EnableCreepSleepBJ(JASSCPP::boolean enable);
JASSCPP::boolean UnitGenerateAlarms(JASSCPP::unit whichUnit,JASSCPP::boolean generate);
JASSCPP::boolean DoesUnitGenerateAlarms(JASSCPP::unit whichUnit);
void PauseAllUnitsBJEnum();
void PauseAllUnitsBJ(JASSCPP::boolean pause);
void PauseUnitBJ(JASSCPP::boolean pause,JASSCPP::unit whichUnit);
JASSCPP::boolean IsUnitPausedBJ(JASSCPP::unit whichUnit);
void UnitPauseTimedLifeBJ(JASSCPP::boolean flag,JASSCPP::unit whichUnit);
void UnitApplyTimedLifeBJ(JASSCPP::real duration,JASSCPP::integer buffId,JASSCPP::unit whichUnit);
void UnitShareVisionBJ(JASSCPP::boolean share,JASSCPP::unit whichUnit,JASSCPP::player whichPlayer);
void UnitRemoveBuffsBJ(JASSCPP::integer buffType,JASSCPP::unit whichUnit);
void UnitRemoveBuffsExBJ(JASSCPP::integer polarity,JASSCPP::integer resist,JASSCPP::unit whichUnit,JASSCPP::boolean bTLife,JASSCPP::boolean bAura);
JASSCPP::integer UnitCountBuffsExBJ(JASSCPP::integer polarity,JASSCPP::integer resist,JASSCPP::unit whichUnit,JASSCPP::boolean bTLife,JASSCPP::boolean bAura);
JASSCPP::boolean UnitRemoveAbilityBJ(JASSCPP::integer abilityId,JASSCPP::unit whichUnit);
JASSCPP::boolean UnitAddAbilityBJ(JASSCPP::integer abilityId,JASSCPP::unit whichUnit);
void SetUnitExplodedBJ(JASSCPP::unit whichUnit,JASSCPP::boolean exploded);
void ExplodeUnitBJ(JASSCPP::unit whichUnit);
JASSCPP::unit GetTransportUnitBJ();
JASSCPP::unit GetLoadedUnitBJ();
JASSCPP::boolean IsUnitInTransportBJ(JASSCPP::unit whichUnit,JASSCPP::unit whichTransport);
JASSCPP::boolean IsUnitLoadedBJ(JASSCPP::unit whichUnit);
JASSCPP::boolean IsUnitIllusionBJ(JASSCPP::unit whichUnit);
JASSCPP::unit ReplaceUnitBJ(JASSCPP::unit whichUnit,JASSCPP::integer newUnitId,JASSCPP::integer unitStateMethod);
JASSCPP::unit GetLastReplacedUnitBJ();
void SetUnitPositionLocFacingBJ(JASSCPP::unit whichUnit,JASSCPP::location loc,JASSCPP::real facing);
void SetUnitPositionLocFacingLocBJ(JASSCPP::unit whichUnit,JASSCPP::location loc,JASSCPP::location lookAt);
void AddItemToStockBJ(JASSCPP::integer itemId,JASSCPP::unit whichUnit,JASSCPP::integer currentStock,JASSCPP::integer stockMax);
void AddUnitToStockBJ(JASSCPP::integer unitId,JASSCPP::unit whichUnit,JASSCPP::integer currentStock,JASSCPP::integer stockMax);
void RemoveItemFromStockBJ(JASSCPP::integer itemId,JASSCPP::unit whichUnit);
void RemoveUnitFromStockBJ(JASSCPP::integer unitId,JASSCPP::unit whichUnit);
void SetUnitUseFoodBJ(JASSCPP::boolean enable,JASSCPP::unit whichUnit);
JASSCPP::destructable CreateDestructableLoc(JASSCPP::integer objectid,JASSCPP::location loc,JASSCPP::real facing,JASSCPP::real scale,JASSCPP::integer variation);
JASSCPP::destructable CreateDeadDestructableLocBJ(JASSCPP::integer objectid,JASSCPP::location loc,JASSCPP::real facing,JASSCPP::real scale,JASSCPP::integer variation);
JASSCPP::destructable GetLastCreatedDestructable();
void ShowDestructableBJ(JASSCPP::boolean flag,JASSCPP::destructable d);
void SetDestructableInvulnerableBJ(JASSCPP::destructable d,JASSCPP::boolean flag);
JASSCPP::boolean IsDestructableInvulnerableBJ(JASSCPP::destructable d);
JASSCPP::location GetDestructableLoc(JASSCPP::destructable whichDestructable);
void EnumDestructablesInRectAll(JASSCPP::rect r,JASSCPP::code actionFunc);
JASSCPP::boolean EnumDestructablesInCircleBJFilter();
JASSCPP::boolean IsDestructableDeadBJ(JASSCPP::destructable d);
JASSCPP::boolean IsDestructableAliveBJ(JASSCPP::destructable d);
void RandomDestructableInRectBJEnum();
JASSCPP::destructable RandomDestructableInRectBJ(JASSCPP::rect r,JASSCPP::boolexpr filter);
JASSCPP::destructable RandomDestructableInRectSimpleBJ(JASSCPP::rect r);
void EnumDestructablesInCircleBJ(JASSCPP::real radius,JASSCPP::location loc,JASSCPP::code actionFunc);
void SetDestructableLifePercentBJ(JASSCPP::destructable d,JASSCPP::real percent);
void SetDestructableMaxLifeBJ(JASSCPP::destructable d,JASSCPP::real max);
void ModifyGateBJ(JASSCPP::integer gateOperation,JASSCPP::destructable d);
JASSCPP::integer GetElevatorHeight(JASSCPP::destructable d);
void ChangeElevatorHeight(JASSCPP::destructable d,JASSCPP::integer newHeight);
void NudgeUnitsInRectEnum();
void NudgeItemsInRectEnum();
void NudgeObjectsInRect(JASSCPP::rect nudgeArea);
void NearbyElevatorExistsEnum();
JASSCPP::boolean NearbyElevatorExists(JASSCPP::real x,JASSCPP::real y);
void FindElevatorWallBlockerEnum();
void ChangeElevatorWallBlocker(JASSCPP::real x,JASSCPP::real y,JASSCPP::real facing,JASSCPP::boolean open);
void ChangeElevatorWalls(JASSCPP::boolean open,JASSCPP::integer walls,JASSCPP::destructable d);
void WaygateActivateBJ(JASSCPP::boolean activate,JASSCPP::unit waygate);
JASSCPP::boolean WaygateIsActiveBJ(JASSCPP::unit waygate);
void WaygateSetDestinationLocBJ(JASSCPP::unit waygate,JASSCPP::location loc);
JASSCPP::location WaygateGetDestinationLocBJ(JASSCPP::unit waygate);
void UnitSetUsesAltIconBJ(JASSCPP::boolean flag,JASSCPP::unit whichUnit);
void ForceUIKeyBJ(JASSCPP::player whichPlayer,JASSCPP::string key);
void ForceUICancelBJ(JASSCPP::player whichPlayer);
void ForGroupBJ(JASSCPP::group whichGroup,JASSCPP::code callback);
void GroupAddUnitSimple(JASSCPP::unit whichUnit,JASSCPP::group whichGroup);
void GroupRemoveUnitSimple(JASSCPP::unit whichUnit,JASSCPP::group whichGroup);
void GroupAddGroupEnum();
void GroupAddGroup(JASSCPP::group sourceGroup,JASSCPP::group destGroup);
void GroupRemoveGroupEnum();
void GroupRemoveGroup(JASSCPP::group sourceGroup,JASSCPP::group destGroup);
void ForceAddPlayerSimple(JASSCPP::player whichPlayer,JASSCPP::force whichForce);
void ForceRemovePlayerSimple(JASSCPP::player whichPlayer,JASSCPP::force whichForce);
void GroupPickRandomUnitEnum();
JASSCPP::unit GroupPickRandomUnit(JASSCPP::group whichGroup);
void ForcePickRandomPlayerEnum();
JASSCPP::player ForcePickRandomPlayer(JASSCPP::force whichForce);
void EnumUnitsSelected(JASSCPP::player whichPlayer,JASSCPP::boolexpr enumFilter,JASSCPP::code enumAction);
JASSCPP::group GetUnitsInRectMatching(JASSCPP::rect r,JASSCPP::boolexpr filter);
JASSCPP::group GetUnitsInRectAll(JASSCPP::rect r);
JASSCPP::boolean GetUnitsInRectOfPlayerFilter();
JASSCPP::group GetUnitsInRectOfPlayer(JASSCPP::rect r,JASSCPP::player whichPlayer);
JASSCPP::group GetUnitsInRangeOfLocMatching(JASSCPP::real radius,JASSCPP::location whichLocation,JASSCPP::boolexpr filter);
JASSCPP::group GetUnitsInRangeOfLocAll(JASSCPP::real radius,JASSCPP::location whichLocation);
JASSCPP::boolean GetUnitsOfTypeIdAllFilter();
JASSCPP::group GetUnitsOfTypeIdAll(JASSCPP::integer unitid);
JASSCPP::group GetUnitsOfPlayerMatching(JASSCPP::player whichPlayer,JASSCPP::boolexpr filter);
JASSCPP::group GetUnitsOfPlayerAll(JASSCPP::player whichPlayer);
JASSCPP::boolean GetUnitsOfPlayerAndTypeIdFilter();
JASSCPP::group GetUnitsOfPlayerAndTypeId(JASSCPP::player whichPlayer,JASSCPP::integer unitid);
JASSCPP::group GetUnitsSelectedAll(JASSCPP::player whichPlayer);
JASSCPP::force GetForceOfPlayer(JASSCPP::player whichPlayer);
JASSCPP::force GetPlayersAll();
JASSCPP::force GetPlayersByMapControl(JASSCPP::mapcontrol whichControl);
JASSCPP::force GetPlayersAllies(JASSCPP::player whichPlayer);
JASSCPP::force GetPlayersEnemies(JASSCPP::player whichPlayer);
JASSCPP::force GetPlayersMatching(JASSCPP::boolexpr filter);
void CountUnitsInGroupEnum();
JASSCPP::integer CountUnitsInGroup(JASSCPP::group g);
void CountPlayersInForceEnum();
JASSCPP::integer CountPlayersInForceBJ(JASSCPP::force f);
void GetRandomSubGroupEnum();
JASSCPP::group GetRandomSubGroup(JASSCPP::integer count,JASSCPP::group sourceGroup);
JASSCPP::boolean LivingPlayerUnitsOfTypeIdFilter();
JASSCPP::integer CountLivingPlayerUnitsOfTypeId(JASSCPP::integer unitId,JASSCPP::player whichPlayer);
void ResetUnitAnimation(JASSCPP::unit whichUnit);
void SetUnitTimeScalePercent(JASSCPP::unit whichUnit,JASSCPP::real percentScale);
void SetUnitScalePercent(JASSCPP::unit whichUnit,JASSCPP::real percentScaleX,JASSCPP::real percentScaleY,JASSCPP::real percentScaleZ);
void SetUnitVertexColorBJ(JASSCPP::unit whichUnit,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency);
void UnitAddIndicatorBJ(JASSCPP::unit whichUnit,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency);
void DestructableAddIndicatorBJ(JASSCPP::destructable whichDestructable,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency);
void ItemAddIndicatorBJ(JASSCPP::item whichItem,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency);
void SetUnitFacingToFaceLocTimed(JASSCPP::unit whichUnit,JASSCPP::location target,JASSCPP::real duration);
void SetUnitFacingToFaceUnitTimed(JASSCPP::unit whichUnit,JASSCPP::unit target,JASSCPP::real duration);
void QueueUnitAnimationBJ(JASSCPP::unit whichUnit,JASSCPP::string whichAnimation);
void SetDestructableAnimationBJ(JASSCPP::destructable d,JASSCPP::string whichAnimation);
void QueueDestructableAnimationBJ(JASSCPP::destructable d,JASSCPP::string whichAnimation);
void SetDestAnimationSpeedPercent(JASSCPP::destructable d,JASSCPP::real percentScale);
void DialogDisplayBJ(JASSCPP::boolean flag,JASSCPP::dialog whichDialog,JASSCPP::player whichPlayer);
void DialogSetMessageBJ(JASSCPP::dialog whichDialog,JASSCPP::string message);
JASSCPP::button DialogAddButtonBJ(JASSCPP::dialog whichDialog,JASSCPP::string buttonText);
JASSCPP::button DialogAddButtonWithHotkeyBJ(JASSCPP::dialog whichDialog,JASSCPP::string buttonText,JASSCPP::integer hotkey);
void DialogClearBJ(JASSCPP::dialog whichDialog);
JASSCPP::button GetLastCreatedButtonBJ();
JASSCPP::button GetClickedButtonBJ();
JASSCPP::dialog GetClickedDialogBJ();
void SetPlayerAllianceBJ(JASSCPP::player sourcePlayer,JASSCPP::alliancetype whichAllianceSetting,JASSCPP::boolean value,JASSCPP::player otherPlayer);
void SetPlayerAllianceStateAllyBJ(JASSCPP::player sourcePlayer,JASSCPP::player otherPlayer,JASSCPP::boolean flag);
void SetPlayerAllianceStateVisionBJ(JASSCPP::player sourcePlayer,JASSCPP::player otherPlayer,JASSCPP::boolean flag);
void SetPlayerAllianceStateControlBJ(JASSCPP::player sourcePlayer,JASSCPP::player otherPlayer,JASSCPP::boolean flag);
void SetPlayerAllianceStateFullControlBJ(JASSCPP::player sourcePlayer,JASSCPP::player otherPlayer,JASSCPP::boolean flag);
void SetPlayerAllianceStateBJ(JASSCPP::player sourcePlayer,JASSCPP::player otherPlayer,JASSCPP::integer allianceState);
void SetForceAllianceStateBJ(JASSCPP::force sourceForce,JASSCPP::force targetForce,JASSCPP::integer allianceState);
JASSCPP::boolean PlayersAreCoAllied(JASSCPP::player playerA,JASSCPP::player playerB);
void ShareEverythingWithTeamAI(JASSCPP::player whichPlayer);
void ShareEverythingWithTeam(JASSCPP::player whichPlayer);
void ConfigureNeutralVictim();
void MakeUnitsPassiveForPlayerEnum();
void MakeUnitsPassiveForPlayer(JASSCPP::player whichPlayer);
void MakeUnitsPassiveForTeam(JASSCPP::player whichPlayer);
JASSCPP::boolean AllowVictoryDefeat(JASSCPP::playergameresult gameResult);
void EndGameBJ();
void MeleeVictoryDialogBJ(JASSCPP::player whichPlayer,JASSCPP::boolean leftGame);
void MeleeDefeatDialogBJ(JASSCPP::player whichPlayer,JASSCPP::boolean leftGame);
void GameOverDialogBJ(JASSCPP::player whichPlayer,JASSCPP::boolean leftGame);
void RemovePlayerPreserveUnitsBJ(JASSCPP::player whichPlayer,JASSCPP::playergameresult gameResult,JASSCPP::boolean leftGame);
void CustomVictoryOkBJ();
void CustomVictoryQuitBJ();
void CustomVictoryDialogBJ(JASSCPP::player whichPlayer);
void CustomVictorySkipBJ(JASSCPP::player whichPlayer);
void CustomVictoryBJ(JASSCPP::player whichPlayer,JASSCPP::boolean showDialog,JASSCPP::boolean showScores);
void CustomDefeatRestartBJ();
void CustomDefeatReduceDifficultyBJ();
void CustomDefeatLoadBJ();
void CustomDefeatQuitBJ();
void CustomDefeatDialogBJ(JASSCPP::player whichPlayer,JASSCPP::string message);
void CustomDefeatBJ(JASSCPP::player whichPlayer,JASSCPP::string message);
void SetNextLevelBJ(JASSCPP::string nextLevel);
void SetPlayerOnScoreScreenBJ(JASSCPP::boolean flag,JASSCPP::player whichPlayer);
JASSCPP::quest CreateQuestBJ(JASSCPP::integer questType,JASSCPP::string title,JASSCPP::string description,JASSCPP::string iconPath);
void DestroyQuestBJ(JASSCPP::quest whichQuest);
void QuestSetEnabledBJ(JASSCPP::boolean enabled,JASSCPP::quest whichQuest);
void QuestSetTitleBJ(JASSCPP::quest whichQuest,JASSCPP::string title);
void QuestSetDescriptionBJ(JASSCPP::quest whichQuest,JASSCPP::string description);
void QuestSetCompletedBJ(JASSCPP::quest whichQuest,JASSCPP::boolean completed);
void QuestSetFailedBJ(JASSCPP::quest whichQuest,JASSCPP::boolean failed);
void QuestSetDiscoveredBJ(JASSCPP::quest whichQuest,JASSCPP::boolean discovered);
JASSCPP::quest GetLastCreatedQuestBJ();
JASSCPP::questitem CreateQuestItemBJ(JASSCPP::quest whichQuest,JASSCPP::string description);
void QuestItemSetDescriptionBJ(JASSCPP::questitem whichQuestItem,JASSCPP::string description);
void QuestItemSetCompletedBJ(JASSCPP::questitem whichQuestItem,JASSCPP::boolean completed);
JASSCPP::questitem GetLastCreatedQuestItemBJ();
JASSCPP::defeatcondition CreateDefeatConditionBJ(JASSCPP::string description);
void DestroyDefeatConditionBJ(JASSCPP::defeatcondition whichCondition);
void DefeatConditionSetDescriptionBJ(JASSCPP::defeatcondition whichCondition,JASSCPP::string description);
JASSCPP::defeatcondition GetLastCreatedDefeatConditionBJ();
void FlashQuestDialogButtonBJ();
void QuestMessageBJ(JASSCPP::force f,JASSCPP::integer messageType,JASSCPP::string message);
JASSCPP::timer StartTimerBJ(JASSCPP::timer t,JASSCPP::boolean periodic,JASSCPP::real timeout);
JASSCPP::timer CreateTimerBJ(JASSCPP::boolean periodic,JASSCPP::real timeout);
void DestroyTimerBJ(JASSCPP::timer whichTimer);
void PauseTimerBJ(JASSCPP::boolean pause,JASSCPP::timer whichTimer);
JASSCPP::timer GetLastCreatedTimerBJ();
JASSCPP::timerdialog CreateTimerDialogBJ(JASSCPP::timer t,JASSCPP::string title);
void DestroyTimerDialogBJ(JASSCPP::timerdialog td);
void TimerDialogSetTitleBJ(JASSCPP::timerdialog td,JASSCPP::string title);
void TimerDialogSetTitleColorBJ(JASSCPP::timerdialog td,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency);
void TimerDialogSetTimeColorBJ(JASSCPP::timerdialog td,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency);
void TimerDialogSetSpeedBJ(JASSCPP::timerdialog td,JASSCPP::real speedMultFactor);
void TimerDialogDisplayForPlayerBJ(JASSCPP::boolean show,JASSCPP::timerdialog td,JASSCPP::player whichPlayer);
void TimerDialogDisplayBJ(JASSCPP::boolean show,JASSCPP::timerdialog td);
JASSCPP::timerdialog GetLastCreatedTimerDialogBJ();
void LeaderboardResizeBJ(JASSCPP::leaderboard lb);
void LeaderboardSetPlayerItemValueBJ(JASSCPP::player whichPlayer,JASSCPP::leaderboard lb,JASSCPP::integer val);
void LeaderboardSetPlayerItemLabelBJ(JASSCPP::player whichPlayer,JASSCPP::leaderboard lb,JASSCPP::string val);
void LeaderboardSetPlayerItemStyleBJ(JASSCPP::player whichPlayer,JASSCPP::leaderboard lb,JASSCPP::boolean showLabel,JASSCPP::boolean showValue,JASSCPP::boolean showIcon);
void LeaderboardSetPlayerItemLabelColorBJ(JASSCPP::player whichPlayer,JASSCPP::leaderboard lb,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency);
void LeaderboardSetPlayerItemValueColorBJ(JASSCPP::player whichPlayer,JASSCPP::leaderboard lb,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency);
void LeaderboardSetLabelColorBJ(JASSCPP::leaderboard lb,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency);
void LeaderboardSetValueColorBJ(JASSCPP::leaderboard lb,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency);
void LeaderboardSetLabelBJ(JASSCPP::leaderboard lb,JASSCPP::string label);
void LeaderboardSetStyleBJ(JASSCPP::leaderboard lb,JASSCPP::boolean showLabel,JASSCPP::boolean showNames,JASSCPP::boolean showValues,JASSCPP::boolean showIcons);
JASSCPP::integer LeaderboardGetItemCountBJ(JASSCPP::leaderboard lb);
JASSCPP::boolean LeaderboardHasPlayerItemBJ(JASSCPP::leaderboard lb,JASSCPP::player whichPlayer);
void ForceSetLeaderboardBJ(JASSCPP::leaderboard lb,JASSCPP::force toForce);
JASSCPP::leaderboard CreateLeaderboardBJ(JASSCPP::force toForce,JASSCPP::string label);
void DestroyLeaderboardBJ(JASSCPP::leaderboard lb);
void LeaderboardDisplayBJ(JASSCPP::boolean show,JASSCPP::leaderboard lb);
void LeaderboardAddItemBJ(JASSCPP::player whichPlayer,JASSCPP::leaderboard lb,JASSCPP::string label,JASSCPP::integer value);
void LeaderboardRemovePlayerItemBJ(JASSCPP::player whichPlayer,JASSCPP::leaderboard lb);
void LeaderboardSortItemsBJ(JASSCPP::leaderboard lb,JASSCPP::integer sortType,JASSCPP::boolean ascending);
void LeaderboardSortItemsByPlayerBJ(JASSCPP::leaderboard lb,JASSCPP::boolean ascending);
void LeaderboardSortItemsByLabelBJ(JASSCPP::leaderboard lb,JASSCPP::boolean ascending);
JASSCPP::integer LeaderboardGetPlayerIndexBJ(JASSCPP::player whichPlayer,JASSCPP::leaderboard lb);
JASSCPP::player LeaderboardGetIndexedPlayerBJ(JASSCPP::integer position,JASSCPP::leaderboard lb);
JASSCPP::leaderboard PlayerGetLeaderboardBJ(JASSCPP::player whichPlayer);
JASSCPP::leaderboard GetLastCreatedLeaderboard();
void MultiboardAllowDisplayBJ(JASSCPP::boolean flag);
JASSCPP::real TextTagSize2Height(JASSCPP::real size);
JASSCPP::real TextTagSpeed2Velocity(JASSCPP::real speed);
void SetTextTagColorBJ(JASSCPP::texttag tt,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency);
JASSCPP::texttag CreateTextTagLocBJ(JASSCPP::string s,JASSCPP::location loc,JASSCPP::real zOffset,JASSCPP::real size,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency);
JASSCPP::texttag CreateTextTagUnitBJ(JASSCPP::string s,JASSCPP::unit whichUnit,JASSCPP::real zOffset,JASSCPP::real size,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real transparency);
void DestroyTextTagBJ(JASSCPP::texttag tt);
void SetTextTagVelocityBJ(JASSCPP::texttag tt,JASSCPP::real speed,JASSCPP::real angle);
void ShowTextTagForceBJ(JASSCPP::boolean show,JASSCPP::texttag tt,JASSCPP::force whichForce);
JASSCPP::texttag GetLastCreatedTextTag();
void PauseGameOn();
void PauseGameOff();
void SetUserControlForceOn(JASSCPP::force whichForce);
void SetUserControlForceOff(JASSCPP::force whichForce);
void ShowInterfaceForceOn(JASSCPP::force whichForce,JASSCPP::real fadeDuration);
void ShowInterfaceForceOff(JASSCPP::force whichForce,JASSCPP::real fadeDuration);
void PingMinimapForForce(JASSCPP::force whichForce,JASSCPP::real x,JASSCPP::real y,JASSCPP::real duration);
void PingMinimapLocForForce(JASSCPP::force whichForce,JASSCPP::location loc,JASSCPP::real duration);
void PingMinimapForPlayer(JASSCPP::player whichPlayer,JASSCPP::real x,JASSCPP::real y,JASSCPP::real duration);
void PingMinimapLocForPlayer(JASSCPP::player whichPlayer,JASSCPP::location loc,JASSCPP::real duration);
void PingMinimapForForceEx(JASSCPP::force whichForce,JASSCPP::real x,JASSCPP::real y,JASSCPP::real duration,JASSCPP::integer style,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue);
void PingMinimapLocForForceEx(JASSCPP::force whichForce,JASSCPP::location loc,JASSCPP::real duration,JASSCPP::integer style,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue);
void EnableWorldFogBoundaryBJ(JASSCPP::boolean enable,JASSCPP::force f);
void EnableOcclusionBJ(JASSCPP::boolean enable,JASSCPP::force f);
void CancelCineSceneBJ();
void TryInitCinematicBehaviorBJ();
void SetCinematicSceneBJ(JASSCPP::sound soundHandle,JASSCPP::integer portraitUnitId,JASSCPP::playercolor color,JASSCPP::string speakerTitle,JASSCPP::string text,JASSCPP::real sceneDuration,JASSCPP::real voiceoverDuration);
JASSCPP::real GetTransmissionDuration(JASSCPP::sound soundHandle,JASSCPP::integer timeType,JASSCPP::real timeVal);
void WaitTransmissionDuration(JASSCPP::sound soundHandle,JASSCPP::integer timeType,JASSCPP::real timeVal);
void DoTransmissionBasicsXYBJ(JASSCPP::integer unitId,JASSCPP::playercolor color,JASSCPP::real x,JASSCPP::real y,JASSCPP::sound soundHandle,JASSCPP::string unitName,JASSCPP::string message,JASSCPP::real duration);
void TransmissionFromUnitWithNameBJ(JASSCPP::force toForce,JASSCPP::unit whichUnit,JASSCPP::string unitName,JASSCPP::sound soundHandle,JASSCPP::string message,JASSCPP::integer timeType,JASSCPP::real timeVal,JASSCPP::boolean wait);
void TransmissionFromUnitTypeWithNameBJ(JASSCPP::force toForce,JASSCPP::player fromPlayer,JASSCPP::integer unitId,JASSCPP::string unitName,JASSCPP::location loc,JASSCPP::sound soundHandle,JASSCPP::string message,JASSCPP::integer timeType,JASSCPP::real timeVal,JASSCPP::boolean wait);
JASSCPP::real GetLastTransmissionDurationBJ();
void ForceCinematicSubtitlesBJ(JASSCPP::boolean flag);
void CinematicModeExBJ(JASSCPP::boolean cineMode,JASSCPP::force forForce,JASSCPP::real interfaceFadeTime);
void CinematicModeBJ(JASSCPP::boolean cineMode,JASSCPP::force forForce);
void DisplayCineFilterBJ(JASSCPP::boolean flag);
void CinematicFadeCommonBJ(JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real duration,JASSCPP::string tex,JASSCPP::real startTrans,JASSCPP::real endTrans);
void FinishCinematicFadeBJ();
void FinishCinematicFadeAfterBJ(JASSCPP::real duration);
void ContinueCinematicFadeBJ();
void ContinueCinematicFadeAfterBJ(JASSCPP::real duration,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real trans,JASSCPP::string tex);
void AbortCinematicFadeBJ();
void CinematicFadeBJ(JASSCPP::integer fadetype,JASSCPP::real duration,JASSCPP::string tex,JASSCPP::real red,JASSCPP::real green,JASSCPP::real blue,JASSCPP::real trans);
void CinematicFilterGenericBJ(JASSCPP::real duration,JASSCPP::blendmode bmode,JASSCPP::string tex,JASSCPP::real red0,JASSCPP::real green0,JASSCPP::real blue0,JASSCPP::real trans0,JASSCPP::real red1,JASSCPP::real green1,JASSCPP::real blue1,JASSCPP::real trans1);
void RescueUnitBJ(JASSCPP::unit whichUnit,JASSCPP::player rescuer,JASSCPP::boolean changeColor);
void TriggerActionUnitRescuedBJ();
void TryInitRescuableTriggersBJ();
void SetRescueUnitColorChangeBJ(JASSCPP::boolean changeColor);
void SetRescueBuildingColorChangeBJ(JASSCPP::boolean changeColor);
void MakeUnitRescuableToForceBJEnum();
void MakeUnitRescuableToForceBJ(JASSCPP::unit whichUnit,JASSCPP::boolean isRescuable,JASSCPP::force whichForce);
void InitRescuableBehaviorBJ();
void SetPlayerTechResearchedSwap(JASSCPP::integer techid,JASSCPP::integer levels,JASSCPP::player whichPlayer);
void SetPlayerTechMaxAllowedSwap(JASSCPP::integer techid,JASSCPP::integer maximum,JASSCPP::player whichPlayer);
void SetPlayerMaxHeroesAllowed(JASSCPP::integer maximum,JASSCPP::player whichPlayer);
JASSCPP::integer GetPlayerTechCountSimple(JASSCPP::integer techid,JASSCPP::player whichPlayer);
JASSCPP::integer GetPlayerTechMaxAllowedSwap(JASSCPP::integer techid,JASSCPP::player whichPlayer);
void SetPlayerAbilityAvailableBJ(JASSCPP::boolean avail,JASSCPP::integer abilid,JASSCPP::player whichPlayer);
void SetCampaignMenuRaceBJ(JASSCPP::integer campaignNumber);
void SetMissionAvailableBJ(JASSCPP::boolean available,JASSCPP::integer missionIndex);
void SetCampaignAvailableBJ(JASSCPP::boolean available,JASSCPP::integer campaignNumber);
void SetCinematicAvailableBJ(JASSCPP::boolean available,JASSCPP::integer cinematicIndex);
JASSCPP::gamecache InitGameCacheBJ(JASSCPP::string campaignFile);
JASSCPP::boolean SaveGameCacheBJ(JASSCPP::gamecache cache);
JASSCPP::gamecache GetLastCreatedGameCacheBJ();
void StoreRealBJ(JASSCPP::real value,JASSCPP::string key,JASSCPP::string missionKey,JASSCPP::gamecache cache);
void StoreIntegerBJ(JASSCPP::integer value,JASSCPP::string key,JASSCPP::string missionKey,JASSCPP::gamecache cache);
void StoreBooleanBJ(JASSCPP::boolean value,JASSCPP::string key,JASSCPP::string missionKey,JASSCPP::gamecache cache);
JASSCPP::boolean StoreStringBJ(JASSCPP::string value,JASSCPP::string key,JASSCPP::string missionKey,JASSCPP::gamecache cache);
JASSCPP::boolean StoreUnitBJ(JASSCPP::unit whichUnit,JASSCPP::string key,JASSCPP::string missionKey,JASSCPP::gamecache cache);
JASSCPP::real GetStoredRealBJ(JASSCPP::string key,JASSCPP::string missionKey,JASSCPP::gamecache cache);
JASSCPP::integer GetStoredIntegerBJ(JASSCPP::string key,JASSCPP::string missionKey,JASSCPP::gamecache cache);
JASSCPP::boolean GetStoredBooleanBJ(JASSCPP::string key,JASSCPP::string missionKey,JASSCPP::gamecache cache);
JASSCPP::string GetStoredStringBJ(JASSCPP::string key,JASSCPP::string missionKey,JASSCPP::gamecache cache);
JASSCPP::unit RestoreUnitLocFacingAngleBJ(JASSCPP::string key,JASSCPP::string missionKey,JASSCPP::gamecache cache,JASSCPP::player forWhichPlayer,JASSCPP::location loc,JASSCPP::real facing);
JASSCPP::unit RestoreUnitLocFacingPointBJ(JASSCPP::string key,JASSCPP::string missionKey,JASSCPP::gamecache cache,JASSCPP::player forWhichPlayer,JASSCPP::location loc,JASSCPP::location lookAt);
JASSCPP::unit GetLastRestoredUnitBJ();
void FlushGameCacheBJ(JASSCPP::gamecache cache);
void FlushStoredMissionBJ(JASSCPP::string missionKey,JASSCPP::gamecache cache);
JASSCPP::boolean HaveStoredValue(JASSCPP::string key,JASSCPP::integer valueType,JASSCPP::string missionKey,JASSCPP::gamecache cache);
void ShowCustomCampaignButton(JASSCPP::boolean show,JASSCPP::integer whichButton);
JASSCPP::boolean IsCustomCampaignButtonVisibile(JASSCPP::integer whichButton);
void LoadGameBJ(JASSCPP::string loadFileName,JASSCPP::boolean doScoreScreen);
void SaveAndChangeLevelBJ(JASSCPP::string saveFileName,JASSCPP::string newLevel,JASSCPP::boolean doScoreScreen);
void SaveAndLoadGameBJ(JASSCPP::string saveFileName,JASSCPP::string loadFileName,JASSCPP::boolean doScoreScreen);
JASSCPP::boolean RenameSaveDirectoryBJ(JASSCPP::string sourceDirName,JASSCPP::string destDirName);
JASSCPP::boolean RemoveSaveDirectoryBJ(JASSCPP::string sourceDirName);
JASSCPP::boolean CopySaveGameBJ(JASSCPP::string sourceSaveName,JASSCPP::string destSaveName);
JASSCPP::real GetPlayerStartLocationX(JASSCPP::player whichPlayer);
JASSCPP::real GetPlayerStartLocationY(JASSCPP::player whichPlayer);
JASSCPP::location GetPlayerStartLocationLoc(JASSCPP::player whichPlayer);
JASSCPP::location GetRectCenter(JASSCPP::rect whichRect);
JASSCPP::boolean IsPlayerSlotState(JASSCPP::player whichPlayer,JASSCPP::playerslotstate whichState);
JASSCPP::integer GetFadeFromSeconds(JASSCPP::real seconds);
void AdjustPlayerStateSimpleBJ(JASSCPP::player whichPlayer,JASSCPP::playerstate whichPlayerState,JASSCPP::integer delta);
void AdjustPlayerStateBJ(JASSCPP::integer delta,JASSCPP::player whichPlayer,JASSCPP::playerstate whichPlayerState);
void SetPlayerStateBJ(JASSCPP::player whichPlayer,JASSCPP::playerstate whichPlayerState,JASSCPP::integer value);
void SetPlayerFlagBJ(JASSCPP::playerstate whichPlayerFlag,JASSCPP::boolean flag,JASSCPP::player whichPlayer);
JASSCPP::boolean IsPlayerFlagSetBJ(JASSCPP::playerstate whichPlayerFlag,JASSCPP::player whichPlayer);
void AddResourceAmountBJ(JASSCPP::integer delta,JASSCPP::unit whichUnit);
JASSCPP::integer GetConvertedPlayerId(JASSCPP::player whichPlayer);
JASSCPP::player ConvertedPlayer(JASSCPP::integer convertedPlayerId);
JASSCPP::real GetRectWidthBJ(JASSCPP::rect r);
JASSCPP::real GetRectHeightBJ(JASSCPP::rect r);
JASSCPP::unit BlightGoldMineForPlayerBJ(JASSCPP::unit goldMine,JASSCPP::player whichPlayer);
JASSCPP::unit BlightGoldMineForPlayer(JASSCPP::unit goldMine,JASSCPP::player whichPlayer);
JASSCPP::unit GetLastHauntedGoldMine();
void SetPlayerColorBJEnum();
void SetPlayerColorBJ(JASSCPP::player whichPlayer,JASSCPP::playercolor color,JASSCPP::boolean changeExisting);
void SetPlayerUnitAvailableBJ(JASSCPP::integer unitId,JASSCPP::boolean allowed,JASSCPP::player whichPlayer);
void LockGameSpeedBJ();
void UnlockGameSpeedBJ();
JASSCPP::boolean IssueTargetOrderBJ(JASSCPP::unit whichUnit,JASSCPP::string order,JASSCPP::widget targetWidget);
JASSCPP::boolean IssuePointOrderLocBJ(JASSCPP::unit whichUnit,JASSCPP::string order,JASSCPP::location whichLocation);
JASSCPP::boolean IssueTargetDestructableOrder(JASSCPP::unit whichUnit,JASSCPP::string order,JASSCPP::widget targetWidget);
JASSCPP::boolean IssueImmediateOrderBJ(JASSCPP::unit whichUnit,JASSCPP::string order);
JASSCPP::boolean GroupTargetOrderBJ(JASSCPP::group whichGroup,JASSCPP::string order,JASSCPP::widget targetWidget);
JASSCPP::boolean GroupPointOrderLocBJ(JASSCPP::group whichGroup,JASSCPP::string order,JASSCPP::location whichLocation);
JASSCPP::boolean GroupImmediateOrderBJ(JASSCPP::group whichGroup,JASSCPP::string order);
JASSCPP::boolean GroupTargetDestructableOrder(JASSCPP::group whichGroup,JASSCPP::string order,JASSCPP::widget targetWidget);
JASSCPP::destructable GetDyingDestructable();
void SaveDyingWidget();
void SetBlightRectBJ(JASSCPP::boolean addBlight,JASSCPP::player whichPlayer,JASSCPP::rect r);
void SetBlightRadiusLocBJ(JASSCPP::boolean addBlight,JASSCPP::player whichPlayer,JASSCPP::location loc,JASSCPP::real radius);
void MeleeStartingVisibility();
void MeleeStartingResources();
void ReducePlayerTechMaxAllowed(JASSCPP::player whichPlayer,JASSCPP::integer techId,JASSCPP::integer limit);
void MeleeStartingHeroLimit();
JASSCPP::boolean MeleeTrainedUnitIsHeroBJFilter();
void MeleeGrantItemsToHero(JASSCPP::unit whichUnit);
void MeleeGrantItemsToTrainedHero();
void MeleeGrantItemsToHiredHero();
void MeleeGrantHeroItems();
void MeleeClearExcessUnit();
void MeleeClearNearbyUnits(JASSCPP::real x,JASSCPP::real y,JASSCPP::real range);
void MeleeClearExcessUnits();
void MeleeEnumFindNearestMine();
JASSCPP::unit MeleeFindNearestMine(JASSCPP::location src,JASSCPP::real range);
JASSCPP::unit MeleeRandomHeroLoc(JASSCPP::player p,JASSCPP::integer id1,JASSCPP::integer id2,JASSCPP::integer id3,JASSCPP::integer id4,JASSCPP::location loc);
JASSCPP::location MeleeGetProjectedLoc(JASSCPP::location src,JASSCPP::location targ,JASSCPP::real distance,JASSCPP::real deltaAngle);
JASSCPP::real MeleeGetNearestValueWithin(JASSCPP::real val,JASSCPP::real minVal,JASSCPP::real maxVal);
JASSCPP::location MeleeGetLocWithinRect(JASSCPP::location src,JASSCPP::rect r);
void MeleeStartingUnitsHuman(JASSCPP::player whichPlayer,JASSCPP::location startLoc,JASSCPP::boolean doHeroes,JASSCPP::boolean doCamera,JASSCPP::boolean doPreload);
void MeleeStartingUnitsOrc(JASSCPP::player whichPlayer,JASSCPP::location startLoc,JASSCPP::boolean doHeroes,JASSCPP::boolean doCamera,JASSCPP::boolean doPreload);
void MeleeStartingUnitsUndead(JASSCPP::player whichPlayer,JASSCPP::location startLoc,JASSCPP::boolean doHeroes,JASSCPP::boolean doCamera,JASSCPP::boolean doPreload);
void MeleeStartingUnitsNightElf(JASSCPP::player whichPlayer,JASSCPP::location startLoc,JASSCPP::boolean doHeroes,JASSCPP::boolean doCamera,JASSCPP::boolean doPreload);
void MeleeStartingUnitsUnknownRace(JASSCPP::player whichPlayer,JASSCPP::location startLoc,JASSCPP::boolean doHeroes,JASSCPP::boolean doCamera,JASSCPP::boolean doPreload);
void MeleeStartingUnits();
void MeleeStartingUnitsForPlayer(JASSCPP::race whichRace,JASSCPP::player whichPlayer,JASSCPP::location loc,JASSCPP::boolean doHeroes);
void PickMeleeAI(JASSCPP::player num,JASSCPP::string s1,JASSCPP::string s2,JASSCPP::string s3);
void MeleeStartingAI();
void LockGuardPosition(JASSCPP::unit targ);
JASSCPP::boolean MeleePlayerIsOpponent(JASSCPP::integer playerIndex,JASSCPP::integer opponentIndex);
JASSCPP::integer MeleeGetAllyStructureCount(JASSCPP::player whichPlayer);
JASSCPP::integer MeleeGetAllyCount(JASSCPP::player whichPlayer);
JASSCPP::integer MeleeGetAllyKeyStructureCount(JASSCPP::player whichPlayer);
void MeleeDoDrawEnum();
void MeleeDoVictoryEnum();
void MeleeDoDefeat(JASSCPP::player whichPlayer);
void MeleeDoDefeatEnum();
void MeleeDoLeave(JASSCPP::player whichPlayer);
void MeleeRemoveObservers();
JASSCPP::force MeleeCheckForVictors();
void MeleeCheckForLosersAndVictors();
JASSCPP::string MeleeGetCrippledWarningMessage(JASSCPP::player whichPlayer);
JASSCPP::string MeleeGetCrippledTimerMessage(JASSCPP::player whichPlayer);
JASSCPP::string MeleeGetCrippledRevealedMessage(JASSCPP::player whichPlayer);
void MeleeExposePlayer(JASSCPP::player whichPlayer,JASSCPP::boolean expose);
void MeleeExposeAllPlayers();
void MeleeCrippledPlayerTimeout();
JASSCPP::boolean MeleePlayerIsCrippled(JASSCPP::player whichPlayer);
void MeleeCheckForCrippledPlayers();
void MeleeCheckLostUnit(JASSCPP::unit lostUnit);
void MeleeCheckAddedUnit(JASSCPP::unit addedUnit);
void MeleeTriggerActionConstructCancel();
void MeleeTriggerActionUnitDeath();
void MeleeTriggerActionUnitConstructionStart();
void MeleeTriggerActionPlayerDefeated();
void MeleeTriggerActionPlayerLeft();
void MeleeTriggerActionAllianceChange();
void MeleeTriggerTournamentFinishSoon();
JASSCPP::boolean MeleeWasUserPlayer(JASSCPP::player whichPlayer);
void MeleeTournamentFinishNowRuleA(JASSCPP::integer multiplier);
void MeleeTriggerTournamentFinishNow();
void MeleeInitVictoryDefeat();
void CheckInitPlayerSlotAvailability();
void SetPlayerSlotAvailable(JASSCPP::player whichPlayer,JASSCPP::mapcontrol control);
void TeamInitPlayerSlots(JASSCPP::integer teamCount);
void MeleeInitPlayerSlots();
void FFAInitPlayerSlots();
void OneOnOneInitPlayerSlots();
void InitGenericPlayerSlots();
void SetDNCSoundsDawn();
void SetDNCSoundsDusk();
void SetDNCSoundsDay();
void SetDNCSoundsNight();
void InitDNCSounds();
void InitBlizzardGlobals();
void InitQueuedTriggers();
void InitMapRects();
void InitSummonableCaps();
void UpdateStockAvailability(JASSCPP::item whichItem);
void UpdateEachStockBuildingEnum();
void UpdateEachStockBuilding(JASSCPP::itemtype iType,JASSCPP::integer iLevel);
void PerformStockUpdates();
void StartStockUpdates();
void RemovePurchasedItem();
void InitNeutralBuildings();
void MarkGameStarted();
void DetectGameStarted();
void InitBlizzard();
void RandomDistReset();
void RandomDistAddItem(JASSCPP::integer inID,JASSCPP::integer inChance);
JASSCPP::integer RandomDistChoose();
JASSCPP::item UnitDropItem(JASSCPP::unit inUnit,JASSCPP::integer inItemID);
JASSCPP::item WidgetDropItem(JASSCPP::widget inWidget,JASSCPP::integer inItemID);
}
