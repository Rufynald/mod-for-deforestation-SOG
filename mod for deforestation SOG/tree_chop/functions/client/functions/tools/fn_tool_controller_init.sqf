/*
    File: fn_tool_controller_init.sqf
    Author:  Savage Game Design (Modified by Rufy & Spoffy)
    Public: Yes

    Description:
        Initializes the tool system (only supports axes now)

    Parameter(s):
        None

    Returns:
        None

    Example(s):
        [] call para_c_fnc_tool_controller_init
*/

[missionNamespace, "vn_melee_attack", {
    params ["_unit", "_hitPos", "_hitObject"];

    if (isNull _hitObject) exitWith {};

    private _tool = currentWeapon _unit;

    switch (_tool) do {
        case "vn_m_axe_01";
        case "vn_m_axe_fire";
        case "vn_m_machete_01";
        case "vn_m_machete_02";
        case "vn_m_typeivaxe_01": {
            [_hitObject] call para_c_fnc_operate_axe;
        };
    };
}] call BIS_fnc_addScriptedEventHandler;
