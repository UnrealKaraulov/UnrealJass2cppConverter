//===========================================================================
// 
// Harrow
// 
//   Warcraft III map script
//   Generated by the Warcraft III World Editor
//   Date: Wed May 07 00:36:12 2003
//   Map Author: Blizzard Entertainment
// 
//===========================================================================

//***************************************************************************
//*
//*  Global Variables
//*
//***************************************************************************

globals
    // Generated
    rect                    gg_rct_Snow1               = null
    rect                    gg_rct_Snow2               = null
    rect                    gg_rct_Snow3               = null
    rect                    gg_rct_Snow4               = null
    trigger                 gg_trg_Melee_Initialization = null
endglobals

function InitGlobals takes nothing returns nothing
endfunction

//***************************************************************************
//*
//*  Unit Item Tables
//*
//***************************************************************************

function Unit000002_DropItems takes nothing returns nothing
    local widget  trigWidget = null
    local unit    trigUnit   = null
    local integer itemID     = 0
    local boolean canDrop    = true

    set trigWidget = bj_lastDyingWidget
    if (trigWidget == null) then
        set trigUnit = GetTriggerUnit()
    endif

    if (trigUnit != null) then
        set canDrop = not IsUnitHidden(trigUnit)
        if (canDrop and GetChangingUnit() != null) then
            set canDrop = (GetChangingUnitPrevOwner() == Player(PLAYER_NEUTRAL_AGGRESSIVE))
        endif
    endif

    if (canDrop) then
        // Item set 0
        call RandomDistReset(  )
        call RandomDistAddItem( ChooseRandomItemEx( ITEM_TYPE_PERMANENT, 1 ), 100 )
        set itemID = RandomDistChoose(  )
        if (trigUnit != null) then
            call UnitDropItem( trigUnit, itemID )
        else
            call WidgetDropItem( trigWidget, itemID )
        endif

    endif

    set bj_lastDyingWidget = null
    call DestroyTrigger(GetTriggeringTrigger())
endfunction

function Unit000005_DropItems takes nothing returns nothing
    local widget  trigWidget = null
    local unit    trigUnit   = null
    local integer itemID     = 0
    local boolean canDrop    = true

    set trigWidget = bj_lastDyingWidget
    if (trigWidget == null) then
        set trigUnit = GetTriggerUnit()
    endif

    if (trigUnit != null) then
        set canDrop = not IsUnitHidden(trigUnit)
        if (canDrop and GetChangingUnit() != null) then
            set canDrop = (GetChangingUnitPrevOwner() == Player(PLAYER_NEUTRAL_AGGRESSIVE))
        endif
    endif

    if (canDrop) then
        // Item set 0
        call RandomDistReset(  )
        call RandomDistAddItem( ChooseRandomItemEx( ITEM_TYPE_PERMANENT, 1 ), 100 )
        set itemID = RandomDistChoose(  )
        if (trigUnit != null) then
            call UnitDropItem( trigUnit, itemID )
        else
            call WidgetDropItem( trigWidget, itemID )
        endif

    endif

    set bj_lastDyingWidget = null
    call DestroyTrigger(GetTriggeringTrigger())
endfunction

function Unit000006_DropItems takes nothing returns nothing
    local widget  trigWidget = null
    local unit    trigUnit   = null
    local integer itemID     = 0
    local boolean canDrop    = true

    set trigWidget = bj_lastDyingWidget
    if (trigWidget == null) then
        set trigUnit = GetTriggerUnit()
    endif

    if (trigUnit != null) then
        set canDrop = not IsUnitHidden(trigUnit)
        if (canDrop and GetChangingUnit() != null) then
            set canDrop = (GetChangingUnitPrevOwner() == Player(PLAYER_NEUTRAL_AGGRESSIVE))
        endif
    endif

    if (canDrop) then
        // Item set 0
        call RandomDistReset(  )
        call RandomDistAddItem( ChooseRandomItemEx( ITEM_TYPE_PERMANENT, 2 ), 100 )
        set itemID = RandomDistChoose(  )
        if (trigUnit != null) then
            call UnitDropItem( trigUnit, itemID )
        else
            call WidgetDropItem( trigWidget, itemID )
        endif

    endif

    set bj_lastDyingWidget = null
    call DestroyTrigger(GetTriggeringTrigger())
endfunction

function Unit000009_DropItems takes nothing returns nothing
    local widget  trigWidget = null
    local unit    trigUnit   = null
    local integer itemID     = 0
    local boolean canDrop    = true

    set trigWidget = bj_lastDyingWidget
    if (trigWidget == null) then
        set trigUnit = GetTriggerUnit()
    endif

    if (trigUnit != null) then
        set canDrop = not IsUnitHidden(trigUnit)
        if (canDrop and GetChangingUnit() != null) then
            set canDrop = (GetChangingUnitPrevOwner() == Player(PLAYER_NEUTRAL_AGGRESSIVE))
        endif
    endif

    if (canDrop) then
        // Item set 0
        call RandomDistReset(  )
        call RandomDistAddItem( ChooseRandomItemEx( ITEM_TYPE_POWERUP, 2 ), 100 )
        set itemID = RandomDistChoose(  )
        if (trigUnit != null) then
            call UnitDropItem( trigUnit, itemID )
        else
            call WidgetDropItem( trigWidget, itemID )
        endif

    endif

    set bj_lastDyingWidget = null
    call DestroyTrigger(GetTriggeringTrigger())
endfunction

function Unit000012_DropItems takes nothing returns nothing
    local widget  trigWidget = null
    local unit    trigUnit   = null
    local integer itemID     = 0
    local boolean canDrop    = true

    set trigWidget = bj_lastDyingWidget
    if (trigWidget == null) then
        set trigUnit = GetTriggerUnit()
    endif

    if (trigUnit != null) then
        set canDrop = not IsUnitHidden(trigUnit)
        if (canDrop and GetChangingUnit() != null) then
            set canDrop = (GetChangingUnitPrevOwner() == Player(PLAYER_NEUTRAL_AGGRESSIVE))
        endif
    endif

    if (canDrop) then
        // Item set 0
        call RandomDistReset(  )
        call RandomDistAddItem( ChooseRandomItemEx( ITEM_TYPE_PERMANENT, 2 ), 100 )
        set itemID = RandomDistChoose(  )
        if (trigUnit != null) then
            call UnitDropItem( trigUnit, itemID )
        else
            call WidgetDropItem( trigWidget, itemID )
        endif

        // Item set 1
        call RandomDistReset(  )
        call RandomDistAddItem( ChooseRandomItemEx( ITEM_TYPE_POWERUP, 1 ), 100 )
        set itemID = RandomDistChoose(  )
        if (trigUnit != null) then
            call UnitDropItem( trigUnit, itemID )
        else
            call WidgetDropItem( trigWidget, itemID )
        endif

    endif

    set bj_lastDyingWidget = null
    call DestroyTrigger(GetTriggeringTrigger())
endfunction

function Unit000013_DropItems takes nothing returns nothing
    local widget  trigWidget = null
    local unit    trigUnit   = null
    local integer itemID     = 0
    local boolean canDrop    = true

    set trigWidget = bj_lastDyingWidget
    if (trigWidget == null) then
        set trigUnit = GetTriggerUnit()
    endif

    if (trigUnit != null) then
        set canDrop = not IsUnitHidden(trigUnit)
        if (canDrop and GetChangingUnit() != null) then
            set canDrop = (GetChangingUnitPrevOwner() == Player(PLAYER_NEUTRAL_AGGRESSIVE))
        endif
    endif

    if (canDrop) then
        // Item set 0
        call RandomDistReset(  )
        call RandomDistAddItem( ChooseRandomItemEx( ITEM_TYPE_POWERUP, 2 ), 100 )
        set itemID = RandomDistChoose(  )
        if (trigUnit != null) then
            call UnitDropItem( trigUnit, itemID )
        else
            call WidgetDropItem( trigWidget, itemID )
        endif

    endif

    set bj_lastDyingWidget = null
    call DestroyTrigger(GetTriggeringTrigger())
endfunction

function Unit000016_DropItems takes nothing returns nothing
    local widget  trigWidget = null
    local unit    trigUnit   = null
    local integer itemID     = 0
    local boolean canDrop    = true

    set trigWidget = bj_lastDyingWidget
    if (trigWidget == null) then
        set trigUnit = GetTriggerUnit()
    endif

    if (trigUnit != null) then
        set canDrop = not IsUnitHidden(trigUnit)
        if (canDrop and GetChangingUnit() != null) then
            set canDrop = (GetChangingUnitPrevOwner() == Player(PLAYER_NEUTRAL_AGGRESSIVE))
        endif
    endif

    if (canDrop) then
        // Item set 0
        call RandomDistReset(  )
        call RandomDistAddItem( ChooseRandomItemEx( ITEM_TYPE_PERMANENT, 2 ), 100 )
        set itemID = RandomDistChoose(  )
        if (trigUnit != null) then
            call UnitDropItem( trigUnit, itemID )
        else
            call WidgetDropItem( trigWidget, itemID )
        endif

        // Item set 1
        call RandomDistReset(  )
        call RandomDistAddItem( ChooseRandomItemEx( ITEM_TYPE_POWERUP, 1 ), 100 )
        set itemID = RandomDistChoose(  )
        if (trigUnit != null) then
            call UnitDropItem( trigUnit, itemID )
        else
            call WidgetDropItem( trigWidget, itemID )
        endif

    endif

    set bj_lastDyingWidget = null
    call DestroyTrigger(GetTriggeringTrigger())
endfunction

function Unit000017_DropItems takes nothing returns nothing
    local widget  trigWidget = null
    local unit    trigUnit   = null
    local integer itemID     = 0
    local boolean canDrop    = true

    set trigWidget = bj_lastDyingWidget
    if (trigWidget == null) then
        set trigUnit = GetTriggerUnit()
    endif

    if (trigUnit != null) then
        set canDrop = not IsUnitHidden(trigUnit)
        if (canDrop and GetChangingUnit() != null) then
            set canDrop = (GetChangingUnitPrevOwner() == Player(PLAYER_NEUTRAL_AGGRESSIVE))
        endif
    endif

    if (canDrop) then
        // Item set 0
        call RandomDistReset(  )
        call RandomDistAddItem( ChooseRandomItemEx( ITEM_TYPE_PERMANENT, 1 ), 100 )
        set itemID = RandomDistChoose(  )
        if (trigUnit != null) then
            call UnitDropItem( trigUnit, itemID )
        else
            call WidgetDropItem( trigWidget, itemID )
        endif

    endif

    set bj_lastDyingWidget = null
    call DestroyTrigger(GetTriggeringTrigger())
endfunction

function Unit000019_DropItems takes nothing returns nothing
    local widget  trigWidget = null
    local unit    trigUnit   = null
    local integer itemID     = 0
    local boolean canDrop    = true

    set trigWidget = bj_lastDyingWidget
    if (trigWidget == null) then
        set trigUnit = GetTriggerUnit()
    endif

    if (trigUnit != null) then
        set canDrop = not IsUnitHidden(trigUnit)
        if (canDrop and GetChangingUnit() != null) then
            set canDrop = (GetChangingUnitPrevOwner() == Player(PLAYER_NEUTRAL_AGGRESSIVE))
        endif
    endif

    if (canDrop) then
        // Item set 0
        call RandomDistReset(  )
        call RandomDistAddItem( ChooseRandomItemEx( ITEM_TYPE_CHARGED, 5 ), 100 )
        set itemID = RandomDistChoose(  )
        if (trigUnit != null) then
            call UnitDropItem( trigUnit, itemID )
        else
            call WidgetDropItem( trigWidget, itemID )
        endif

    endif

    set bj_lastDyingWidget = null
    call DestroyTrigger(GetTriggeringTrigger())
endfunction

function Unit000023_DropItems takes nothing returns nothing
    local widget  trigWidget = null
    local unit    trigUnit   = null
    local integer itemID     = 0
    local boolean canDrop    = true

    set trigWidget = bj_lastDyingWidget
    if (trigWidget == null) then
        set trigUnit = GetTriggerUnit()
    endif

    if (trigUnit != null) then
        set canDrop = not IsUnitHidden(trigUnit)
        if (canDrop and GetChangingUnit() != null) then
            set canDrop = (GetChangingUnitPrevOwner() == Player(PLAYER_NEUTRAL_AGGRESSIVE))
        endif
    endif

    if (canDrop) then
        // Item set 0
        call RandomDistReset(  )
        call RandomDistAddItem( ChooseRandomItemEx( ITEM_TYPE_CHARGED, 2 ), 100 )
        set itemID = RandomDistChoose(  )
        if (trigUnit != null) then
            call UnitDropItem( trigUnit, itemID )
        else
            call WidgetDropItem( trigWidget, itemID )
        endif

        // Item set 1
        call RandomDistReset(  )
        call RandomDistAddItem( ChooseRandomItemEx( ITEM_TYPE_POWERUP, 1 ), 100 )
        set itemID = RandomDistChoose(  )
        if (trigUnit != null) then
            call UnitDropItem( trigUnit, itemID )
        else
            call WidgetDropItem( trigWidget, itemID )
        endif

    endif

    set bj_lastDyingWidget = null
    call DestroyTrigger(GetTriggeringTrigger())
endfunction

function Unit000025_DropItems takes nothing returns nothing
    local widget  trigWidget = null
    local unit    trigUnit   = null
    local integer itemID     = 0
    local boolean canDrop    = true

    set trigWidget = bj_lastDyingWidget
    if (trigWidget == null) then
        set trigUnit = GetTriggerUnit()
    endif

    if (trigUnit != null) then
        set canDrop = not IsUnitHidden(trigUnit)
        if (canDrop and GetChangingUnit() != null) then
            set canDrop = (GetChangingUnitPrevOwner() == Player(PLAYER_NEUTRAL_AGGRESSIVE))
        endif
    endif

    if (canDrop) then
        // Item set 0
        call RandomDistReset(  )
        call RandomDistAddItem( ChooseRandomItemEx( ITEM_TYPE_CHARGED, 5 ), 100 )
        set itemID = RandomDistChoose(  )
        if (trigUnit != null) then
            call UnitDropItem( trigUnit, itemID )
        else
            call WidgetDropItem( trigWidget, itemID )
        endif

    endif

    set bj_lastDyingWidget = null
    call DestroyTrigger(GetTriggeringTrigger())
endfunction

function Unit000033_DropItems takes nothing returns nothing
    local widget  trigWidget = null
    local unit    trigUnit   = null
    local integer itemID     = 0
    local boolean canDrop    = true

    set trigWidget = bj_lastDyingWidget
    if (trigWidget == null) then
        set trigUnit = GetTriggerUnit()
    endif

    if (trigUnit != null) then
        set canDrop = not IsUnitHidden(trigUnit)
        if (canDrop and GetChangingUnit() != null) then
            set canDrop = (GetChangingUnitPrevOwner() == Player(PLAYER_NEUTRAL_AGGRESSIVE))
        endif
    endif

    if (canDrop) then
        // Item set 0
        call RandomDistReset(  )
        call RandomDistAddItem( ChooseRandomItemEx( ITEM_TYPE_CHARGED, 5 ), 100 )
        set itemID = RandomDistChoose(  )
        if (trigUnit != null) then
            call UnitDropItem( trigUnit, itemID )
        else
            call WidgetDropItem( trigWidget, itemID )
        endif

    endif

    set bj_lastDyingWidget = null
    call DestroyTrigger(GetTriggeringTrigger())
endfunction

function Unit000035_DropItems takes nothing returns nothing
    local widget  trigWidget = null
    local unit    trigUnit   = null
    local integer itemID     = 0
    local boolean canDrop    = true

    set trigWidget = bj_lastDyingWidget
    if (trigWidget == null) then
        set trigUnit = GetTriggerUnit()
    endif

    if (trigUnit != null) then
        set canDrop = not IsUnitHidden(trigUnit)
        if (canDrop and GetChangingUnit() != null) then
            set canDrop = (GetChangingUnitPrevOwner() == Player(PLAYER_NEUTRAL_AGGRESSIVE))
        endif
    endif

    if (canDrop) then
        // Item set 0
        call RandomDistReset(  )
        call RandomDistAddItem( ChooseRandomItemEx( ITEM_TYPE_CHARGED, 2 ), 100 )
        set itemID = RandomDistChoose(  )
        if (trigUnit != null) then
            call UnitDropItem( trigUnit, itemID )
        else
            call WidgetDropItem( trigWidget, itemID )
        endif

        // Item set 1
        call RandomDistReset(  )
        call RandomDistAddItem( ChooseRandomItemEx( ITEM_TYPE_POWERUP, 1 ), 100 )
        set itemID = RandomDistChoose(  )
        if (trigUnit != null) then
            call UnitDropItem( trigUnit, itemID )
        else
            call WidgetDropItem( trigWidget, itemID )
        endif

    endif

    set bj_lastDyingWidget = null
    call DestroyTrigger(GetTriggeringTrigger())
endfunction

function Unit000038_DropItems takes nothing returns nothing
    local widget  trigWidget = null
    local unit    trigUnit   = null
    local integer itemID     = 0
    local boolean canDrop    = true

    set trigWidget = bj_lastDyingWidget
    if (trigWidget == null) then
        set trigUnit = GetTriggerUnit()
    endif

    if (trigUnit != null) then
        set canDrop = not IsUnitHidden(trigUnit)
        if (canDrop and GetChangingUnit() != null) then
            set canDrop = (GetChangingUnitPrevOwner() == Player(PLAYER_NEUTRAL_AGGRESSIVE))
        endif
    endif

    if (canDrop) then
        // Item set 0
        call RandomDistReset(  )
        call RandomDistAddItem( ChooseRandomItemEx( ITEM_TYPE_PERMANENT, 2 ), 100 )
        set itemID = RandomDistChoose(  )
        if (trigUnit != null) then
            call UnitDropItem( trigUnit, itemID )
        else
            call WidgetDropItem( trigWidget, itemID )
        endif

    endif

    set bj_lastDyingWidget = null
    call DestroyTrigger(GetTriggeringTrigger())
endfunction

function Unit000042_DropItems takes nothing returns nothing
    local widget  trigWidget = null
    local unit    trigUnit   = null
    local integer itemID     = 0
    local boolean canDrop    = true

    set trigWidget = bj_lastDyingWidget
    if (trigWidget == null) then
        set trigUnit = GetTriggerUnit()
    endif

    if (trigUnit != null) then
        set canDrop = not IsUnitHidden(trigUnit)
        if (canDrop and GetChangingUnit() != null) then
            set canDrop = (GetChangingUnitPrevOwner() == Player(PLAYER_NEUTRAL_AGGRESSIVE))
        endif
    endif

    if (canDrop) then
        // Item set 0
        call RandomDistReset(  )
        call RandomDistAddItem( ChooseRandomItemEx( ITEM_TYPE_PERMANENT, 2 ), 100 )
        set itemID = RandomDistChoose(  )
        if (trigUnit != null) then
            call UnitDropItem( trigUnit, itemID )
        else
            call WidgetDropItem( trigWidget, itemID )
        endif

    endif

    set bj_lastDyingWidget = null
    call DestroyTrigger(GetTriggeringTrigger())
endfunction

function Unit000043_DropItems takes nothing returns nothing
    local widget  trigWidget = null
    local unit    trigUnit   = null
    local integer itemID     = 0
    local boolean canDrop    = true

    set trigWidget = bj_lastDyingWidget
    if (trigWidget == null) then
        set trigUnit = GetTriggerUnit()
    endif

    if (trigUnit != null) then
        set canDrop = not IsUnitHidden(trigUnit)
        if (canDrop and GetChangingUnit() != null) then
            set canDrop = (GetChangingUnitPrevOwner() == Player(PLAYER_NEUTRAL_AGGRESSIVE))
        endif
    endif

    if (canDrop) then
        // Item set 0
        call RandomDistReset(  )
        call RandomDistAddItem( ChooseRandomItemEx( ITEM_TYPE_POWERUP, 2 ), 100 )
        set itemID = RandomDistChoose(  )
        if (trigUnit != null) then
            call UnitDropItem( trigUnit, itemID )
        else
            call WidgetDropItem( trigWidget, itemID )
        endif

    endif

    set bj_lastDyingWidget = null
    call DestroyTrigger(GetTriggeringTrigger())
endfunction

function Unit000048_DropItems takes nothing returns nothing
    local widget  trigWidget = null
    local unit    trigUnit   = null
    local integer itemID     = 0
    local boolean canDrop    = true

    set trigWidget = bj_lastDyingWidget
    if (trigWidget == null) then
        set trigUnit = GetTriggerUnit()
    endif

    if (trigUnit != null) then
        set canDrop = not IsUnitHidden(trigUnit)
        if (canDrop and GetChangingUnit() != null) then
            set canDrop = (GetChangingUnitPrevOwner() == Player(PLAYER_NEUTRAL_AGGRESSIVE))
        endif
    endif

    if (canDrop) then
        // Item set 0
        call RandomDistReset(  )
        call RandomDistAddItem( ChooseRandomItemEx( ITEM_TYPE_POWERUP, 2 ), 100 )
        set itemID = RandomDistChoose(  )
        if (trigUnit != null) then
            call UnitDropItem( trigUnit, itemID )
        else
            call WidgetDropItem( trigWidget, itemID )
        endif

    endif

    set bj_lastDyingWidget = null
    call DestroyTrigger(GetTriggeringTrigger())
endfunction

function Unit000050_DropItems takes nothing returns nothing
    local widget  trigWidget = null
    local unit    trigUnit   = null
    local integer itemID     = 0
    local boolean canDrop    = true

    set trigWidget = bj_lastDyingWidget
    if (trigWidget == null) then
        set trigUnit = GetTriggerUnit()
    endif

    if (trigUnit != null) then
        set canDrop = not IsUnitHidden(trigUnit)
        if (canDrop and GetChangingUnit() != null) then
            set canDrop = (GetChangingUnitPrevOwner() == Player(PLAYER_NEUTRAL_AGGRESSIVE))
        endif
    endif

    if (canDrop) then
        // Item set 0
        call RandomDistReset(  )
        call RandomDistAddItem( ChooseRandomItemEx( ITEM_TYPE_CHARGED, 5 ), 100 )
        set itemID = RandomDistChoose(  )
        if (trigUnit != null) then
            call UnitDropItem( trigUnit, itemID )
        else
            call WidgetDropItem( trigWidget, itemID )
        endif

    endif

    set bj_lastDyingWidget = null
    call DestroyTrigger(GetTriggeringTrigger())
endfunction


//***************************************************************************
//*
//*  Unit Creation
//*
//***************************************************************************

//===========================================================================
function CreateNeutralHostile takes nothing returns nothing
    local player p = Player(PLAYER_NEUTRAL_AGGRESSIVE)
    local unit u
    local integer unitID
    local trigger t
    local real life

    set u = CreateUnit( p, 'ngna', 3664.0, -1202.4, 180.066 )
    call SetUnitAcquireRange( u, 200.0 )
    set u = CreateUnit( p, 'nftk', 2877.1, 2698.1, 216.743 )
    set t = CreateTrigger(  )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_DEATH )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_CHANGE_OWNER )
    call TriggerAddAction( t, function Unit000009_DropItems )
    set u = CreateUnit( p, 'ngna', -3802.2, 1313.9, 352.262 )
    call SetUnitAcquireRange( u, 200.0 )
    set u = CreateUnit( p, 'ngna', -3792.9, 1133.7, 3.037 )
    call SetUnitAcquireRange( u, 200.0 )
    set u = CreateUnit( p, 'nogr', 1589.0, 3208.4, -79.353 )
    call SetUnitAcquireRange( u, 200.0 )
    set t = CreateTrigger(  )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_DEATH )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_CHANGE_OWNER )
    call TriggerAddAction( t, function Unit000006_DropItems )
    set u = CreateUnit( p, 'nfsp', 1433.7, 3271.9, 303.280 )
    call SetUnitAcquireRange( u, 200.0 )
    call IssueImmediateOrder( u, "autodispeloff" )
    call IssueImmediateOrder( u, "healoff" )
    set u = CreateUnit( p, 'ngnw', 3476.6, -1257.8, 171.001 )
    call SetUnitState( u, UNIT_STATE_MANA, 0 )
    call SetUnitAcquireRange( u, 200.0 )
    set t = CreateTrigger(  )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_DEATH )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_CHANGE_OWNER )
    call TriggerAddAction( t, function Unit000002_DropItems )
    set u = CreateUnit( p, 'ngnw', -3648.6, 1166.3, 11.290 )
    call SetUnitState( u, UNIT_STATE_MANA, 0 )
    call SetUnitAcquireRange( u, 200.0 )
    set t = CreateTrigger(  )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_DEATH )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_CHANGE_OWNER )
    call TriggerAddAction( t, function Unit000017_DropItems )
    set u = CreateUnit( p, 'nogl', 100.4, 3473.5, 279.740 )
    call SetUnitAcquireRange( u, 200.0 )
    set t = CreateTrigger(  )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_DEATH )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_CHANGE_OWNER )
    call TriggerAddAction( t, function Unit000025_DropItems )
    set u = CreateUnit( p, 'nogr', 1433.7, 3115.8, 318.875 )
    call SetUnitAcquireRange( u, 200.0 )
    set u = CreateUnit( p, 'nftk', -2972.1, -2922.5, 42.440 )
    set t = CreateTrigger(  )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_DEATH )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_CHANGE_OWNER )
    call TriggerAddAction( t, function Unit000043_DropItems )
    set u = CreateUnit( p, 'nggr', -3119.3, -3135.8, 47.430 )
    call SetUnitState( u, UNIT_STATE_MANA, 0 )
    set t = CreateTrigger(  )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_DEATH )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_CHANGE_OWNER )
    call TriggerAddAction( t, function Unit000019_DropItems )
    set u = CreateUnit( p, 'nftt', -2896.8, -3170.9, 66.495 )
    set u = CreateUnit( p, 'nogm', 3496.2, 76.7, 160.892 )
    call SetUnitAcquireRange( u, 200.0 )
    set t = CreateTrigger(  )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_DEATH )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_CHANGE_OWNER )
    call TriggerAddAction( t, function Unit000035_DropItems )
    set u = CreateUnit( p, 'nogm', -3509.0, 9.2, 336.000 )
    call SetUnitAcquireRange( u, 200.0 )
    set t = CreateTrigger(  )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_DEATH )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_CHANGE_OWNER )
    call TriggerAddAction( t, function Unit000023_DropItems )
    set u = CreateUnit( p, 'nftt', -3121.4, -2865.7, 26.019 )
    set u = CreateUnit( p, 'nftb', -3548.1, 169.3, 317.000 )
    call SetUnitAcquireRange( u, 200.0 )
    set u = CreateUnit( p, 'nogm', -1334.2, -66.6, 175.351 )
    call SetUnitAcquireRange( u, 200.0 )
    set t = CreateTrigger(  )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_DEATH )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_CHANGE_OWNER )
    call TriggerAddAction( t, function Unit000016_DropItems )
    set u = CreateUnit( p, 'nftb', 3554.0, 207.6, 207.000 )
    call SetUnitAcquireRange( u, 200.0 )
    set u = CreateUnit( p, 'ngst', 79.7, -237.9, 0.000 )
    call SetUnitAcquireRange( u, 200.0 )
    set t = CreateTrigger(  )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_DEATH )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_CHANGE_OWNER )
    call TriggerAddAction( t, function Unit000038_DropItems )
    set u = CreateUnit( p, 'nftb', 268.9, 3389.0, 255.031 )
    call SetUnitAcquireRange( u, 200.0 )
    set u = CreateUnit( p, 'nfsh', 480.3, -3425.6, 111.018 )
    call SetUnitAcquireRange( u, 200.0 )
    call IssueImmediateOrder( u, "healoff" )
    call IssueImmediateOrder( u, "blackarrowoff" )
    call IssueImmediateOrder( u, "autodispeloff" )
    call IssueImmediateOrder( u, "healoff" )
    call IssueImmediateOrder( u, "innerfireoff" )
    set u = CreateUnit( p, 'nogr', -1440.7, -3760.2, 129.240 )
    call SetUnitAcquireRange( u, 200.0 )
    set t = CreateTrigger(  )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_DEATH )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_CHANGE_OWNER )
    call TriggerAddAction( t, function Unit000042_DropItems )
    set u = CreateUnit( p, 'nomg', 297.1, -3383.6, 102.052 )
    call SetUnitAcquireRange( u, 200.0 )
    set t = CreateTrigger(  )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_DEATH )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_CHANGE_OWNER )
    call TriggerAddAction( t, function Unit000048_DropItems )
    set u = CreateUnit( p, 'nftb', 104.6, -3483.4, 90.874 )
    call SetUnitAcquireRange( u, 200.0 )
    set u = CreateUnit( p, 'nfsp', -1314.7, -3793.7, 139.298 )
    call SetUnitAcquireRange( u, 200.0 )
    call IssueImmediateOrder( u, "autodispeloff" )
    call IssueImmediateOrder( u, "healoff" )
    set u = CreateUnit( p, 'ngrk', 16.2, -497.3, 295.050 )
    call SetUnitState( u, UNIT_STATE_MANA, 0 )
    call SetUnitAcquireRange( u, 200.0 )
    set u = CreateUnit( p, 'nogr', -1357.8, -3643.6, 154.893 )
    call SetUnitAcquireRange( u, 200.0 )
    set u = CreateUnit( p, 'nfsh', -101.4, 3302.8, 273.650 )
    call SetUnitAcquireRange( u, 200.0 )
    call IssueImmediateOrder( u, "healoff" )
    call IssueImmediateOrder( u, "blackarrowoff" )
    call IssueImmediateOrder( u, "autodispeloff" )
    call IssueImmediateOrder( u, "healoff" )
    call IssueImmediateOrder( u, "innerfireoff" )
    set u = CreateUnit( p, 'ngna', 3617.5, -1380.7, 180.066 )
    call SetUnitAcquireRange( u, 200.0 )
    set u = CreateUnit( p, 'nggr', 3043.5, 2896.8, 220.509 )
    call SetUnitState( u, UNIT_STATE_MANA, 0 )
    set t = CreateTrigger(  )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_DEATH )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_CHANGE_OWNER )
    call TriggerAddAction( t, function Unit000033_DropItems )
    set u = CreateUnit( p, 'nogl', 266.1, -3580.4, 98.611 )
    call SetUnitAcquireRange( u, 200.0 )
    set t = CreateTrigger(  )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_DEATH )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_CHANGE_OWNER )
    call TriggerAddAction( t, function Unit000050_DropItems )
    set u = CreateUnit( p, 'nogm', 1290.3, -263.3, 351.000 )
    call SetUnitAcquireRange( u, 200.0 )
    set t = CreateTrigger(  )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_DEATH )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_CHANGE_OWNER )
    call TriggerAddAction( t, function Unit000012_DropItems )
    set u = CreateUnit( p, 'ngrk', 164.7, -385.0, 290.830 )
    call SetUnitState( u, UNIT_STATE_MANA, 0 )
    call SetUnitAcquireRange( u, 200.0 )
    set t = CreateTrigger(  )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_DEATH )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_CHANGE_OWNER )
    call TriggerAddAction( t, function Unit000005_DropItems )
    set u = CreateUnit( p, 'ngrk', 75.9, -15.9, 86.377 )
    call SetUnitState( u, UNIT_STATE_MANA, 0 )
    call SetUnitAcquireRange( u, 200.0 )
    set u = CreateUnit( p, 'nftt', 2799.1, 2951.9, 238.607 )
    set u = CreateUnit( p, 'nftt', 3035.8, 2656.0, 189.405 )
    set u = CreateUnit( p, 'nogm', 1313.5, -21.1, 351.000 )
    call SetUnitAcquireRange( u, 200.0 )
    set u = CreateUnit( p, 'nogm', -1303.7, 191.7, 184.000 )
    call SetUnitAcquireRange( u, 200.0 )
    set u = CreateUnit( p, 'nomg', 84.5, 3274.8, 310.710 )
    call SetUnitAcquireRange( u, 200.0 )
    set t = CreateTrigger(  )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_DEATH )
    call TriggerRegisterUnitEvent( t, u, EVENT_UNIT_CHANGE_OWNER )
    call TriggerAddAction( t, function Unit000013_DropItems )
    set u = CreateUnit( p, 'nftb', 1194.2, -140.1, 3.000 )
    call SetUnitAcquireRange( u, 200.0 )
    set u = CreateUnit( p, 'nftb', 3586.0, -76.4, 178.000 )
    call SetUnitAcquireRange( u, 200.0 )
    set u = CreateUnit( p, 'nftb', -1208.8, 65.8, 194.000 )
    call SetUnitAcquireRange( u, 200.0 )
    set u = CreateUnit( p, 'nftb', -3657.0, -58.9, 311.000 )
    call SetUnitAcquireRange( u, 200.0 )
endfunction

//===========================================================================
function CreateNeutralPassiveBuildings takes nothing returns nothing
    local player p = Player(PLAYER_NEUTRAL_PASSIVE)
    local unit u
    local integer unitID
    local trigger t
    local real life

    set u = CreateUnit( p, 'ngol', -3392.0, -3392.0, 270.000 )
    call SetResourceAmount( u, 15000 )
    set u = CreateUnit( p, 'ngol', 3328.0, -3456.0, 270.000 )
    call SetResourceAmount( u, 12000 )
    set u = CreateUnit( p, 'ngol', 3328.0, 3200.0, 270.000 )
    call SetResourceAmount( u, 15000 )
    set u = CreateUnit( p, 'ngol', -3328.0, 3328.0, 270.000 )
    call SetResourceAmount( u, 12000 )
    set u = CreateUnit( p, 'ngme', -128.0, -256.0, 270.000 )
endfunction

//===========================================================================
function CreatePlayerBuildings takes nothing returns nothing
endfunction

//===========================================================================
function CreatePlayerUnits takes nothing returns nothing
endfunction

//===========================================================================
function CreateAllUnits takes nothing returns nothing
    call CreateNeutralPassiveBuildings(  )
    call CreatePlayerBuildings(  )
    call CreateNeutralHostile(  )
    call CreatePlayerUnits(  )
endfunction

//***************************************************************************
//*
//*  Regions
//*
//***************************************************************************

function CreateRegions takes nothing returns nothing
    local weathereffect we

    set gg_rct_Snow1 = Rect( -1024.0, 2592.0, 1504.0, 3968.0 )
    set we = AddWeatherEffect( gg_rct_Snow1, 'SNhs' )
    call EnableWeatherEffect( we, true )
    set gg_rct_Snow2 = Rect( 3168.0, -1888.0, 4064.0, 992.0 )
    set we = AddWeatherEffect( gg_rct_Snow2, 'SNhs' )
    call EnableWeatherEffect( we, true )
    set gg_rct_Snow3 = Rect( -4032.0, -1536.0, -2976.0, 960.0 )
    set we = AddWeatherEffect( gg_rct_Snow3, 'SNhs' )
    call EnableWeatherEffect( we, true )
    set gg_rct_Snow4 = Rect( -960.0, -1984.0, 1472.0, 960.0 )
    set we = AddWeatherEffect( gg_rct_Snow4, 'SNhs' )
    call EnableWeatherEffect( we, true )
endfunction

//***************************************************************************
//*
//*  Triggers
//*
//***************************************************************************

//===========================================================================
// Trigger: Melee Initialization
//
// Default melee game initialization for all players
//===========================================================================
function Trig_Melee_Initialization_Actions takes nothing returns nothing
    call MeleeStartingVisibility(  )
    call MeleeStartingHeroLimit(  )
    call MeleeGrantHeroItems(  )
    call MeleeStartingResources(  )
    call MeleeClearExcessUnits(  )
    call MeleeStartingUnits(  )
    call MeleeStartingAI(  )
    call MeleeInitVictoryDefeat(  )
endfunction

//===========================================================================
function InitTrig_Melee_Initialization takes nothing returns nothing
    set gg_trg_Melee_Initialization = CreateTrigger(  )
    call TriggerAddAction( gg_trg_Melee_Initialization, function Trig_Melee_Initialization_Actions )
endfunction

//===========================================================================
function InitCustomTriggers takes nothing returns nothing
    call InitTrig_Melee_Initialization(  )
endfunction

//===========================================================================
function RunInitializationTriggers takes nothing returns nothing
    call ConditionalTriggerExecute( gg_trg_Melee_Initialization )
endfunction

//***************************************************************************
//*
//*  Players
//*
//***************************************************************************

function InitCustomPlayerSlots takes nothing returns nothing

    // Player 0
    call SetPlayerStartLocation( Player(0), 0 )
    call SetPlayerColor( Player(0), ConvertPlayerColor(0) )
    call SetPlayerRacePreference( Player(0), RACE_PREF_HUMAN )
    call SetPlayerRaceSelectable( Player(0), true )
    call SetPlayerController( Player(0), MAP_CONTROL_USER )

    // Player 1
    call SetPlayerStartLocation( Player(1), 1 )
    call SetPlayerColor( Player(1), ConvertPlayerColor(1) )
    call SetPlayerRacePreference( Player(1), RACE_PREF_ORC )
    call SetPlayerRaceSelectable( Player(1), true )
    call SetPlayerController( Player(1), MAP_CONTROL_USER )

endfunction

function InitCustomTeams takes nothing returns nothing
    // Force: TRIGSTR_012
    call SetPlayerTeam( Player(0), 0 )
    call SetPlayerTeam( Player(1), 0 )

endfunction

function InitAllyPriorities takes nothing returns nothing

    call SetStartLocPrioCount( 0, 1 )
    call SetStartLocPrio( 0, 0, 1, MAP_LOC_PRIO_HIGH )

    call SetStartLocPrioCount( 1, 1 )
    call SetStartLocPrio( 1, 0, 0, MAP_LOC_PRIO_HIGH )
endfunction

//***************************************************************************
//*
//*  Main Initialization
//*
//***************************************************************************

//===========================================================================
function main takes nothing returns nothing
    call SetCameraBounds( -4096.0 + GetCameraMargin(CAMERA_MARGIN_LEFT), -3968.0 + GetCameraMargin(CAMERA_MARGIN_BOTTOM), 3840.0 - GetCameraMargin(CAMERA_MARGIN_RIGHT), 3968.0 - GetCameraMargin(CAMERA_MARGIN_TOP), -4096.0 + GetCameraMargin(CAMERA_MARGIN_LEFT), 3968.0 - GetCameraMargin(CAMERA_MARGIN_TOP), 3840.0 - GetCameraMargin(CAMERA_MARGIN_RIGHT), -3968.0 + GetCameraMargin(CAMERA_MARGIN_BOTTOM) )
    call SetDayNightModels( "Environment\\DNC\\DNCLordaeron\\DNCLordaeronTerrain\\DNCLordaeronTerrain.mdl", "Environment\\DNC\\DNCLordaeron\\DNCLordaeronUnit\\DNCLordaeronUnit.mdl" )
    call NewSoundEnvironment( "Default" )
    call SetAmbientDaySound( "LordaeronWinterDay" )
    call SetAmbientNightSound( "LordaeronWinterNight" )
    call SetMapMusic( "Music", true, 0 )
    call CreateRegions(  )
    call CreateAllUnits(  )
    call InitBlizzard(  )
    call InitGlobals(  )
    call InitCustomTriggers(  )
    call RunInitializationTriggers(  )

endfunction

//***************************************************************************
//*
//*  Map Configuration
//*
//***************************************************************************

function config takes nothing returns nothing
    call SetMapName( "TRIGSTR_000" )
    call SetMapDescription( "TRIGSTR_002" )
    call SetPlayers( 2 )
    call SetTeams( 2 )
    call SetGamePlacement( MAP_PLACEMENT_TEAMS_TOGETHER )

    call DefineStartLocation( 0, 2752.0, -2944.0 )
    call DefineStartLocation( 1, -2880.0, 2688.0 )

    // Player setup
    call InitCustomPlayerSlots(  )
    call SetPlayerSlotAvailable( Player(0), MAP_CONTROL_USER )
    call SetPlayerSlotAvailable( Player(1), MAP_CONTROL_USER )
    call InitGenericPlayerSlots(  )
    call InitAllyPriorities(  )
endfunction

