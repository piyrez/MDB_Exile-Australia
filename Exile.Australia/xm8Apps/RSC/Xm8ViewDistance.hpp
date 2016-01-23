/*
XM8 Apps dialog made by shix
*/
class XM8ViewDistance
{
    idd = 8458;
    movingenable=false;
	class Controls
	{ 
		class BackgroundOff: RscPictureKeepAspect
		{
			idc = 4000;

			text = "\exile_assets\texture\ui\xm8_off_ca.paa"; //--- ToDo: Localize;
			x = 0.293777 * safezoneW + safezoneX;
			y = 0.137015 * safezoneH + safezoneY;
			w = 0.412446 * safezoneW;
			h = 0.733303 * safezoneH;
		};
		class BackgroundOn: RscPictureKeepAspect
		{
			idc = 4001;

			text = "\exile_assets\texture\ui\xm8_on_ca.paa"; //--- ToDo: Localize;
			x = 0.293777 * safezoneW + safezoneX;
			y = 0.137015 * safezoneH + safezoneY;
			w = 0.412446 * safezoneW;
			h = 0.733303 * safezoneH;
		};
		class LeftHeader: RscStructuredText
		{
			idc = 4003;

			text = "<t align='left' font='RobotoRegular' shadow='0'>147257</t>"; //--- ToDo: Localize;
			x = 0.33471 * safezoneW + safezoneX;
			y = 0.273409 * safezoneH + safezoneY;
			w = 0.17529 * safezoneW;
			h = 0.0219991 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class RightHeader: RscStructuredText
		{
			idc = 4005;

			text = "<t align='right' font='RobotoRegular' shadow='0'><img image='\exile_assets\texture\ui\xm8_signal_0_ca.paa' shadow='0'/> 21:45</t>"; //--- ToDo: Localize;
			x = 0.49 * safezoneW + safezoneX;
			y = 0.273409 * safezoneH + safezoneY;
			w = 0.17529 * safezoneW;
			h = 0.0219991 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class CenterHeader: RscStructuredText
		{
			idc = 4004;

			text = "<t align='center' font='RobotoMedium' shadow='0'>XM8</t>"; //--- ToDo: Localize;
			x = 0.386577 * safezoneW + safezoneX;
			y = 0.273409 * safezoneH + safezoneY;
			w = 0.226846 * safezoneW;
			h = 0.0219991 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class PowerButton: RscButton
		{
			idc = 4006;
			onButtonClick = "[] execVM 'xm8Apps\Power_Off.sqf';";
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};

			x = 0.489689 * safezoneW + safezoneX;
			y = 0.686992 * safezoneH + safezoneY;
			w = 0.0206223 * safezoneW;
			h = 0.0439982 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			tooltip = "On/Off"; //--- ToDo: Localize;
		};
		
		class ViewDistanceCombo: RscCombo
		{	
			idc = 4007;
			onLBSelChanged = "_this call viewDistanceAction;";

			x = 6.5 * GUI_GRID_W + GUI_GRID_X;
			y = 6 * GUI_GRID_H + GUI_GRID_Y;
			w = 5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class ViewDistanceText: RscText
		{
			idc = 4008;
			x = 4 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
	};
};