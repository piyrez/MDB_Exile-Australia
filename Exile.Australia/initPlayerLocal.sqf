///////////////////////////////////////////////////////////////////////////////
// Custom Additions
///////////////////////////////////////////////////////////////////////////////
//#include "initServer.sqf"
// Status Bars
[] execVM "custom\statusBar\statusbar.sqf";

// Welcome Credits by Gr8 v0.1
[] execVM "custom\welcome.sqf";

if (!hasInterface || isServer) exitWith {};

///////////////////////////////////////////////////////////////////////////////
// Sydney Traders
///////////////////////////////////////////////////////////////////////////////

//Armory
_trader =
[
    "Exile_Trader_Armory",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [37022.6,12230.4,0],
    312
]
call ExileClient_object_trader_create;

//Equipment
_trader =
[
    "Exile_Trader_Equipment",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [36996.3,12228.3,0],
    10
]
call ExileClient_object_trader_create;

//Special Operations
_trader =
[
    "Exile_Trader_SpecialOperations",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [37010.3,12228,0],
    350
]
call ExileClient_object_trader_create;

//Hardware
_trader =
[
    "Exile_Trader_Hardware",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [36973.1,12229,0],
    359
]
call ExileClient_object_trader_create;

//Food
_trader =
[
    "Exile_Trader_Food",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [37003.8,12265.5,0.1031],
    179
]
call ExileClient_object_trader_create;

//Vehicle
_trader =
[
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [36963.8,12246.4,0],
    78
]
call ExileClient_object_trader_create;

//Vehicle Custom
_trader =
[
    "Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [36961.2,12251.9,0],
    97
]
call ExileClient_object_trader_create;

//Waste
_trader =
[
    "Exile_Trader_WasteDump",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [36953.5,12249.1,0],
    294
]
call ExileClient_object_trader_create;

//Office
_trader =
[
    "Exile_Trader_Office",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [36965.8,12231.2,0],
    48
]
call ExileClient_object_trader_create;

//Aircraft
_trader =
[
    "Exile_Trader_Aircraft",
    "WhiteHead_17",
    ["HubStandingUA_idle2"],
    [35295.9,12203.3,0],
    47
]
call ExileClient_object_trader_create;

//Waste
_trader =
[
    "Exile_Trader_WasteDump",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [35311.9,12186.9,0],
    41
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////////
// Outpost Traders
///////////////////////////////////////////////////////////////////////////////

//Waste
_trader =
[
    "Exile_Trader_WasteDump",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [27768.9,11933.8,0],
    288
]
call ExileClient_object_trader_create;

//Vehicle Custom
_trader =
[
    "Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [27765.9,11945.3,0],
    277
]
call ExileClient_object_trader_create;

//Vehicle
_trader =
[
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [27764,11950,0],
    250
]
call ExileClient_object_trader_create;

//Hardware
_trader =
[
    "Exile_Trader_Hardware",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [27802.5,11966.7,0],
    105
]
call ExileClient_object_trader_create;

//Equipment
_trader =
[
    "Exile_Trader_Equipment",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [27835,11962.7,0],
    193
]
call ExileClient_object_trader_create;

//Special Operations
_trader =
[
    "Exile_Trader_SpecialOperations",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [27851.3,11944.1,0],
    277
]
call ExileClient_object_trader_create;

//Armory
_trader =
[
    "Exile_Trader_Armory",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [27836.4,11925.1,0],
    300
]
call ExileClient_object_trader_create;

//Food
_trader =
[
    "Exile_Trader_Food",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [27806,11922.7,0],
    281
]
call ExileClient_object_trader_create;

//Office
_trader =
[
    "Exile_Trader_Office",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [27812,11964.1,0],
    193
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////////
// Perth Traders
///////////////////////////////////////////////////////////////////////////////

//Waste
_trader =
[
    "Exile_Trader_WasteDump",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [6847.93,18028.9,0],
    0
]
call ExileClient_object_trader_create;

//Vehicle
_trader =
[
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [6869.63,18027,0],
    336
]
call ExileClient_object_trader_create;

//Vehicle Custom
_trader =
[
    "Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [6877.25,18031.1,0],
    329
]
call ExileClient_object_trader_create;

//Aircraft Custom
_trader =
[
    "Exile_Trader_AircraftCustoms",
    "GreekHead_A3_07",
    ["HubStandingUC_idle1"],
    [6886.52,18037.5,0],
    334
]
call ExileClient_object_trader_create;

//Aircraft
_trader =
[
    "Exile_Trader_Aircraft",
    "WhiteHead_17",
    ["HubStandingUA_idle2"],
    [6896.6,18042.6,0],
    330
]
call ExileClient_object_trader_create;

//Food
_trader =
[
    "Exile_Trader_Food",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [6910.55,18031.9,0.140133],
    247
]
call ExileClient_object_trader_create;

//Special Operations
_trader =
[
    "Exile_Trader_SpecialOperations",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [6924.3,18028,0.125533],
    192
]
call ExileClient_object_trader_create;

//Equipment
_trader =
[
    "Exile_Trader_Equipment",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [6929.4,18021.9,0.130597],
    245
]
call ExileClient_object_trader_create;

//Armory
_trader =
[
    "Exile_Trader_Armory",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [6927.36,18015.3,0.131032],
    326
]
call ExileClient_object_trader_create;

//Hardware
_trader =
[
    "Exile_Trader_Hardware",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [6911.52,18037.3,0.133886],
    100
]
call ExileClient_object_trader_create;

//Office
_trader =
[
    "Exile_Trader_Office",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [6917.66,18041.3,0.129329],
    197
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////////
// Darwin Traders
///////////////////////////////////////////////////////////////////////////////

//Armory
_trader =
[
    "Exile_Trader_Armory",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [17127.5,33929.3,0],
    89
]
call ExileClient_object_trader_create;

//Equipment
_trader =
[
    "Exile_Trader_Equipment",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [17129.8,33934.8,0],
    126
]
call ExileClient_object_trader_create;

//Special Operations
_trader =
[
    "Exile_Trader_SpecialOperations",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [17129.7,33942.4,0],
    74
]
call ExileClient_object_trader_create;

//Food
_trader =
[
    "Exile_Trader_Food",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [17133.5,33947.5,0],
    125
]
call ExileClient_object_trader_create;

//Hardware
_trader =
[
    "Exile_Trader_Hardware",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [17135.5,33957.5,0],
    122
]
call ExileClient_object_trader_create;

//Waste
_trader =
[
    "Exile_Trader_WasteDump",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [17172.4,33949.9,0],
    263
]
call ExileClient_object_trader_create;

//Vehicle Custom
_trader =
[
    "Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [17167.9,33936.3,0],
    261
]
call ExileClient_object_trader_create;

//Vehicle
_trader =
[
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [17163.4,33925.5,0],
    305
]
call ExileClient_object_trader_create;

//Aircraft
_trader =
[
    "Exile_Trader_Aircraft",
    "WhiteHead_17",
    ["HubStandingUA_idle2"],
    [17078.3,33853.1,0],
    37
]
call ExileClient_object_trader_create;

//Aircraft Custom
_trader =
[
    "Exile_Trader_AircraftCustoms",
    "GreekHead_A3_07",
    ["HubStandingUC_idle1"],
    [17119,33842.9,0],
    7
]
call ExileClient_object_trader_create;

//Office
_trader =
[
    "Exile_Trader_Office",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [17132.9,33954.6,0],
    104
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////////
// Alice Springs - Hostile Trader
///////////////////////////////////////////////////////////////////////////////

//Armory
_trader =
[
    "Exile_Trader_Armory",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [22013.3,25820.9,0],
    222
]
call ExileClient_object_trader_create;

//Equipment
_trader =
[
    "Exile_Trader_Equipment",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [22008.8,25822.3,0],
    180
]
call ExileClient_object_trader_create;

//Food
_trader =
[
    "Exile_Trader_Food",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [22080.5,25816.3,0],
    89
]
call ExileClient_object_trader_create;

//Hardware
_trader =
[
    "Exile_Trader_Hardware",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [21987.8,25820.6,0],
    178
]
call ExileClient_object_trader_create;

//Vehicle Custom
_trader =
[
    "Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [21975.3,25821.8,0],
    90
]
call ExileClient_object_trader_create;

//Vehicle
_trader =
[
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [21977.5,25813.7,0],
    46
]
call ExileClient_object_trader_create;

//Office
_trader =
[
    "Exile_Trader_Office",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [21991.8,25820.5,0],
    180
]
call ExileClient_object_trader_create;

//Waste
_trader =
[
    "Exile_Trader_WasteDump",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [22001.7,25792.5,0],
    205
]
call ExileClient_object_trader_create;
	