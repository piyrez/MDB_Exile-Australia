disableSerialization;
/*
XM8 Apps script made by Shix 
http://www.exilemod.com/profile/4566-shix/
Use: replaces the server info button in the XM8 and opens a apps page in in a xm8 dialouge 
XM8 Apps can be configured below 
*/

closeDialog 24015; // closes the default XM8
createDialog"XM8Apps"; //Creates the XM8Apps Dialouge 
ExileClientXM8IsPowerOn = true;
/////////////////
//CONFIG
////////////////

/*
Example 
_app1Text = "DeployBike"; //Text what will appear at the bottom of the app button 
_app1Logo = "xm8Apps\images\bikeLog.paa"; //The Logo that will Appear on the app button images MUST be in a .paa format 
app1_action = {
execVM"custom\deploy_bike.sqf";
};
*/

//App 1 
_app1Text = "App 1";
_app1Logo = "";
app1_action = {

};

//App 2 
_app2Text = "App 2";
_app2Logo = "";
app2_action = {

};

//App 3 
_app3Text = "App 3";
_app3Logo = "";
app3_action = {

};

//App 4 
_app4Text = "App 4";
_app4Logo = "";
app4_action = {

};

//App 5 
_app5Text = "App 5";
_app5Logo = "";
app5_action = {

};

//App 6 
_app6Text = "App 6";
_app6Logo = "";
app6_action = {

};

//App 7 
_app7Text = "View Distance";
_app7Logo = getText (configfile >> "CfgWeapons" >> "Binocular" >> "picture");
app7_action = {
	execVM "xm8Apps\Apps\ViewDistance.sqf";
};

//App 8 
_app8Text = "Attach Chemlight";
_app8Logo = "";
app8_action = {
	[] execVM "xm8Apps\custom\attachChemLight.sqf";
};

//App 9 
_app9Text = "Server Rules";
_app9Logo = "\Exile_AiA_Building_Addon\images\UI\logo_small.paa";
app9_action = {
	execVM "xm8Apps\custom\features.sqf";
};
/////////////////
//CONFIG END
////////////////


//Dont Edit this bit if you dont know what youare doing 

fnc_update_buttons = {
_dialog = findDisplay 8457;
//Updates Text
(_dialog displayCtrl 1000) ctrlSetText format["%1",_app1Text];
(_dialog displayCtrl 1001) ctrlSetText format["%1",_app2Text];
(_dialog displayCtrl 1002) ctrlSetText format["%1",_app3Text];
(_dialog displayCtrl 1003) ctrlSetText format["%1",_app4Text];
(_dialog displayCtrl 1004) ctrlSetText format["%1",_app5Text];
(_dialog displayCtrl 1005) ctrlSetText format["%1",_app6Text];
(_dialog displayCtrl 1006) ctrlSetText format["%1",_app7Text];
(_dialog displayCtrl 1007) ctrlSetText format["%1",_app8Text];
(_dialog displayCtrl 1008) ctrlSetText format["%1",_app9Text];

//updates Logos
(_dialog displayCtrl 1200) ctrlSetText format["%1",_app1Logo];
(_dialog displayCtrl 1201) ctrlSetText format["%1",_app2Logo];
(_dialog displayCtrl 1202) ctrlSetText format["%1",_app3Logo];
(_dialog displayCtrl 1203) ctrlSetText format["%1",_app4Logo];
(_dialog displayCtrl 1204) ctrlSetText format["%1",_app5Logo];
(_dialog displayCtrl 1205) ctrlSetText format["%1",_app6Logo];
(_dialog displayCtrl 1206) ctrlSetText format["%1",_app7Logo];
(_dialog displayCtrl 1207) ctrlSetText format["%1",_app8Logo];
(_dialog displayCtrl 1208) ctrlSetText format["%1",_app9Logo];
};
call fnc_update_buttons;

