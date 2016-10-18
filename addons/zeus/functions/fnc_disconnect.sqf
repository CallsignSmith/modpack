/*
	Author:
		Tim Beswick

	Description:
		Handles zeus disconnect

	Parameter(s):
		0: ID <SCALAR>
		1: UID <STRING>
		2: Name <STRING>
		3: JIP <BOOLEAN>
		4: Owner <STRING>

	Return Value:
		None
*/
#include "script_component.hpp"

params ["_id", "_uid", "_name", "_jip", "_owner"];

_names = missionNamespace getVariable [QGVAR(curatorNames), ["","","","",""]];
{
	if (_name == _x) then {
		_names set [_forEachIndex, ""];
	};
} forEach _names;

missionNamespace setVariable (QGVAR(curatorNames), _names, true);