/*
    Author:
        Tim Beswick

    Description:
        Adds all objects to all curators

    Parameter(s):
        0: The module logic <OBJECT>

    Return Value:
        None
*/
#include "script_component.hpp"

params ["_logic"];

if (!local _logic) exitWith {};

[QEGVAR(common,addObjectsToCurators), []] call CBA_fnc_serverEvent;
["All objects were added to Zeus"] call ace_common_fnc_displayTextStructured;

deleteVehicle _logic;
