/*
    Author:
        Tim Beswick

    Description:
        Zeus display unload

    Parameter(s):
        0: Display <DISPLAY>

    Return Value:
        None
*/
#include "script_component.hpp"

params ["_display"];

(_display displayCtrl 50) ctrlRemoveEventHandler ["Draw", GVAR(curatorUnconciousMapID)];
[GVAR(curatorUnconciousID)] call CBA_fnc_removePerFrameHandler;
