disableSerialization;
closeDialog 8458; // closes the default XM8
createDialog"XM8ViewDistance"; //Creates the XM8Apps Dialouge 
ExileClientXM8IsPowerOn = true;

_display = findDisplay 8458;
_ctrl = _display displayCtrl 4007;
{_ctrl lbAdd _x} forEach ["500","750","1000","1250","1500","1750","2000","2500","3000","3500"];
{_ctrl lbSetValue [_forEachIndex, _x]} forEach [500,750,1000,1250,1500,1750,2000,2500,3000,3500];
_ctrl = _display displayCtrl 4008;
_ctrl ctrlSetText "Select your view distance:";


viewDistanceAction = {
 private["_distance", "_objDistance"];
 _distance = (_this select 0) lbValue (_this select 1);
 _objDistance = _distance - 200;
 setViewDistance _distance;
 setObjectViewDistance _objDistance;
};


