//[] execVM "custom\playerMarker.sqf";
[] execVM "IgiLoad\IgiLoadInit.sqf";
execVM "custom\cpcnametags.sqf";
execVM "R3F_LOG\init.sqf";

if (isServer) then {
	//[] execVM "custom\time.sqf";
};

#include "A3XAI_Client\A3XAI_initclient.sqf";