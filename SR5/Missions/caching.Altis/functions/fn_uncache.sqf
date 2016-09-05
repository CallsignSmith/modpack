/*
Author:
Nicholas Clark (SENSEI)

Description:
uncaches unit

Arguments:
0: unit to be uncached <OBJECT>

Return:
none
__________________________________________________________________*/
params ["_unit"];

if (!isPlayer _unit && {!("driver" in assignedVehicleRole _unit)}) then {
	_unit enableSimulationGlobal true;
	_unit hideObjectGlobal false;
	if (vehicle _unit isEqualTo _unit) then {
		detach _unit;
		_unit setPosATL [getPosATL _unit select 0,getPosATL _unit select 1,0];
	};
};
