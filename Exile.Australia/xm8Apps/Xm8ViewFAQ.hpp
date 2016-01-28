/*
XM8 Apps dialog made by shix
Edited by Piyrez *for FAQ*
*/
class XM8ViewFAQ
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
		class GoBackBtn: RscButton
		{
			idc = 1610;
			text = "Go Back"; //--- ToDo: Localize;
			x = 0.582479 * safezoneW + safezoneX;
			y = 0.650859 * safezoneH + safezoneY;
			w = 0.0618589 * safezoneW;
			h = 0.0329866 * safezoneH;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 8458);  execVM'xm8Apps\XM8Apps_Init.sqf';";
		};
		class ViewRulesHeader: RscStructuredText
		{
			idc = 4007;
			x = 4 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 31 * GUI_GRID_W;
			h = 3 * GUI_GRID_H;
		};
		class ViewRulesPic: RscStructuredText
		{
			idc = 40071;
			x = 4 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 31 * GUI_GRID_W;
			h = 3 * GUI_GRID_H;
		};
		class FeatLine1: RscStructuredText
		{
			idc = 4022;
			x = 4 * GUI_GRID_W + GUI_GRID_X;
			y = 7 * GUI_GRID_H + GUI_GRID_Y;
			w = 31 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class FeatLine2: RscStructuredText
		{
			idc = 4023;
			x = 4 * GUI_GRID_W + GUI_GRID_X;
			y = 8 * GUI_GRID_H + GUI_GRID_Y;
			w = 31 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class FeatLine3: RscStructuredText
		{
			idc = 4024;
			x = 4 * GUI_GRID_W + GUI_GRID_X;
			y = 9 * GUI_GRID_H + GUI_GRID_Y;
			w = 31 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class FeatLine4: RscStructuredText
		{
			idc = 4025;
			x = 4 * GUI_GRID_W + GUI_GRID_X;
			y = 10 * GUI_GRID_H + GUI_GRID_Y;
			w = 31 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class FeatLine5: RscStructuredText
		{
			idc = 4026;
			x = 4 * GUI_GRID_W + GUI_GRID_X;
			y = 11 * GUI_GRID_H + GUI_GRID_Y;
			w = 31 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class FeatLine6: RscStructuredText
		{
			idc = 4027;
			x = 4 * GUI_GRID_W + GUI_GRID_X;
			y = 12 * GUI_GRID_H + GUI_GRID_Y;
			w = 31 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class FeatLine7: RscStructuredText
		{
			idc = 4028;
			x = 4 * GUI_GRID_W + GUI_GRID_X;
			y = 13 * GUI_GRID_H + GUI_GRID_Y;
			w = 31 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class FeatLine8: RscStructuredText
		{
			idc = 4029;
			x = 4 * GUI_GRID_W + GUI_GRID_X;
			y = 14 * GUI_GRID_H + GUI_GRID_Y;
			w = 31 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class FeatLine9: RscStructuredText
		{
			idc = 4030;
			x = 4 * GUI_GRID_W + GUI_GRID_X;
			y = 15 * GUI_GRID_H + GUI_GRID_Y;
			w = 31 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class FeatLine10: RscStructuredText
		{
			idc = 4031;
			x = 4 * GUI_GRID_W + GUI_GRID_X;
			y = 16 * GUI_GRID_H + GUI_GRID_Y;
			w = 31 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class FeatLine11: RscStructuredText
		{
			idc = 4032;
			x = 4 * GUI_GRID_W + GUI_GRID_X;
			y = 17 * GUI_GRID_H + GUI_GRID_Y;
			w = 31 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class FeatLine12: RscStructuredText
		{
			idc = 4033;
			x = 4 * GUI_GRID_W + GUI_GRID_X;
			y = 18 * GUI_GRID_H + GUI_GRID_Y;
			w = 31 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
	};
};