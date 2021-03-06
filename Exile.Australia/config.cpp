/**
 * config
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 

class CfgClans
{
	/*
		Defines the amount of pop tabs needed to register a new clan

		Default: 20,000
	*/
	registrationFee = 20000;

	/*
		A list of all characters allowed in a clan *name*
	*/
	clanNameAlphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 -!";
};
class Exile_AbstractCraftingRecipe
{
	name = "";
	pictureItem = ""; 
	returnedItems[] = {};
	components[] = {}; // Required components
	tools[] = {}; // Required tools (matches, gas cooker etc.)
	requiredInteractionModelGroup = ""; // See CfgInteractionModels
	requiresOcean = 0; // isSurfaceWater test
	requiresFire = 0; // inflamed object nearby
};

class CfgCraftingRecipes
{
	
class CookBBQSandwich: Exile_AbstractCraftingRecipe
{
	name = "Cook BBQ Sandwich";
	pictureItem = "Exile_Item_BBQSandwich_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_BBQSandwich_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_BBQSandwich"}
	};
};

class CookCatFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Cat Food";
	pictureItem = "Exile_Item_CatFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_CatFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_CatFood"}
	};
};

class CookChristmasTinner: Exile_AbstractCraftingRecipe
{
	name = "Cook Christmas Tinner";
	pictureItem = "Exile_Item_ChristmasTinner_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_ChristmasTinner_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_ChristmasTinner"}
	};
};
class CookCoffee: Exile_AbstractCraftingRecipe
{
	name = "Brew Coffee";
	pictureItem = "Exile_Item_PlasticBottleCoffee";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleCoffee"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleFreshWater"},
		{1, "Exile_Item_InstantCoffee"}
	};
};
class CookDogFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Dog Food";
	pictureItem = "Exile_Item_DogFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_DogFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_DogFood"}
	};
};

class CookGloriousKnakworst: Exile_AbstractCraftingRecipe
{
	name = "Cook Glorious Knakworst";
	pictureItem = "Exile_Item_GloriousKnakworst_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_GloriousKnakworst_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_GloriousKnakworst"}
	};
};

class CookPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class CookPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Salt Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};

class CookSausageGravy: Exile_AbstractCraftingRecipe
{
	name = "Cook Sausage Gravy";
	pictureItem = "Exile_Item_SausageGravy_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SausageGravy_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SausageGravy"}
	};
};

class CookSurstromming: Exile_AbstractCraftingRecipe
{
	name = "Cook Surströmming";
	pictureItem = "Exile_Item_Surstromming_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_Surstromming_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_Surstromming"}
	};
};

class CraftBushKitGreen: Exile_AbstractCraftingRecipe
{
	name = "Craft a Bush Kit (Green)";
	pictureItem = "Exile_Item_BushKit_Green";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_BushKit_Green"}
	};
	components[] = 
	{
		{10, "Exile_Item_Leaves"},
		{5, "Exile_Item_WoodSticks"},
		{1, "Exile_Item_Rope"}
	};
};
class CraftFirePlace: Exile_AbstractCraftingRecipe
{
	name = "Craft Fire Place";
	pictureItem = "Exile_Item_CampFireKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_CampFireKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
};
class CraftFloodLight: Exile_AbstractCraftingRecipe
{
	name = "Craft Flood Light";
	pictureItem = "Exile_Item_FloodLightKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_FloodLightKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
class CraftFortificationUpgrade: Exile_AbstractCraftingRecipe
{
	name = "Craft Fortification Upgrade";
	pictureItem = "Exile_Item_MetalBoard"; //<< CHANGE IT
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_FortificationUpgrade"}
	};
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalBoard: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Board";
	pictureItem = "Exile_Item_MetalBoard";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalBoard"}
	};
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalPole: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Pole";
	pictureItem = "Exile_Item_MetalPole";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalPole"}
	};
	components[] = 
	{
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftPortableGenerator: Exile_AbstractCraftingRecipe
{
	name = "Craft Portable Generator";
	pictureItem = "Exile_Item_PortableGeneratorKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PortableGeneratorKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
class CraftStorageCrate: Exile_AbstractCraftingRecipe
{
	name = "Craft Storage Crate";
	pictureItem = "Exile_Item_StorageCrateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_StorageCrateKit"}
	};
	components[] = 
	{
		{5, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodDoorWay: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Doorway";
	pictureItem = "Exile_Item_WoodDoorwayKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
/*
class CraftWoodDrawBridge: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Draw-Bridge";
	pictureItem = "Exile_Item_WoodDrawBridgeKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDrawBridgeKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_Rope"}
	};
};
*/
class CraftWoodFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor";
	pictureItem = "Exile_Item_WoodFloorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{8, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodPlank: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Plank";
	pictureItem = "Exile_Item_WoodPlank";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodPlank"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};
class CraftWoodStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Stairs";
	pictureItem = "Exile_Item_WoodStairsKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodStairsKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Support";
	pictureItem = "Exile_Item_WoodSupportKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodSupportKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Wall";
	pictureItem = "Exile_Item_WoodWallKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWallHalf: Exile_AbstractCraftingRecipe
{
	name = "Craft 1/2 Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallHalfKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWorkBench: Exile_AbstractCraftingRecipe
{
	name = "Craft Work Bench";
	pictureItem = "Exile_Item_WorkBenchKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_WorkBenchKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodLog"}
	};
};
class EmptyFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Empty Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterEmpty";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class EmptyPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class EmptyPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Salt Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};
class FillEmptyPlasticBottleWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithFreshWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Fresh Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiredInteractionModelGroup = "CleanWaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Salt Water";
	pictureItem = "Exile_Item_PlasticBottleSaltWater";
	requiresOcean = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Fill Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterFull";
	requiredInteractionModelGroup = "FuelSource";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
};
class UpgradeToWoodDoor: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Door";
	pictureItem = "Exile_Item_WoodDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodFloorKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{4, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodWallHalfKit"}
	};
};
class UpgradeToWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
};
class CfgExileArsenal
{
	class Exile_Uniform_BambiOverall				{ quality = 1; price = 1; sellPrice = 1; };
	
	///////////////////////////////////////////////////////////////////////////////
    // TRYK Glasses Glasses w/NVGS built in
    ///////////////////////////////////////////////////////////////////////////////
	class TRYK_US_ESS_Glasses                                                       { quality = 1; price = 100; };
	class TRYK_US_ESS_Glasses_WH                                                    { quality = 1; price = 100; };
	class TRYK_US_ESS_Glasses_BLK                                                   { quality = 1; price = 100; };
	class TRYK_US_ESS_Glasses_TAN                                                   { quality = 1; price = 100; };
	class TRYK_US_ESS_Glasses_TAN_BLK                                               { quality = 1; price = 100; };
	class TRYK_SPGEAR_Glasses                                                       { quality = 1; price = 100; };
	class TRYK_headset_Glasses                                                      { quality = 1; price = 100; };
	class TRYK_SpsetG_Glasses                                                       { quality = 1; price = 100; };
	class TRYK_Spset_PHC1_Glasses                                                   { quality = 1; price = 100; };
	class TRYK_Spset_PHC2_Glasses                                                   { quality = 1; price = 100; };
	class TRYK_US_ESS_Glasses_H                                                     { quality = 1; price = 100; };
	class TRYK_US_ESS_Glasses_Cover                                                 { quality = 1; price = 100; };
	class TRYK_headset2_glasses                                                     { quality = 1; price = 100; };
 
    ///////////////////////////////////////////////////////////////////////////////
    // TRYK HeadGear
    ///////////////////////////////////////////////////////////////////////////////
	class TRYK_US_ESS_Glasses_NV                                                    { quality = 1; price = 100; };
	class TRYK_US_ESS_Glasses_TAN_NV                                                { quality = 1; price = 100; };
	class TRYK_ESS_BLKTAN_NV                                                        { quality = 1; price = 100; };
	class TRYK_ESS_BLKBLK_NV                                                        { quality = 1; price = 100; };
	class TRYK_G_Shades_Black_NV                                                    { quality = 1; price = 100; };
	class TRYK_G_Shades_Blue_NV                                                     { quality = 1; price = 100; };
	class TRYK_G_bala_ess_NVv                                                       { quality = 1; price = 100; };
	class TRYK_bandana_NV                                                   		{ quality = 1; price = 100; };
	class TRYK_SPgearG_NV                                                   		{ quality = 1; price = 100; };
	class TRYK_SPgear_PHC1_NV                                                       { quality = 1; price = 100; };
	class TRYK_SPgear_PHC2_NV                                                       { quality = 1; price = 100; };
	class TRYK_G_bala_wh_NV                                                 		{ quality = 1; price = 100; };
	class TRYK_ESS_wh_NV                                                    		{ quality = 1; price = 100; };
 
    ///////////////////////////////////////////////////////////////////////////////
    // TRYK HeadGear
    ///////////////////////////////////////////////////////////////////////////////
	class TRYK_ESS_CAP_OD                                               		    { quality = 1; price = 100; };
	class TRYK_ESS_CAP_tan                                              		    { quality = 1; price = 100; };
	class TRYK_R_CAP_BLK                                                		    { quality = 1; price = 100; };
	class TRYK_R_CAP_TAN                                                 		    { quality = 1; price = 100; };
	class TRYK_R_CAP_OD_US                                                	        { quality = 1; price = 100; };
	class TRYK_r_cap_tan_Glasses                                                    { quality = 1; price = 100; };
	class TRYK_r_cap_blk_Glasses                                                    { quality = 1; price = 100; };
	class TRYK_r_cap_od_Glasses                                                     { quality = 1; price = 100; };
	class TRYK_H_headsetcap_Glasses                                                 { quality = 1; price = 100; };
	class TRYK_H_headsetcap_blk_Glasses                                             { quality = 1; price = 100; };
	class TRYK_H_headsetcap_od_Glasses                                              { quality = 1; price = 100; };
	class TRYK_TAC_EARMUFF_SHADE                                                    { quality = 1; price = 100; };
	class TRYK_TAC_EARMUFF                                                   	    { quality = 1; price = 100; };
	class TRYK_NOMIC_TAC_EARMUFF                                                    { quality = 1; price = 100; };
	class TRYK_headset2                                                             { quality = 1; price = 100; };
	class TRYK_TAC_EARMUFF_Gs                                                       { quality = 1; price = 100; };
	class TRYK_TAC_SET_bn                                                           { quality = 1; price = 100; };
	class TRYK_NOMIC_TAC_EARMUFF_Gs                                                 { quality = 1; price = 100; };
	class TRYK_TAC_EARMUFF_SHADE_Gs                                                 { quality = 1; price = 100; };
	class TRYK_TAC_SET_TAN                                                          { quality = 1; price = 100; };
	class TRYK_TAC_SET_OD                                                           { quality = 1; price = 100; };
	class TRYK_TAC_SET_WH                                                           { quality = 1; price = 100; };
	class TRYK_TAC_SET_MESH                                                         { quality = 1; price = 100; };
	class TRYK_TAC_SET_TAN_2                                                        { quality = 1; price = 100; };
	class TRYK_TAC_SET_OD_2                                                         { quality = 1; price = 100; };
	class TRYK_TAC_SET_WH_2                                                         { quality = 1; price = 100; };
	class TRYK_TAC_SET_MESH_2                                                       { quality = 1; price = 100; };
	class TRYK_bandana_g                                                            { quality = 1; price = 100; };
	class TRYK_H_PASGT_BLK                                                          { quality = 1; price = 100; };
	class TRYK_H_PASGT_OD                                                           { quality = 1; price = 100; };
	class TRYK_H_PASGT_COYO                                                         { quality = 1; price = 100; };
	class TRYK_H_PASGT_TAN                                                          { quality = 1; price = 100; };
	class TRYK_H_Helmet_Snow                                                        { quality = 1; price = 100; };
	class TRYK_H_WH                                                                 { quality = 1; price = 100; };
	class TRYK_H_GR                                                                 { quality = 1; price = 100; };
	class TRYK_H_AOR1                                                               { quality = 1; price = 100; };
	class TRYK_H_AOR2                                                               { quality = 1; price = 100; };
	class TRYK_H_EARMUFF                                                            { quality = 1; price = 100; };
	class TRYK_H_TACEARMUFF_H                                                       { quality = 1; price = 100; };
	class TRYK_H_Bandana_H                                                          { quality = 1; price = 100; };
	class TRYK_H_headset2                                                           { quality = 1; price = 100; };
	class TRYK_H_ghillie_over                                                       { quality = 1; price = 100; };
	class TRYK_H_ghillie_top                                                        { quality = 1; price = 100; };
	class TRYK_H_ghillie_top_headless                                               { quality = 1; price = 100; };
	class TRYK_H_ghillie_over_green                                                 { quality = 1; price = 100; };
	class TRYK_H_ghillie_top_green                                                  { quality = 1; price = 100; };
	class TRYK_H_ghillie_top_headless_green                                         { quality = 1; price = 100; };
	class TRYK_H_woolhat                                                            { quality = 1; price = 100; };
	class TRYK_H_woolhat_CW                                                         { quality = 1; price = 100; };
	class TRYK_H_woolhat_WH                                                         { quality = 1; price = 100; };
	class TRYK_H_woolhat_br                                                         { quality = 1; price = 100; };
	class TRYK_H_woolhat_cu                                                         { quality = 1; price = 100; };
	class TRYK_H_woolhat_tan                                                        { quality = 1; price = 100; };
	class TRYK_H_headsetcap                                                         { quality = 1; price = 100; };
	class TRYK_H_headsetcap_blk                                                     { quality = 1; price = 100; };
	class TRYK_H_headsetcap_od                                                      { quality = 1; price = 100; };
	class TRYK_H_pakol                                                              { quality = 1; price = 100; };
	class TRYK_H_pakol2                                                             { quality = 1; price = 100; };
	class TRYK_H_LHS_HEL_G                                                          { quality = 1; price = 100; };
	class TRYK_H_Helmet_Winter                                                      { quality = 1; price = 100; };
	class TRYK_H_Helmet_Winter_2                                                    { quality = 1; price = 100; };
 
    ///////////////////////////////////////////////////////////////////////////////
    // TRYK HeadGear w/NVGS built in
    ///////////////////////////////////////////////////////////////////////////////
 
	class TRYK_Headphone_NV                                                         { quality = 1; price = 100; };
	class TRYK_HRPIGEAR_NV                                                          { quality = 1; price = 100; };
	class TRYK_Headset_NV                                                           { quality = 1; price = 100; };
	class TRYK_TAC_boonie_SET_NV                                                    { quality = 1; price = 100; };
	class TRYK_TAC_SET_NV_TAN                                                       { quality = 1; price = 100; };
	class TRYK_TAC_SET_NV_OD                                                        { quality = 1; price = 100; };
	class TRYK_TAC_SET_NV_WH                                                        { quality = 1; price = 100; };
	class TRYK_TAC_SET_NV_MESH                                                      { quality = 1; price = 100; };
	class TRYK_TAC_SET_NV_TAN_2                                                     { quality = 1; price = 100; };
	class TRYK_TAC_SET_NV_OD_2                                                      { quality = 1; price = 100; };
	class TRYK_TAC_SET_NV_WH_2                                                      { quality = 1; price = 100; };
	class TRYK_TAC_SET_NV_MESH_2                                                    { quality = 1; price = 100; };
	class TRYK_H_DELTAHELM_NV                                                       { quality = 1; price = 100; };
 
        ///////////////////////////////////////////////////////////////////////////////
    // TRYK NeckGear
    ///////////////////////////////////////////////////////////////////////////////
 
	class TRYK_Shemagh_shade_MESH                                                   { quality = 1; price = 100; };
	class TRYK_Shemagh_shade_N                                                      { quality = 1; price = 100; };
	class TRYK_Shemagh_shade_G_N                                                    { quality = 1; price = 100; };
	class TRYK_Shemagh_shade_WH_N                                                   { quality = 1; price = 100; };
	class TRYK_kio_balaclava_WH                                                     { quality = 1; price = 100; };
	class TRYK_kio_balaclava_BLK                                                    { quality = 1; price = 100; };
	class TRYK_kio_balaclavas                                                       { quality = 1; price = 100; };
	class TRYK_kio_balaclava_BLK_ear                                                { quality = 1; price = 100; };
	class TRYK_kio_balaclava_ear                                                    { quality = 1; price = 100; };
	class TRYK_kio_balaclava_ESS                                                    { quality = 1; price = 100; };
	class TRYK_Shemagh                                                              { quality = 1; price = 100; };
	class TRYK_Shemagh_mesh                                                         { quality = 1; price = 100; };
	class TRYK_Shemagh_G                                                            { quality = 1; price = 100; };
	class TRYK_Shemagh_WH                                                           { quality = 1; price = 100; };
	class TRYK_Shemagh_shade                                                        { quality = 1; price = 100; };
	class TRYK_Shemagh_shade_G                                                      { quality = 1; price = 100; };
	class TRYK_Shemagh_shade_WH                                                     { quality = 1; price = 100; };
	class TRYK_Shemagh_shade_MH                                                     { quality = 1; price = 100; };
	class TRYK_Shemagh_ESS                                                          { quality = 1; price = 100; };
	class TRYK_Shemagh_ESS_G                                                        { quality = 1; price = 100; };
	class TRYK_Shemagh_ESS_WH                                                       { quality = 1; price = 100; };
	class TRYK_Shemagh_EAR_TAN                                                      { quality = 1; price = 100; };
	class TRYK_Shemagh_EAR_WH                                                       { quality = 1; price = 100; };
 
	///////////////////////////////////////////////////////////////////////////////
    // TRYK NeckGear NeckGear w/NVGS built in
    ///////////////////////////////////////////////////////////////////////////////
 
	class TRYK_balaclava_BLACK_NV                                                   { quality = 1; price = 100; };
	class TRYK_balaclava_NV                                                         { quality = 1; price = 100; };
	class TRYK_balaclava_BLACK_EAR_NV                                               { quality = 1; price = 100; };
	class TRYK_balaclava_EAR_NV                                                     { quality = 1; price = 100; };
	class TRYK_Shemagh_TAN_NV                                                       { quality = 1; price = 100; };
	class TRYK_Shemagh_MESH_NV                                                      { quality = 1; price = 100; };
	class TRYK_Shemagh_G_NV                                                         { quality = 1; price = 100; };
	class TRYK_Shemagh_WH_NV                                                        { quality = 1; price = 100; };
	class TRYK_Shemagh_EAR_NV                                                       { quality = 1; price = 100; };
	class TRYK_Shemagh_EAR_G_NV                                                     { quality = 1; price = 100; };
	class TRYK_Shemagh_EAR_WH_NV                                                    { quality = 1; price = 100; };
	class TRYK_ShemaghESSTAN_NV                                                     { quality = 1; price = 100; };
	class TRYK_ShemaghESSOD_NV                                                      { quality = 1; price = 100; };
	class TRYK_ShemaghESSWH_NV                                                      { quality = 1; price = 100; };
 
	///////////////////////////////////////////////////////////////////////////////
    // TRYK Uniforms
    ///////////////////////////////////////////////////////////////////////////////
 
	class TRYK_HRP_UCP                                                              { quality = 1; price = 100; };
	class TRYK_HRP_USMC                                                             { quality = 1; price = 100; };
	class TRYK_HRP_khk                                                              { quality = 1; price = 100; };
	class TRYK_U_B_OD_OD_CombatUniform                                              { quality = 1; price = 100; };
	class TRYK_U_B_OD_OD_R_CombatUniform                                            { quality = 1; price = 100; };
	class TRYK_U_B_TANTAN_CombatUniform                                             { quality = 1; price = 100; };
	class TRYK_U_B_TANTAN_R_CombatUniform                                           { quality = 1; price = 100; };
	class TRYK_U_B_BLKBLK_CombatUniform                                             { quality = 1; price = 100; };
	class TRYK_U_B_BLKBLK_R_CombatUniform                                           { quality = 1; price = 100; };
	class TRYK_U_B_GRYOCP_CombatUniform                                             { quality = 1; price = 100; };
	class TRYK_U_B_GRYOCP_R_CombatUniformTshirt                                     { quality = 1; price = 100; };
	class TRYK_U_B_TANOCP_CombatUniform                                             { quality = 1; price = 100; };
	class TRYK_U_B_TANOCP_R_CombatUniformTshirt                                     { quality = 1; price = 100; };
	class TRYK_U_B_BLKOCP_CombatUniform                                             { quality = 1; price = 100; };
	class TRYK_U_B_BLKOCP_R_CombatUniformTshirt                                     { quality = 1; price = 100; };
	class TRYK_U_B_BLKTAN_CombatUniform                                             { quality = 1; price = 100; };
	class TRYK_U_B_BLKTANR_CombatUniformTshirt                                      { quality = 1; price = 100; };
	class TRYK_U_B_ODTAN_CombatUniform                                              { quality = 1; price = 100; };
	class TRYK_U_B_ODTANR_CombatUniformTshirt                                       { quality = 1; price = 100; };
	class TRYK_U_B_GRTAN_CombatUniform                                              { quality = 1; price = 100; };
	class TRYK_U_B_GRTANR_CombatUniformTshirt                                       { quality = 1; price = 100; };
	class TRYK_U_B_wood_CombatUniform                                               { quality = 1; price = 100; };
	class TRYK_U_B_woodR_CombatUniformTshirt                                        { quality = 1; price = 100; };
	class TRYK_U_B_wood3c_CombatUniform                                             { quality = 1; price = 100; };
	class TRYK_U_B_wood3c_CombatUniformTshirt                                       { quality = 1; price = 100; };
	class TRYK_U_B_MARPAT_WOOD_CombatUniform                                        { quality = 1; price = 100; };
	class TRYK_U_B_MARPAT_WOOD_CombatUniformTshirt                                  { quality = 1; price = 100; };
	class TRYK_U_B_WOOD_MARPAT_CombatUniform                                        { quality = 1; price = 100; };
	class TRYK_U_B_WOOD_MARPAT_CombatUniformTshirt                                  { quality = 1; price = 100; };
	class TRYK_U_B_woodtan_CombatUniform                                            { quality = 1; price = 100; };
	class TRYK_U_B_woodtanR_CombatUniformTshirt                                     { quality = 1; price = 100; };
	class TRYK_U_B_JSDF_CombatUniform                                               { quality = 1; price = 100; };
	class TRYK_U_B_JSDF_CombatUniformTshirt                                         { quality = 1; price = 100; };
	class TRYK_U_B_3CD_Delta_BDU                                                    { quality = 1; price = 100; };
	class TRYK_U_B_3CD_Delta_BDUTshirt                                              { quality = 1; price = 100; };
	class TRYK_U_B_3CD_Ranger_BDU                                                   { quality = 1; price = 100; };
	class TRYK_U_B_3CD_Ranger_BDUTshirt                                             { quality = 1; price = 100; };
	class TRYK_U_B_3CD_BLK_BDUTshirt                                                { quality = 1; price = 100; };
	class TRYK_U_B_3CD_BLK_BDUTshirt2                                               { quality = 1; price = 100; };
	class TRYK_U_B_ACU                                                              { quality = 1; price = 100; };
	class TRYK_U_B_ACUTshirt                                                        { quality = 1; price = 100; };
	class TRYK_U_B_MARPAT_Wood                                                      { quality = 1; price = 100; };
	class TRYK_U_B_MARPAT_Wood_Tshirt                                               { quality = 1; price = 100; };
	class TRYK_U_B_MARPAT_Desert                                                    { quality = 1; price = 100; };
	class TRYK_U_B_MARPAT_Desert_Tshirt                                             { quality = 1; price = 100; };
	class TRYK_U_B_MARPAT_Desert2                                                   { quality = 1; price = 100; };
	class TRYK_U_B_MARPAT_Desert2_Tshirt                                            { quality = 1; price = 100; };
	class TRYK_U_B_3c                                                               { quality = 1; price = 100; };
	class TRYK_U_B_3cr                                                              { quality = 1; price = 100; };
	class TRYK_U_B_Sage_Tshirt                                                      { quality = 1; price = 100; };
	class TRYK_U_B_BLK3CD                                                           { quality = 1; price = 100; };
	class TRYK_U_B_BLK3CD_Tshirt                                                    { quality = 1; price = 100; };
	class TRYK_U_B_BLK                                                              { quality = 1; price = 100; };
	class TRYK_U_B_BLK_Tshirt                                                       { quality = 1; price = 100; };
	class TRYK_U_B_BLKTAN                                                           { quality = 1; price = 100; };
	class TRYK_U_B_BLKTAN_Tshirt                                                    { quality = 1; price = 100; };
	class TRYK_U_B_ODTAN                                                            { quality = 1; price = 100; };
	class TRYK_U_B_ODTAN_Tshirt                                                     { quality = 1; price = 100; };
	class TRYK_U_B_BLK_OD                                                           { quality = 1; price = 100; };
	class TRYK_U_B_BLK_OD_Tshirt                                                    { quality = 1; price = 100; };
	class TRYK_U_B_C01_Tsirt                                                        { quality = 1; price = 100; };
	class TRYK_U_B_C02_Tsirt                                                        { quality = 1; price = 100; };
	class TRYK_U_B_OD_BLK                                                           { quality = 1; price = 100; };
	class TRYK_U_B_OD_BLK_2                                                         { quality = 1; price = 100; };
	class TRYK_U_B_BLK_TAN_1                                                        { quality = 1; price = 100; };
	class TRYK_U_B_BLK_TAN_2                                                        { quality = 1; price = 100; };
	class TRYK_U_B_wh_tan_Rollup_CombatUniform                                      { quality = 1; price = 100; };
	class TRYK_U_B_wh_OD_Rollup_CombatUniform                                       { quality = 1; price = 100; };
	class TRYK_U_B_wh_blk_Rollup_CombatUniform                                      { quality = 1; price = 100; };
	class TRYK_U_B_BLK_tan_Rollup_CombatUniform                                     { quality = 1; price = 100; };
	class TRYK_U_B_BLK_OD_Rollup_CombatUniform                                      { quality = 1; price = 100; };
	class TRYK_U_B_NATO_UCP_GRY_CombatUniform                                       { quality = 1; price = 100; };
	class TRYK_U_B_NATO_UCP_GRY_R_CombatUniform                                     { quality = 1; price = 100; };
	class TRYK_U_B_NATO_UCP_CombatUniform                                           { quality = 1; price = 100; };
	class TRYK_U_B_NATO_UCP_R_CombatUniform                                         { quality = 1; price = 100; };
	class TRYK_U_B_NATO_OCP_c_BLK_CombatUniform                                     { quality = 1; price = 100; };
	class TRYK_U_B_NATO_OCP_BLK_c_R_CombatUniform                                   { quality = 1; price = 100; };
	class TRYK_U_B_NATO_OCP_BLK_CombatUniform                                       { quality = 1; price = 100; };
	class TRYK_U_B_NATO_OCP_BLK_R_CombatUniform                                     { quality = 1; price = 100; };
	class TRYK_U_B_NATO_OCPD_CombatUniform                                          { quality = 1; price = 100; };
	class TRYK_U_B_NATO_OCPD_R_CombatUniform                                        { quality = 1; price = 100; };
	class TRYK_U_B_NATO_OCP_CombatUniform                                           { quality = 1; price = 100; };
	class TRYK_U_B_NATO_OCP_R_CombatUniform                                         { quality = 1; price = 100; };
	class TRYK_U_B_AOR1_Rollup_CombatUniform                                        { quality = 1; price = 100; };
	class TRYK_U_B_AOR2_Rollup_CombatUniform                                        { quality = 1; price = 100; };
	class TRYK_U_B_MTP_CombatUniform                                                { quality = 1; price = 100; };
	class TRYK_U_B_MTP_R_CombatUniform                                              { quality = 1; price = 100; };
	class TRYK_U_B_MTP_BLK_CombatUniform                                            { quality = 1; price = 100; };
	class TRYK_U_B_MTP_BLK_R_CombatUniform                                          { quality = 1; price = 100; };
	class TRYK_U_B_Woodland                                                         { quality = 1; price = 100; };
	class TRYK_U_B_Woodland_Tshirt                                                  { quality = 1; price = 100; };
	class TRYK_U_B_WDL_GRY_CombatUniform                                            { quality = 1; price = 100; };
	class TRYK_U_B_WDL_GRY_R_CombatUniform                                          { quality = 1; price = 100; };
	class TRYK_U_B_ARO1_GR_CombatUniform                                            { quality = 1; price = 100; };
	class TRYK_U_B_ARO1_GR_R_CombatUniform                                          { quality = 1; price = 100; };
	class TRYK_U_B_ARO1_GRY_CombatUniform                                           { quality = 1; price = 100; };
	class TRYK_U_B_ARO1_GRY_R_CombatUniform                                         { quality = 1; price = 100; };
	class TRYK_U_B_ARO1_CombatUniform                                               { quality = 1; price = 100; };
	class TRYK_U_B_ARO1R_CombatUniform                                              { quality = 1; price = 100; };
	class TRYK_U_B_ARO1_BLK_CombatUniform                                           { quality = 1; price = 100; };
	class TRYK_U_B_ARO1_BLK_R_CombatUniform                                         { quality = 1; price = 100; };
	class TRYK_U_B_ARO1_CBR_CombatUniform                                           { quality = 1; price = 100; };
	class TRYK_U_B_ARO1_CBR_R_CombatUniform                                         { quality = 1; price = 100; };
	class TRYK_U_B_ARO2_CombatUniform                                               { quality = 1; price = 100; };
	class TRYK_U_B_ARO2R_CombatUniform                                              { quality = 1; price = 100; };
	class TRYK_U_B_AOR2_BLK_CombatUniform                                           { quality = 1; price = 100; };
	class TRYK_U_B_AOR2_BLK_R_CombatUniform                                         { quality = 1; price = 100; };
	class TRYK_U_B_AOR2_OD_CombatUniform                                            { quality = 1; price = 100; };
	class TRYK_U_B_AOR2_OD_R_CombatUniform                                          { quality = 1; price = 100; };
	class TRYK_U_B_AOR2_GRY_CombatUniform                                           { quality = 1; price = 100; };
	class TRYK_U_B_AOR2_GRY_R_CombatUniform                                         { quality = 1; price = 100; };
	class TRYK_U_B_Snow_CombatUniform                                               { quality = 1; price = 100; };
	class TRYK_U_B_Snowt                                                            { quality = 1; price = 100; };
	class TRYK_U_B_Denim_T_WH                                                       { quality = 1; price = 100; };
	class TRYK_U_B_Denim_T_BK                                                       { quality = 1; price = 100; };
	class TRYK_U_B_BLK_T_WH                                                         { quality = 1; price = 100; };
	class TRYK_U_B_BLK_T_BK                                                         { quality = 1; price = 100; };
	class TRYK_U_B_RED_T_BR                                                         { quality = 1; price = 100; };
	class TRYK_U_B_Denim_T_BG_WH                                                    { quality = 1; price = 100; };
	class TRYK_U_B_Denim_T_BG_BK                                                    { quality = 1; price = 100; };
	class TRYK_U_B_BLK_T_BG_WH                                                      { quality = 1; price = 100; };
	class TRYK_U_B_BLK_T_BG_BK                                                      { quality = 1; price = 100; };
	class TRYK_U_B_RED_T_BG_BR                                                      { quality = 1; price = 100; };
	class TRYK_U_B_fleece                                                           { quality = 1; price = 100; };
	class TRYK_U_B_fleece_UCP                                                       { quality = 1; price = 100; };
	class TRYK_U_B_UCP_PCUs                                                         { quality = 1; price = 100; };
	class TRYK_U_B_GRY_PCUs                                                         { quality = 1; price = 100; };
	class TRYK_U_B_Wood_PCUs                                                        { quality = 1; price = 100; };
	class TRYK_U_B_PCUs                                                             { quality = 1; price = 100; };
	class TRYK_U_B_UCP_PCUs_R                                                       { quality = 1; price = 100; };
	class TRYK_U_B_GRY_PCUs_R                                                       { quality = 1; price = 100; };
	class TRYK_U_B_Wood_PCUs_R                                                      { quality = 1; price = 100; };
	class TRYK_U_B_PCUs_R                                                           { quality = 1; price = 100; };
	class TRYK_U_B_PCUGs                                                            { quality = 1; price = 100; };
	class TRYK_U_B_PCUODs                                                           { quality = 1; price = 100; };
	class TRYK_U_B_PCUGs_gry                                                        { quality = 1; price = 100; };
	class TRYK_U_B_PCUGs_BLK                                                        { quality = 1; price = 100; };
	class TRYK_U_B_PCUGs_OD                                                         { quality = 1; price = 100; };
	class TRYK_U_B_PCUGs_gry_R                                                      { quality = 1; price = 100; };
	class TRYK_U_B_PCUGs_BLK_R                                                      { quality = 1; price = 100; };
	class TRYK_U_B_PCUGs_OD_R                                                       { quality = 1; price = 100; };
	class TRYK_U_Bts_GRYGRY_PCUs                                                    { quality = 1; price = 100; };
	class TRYK_U_Bts_UCP_PCUs                                                       { quality = 1; price = 100; };
	class TRYK_U_Bts_Wood_PCUs                                                      { quality = 1; price = 100; };
	class TRYK_U_Bts_PCUs                                                           { quality = 1; price = 100; };
	class TRYK_U_pad_j                                                              { quality = 1; price = 100; };
	class TRYK_U_pad_j_blk                                                          { quality = 1; price = 100; };
	class TRYK_U_pad_hood_Cl                                                        { quality = 1; price = 100; };
	class TRYK_U_pad_hood_Cl_blk                                                    { quality = 1; price = 100; };
	class TRYK_U_pad_hood_tan                                                       { quality = 1; price = 100; };
	class TRYK_U_pad_hood_Blk                                                       { quality = 1; price = 100; };
	class TRYK_U_pad_hood_CSATBlk                                                   { quality = 1; price = 100; };
	class TRYK_U_pad_hood_Blod                                                      { quality = 1; price = 100; };
	class TRYK_U_pad_hood_odBK                                                      { quality = 1; price = 100; };
	class TRYK_U_pad_hood_BKT2                                                      { quality = 1; price = 100; };
	class TRYK_hoodie_Blk                                                           { quality = 1; price = 100; };
	class TRYK_hoodie_FR                                                            { quality = 1; price = 100; };
	class TRYK_hoodie_Wood                                                          { quality = 1; price = 100; };
	class TRYK_hoodie_3c                                                            { quality = 1; price = 100; };
	class TRYK_T_camo_tan                                                           { quality = 1; price = 100; };
	class TRYK_T_camo_3c                                                            { quality = 1; price = 100; };
	class TRYK_T_camo_Wood                                                          { quality = 1; price = 100; };
	class TRYK_T_camo_wood_marpat                                                   { quality = 1; price = 100; };
	class TRYK_T_camo_Desert_marpat                                                 { quality = 1; price = 100; };
	class TRYK_T_camo_3c_BG                                                         { quality = 1; price = 100; };
	class TRYK_T_camo_Wood_BG                                                       { quality = 1; price = 100; };
	class TRYK_T_camo_wood_marpat_BG                                                { quality = 1; price = 100; };
	class TRYK_T_camo_desert_marpat_BG                                              { quality = 1; price = 100; };
	class TRYK_T_PAD                                                                { quality = 1; price = 100; };
	class TRYK_T_OD_PAD                                                             { quality = 1; price = 100; };
	class TRYK_T_TAN_PAD                                                            { quality = 1; price = 100; };
	class TRYK_T_BLK_PAD                                                            { quality = 1; price = 100; };
	class TRYK_T_T2_PAD                                                             { quality = 1; price = 100; };
	class TRYK_T_CSAT_PAD                                                           { quality = 1; price = 100; };
	class TRYK_U_nohoodPcu_gry                                                      { quality = 1; price = 100; };
	class TRYK_U_hood_nc                                                            { quality = 1; price = 100; };
	class TRYK_U_hood_mc                                                            { quality = 1; price = 100; };
	class TRYK_U_denim_hood_blk                                                     { quality = 1; price = 100; };
	class TRYK_U_denim_hood_mc                                                      { quality = 1; price = 100; };
	class TRYK_U_denim_hood_3c                                                      { quality = 1; price = 100; };
	class TRYK_U_denim_hood_nc                                                      { quality = 1; price = 100; };
	class TRYK_U_denim_jersey_blu                                                   { quality = 1; price = 100; };
	class TRYK_U_denim_jersey_blk                                                   { quality = 1; price = 100; };
	class TRYK_shirts_PAD                                                           { quality = 1; price = 100; };
	class TRYK_shirts_OD_PAD                                                        { quality = 1; price = 100; };
	class TRYK_shirts_TAN_PAD                                                       { quality = 1; price = 100; };
	class TRYK_shirts_BLK_PAD                                                       { quality = 1; price = 100; };
	class TRYK_shirts_PAD_BK                                                        { quality = 1; price = 100; };
	class TRYK_shirts_OD_PAD_BK                                                     { quality = 1; price = 100; };
	class TRYK_shirts_TAN_PAD_BK                                                    { quality = 1; price = 100; };
	class TRYK_shirts_BLK_PAD_BK                                                    { quality = 1; price = 100; };
	class TRYK_shirts_PAD_BLW                                                       { quality = 1; price = 100; };
	class TRYK_shirts_OD_PAD_BLW                                                    { quality = 1; price = 100; };
	class TRYK_shirts_TAN_PAD_BLW                                                   { quality = 1; price = 100; };
	class TRYK_shirts_BLK_PAD_BLW                                                   { quality = 1; price = 100; };
	class TRYK_shirts_PAD_YEL                                                       { quality = 1; price = 100; };
	class TRYK_shirts_OD_PAD_YEL                                                    { quality = 1; price = 100; };
	class TRYK_shirts_TAN_PAD_YEL                                                   { quality = 1; price = 100; };
	class TRYK_shirts_BLK_PAD_YEL                                                   { quality = 1; price = 100; };
	class TRYK_shirts_PAD_RED2                                                      { quality = 1; price = 100; };
	class TRYK_shirts_OD_PAD_RED2                                                   { quality = 1; price = 100; };
	class TRYK_shirts_TAN_PAD_RED2                                                  { quality = 1; price = 100; };
	class TRYK_shirts_BLK_PAD_RED2                                                  { quality = 1; price = 100; };
	class TRYK_shirts_PAD_BLU3                                                      { quality = 1; price = 100; };
	class TRYK_shirts_OD_PAD_BLU3                                                   { quality = 1; price = 100; };
	class TRYK_shirts_TAN_PAD_BLU3                                                  { quality = 1; price = 100; };
	class TRYK_shirts_BLK_PAD_BLU3                                                  { quality = 1; price = 100; };
	class TRYK_shirts_DENIM_R                                                       { quality = 1; price = 100; };
	class TRYK_shirts_DENIM_BL                                                      { quality = 1; price = 100; };
	class TRYK_shirts_DENIM_BK                                                      { quality = 1; price = 100; };
	class TRYK_shirts_DENIM_WH                                                      { quality = 1; price = 100; };
	class TRYK_shirts_DENIM_BWH                                                     { quality = 1; price = 100; };
	class TRYK_shirts_DENIM_RED2                                                    { quality = 1; price = 100; };
	class TRYK_shirts_DENIM_WHB                                                     { quality = 1; price = 100; };
	class TRYK_shirts_DENIM_ylb                                                     { quality = 1; price = 100; };
	class TRYK_shirts_DENIM_od                                                      { quality = 1; price = 100; };
	class TRYK_shirts_DENIM_R_Sleeve                                                { quality = 1; price = 100; };
	class TRYK_shirts_DENIM_BL_Sleeve                                               { quality = 1; price = 100; };
	class TRYK_shirts_DENIM_BK_Sleeve                                               { quality = 1; price = 100; };
	class TRYK_shirts_DENIM_WH_Sleeve                                               { quality = 1; price = 100; };
	class TRYK_shirts_DENIM_BWH_Sleeve                                              { quality = 1; price = 100; };
	class TRYK_shirts_DENIM_RED2_Sleeve                                             { quality = 1; price = 100; };
	class TRYK_shirts_DENIM_WHB_Sleeve                                              { quality = 1; price = 100; };
	class TRYK_shirts_DENIM_ylb_Sleeve                                              { quality = 1; price = 100; };
	class TRYK_shirts_DENIM_od_Sleeve                                               { quality = 1; price = 100; };
	class TRYK_shirts_PAD_BL                                                        { quality = 1; price = 100; };
	class TRYK_shirts_OD_PAD_BL                                                     { quality = 1; price = 100; };
	class TRYK_shirts_TAN_PAD_BL                                                    { quality = 1; price = 100; };
	class TRYK_shirts_BLK_PAD_BL                                                    { quality = 1; price = 100; };
	class TRYK_U_taki_wh                                                            { quality = 1; price = 100; };
	class TRYK_U_taki_COY                                                           { quality = 1; price = 100; };
	class TRYK_U_taki_BL                                                            { quality = 1; price = 100; };
	class TRYK_U_taki_BLK                                                           { quality = 1; price = 100; };
	class TRYK_U_Bts_PCUGs                                                          { quality = 1; price = 100; };
	class TRYK_U_Bts_PCUODs                                                         { quality = 1; price = 100; };
	class TRYK_U_taki_G_WH                                                          { quality = 1; price = 100; };
	class TRYK_U_taki_G_COY                                                         { quality = 1; price = 100; };
	class TRYK_U_taki_G_BL                                                          { quality = 1; price = 100; };
	class TRYK_U_taki_G_BLK                                                         { quality = 1; price = 100; };
	class TRYK_U_B_PCUHs                                                            { quality = 1; price = 100; };
	class TRYK_U_B_PCUGHs                                                           { quality = 1; price = 100; };
	class TRYK_U_B_PCUODHs                                                          { quality = 1; price = 100; };
	class TRYK_B_USMC_R                                                             { quality = 1; price = 100; };
	class TRYK_B_USMC_R_ROLL                                                        { quality = 1; price = 100; };
	class TRYK_ZARATAKI                                                             { quality = 1; price = 100; };
	class TRYK_ZARATAKI2                                                            { quality = 1; price = 100; };
	class TRYK_ZARATAKI3                                                            { quality = 1; price = 100; };
	class TRYK_B_TRYK_UCP_T                                                         { quality = 1; price = 100; };
	class TRYK_B_TRYK_3C_T                                                          { quality = 1; price = 100; };
	class TRYK_B_TRYK_MTP_T                                                         { quality = 1; price = 100; };
	class TRYK_B_TRYK_OCP_T                                                 		{ quality = 1; price = 100; };
	class TRYK_B_TRYK_OCP_D_T                                                       { quality = 1; price = 100; };
	class TRYK_DMARPAT_T                                                            { quality = 1; price = 100; };
	class TRYK_C_AOR2_T                                                             { quality = 1; price = 100; };
	class TRYK_U_B_Sage_T                                                           { quality = 1; price = 100; };
	class TRYK_U_B_Wood_T                                                           { quality = 1; price = 100; };
	class TRYK_U_B_BLTAN_T                                                          { quality = 1; price = 100; };
	class TRYK_U_B_BLOD_T                                                           { quality = 1; price = 100; };
	class TRYK_OVERALL_flesh                                                        { quality = 1; price = 100; };
	class TRYK_OVERALL_nok_flesh                                                    { quality = 1; price = 100; };
	class TRYK_OVERALL_SAGE_BLKboots                                                { quality = 1; price = 100; };
	class TRYK_OVERALL_SAGE_BLKboots_nk_blk                                         { quality = 1; price = 100; };
	class TRYK_OVERALL_SAGE_BLKboots_nk                                             { quality = 1; price = 100; };
	class TRYK_OVERALL_SAGE_BLKboots_nk_blk2                                        { quality = 1; price = 100; };
	class TRYK_OVERALL_SAGE                                                         { quality = 1; price = 100; };
	class TRYK_SUITS_BLK_F                                                          { quality = 1; price = 100; };
	class TRYK_SUITS_BR_F                                                           { quality = 1; price = 100; };
	class TRYK_H_ghillie_top_headless3glass                                         { quality = 1; price = 100; };
	class TRYK_shoulder_armor_BK                                                    { quality = 1; price = 100; };
	class TRYK_shoulder_armor_OD                                                    { quality = 1; price = 100; };
	class TRYK_shoulder_armor_CY                                                    { quality = 1; price = 100; };
	class TRYK_H_ghillie_top_headless3                                              { quality = 1; price = 100; };
	class TRYK_U_B_PCUHsW                                                           { quality = 1; price = 100; };
	class TRYK_U_B_PCUHsW2                                                          { quality = 1; price = 100; };
	class TRYK_U_B_PCUHsW3                                                          { quality = 1; price = 100; };
	class TRYK_U_B_PCUHsW3nh                                                        { quality = 1; price = 100; };
	class TRYK_U_B_PCUHsW4                                                          { quality = 1; price = 100; };
	class TRYK_U_B_PCUHsW5                                                          { quality = 1; price = 100; };
	class TRYK_U_B_PCUHsW6                                                          { quality = 1; price = 100; };
 
	///////////////////////////////////////////////////////////////////////////////
    // TRYK Vests
    ///////////////////////////////////////////////////////////////////////////////
 
	class TRYK_Hrp_vest_ucp                                                         { quality = 1; price = 100; };
	class TRYK_Hrp_vest_od                                                          { quality = 1; price = 100; };
	class TRYK_V_PlateCarrier_JSDF                                                  { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_AOR1                                                     { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_AOR2                                                     { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_coyo                                                     { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_Brown                                                    { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_CBR                                                      { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_khk                                                      { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_rgr                                                      { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_green                                                    { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_tan                                                      { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_Delta                                                    { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_Ranger                                                   { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_AOR1_2                                                   { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_AOR2_2                                                   { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_coyo2                                                    { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_Brown2                                                   { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_cbr2                                                     { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_khk2                                                     { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_rgr2                                                     { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_green2                                                   { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_tan2                                                     { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_Delta2                                                   { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_Ranger2                                                  { quality = 1; price = 100; };
	class TRYK_V_PlateCarrier_blk                                                   { quality = 1; price = 100; };
	class TRYK_V_PlateCarrier_oli                                                   { quality = 1; price = 100; };
	class TRYK_V_PlateCarrier_coyo                                                  { quality = 1; price = 100; };
	class TRYK_V_PlateCarrier_wood                                                  { quality = 1; price = 100; };
	class TRYK_V_PlateCarrier_ACU                                                   { quality = 1; price = 100; };
	class TRYK_V_TacVest_coyo                                                       { quality = 1; price = 100; };
	class TRYK_V_harnes_blk_L                                                       { quality = 1; price = 100; };
	class TRYK_V_harnes_od_L                                                        { quality = 1; price = 100; };
	class TRYK_V_harnes_TAN_L                                                       { quality = 1; price = 100; };
	class TRYK_V_PlateCarrier_blk_L                                                 { quality = 1; price = 100; };
	class TRYK_V_PlateCarrier_wood_L                                                { quality = 1; price = 100; };
	class TRYK_V_PlateCarrier_ACU_L                                                 { quality = 1; price = 100; };
	class TRYK_V_PlateCarrier_coyo_L                                                { quality = 1; price = 100; };
	class TRYK_V_ChestRig_L                                                         { quality = 1; price = 100; };
	class TRYK_V_ChestRig                                                           { quality = 1; price = 100; };
	class TRYK_V_Bulletproof                                                        { quality = 1; price = 100; };
	class TRYK_V_Bulletproof_BLK                                                    { quality = 1; price = 100; };
	class TRYK_V_Bulletproof_BL                                                     { quality = 1; price = 100; };
	class TRYK_V_IOTV_BLK                                                           { quality = 1; price = 100; };
	class TRYK_V_tacv1M_BK                                                          { quality = 1; price = 100; };
	class TRYK_V_tacv1MLC_BK                                                        { quality = 1; price = 100; };
	class TRYK_V_tacv1                                                              { quality = 1; price = 100; };
	class TRYK_V_tacv1_CY                                                           { quality = 1; price = 100; };
	class TRYK_V_tacv1_BK                                                           { quality = 1; price = 100; };
	class TRYK_V_tacv1_P_BK                                                         { quality = 1; price = 100; };
	class TRYK_V_tacv1_SHERIFF_BK                                                   { quality = 1; price = 100; };
	class TRYK_V_tacv1_FBI_BK                                                       { quality = 1; price = 100; };
	class TRYK_V_tacv1LP_BK                                                         { quality = 1; price = 100; };
	class TRYK_V_tacv1LSRF_BK                                                       { quality = 1; price = 100; };
	class TRYK_V_tacv1LC_BK                                                         { quality = 1; price = 100; };
	class TRYK_V_tacv1LC_CY                                                         { quality = 1; price = 100; };
	class TRYK_V_tacv1LC_OD                                                         { quality = 1; price = 100; };
	class TRYK_V_tacv1LC_FBI_BK                                                     { quality = 1; price = 100; };
	class TRYK_V_tacv1LC_SRF_BK                                                     { quality = 1; price = 100; };
	class TRYK_V_tacv1LC_SRF_OD                                                     { quality = 1; price = 100; };
	class TRYK_V_tacv1LC_P_BK                                                       { quality = 1; price = 100; };
	class TRYK_V_PlateCarrier_POLICE                                                { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_HRT_B                                                    { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_HRT_OD                                                   { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_HRT2_B                                                   { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_HRT2_OD                                                  { quality = 1; price = 100; };
	class TRYK_V_ArmorVest_Winter                                                   { quality = 1; price = 100; };
	class TRYK_V_Sheriff_BA_OD                                                      { quality = 1; price = 100; };
	class TRYK_V_tacv10_BK                                                          { quality = 1; price = 100; };
	class TRYK_V_tacv10_OD                                                          { quality = 1; price = 100; };
	class TRYK_V_tacv10_TN                                                          { quality = 1; price = 100; };
	class TRYK_V_tacv10LC_BK                                                        { quality = 1; price = 100; };
	class TRYK_V_tacv10LC_OD                                                        { quality = 1; price = 100; };
	class TRYK_V_tacv10LC_TN                                                        { quality = 1; price = 100; };
	class TRYK_V_tacv1L_BK                                                          { quality = 1; price = 100; };
	class TRYK_V_tacv1L_OD                                                          { quality = 1; price = 100; };
	class TRYK_V_tacv1L_CY                                                          { quality = 1; price = 100; };
	class TRYK_V_tacv1LC_FBI2_BK                                                    { quality = 1; price = 100; };
	class TRYK_V_tacv1LC_SRF2_BK                                                    { quality = 1; price = 100; };
	class TRYK_V_tacv1LC_SRF2_OD                                                    { quality = 1; price = 100; };
	class TRYK_V_tacv1LC_P2_BK                                                      { quality = 1; price = 100; };
	class TRYK_V_tacv1_MSL_BK                                                       { quality = 1; price = 100; };
	class TRYK_V_tacv1_MSL_NV                                                       { quality = 1; price = 100; };
	class TRYK_V_tacv1LMSL_BK                                                       { quality = 1; price = 100; };
	class TRYK_V_tacv1LMSL_NV                                                       { quality = 1; price = 100; };
	class TRYK_V_tacv1LC_MSL_BK                                                     { quality = 1; price = 100; };
	class TRYK_V_tacv1LC_MSL_NV                                                     { quality = 1; price = 100; };
	class TRYK_V_tacSVD_BK                                                          { quality = 1; price = 100; };
	class TRYK_V_tacSVD_OD                                                          { quality = 1; price = 100; };
	class TRYK_V_Sheriff_BA_TL                                                      { quality = 1; price = 100; };
	class TRYK_V_Sheriff_BA_TBL                                                     { quality = 1; price = 100; };
	class TRYK_V_Sheriff_BA_TCL                                                     { quality = 1; price = 100; };
	class TRYK_V_Sheriff_BA_TL2                                                     { quality = 1; price = 100; };
	class TRYK_V_Sheriff_BA_TBL2                                                    { quality = 1; price = 100; };
	class TRYK_V_Sheriff_BA_TCL2                                                    { quality = 1; price = 100; };
	class TRYK_V_Sheriff_BA_T                                                       { quality = 1; price = 100; };
	class TRYK_V_Sheriff_BA_TB                                                      { quality = 1; price = 100; };
	class TRYK_V_Sheriff_BA_T2                                                      { quality = 1; price = 100; };
	class TRYK_V_Sheriff_BA_TB2                                                     { quality = 1; price = 100; };
	class TRYK_V_Sheriff_BA_T3                                                      { quality = 1; price = 100; };
	class TRYK_V_Sheriff_BA_TB3                                                     { quality = 1; price = 100; };
	class TRYK_V_Sheriff_BA_T4                                                      { quality = 1; price = 100; };
	class TRYK_V_Sheriff_BA_TB4                                                     { quality = 1; price = 100; };
	class TRYK_V_Sheriff_BA_T5                                                      { quality = 1; price = 100; };
	class TRYK_V_Sheriff_BA_TB5                                                     { quality = 1; price = 100; };
	class TRYK_V_Sheriff_BA_TBL3_BK                                                 { quality = 1; price = 100; };
	class TRYK_V_Sheriff_BA_TBL3_OD                                                 { quality = 1; price = 100; };
	class TRYK_V_Sheriff_BA_TBL3_TN                                                 { quality = 1; price = 100; };
	class TRYK_LOC_AK_chestrig_OD                                                   { quality = 1; price = 100; };
	class TRYK_LOC_AK_chestrig_TAN                                                  { quality = 1; price = 100; };
 
    ///////////////////////////////////////////////////////////////////////////////
    // TRYK BackPacks
    ///////////////////////////////////////////////////////////////////////////////
       
	class TRYK_B_AssaultPack_UCP                                                    { quality = 1; price = 100; };
	class TRYK_B_AssaultPack_Type2camo                                              { quality = 1; price = 100; };
	class TRYK_B_AssaultPack_MARPAT_Desert                                          { quality = 1; price = 100; };
	class TRYK_B_AssaultPack_MARPAT_Wood                                            { quality = 1; price = 100; };
	class TRYK_B_Kitbag_Base                                                        { quality = 1; price = 100; };
	class TRYK_B_Kitbag_blk                                                         { quality = 1; price = 100; };
	class TRYK_B_Kitbag_aaf                                                         { quality = 1; price = 100; };
	class TRYK_B_Carryall_blk                                                       { quality = 1; price = 100; };
	class TRYK_B_Carryall_wh                                                        { quality = 1; price = 100; };
	class TRYK_B_Carryall_wood                                                      { quality = 1; price = 100; };
	class TRYK_B_Carryall_JSDF                                                      { quality = 1; price = 100; };
	class TRYK_B_Kitbag_Base_JSDF                                                   { quality = 1; price = 100; };
	class TRYK_B_Coyotebackpack                                                     { quality = 1; price = 100; };
	class TRYK_B_Coyotebackpack_OD                                                  { quality = 1; price = 100; };
	class TRYK_B_Coyotebackpack_BLK                                                 { quality = 1; price = 100; };
	class TRYK_B_Coyotebackpack_WH                                                  { quality = 1; price = 100; };
	class TRYK_B_Alicepack                                                          { quality = 1; price = 100; };
	class TRYK_B_Medbag                                                             { quality = 1; price = 100; };
	class TRYK_B_Medbag_OD                                                          { quality = 1; price = 100; };
	class TRYK_B_Medbag_BK                                                          { quality = 1; price = 100; };
	class TRYK_B_Medbag_ucp                                                         { quality = 1; price = 100; };
	class TRYK_B_Belt                                                               { quality = 1; price = 100; };
	class TRYK_B_Belt_BLK                                                           { quality = 1; price = 100; };
	class TRYK_B_Belt_CYT                                                           { quality = 1; price = 100; };
	class TRYK_B_Belt_tan                                                           { quality = 1; price = 100; };
	class TRYK_B_Belt_br                                                            { quality = 1; price = 100; };
	class TRYK_B_Belt_GR                                                            { quality = 1; price = 100; };
	class TRYK_B_Belt_AOR1                                                          { quality = 1; price = 100; };
	class TRYK_B_Belt_AOR2                                                          { quality = 1; price = 100; };
	class TRYK_B_BAF_BAG_BLK                                                        { quality = 1; price = 100; };
	class TRYK_B_BAF_BAG_CYT                                                        { quality = 1; price = 100; };
	class TRYK_B_BAF_BAG_OD                                                         { quality = 1; price = 100; };
	class TRYK_B_BAF_BAG_rgr                                                        { quality = 1; price = 100; };
	class TRYK_B_BAF_BAG_mcamo                                                      { quality = 1; price = 100; };
	class TRYK_B_tube_cyt                                                           { quality = 1; price = 100; };
	class TRYK_B_tube_od                                                            { quality = 1; price = 100; };
	class TRYK_B_tube_blk                                                           { quality = 1; price = 100; };
	class TRYK_B_FieldPack_Wood                                                     { quality = 1; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Civillian Clothing
	///////////////////////////////////////////////////////////////////////////////
	class U_C_Journalist 							{ quality = 1; price = 20; };
	class U_C_Poloshirt_blue 						{ quality = 1; price = 20; };
	class U_C_Poloshirt_burgundy 					{ quality = 1; price = 20; };
	class U_C_Poloshirt_salmon 						{ quality = 1; price = 20; };
	class U_C_Poloshirt_stripped 					{ quality = 1; price = 20; };
	class U_C_Poloshirt_tricolour 					{ quality = 1; price = 20; };
	class U_C_Poor_1 								{ quality = 1; price = 20; };
	class U_C_Poor_2 								{ quality = 1; price = 20; };
	class U_C_Poor_shorts_1 						{ quality = 1; price = 20; };
	class U_C_Scientist 							{ quality = 1; price = 20; };
	class U_OrestesBody 							{ quality = 3; price = 40; };
	class U_Rangemaster 							{ quality = 1; price = 40; };
	class U_NikosAgedBody 							{ quality = 3; price = 40; };
	class U_NikosBody 								{ quality = 3; price = 40; };
	class U_Competitor 								{ quality = 1; price = 40; };

	///////////////////////////////////////////////////////////////////////////////
	// Soldier Uniforms
	///////////////////////////////////////////////////////////////////////////////
	class U_B_CombatUniform_mcam 					{ quality = 2; price = 40; };
	class U_B_CombatUniform_mcam_tshirt 			{ quality = 1; price = 40; };
	class U_B_CombatUniform_mcam_vest 				{ quality = 1; price = 40; };
	class U_B_CombatUniform_mcam_worn 				{ quality = 1; price = 40; };
	class U_B_CTRG_1 								{ quality = 2; price = 40; };
	class U_B_CTRG_2 								{ quality = 2; price = 40; };
	class U_B_CTRG_3								{ quality = 2; price = 40; };
	class U_I_CombatUniform 						{ quality = 1; price = 40; };
	class U_I_CombatUniform_shortsleeve				{ quality = 1; price = 40; };
	class U_I_CombatUniform_tshirt					{ quality = 1; price = 40; };
	class U_I_OfficerUniform						{ quality = 1; price = 40; };
	class U_O_CombatUniform_ocamo 					{ quality = 1; price = 40; };
	class U_O_CombatUniform_oucamo 					{ quality = 1; price = 40; };
	class U_O_OfficerUniform_ocamo 					{ quality = 3; price = 80; };
	class U_B_SpecopsUniform_sgg 					{ quality = 3; price = 80; };
	class U_O_SpecopsUniform_blk 					{ quality = 3; price = 80; };
	class U_O_SpecopsUniform_ocamo 					{ quality = 3; price = 80; };
	class U_I_G_Story_Protagonist_F 				{ quality = 3; price = 100; };
	class Exile_Uniform_Woodland 					{ quality = 3; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Guerilla Uniforms
	///////////////////////////////////////////////////////////////////////////////
	class U_C_HunterBody_grn						{ quality = 1; price = 40; };
	class U_IG_Guerilla1_1							{ quality = 1; price = 40; };
	class U_IG_Guerilla2_1							{ quality = 2; price = 60; };
	class U_IG_Guerilla2_2							{ quality = 1; price = 40; };
	class U_IG_Guerilla2_3							{ quality = 1; price = 40; };
	class U_IG_Guerilla3_1							{ quality = 1; price = 40; };
	class U_BG_Guerilla2_1							{ quality = 1; price = 40; };
	class U_IG_Guerilla3_2							{ quality = 1; price = 40; };
	class U_BG_Guerrilla_6_1						{ quality = 2; price = 60; };
	class U_BG_Guerilla1_1							{ quality = 1; price = 40; };
	class U_BG_Guerilla2_2							{ quality = 1; price = 40; };
	class U_BG_Guerilla2_3							{ quality = 1; price = 40; };
	class U_BG_Guerilla3_1							{ quality = 1; price = 40; };
	class U_BG_leader								{ quality = 1; price = 40; };
	class U_IG_leader								{ quality = 1; price = 40; };
	class U_I_G_resistanceLeader_F					{ quality = 3; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Ghillie Suits
	///////////////////////////////////////////////////////////////////////////////
	class U_B_FullGhillie_ard						{ quality = 3; price = 150; };
	class U_B_FullGhillie_lsh						{ quality = 3; price = 150; };
	class U_B_FullGhillie_sard						{ quality = 3; price = 150; };
	class U_B_GhillieSuit							{ quality = 2; price = 100; };
	class U_I_FullGhillie_ard						{ quality = 3; price = 150; };
	class U_I_FullGhillie_lsh						{ quality = 3; price = 150; };
	class U_I_FullGhillie_sard						{ quality = 3; price = 150; };
	class U_I_GhillieSuit							{ quality = 2; price = 100; };
	class U_O_FullGhillie_ard						{ quality = 3; price = 150; };
	class U_O_FullGhillie_lsh						{ quality = 3; price = 150; };
	class U_O_FullGhillie_sard						{ quality = 3; price = 150; };
	class U_O_GhillieSuit							{ quality = 2; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Wet Suits
	///////////////////////////////////////////////////////////////////////////////
	class U_I_Wetsuit								{ quality = 3; price = 80; };
	class U_O_Wetsuit								{ quality = 3; price = 80; };
	class U_B_Wetsuit								{ quality = 3; price = 80; };
	class U_B_survival_uniform						{ quality = 3; price = 80; };

	///////////////////////////////////////////////////////////////////////////////
	// Bandolliers
	///////////////////////////////////////////////////////////////////////////////
	class V_BandollierB_blk							{ quality = 1; price = 20; };
	class V_BandollierB_cbr							{ quality = 1; price = 20; };
	class V_BandollierB_khk							{ quality = 1; price = 20; };
	class V_BandollierB_oli							{ quality = 1; price = 20; };
	class V_BandollierB_rgr							{ quality = 1; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Chestrigs
	///////////////////////////////////////////////////////////////////////////////
	class V_Chestrig_blk 							{ quality = 1; price = 30; };
	class V_Chestrig_khk 							{ quality = 1; price = 30; };
	class V_Chestrig_oli 							{ quality = 1; price = 30; };
	class V_Chestrig_rgr 							{ quality = 1; price = 30; };

	///////////////////////////////////////////////////////////////////////////////
	// Vests
	///////////////////////////////////////////////////////////////////////////////
	class V_Press_F									{ quality = 1; price = 10; };
	class V_Rangemaster_belt						{ quality = 1; price = 6; };
	class V_TacVest_blk								{ quality = 2; price = 50; };
	class V_TacVest_blk_POLICE						{ quality = 3; price = 50; };
	class V_TacVest_brn								{ quality = 2; price = 50; };
	class V_TacVest_camo							{ quality = 2; price = 50; };
	class V_TacVest_khk								{ quality = 2; price = 50; };
	class V_TacVest_oli								{ quality = 2; price = 50; };
	class V_TacVestCamo_khk							{ quality = 2; price = 50; };
	class V_TacVestIR_blk							{ quality = 2; price = 50; };
	class V_I_G_resistanceLeader_F					{ quality = 2; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// Harnesses
	///////////////////////////////////////////////////////////////////////////////
	class V_HarnessO_brn							{ quality = 1; price = 40; };
	class V_HarnessO_gry							{ quality = 1; price = 40; };
	class V_HarnessOGL_brn							{ quality = 1; price = 30; };
	class V_HarnessOGL_gry							{ quality = 1; price = 30; };
	class V_HarnessOSpec_brn						{ quality = 1; price = 40; };
	class V_HarnessOSpec_gry						{ quality = 1; price = 40; };

	///////////////////////////////////////////////////////////////////////////////
	// Plate Carriers
	///////////////////////////////////////////////////////////////////////////////
	class V_PlateCarrier1_blk 						{ quality = 1; price = 80; };
	class V_PlateCarrier1_rgr 						{ quality = 1; price = 80; };
	class V_PlateCarrier2_rgr 						{ quality = 2; price = 100; };
	class V_PlateCarrier3_rgr 						{ quality = 2; price = 100; };
	class V_PlateCarrierGL_blk 						{ quality = 3; price = 500; };
	class V_PlateCarrierGL_mtp 						{ quality = 3; price = 500; };
	class V_PlateCarrierGL_rgr 						{ quality = 3; price = 500; };
	class V_PlateCarrierH_CTRG 						{ quality = 2; price = 100; };
	class V_PlateCarrierIA1_dgtl 					{ quality = 2; price = 80; };
	class V_PlateCarrierIA2_dgtl 					{ quality = 2; price = 100; };
	class V_PlateCarrierIAGL_dgtl 					{ quality = 3; price = 400; };
	class V_PlateCarrierIAGL_oli 					{ quality = 3; price = 400; };
	class V_PlateCarrierL_CTRG 						{ quality = 2; price = 100; };
	class V_PlateCarrierSpec_blk 					{ quality = 3; price = 200; };
	class V_PlateCarrierSpec_mtp 					{ quality = 3; price = 200; };
	class V_PlateCarrierSpec_rgr 					{ quality = 3; price = 200; };

	///////////////////////////////////////////////////////////////////////////////
	// Caps
	///////////////////////////////////////////////////////////////////////////////
	class H_Cap_blk 								{ quality = 1; price = 6; };
	class H_Cap_blk_Raven 							{ quality = 1; price = 6; };
	class H_Cap_blu 								{ quality = 1; price = 6; };
	class H_Cap_brn_SPECOPS 						{ quality = 1; price = 6; };
	class H_Cap_grn 								{ quality = 1; price = 6; };
	class H_Cap_headphones 							{ quality = 1; price = 6; };
	class H_Cap_khaki_specops_UK 					{ quality = 1; price = 6; };
	class H_Cap_oli 								{ quality = 1; price = 6; };
	class H_Cap_press 								{ quality = 1; price = 6; };
	class H_Cap_red 								{ quality = 1; price = 6; };
	class H_Cap_tan 								{ quality = 1; price = 6; };
	class H_Cap_tan_specops_US 						{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Military Caps
	///////////////////////////////////////////////////////////////////////////////
	class H_MilCap_blue 							{ quality = 1; price = 8; };
	class H_MilCap_dgtl 							{ quality = 1; price = 8; };
	class H_MilCap_mcamo 							{ quality = 1; price = 8; };
	class H_MilCap_ocamo 							{ quality = 1; price = 8; };
	class H_MilCap_oucamo 							{ quality = 1; price = 8; };
	class H_MilCap_rucamo 							{ quality = 1; price = 8; };

	///////////////////////////////////////////////////////////////////////////////
	// Beanies
	///////////////////////////////////////////////////////////////////////////////
	class H_Watchcap_blk 							{ quality = 1; price = 6; };
	class H_Watchcap_camo 							{ quality = 1; price = 6; };
	class H_Watchcap_khk 							{ quality = 1; price = 6; };
	class H_Watchcap_sgg 							{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Bandannas
	///////////////////////////////////////////////////////////////////////////////
	class H_Bandanna_camo							{ quality = 1; price = 4; };
	class H_Bandanna_cbr							{ quality = 1; price = 4; };
	class H_Bandanna_gry							{ quality = 1; price = 4; };
	class H_Bandanna_khk							{ quality = 1; price = 4; };
	class H_Bandanna_khk_hs							{ quality = 1; price = 4; };
	class H_Bandanna_mcamo							{ quality = 1; price = 4; };
	class H_Bandanna_sgg							{ quality = 1; price = 4; };
	class H_Bandanna_surfer							{ quality = 1; price = 4; };

	///////////////////////////////////////////////////////////////////////////////
	// Boonie Hats
	///////////////////////////////////////////////////////////////////////////////
	class H_Booniehat_dgtl							{ quality = 1; price = 6; };
	class H_Booniehat_dirty							{ quality = 1; price = 6; };
	class H_Booniehat_grn							{ quality = 1; price = 6; };
	class H_Booniehat_indp							{ quality = 1; price = 6; };
	class H_Booniehat_khk							{ quality = 1; price = 6; };
	class H_Booniehat_khk_hs						{ quality = 1; price = 6; };
	class H_Booniehat_mcamo							{ quality = 1; price = 6; };
	class H_Booniehat_tan							{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Hats
	///////////////////////////////////////////////////////////////////////////////
	class H_Hat_blue								{ quality = 1; price = 6; };
	class H_Hat_brown								{ quality = 1; price = 6; };
	class H_Hat_camo								{ quality = 1; price = 6; };
	class H_Hat_checker								{ quality = 1; price = 6; };
	class H_Hat_grey								{ quality = 1; price = 6; };
	class H_Hat_tan									{ quality = 1; price = 6; };
	class H_StrawHat								{ quality = 1; price = 6; };
	class H_StrawHat_dark							{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Berets
	///////////////////////////////////////////////////////////////////////////////
	class H_Beret_02								{ quality = 1; price = 6; };
	class H_Beret_blk								{ quality = 1; price = 6; };
	class H_Beret_blk_POLICE						{ quality = 1; price = 6; };
	class H_Beret_brn_SF							{ quality = 1; price = 6; };
	class H_Beret_Colonel							{ quality = 3; price = 8; };
	class H_Beret_grn								{ quality = 1; price = 6; };
	class H_Beret_grn_SF							{ quality = 1; price = 6; };
	class H_Beret_ocamo								{ quality = 1; price = 6; };
	class H_Beret_red								{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Shemags
	///////////////////////////////////////////////////////////////////////////////
	class H_Shemag_khk								{ quality = 1; price = 10; };
	class H_Shemag_olive							{ quality = 1; price = 10; };
	class H_Shemag_olive_hs							{ quality = 1; price = 10; };
	class H_Shemag_tan								{ quality = 1; price = 10; };
	class H_ShemagOpen_khk							{ quality = 1; price = 10; };
	class H_ShemagOpen_tan							{ quality = 1; price = 10; };
	class H_TurbanO_blk								{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// Light Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetB_light							{ quality = 1; price = 20; };
	class H_HelmetB_light_black						{ quality = 1; price = 20; };
	class H_HelmetB_light_desert					{ quality = 1; price = 20; };
	class H_HelmetB_light_grass						{ quality = 1; price = 20; };
	class H_HelmetB_light_sand						{ quality = 1; price = 20; };
	class H_HelmetB_light_snakeskin					{ quality = 1; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetIA								{ quality = 1; price = 40; };
	class H_HelmetIA_camo							{ quality = 1; price = 40; };
	class H_HelmetIA_net							{ quality = 1; price = 40; };
	class H_HelmetB									{ quality = 2; price = 60; };
	class H_HelmetB_black							{ quality = 2; price = 60; };
	class H_HelmetB_camo							{ quality = 3; price = 80; }; // This one is awesome!
	class H_HelmetB_desert							{ quality = 2; price = 60; };
	class H_HelmetB_grass							{ quality = 2; price = 60; };
	class H_HelmetB_paint							{ quality = 2; price = 60; };
	class H_HelmetB_plain_blk						{ quality = 2; price = 60; };
	class H_HelmetB_sand							{ quality = 2; price = 60; };
	class H_HelmetB_snakeskin						{ quality = 2; price = 60; };

	///////////////////////////////////////////////////////////////////////////////
	// Spec Ops Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetSpecB								{ quality = 2; price = 80; };
	class H_HelmetSpecB_blk							{ quality = 2; price = 80; };
	class H_HelmetSpecB_paint1						{ quality = 2; price = 80; };
	class H_HelmetSpecB_paint2						{ quality = 2; price = 80; };

	///////////////////////////////////////////////////////////////////////////////
	// Super Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetO_ocamo							{ quality = 3; price = 150; };
	class H_HelmetO_oucamo							{ quality = 3; price = 150; };
	class H_HelmetSpecO_blk							{ quality = 3; price = 100; };
	class H_HelmetSpecO_ocamo						{ quality = 3; price = 100; };
	class H_HelmetLeaderO_ocamo						{ quality = 3; price = 200; };
	class H_HelmetLeaderO_oucamo					{ quality = 3; price = 200; };

	///////////////////////////////////////////////////////////////////////////////
	// Pointer Attachments
	///////////////////////////////////////////////////////////////////////////////
	class acc_flashlight 							{ quality = 1; price = 4; };
	class acc_pointer_IR 							{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// Bitpod Attachments
	///////////////////////////////////////////////////////////////////////////////
	class bipod_01_F_blk	 						{ quality = 1; price = 10; };
	class bipod_01_F_mtp	 						{ quality = 1; price = 10; };
	class bipod_01_F_snd	 						{ quality = 1; price = 10; };
	class bipod_02_F_blk	 						{ quality = 1; price = 10; };
	class bipod_02_F_hex	 						{ quality = 1; price = 10; };
	class bipod_02_F_tan	 						{ quality = 1; price = 10; };
	class bipod_03_F_blk	 						{ quality = 1; price = 10; };
	class bipod_03_F_oli	 						{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// Muzzle Attachments
	///////////////////////////////////////////////////////////////////////////////
	class muzzle_snds_338_black 					{ quality = 2; price = 50; };
	class muzzle_snds_338_green 					{ quality = 2; price = 50; };
	class muzzle_snds_338_sand 						{ quality = 2; price = 50; };
	class muzzle_snds_93mmg 						{ quality = 2; price = 50; };
	class muzzle_snds_93mmg_tan 					{ quality = 2; price = 50; };
	class muzzle_snds_acp 							{ quality = 1; price = 10; };
	class muzzle_snds_B 							{ quality = 1; price = 20; };
	class muzzle_snds_H 							{ quality = 2; price = 20; };
	class muzzle_snds_H_MG 							{ quality = 2; price = 20; };
	class muzzle_snds_H_SW 							{ quality = 2; price = 20; };
	class muzzle_snds_L 							{ quality = 1; price = 10; };
	class muzzle_snds_M 							{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// UAVS
	///////////////////////////////////////////////////////////////////////////////
	class I_UavTerminal								{ quality = 3; price = 750; };
	class I_UAV_01_backpack_F						{ quality = 3; price = 3000; };

	///////////////////////////////////////////////////////////////////////////////
	// Static MGs
	///////////////////////////////////////////////////////////////////////////////
	class O_HMG_01_weapon_F 						{ quality = 3; price = 5000; };
	class O_HMG_01_support_F 						{ quality = 3; price = 1000; };
	// Does not seem to work with HMG01, only the lower version does
	//class O_HMG_01_support_high_F 				{ quality = 3; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Optic Attachments
	///////////////////////////////////////////////////////////////////////////////
	class optic_Aco									{ quality = 1; price = 100; };
	class optic_ACO_grn								{ quality = 1; price = 100; };
	class optic_ACO_grn_smg							{ quality = 1; price = 100; };
	class optic_Aco_smg								{ quality = 1; price = 100; };
	class optic_AMS									{ quality = 3; price = 300; };
	class optic_AMS_khk								{ quality = 3; price = 300; };
	class optic_AMS_snd								{ quality = 3; price = 300; };
	class optic_Arco								{ quality = 1; price = 100; };
	class optic_DMS									{ quality = 1; price = 150; };
	class optic_Hamr								{ quality = 3; price = 200; };
	class optic_Holosight							{ quality = 1; price = 100; };
	class optic_Holosight_smg						{ quality = 1; price = 100; };
	class optic_KHS_blk								{ quality = 3; price = 300; };
	class optic_KHS_hex								{ quality = 3; price = 300; };
	class optic_KHS_old								{ quality = 3; price = 300; };
	class optic_KHS_tan								{ quality = 3; price = 300; };
	class optic_LRPS								{ quality = 2; price = 300; };
	class optic_MRCO								{ quality = 1; price = 100; };
	class optic_MRD									{ quality = 1; price = 100; };
	class optic_Nightstalker						{ quality = 3; price = 3000; };
	class optic_NVS									{ quality = 2; price = 1800; };
	class optic_SOS									{ quality = 2; price = 200; };
	class optic_tws									{ quality = 3; price = 3000; };
	class optic_tws_mg								{ quality = 3; price = 3000; };
	class optic_Yorris								{ quality = 1; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Hardware
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_Rope							{ quality = 1; price = 20; };
	class Exile_Item_DuctTape						{ quality = 1; price = 300; };
	class Exile_Item_ExtensionCord					{ quality = 1; price = 40; };
	class Exile_Item_FuelCanisterEmpty				{ quality = 1; price = 40; };
	class Exile_Item_JunkMetal						{ quality = 1; price = 400; };
	class Exile_Item_LightBulb						{ quality = 1; price = 20; };
	class Exile_Item_MetalBoard						{ quality = 1; price = 600; };
	//class Exile_Item_MetalHedgehogKit				{ quality = 1; price = 1200; };
	class Exile_Item_SafeKit						{ quality = 3; price = 10000; };
	class Exile_Item_CodeLock						{ quality = 2; price = 5000; };
	//class Exile_Item_Laptop						{ quality = 2; price = 9000; };
	//class Exile_Item_BaseCameraKit				{ quality = 2; price = 5000; };
	class Exile_Item_CamoTentKit					{ quality = 1; price = 250; };
	class Exile_Item_MetalPole						{ quality = 1; price = 800; };
	//class Exile_Item_MetalScrews					{ quality = 1; price = 100; };
	//class Exile_Item_MetalWire					{ quality = 1; price = 100; };
	//class Exile_Item_Cement						{ quality = 1; price = 20; };
	//class Exile_Item_Sand							{ quality = 1; price = 20; };
	//class Exile_Item_CarWheel						{ quality = 1; price = 1000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Food
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_EMRE							{ quality = 3; price = 54; }; //75, 60
	class Exile_Item_GloriousKnakworst				{ quality = 3; price = 40; }; //60, 30
	class Exile_Item_Surstromming					{ quality = 3; price = 34; }; //55, 25
	class Exile_Item_SausageGravy					{ quality = 3; price = 30; }; //50, 25
	class Exile_Item_Catfood						{ quality = 2; price = 24; }; //40, 40
	class Exile_Item_ChristmasTinner				{ quality = 3; price = 20; }; //40, 60
	class Exile_Item_BBQSandwich					{ quality = 3; price = 20; }; //40, 60
	class Exile_Item_Dogfood						{ quality = 2; price = 18; }; //30, 30
	class Exile_Item_BeefParts						{ quality = 2; price = 18; }; //30, 30
	class Exile_Item_Cheathas						{ quality = 2; price = 18; }; //30, 30
	class Exile_Item_Noodles						{ quality = 1; price = 14; }; //25, 50
	class Exile_Item_SeedAstics						{ quality = 1; price = 12; }; //20, 40
	class Exile_Item_Raisins						{ quality = 1; price = 10; }; //15, 30
	class Exile_Item_Moobar							{ quality = 1; price = 8; }; //10, 30
	class Exile_Item_InstantCoffee					{ quality = 1; price = 20; }; //5, 10
	class Exile_Item_Can_Empty						{ quality = 1; price = 1; sellPrice = 1; };

	///////////////////////////////////////////////////////////////////////////////
	// Drinks
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_PlasticBottleCoffee	 		{ quality = 3; price = 40; }; //100, 60
	class Exile_Item_PowerDrink						{ quality = 3; price = 60; }; //95, 10
	class Exile_Item_PlasticBottleFreshWater 		{ quality = 2; price = 50; sellPrice = 4; }; //80, 15
	class Exile_Item_Beer 							{ quality = 1; price = 50; }; //75, 30
	class Exile_Item_EnergyDrink					{ quality = 1; price = 40; }; //75, 20
	class Exile_Item_MountainDupe					{ quality = 1; price = 30; }; //50, 20
	class Exile_Item_PlasticBottleEmpty				{ quality = 1; price = 4; };

	///////////////////////////////////////////////////////////////////////////////
	// First Aid
	///////////////////////////////////////////////////////////////////////////////	
	class Exile_Item_InstaDoc                       { quality = 1; price = 1250; };
	class Exile_Item_Vishpirin						{ quality = 1; price = 300; };
	class Exile_Item_Bandage	                    { quality = 1; price = 100; };
	//class Exile_Item_Defibrillator				{ quality = 1; price = 7500; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Tools
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_Matches 						{ quality = 1; price = 60; };
	class Exile_Item_CookingPot						{ quality = 2; price = 80; };
	class Exile_Melee_Axe							{ quality = 1; price = 100; };
	class Exile_Item_CanOpener						{ quality = 1; price = 80; };
	class Exile_Item_Handsaw						{ quality = 1; price = 500; };
	class Exile_Item_Pliers							{ quality = 1; price = 350; };
	class Exile_Item_Grinder						{ quality = 1; price = 1250; };
	//class Exile_Item_Foolbox						{ quality = 1; price = 4000; };
	//class Exile_Item_CordlessScrewdriver					{ quality = 1; price = 750; };
	//class Exile_Item_FireExtinguisher					{ quality = 1; price = 650; };
	//class Exile_Item_Hammer						{ quality = 1; price = 600; };
	//class Exile_Item_OilCanister						{ quality = 1; price = 1750; };
	//class Exile_Item_Screwdriver						{ quality = 1; price = 250; };
	//class Exile_Item_Shovel						{ quality = 1; price = 700; };
	//class Exile_Item_Wrench						{ quality = 1; price = 250; };
	//class Exile_Item_SleepingMat						{ quality = 1; price = 1250; };
	class Exile_Item_ToiletPaper						{ quality = 1; price = 500; };
	//class Exile_Item_ZipTie						{ quality = 1; price = 250; };

	///////////////////////////////////////////////////////////////////////////////
	// Navigation
	///////////////////////////////////////////////////////////////////////////////
	class ItemWatch								{ quality = 1; price = 2; };	
	class ItemGPS								{ quality = 1; price = 40; };
	class ItemMap								{ quality = 1; price = 6; };
	class ItemCompass							{ quality = 1; price = 6; };
	class ItemRadio								{ quality = 1; price = 40; };
	class Binocular								{ quality = 1; price = 40; };
	class Rangefinder							{ quality = 2; price = 200; };
	class Laserdesignator							{ quality = 3; price = 750; };
	class Laserdesignator_02						{ quality = 3; price = 750; };
	class Laserdesignator_03						{ quality = 3; price = 750; };
	class NVGoggles								{ quality = 2; price = 100; };
	class NVGoggles_INDEP							{ quality = 2; price = 100; };
	class NVGoggles_OPFOR							{ quality = 2; price = 100; };
	class Exile_Item_XM8							{ quality = 2; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Rebreather
	///////////////////////////////////////////////////////////////////////////////
	class V_RebreatherB								{ quality = 2; price = 250; };
	class V_RebreatherIA							{ quality = 2; price = 250; };
	class V_RebreatherIR							{ quality = 2; price = 250; };

	///////////////////////////////////////////////////////////////////////////////
	// Pilot Stuff
	///////////////////////////////////////////////////////////////////////////////
	class B_Parachute								{ quality = 3; price = 150; };
	class H_CrewHelmetHeli_B						{ quality = 2; price = 150; };
	class H_CrewHelmetHeli_I						{ quality = 2; price = 150; };
	class H_CrewHelmetHeli_O						{ quality = 2; price = 150; };
	class H_HelmetCrew_I							{ quality = 1; price = 100; };
	class H_HelmetCrew_B							{ quality = 1; price = 100; };
	class H_HelmetCrew_O							{ quality = 1; price = 100; };
	class H_PilotHelmetHeli_B						{ quality = 3; price = 100; };
	class H_PilotHelmetHeli_I						{ quality = 3; price = 100; };
	class H_PilotHelmetHeli_O						{ quality = 3; price = 100; };
	class U_B_HeliPilotCoveralls					{ quality = 1; price = 80; };
	class U_B_PilotCoveralls						{ quality = 1; price = 60; };
	class U_I_HeliPilotCoveralls					{ quality = 1; price = 60; };
	class U_I_pilotCoveralls						{ quality = 1; price = 60; };
	class U_O_PilotCoveralls						{ quality = 1; price = 60; };
	class H_PilotHelmetFighter_B					{ quality = 2; price = 150; };
	class H_PilotHelmetFighter_I					{ quality = 2; price = 150; };
	class H_PilotHelmetFighter_O					{ quality = 2; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Backpacks
	///////////////////////////////////////////////////////////////////////////////
	class B_HuntingBackpack							{ quality = 3; price = 70; };
	class B_OutdoorPack_blk							{ quality = 1; price = 80; };
	class B_OutdoorPack_blu							{ quality = 1; price = 80; };
	class B_OutdoorPack_tan							{ quality = 1; price = 80; };
	class B_AssaultPack_blk							{ quality = 1; price = 90; };
	class B_AssaultPack_cbr							{ quality = 1; price = 90; };
	class B_AssaultPack_dgtl						{ quality = 1; price = 90; };
	class B_AssaultPack_khk							{ quality = 1; price = 90; };
	class B_AssaultPack_mcamo						{ quality = 1; price = 90; };
	class B_AssaultPack_rgr							{ quality = 1; price = 90; };
	class B_AssaultPack_sgg							{ quality = 1; price = 90; };
	class B_FieldPack_blk							{ quality = 2; price = 120; };
	class B_FieldPack_cbr							{ quality = 2; price = 120; };
	class B_FieldPack_ocamo							{ quality = 2; price = 120; };
	class B_FieldPack_oucamo						{ quality = 2; price = 120; };
	class B_TacticalPack_blk						{ quality = 2; price = 150; };
	class B_TacticalPack_rgr						{ quality = 2; price = 150; };
	class B_TacticalPack_ocamo						{ quality = 2; price = 150; };
	class B_TacticalPack_mcamo						{ quality = 2; price = 150; };
	class B_TacticalPack_oli						{ quality = 2; price = 150; };
	class B_Kitbag_cbr								{ quality = 3; price = 200; };
	class B_Kitbag_mcamo							{ quality = 3; price = 200; };
	class B_Kitbag_sgg								{ quality = 3; price = 200; };
	class B_Bergen_blk								{ quality = 2; price = 200; };
	class B_Bergen_mcamo							{ quality = 2; price = 200; };
	class B_Bergen_rgr								{ quality = 2; price = 200; };
	class B_Bergen_sgg								{ quality = 2; price = 200; };
	class B_Carryall_cbr							{ quality = 3; price = 300; };
	class B_Carryall_khk							{ quality = 3; price = 300; };
	class B_Carryall_mcamo							{ quality = 3; price = 300; };
	class B_Carryall_ocamo							{ quality = 3; price = 300; };
	class B_Carryall_oli							{ quality = 3; price = 300; };
	class B_Carryall_oucamo							{ quality = 3; price = 300; };

	///////////////////////////////////////////////////////////////////////////////
	// Ammunition
	///////////////////////////////////////////////////////////////////////////////
	class 100Rnd_65x39_caseless_mag 				{ quality = 1; price = 55; };
	class 100Rnd_65x39_caseless_mag_Tracer 			{ quality = 2; price = 55; };
	class 10Rnd_127x54_Mag 							{ quality = 1; price = 55; };
	// Broken in Arma
	class 10Rnd_338_Mag 							{ quality = 1; price = 30; };

	class 10Rnd_762x54_Mag 							{ quality = 1; price = 30; };
	//class 10Rnd_762x51_Mag 						{ quality = 1; price = 30; };
	class 10Rnd_93x64_DMR_05_Mag 					{ quality = 1; price = 40; };
	class 11Rnd_45ACP_Mag 							{ quality = 1; price = 10; };
	class 150Rnd_762x54_Box 						{ quality = 1; price = 60; };
	class 150Rnd_762x54_Box_Tracer 					{ quality = 2; price = 60; };
	class 16Rnd_9x21_Mag 							{ quality = 1; price = 20; };
	class 200Rnd_65x39_cased_Box 					{ quality = 1; price = 75; };
	class 200Rnd_65x39_cased_Box_Tracer 			{ quality = 2; price = 75; };
	class 150Rnd_93x64_Mag 							{ quality = 2; price = 60; };
	class 130Rnd_338_Mag 							{ quality = 2; price = 55; };
	class 20Rnd_556x45_UW_mag 						{ quality = 1; price = 20; };
	class 20Rnd_762x51_Mag 							{ quality = 1; price = 30; };
	class 30Rnd_45ACP_Mag_SMG_01 					{ quality = 1; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green 		{ quality = 2; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow		{ quality = 2; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red			{ quality = 2; price = 10; };
	class 30Rnd_556x45_Stanag 						{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Green 			{ quality = 2; price = 20; };
	class 30Rnd_556x45_Stanag_green  				{ quality = 2; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Red 			{ quality = 2; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Yellow 		{ quality = 2; price = 20; };
	class 30Rnd_556x45_Stanag_red 					{ quality = 2; price = 20; };
	class 30Rnd_65x39_caseless_green 				{ quality = 1; price = 20; };
	class 30Rnd_65x39_caseless_green_mag_Tracer 	{ quality = 2; price = 30; };
	class 30Rnd_65x39_caseless_mag 					{ quality = 1; price = 20; };
	class 30Rnd_65x39_caseless_mag_Tracer 			{ quality = 2; price = 30; };
	class 30Rnd_9x21_Mag 							{ quality = 1; price = 40; };
	class 5Rnd_127x108_APDS_Mag 					{ quality = 2; price = 50; };
	class 5Rnd_127x108_Mag 							{ quality = 1; price = 50; };
	class 6Rnd_45ACP_Cylinder 						{ quality = 1; price = 10; };
	class 6Rnd_GreenSignal_F 						{ quality = 9000; price = 30; };
	class 6Rnd_RedSignal_F 							{ quality = 9000; price = 30; };
	class 7Rnd_408_Mag 								{ quality = 1; price = 60; };
	class 9Rnd_45ACP_Mag 							{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Flares
	///////////////////////////////////////////////////////////////////////////////
	class Chemlight_blue							{ quality = 1; price = 2; };
	class Chemlight_green							{ quality = 1; price = 2; };
	class Chemlight_red								{ quality = 1; price = 2; };
	class FlareGreen_F								{ quality = 1; price = 6; };
	class FlareRed_F								{ quality = 1; price = 6; };
	class FlareWhite_F								{ quality = 1; price = 6; };
	class FlareYellow_F								{ quality = 1; price = 6; };
	class UGL_FlareGreen_F							{ quality = 2; price = 8; };
	class UGL_FlareRed_F							{ quality = 2; price = 8; };
	class UGL_FlareWhite_F							{ quality = 2; price = 8; };
	class UGL_FlareYellow_F							{ quality = 2; price = 8; };
	class 3Rnd_UGL_FlareGreen_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareRed_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareWhite_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareYellow_F					{ quality = 3; price = 8*3; };

	///////////////////////////////////////////////////////////////////////////////
	// Smokes
	///////////////////////////////////////////////////////////////////////////////
	class SmokeShell								{ quality = 1; price = 6; };
	class SmokeShellBlue							{ quality = 1; price = 6; };
	class SmokeShellGreen							{ quality = 1; price = 6; };
	class SmokeShellOrange							{ quality = 1; price = 6; };
	class SmokeShellPurple							{ quality = 1; price = 6; };
	class SmokeShellRed								{ quality = 1; price = 6; };
	class SmokeShellYellow							{ quality = 1; price = 6; };
	class 1Rnd_Smoke_Grenade_shell					{ quality = 2; price = 8; };
	class 1Rnd_SmokeBlue_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeGreen_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeOrange_Grenade_shell			{ quality = 2; price = 8; };
	class 1Rnd_SmokePurple_Grenade_shell			{ quality = 2; price = 8; };
	class 1Rnd_SmokeRed_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeYellow_Grenade_shell			{ quality = 2; price = 8; };
	class 3Rnd_Smoke_Grenade_shell					{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeBlue_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeGreen_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeOrange_Grenade_shell			{ quality = 3; price = 8*3; };
	class 3Rnd_SmokePurple_Grenade_shell			{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeRed_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeYellow_Grenade_shell			{ quality = 3; price = 8*3; };

	///////////////////////////////////////////////////////////////////////////////
	// Explosives
	///////////////////////////////////////////////////////////////////////////////
	class HandGrenade								{ quality = 3; price = 250; };
	class MiniGrenade								{ quality = 2; price = 250; };
	class B_IR_Grenade								{ quality = 1; price = 250; };
	class O_IR_Grenade								{ quality = 1; price = 250; };
	class I_IR_Grenade								{ quality = 1; price = 250; };
	class 1Rnd_HE_Grenade_shell						{ quality = 2; price = 70; };
	class 3Rnd_HE_Grenade_shell						{ quality = 3; price = 70*3; };
	class APERSBoundingMine_Range_Mag				{ quality = 3; price = 750; };
	class APERSMine_Range_Mag						{ quality = 3; price = 750; };
	class APERSTripMine_Wire_Mag					{ quality = 3; price = 1100; };
	class ClaymoreDirectionalMine_Remote_Mag		{ quality = 3; price = 900; };
	class DemoCharge_Remote_Mag						{ quality = 3; price = 600; };
	class IEDLandBig_Remote_Mag						{ quality = 3; price = 4000; };
	class IEDLandSmall_Remote_Mag					{ quality = 3; price = 2200; };
	class IEDUrbanBig_Remote_Mag					{ quality = 3; price = 4000; };
	class IEDUrbanSmall_Remote_Mag					{ quality = 3; price = 2200; };
	class SatchelCharge_Remote_Mag					{ quality = 3; price = 2200; };
	class SLAMDirectionalMine_Wire_Mag		        { quality = 3; price = 2100; };		
	class Titan_AA                                  { quality = 3; price = 5100; };
    class Titan_AT                                  { quality = 3; price = 12100; };
	class Titan_AP                                  { quality = 3; price = 12100; };

	///////////////////////////////////////////////////////////////////////////////
	// Pistols
	///////////////////////////////////////////////////////////////////////////////
	class hgun_ACPC2_F 								{ quality = 1; price = 50; };
	class hgun_P07_F 								{ quality = 1; price = 50; };
	class hgun_Pistol_heavy_01_F 					{ quality = 2; price = 80; };
	class hgun_Pistol_heavy_02_F 					{ quality = 2; price = 80; };
	class hgun_Pistol_Signal_F 						{ quality = 9000; price = 100; };
	class hgun_Rook40_F 							{ quality = 1; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// Sub Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	class hgun_PDW2000_F 							{ quality = 1; price = 100; };
	class SMG_01_F 									{ quality = 1; price = 150; };
	class SMG_02_F 									{ quality = 1; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Light Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	class arifle_MX_SW_Black_F						{ quality = 2; price = 250; };
	class arifle_MX_SW_F							{ quality = 2; price = 250; };
	class LMG_Mk200_F								{ quality = 2; price = 300; };
	class LMG_Zafir_F								{ quality = 2; price = 350; };
	class MMG_01_hex_F								{ quality = 3; price = 800; };
	class MMG_01_tan_F								{ quality = 3; price = 800; };
	class MMG_02_black_F							{ quality = 3; price = 450; };
	class MMG_02_camo_F								{ quality = 3; price = 450; };
	class MMG_02_sand_F								{ quality = 3; price = 450; };

	///////////////////////////////////////////////////////////////////////////////
	// Assault Rifles
	///////////////////////////////////////////////////////////////////////////////
	class arifle_Katiba_C_F							{ quality = 1; price = 150; };
	class arifle_Katiba_F							{ quality = 1; price = 150; };
	class arifle_Katiba_GL_F						{ quality = 2; price = 200; };
	class arifle_Mk20_F								{ quality = 1; price = 150; };
	class arifle_Mk20_GL_F							{ quality = 2; price = 200; };
	class arifle_Mk20_GL_plain_F					{ quality = 2; price = 200; };
	class arifle_Mk20_plain_F						{ quality = 1; price = 150; };
	class arifle_Mk20C_F							{ quality = 1; price = 150; };
	class arifle_Mk20C_plain_F						{ quality = 1; price = 150; };
	class arifle_MX_Black_F							{ quality = 1; price = 450; };
	class arifle_MX_F								{ quality = 1; price = 450; };
	class arifle_MX_GL_Black_F						{ quality = 2; price = 450; };
	class arifle_MX_GL_F							{ quality = 2; price = 450; };
	class arifle_MXC_Black_F						{ quality = 1; price = 350; };
	class arifle_MXC_F								{ quality = 1; price = 350; };
	class arifle_SDAR_F								{ quality = 3; price = 650; };
	class arifle_TRG20_F							{ quality = 1; price = 250; };
	class arifle_TRG21_F							{ quality = 1; price = 250; };
	class arifle_TRG21_GL_F							{ quality = 2; price = 350; };

	///////////////////////////////////////////////////////////////////////////////
	// Sniper Rifles
	///////////////////////////////////////////////////////////////////////////////
	class arifle_MXM_Black_F 						{ quality = 1; price = 550; };
	class arifle_MXM_F 								{ quality = 1; price = 550; };
	class srifle_DMR_01_F 							{ quality = 2; price = 600; };
	class srifle_DMR_02_camo_F 						{ quality = 3; price = 800; };
	class srifle_DMR_02_F 							{ quality = 3; price = 800; };
	class srifle_DMR_02_sniper_F 					{ quality = 3; price = 800; };
	class srifle_DMR_03_F 							{ quality = 3; price = 750; };
	class srifle_DMR_03_khaki_F 					{ quality = 3; price = 750; };
	class srifle_DMR_03_multicam_F 					{ quality = 3; price = 750; };
	class srifle_DMR_03_tan_F 						{ quality = 3; price = 750; };
	class srifle_DMR_03_woodland_F 					{ quality = 3; price = 750; };
	class srifle_DMR_04_F 							{ quality = 3; price = 700; };
	class srifle_DMR_04_Tan_F 						{ quality = 3; price = 700; };
	class srifle_DMR_05_blk_F 						{ quality = 3; price = 850; };
	class srifle_DMR_05_hex_F 						{ quality = 3; price = 850; };
	class srifle_DMR_05_tan_f 						{ quality = 3; price = 850; };
	class srifle_DMR_06_camo_F 						{ quality = 3; price = 800; };
	class srifle_DMR_06_olive_F 					{ quality = 3; price = 800; };
	class srifle_EBR_F 								{ quality = 2; price = 700; };
	class srifle_GM6_camo_F 						{ quality = 3; price = 900; };
	class srifle_GM6_F 								{ quality = 3; price = 900; };
	class srifle_LRR_camo_F 						{ quality = 3; price = 850; };
	class srifle_LRR_F 								{ quality = 3; price = 850; };
	
	///////////////////////////////////////////////////////////////////////////////
	// CUP LAUNCHERS
	///////////////////////////////////////////////////////////////////////////////
	class CUP_glaunch_M32                     { quality = 1; price = 2500; };
	class CUP_glaunch_M79                     { quality = 1; price = 2200; };
	class CUP_glaunch_Mk13                    { quality = 1; price = 2100; };
	class CUP_AT13_M    			          { quality = 2; price = 2000; };
	class CUP_HandGrenade_L109A1_HE           { quality = 2; price = 250; };
	class CUP_Dragon_EP1_M                    { quality = 2; price = 15500; };
	class CUP_FlareGreen_M203                 { quality = 2; price = 20; };
	class CUP_FlareRed_GP25_M                 { quality = 2; price = 20; };
	class CUP_FlareWhite_GP25_M               { quality = 2; price = 20; };
	class CUP_FlareWhite_M203                 { quality = 2; price = 20; };
	class CUP_HandGrenade_RGD5                { quality = 2; price = 250; };
	class CUP_HandGrenade_M67                 { quality = 2; price = 250; };
	class CUP_Igla_M                          { quality = 2; price = 20000; };
	class CUP_Javelin_M                       { quality = 2; price = 20000; };
	class CUP_M136_M                          { quality = 2; price = 11700; };
	class CUP_MAAWS_HEAT_M                    { quality = 2; price = 11700; };
	class CUP_MAAWS_HEDP_M                    { quality = 2; price = 11700; };
	class CUP_Mine_M                          { quality = 2; price = 2000; };
	class CUP_NLAW_M                          { quality = 2; price = 12200; };
	class CUP_OG7_M                           { quality = 2; price = 12100; };
	class CUP_PG7VL_M                         { quality = 2; price = 12100; };
	class CUP_PG7VR_M                         { quality = 2; price = 12000; };
	//class CUP_PipeBomb_M                    { quality = 2; price = 20; };
	class CUP_RPG18_M                         { quality = 2; price = 12100; };
	class CUP_SMAW_HEAA_M                     { quality = 2; price = 12100; };
	class CUP_SMAW_HEDP_M                     { quality = 2; price = 12100; };
	class CUP_Stinger_M                       { quality = 2; price = 5100; };
	class CUP_Strela_2_M                      { quality = 2; price = 5100; };
	//class CUP_Launch_RPG1                      { quality = 2; price = 15000; };

	///////////////////////////////////////////////////////////////////////////////
	// CUP Weapons
	///////////////////////////////////////////////////////////////////////////////                   
	class CUP_sgun_AA12                     { quality = 1; price = 1900; };
	class CUP_sgun_M1014                    { quality = 1; price = 500; };
	class CUP_sgun_Saiga12K                 { quality = 1; price = 500; };
	class CUP_smg_MP5SD6                    { quality = 1; price = 300; };
	class CUP_smg_MP5A5                     { quality = 1; price = 300; };
	class CUP_smg_EVO                       { quality = 1; price = 300; };
	class CUP_smg_bizon                     { quality = 1; price = 300; };
	class CUP_hgun_Colt1911                 { quality = 1; price = 100; };
	class CUP_hgun_Compact                  { quality = 1; price = 100; };
	class CUP_hgun_Makarov                  { quality = 1; price = 100; };
	class CUP_hgun_MicroUzi                 { quality = 1; price = 100; };
	class CUP_hgun_TaurusTracker455         { quality = 1; price = 400; };
	class CUP_hgun_TaurusTracker455_gold    { quality = 1; price = 600; };
	class CUP_hgun_M9                       { quality = 1; price = 100; };
	class CUP_hgun_SA61                     { quality = 1; price = 100; };
	class CUP_hgun_Duty                     { quality = 1; price = 100; };
	class CUP_hgun_Phantom                  { quality = 1; price = 100; };
	class CUP_hgun_PB6P9                    { quality = 1; price = 100; };
	class CUP_hgun_Glock17                  { quality = 1; price = 100; };
	class CUP_srifle_SVD_wdl_ghillie        { quality = 1; price = 1200; };
	class CUP_srifle_SVD_des_ghillie_pso    { quality = 1; price = 1200; };
	class CUP_srifle_DMR                    { quality = 1; price = 1200; };
	class CUP_srifle_ksvk                   { quality = 1; price = 1200; };
	class CUP_srifle_M110                   { quality = 1; price = 1200; };
	class CUP_srifle_M14                    { quality = 1; price = 1200; };
	class CUP_srifle_M24_des                { quality = 1; price = 1200; };
	class CUP_srifle_M24_wdl                { quality = 1; price = 1200; };
	class CUP_srifle_M24_ghillie            { quality = 1; price = 1200; };
	class CUP_srifle_SVD                    { quality = 1; price = 1200; };
	class CUP_srifle_SVD_des                { quality = 1; price = 1200; };
	class CUP_srifle_VSSVintorez            { quality = 1; price = 800; };
	class CUP_srifle_CZ750                  { quality = 1; price = 1200; };
	class CUP_srifle_M107_Base              { quality = 1; price = 1200; };
	class CUP_srifle_Mk12SPR                { quality = 1; price = 900; };
	class CUP_srifle_AS50                   { quality = 1; price = 1700; };
	class CUP_srifle_AWM_des                { quality = 1; price = 1500; };
	class CUP_srifle_AWM_wdl                { quality = 1; price = 1500; };
	class CUP_srifle_CZ550                  { quality = 1; price = 500; };
	class CUP_srifle_LeeEnfield             { quality = 1; price = 200; };
	class CUP_srifle_M40A3                  { quality = 1; price = 1200; };
	class CUP_lmg_M249_para                 { quality = 1; price = 1000; };
	class CUP_lmg_Mk48_des                  { quality = 1; price = 1000; };
	class CUP_lmg_Mk48_wdl                  { quality = 1; price = 1000; };
	class CUP_lmg_L110A1                    { quality = 1; price = 900; };
	class CUP_lmg_Pecheneg                  { quality = 1; price = 900; };
	class CUP_lmg_UK59                      { quality = 1; price = 1000; };
	class CUP_lmg_L7A2                      { quality = 1; price = 1000; };
	class CUP_lmg_M60A4                     { quality = 1; price = 1000; };
	class CUP_lmg_M240                      { quality = 1; price = 800; };
	class CUP_lmg_M249                      { quality = 1; price = 800; };
	class CUP_lmg_PKM                       { quality = 1; price = 1000; };
	class CUP_arifle_Mk16_CQC_FG            { quality = 1; price = 800; };
	class CUP_arifle_Mk16_CQC_SFG           { quality = 1; price = 800; };
	class CUP_arifle_Mk16_CQC_EGLM          { quality = 1; price = 800; };
	class CUP_arifle_Mk16_STD               { quality = 1; price = 800; };
	class CUP_arifle_Mk16_STD_FG            { quality = 1; price = 800; };
	class CUP_arifle_Mk16_STD_SFG           { quality = 1; price = 800; };
	class CUP_arifle_Mk16_STD_EGLM          { quality = 1; price = 850; };
	class CUP_arifle_Mk16_SV                { quality = 1; price = 300; };
	class CUP_arifle_Mk17_CQC               { quality = 1; price = 600; };
	class CUP_arifle_Mk17_CQC_FG            { quality = 1; price = 600; };
	class CUP_arifle_Mk17_CQC_SFG           { quality = 1; price = 600; };
	class CUP_arifle_Mk17_CQC_EGLM          { quality = 1; price = 600; };
	class CUP_arifle_Mk17_STD               { quality = 1; price = 300; };
	class CUP_arifle_Mk17_STD_FG            { quality = 1; price = 500; };
	class CUP_arifle_Mk17_STD_SFG           { quality = 1; price = 500; };
	class CUP_arifle_Mk17_STD_EGLM          { quality = 1; price = 500; };
	class CUP_arifle_Mk20                   { quality = 1; price = 700; };
	class CUP_arifle_XM8_Compact_Rail       { quality = 1; price = 800; };
	class CUP_arifle_XM8_Railed             { quality = 1; price = 800; };
	class CUP_arifle_M16A4_Base             { quality = 1; price = 800; };
	class CUP_arifle_M4A1_BUIS_GL           { quality = 1; price = 850; };
	class CUP_arifle_M4A1_BUIS_camo_GL      { quality = 1; price = 850; };
	class CUP_arifle_M4A1_BUIS_desert_GL    { quality = 1; price = 850; };
	class CUP_arifle_M4A1_black             { quality = 1; price = 800; };
	class CUP_arifle_M4A1_desert            { quality = 1; price = 800; };
	class CUP_arifle_L85A2                  { quality = 1; price = 800; };
	class CUP_arifle_L85A2_GL               { quality = 1; price = 850; };
	class CUP_arifle_L86A2                  { quality = 1; price = 800; };
	class CUP_arifle_FNFAL_railed           { quality = 1; price = 1200; };
	class CUP_arifle_AK107_GL               { quality = 1; price = 850; };
	class CUP_arifle_Sa58P_des              { quality = 1; price = 1200; };
	class CUP_arifle_Sa58V_camo             { quality = 1; price = 1200; };
	class CUP_arifle_Sa58RIS1               { quality = 1; price = 1200; };
	class CUP_arifle_Sa58RIS1_des           { quality = 1; price = 1200; };
	class CUP_arifle_Sa58RIS2               { quality = 1; price = 1200; };
	class CUP_arifle_Sa58RIS2_camo          { quality = 1; price = 1200; };
	class CUP_arifle_CZ805_A1               { quality = 1; price = 800; };
	class CUP_arifle_CZ805_GL               { quality = 1; price = 850; };
	class CUP_arifle_CZ805_B_GL             { quality = 1; price = 850; };
	class CUP_arifle_CZ805_B                { quality = 1; price = 800; };
	class CUP_arifle_XM8_Carbine            { quality = 1; price = 800; };
	class CUP_arifle_XM8_Carbine_FG         { quality = 1; price = 800; };
	class CUP_arifle_XM8_Carbine_GL         { quality = 1; price = 850; };
	class CUP_arifle_XM8_Compact            { quality = 1; price = 800; };
	class CUP_arifle_xm8_SAW                { quality = 1; price = 1200; };
	class CUP_arifle_xm8_sharpshooter       { quality = 1; price = 800; };
	class CUP_arifle_Mk16_CQC               { quality = 1; price = 400; };
	class CUP_arifle_Sa58P                  { quality = 1; price = 1200; };
	class CUP_arifle_Sa58V                  { quality = 1; price = 1200; };
	class CUP_arifle_M16A2                  { quality = 1; price = 800; };
	class CUP_arifle_M16A2_GL               { quality = 1; price = 850; };
	class CUP_arifle_M16A4_GL               { quality = 1; price = 850; };
	class CUP_arifle_M4A1                   { quality = 1; price = 800; };
	class CUP_arifle_M4A1_camo              { quality = 1; price = 800; };
	class CUP_arifle_FNFAL                  { quality = 1; price = 1200; };
	class CUP_arifle_G36A                   { quality = 1; price = 800; };
	class CUP_arifle_G36A_camo              { quality = 1; price = 800; };
	class CUP_arifle_G36K                   { quality = 1; price = 800; };
	class CUP_arifle_G36K_camo              { quality = 1; price = 800; };
	class CUP_arifle_G36C                   { quality = 1; price = 800; };
	class CUP_arifle_G36C_camo              { quality = 1; price = 800; };
	class CUP_arifle_MG36                   { quality = 1; price = 800; };
	class CUP_arifle_MG36_camo              { quality = 1; price = 800; };
	class CUP_arifle_AK74                   { quality = 1; price = 800; };
	class CUP_arifle_AK107                  { quality = 1; price = 800; };
	class CUP_arifle_AKS74                  { quality = 1; price = 800; };
	class CUP_arifle_AKS74U                 { quality = 1; price = 800; };
	class CUP_arifle_AK74_GL                { quality = 1; price = 850; };
	class CUP_arifle_AKM                    { quality = 1; price = 1200; };
	class CUP_arifle_AKS                    { quality = 1; price = 1200; };
	class CUP_arifle_AKS_Gold               { quality = 1; price = 2900; };
	class CUP_arifle_RPK74                  { quality = 1; price = 2500; };
	class CUP_arifle_AK74_GL_kobra          { quality = 1; price = 800; };
	class CUP_arifle_CZ805_A2               { quality = 1; price = 1200; };

	///////////////////////////////////////////////////////////////////////////////
	// CUP Attachments
	///////////////////////////////////////////////////////////////////////////////
	class CUP_optic_PSO_3                                { quality = 1; price = 100; };
	class CUP_optic_Kobra                                { quality = 1; price = 100; };
	class CUP_optic_GOSHAWK                              { quality = 1; price = 3000; };
	class CUP_optic_NSPU                                 { quality = 1; price = 100; };
	class CUP_optic_PechenegScope                        { quality = 1; price = 100; };
	class CUP_optic_HoloBlack                            { quality = 1; price = 100; };
	class CUP_optic_HoloWdl                              { quality = 1; price = 100; };
	class CUP_optic_HoloDesert                           { quality = 1; price = 100; };
	class CUP_optic_Eotech533                            { quality = 1; price = 100; };
	class CUP_optic_Eotech533Grey                        { quality = 1; price = 100; };
	class CUP_optic_CompM4                               { quality = 1; price = 100; };
	class CUP_optic_SUSAT                                { quality = 1; price = 100; };
	class CUP_optic_CWS                                  { quality = 1; price = 3000; };
	class CUP_optic_RCO                                  { quality = 1; price = 100; };
	class CUP_optic_RCO_desert                           { quality = 1; price = 100; };
	class CUP_optic_CompM2_Woodland2                     { quality = 1; price = 100; };
	class CUP_optic_CompM2_Woodland                      { quality = 1; price = 100; };
	class CUP_optic_CompM2_Black                         { quality = 1; price = 100; };
	class CUP_optic_CompM2_Desert                        { quality = 1; price = 100; };
	class CUP_optic_ACOG                                 { quality = 1; price = 100; };
	class CUP_optic_SB_3_12x50_PMII                      { quality = 1; price = 100; };
	class CUP_optic_AN_PAS_13c2                          { quality = 1; price = 3000; };
	class CUP_optic_AN_PVS_4                             { quality = 1; price = 100; };
	class CUP_optic_AN_PVS_10                            { quality = 1; price = 100; };
	class CUP_optic_LeupoldMk4                           { quality = 1; price = 100; };
	class CUP_optic_LeupoldM3LR                          { quality = 1; price = 100; };
	class CUP_optic_LeupoldMk4_CQ_T                      { quality = 1; price = 100; };
	class CUP_optic_LeupoldMk4_MRT_tan                   { quality = 1; price = 100; };
	class CUP_optic_LeupoldMk4_10x40_LRT_Desert          { quality = 1; price = 100; };
	class CUP_optic_LeupoldMk4_10x40_LRT_Woodland        { quality = 1; price = 100; };
	class CUP_optic_Leupold_VX3                          { quality = 1; price = 100; };
	class CUP_optic_ElcanM145                            { quality = 1; price = 100; };
	class CUP_optic_ELCAN_SpecterDR                      { quality = 1; price = 100; };
	class CUP_optic_AN_PAS_13c1                          { quality = 1; price = 3000; };
	class CUP_optic_SB_11_4x20_PM                        { quality = 1; price = 100; };
	class CUP_optic_ZDDot                                { quality = 1; price = 100; };
	class CUP_optic_MRad                                 { quality = 1; price = 100; };
	class CUP_optic_TrijiconRx01_black                   { quality = 1; price = 100; };
	class CUP_optic_TrijiconRx01_desert                  { quality = 1; price = 100; };
	class CUP_acc_Glock17_Flashlight                     { quality = 1; price = 100; };
	class CUP_acc_ANPEQ_15                               { quality = 1; price = 100; };
	class CUP_acc_ANPEQ_2                                { quality = 1; price = 100; };
	class CUP_acc_Flashlight                             { quality = 1; price = 100; };
	class CUP_acc_Flashlight_wdl                         { quality = 1; price = 100; };
	class CUP_acc_Flashlight_desert                      { quality = 1; price = 100; };
	class CUP_acc_XM8_light_module                       { quality = 1; price = 100; };
	class CUP_acc_ANPEQ_2_camo                           { quality = 1; price = 100; };
	class CUP_acc_ANPEQ_2_desert                         { quality = 1; price = 100; };
	class CUP_acc_ANPEQ_2_grey                           { quality = 1; price = 100; };
	class CUP_acc_CZ_M3X                                 { quality = 1; price = 100; };
	class CUP_muzzle_snds_AWM                            { quality = 1; price = 100; };
	class CUP_muzzle_snds_SCAR_H                         { quality = 1; price = 100; };
	class CUP_muzzle_mfsup_SCAR_H                        { quality = 1; price = 100; };
	class CUP_muzzle_snds_XM8                            { quality = 1; price = 100; };
	class CUP_muzzle_snds_G36_black                      { quality = 1; price = 100; };
	class CUP_muzzle_snds_G36_desert                     { quality = 1; price = 100; };
	class CUP_muzzle_snds_L85                            { quality = 1; price = 100; };
	class CUP_muzzle_snds_M16_camo                       { quality = 1; price = 100; };
	class CUP_muzzle_snds_M16                            { quality = 1; price = 100; };
	class CUP_muzzle_snds_SCAR_L                         { quality = 1; price = 100; };
	class CUP_muzzle_mfsup_SCAR_L                        { quality = 1; price = 100; };
	class CUP_muzzle_PBS4                                { quality = 1; price = 100; };
	class CUP_muzzle_PB6P9                               { quality = 1; price = 100; };
	class CUP_muzzle_Bizon                               { quality = 1; price = 100; };
	class CUP_muzzle_snds_M110                           { quality = 1; price = 100; };
	class CUP_muzzle_snds_M14                            { quality = 1; price = 100; };
	class CUP_muzzle_snds_M9                             { quality = 1; price = 100; };
	class CUP_muzzle_snds_MicroUzi                       { quality = 1; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// CUP Ammo
	///////////////////////////////////////////////////////////////////////////////
	class    CUP_100Rnd_556x45_BetaCMag                           { quality = 2; price = 20; };
	class    CUP_100Rnd_TE4_Green_Tracer_556x45_M249              { quality = 2; price = 20; };
	class    CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M         { quality = 2; price = 20; };
	class    CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M         { quality = 2; price = 20; };
	class    CUP_10Rnd_127x99_M107                                { quality = 2; price = 20; };
	class    CUP_10Rnd_762x51_CZ750                               { quality = 2; price = 20; };
	class    CUP_10Rnd_762x54_SVD_M                               { quality = 2; price = 20; };
	class    CUP_10Rnd_9x19_Compact                               { quality = 2; price = 20; };
	class    CUP_10Rnd_9x39_SP5_VSS_M                             { quality = 2; price = 20; };
	class    CUP_10x_303_M                                        { quality = 2; price = 20; };
	class    CUP_15Rnd_9x19_M9                                    { quality = 2; price = 20; };
	class    CUP_17Rnd_9x19_glock17                               { quality = 2; price = 20; };
	class    CUP_18Rnd_9x19_Phantom                               { quality = 2; price = 20; };
	class    CUP_1Rnd_HE_GP25_M                                   { quality = 2; price = 20; };
	class    CUP_1Rnd_HEDP_M203                                   { quality = 2; price = 20; };
	class    CUP_1Rnd_SMOKE_GP25_M                                { quality = 2; price = 20; };
	class    CUP_1Rnd_Smoke_M203                                  { quality = 2; price = 20; };
	class    CUP_1Rnd_SmokeGreen_M203                             { quality = 2; price = 20; };
	class    CUP_1Rnd_SmokeRed_M203                               { quality = 2; price = 20; };
	class    CUP_1Rnd_SmokeYellow_M203                            { quality = 2; price = 20; };
	class    CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1            { quality = 2; price = 20; };
	class    CUP_200Rnd_TE4_Green_Tracer_556x45_M249              { quality = 2; price = 20; };
	class    CUP_20Rnd_762x51_DMR                                 { quality = 2; price = 20; };
	class    CUP_20Rnd_762x51_FNFAL_M                             { quality = 2; price = 20; };
	class    CUP_20Rnd_762x51_B_SCAR                              { quality = 2; price = 20; };
	class    CUP_20Rnd_762x51_B_M110                              { quality = 2; price = 20; };
	class    CUP_20Rnd_762x51_CZ805B                              { quality = 2; price = 20; };
	class    CUP_30Rnd_9x19_EVO                                   { quality = 2; price = 20; };
	class    CUP_20Rnd_B_AA12_Pellets                             { quality = 2; price = 20; };
	class    CUP_30Rnd_545x39_AK_M                                { quality = 2; price = 20; };
	class    CUP_30Rnd_556x45_G36                                 { quality = 2; price = 20; };
	class    CUP_30Rnd_556x45_Stanag                              { quality = 2; price = 20; };
	class    CUP_30Rnd_762x39_AK47_M                              { quality = 2; price = 20; };
	class    CUP_30Rnd_Sa58_M                                     { quality = 2; price = 20; };
	class    CUP_30Rnd_9x19_MP5                                   { quality = 2; price = 20; };
	class    CUP_5Rnd_127x108_KSVK_M                              { quality = 2; price = 20; };
	class    CUP_5Rnd_127x99_as50_M                               { quality = 2; price = 20; };
	class    CUP_5Rnd_762x51_M24                                  { quality = 2; price = 20; };
	class    CUP_5Rnd_86x70_L115A1                                { quality = 2; price = 20; };
	class    CUP_5x_22_LR_17_HMR_M                                { quality = 2; price = 20; };
	class    CUP_64Rnd_9x19_Bizon_M                               { quality = 2; price = 20; };
	class    CUP_6Rnd_45ACP_M                                     { quality = 2; price = 20; };
	class    CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M         { quality = 2; price = 20; };
	class    CUP_7Rnd_45ACP_1911                                  { quality = 2; price = 20; };
	class    CUP_8Rnd_9x18_Makarov_M                              { quality = 2; price = 20; };
	class    CUP_8Rnd_9x18_MakarovSD_M                            { quality = 2; price = 20; };
	class    CUP_8Rnd_B_Beneli_74Slug                             { quality = 2; price = 20; };
	class    CUP_8Rnd_B_Saiga12_74Slug_M                          { quality = 2; price = 20; };
	class    CUP_6Rnd_HE_M203                                     { quality = 2; price = 120; };
	class    CUP_6Rnd_FlareWhite_M203                             { quality = 2; price = 120; };
	class	 CUP_6Rnd_FlareGreen_M203                             { quality = 2; price = 120; };
	class	 CUP_6Rnd_FlareRed_M203                               { quality = 2; price = 120; };
	class	 CUP_6Rnd_FlareYellow_M203                            { quality = 2; price = 120; };
	class	 CUP_6Rnd_Smoke_M203                                  { quality = 2; price = 120; };
	class	 CUP_6Rnd_SmokeRed_M203                               { quality = 2; price = 120; };
	class	 CUP_6Rnd_SmokeGreen_M203                             { quality = 2; price = 120; };
	class	 CUP_6Rnd_SmokeYellow_M203                            { quality = 2; price = 120; };

	//////////
	//HLCGuns:
	//////////
	class hlc_smg_mp5k_PDW									{ quality = 1; price = 600; };
	class hlc_smg_mp5k										{ quality = 1; price = 600; };
	class hlc_smg_mp5a2										{ quality = 1; price = 600; };
	class hlc_smg_mp5a3										{ quality = 1; price = 600; };
	class hlc_smg_mp5a4										{ quality = 1; price = 600; };
	class hlc_smg_mp5n										{ quality = 1; price = 600; };
	class hlc_smg_mp510										{ quality = 1; price = 600; };
	class hlc_smg_mp5sd5									{ quality = 1; price = 600; };
	class hlc_smg_mp5sd6									{ quality = 1; price = 600; };
	class hlc_smg_9mmar										{ quality = 1; price = 600; };
	class hlc_rifle_ak74									{ quality = 1; price = 800; };
	class hlc_rifle_aks74									{ quality = 1; price = 800; };
	class hlc_rifle_aks74u									{ quality = 1; price = 800; };
	class hlc_rifle_ak47									{ quality = 1; price = 800; };
	class hlc_rifle_akm										{ quality = 1; price = 800; };
	class hlc_rifle_rpk										{ quality = 1; price = 800; };
	class hlc_rifle_ak12									{ quality = 1; price = 800; };
	class hlc_rifle_aku12									{ quality = 1; price = 800; };
	class hlc_rifle_rpk12									{ quality = 1; price = 800; };
	class hlc_rifle_rpk74n									{ quality = 1; price = 800; };
	class hlc_rifle_ak12gl									{ quality = 1; price = 800; };
	class hlc_rifle_akmgl									{ quality = 1; price = 800; };
	class hlc_rifle_aks74_GL								{ quality = 1; price = 800; };
	class hlc_rifle_saiga12k								{ quality = 1; price = 800; };
	class hlc_rifle_aek971									{ quality = 1; price = 800; };
	class hlc_rifle_RU556									{ quality = 1; price = 800; };
	class hlc_rifle_RU5562									{ quality = 1; price = 800; };
	class hlc_rifle_Colt727									{ quality = 1; price = 800; };
	class hlc_rifle_Colt727_GL								{ quality = 1; price = 800; };
	class hlc_rifle_bcmjack									{ quality = 1; price = 800; };
	class hlc_rifle_Bushmaster300							{ quality = 1; price = 800; };
	class hlc_rifle_vendimus								{ quality = 1; price = 800; };
	class hlc_rifle_SAMR									{ quality = 1; price = 800; };
	class hlc_rifle_honeybase								{ quality = 1; price = 800; };
	class hlc_rifle_honeybadger								{ quality = 1; price = 800; };
	class hlc_rifle_g3sg1									{ quality = 1; price = 800; };
	class hlc_rifle_psg1									{ quality = 1; price = 800; };
	class hlc_rifle_g3a3									{ quality = 1; price = 800; };
	class hlc_rifle_g3ka4									{ quality = 1; price = 800; };
	class HLC_Rifle_g3ka4_GL								{ quality = 1; price = 800; };
	class hlc_rifle_hk51									{ quality = 1; price = 600; };
	class hlc_rifle_hk53									{ quality = 1; price = 600; };
	class hlc_rifle_M14										{ quality = 1; price = 1200; };
	class hlc_rifle_M21										{ quality = 1; price = 1200; };
	class hlc_rifle_M14DMR									{ quality = 1; price = 1200; };
	class hlc_rifle_m14sopmod								{ quality = 1; price = 1200; };
	class hlc_lmg_M60E4										{ quality = 1; price = 1600; };
	class hlc_lmg_m60										{ quality = 1; price = 1600; };
	class hlc_lmg_minimipara								{ quality = 1; price = 1900; };
	class hlc_lmg_minimi									{ quality = 1; price = 1900; };
	class hlc_lmg_minimi_railed								{ quality = 1; price = 1900; };
	class hlc_lmg_m249para									{ quality = 1; price = 1900; };
	class hlc_lmg_M249E2									{ quality = 1; price = 1900; };
	class hlc_rifle_aug										{ quality = 1; price = 900; };
	class hlc_rifle_auga1_t									{ quality = 1; price = 900; };
	class hlc_rifle_auga1_B									{ quality = 1; price = 900; };
	class hlc_rifle_auga1carb								{ quality = 1; price = 900; };
	class hlc_rifle_auga1carb_t								{ quality = 1; price = 900; };
	class hlc_rifle_auga1carb_b								{ quality = 1; price = 900; };
	class hlc_rifle_aughbar									{ quality = 1; price = 900; };
	class hlc_rifle_aughbar_b								{ quality = 1; price = 900; };
	class hlc_rifle_aughbar_t								{ quality = 1; price = 900; };
	class hlc_rifle_augpara									{ quality = 1; price = 900; };
	class hlc_rifle_augpara_b								{ quality = 1; price = 900; };
	class hlc_rifle_augpara_t								{ quality = 1; price = 900; };
	class hlc_rifle_auga2									{ quality = 1; price = 900; };
	class hlc_rifle_auga2_b									{ quality = 1; price = 900; };
	class hlc_rifle_auga2_t									{ quality = 1; price = 900; };
	class hlc_rifle_auga2carb								{ quality = 1; price = 900; };
	class hlc_rifle_auga2carb_t								{ quality = 1; price = 900; };
	class hlc_rifle_auga2carb_b 							{ quality = 1; price = 900; };
	class hlc_rifle_auga2lsw								{ quality = 1; price = 900; };
	class hlc_rifle_auga2lsw_t								{ quality = 1; price = 900; };
	class hlc_rifle_auga2lsw_b					 			{ quality = 1; price = 900; };
	class hlc_rifle_auga2para								{ quality = 1; price = 900; };
	class hlc_rifle_auga2para_b								{ quality = 1; price = 900; };
	class hlc_rifle_auga2para_t								{ quality = 1; price = 900; };
	class hlc_rifle_augsr									{ quality = 1; price = 900; };
	class hlc_rifle_augsr_b									{ quality = 1; price = 900; };
	class hlc_rifle_augsr_t									{ quality = 1; price = 900; };
	class hlc_rifle_augsrcarb								{ quality = 1; price = 900; };
	class hlc_rifle_augsrcarb_t								{ quality = 1; price = 900; };
	class hlc_rifle_augsrcarb_b								{ quality = 1; price = 900; };
	class hlc_rifle_augsrhbar								{ quality = 1; price = 900; };
	class hlc_rifle_augsrhbar_b								{ quality = 1; price = 900; };
	class hlc_rifle_augsrhbar_t								{ quality = 1; price = 900; };
	class hlc_rifle_auga3									{ quality = 1; price = 900; };
	class hlc_rifle_auga3_bl								{ quality = 1; price = 900; };
	class hlc_rifle_auga3_b									{ quality = 1; price = 900; };
	class hlc_rifle_auga3_GL								{ quality = 1; price = 900; };
	class hlc_rifle_auga3_GL_BL								{ quality = 1; price = 900; };
	class hlc_rifle_auga3_GL_B								{ quality = 1; price = 900; };
	class hlc_rifle_awcovert								{ quality = 1; price = 900; };
	class hlc_rifle_awcovert_BL								{ quality = 1; price = 900; };
	class hlc_rifle_awcovert_FDE							{ quality = 1; price = 900; };
	class hlc_rifle_awmagnum								{ quality = 1; price = 1500; };
	class hlc_rifle_awmagnum_BL								{ quality = 1; price = 1500; };
	class hlc_rifle_awmagnum_FDE							{ quality = 1; price = 1500; };
	class hlc_rifle_awMagnum_FDE_ghillie					{ quality = 1; price = 1500; };
	class hlc_rifle_awMagnum_BL_ghillie						{ quality = 1; price = 1500; };
	class hlc_rifle_awMagnum_OD_ghillie						{ quality = 1; price = 1500; };
	class hlc_rifle_l1a1slr									{ quality = 1; price = 1000; };
	class hlc_rifle_SLR										{ quality = 1; price = 1000; };
	class hlc_rifle_STG58F									{ quality = 1; price = 1000; };
	class hlc_rifle_FAL5061									{ quality = 1; price = 1000; };
	class hlc_rifle_c1A1									{ quality = 1; price = 1000; };
	class hlc_rifle_LAR										{ quality = 1; price = 1000; };
	class hlc_rifle_SLRchopmod								{ quality = 1; price = 1000; };
	class hlc_rifle_falosw									{ quality = 1; price = 1000; };
	class hlc_rifle_osw_GL									{ quality = 1; price = 1000; };
	class hlc_m249_pip1										{ quality = 1; price = 1500; };
	class hlc_m249_pip2										{ quality = 1; price = 1500; };
	class hlc_m249_pip3										{ quality = 1; price = 1500; };
	class hlc_m249_pip4										{ quality = 1; price = 1500; };

	//////////
	//HLCAmmo:
	//////////
	class hlc_10rnd_12g_buck_S12							{ quality = 2; price = 20; };
	class hlc_10rnd_12g_slug_S12							{ quality = 2; price = 20; };
	class hlc_5rnd_300WM_FMJ_AWM							{ quality = 2; price = 20; };
	class hlc_5rnd_300WM_AP_AWM								{ quality = 2; price = 20; };
	class hlc_5rnd_300WM_BTSP_AWM							{ quality = 2; price = 20; };
	class hlc_5rnd_300WM_mk248_AWM							{ quality = 2; price = 20; };
	class hlc_5rnd_300WM_SBT_AWM							{ quality = 2; price = 20; };
	class hlc_20Rnd_762x51_B_G3								{ quality = 2; price = 20; };
	class hlc_20rnd_762x51_T_G3								{ quality = 2; price = 20; };
	class hlc_20Rnd_762x51_B_M14							{ quality = 2; price = 20; };
	class hlc_20rnd_762x51_T_M14							{ quality = 2; price = 20; };
	class hlc_20Rnd_762x51_B_fal							{ quality = 2; price = 20; };
	class hlc_20Rnd_762x51_t_fal							{ quality = 2; price = 20; };
	class hlc_20Rnd_762x51_S_fal							{ quality = 2; price = 20; };
	class hlc_25Rnd_9x19mm_M882_AUG							{ quality = 2; price = 20; };
	class hlc_25Rnd_9x19mm_JHP_AUG							{ quality = 2; price = 20; };
	class hlc_25Rnd_9x19mm_subsonic_AUG						{ quality = 2; price = 20; };
	class 29rnd_300BLK_STANAG								{ quality = 2; price = 20; };
	class 29rnd_300BLK_STANAG_T								{ quality = 2; price = 20; };
	class 29rnd_300BLK_STANAG_S								{ quality = 2; price = 20; };
	class hlc_30Rnd_9x19_B_MP5								{ quality = 2; price = 20; };
	class hlc_30Rnd_9x19_GD_MP5								{ quality = 2; price = 20; };
	class hlc_30Rnd_9x19_SD_MP5								{ quality = 2; price = 20; };
	class hlc_30Rnd_10mm_B_MP5								{ quality = 2; price = 20; };
	class hlc_30Rnd_10mm_JHP_MP5							{ quality = 2; price = 20; };
	class hlc_30rnd_556x45_EPR								{ quality = 2; price = 20; };
	class hlc_30rnd_556x45_SOST								{ quality = 2; price = 20; };
	class hlc_30rnd_556x45_SPR								{ quality = 2; price = 20; };
	class hlc_30Rnd_545x39_B_AK								{ quality = 2; price = 20; };
	class hlc_30Rnd_545x39_T_AK								{ quality = 2; price = 20; };
	class hlc_30Rnd_545x39_EP_AK							{ quality = 2; price = 20; };
	class hlc_30Rnd_762x39_b_ak								{ quality = 2; price = 20; };
	class hlc_30Rnd_762x39_t_ak								{ quality = 2; price = 20; };
	class hlc_30Rnd_556x45_B_AUG							{ quality = 2; price = 20; };
	class hlc_30Rnd_556x45_SOST_AUG							{ quality = 2; price = 20; };
	class hlc_30Rnd_556x45_SPR_AUG							{ quality = 2; price = 20; };
	class hlc_30Rnd_556x45_T_AUG							{ quality = 2; price = 20; };
	class hlc_40Rnd_556x45_B_AUG							{ quality = 2; price = 20; };
	class hlc_40Rnd_556x45_SOST_AUG							{ quality = 2; price = 20; };
	class hlc_40Rnd_556x45_SPR_AUG							{ quality = 2; price = 20; };
	class hlc_45Rnd_545x39_t_rpk							{ quality = 2; price = 30; };
	class hlc_45Rnd_762x39_t_rpk							{ quality = 2; price = 30; };
	class hlc_45Rnd_762x39_m_rpk							{ quality = 2; price = 30; };
	class hlc_50rnd_762x51_M_G3								{ quality = 2; price = 45; };
	class hlc_50rnd_762x51_M_M14							{ quality = 2; price = 45; };
	class hlc_50rnd_762x51_M_FAL							{ quality = 2; price = 45; };
	class hlc_75rnd_762x39_m_rpk							{ quality = 2; price = 40; };
	class hlc_100Rnd_762x51_B_M60E4							{ quality = 2; price = 65; };
	class hlc_100Rnd_762x51_T_M60E4							{ quality = 2; price = 65; };
	class hlc_100Rnd_762x51_M_M60E4							{ quality = 2; price = 20; };
	class hlc_200rnd_556x45_M_SAW							{ quality = 2; price = 75; };
	class hlc_200rnd_556x45_T_SAW							{ quality = 2; price = 75; };
	class hlc_200rnd_556x45_B_SAW							{ quality = 2; price = 75; };

	///////////////
	//HCLExplosive:
	///////////////
	class hlc_VOG25_AK										{ quality = 2; price = 200; };
	class hlc_GRD_White										{ quality = 2; price = 20; };
	class hlc_GRD_red										{ quality = 2; price = 20; };
	class hlc_GRD_green										{ quality = 2; price = 20; };
	class hlc_GRD_blue										{ quality = 2; price = 20; };
	class hlc_GRD_orange									{ quality = 2; price = 20; };
	class hlc_GRD_purple									{ quality = 2; price = 20; };

	/////////////////
	//HLCAttachments:
	/////////////////
	class HLC_Optic_PSO1									{ quality = 1; price = 100; };
	class HLC_Optic_1p29									{ quality = 1; price = 100; };
	class HLC_Optic_ZFSG1									{ quality = 1; price = 100; };
	class hlc_optic_kobra									{ quality = 1; price = 100; };
	class hlc_optic_goshawk									{ quality = 1; price = 100; };
	class hlc_optic_LRT_m14									{ quality = 1; price = 100; };
	class hlc_optic_accupoint_g3							{ quality = 1; price = 100; };
	class hlc_optic_artel_m14								{ quality = 1; price = 100; };
	class hlc_optic_PVS4FAL									{ quality = 1; price = 100; };
	class hlc_optic_suit									{ quality = 1; price = 100; };
	class hlc_muzzle_snds_fal								{ quality = 1; price = 100; };
	class hlc_muzzle_545SUP_AK								{ quality = 1; price = 100; };
	class hlc_muzzle_762SUP_AK								{ quality = 1; price = 100; };
	class hlc_muzzle_556NATO_KAC							{ quality = 1; price = 100; };
	class hlc_muzzle_300blk_KAC								{ quality = 1; price = 100; };
	class hlc_muzzle_snds_HK33								{ quality = 1; price = 100; };
	class hlc_muzzle_snds_G3								{ quality = 1; price = 100; };
	class hlc_muzzle_snds_M14								{ quality = 1; price = 100; };
	class hlc_muzzle_Agendasix								{ quality = 1; price = 100; };
	class hlc_muzzle_Tundra									{ quality = 1; price = 100; };
	class hlc_muzzle_Agendasix10mm							{ quality = 1; price = 100; };
	class hlc_muzzle_snds_AUG								{ quality = 1; price = 100; };
	class hlc_muzzle_snds_a6AUG								{ quality = 1; price = 100; };
	class hlc_barrel_standard								{ quality = 1; price = 100; };
	class hlc_barrel_carbine								{ quality = 1; price = 100; };
	class hlc_barrel_hbar									{ quality = 1; price = 100; };
	class hlc_barrel_9mm									{ quality = 1; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_OldBike 						{ quality = 1; price = 40; };
	class Exile_Bike_MountainBike 					{ quality = 1; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Black					{ quality = 1; price = 750; };
	class Exile_Bike_QuadBike_Blue					{ quality = 1; price = 750; };
	class Exile_Bike_QuadBike_Red					{ quality = 1; price = 750; };
	class Exile_Bike_QuadBike_White					{ quality = 1; price = 750; };
	class Exile_Bike_QuadBike_Nato					{ quality = 1; price = 750; };
	class Exile_Bike_QuadBike_Csat					{ quality = 1; price = 750; };
	class Exile_Bike_QuadBike_Fia					{ quality = 1; price = 750; };
	class Exile_Bike_QuadBike_Guerilla01			{ quality = 1; price = 750; };
	class Exile_Bike_QuadBike_Guerilla02			{ quality = 1; price = 750; };

	///////////////////////////////////////////////////////////////////////////////
	// KARTS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Kart_BluKing					{ quality = 1; price = 500; };
	class Exile_Car_Kart_RedStone					{ quality = 1; price = 500; };
	class Exile_Car_Kart_Vrana						{ quality = 1; price = 500; };
	class Exile_Car_Kart_Green						{ quality = 1; price = 500; };
	class Exile_Car_Kart_Blue						{ quality = 1; price = 500; };
	class Exile_Car_Kart_Orange						{ quality = 1; price = 500; };
	class Exile_Car_Kart_White						{ quality = 1; price = 500; };
	class Exile_Car_Kart_Yellow						{ quality = 1; price = 500; };
	class Exile_Car_Kart_Black						{ quality = 1; price = 500; };

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_Police				{ quality = 1; price = 700; };
	class Exile_Boat_MotorBoat_Orange				{ quality = 1; price = 700; };
	class Exile_Boat_MotorBoat_White				{ quality = 1; price = 700; };

	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_CSAT				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Digital				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Orange				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Blue				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Black				{ quality = 1; price = 500; };

	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_SDV_CSAT						{ quality = 1; price = 1000; };
	class Exile_Boat_SDV_Digital					{ quality = 1; price = 1000; };
	class Exile_Boat_SDV_Grey						{ quality = 1; price = 1000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Green				{ quality = 1; price = 7500; };
	class Exile_Chopper_Hellcat_FIA					{ quality = 1; price = 7500; };

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Green			{ quality = 1; price = 6000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Blue				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Red				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_ION				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_BlueLine			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Digital			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Elliptical		{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Furious			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_GrayWatcher		{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Jeans				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Light				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Shadow			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Sheriff			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Speedy			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Sunset			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Vrana				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Wasp				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Wave				{ quality = 1; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Black								{ quality = 1; price = 15000; };
	class Exile_Chopper_Huron_Green								{ quality = 1; price = 15000; };

	///////////////////////////////////////////////////////////////////////////////
	// Mohawk
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Mohawk_FIA								{ quality = 1; price = 13000; };

	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_CSAT								{ quality = 1; price = 10000; };
	class Exile_Chopper_Orca_Black								{ quality = 1; price = 10000; };
	class Exile_Chopper_Orca_BlackCustom						{ quality = 1; price = 10000; };

	///////////////////////////////////////////////////////////////////////////////
	// Taru
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Transport_CSAT						{ quality = 1; price = 7000; };
	class Exile_Chopper_Taru_Transport_Black					{ quality = 1; price = 7000; };
	
	class Exile_Chopper_Taru_CSAT								{ quality = 1; price = 13000; };
	class Exile_Chopper_Taru_Black								{ quality = 1; price = 13000; };

	class Exile_Chopper_Taru_Covered_CSAT						{ quality = 1; price = 15000; };
	class Exile_Chopper_Taru_Covered_Black						{ quality = 1; price = 15000; };

	///////////////////////////////////////////////////////////////////////////////
	// Cessna
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_Cessna									{ quality = 1; price = 4000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Beige						{ quality = 1; price = 2000; };
	class Exile_Car_Hatchback_Green						{ quality = 1; price = 2000; };
	class Exile_Car_Hatchback_Blue						{ quality = 1; price = 2000; };
	class Exile_Car_Hatchback_BlueCustom				{ quality = 1; price = 2000; };
	class Exile_Car_Hatchback_BeigeCustom				{ quality = 1; price = 2000; };
	class Exile_Car_Hatchback_Yellow					{ quality = 1; price = 2000; };
	class Exile_Car_Hatchback_Grey						{ quality = 1; price = 2000; };
	class Exile_Car_Hatchback_Black						{ quality = 1; price = 2000; };
	class Exile_Car_Hatchback_Dark						{ quality = 1; price = 2000; };
	class Exile_Car_Hatchback_Rusty1					{ quality = 1; price = 2000; };
	class Exile_Car_Hatchback_Rusty2					{ quality = 1; price = 2000; };
	class Exile_Car_Hatchback_Rusty3					{ quality = 1; price = 2000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ikarus
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ikarus_Blue 				{ quality = 1; price = 4000; };
	class Exile_Car_Ikarus_Red 					{ quality = 1; price = 4000; };
	class Exile_Car_Ikarus_Party 				{ quality = 1; price = 4000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Open_Blue			{ quality = 1; price = 5000; };
	class Exile_Car_Ural_Open_Yellow		{ quality = 1; price = 5000; };
	class Exile_Car_Ural_Open_Worker		{ quality = 1; price = 5000; };
	class Exile_Car_Ural_Open_Military		{ quality = 1; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Covered_Blue			{ quality = 1; price = 8000; };
	class Exile_Car_Ural_Covered_Yellow			{ quality = 1; price = 8000; };
	class Exile_Car_Ural_Covered_Worker			{ quality = 1; price = 8000; };
	class Exile_Car_Ural_Covered_Military		{ quality = 1; price = 8000; };

	///////////////////////////////////////////////////////////////////////////////
	// SUVXL
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUVXL_Black 				{ quality = 1; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Lada
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Lada_Green 				{ quality = 1; price = 2000; };
	class Exile_Car_Lada_Taxi 				{ quality = 1; price = 2000; };
	class Exile_Car_Lada_Red 				{ quality = 1; price = 2000; };
	class Exile_Car_Lada_White 				{ quality = 1; price = 2000; };
	class Exile_Car_Lada_Hipster 			{ quality = 1; price = 2000; };

	///////////////////////////////////////////////////////////////////////////////
	// Volha
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Volha_Blue				{ quality = 1; price = 2000; };
	class Exile_Car_Volha_White				{ quality = 1; price = 2000; };
	class Exile_Car_Volha_Black				{ quality = 1; price = 2000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback (Sport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Sport_Red					{ quality = 1; price = 4000; };
	class Exile_Car_Hatchback_Sport_Blue				{ quality = 1; price = 4000; };
	class Exile_Car_Hatchback_Sport_Orange				{ quality = 1; price = 4000; };
	class Exile_Car_Hatchback_Sport_White				{ quality = 1; price = 4000; };
	class Exile_Car_Hatchback_Sport_Beige				{ quality = 1; price = 4000; };
	class Exile_Car_Hatchback_Sport_Green				{ quality = 1; price = 4000; };

	///////////////////////////////////////////////////////////////////////////////
	// HEMMT
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HEMMT 								{ quality = 1; price = 8000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hunter
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hunter 								{ quality = 1; price = 10000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ifrit
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ifrit 								{ quality = 1; price = 9000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Red							{ quality = 1; price = 3000; };
	class Exile_Car_Offroad_Beige						{ quality = 1; price = 3000; };
	class Exile_Car_Offroad_White						{ quality = 1; price = 3000; };
	class Exile_Car_Offroad_Blue						{ quality = 1; price = 3000; };
	class Exile_Car_Offroad_DarkRed						{ quality = 1; price = 3000; };
	class Exile_Car_Offroad_BlueCustom					{ quality = 1; price = 3000; };
	class Exile_Car_Offroad_Guerilla01					{ quality = 1; price = 3000; };
	class Exile_Car_Offroad_Guerilla02					{ quality = 1; price = 3000; };
	class Exile_Car_Offroad_Guerilla03					{ quality = 1; price = 3000; };
	class Exile_Car_Offroad_Guerilla04					{ quality = 1; price = 3000; };
	class Exile_Car_Offroad_Guerilla05					{ quality = 1; price = 3000; };
	class Exile_Car_Offroad_Guerilla06					{ quality = 1; price = 3000; };
	class Exile_Car_Offroad_Guerilla07					{ quality = 1; price = 3000; };
	class Exile_Car_Offroad_Guerilla08					{ quality = 1; price = 3000; };
	class Exile_Car_Offroad_Guerilla09					{ quality = 1; price = 3000; };
	class Exile_Car_Offroad_Guerilla10					{ quality = 1; price = 3000; };
	class Exile_Car_Offroad_Guerilla11					{ quality = 1; price = 3000; };
	class Exile_Car_Offroad_Guerilla12					{ quality = 1; price = 3000; };
	class Exile_Car_Offroad_Rusty1						{ quality = 1; price = 3000; };
	class Exile_Car_Offroad_Rusty2						{ quality = 1; price = 3000; };
	class Exile_Car_Offroad_Rusty3						{ quality = 1; price = 3000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Guerilla01 			{ quality = 1; price = 3500; };
	class Exile_Car_Offroad_Armed_Guerilla02 			{ quality = 1; price = 3500; };
	class Exile_Car_Offroad_Armed_Guerilla03 			{ quality = 1; price = 3500; };
	class Exile_Car_Offroad_Armed_Guerilla04 			{ quality = 1; price = 3500; };
	class Exile_Car_Offroad_Armed_Guerilla05 			{ quality = 1; price = 3500; };
	class Exile_Car_Offroad_Armed_Guerilla06 			{ quality = 1; price = 3500; };
	class Exile_Car_Offroad_Armed_Guerilla07 			{ quality = 1; price = 3500; };
	class Exile_Car_Offroad_Armed_Guerilla08 			{ quality = 1; price = 3500; };
	class Exile_Car_Offroad_Armed_Guerilla09 			{ quality = 1; price = 3500; };
	class Exile_Car_Offroad_Armed_Guerilla10 			{ quality = 1; price = 3500; };
	class Exile_Car_Offroad_Armed_Guerilla11 			{ quality = 1; price = 3500; };
	class Exile_Car_Offroad_Armed_Guerilla12 			{ quality = 1; price = 3500; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Civillian 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Repair_Red 					{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Repair_Beige 				{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Repair_White 				{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Repair_Blue 				{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Repair_DarkRed 				{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Repair_BlueCustom 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Repair_Guerilla01 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Repair_Guerilla02 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Repair_Guerilla03 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Repair_Guerilla04 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Repair_Guerilla05 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Repair_Guerilla06 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Repair_Guerilla07 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Repair_Guerilla08 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Repair_Guerilla09 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Repair_Guerilla10 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Repair_Guerilla11 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Repair_Guerilla12 			{ quality = 1; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Strider
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Strider 							{ quality = 1; price = 14000; };

	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Red 							{ quality = 1; price = 4000; };
	class Exile_Car_SUV_Black 							{ quality = 1; price = 4000; };
	class Exile_Car_SUV_Grey 							{ quality = 1; price = 4000; };
	class Exile_Car_SUV_Orange 							{ quality = 1; price = 4000; };

	///////////////////////////////////////////////////////////////////////////////
	// Tempest
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tempest 							{ quality = 1; price = 8300; };

	///////////////////////////////////////////////////////////////////////////////
	// Van 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Black 							{ quality = 1; price = 2000; };
	class Exile_Car_Van_White 							{ quality = 1; price = 2000; };
	class Exile_Car_Van_Red 							{ quality = 1; price = 2000; };
	class Exile_Car_Van_Guerilla01 						{ quality = 1; price = 2000; };
	class Exile_Car_Van_Guerilla02 						{ quality = 1; price = 2000; };
	class Exile_Car_Van_Guerilla03 						{ quality = 1; price = 2000; };
	class Exile_Car_Van_Guerilla04 						{ quality = 1; price = 2000; };
	class Exile_Car_Van_Guerilla05 						{ quality = 1; price = 2000; };
	class Exile_Car_Van_Guerilla06 						{ quality = 1; price = 2000; };
	class Exile_Car_Van_Guerilla07 						{ quality = 1; price = 2000; };
	class Exile_Car_Van_Guerilla08 						{ quality = 1; price = 2000; };

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Black 						{ quality = 1; price = 7000; };
	class Exile_Car_Van_Box_White 						{ quality = 1; price = 7000; };
	class Exile_Car_Van_Box_Red 						{ quality = 1; price = 7000; };
	class Exile_Car_Van_Box_Guerilla01 					{ quality = 1; price = 7000; };
	class Exile_Car_Van_Box_Guerilla02 					{ quality = 1; price = 7000; };
	class Exile_Car_Van_Box_Guerilla03 					{ quality = 1; price = 7000; };
	class Exile_Car_Van_Box_Guerilla04 					{ quality = 1; price = 7000; };
	class Exile_Car_Van_Box_Guerilla05 					{ quality = 1; price = 7000; };
	class Exile_Car_Van_Box_Guerilla06 					{ quality = 1; price = 7000; };
	class Exile_Car_Van_Box_Guerilla07 					{ quality = 1; price = 7000; };
	class Exile_Car_Van_Box_Guerilla08 					{ quality = 1; price = 7000; };

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Black 						{ quality = 1; price = 10000; };
	class Exile_Car_Van_Fuel_White 						{ quality = 1; price = 10000; };
	class Exile_Car_Van_Fuel_Red 						{ quality = 1; price = 10000; };
	class Exile_Car_Van_Fuel_Guerilla01 				{ quality = 1; price = 10000; };
	class Exile_Car_Van_Fuel_Guerilla02 				{ quality = 1; price = 10000; };
	class Exile_Car_Van_Fuel_Guerilla03 				{ quality = 1; price = 10000; };

	///////////////////////////////////////////////////////////////////////////////
	// Zamak
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Zamak 								{ quality = 1; price = 15000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// CUP Vehicles
	///////////////////////////////////////////////////////////////////////////////
	class CUP_B_AV8B 									{ quality = 1; price = 200000; };
	class CUP_B_AV8B_Deepstrike 						{ quality = 1; price = 200000; };
	class CUP_B_AV8B_FFAR_19 							{ quality = 1; price = 200000; };
	class CUP_B_AV8B_Heavy 								{ quality = 1; price = 200000; };
	class CUP_B_AV8B_Hydra19 							{ quality = 1; price = 200000; };
	class CUP_B_AV8B_LGB 								{ quality = 1; price = 200000; };
	class CUP_B_CH53E_USMC 								{ quality = 1; price = 30000; };
	class CUP_B_MV22_USMC								{ quality = 1; price = 8000; };
	class CUP_BAF_Jackal2_GMG_D							{ quality = 1; price = 12000; };
	class CUP_BAF_Jackal2_GMG_W							{ quality = 1; price = 12000; };
	class CUP_BAF_Jackal2_L2A1_D						{ quality = 1; price = 12000; };
	class CUP_BAF_Jackal2_L2A1_W						{ quality = 1; price = 12000; };
	class CUP_B_LAV25M240_USMC							{ quality = 1; price = 40000; };
	class CUP_B_LAV25_HQ_USMC							{ quality = 1; price = 22000; };
	class CUP_B_LAV25_USMC								{ quality = 1; price = 40000; };
	class CUP_B_A10_AT_USA       						{ quality = 1; price = 300000; };
	class CUP_B_A10_CAS_USA         					{ quality = 1; price = 300000; };
	class CUP_B_AAV_USMC         						{ quality = 1; price = 40000; };
	class CUP_B_AH1Z         							{ quality = 1; price = 180000; };
	class CUP_B_AH1Z_7RndHydra         					{ quality = 1; price = 180000; };
	class CUP_B_AH1Z_AT         						{ quality = 1; price = 180000; };
	class CUP_B_AH1Z_NOAA         						{ quality = 1; price = 180000; };
	class CUP_B_AH1_AT_BAF         						{ quality = 1; price = 180000; };
	class CUP_B_AH1_BAF         						{ quality = 1; price = 180000; };
	class CUP_B_AH1_ES_BAF         						{ quality = 1; price = 180000; };
	class CUP_B_AH1_MR_BAF         						{ quality = 1; price = 180000; };
	class CUP_B_AH1_NO_BAF         						{ quality = 1; price = 180000; };
	class CUP_B_AH64D_AT_USA         					{ quality = 1; price = 180000; };
	class CUP_B_AH64D_ES_USA         					{ quality = 1; price = 180000; };
	class CUP_B_AH64D_MR_USA         					{ quality = 1; price = 180000; };
	class CUP_B_AH64D_NO_USA       						{ quality = 1; price = 180000; };
	class CUP_B_AH64D_USA         						{ quality = 1; price = 180000; };
	class CUP_B_AW159_Armed_BAF         				{ quality = 1; price = 30000; };
	class CUP_B_AW159_Unarmed_BAF         				{ quality = 1; price = 15000; };
	class CUP_B_BM21_CDF         						{ quality = 1; price = 350000; };
	class CUP_B_BRDM2_ATGM_CDF         					{ quality = 1; price = 25000; };
	class CUP_B_BRDM2_CDF         						{ quality = 1; price = 22500; };
	class CUP_B_BRDM2_HQ_CDF         					{ quality = 1; price = 20000; };
	class CUP_B_C130J_USMC         						{ quality = 1; price = 10000; };
	class CUP_B_CH47F_GB         						{ quality = 1; price = 15000; };
	class CUP_B_CH47F_USA         						{ quality = 1; price = 15000; };
	class CUP_B_Dingo_Des         						{ quality = 1; price = 35000; };
	class CUP_B_Dingo_GL_Des         					{ quality = 1; price = 35000; };
	class CUP_B_Dingo_GL_Wdl         					{ quality = 1; price = 35000; };
	class CUP_B_Dingo_Wdl         						{ quality = 1; price = 35000; };
	class CUP_B_HMMWV_AGS_GPK_ACR         				{ quality = 1; price = 22000; };
	class CUP_B_HMMWV_Ambulance_ACR         			{ quality = 1; price = 15000; };
	class CUP_B_HMMWV_Ambulance_USA         			{ quality = 1; price = 15000; };
	class CUP_B_HMMWV_Ambulance_USMC         			{ quality = 1; price = 15000; };
	class CUP_B_HMMWV_Avenger_USA         				{ quality = 1; price = 35000; };
	class CUP_B_HMMWV_Avenger_USMC         				{ quality = 1; price = 35000; };
	class CUP_B_HMMWV_Crows_M2_USA         				{ quality = 1; price = 25000; };
	class CUP_B_HMMWV_Crows_MK19_USA        			{ quality = 1; price = 25000; };
	class CUP_B_HMMWV_DSHKM_GPK_ACR         			{ quality = 1; price = 25000; };
	class CUP_B_HMMWV_M1114_USMC         				{ quality = 1; price = 22500; };
	class CUP_B_HMMWV_M2_GPK_ACR         				{ quality = 1; price = 21000; };
	class CUP_B_HMMWV_M2_GPK_USA         				{ quality = 1; price = 21000; };
	class CUP_B_HMMWV_M2_USA         					{ quality = 1; price = 21000; };
	class CUP_B_HMMWV_M2_USMC         					{ quality = 1; price = 21000; };
	class CUP_B_HMMWV_MK19_USA         					{ quality = 1; price = 22000; };
	class CUP_B_HMMWV_MK19_USMC         				{ quality = 1; price = 22000; };
	class CUP_B_HMMWV_SOV_USA         					{ quality = 1; price = 14000; };
	class CUP_B_HMMWV_TOW_USA         					{ quality = 1; price = 25000; };
	class CUP_B_HMMWV_TOW_USMC         					{ quality = 1; price = 25000; };
	class CUP_B_HMMWV_Terminal_USA         				{ quality = 1; price = 15000; };
	class CUP_B_HMMWV_Transport_USA         			{ quality = 1; price = 15000; };
	class CUP_B_HMMWV_Unarmed_USA         				{ quality = 1; price = 15000; };
	class CUP_B_HMMWV_Unarmed_USMC         				{ quality = 1; price = 15000; };
	class CUP_B_LR_Ambulance_CZ_D         				{ quality = 1; price = 4000; };
	class CUP_B_LR_Ambulance_CZ_W         				{ quality = 1; price = 4000; };
	class CUP_B_LR_Ambulance_GB_D         				{ quality = 1; price = 4000; };
	class CUP_B_LR_Ambulance_GB_W         				{ quality = 1; price = 4000; };
	class CUP_B_LR_MG_CZ_W         						{ quality = 1; price = 17000; };
	class CUP_B_LR_MG_GB_W         						{ quality = 1; price = 17000; };
	class CUP_B_LR_Special_CZ_W         				{ quality = 1; price = 16000; };
	class CUP_B_LR_Special_Des_CZ_D         			{ quality = 1; price = 16000; };
	class CUP_B_LR_Transport_CZ_D     				    { quality = 1; price = 4000; };
	class CUP_B_LR_Transport_CZ_W                       { quality = 1; price = 4000; };
	class CUP_B_LR_Transport_GB_D                       { quality = 1; price = 4000; };
	class CUP_B_LR_Transport_GB_W                       { quality = 1; price = 4000; };
	class CUP_B_M1030                                   { quality = 1; price = 500; };
	class CUP_B_M113_Med_USA                            { quality = 1; price = 15000; };
	class CUP_B_M113_USA                                { quality = 1; price = 19000; };
	class CUP_B_M163_USA                                { quality = 1; price = 40000; };
	class CUP_B_M1A1_DES_USMC                           { quality = 1; price = 130000; };
	class CUP_B_M1A1_DES_US_Army                        { quality = 1; price = 130000; };
	class CUP_B_M1A1_Woodland_USMC                      { quality = 1; price = 130000; };
	class CUP_B_M1A1_Woodland_US_Army                   { quality = 1; price = 130000; };
	class CUP_B_M1A2_TUSK_MG_DES_USMC                   { quality = 1; price = 150000; };
	class CUP_B_M1A2_TUSK_MG_DES_US_Army                { quality = 1; price = 150000; };
	class CUP_B_M1A2_TUSK_MG_USMC                       { quality = 1; price = 150000; };
	class CUP_B_M1A2_TUSK_MG_US_Army                    { quality = 1; price = 150000; };
	class CUP_B_M270_DPICM_USA                          { quality = 1; price = 450000; };
	class CUP_B_M270_DPICM_USMC                         { quality = 1; price = 450000; };
	class CUP_B_M270_HE_USA                             { quality = 1; price = 450000; };
	class CUP_B_M270_HE_USMC                            { quality = 1; price = 450000; };
	class CUP_B_MH60S_FFV_USMC                          { quality = 1; price = 20000; };
	class CUP_B_MH60S_USMC                              { quality = 1; price = 20000; };
	class CUP_B_Mi171Sh_ACR                             { quality = 1; price = 150000; };
	class CUP_B_Mi171Sh_Unarmed_ACR                     { quality = 1; price = 20000; };
	class CUP_B_Mi17_CDF                                { quality = 1; price = 18000; };
	class CUP_B_Mi17_medevac_CDF                        { quality = 1; price = 18000; };
	class CUP_B_Mi24_D_CDF                              { quality = 1; price = 180000; };
	class CUP_B_Mi35_CZ                                 { quality = 1; price = 180000; };
	class CUP_B_Su25_CDF                                { quality = 1; price = 200000; };
	class CUP_B_T72_CDF                                 { quality = 1; price = 130000; };
	class CUP_B_UAZ_AGS30_ACR                           { quality = 1; price = 18500; };
	class CUP_B_UAZ_AGS30_CDF                           { quality = 1; price = 18500; };
	class CUP_B_UAZ_MG_ACR                              { quality = 1; price = 8000; };
	class CUP_B_UAZ_MG_CDF                              { quality = 1; price = 8000; };
	class CUP_B_UAZ_Open_ACR                            { quality = 1; price = 8000; };
	class CUP_B_UAZ_Open_CDF                            { quality = 1; price = 8000; };
	class CUP_B_UAZ_SPG9_ACR                            { quality = 1; price = 19000; };
	class CUP_B_UAZ_SPG9_CDF                            { quality = 1; price = 19000; };
	class CUP_B_UAZ_Unarmed_ACR                         { quality = 1; price = 5000; };
	class CUP_B_UAZ_Unarmed_CDF                         { quality = 1; price = 5000; };
	class CUP_B_UH1Y_GUNSHIP_F                          { quality = 1; price = 18000; };
	class CUP_B_UH1Y_MEV_F                              { quality = 1; price = 9000; };
	class CUP_B_UH1Y_UNA_F                              { quality = 1; price = 9000; };
	class CUP_B_UH60L_FFV_US                            { quality = 1; price = 15000; };
	class CUP_B_UH60L_US                                { quality = 1; price = 17000; };
	class CUP_B_UH60L_Unarmed_FFV_MEV_US                { quality = 1; price = 11000; };
	class CUP_B_UH60L_Unarmed_FFV_US                    { quality = 1; price = 11000; };
	class CUP_B_UH60L_Unarmed_US                        { quality = 1; price = 13000; };
	class CUP_B_UH60M_FFV_US                            { quality = 1; price = 15000; };
	class CUP_B_UH60M_US                                { quality = 1; price = 17000; };
	class CUP_B_UH60M_Unarmed_FFV_MEV_US                { quality = 1; price = 11000; };
	class CUP_B_UH60M_Unarmed_FFV_US                    { quality = 1; price = 11000; };
	class CUP_B_UH60M_Unarmed_US                        { quality = 1; price = 12000; };
	class CUP_B_Ural_CDF                                { quality = 1; price = 10000; };
	class CUP_B_Ural_Empty_CDF                          { quality = 1; price = 10000; };
	class CUP_B_Ural_Open_CDF                           { quality = 1; price = 10000; };
	class CUP_B_Ural_Reammo_CDF                         { quality = 1; price = 10000; };
	class CUP_B_Ural_Refuel_CDF                         { quality = 1; price = 10000; };
	class CUP_B_Ural_Repair_CDF                         { quality = 1; price = 20000; };
	class CUP_B_Ural_ZU23_CDF                           { quality = 1; price = 40000; };
	class CUP_B_ZSU23_CDF                               { quality = 1; price = 120000; };
	class CUP_C_C47_CIV                                 { quality = 1; price = 8000; };
	class CUP_C_DC3_CIV                                 { quality = 1; price = 8000; };
	class CUP_C_Datsun                                  { quality = 1; price = 1000; };
	class CUP_C_Datsun_4seat                            { quality = 1; price = 1000; };
	class CUP_C_Datsun_Covered                          { quality = 1; price = 1000; };
	class CUP_C_Datsun_Plain                            { quality = 1; price = 1000; };
	class CUP_C_Datsun_Tubeframe                        { quality = 1; price = 1000; };
	class CUP_C_LR_Transport_CTK                        { quality = 1; price = 4000; };
	class CUP_C_Mi17_Civilian_RU                        { quality = 1; price = 16000; };
	class CUP_C_UAZ_Open_TK_CIV                         { quality = 1; price = 4000; };
	class CUP_C_UAZ_Unarmed_TK_CIV                      { quality = 1; price = 4000; };
	class CUP_C_Ural_Civ_01                             { quality = 1; price = 5000; };
	class CUP_C_Ural_Civ_02                             { quality = 1; price = 5000; };
	class CUP_C_Ural_Civ_03                             { quality = 1; price = 5000; };
	class CUP_C_Ural_Open_Civ_01                        { quality = 1; price = 5000; };
	class CUP_C_Ural_Open_Civ_02                        { quality = 1; price = 5000; };
	class CUP_C_Ural_Open_Civ_03                        { quality = 1; price = 5000; };
	class CUP_I_BRDM2_ATGM_NAPA                         { quality = 1; price = 20000; };
	class CUP_I_BRDM2_ATGM_TK_Gue                       { quality = 1; price = 20000; };
	class CUP_I_BRDM2_HQ_NAPA                           { quality = 1; price = 20000; };
	class CUP_I_BRDM2_HQ_TK_Gue                         { quality = 1; price = 20000; };
	class CUP_I_BRDM2_HQ_UN                             { quality = 1; price = 20000; };
	class CUP_I_BRDM2_NAPA                              { quality = 1; price = 20000; };
	class CUP_I_BRDM2_TK_Gue                            { quality = 1; price = 20000; };
	class CUP_I_BRDM2_UN                                { quality = 1; price = 20000; };
	class CUP_I_Datsun_PK                               { quality = 1; price = 2000; };
	class CUP_I_Datsun_PK_Random                        { quality = 1; price = 2000; };
	class CUP_I_Datsun_PK_TK                            { quality = 1; price = 2000; };
	class CUP_I_Datsun_PK_TK_Random                     { quality = 1; price = 2000; };
	class CUP_I_M113_Med_RACS                           { quality = 1; price = 13000; };
	class CUP_I_M113_Med_UN                             { quality = 1; price = 13000; };
	class CUP_I_M113_RACS                               { quality = 1; price = 16000; };
	class CUP_I_M113_UN                                 { quality = 1; price = 13000; };
	class CUP_I_M163_RACS                               { quality = 1; price = 13000; };
	class CUP_I_Mi17_UN                                 { quality = 1; price = 25000; };
	class CUP_I_Mi24_D_ION                              { quality = 1; price = 160000; };
	class CUP_I_Mi24_D_UN                               { quality = 1; price = 160000; };
	class CUP_I_T55_TK_GUE                              { quality = 1; price = 130000; };
	class CUP_I_T72_NAPA                                { quality = 1; price = 130000; };
	class CUP_I_T72_RACS                                { quality = 1; price = 130000; };
	class CUP_I_UAZ_AGS30_UN                            { quality = 1; price = 2000; };
	class CUP_I_UAZ_MG_UN                               { quality = 1; price = 10000; };
	class CUP_I_UAZ_Open_UN                             { quality = 1; price = 19000; };
	class CUP_I_UAZ_SPG9_UN                             { quality = 1; price = 19000; };
	class CUP_I_UAZ_Unarmed_UN                          { quality = 1; price = 2000; };
	class CUP_I_UH60L_FFV_RACS                          { quality = 1; price = 20000; };
	class CUP_I_UH60L_RACS                              { quality = 1; price = 20000; };
	class CUP_I_UH60L_Unarmed_FFV_MEV_Racs              { quality = 1; price = 16000; };
	class CUP_I_UH60L_Unarmed_FFV_Racs                  { quality = 1; price = 16000; };
	class CUP_I_UH60L_Unarmed_RACS                      { quality = 1; price = 16000; };
	class CUP_I_Ural_Empty_UN                           { quality = 1; price = 2000; };
	class CUP_I_Ural_Reammo_UN                          { quality = 1; price = 20000; };
	class CUP_I_Ural_Repair_UN                          { quality = 1; price = 20000; };
	class CUP_I_Ural_UN                                 { quality = 1; price = 2000; };
	class CUP_I_Ural_ZU23_NAPA                          { quality = 1; price = 20000; };
	class CUP_I_Ural_ZU23_TK_Gue                        { quality = 1; price = 20000; };
	class CUP_Merlin_HC3                                { quality = 1; price = 30000; };
	class CUP_Merlin_HC3_FFV                            { quality = 1; price = 30000; };
	class CUP_Merlin_HC3_MED                            { quality = 1; price = 30000; };
	class CUP_O_BM21_CHDKZ                              { quality = 1; price = 350000; };
	class CUP_O_BM21_RU                                 { quality = 1; price = 350000; };
	class CUP_O_BM21_SLA                                { quality = 1; price = 350000; };
	class CUP_O_BM21_TKA                                { quality = 1; price = 350000; };
	class CUP_O_BRDM2_ATGM_CHDKZ                        { quality = 1; price = 27000; };
	class CUP_O_BRDM2_ATGM_SLA                          { quality = 1; price = 27000; };
	class CUP_O_BRDM2_ATGM_TKA                          { quality = 1; price = 27000; };
	class CUP_O_BRDM2_CHDKZ                             { quality = 1; price = 27000; };
	class CUP_O_BRDM2_HQ_CHDKZ                          { quality = 1; price = 27000; };
	class CUP_O_BRDM2_HQ_SLA                            { quality = 1; price = 27000; };
	class CUP_O_BRDM2_HQ_TKA                            { quality = 1; price = 27000; };
	class CUP_O_BRDM2_SLA                               { quality = 1; price = 27000; };
	class CUP_O_BRDM2_TKA                               { quality = 1; price = 27000; };
	class CUP_O_BTR60_TK                                { quality = 1; price = 13000; };
	class CUP_O_BTR90_HQ_RU                             { quality = 1; price = 14000; };
	class CUP_O_BTR90_RU                                { quality = 1; price = 17000; };
	class CUP_O_Datsun_PK                               { quality = 1; price = 2000; };
	class CUP_O_Datsun_PK_Random                        { quality = 1; price = 2000; };
	class CUP_O_Ka50_AA_SLA                             { quality = 1; price =80000; };
	class CUP_O_Ka50_SLA                                { quality = 1; price = 80000; };
	class CUP_O_LR_Ambulance_TKA                        { quality = 1; price = 4000; };
	class CUP_O_LR_MG_TKA                               { quality = 1; price = 17000; };
	class CUP_O_LR_MG_TKM                               { quality = 1; price = 17000; };
	class CUP_O_LR_SPG9_TKA                             { quality = 1; price = 19000; };
	class CUP_O_LR_SPG9_TKM                             { quality = 1; price = 19000; };
	class CUP_O_LR_Transport_TKA                        { quality = 1; price = 4000; };
	class CUP_O_LR_Transport_TKM                        { quality = 1; price = 4000; };
	class CUP_O_M113_Med_TKA                            { quality = 1; price = 16000; };
	class CUP_O_M113_TKA                                { quality = 1; price = 16000; };
	class CUP_O_Mi17_TK                                 { quality = 1; price = 11000; };
	class CUP_O_Mi24_D_TK                               { quality = 1; price = 100000; };
	class CUP_O_Mi24_P_RU                               { quality = 1; price = 100000; };
	class CUP_O_Mi24_V_RU                               { quality = 1; price = 100000; };
	class CUP_O_Mi8_CHDKZ                               { quality = 1; price = 11000; };
	class CUP_O_Mi8_RU                                  { quality = 1; price = 20000; };
	class CUP_O_Mi8_SLA_1                               { quality = 1; price = 35000; };
	class CUP_O_Mi8_SLA_2                               { quality = 1; price = 35000; };
	class CUP_O_Mi8_medevac_CHDKZ                       { quality = 1; price = 16000; };
	class CUP_O_Mi8_medevac_RU                          { quality = 1; price = 16000; };
	class CUP_O_Su25_RU_1                               { quality = 1; price = 200000; };
	class CUP_O_Su25_RU_2                               { quality = 1; price = 200000; };
	class CUP_O_Su25_RU_3                               { quality = 1; price = 200000; };
	class CUP_O_Su25_SLA                                { quality = 1; price = 200000; };
	class CUP_O_Su25_TKA                                { quality = 1; price = 200000; };
	class CUP_O_T55_TK                                  { quality = 1; price = 130000; };
	class CUP_O_T72_CHDKZ                               { quality = 1; price = 130000; };
	class CUP_O_T72_RU                                  { quality = 1; price = 130000; };
	class CUP_O_T72_SLA                                 { quality = 1; price = 130000; };
	class CUP_O_T72_TKA                                 { quality = 1; price = 130000; };
	class CUP_O_UAZ_AGS30_CHDKZ                         { quality = 1; price = 18500; };
	class CUP_O_UAZ_AGS30_RU                            { quality = 1; price = 18500; };
	class CUP_O_UAZ_AGS30_TKA                           { quality = 1; price = 18500; };
	class CUP_O_UAZ_MG_CHDKZ                            { quality = 1; price = 17000; };
	class CUP_O_UAZ_MG_RU                               { quality = 1; price = 17000; };
	class CUP_O_UAZ_MG_TKA                              { quality = 1; price = 17000; };
	class CUP_O_UAZ_Open_CHDKZ                          { quality = 1; price = 8000; };
	class CUP_O_UAZ_Open_RU                             { quality = 1; price = 8000; };
	class CUP_O_UAZ_Open_TKA                            { quality = 1; price = 8000; };
	class CUP_O_UAZ_SPG9_CHDKZ                          { quality = 1; price = 19000; };
	class CUP_O_UAZ_SPG9_RU                             { quality = 1; price = 19000; };
	class CUP_O_UAZ_SPG9_TKA                            { quality = 1; price = 19000; };
	class CUP_O_UAZ_Unarmed_CHDKZ                       { quality = 1; price = 8000; };
	class CUP_O_UAZ_Unarmed_RU                          { quality = 1; price = 8000; };
	class CUP_O_UAZ_Unarmed_TKA                         { quality = 1; price = 8000; };
	class CUP_O_Ural_CHDKZ                              { quality = 1; price = 10000; };
	class CUP_O_Ural_Empty_CHDKZ                        { quality = 1; price = 10000; };
	class CUP_O_Ural_Empty_RU                           { quality = 1; price = 10000; };
	class CUP_O_Ural_Empty_SLA                          { quality = 1; price = 10000; };
	class CUP_O_Ural_Empty_TKA                          { quality = 1; price = 10000; };
	class CUP_O_Ural_Open_CHDKZ                         { quality = 1; price = 10000; };
	class CUP_O_Ural_Open_RU                            { quality = 1; price = 10000; };
	class CUP_O_Ural_Open_SLA                           { quality = 1; price = 10000; };
	class CUP_O_Ural_Open_TKA                           { quality = 1; price = 10000; };
	class CUP_O_Ural_RU                                 { quality = 1; price = 10000; };
	class CUP_O_Ural_Reammo_CHDKZ                       { quality = 1; price = 15000; };
	class CUP_O_Ural_Reammo_RU                          { quality = 1; price = 15000; };
	class CUP_O_Ural_Reammo_SLA                         { quality = 1; price = 15000; };
	class CUP_O_Ural_Reammo_TKA                         { quality = 1; price = 15000; };
	class CUP_O_Ural_Refuel_CHDKZ                       { quality = 1; price = 10000; };
	class CUP_O_Ural_Refuel_RU                          { quality = 1; price = 10000; };
	class CUP_O_Ural_Refuel_SLA                         { quality = 1; price = 10000; };
	class CUP_O_Ural_Refuel_TKA                         { quality = 1; price = 10000; };
	class CUP_O_Ural_Repair_CHDKZ                       { quality = 1; price = 20000; };
	class CUP_O_Ural_Repair_RU                          { quality = 1; price = 10000; };
	class CUP_O_Ural_Repair_SLA                         { quality = 1; price = 10000; };
	class CUP_O_Ural_Repair_TKA                         { quality = 1; price = 10000; };
	class CUP_O_Ural_SLA                                { quality = 1; price = 10000; };
	class CUP_O_Ural_TKA                                { quality = 1; price = 10000; };
	class CUP_O_Ural_ZU23_CHDKZ                         { quality = 1; price = 20000; };
	class CUP_O_Ural_ZU23_RU                            { quality = 1; price = 20000; };
	class CUP_O_Ural_ZU23_SLA                           { quality = 1; price = 20000; };
	class CUP_O_Ural_ZU23_TKA                           { quality = 1; price = 20000; };
	class CUP_O_Ural_ZU23_TKM                           { quality = 1; price = 20000; };
	class CUP_O_ZSU23_ChDKZ                             { quality = 1; price = 120000; };
	class CUP_O_ZSU23_SLA                               { quality = 1; price = 120000; };
	class CUP_O_ZSU23_TK                                { quality = 1; price = 120000; };
	class O_Plane_CAS_02_F			                    { quality = 1; price = 200000; };
	class B_APC_Wheeled_01_cannon_F				        { quality = 1; price = 50000; };
	class I_APC_Wheeled_03_cannon_F				        { quality = 1; price = 50000; };
	class CUP_I_SUV_Armored_ION					        { quality = 1; price = 20000; };
	class B_MBT_O1_TUSK_F 			     		  	  	{ quality = 1; price = 200000; };
	class B_MBT_01_cannon_F 							{ quality = 1; price = 180000; };
	class B_APC_Wheeled_02_rcws_F 						{ quality = 1; price = 140000; };
};

class CfgExileCustomCode 
{
	/*
		You can overwrite every single file of our code without touching it.
		To do that, add the function name you want to overwrite plus the 
		path to your custom file here. If you wonder how this works, have a
		look at our bootstrap/fn_preInit.sqf function.

		Simply add the following scheme here:

		<Function Name of Exile> = "<New File Name>";

		Example:

		ExileClient_util_fusRoDah = "myaddon\myfunction.sqf";
	*/
	//MDB Server Customs
	ExileClient_object_item_craft = "custom\overwrites\exile_client\ExileClient_object_item_craft.sqf";
	ExileServer_object_tree_network_chopTreeRequest = "custom\overwrites\exile_server\ExileServer_object_tree_network_chopTreeRequest.sqf";
	ExileClient_gui_wasteDumpDialog_show = "custom\overwrites\exile_client\ExileClient_gui_wasteDumpDialog_show.sqf";
	ExileClient_gui_traderDialog_updateInventoryDropdown = "custom\overwrites\exile_client\ExileClient_gui_traderDialog_updateInventoryDropdown.sqf";
	
	//xm8Apps Customs
	ExileClient_gui_xm8_slide_apps_onOpen = "xm8Apps\ExileClient_gui_xm8_slide_apps_onOpen.sqf";
};
class CfgExileHUD
{
	class ShortItemNames
	{
		SmokeShell[] 						= {"WHITE", 	"SMOKE"};
		1Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};
		3Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};

		SmokeShellBlue[] 					= {"BLUE", 		"SMOKE"};
		1Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};
		3Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};

		SmokeShellGreen[] 					= {"GREEN", 	"SMOKE"};
		1Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};
		3Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};

		SmokeShellOrange[] 					= {"ORANGE", 	"SMOKE"};
		1Rnd_SmokeOrange_Grenade_shell[]	= {"ORANGE", 	"SMOKE"};
		3Rnd_SmokeOrange_Grenade_shell[] 	= {"ORANGE", 	"SMOKE"};

		SmokeShellPurple[] 					= {"PURPLE", 	"SMOKE"};
		1Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};
		3Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};

		SmokeShellRed[] 					= {"RED", 		"SMOKE"};
		1Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
		3Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
				
		SmokeShellYellow[] 					= {"YELLOW", 	"SMOKE"};
		1Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
		3Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
				
		UGL_FlareCIR_F[] 					= {"IR", 		"FLARE"};
		3Rnd_UGL_FlareCIR_F[] 				= {"IR", 		"FLARE"};

		UGL_FlareGreen_F[] 					= {"GREEN", 	"FLARE"};
		3Rnd_UGL_FlareGreen_F[] 			= {"GREEN", 	"FLARE"};

		UGL_FlareRed_F[] 					= {"RED", 		"FLARE"};
		3Rnd_UGL_FlareRed_F[] 				= {"RED", 		"FLARE"};

		UGL_FlareWhite_F[] 					= {"WHITE", 	"FLARE"};
		3Rnd_UGL_FlareWhite_F[] 			= {"WHITE", 	"FLARE"};

		UGL_FlareYellow_F[] 				= {"YELLOW", 	"FLARE"};
		3Rnd_UGL_FlareYellow_F[] 			= {"YELLOW", 	"FLARE"};

		Chemlight_blue[] 					= {"BLUE", 		"LIGHT"};
		Chemlight_green[] 					= {"GREEN", 	"LIGHT"};
		Chemlight_red[] 					= {"RED", 		"LIGHT"};
		Chemlight_yellow[] 					= {"YELLOW", 	"LIGHT"};

		1Rnd_HE_Grenade_shell[] 			= {"40MM"};
		3Rnd_HE_Grenade_shell[] 			= {"40MM"};

		O_IR_Grenade[] 						= {"IR"};
		I_IR_Grenade[] 						= {"IR"};
		B_IR_Grenade[] 						= {"IR"};

		HandGrenade[] 						= {"RGO"};
		MiniGrenade[] 						= {"RGN"};

		Exile_Item_ZipTie[]					= {"ZIP", "TIE"};
	};
};
class CfgExileMusic
{
	Ambient[] = {"ExileTrack03","ExileTrack04"};
	Combat[] = {"ExileTrack06","ExileTrack07"};
	Intro[] = {"ExileTrack02","ExileTrack03"};
};
class CfgExileParty 
{
	showESP = 1;
	allow3DMarkers = 1;
};
class CfgFlags 
{
	class USA
	{
		name = "USA";
		texture = "\A3\Data_F\Flags\flag_us_co.paa";
		uid = "";
	};
};
class ExileAbstractAction
{
	title = "";
	condition = "true";
	action = "";
	priority = 1.5;
	showWindow = false;
};

/**
 * Sort this by probability of occurence to speed things up a bit
 */
class CfgInteractionMenus
{
	class Car 
	{
		targetType = 2;
		target = "Car";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !ExilePlayerInSafezone && ((locked ExileClientInteractionObject) != 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_Repair";
			};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
		};
	};

	class Tank 
	{
		targetType = 2;
		target = "Tank";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !ExilePlayerInSafezone && ((locked ExileClientInteractionObject) != 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_Repair";
			};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
		};
	};

	class Air
	{
		target = "Air";
		targetType = 2;

		class Actions
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && ((locked ExileClientInteractionObject) != 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_Repair";
			};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			class RotateLeft: ExileAbstractAction
			{
				title = "Rotate Left";	
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,-15] call ExileClient_object_vehicle_rotate";
			};

			class RotateRight: ExileAbstractAction
			{
				title = "Rotate Right";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,15] call ExileClient_object_vehicle_rotate";
			};
		};
	};

	class Safe
	{
		targetType = 2;
		target = "Exile_Container_Safe";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Pack : ExileAbstractAction
			{
				title = "Pack";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_container_pack";
			};

			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_Object_lock_SetPin";
			};
		};
	};

	class Laptop
	{
		targetType = 2;
		target = "Exile_Construction_Laptop_Static";

		class Actions
		{
			class CameraSystem: ExileAbstractAction
			{
				title = "CCTV Access";
				condition = "((ExileClientInteractionObject animationPhase 'LaptopLidRotation') >= 0.5)";
				action = "_this call ExileClient_gui_baseCamera_show";
			};
		};
	};

	class SupplyBox
	{
		targetType = 2;
		target = "Exile_Container_SupplyBox";

		class Actions
		{
			class Mount: ExileAbstractAction
			{
				title = "Mount";
				condition = "isNull (attachedTo ExileClientInteractionObject)";
				action = "_this call ExileClient_object_supplyBox_mount";
			};

			class Install: ExileAbstractAction
			{
				title = "Install";
				condition = "isNull (attachedTo ExileClientInteractionObject)";
				action = "_this call ExileClient_object_supplyBox_install";
			};

			class Unmount: ExileAbstractAction
			{
				title = "Unmount";
				condition = "!(isNull (attachedTo ExileClientInteractionObject))";
				action = "_this call ExileClient_object_supplyBox_unmount";
			};
		};
	};

	class Construction
	{
		targetType = 2;
		target = "Exile_Construction_Abstract_Static";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Picks up the construction so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "true";
				action = "_this spawn ExileClient_object_construction_move";
			};

			// Removes the construction. Does not refund anything YET!
			class Deconstruct: ExileAbstractAction
			{
				title = "Remove";
				condition = "true";
				action = "_this spawn ExileClient_object_construction_deconstruct";
			};

			class AddALock : ExileAbstractAction
			{
				title = "Add a Lock";
				condition = "call ExileClient_object_construction_lockAddShow";
				action = "_this spawn ExileClient_object_construction_lockAdd";
			};

			class Upgrade : ExileAbstractAction
			{
				title = "Upgrade";
				condition = "call ExileClient_object_construction_upgradeShow";
				action = "_this call ExileClient_object_construction_upgrade";
			};

		};
	};

	/*
		Tent, Storage crate etc.
	*/
	class Container 
	{
		targetType = 2;
		target = "Exile_Container_Abstract";

		class Actions 
		{
			class Pack 
			{
				title = "Pack";
				condition = "true";
				action = "_this spawn ExileClient_object_container_pack";
			};
		};
	};

	class Flag
	{
		targetType = 2;
		target = "Exile_Construction_Flag_Static";

		class Actions
		{
			/*
			class Manage : ExileAbstractAction
			{
				title = "Manage";
				condition = "true";
				action = "_this call ExileClient_gui_baseManagement_event_show";
			};
			*/
			class Upgrade: ExileAbstractAction
			{
				title = "Upgrade";
				condition = "true";
				action = "_this call ExileClient_gui_upgradeterritoryDialog_request";
			};
		};
	};

	class Boat 
	{
		targetType = 2;
		target = "Ship";

		class Actions
		{
			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_Repair";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			// Pushes a boat into look direction to move into water
			class Push: ExileAbstractAction
			{
				title = "Fus Ro Dah!";
				condition = "((crew ExileClientInteractionObject) isEqualTo [])";
				action = "_this call ExileClient_object_vehicle_push";
			};
		};
	};

	class Bikes
	{
		targetType = 2;
		target = "Bicycle";

		class Actions
		{
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "true";
				action = "_this call ExileClient_object_vehicle_flip";
			};
		};
	};

	class Player 
	{
		targetType = 2;
		target = "Exile_Unit_Player";

		class Actions 
		{
			class Free: ExileAbstractAction
			{
				title = "Free";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_free";
			};
			
			class Search: ExileAbstractAction
			{
				title = "Search Gear";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_searchGear";
			};

			class Identify: ExileAbstractAction
			{
				title = "Identify Body";
				condition = "!(alive ExileClientInteractionObject)";
				action = "_this call ExileClient_object_player_identifyBody";
			};
		};
	};
};
/**
 * Classname is used for reference
 * name is displayed in crafting requirements
 * models is used for crafting and interaction menus
 */
class CfgInteractionModels
{
	class WaterSource
	{
		name = "Water tanks, barrels, coolers or pumps";
		models[] = 	
		{
			"barrelwater_f", 
			"barrelwater_grey_f",
			"waterbarrel_f",
			"watertank_f",
			"stallwater_f",
			"waterpump_01_f",
			"water_source_f"
		};
	};

	class CleanWaterSource
	{
		name = "Water cooler";
		models[] = 	
		{
			"watercooler"
		};
	};

	class WorkBench
	{
		name = "Work Bench";
		models[] = 
		{
			"workstand_f.p3d"
		};
	};

	class WoodSource
	{
		name = "Trees";
		models[] = 
		{
			" t_",
			" bo_t_",

			// A2 trees
            " str_",
            " Smrk_",
            " les_",
            " brg_",
			"jablon",
            "palm_",
            "banana_"
			
		};
	};

	class BushSource
	{
		name = "Bushes";
		models[] = {" b_"};
	};

	class StoneSource
	{
		name = "Stones, stone walls or rocks";
		models[] = 
		{
			// We are using find() so this should match everything that is out of stone/rock
			"stone",
			"Stone",
			"Rock",
			"rock",
			"cobble",
			"Cobble",
			"sea_wall_f.p3d"
		};
	};

	// TODO: Add https://community.bistudio.com/wikidata/images/thumb/6/60/Arma3_CfgVehicles_Land_Tank_rust_F.jpg/150px-Arma3_CfgVehicles_Land_Tank_rust_F.jpg
	class FuelSource
	{
		name = "Fuel pumps, stations or barrels";
		models[] = 
		{
			"fuelstation_feed_f.p3d",
			"metalbarrel_f.p3d",
			"flexibletank_01_f.p3d",
			"fs_feed_f.p3d"
		};	
	};

	class Wrecks
	{
		name = "Wrecks";
		models[] = 
		{
			"wreck_"
/*			
			"wreck_bmp2_f.p3d",
			"wreck_brdm2_f.p3d",
			"wreck_car2_f.p3d",
			"wreck_car3_f.p3d",
			"wreck_car_f.p3d",
			"wreck_cardismantled_f.p3d",
			"wreck_hmmwv_f.p3d",
			"wreck_hunter_f.p3d",
			"wreck_offroad2_f.p3d",
			"wreck_offroad_f.p3d",
			"wreck_skodovka_f.p3d",
			"wreck_slammer_f.p3d",
			"wreck_slammer_hull_f.p3d",
			"wreck_slammer_turret_f.p3d",
			"wreck_t72_hull_f.p3d",
			"wreck_t72_turret_f.p3d",
			"wreck_truck_dropside_f.p3d",
			"wreck_truck_f.p3d",
			"wreck_uaz_f.p3d",
			"wreck_ural_f.p3d"
			"wreck_van_f.p3d",
			*/
		};
	};

	class Trash
	{
		name = "Trash";
		models[] = 
		{
			"trash",
			"garbage",
			"crabcages_f.p3d",
			"fishinggear",
			"junkpile_f.p3d",
			"wheeliebin_01_f.p3d"
/*
			"barreltrash_f.p3d",
			"barreltrash_grey_f.p3d",
			"crabcages_f.p3d",
			"fishinggear_01_f.p3d",
			"fishinggear_02_f.p3d",
			"garbage_square3_f.p3d",
			"garbage_square5_f.p3d",
			"garbagebags_f.p3d",
			"garbagebarrel_01_f.p3d",
			"garbagecontainer_closed_f.p3d",
			"garbagecontainer_open_f.p3d",
			"garbagepallet_f.p3d",
			"garbagewashingmachine_f.p3d",
			"junkpile_f.p3d",
			"wheeliebin_01_f.p3d"
*/
		};
	};
};
class CfgPlayer 
{
	// In minutes ammount of time it takes to go from 100 - 0 if stationary
	hungerDecay = 90;
	thirstDecay = 60;

	// Damage taken form 0 (health||thirst)/sec
	healthDecay = 5.0;

	// Health regen if over BOTH
	thirstRegen = 90;
	hungerRegen = 90;

	// IF above meet recover HP%/MIN
	recoveryPerMinute = 2;

	// Set custom aim precision coefficient for weapon sway
	// https://community.bistudio.com/wiki/Arma_3_Stamina
	// Set to -1 if you want to use Arma 3 default value
	// setCustomAimCoef
	customAimCoefficient = 0.5;

	// 0 or 1
	enableFatigue = 0;
	enableStamina = 0;
};
class CfgTerritories
{
	// Base Cost / Radius
	// Level 1 is allways for Pop Tabs, >= 2 for Respect
	prices[] = 
	{
		// Purchase Price 		Radius 		Number of Objects
		{5000,					15,			30 					}, // Level 1
		{10000,					30,			60 					}, // Level 2 
		{15000,					45,			90 					}, // Level 3
		{20000,					60,			120					}, // Level 4
		{25000,					75,			150					}, // Level 5
		{30000,					90,			180					}, // Level 6
		{35000,					105,		210					}, // Level 7
		{40000,					120,		240					}, // Level 8
		{45000,					135,		270					}, // Level 9
		{50000,					150,		300					}  // Level 10
	};

	// A shortcut of the above maximum radius
	maximumRadius = 150;

	// The above * 2 plus coverving the 20m you can move while placing things
	minimumDistanceToOtherTerritories = 325; 

	// Maximum number of territories a player can own
	maximumNumberOfTerritoriesPerPlayer = 2;

	/**
	 * Defines the minimum distance to safe zones / trader cities where players
	 * cannot build territories
	 */
	minimumDistanceToTraderZones = 1000;

	/**
	 * Defines the minimum distance to spawn zones where players
	 * cannot build territories
	 */
	minimumDistanceToSpawnZones = 1000;

	// Amount of pop tabs or respect per object to pay
	popTabAmountPerObject = 10;
	respectAmountPerObject = 5;
};
class CfgTraderCategories 
{
	class Community
	{
		name = "Community Items";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community2
	{
		name = "Community Items 2";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community3
	{
		name = "Community Items 3";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community4
	{
		name = "Community Items 4";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community5
	{
		name = "Community Items 5";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community6
	{
		name = "Community Items 6";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community7
	{
		name = "Community Items 7";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community8
	{
		name = "Community Items 8";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community9
	{
		name = "Community Items 9";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community10
	{
		name = "Community Items 10";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Uniforms
	{
		name = "Uniforms";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			"U_C_Journalist",
			"U_C_Poloshirt_blue",
			"U_C_Poloshirt_burgundy",
			"U_C_Poloshirt_salmon",
			"U_C_Poloshirt_stripped",
			"U_C_Poloshirt_tricolour",
			"U_C_Poor_1",
			"U_C_Poor_2",
			"U_C_Poor_shorts_1",
			"U_C_Scientist",
			"U_OrestesBody",
			"U_Rangemaster",
			"U_NikosAgedBody",
			"U_NikosBody",
			"U_Competitor",
			"U_B_CombatUniform_mcam",
			"U_B_CombatUniform_mcam_tshirt",
			"U_B_CombatUniform_mcam_vest",
			"U_B_CombatUniform_mcam_worn",
			"U_B_CTRG_1",
			"U_B_CTRG_2",
			"U_B_CTRG_3",
			"U_I_CombatUniform",
			"U_I_CombatUniform_shortsleeve",
			"U_I_CombatUniform_tshirt",
			"U_I_OfficerUniform",
			"U_O_CombatUniform_ocamo",
			"U_O_CombatUniform_oucamo",
			"U_O_OfficerUniform_ocamo",
			"U_B_SpecopsUniform_sgg",
			"U_O_SpecopsUniform_blk",
			"U_O_SpecopsUniform_ocamo",
			"U_I_G_Story_Protagonist_F",
			"Exile_Uniform_Woodland",
			"U_C_HunterBody_grn",
			"U_IG_Guerilla1_1",
			"U_IG_Guerilla2_1",
			"U_IG_Guerilla2_2",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla3_1",
			"U_BG_Guerilla2_1",
			"U_IG_Guerilla3_2",
			"U_BG_Guerrilla_6_1",
			"U_BG_Guerilla1_1",
			"U_BG_Guerilla2_2",
			"U_BG_Guerilla2_3",
			"U_BG_Guerilla3_1",
			"U_BG_leader",
			"U_IG_leader",
			"U_I_G_resistanceLeader_F",
			"U_B_FullGhillie_ard",
			"U_B_FullGhillie_lsh",
			"U_B_FullGhillie_sard",
			"U_B_GhillieSuit",
			"U_I_FullGhillie_ard",
			"U_I_FullGhillie_lsh",
			"U_I_FullGhillie_sard",
			"U_I_GhillieSuit",
			"U_O_FullGhillie_ard",
			"U_O_FullGhillie_lsh",
			"U_O_FullGhillie_sard",
			"U_O_GhillieSuit",
			"U_I_Wetsuit",
			"U_O_Wetsuit",
			"U_B_Wetsuit",
			"U_B_survival_uniform",
			"U_B_HeliPilotCoveralls",
			"U_I_HeliPilotCoveralls",
			"U_B_PilotCoveralls",
			"U_I_pilotCoveralls",
			"U_O_PilotCoveralls"
		};
	};

	class TRYK_Uniforms
	{
		name = "TRYK Uniforms";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			"TRYK_HRP_UCP",
			"TRYK_HRP_USMC",
			"TRYK_HRP_khk",
			"TRYK_U_B_OD_OD_CombatUniform",
			"TRYK_U_B_OD_OD_R_CombatUniform",
			"TRYK_U_B_TANTAN_CombatUniform",
			"TRYK_U_B_TANTAN_R_CombatUniform",
			"TRYK_U_B_BLKBLK_CombatUniform",
			"TRYK_U_B_BLKBLK_R_CombatUniform",
			"TRYK_U_B_GRYOCP_CombatUniform",
			"TRYK_U_B_GRYOCP_R_CombatUniformTshirt",
			"TRYK_U_B_TANOCP_CombatUniform",
			"TRYK_U_B_TANOCP_R_CombatUniformTshirt",
			"TRYK_U_B_BLKOCP_CombatUniform",
			"TRYK_U_B_BLKOCP_R_CombatUniformTshirt",
			"TRYK_U_B_BLKTAN_CombatUniform",
			"TRYK_U_B_BLKTANR_CombatUniformTshirt",
			"TRYK_U_B_ODTAN_CombatUniform",
			"TRYK_U_B_ODTANR_CombatUniformTshirt",
			"TRYK_U_B_GRTAN_CombatUniform",
			"TRYK_U_B_GRTANR_CombatUniformTshirt",
			"TRYK_U_B_wood_CombatUniform",
			"TRYK_U_B_woodR_CombatUniformTshirt",
			"TRYK_U_B_wood3c_CombatUniform",
			"TRYK_U_B_wood3c_CombatUniformTshirt",
			"TRYK_U_B_MARPAT_WOOD_CombatUniform",
			"TRYK_U_B_MARPAT_WOOD_CombatUniformTshirt",
			"TRYK_U_B_WOOD_MARPAT_CombatUniform",
			"TRYK_U_B_WOOD_MARPAT_CombatUniformTshirt",
			"TRYK_U_B_woodtan_CombatUniform",
			"TRYK_U_B_woodtanR_CombatUniformTshirt",
			"TRYK_U_B_JSDF_CombatUniform",
			"TRYK_U_B_JSDF_CombatUniformTshirt",
			"TRYK_U_B_3CD_Delta_BDU",
			"TRYK_U_B_3CD_Delta_BDUTshirt",
			"TRYK_U_B_3CD_Ranger_BDU",
			"TRYK_U_B_3CD_Ranger_BDUTshirt",
			"TRYK_U_B_3CD_BLK_BDUTshirt",
			"TRYK_U_B_3CD_BLK_BDUTshirt2",
			"TRYK_U_B_ACU",
			"TRYK_U_B_ACUTshirt",
			"TRYK_U_B_MARPAT_Wood",
			"TRYK_U_B_MARPAT_Wood_Tshirt",
			"TRYK_U_B_MARPAT_Desert",
			"TRYK_U_B_MARPAT_Desert_Tshirt",
			"TRYK_U_B_MARPAT_Desert2",
			"TRYK_U_B_MARPAT_Desert2_Tshirt",
			"TRYK_U_B_3c",
			"TRYK_U_B_3cr",
			"TRYK_U_B_Sage_Tshirt",
			"TRYK_U_B_BLK3CD",
			"TRYK_U_B_BLK3CD_Tshirt",
			"TRYK_U_B_BLK",
			"TRYK_U_B_BLK_Tshirt",
			"TRYK_U_B_BLKTAN",
			"TRYK_U_B_BLKTAN_Tshirt",
			"TRYK_U_B_ODTAN",
			"TRYK_U_B_ODTAN_Tshirt",
			"TRYK_U_B_BLK_OD",
			"TRYK_U_B_BLK_OD_Tshirt",
			"TRYK_U_B_C01_Tsirt",
			"TRYK_U_B_C02_Tsirt",
			"TRYK_U_B_OD_BLK",
			"TRYK_U_B_OD_BLK_2",
			"TRYK_U_B_BLK_TAN_1",
			"TRYK_U_B_BLK_TAN_2",
			"TRYK_U_B_wh_tan_Rollup_CombatUniform",
			"TRYK_U_B_wh_OD_Rollup_CombatUniform",
			"TRYK_U_B_wh_blk_Rollup_CombatUniform",
			"TRYK_U_B_BLK_tan_Rollup_CombatUniform",
			"TRYK_U_B_BLK_OD_Rollup_CombatUniform",
			"TRYK_U_B_NATO_UCP_GRY_CombatUniform",
			"TRYK_U_B_NATO_UCP_GRY_R_CombatUniform",
			"TRYK_U_B_NATO_UCP_CombatUniform",
			"TRYK_U_B_NATO_UCP_R_CombatUniform",
			"TRYK_U_B_NATO_OCP_c_BLK_CombatUniform",
			"TRYK_U_B_NATO_OCP_BLK_c_R_CombatUniform",
			"TRYK_U_B_NATO_OCP_BLK_CombatUniform",
			"TRYK_U_B_NATO_OCP_BLK_R_CombatUniform",
			"TRYK_U_B_NATO_OCPD_CombatUniform",
			"TRYK_U_B_NATO_OCPD_R_CombatUniform",
			"TRYK_U_B_NATO_OCP_CombatUniform",
			"TRYK_U_B_NATO_OCP_R_CombatUniform",
			"TRYK_U_B_AOR1_Rollup_CombatUniform",
			"TRYK_U_B_AOR2_Rollup_CombatUniform",
			"TRYK_U_B_MTP_CombatUniform",
			"TRYK_U_B_MTP_R_CombatUniform",
			"TRYK_U_B_MTP_BLK_CombatUniform",
			"TRYK_U_B_MTP_BLK_R_CombatUniform",
			"TRYK_U_B_Woodland",
			"TRYK_U_B_Woodland_Tshirt",
			"TRYK_U_B_WDL_GRY_CombatUniform",
			"TRYK_U_B_WDL_GRY_R_CombatUniform",
			"TRYK_U_B_ARO1_GR_CombatUniform",
			"TRYK_U_B_ARO1_GR_R_CombatUniform",
			"TRYK_U_B_ARO1_GRY_CombatUniform",
			"TRYK_U_B_ARO1_GRY_R_CombatUniform",
			"TRYK_U_B_ARO1_CombatUniform",
			"TRYK_U_B_ARO1R_CombatUniform",
			"TRYK_U_B_ARO1_BLK_CombatUniform",
			"TRYK_U_B_ARO1_BLK_R_CombatUniform",
			"TRYK_U_B_ARO1_CBR_CombatUniform",
			"TRYK_U_B_ARO1_CBR_R_CombatUniform",
			"TRYK_U_B_ARO2_CombatUniform",
			"TRYK_U_B_ARO2R_CombatUniform",
			"TRYK_U_B_AOR2_BLK_CombatUniform",
			"TRYK_U_B_AOR2_BLK_R_CombatUniform",
			"TRYK_U_B_AOR2_OD_CombatUniform",
			"TRYK_U_B_AOR2_OD_R_CombatUniform",
			"TRYK_U_B_AOR2_GRY_CombatUniform",
			"TRYK_U_B_AOR2_GRY_R_CombatUniform",
			"TRYK_U_B_Snow_CombatUniform",
			"TRYK_U_B_Snowt",
			"TRYK_U_B_Denim_T_WH",
			"TRYK_U_B_Denim_T_BK",
			"TRYK_U_B_BLK_T_WH",
			"TRYK_U_B_BLK_T_BK",
			"TRYK_U_B_RED_T_BR",
			"TRYK_U_B_Denim_T_BG_WH",
			"TRYK_U_B_Denim_T_BG_BK",
			"TRYK_U_B_BLK_T_BG_WH",
			"TRYK_U_B_BLK_T_BG_BK",
			"TRYK_U_B_RED_T_BG_BR",
			"TRYK_U_B_fleece",
			"TRYK_U_B_fleece_UCP",
			"TRYK_U_B_UCP_PCUs",
			"TRYK_U_B_GRY_PCUs",
			"TRYK_U_B_Wood_PCUs",
			"TRYK_U_B_PCUs",
			"TRYK_U_B_UCP_PCUs_R",
			"TRYK_U_B_GRY_PCUs_R",
			"TRYK_U_B_Wood_PCUs_R",
			"TRYK_U_B_PCUs_R",
			"TRYK_U_B_PCUGs",
			"TRYK_U_B_PCUODs",
			"TRYK_U_B_PCUGs_gry",
			"TRYK_U_B_PCUGs_BLK",
			"TRYK_U_B_PCUGs_OD",
			"TRYK_U_B_PCUGs_gry_R",
			"TRYK_U_B_PCUGs_BLK_R",
			"TRYK_U_B_PCUGs_OD_R",
			"TRYK_U_Bts_GRYGRY_PCUs",
			"TRYK_U_Bts_UCP_PCUs",
			"TRYK_U_Bts_Wood_PCUs",
			"TRYK_U_Bts_PCUs",
			"TRYK_U_pad_j",
			"TRYK_U_pad_j_blk",
			"TRYK_U_pad_hood_Cl",
			"TRYK_U_pad_hood_Cl_blk",
			"TRYK_U_pad_hood_tan",
			"TRYK_U_pad_hood_Blk",
			"TRYK_U_pad_hood_CSATBlk",
			"TRYK_U_pad_hood_Blod",
			"TRYK_U_pad_hood_odBK",
			"TRYK_U_pad_hood_BKT2",
			"TRYK_hoodie_Blk",
			"TRYK_hoodie_FR",
			"TRYK_hoodie_Wood",
			"TRYK_hoodie_3c",
			"TRYK_T_camo_tan",
			"TRYK_T_camo_3c",
			"TRYK_T_camo_Wood",
			"TRYK_T_camo_wood_marpat",
			"TRYK_T_camo_Desert_marpat",
			"TRYK_T_camo_3c_BG",
			"TRYK_T_camo_Wood_BG",
			"TRYK_T_camo_wood_marpat_BG",
			"TRYK_T_camo_desert_marpat_BG",
			"TRYK_T_PAD",
			"TRYK_T_OD_PAD",
			"TRYK_T_TAN_PAD",
			"TRYK_T_BLK_PAD",
			"TRYK_T_T2_PAD",
			"TRYK_T_CSAT_PAD",
			"TRYK_U_nohoodPcu_gry",
			"TRYK_U_hood_nc",
			"TRYK_U_hood_mc",
			"TRYK_U_denim_hood_blk",
			"TRYK_U_denim_hood_mc",
			"TRYK_U_denim_hood_3c",
			"TRYK_U_denim_hood_nc",
			"TRYK_U_denim_jersey_blu",
			"TRYK_U_denim_jersey_blk",
			"TRYK_shirts_PAD",
			"TRYK_shirts_OD_PAD",
			"TRYK_shirts_TAN_PAD",
			"TRYK_shirts_BLK_PAD",
			"TRYK_shirts_PAD_BK",
			"TRYK_shirts_OD_PAD_BK",
			"TRYK_shirts_TAN_PAD_BK",
			"TRYK_shirts_BLK_PAD_BK",
			"TRYK_shirts_PAD_BLW",
			"TRYK_shirts_OD_PAD_BLW",
			"TRYK_shirts_TAN_PAD_BLW",
			"TRYK_shirts_BLK_PAD_BLW",
			"TRYK_shirts_PAD_YEL",
			"TRYK_shirts_OD_PAD_YEL",
			"TRYK_shirts_TAN_PAD_YEL",
			"TRYK_shirts_BLK_PAD_YEL",
			"TRYK_shirts_PAD_RED2",
			"TRYK_shirts_OD_PAD_RED2",
			"TRYK_shirts_TAN_PAD_RED2",
			"TRYK_shirts_BLK_PAD_RED2",
			"TRYK_shirts_PAD_BLU3",
			"TRYK_shirts_OD_PAD_BLU3",
			"TRYK_shirts_TAN_PAD_BLU3",
			"TRYK_shirts_BLK_PAD_BLU3",
			"TRYK_shirts_DENIM_R",
			"TRYK_shirts_DENIM_BL",
			"TRYK_shirts_DENIM_BK",
			"TRYK_shirts_DENIM_WH",
			"TRYK_shirts_DENIM_BWH",
			"TRYK_shirts_DENIM_RED2",
			"TRYK_shirts_DENIM_WHB",
			"TRYK_shirts_DENIM_ylb",
			"TRYK_shirts_DENIM_od",
			"TRYK_shirts_DENIM_R_Sleeve",
			"TRYK_shirts_DENIM_BL_Sleeve",
			"TRYK_shirts_DENIM_BK_Sleeve",
			"TRYK_shirts_DENIM_WH_Sleeve",
			"TRYK_shirts_DENIM_BWH_Sleeve",
			"TRYK_shirts_DENIM_RED2_Sleeve",
			"TRYK_shirts_DENIM_WHB_Sleeve",
			"TRYK_shirts_DENIM_ylb_Sleeve",
			"TRYK_shirts_DENIM_od_Sleeve",
			"TRYK_shirts_PAD_BL",
			"TRYK_shirts_OD_PAD_BL",
			"TRYK_shirts_TAN_PAD_BL",
			"TRYK_shirts_BLK_PAD_BL",
			"TRYK_U_taki_wh",
			"TRYK_U_taki_COY",
			"TRYK_U_taki_BL",
			"TRYK_U_taki_BLK",
			"TRYK_U_Bts_PCUGs",
			"TRYK_U_Bts_PCUODs",
			"TRYK_U_taki_G_WH",
			"TRYK_U_taki_G_COY",
			"TRYK_U_taki_G_BL",
			"TRYK_U_taki_G_BLK",
			"TRYK_U_B_PCUHs",
			"TRYK_U_B_PCUGHs",
			"TRYK_U_B_PCUODHs",
			"TRYK_B_USMC_R",
			"TRYK_B_USMC_R_ROLL",
			"TRYK_ZARATAKI",
			"TRYK_ZARATAKI2",
			"TRYK_ZARATAKI3",
			"TRYK_B_TRYK_UCP_T",
			"TRYK_B_TRYK_3C_T",
			"TRYK_B_TRYK_MTP_T",
			"TRYK_B_TRYK_OCP_T",
			"TRYK_B_TRYK_OCP_D_T",
			"TRYK_DMARPAT_T",
			"TRYK_C_AOR2_T",
			"TRYK_U_B_Sage_T",
			"TRYK_U_B_Wood_T",
			"TRYK_U_B_BLTAN_T",
			"TRYK_U_B_BLOD_T",
			"TRYK_OVERALL_flesh",
			"TRYK_OVERALL_nok_flesh",
			"TRYK_OVERALL_SAGE_BLKboots",
			"TRYK_OVERALL_SAGE_BLKboots_nk_blk",
			"TRYK_OVERALL_SAGE_BLKboots_nk",
			"TRYK_OVERALL_SAGE_BLKboots_nk_blk2",
			"TRYK_OVERALL_SAGE",
			"TRYK_SUITS_BLK_F",
			"TRYK_SUITS_BR_F",
			"TRYK_H_ghillie_top_headless3glass",
			"TRYK_shoulder_armor_BK",
			"TRYK_shoulder_armor_OD",
			"TRYK_shoulder_armor_CY",
			"TRYK_H_ghillie_top_headless3",
			"TRYK_U_B_PCUHsW",
			"TRYK_U_B_PCUHsW2",
			"TRYK_U_B_PCUHsW3",
			"TRYK_U_B_PCUHsW3nh",
			"TRYK_U_B_PCUHsW4",
			"TRYK_U_B_PCUHsW5",
			"TRYK_U_B_PCUHsW6"
		};
	};

	class Vests
	{
		name = "Vests";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\vest_ca.paa";
		items[] = 
		{
			"V_Press_F",
			"V_Rangemaster_belt",
			"V_TacVest_blk",
			"V_TacVest_blk_POLICE",
			"V_TacVest_brn",
			"V_TacVest_camo",
			"V_TacVest_khk",
			"V_TacVest_oli",
			"V_TacVestCamo_khk",
			"V_TacVestIR_blk",
			"V_I_G_resistanceLeader_F",
			"V_BandollierB_blk",
			"V_BandollierB_cbr",
			"V_BandollierB_khk",
			"V_BandollierB_oli",
			"V_BandollierB_rgr",
			"V_Chestrig_blk",
			"V_Chestrig_khk",
			"V_Chestrig_oli",
			"V_Chestrig_rgr",
			"V_HarnessO_brn",
			"V_HarnessO_gry",
			"V_HarnessOGL_brn",
			"V_HarnessOGL_gry",
			"V_HarnessOSpec_brn",
			"V_HarnessOSpec_gry",
			"V_PlateCarrier1_blk",
			"V_PlateCarrier1_rgr",
			"V_PlateCarrier2_rgr",
			"V_PlateCarrier3_rgr",
			"V_PlateCarrierGL_blk",
			"V_PlateCarrierGL_mtp",
			"V_PlateCarrierGL_rgr",
			"V_PlateCarrierH_CTRG",
			"V_PlateCarrierIA1_dgtl",
			"V_PlateCarrierIA2_dgtl",
			"V_PlateCarrierIAGL_dgtl",
			"V_PlateCarrierIAGL_oli",
			"V_PlateCarrierL_CTRG",
			"V_PlateCarrierSpec_blk",
			"V_PlateCarrierSpec_mtp",
			"V_PlateCarrierSpec_rgr"
		};
	};
	
	class TRYK_Vests
	{
		name = "TRYK Vests";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\vest_ca.paa";
		items[] =
		{
			"TRYK_Hrp_vest_ucp",
			"TRYK_Hrp_vest_od",
			"TRYK_V_PlateCarrier_JSDF",
			"TRYK_V_ArmorVest_AOR1",
			"TRYK_V_ArmorVest_AOR2",
			"TRYK_V_ArmorVest_coyo",
			"TRYK_V_ArmorVest_Brown",
			"TRYK_V_ArmorVest_CBR",
			"TRYK_V_ArmorVest_khk",
			"TRYK_V_ArmorVest_rgr",
			"TRYK_V_ArmorVest_green",
			"TRYK_V_ArmorVest_tan",
			"TRYK_V_ArmorVest_Delta",
			"TRYK_V_ArmorVest_Ranger",
			"TRYK_V_ArmorVest_AOR1_2",
			"TRYK_V_ArmorVest_AOR2_2",
			"TRYK_V_ArmorVest_coyo2",
			"TRYK_V_ArmorVest_Brown2",
			"TRYK_V_ArmorVest_cbr2",
			"TRYK_V_ArmorVest_khk2",
			"TRYK_V_ArmorVest_rgr2",
			"TRYK_V_ArmorVest_green2",
			"TRYK_V_ArmorVest_tan2",
			"TRYK_V_ArmorVest_Delta2",
			"TRYK_V_ArmorVest_Ranger2",
			"TRYK_V_PlateCarrier_blk",
			"TRYK_V_PlateCarrier_oli",
			"TRYK_V_PlateCarrier_coyo",
			"TRYK_V_PlateCarrier_wood",
			"TRYK_V_PlateCarrier_ACU",
			"TRYK_V_TacVest_coyo",
			"TRYK_V_harnes_blk_L",
			"TRYK_V_harnes_od_L",
			"TRYK_V_harnes_TAN_L",
			"TRYK_V_PlateCarrier_blk_L",
			"TRYK_V_PlateCarrier_wood_L",
			"TRYK_V_PlateCarrier_ACU_L",
			"TRYK_V_PlateCarrier_coyo_L",
			"TRYK_V_ChestRig_L",
			"TRYK_V_ChestRig",
			"TRYK_V_Bulletproof",
			"TRYK_V_Bulletproof_BLK",
			"TRYK_V_Bulletproof_BL",
			"TRYK_V_IOTV_BLK",
			"TRYK_V_tacv1M_BK",
			"TRYK_V_tacv1MLC_BK",
			"TRYK_V_tacv1",
			"TRYK_V_tacv1_CY",
			"TRYK_V_tacv1_BK",
			"TRYK_V_tacv1_P_BK",
			"TRYK_V_tacv1_SHERIFF_BK",
			"TRYK_V_tacv1_FBI_BK",
			"TRYK_V_tacv1LP_BK",
			"TRYK_V_tacv1LSRF_BK",
			"TRYK_V_tacv1LC_BK",
			"TRYK_V_tacv1LC_CY",
			"TRYK_V_tacv1LC_OD",
			"TRYK_V_tacv1LC_FBI_BK",
			"TRYK_V_tacv1LC_SRF_BK",
			"TRYK_V_tacv1LC_SRF_OD",
			"TRYK_V_tacv1LC_P_BK",
			"TRYK_V_PlateCarrier_POLICE",
			"TRYK_V_ArmorVest_HRT_B",
			"TRYK_V_ArmorVest_HRT_OD",
			"TRYK_V_ArmorVest_HRT2_B",
			"TRYK_V_ArmorVest_HRT2_OD",
			"TRYK_V_ArmorVest_Winter",
			"TRYK_V_Sheriff_BA_OD",
			"TRYK_V_tacv10_BK",
			"TRYK_V_tacv10_OD",
			"TRYK_V_tacv10_TN",
			"TRYK_V_tacv10LC_BK",
			"TRYK_V_tacv10LC_OD",
			"TRYK_V_tacv10LC_TN",
			"TRYK_V_tacv1L_BK",
			"TRYK_V_tacv1L_OD",
			"TRYK_V_tacv1L_CY",
			"TRYK_V_tacv1LC_FBI2_BK",
			"TRYK_V_tacv1LC_SRF2_BK",
			"TRYK_V_tacv1LC_SRF2_OD",
			"TRYK_V_tacv1LC_P2_BK",
			"TRYK_V_tacv1_MSL_BK",
			"TRYK_V_tacv1_MSL_NV",
			"TRYK_V_tacv1LMSL_BK",
			"TRYK_V_tacv1LMSL_NV",
			"TRYK_V_tacv1LC_MSL_BK",
			"TRYK_V_tacv1LC_MSL_NV",
			"TRYK_V_tacSVD_BK",
			"TRYK_V_tacSVD_OD",
			"TRYK_V_Sheriff_BA_TL",
			"TRYK_V_Sheriff_BA_TBL",
			"TRYK_V_Sheriff_BA_TCL",
			"TRYK_V_Sheriff_BA_TL2",
			"TRYK_V_Sheriff_BA_TBL2",
			"TRYK_V_Sheriff_BA_TCL2",
			"TRYK_V_Sheriff_BA_T",
			"TRYK_V_Sheriff_BA_TB",
			"TRYK_V_Sheriff_BA_T2",
			"TRYK_V_Sheriff_BA_TB2",
			"TRYK_V_Sheriff_BA_T3",
			"TRYK_V_Sheriff_BA_TB3",
			"TRYK_V_Sheriff_BA_T4",
			"TRYK_V_Sheriff_BA_TB4",
			"TRYK_V_Sheriff_BA_T5",
			"TRYK_V_Sheriff_BA_TB5",
			"TRYK_V_Sheriff_BA_TBL3_BK",
			"TRYK_V_Sheriff_BA_TBL3_OD",
			"TRYK_V_Sheriff_BA_TBL3_TN",
			"TRYK_LOC_AK_chestrig_OD",
			"TRYK_LOC_AK_chestrig_TAN"
		};
	};

	class Headgear 
	{
		name = "Headgear";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{
			"H_Cap_blk",
			"H_Cap_blk_Raven",
			"H_Cap_blu",
			"H_Cap_brn_SPECOPS",
			"H_Cap_grn",
			"H_Cap_headphones",
			"H_Cap_khaki_specops_UK",
			"H_Cap_oli",
			"H_Cap_press",
			"H_Cap_red",
			"H_Cap_tan",
			"H_Cap_tan_specops_US",
			"H_Watchcap_blk",
			"H_Watchcap_camo",
			"H_Watchcap_khk",
			"H_Watchcap_sgg",
			"H_MilCap_blue",
			"H_MilCap_dgtl",
			"H_MilCap_mcamo",
			"H_MilCap_ocamo",
			"H_MilCap_oucamo",
			"H_MilCap_rucamo",
			"H_Bandanna_camo",
			"H_Bandanna_cbr",
			"H_Bandanna_gry",
			"H_Bandanna_khk",
			"H_Bandanna_khk_hs",
			"H_Bandanna_mcamo",
			"H_Bandanna_sgg",
			"H_Bandanna_surfer",
			"H_Booniehat_dgtl",
			"H_Booniehat_dirty",
			"H_Booniehat_grn",
			"H_Booniehat_indp",
			"H_Booniehat_khk",
			"H_Booniehat_khk_hs",
			"H_Booniehat_mcamo",
			"H_Booniehat_tan",
			"H_Hat_blue",
			"H_Hat_brown",
			"H_Hat_camo",
			"H_Hat_checker",
			"H_Hat_grey",
			"H_Hat_tan",
			"H_StrawHat",
			"H_StrawHat_dark",
			"H_Beret_02",
			"H_Beret_blk",
			"H_Beret_blk_POLICE",
			"H_Beret_brn_SF",
			"H_Beret_Colonel",
			"H_Beret_grn",
			"H_Beret_grn_SF",
			"H_Beret_ocamo",
			"H_Beret_red",
			"H_Shemag_khk",
			"H_Shemag_olive",
			"H_Shemag_olive_hs",
			"H_Shemag_tan",
			"H_ShemagOpen_khk",
			"H_ShemagOpen_tan",
			"H_TurbanO_blk",
			"H_HelmetB",
			"H_HelmetB_black",
			"H_HelmetB_camo",
			"H_HelmetB_desert",
			"H_HelmetB_grass",
			"H_HelmetB_light",
			"H_HelmetB_light_black",
			"H_HelmetB_light_desert",
			"H_HelmetB_light_grass",
			"H_HelmetB_light_sand",
			"H_HelmetB_light_snakeskin",
			"H_HelmetB_paint",
			"H_HelmetB_plain_blk",
			"H_HelmetB_sand",
			"H_HelmetB_snakeskin",
			"H_HelmetCrew_B",
			"H_HelmetCrew_I",
			"H_HelmetCrew_O",
			"H_HelmetIA",
			"H_HelmetIA_camo",
			"H_HelmetIA_net",
			"H_HelmetLeaderO_ocamo",
			"H_HelmetLeaderO_oucamo",
			"H_HelmetO_ocamo",
			"H_HelmetO_oucamo",
			"H_HelmetSpecB",
			"H_HelmetSpecB_blk",
			"H_HelmetSpecB_paint1",
			"H_HelmetSpecB_paint2",
			"H_HelmetSpecO_blk",
			"H_HelmetSpecO_ocamo",
			"H_CrewHelmetHeli_B",
			"H_CrewHelmetHeli_I",
			"H_CrewHelmetHeli_O",
			"H_HelmetCrew_I",
			"H_HelmetCrew_B",
			"H_HelmetCrew_O",
			"H_PilotHelmetHeli_B",
			"H_PilotHelmetHeli_I",
			"H_PilotHelmetHeli_O"
		};
	};

	class TRYK_Headgear
	{
		name = "TRYK Headgear";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{
			"TRYK_ESS_CAP_OD",
			"TRYK_ESS_CAP_tan",
			"TRYK_R_CAP_BLK",
			"TRYK_R_CAP_TAN",
			"TRYK_R_CAP_OD_US",
			"TRYK_r_cap_tan_Glasses",
			"TRYK_r_cap_blk_Glasses",
			"TRYK_r_cap_od_Glasses",
			"TRYK_H_headsetcap_Glasses",
			"TRYK_H_headsetcap_blk_Glasses",
			"TRYK_H_headsetcap_od_Glasses",
			"TRYK_TAC_EARMUFF_SHADE",
			"TRYK_TAC_EARMUFF",
			"TRYK_NOMIC_TAC_EARMUFF",
			"TRYK_headset2",
			"TRYK_TAC_EARMUFF_Gs",
			"TRYK_TAC_SET_bn",
			"TRYK_NOMIC_TAC_EARMUFF_Gs",
			"TRYK_TAC_EARMUFF_SHADE_Gs",
			"TRYK_TAC_SET_TAN",
			"TRYK_TAC_SET_OD",
			"TRYK_TAC_SET_WH",
			"TRYK_TAC_SET_MESH",
			"TRYK_TAC_SET_TAN_2",
			"TRYK_TAC_SET_OD_2",
			"TRYK_TAC_SET_WH_2",
			"TRYK_TAC_SET_MESH_2",
			"TRYK_bandana_g",
			"TRYK_H_PASGT_BLK",
			"TRYK_H_PASGT_OD",
			"TRYK_H_PASGT_COYO",
			"TRYK_H_PASGT_TAN",
			"TRYK_H_Helmet_Snow",
			"TRYK_H_WH",
			"TRYK_H_GR",
			"TRYK_H_AOR1",
			"TRYK_H_AOR2",
			"TRYK_H_EARMUFF",
			"TRYK_H_TACEARMUFF_H",
			"TRYK_H_Bandana_H",
			"TRYK_H_headset2",
			"TRYK_H_ghillie_over",
			"TRYK_H_ghillie_top",
			"TRYK_H_ghillie_top_headless",
			"TRYK_H_ghillie_over_green",
			"TRYK_H_ghillie_top_green",
			"TRYK_H_ghillie_top_headless_green",
			"TRYK_H_woolhat",
			"TRYK_H_woolhat_CW",
			"TRYK_H_woolhat_WH",
			"TRYK_H_woolhat_br",
			"TRYK_H_woolhat_cu",
			"TRYK_H_woolhat_tan",
			"TRYK_H_headsetcap",
			"TRYK_H_headsetcap_blk",
			"TRYK_H_headsetcap_od",
			"TRYK_H_pakol",
			"TRYK_H_pakol2",
			"TRYK_H_LHS_HEL_G",
			"TRYK_H_Helmet_Winter",
			"TRYK_H_Helmet_Winter_2",
			"TRYK_Headphone_NV",
			"TRYK_HRPIGEAR_NV",
			"TRYK_Headset_NV",
			"TRYK_TAC_boonie_SET_NV",
			"TRYK_TAC_SET_NV_TAN",
			"TRYK_TAC_SET_NV_OD",
			"TRYK_TAC_SET_NV_WH",
			"TRYK_TAC_SET_NV_MESH",
			"TRYK_TAC_SET_NV_TAN_2",
			"TRYK_TAC_SET_NV_OD_2",
			"TRYK_TAC_SET_NV_WH_2",
			"TRYK_TAC_SET_NV_MESH_2",
			"TRYK_H_DELTAHELM_NV",
			"TRYK_US_ESS_Glasses_NV",
			"TRYK_US_ESS_Glasses_TAN_NV",
			"TRYK_ESS_BLKTAN_NV",
			"TRYK_ESS_BLKBLK_NV",
			"TRYK_G_Shades_Black_NV",
			"TRYK_G_Shades_Blue_NV",
			"TRYK_G_bala_ess_NV",
			"TRYK_bandana_NV",
			"TRYK_SPgearG_NV",
			"TRYK_SPgear_PHC1_NV",
			"TRYK_SPgear_PHC2_NV",
			"TRYK_G_bala_wh_NV",
			"TRYK_ESS_wh_NV",
			"TRYK_US_ESS_Glasses",
			"TRYK_US_ESS_Glasses_WH",
			"TRYK_US_ESS_Glasses_BLK",
			"TRYK_US_ESS_Glasses_TAN",
			"TRYK_US_ESS_Glasses_TAN_BLK",
			"TRYK_SPGEAR_Glasses",
			"TRYK_headset_Glasses",
			"TRYK_SpsetG_Glasses",
			"TRYK_Spset_PHC1_Glasses",
			"TRYK_Spset_PHC2_Glasses",
			"TRYK_US_ESS_Glasses_H",
			"TRYK_US_ESS_Glasses_Cover",
			"TRYK_headset2_glasses"
		};
	};
	
	class TRYK_Neckgear
	{
		name = "TRYK Neckgear";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{
			"TRYK_Shemagh_shade_MESH",
			"TRYK_Shemagh_shade_N",
			"TRYK_Shemagh_shade_G_N",
			"TRYK_Shemagh_shade_WH_N",
			"TRYK_kio_balaclava_WH",
			"TRYK_kio_balaclava_BLK",
			"TRYK_kio_balaclavas",
			"TRYK_kio_balaclava_BLK_ear",
			"TRYK_kio_balaclava_ear",
			"TRYK_kio_balaclava_ESS",
			"TRYK_Shemagh",
			"TRYK_Shemagh_mesh",
			"TRYK_Shemagh_G",
			"TRYK_Shemagh_WH",
			"TRYK_Shemagh_shade",
			"TRYK_Shemagh_shade_G",
			"TRYK_Shemagh_shade_WH",
			"TRYK_Shemagh_shade_MH",
			"TRYK_Shemagh_ESS",
			"TRYK_Shemagh_ESS_G",
			"TRYK_Shemagh_ESS_WH",
			"TRYK_Shemagh_EAR_TAN",
			"TRYK_Shemagh_EAR_WH",
			"TRYK_balaclava_BLACK_NV",
			"TRYK_balaclava_NV",
			"TRYK_balaclava_BLACK_EAR_NV",
			"TRYK_balaclava_EAR_NV",
			"TRYK_Shemagh_TAN_NV",
			"TRYK_Shemagh_MESH_NV",
			"TRYK_Shemagh_G_NV",
			"TRYK_Shemagh_WH_NV",
			"TRYK_Shemagh_EAR_NV",
			"TRYK_Shemagh_EAR_G_NV",
			"TRYK_Shemagh_EAR_WH_NV",
			"TRYK_ShemaghESSTAN_NV",
			"TRYK_ShemaghESSOD_NV",
			"TRYK_ShemaghESSWH_NV"
		};
	};

	class PointerAttachments 
	{
		name = "Pointer Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"acc_flashlight",
			"acc_pointer_IR"
		};
	};

	class BipodAttachments 
	{
		name = "Bipod Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itembipod_ca.paa";
		items[] = 
		{
			"bipod_01_F_blk",
			"bipod_01_F_mtp",
			"bipod_01_F_snd",
			"bipod_02_F_blk",
			"bipod_02_F_hex",
			"bipod_02_F_tan",
			"bipod_03_F_blk",
			"bipod_03_F_oli"
		};
	};

	class MuzzleAttachments 
	{
		name = "Suppressor Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] = 
		{
			"muzzle_snds_338_black",
			"muzzle_snds_338_green",
			"muzzle_snds_338_sand",
			"muzzle_snds_93mmg",
			"muzzle_snds_93mmg_tan",
			"muzzle_snds_acp",
			"muzzle_snds_B",
			"muzzle_snds_H",
			"muzzle_snds_H_MG",
			"muzzle_snds_H_SW",
			"muzzle_snds_L",
			"muzzle_snds_M"
		};
	};

	class UAVs
	{
		name = "Unmanned Aerial Vehicles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
		items[] = 
		{
			"I_UavTerminal",
			"I_UAV_01_backpack_F"
		};
	};

	class StaticMGs
	{
		name = "Static Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"O_HMG_01_support_F",
			"O_HMG_01_weapon_F"
		};
	};

	class OpticAttachments 
	{
		name = "Scopes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] = 
		{
			"optic_Aco",
			"optic_ACO_grn",
			"optic_ACO_grn_smg",
			"optic_Aco_smg",
			"optic_AMS",
			"optic_AMS_khk",
			"optic_AMS_snd",
			"optic_Arco",
			"optic_DMS",
			"optic_Hamr",
			"optic_Holosight",
			"optic_Holosight_smg",
			"optic_KHS_blk",
			"optic_KHS_hex",
			"optic_KHS_old",
			"optic_KHS_tan",
			"optic_LRPS",
			"optic_MRCO",
			"optic_MRD",
			"optic_Nightstalker",
			"optic_NVS",
			"optic_SOS",
			"optic_tws",
			"optic_tws_mg",
			"optic_Yorris"
		};
	};

	class CUP_Attachments 
	{
		name = "CUP Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] = 
		{
			"CUP_optic_PSO_3",
			"CUP_optic_Kobra",
			"CUP_optic_GOSHAWK",
			"CUP_optic_NSPU",
			"CUP_optic_PechenegScope",
			"CUP_optic_HoloBlack",
			"CUP_optic_HoloWdl",
			"CUP_optic_HoloDesert",
			"CUP_optic_Eotech533",
			"CUP_optic_Eotech533Grey",
			"CUP_optic_CompM4",
			"CUP_optic_SUSAT",
			"CUP_optic_CWS",
			"CUP_optic_RCO",
			"CUP_optic_RCO_desert",
			"CUP_optic_CompM2_Woodland2",
			"CUP_optic_CompM2_Woodland",
			"CUP_optic_CompM2_Black",
			"CUP_optic_CompM2_Desert",
			"CUP_optic_ACOG",
			"CUP_optic_SB_3_12x50_PMII",
			"CUP_optic_AN_PAS_13c2",
			"CUP_optic_AN_PVS_4",
			"CUP_optic_AN_PVS_10",
			"CUP_optic_LeupoldMk4",
			"CUP_optic_LeupoldM3LR",
			"CUP_optic_LeupoldMk4_CQ_T",
			"CUP_optic_LeupoldMk4_MRT_tan",
			"CUP_optic_LeupoldMk4_10x40_LRT_Desert",
			"CUP_optic_LeupoldMk4_10x40_LRT_Woodland",
			"CUP_optic_Leupold_VX3",
			"CUP_optic_ElcanM145",
			"CUP_optic_ELCAN_SpecterDR",
			"CUP_optic_AN_PAS_13c1",
			"CUP_optic_SB_11_4x20_PM",
			"CUP_optic_ZDDot",
			"CUP_optic_MRad",
			"CUP_optic_TrijiconRx01_black",
			"CUP_optic_TrijiconRx01_desert",
			"CUP_acc_Glock17_Flashlight",
			"CUP_acc_ANPEQ_15",
			"CUP_acc_ANPEQ_2",
			"CUP_acc_Flashlight",
			"CUP_acc_Flashlight_wdl",
			"CUP_acc_Flashlight_desert",
			"CUP_acc_XM8_light_module",
			"CUP_acc_ANPEQ_2_camo",
			"CUP_acc_ANPEQ_2_desert",
			"CUP_acc_ANPEQ_2_grey",
			"CUP_acc_CZ_M3X",
			"CUP_muzzle_snds_AWM",
			"CUP_muzzle_snds_SCAR_H",
			"CUP_muzzle_mfsup_SCAR_H",
			"CUP_muzzle_snds_XM8",
			"CUP_muzzle_snds_G36_black",
			"CUP_muzzle_snds_G36_desert",
			"CUP_muzzle_snds_L85",
			"CUP_muzzle_snds_M16_camo",
			"CUP_muzzle_snds_M16",
			"CUP_muzzle_snds_SCAR_L",
			"CUP_muzzle_mfsup_SCAR_L",
			"CUP_muzzle_PBS4",
			"CUP_muzzle_PB6P9",
			"CUP_muzzle_Bizon",
			"CUP_muzzle_snds_M110",
			"CUP_muzzle_snds_M14",
			"CUP_muzzle_snds_M9",
			"CUP_muzzle_snds_MicroUzi"
		};
	};
	
	/////////////////
	//HLCAttachments:
	/////////////////
	class HLC_Attachments 
	{
		name = "HLC Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] = 
		{
			"HLC_Optic_PSO1",
			"HLC_Optic_1p29",
			"HLC_Optic_ZFSG1",
			"hlc_optic_kobra",
			"hlc_optic_goshawk",
			"hlc_optic_LRT_m14",
			"hlc_optic_accupoint_g3",
			"hlc_optic_artel_m14",
			"hlc_optic_LRT_m14",
			"hlc_optic_PVS4FAL",
			"hlc_optic_suit",
			"hlc_muzzle_snds_fal",
			"hlc_muzzle_545SUP_AK",
			"hlc_muzzle_762SUP_AK",
			"hlc_muzzle_556NATO_KAC",
			"hlc_muzzle_300blk_KAC",
			"hlc_muzzle_snds_HK33",
			"hlc_muzzle_snds_G3",
			"hlc_muzzle_snds_M14",
			"hlc_muzzle_Agendasix",
			"hlc_muzzle_Tundra",
			"hlc_muzzle_Agendasix10mm",
			"hlc_muzzle_snds_AUG",
			"hlc_muzzle_snds_a6AUG",
			"hlc_barrel_standard",
			"hlc_barrel_carbine",
			"hlc_barrel_hbar",
			"hlc_barrel_9mm"
		};
	};
	
	class Hardware 
	{
		name = "Hardware";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Item_Rope",
			"Exile_Item_DuctTape",
			"Exile_Item_ExtensionCord",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_JunkMetal",
			"Exile_Item_LightBulb",
			"Exile_Item_MetalBoard",
			"Exile_Item_MetalPole",
			"Exile_Item_SafeKit",
			"Exile_Item_CamoTentKit",
			"Exile_Item_CodeLock"
		};
	};

	class Food 
	{
		name = "Fast Food";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_EMRE",		
			"Exile_Item_GloriousKnakworst",
			"Exile_Item_Surstromming",
			"Exile_Item_SausageGravy",
			"Exile_Item_Catfood",
			"Exile_Item_ChristmasTinner",
			"Exile_Item_BBQSandwich",
			"Exile_Item_Dogfood",
			"Exile_Item_BeefParts",
			"Exile_Item_Cheathas",
			"Exile_Item_Noodles",
			"Exile_Item_SeedAstics",
			"Exile_Item_Raisins",
			"Exile_Item_Moobar",
			"Exile_Item_InstantCoffee"
		};
	};

	class Drinks 
	{
		name = "Drinks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_PlasticBottleCoffee",
			"Exile_Item_PowerDrink",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_Beer",
			"Exile_Item_EnergyDrink",
			"Exile_Item_MountainDupe",
			"Exile_Item_PlasticBottleEmpty"
		};
	};

	class Tools
	{
		name = "Tools";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Item_ToiletPaper",
			"Exile_Item_Matches",
			"Exile_Item_CookingPot",
			"Exile_Item_CanOpener",
			"Exile_Item_Handsaw",
			"Exile_Item_Pliers",
			"Exile_Item_Grinder",
			"Binocular",
			"Rangefinder",
			"NVGoggles",
			"NVGoggles_INDEP",
			"NVGoggles_OPFOR",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemRadio",
			"ItemWatch",
			"Exile_Item_XM8"
		};
	};

	class FirstAid
	{
		name = "FirstAid";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Item_InstaDoc",
			"Exile_Item_Bandage",
			"Exile_Item_Vishpirin"
		};
	};
	class Navigation
	{
		name = "Special Environment";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"B_Parachute",
			"V_RebreatherB",
			"V_RebreatherIA",
			"V_RebreatherIR"		
		};
	};

	class Backpacks
	{
		name = "Backpacks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";
		items[] = 
		{
			"B_AssaultPack_blk",
			"B_AssaultPack_cbr",
			"B_AssaultPack_dgtl",
			"B_AssaultPack_khk",
			"B_AssaultPack_mcamo",
			"B_AssaultPack_rgr",
			"B_AssaultPack_sgg",
			"B_Bergen_blk",
			"B_Bergen_mcamo",
			"B_Bergen_rgr",
			"B_Bergen_sgg",
			"B_Carryall_cbr",
			"B_Carryall_khk",
			"B_Carryall_mcamo",
			"B_Carryall_ocamo",
			"B_Carryall_oli",
			"B_Carryall_oucamo",
			"B_FieldPack_blk",
			"B_FieldPack_cbr",
			"B_FieldPack_ocamo",
			"B_FieldPack_oucamo",
			"B_HuntingBackpack",
			"B_Kitbag_cbr",
			"B_Kitbag_mcamo",
			"B_Kitbag_sgg",
			"B_OutdoorPack_blk",
			"B_OutdoorPack_blu",
			"B_OutdoorPack_tan",
			"B_TacticalPack_blk",
			"B_TacticalPack_mcamo",
			"B_TacticalPack_ocamo",
			"B_TacticalPack_oli",
			"B_TacticalPack_rgr"
		};
	};
	
	class TRYK_Backpacks
	{
		name = "TRYK Backpacks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";
		items[] = 
		{
			"TRYK_B_AssaultPack_UCP",
			"TRYK_B_AssaultPack_Type2camo",
			"TRYK_B_AssaultPack_MARPAT_Desert",
			"TRYK_B_AssaultPack_MARPAT_Wood",
			"TRYK_B_Kitbag_Base",
			"TRYK_B_Kitbag_blk",
			"TRYK_B_Kitbag_aaf",
			"TRYK_B_Carryall_blk",
			"TRYK_B_Carryall_wh",
			"TRYK_B_Carryall_wood",
			"TRYK_B_Carryall_JSDF",
			"TRYK_B_Kitbag_Base_JSDF",
			"TRYK_B_Coyotebackpack",
			"TRYK_B_Coyotebackpack_OD",
			"TRYK_B_Coyotebackpack_BLK",
			"TRYK_B_Coyotebackpack_WH",
			"TRYK_B_Alicepack",
			"TRYK_B_Medbag",
			"TRYK_B_Medbag_OD",
			"TRYK_B_Medbag_BK",
			"TRYK_B_Medbag_ucp",
			"TRYK_B_Belt",
			"TRYK_B_Belt_BLK",
			"TRYK_B_Belt_CYT",
			"TRYK_B_Belt_tan",
			"TRYK_B_Belt_br",
			"TRYK_B_Belt_GR",
			"TRYK_B_Belt_AOR1",
			"TRYK_B_Belt_AOR2",
			"TRYK_B_BAF_BAG_BLK",
			"TRYK_B_BAF_BAG_CYT",
			"TRYK_B_BAF_BAG_OD",
			"TRYK_B_BAF_BAG_rgr",
			"TRYK_B_BAF_BAG_mcamo",
			"TRYK_B_tube_cyt",
			"TRYK_B_tube_od",
			"TRYK_B_tube_blk",
			"TRYK_B_FieldPack_Wood"
		};
	};

	class Ammunition
	{
		name = "Ammunition";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag_Tracer",
			"10Rnd_127x54_Mag",
			"10Rnd_338_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"11Rnd_45ACP_Mag",
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box_Tracer",
			"16Rnd_9x21_Mag",
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box_Tracer",
			"20Rnd_556x45_UW_mag",
			"20Rnd_762x51_Mag",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01_tracer_green",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green_mag_Tracer",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"30Rnd_9x21_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_Mag",
			"6Rnd_45ACP_Cylinder",
			"6Rnd_GreenSignal_F",
			"6Rnd_RedSignal_F",
			"7Rnd_408_Mag",
			"9Rnd_45ACP_Mag"
		};
	};

	class CUP_Ammunition
	{
		name = "CUP Ammunition";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"CUP_100Rnd_556x45_BetaCMag",
			"CUP_100Rnd_TE4_Green_Tracer_556x45_M249",
			"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"CUP_10Rnd_127x99_M107",
			"CUP_10Rnd_762x51_CZ750",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_9x19_Compact",
			"CUP_10Rnd_9x39_SP5_VSS_M",
			"CUP_10x_303_M",
			"CUP_15Rnd_9x19_M9",
			"CUP_17Rnd_9x19_glock17",
			"CUP_18Rnd_9x19_Phantom",
			"CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1",
			"CUP_200Rnd_TE4_Green_Tracer_556x45_M249",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_B_SCAR",
			"CUP_20Rnd_762x51_B_M110",
			"CUP_20Rnd_762x51_CZ805B",
			"CUP_30Rnd_9x19_EVO",
			"CUP_20Rnd_B_AA12_Pellets",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_Sa58_M",
			"CUP_30Rnd_9x19_MP5",
			"CUP_5Rnd_127x108_KSVK_M",
			"CUP_5Rnd_127x99_as50_M",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_86x70_L115A1",
			"CUP_5x_22_LR_17_HMR_M",
			"CUP_64Rnd_9x19_Bizon_M",
			"CUP_6Rnd_45ACP_M",
			"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_7Rnd_45ACP_1911",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_MakarovSD_M",
			"CUP_8Rnd_B_Beneli_74Slug",
			"CUP_8Rnd_B_Saiga12_74Slug_M"
		};
	};
	
	//////////
	//HLCAmmo:
	//////////
	class HLC_Ammunition
	{
		name = "HLC Ammunition";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"hlc_10rnd_12g_buck_S12",
			"hlc_10rnd_12g_slug_S12",
			"hlc_5rnd_300WM_FMJ_AWM",
			"hlc_5rnd_300WM_AP_AWM",
			"hlc_5rnd_300WM_BTSP_AWM",
			"hlc_5rnd_300WM_mk248_AWM",
			"hlc_5rnd_300WM_SBT_AWM",
			"hlc_20Rnd_762x51_B_G3",
			"hlc_20rnd_762x51_T_G3",
			"hlc_20Rnd_762x51_B_M14",
			"hlc_20rnd_762x51_T_M14",
			"hlc_20Rnd_762x51_B_fal",
			"hlc_20Rnd_762x51_t_fal",
			"hlc_20Rnd_762x51_S_fal",
			"hlc_25Rnd_9x19mm_M882_AUG",
			"hlc_25Rnd_9x19mm_JHP_AUG",
			"hlc_25Rnd_9x19mm_subsonic_AUG",
			"29rnd_300BLK_STANAG",
			"29rnd_300BLK_STANAG_T",
			"29rnd_300BLK_STANAG_S",
			"hlc_30Rnd_9x19_B_MP5",
			"hlc_30Rnd_9x19_GD_MP5",
			"hlc_30Rnd_9x19_SD_MP5",
			"hlc_30Rnd_10mm_B_MP5",
			"hlc_30Rnd_10mm_JHP_MP5",
			"hlc_30rnd_556x45_EPR",
			"hlc_30rnd_556x45_SOST",
			"hlc_30rnd_556x45_SPR",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_T_AK",
			"hlc_30Rnd_545x39_EP_AK",
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_t_ak",
			"hlc_30Rnd_556x45_B_AUG",
			"hlc_30Rnd_556x45_SOST_AUG",
			"hlc_30Rnd_556x45_SPR_AUG",
			"hlc_30Rnd_556x45_T_AUG",
			"hlc_40Rnd_556x45_B_AUG",
			"hlc_40Rnd_556x45_SOST_AUG",
			"hlc_40Rnd_556x45_SPR_AUG",
			"hlc_45Rnd_545x39_t_rpk",
			"hlc_45Rnd_762x39_t_rpk",
			"hlc_45Rnd_762x39_m_rpk",
			"hlc_50rnd_762x51_M_G3",
			"hlc_50rnd_762x51_M_M14",
			"hlc_50rnd_762x51_M_FAL",
			"hlc_75rnd_762x39_m_rpk",
			"hlc_100Rnd_762x51_B_M60E4",
			"hlc_100Rnd_762x51_T_M60E4",
			"hlc_100Rnd_762x51_M_M60E4",
			"hlc_200rnd_556x45_M_SAW",
			"hlc_200rnd_556x45_T_SAW",
			"hlc_200rnd_556x45_B_SAW",
			"hlc_VOG25_AK",
			"hlc_GRD_White",
			"hlc_GRD_red",
			"hlc_GRD_green",
			"hlc_GRD_blue",
			"hlc_GRD_orange",
			"hlc_GRD_purple"
		};
	};
	
	class Flares 
	{
		name = "Flares";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Chemlight_blue",
			"Chemlight_green",
			"Chemlight_red",
			"FlareGreen_F",
			"FlareRed_F",
			"FlareWhite_F",
			"FlareYellow_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareWhite_F",
			"UGL_FlareYellow_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareYellow_F"
		};
	};

	class Smokes 
	{
		name = "Smokes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShellYellow",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell"
		};
	};	

	class Explosives
	{
		name = "Explosives";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargothrow_ca.paa";
		items[] = 
		{
			"HandGrenade",
			"MiniGrenade",
			"B_IR_Grenade",
			"O_IR_Grenade",
			"I_IR_Grenade",
			"1Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"APERSBoundingMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSTripMine_Wire_Mag",
			"ClaymoreDirectionalMine_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"IEDLandBig_Remote_Mag",
			"IEDLandSmall_Remote_Mag",
			"IEDUrbanBig_Remote_Mag",
			"IEDUrbanSmall_Remote_Mag",
			"SatchelCharge_Remote_Mag",
			"SLAMDirectionalMine_Wire_Mag",
			"Titan_AA",
			"Titan_AT",
			"Titan_AP"
		};
	};

	class Pistols 
	{
		name = "Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
		items[] = 
		{
			"hgun_ACPC2_F",
			"hgun_P07_F",
			"hgun_Pistol_heavy_01_F",
			"hgun_Pistol_heavy_02_F",
			"hgun_Pistol_Signal_F",
			"hgun_Rook40_F"
		};
	};

	class SubMachineGuns 
	{
		name = "Sub Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"hgun_PDW2000_F",
			"SMG_01_F",
			"SMG_02_F"
		};
	};

	class LightMachineGuns 
	{
		name = "Light Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_MX_SW_Black_F",
			"arifle_MX_SW_F",
			"LMG_Mk200_F",
			"LMG_Zafir_F"
		};
	};

	class AssaultRifles
	{
		name = "Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_Katiba_C_F",
			"arifle_Katiba_F",
			"arifle_Katiba_GL_F",
			"arifle_Mk20_F",
			"arifle_Mk20_GL_F",
			"arifle_Mk20_GL_plain_F",
			"arifle_Mk20_plain_F",
			"arifle_Mk20C_F",
			"arifle_Mk20C_plain_F",
			"arifle_MX_Black_F",
			"arifle_MX_F",
			"arifle_MX_GL_Black_F",
			"arifle_MX_GL_F",
			"arifle_MXC_Black_F",
			"arifle_MXC_F",
			"arifle_SDAR_F",
			"arifle_TRG20_F",
			"arifle_TRG21_F",
			"arifle_TRG21_GL_F"
		};
	};

	class SniperRifles
	{
		name = "Sniper Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_MXM_Black_F",
			"arifle_MXM_F",
			"srifle_DMR_01_F",
			"srifle_DMR_02_camo_F",
			"srifle_DMR_02_F",
			"srifle_DMR_02_sniper_F",
			"srifle_DMR_03_F",
			"srifle_DMR_03_khaki_F",
			"srifle_DMR_03_multicam_F",
			"srifle_DMR_03_tan_F",
			"srifle_DMR_03_woodland_F",
			"srifle_DMR_04_F",
			"srifle_DMR_04_Tan_F",
			"srifle_DMR_05_blk_F",
			"srifle_DMR_05_hex_F",
			"srifle_DMR_05_tan_f",
			"srifle_DMR_06_camo_F",
			"srifle_DMR_06_olive_F",
			"srifle_EBR_F",
			"srifle_GM6_camo_F",
			"srifle_GM6_F",
			"srifle_LRR_camo_F",
			"srifle_LRR_F"
		};
	};
	
	class CUP_Weapons
	{
		name = "CUP Weapons";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"CUP_sgun_AA12",
			"CUP_sgun_M1014",
			"CUP_sgun_Saiga12K",
			"CUP_smg_MP5SD6",
			"CUP_smg_MP5A5",
			"CUP_smg_EVO",
			"CUP_smg_bizon",
			"CUP_hgun_Colt1911",
			"CUP_hgun_Compact",
			"CUP_hgun_Makarov",
			"CUP_hgun_MicroUzi",
			"CUP_hgun_TaurusTracker455",
			"CUP_hgun_TaurusTracker455_gold",
			"CUP_hgun_M9",
			"CUP_hgun_SA61",
			"CUP_hgun_Duty",
			"CUP_hgun_Phantom",
			"CUP_hgun_PB6P9",
			"CUP_hgun_Glock17",
			"CUP_srifle_SVD_wdl_ghillie",
			"CUP_srifle_SVD_des_ghillie_pso",
			"CUP_srifle_DMR",
			"CUP_srifle_ksvk",
			"CUP_srifle_M110",
			"CUP_srifle_M14",
			"CUP_srifle_M24_des",
			"CUP_srifle_M24_wdl",
			"CUP_srifle_M24_ghillie",
			"CUP_srifle_SVD",
			"CUP_srifle_SVD_des",
			"CUP_srifle_VSSVintorez",
			"CUP_srifle_CZ750",
			"CUP_srifle_M107_Base",
			"CUP_srifle_Mk12SPR",
			"CUP_srifle_AS50",
			"CUP_srifle_AWM_des",
			"CUP_srifle_AWM_wdl",
			"CUP_srifle_CZ550",
			"CUP_srifle_LeeEnfield",
			"CUP_srifle_M40A3",
			"CUP_lmg_M249_para",
			"CUP_lmg_Mk48_des",
			"CUP_lmg_Mk48_wdl",
			"CUP_lmg_L110A1",
			"CUP_lmg_Pecheneg",
			"CUP_lmg_UK59",
			"CUP_lmg_L7A2",
			"CUP_lmg_M240",
			"CUP_lmg_M249",
			"CUP_lmg_PKM",
			"CUP_arifle_Mk16_CQC_FG",
			"CUP_arifle_Mk16_CQC_SFG",
			"CUP_arifle_Mk16_CQC_EGLM",
			"CUP_arifle_Mk16_STD",
			"CUP_arifle_Mk16_STD_FG",
			"CUP_arifle_Mk16_STD_SFG",
			"CUP_arifle_Mk16_STD_EGLM",
			"CUP_arifle_Mk16_SV",
			"CUP_arifle_Mk17_CQC",
			"CUP_arifle_Mk17_CQC_FG",
			"CUP_arifle_Mk17_CQC_SFG",
			"CUP_arifle_Mk17_CQC_EGLM",
			"CUP_arifle_Mk17_STD",
			"CUP_arifle_Mk17_STD_FG",
			"CUP_arifle_Mk17_STD_SFG",
			"CUP_arifle_Mk17_STD_EGLM",
			"CUP_arifle_Mk20",
			"CUP_arifle_XM8_Compact_Rail",
			"CUP_arifle_XM8_Railed",
			"CUP_arifle_M16A4_Base",
			"CUP_arifle_M4A1_BUIS_GL",
			"CUP_arifle_M4A1_BUIS_camo_GL",
			"CUP_arifle_M4A1_BUIS_desert_GL",
			"CUP_arifle_M4A1_black",
			"CUP_arifle_M4A1_desert",
			"CUP_arifle_L85A2",
			"CUP_arifle_L85A2_GL",
			"CUP_arifle_L86A2",
			"CUP_arifle_FNFAL_railed",
			"CUP_arifle_AK107_GL",
			"CUP_arifle_Sa58P_des",
			"CUP_arifle_Sa58V_camo",
			"CUP_arifle_Sa58RIS1",
			"CUP_arifle_Sa58RIS1_des",
			"CUP_arifle_Sa58RIS2",
			"CUP_arifle_Sa58RIS2_camo",
			"CUP_arifle_CZ805_A1",
			"CUP_arifle_CZ805_GL",
			"CUP_arifle_CZ805_B_GL",
			"CUP_arifle_CZ805_B",
			"CUP_arifle_XM8_Carbine",
			"CUP_arifle_XM8_Carbine_FG",
			"CUP_arifle_XM8_Carbine_GL",
			"CUP_arifle_XM8_Compact",
			"CUP_arifle_xm8_SAW",
			"CUP_arifle_xm8_sharpshooter",
			"CUP_arifle_Mk16_CQC",
			"CUP_arifle_Sa58P",
			"CUP_arifle_Sa58V",
			"CUP_arifle_M16A2",
			"CUP_arifle_M16A2_GL",
			"CUP_arifle_M16A4_GL",
			"CUP_arifle_M4A1",
			"CUP_arifle_M4A1_camo",
			"CUP_arifle_FNFAL",
			"CUP_arifle_G36A",
			"CUP_arifle_G36A_camo",
			"CUP_arifle_G36K",
			"CUP_arifle_G36K_camo",
			"CUP_arifle_G36C",
			"CUP_arifle_G36C_camo",
			"CUP_arifle_MG36",
			"CUP_arifle_MG36_camo",
			"CUP_arifle_AK74",
			"CUP_arifle_AK107",
			"CUP_arifle_AKS74",
			"CUP_arifle_AKS74U",
			"CUP_arifle_AK74_GL",
			"CUP_arifle_AKM",
			"CUP_arifle_AKS",
			"CUP_arifle_AKS_Gold",
			"CUP_arifle_RPK74",
			"CUP_arifle_AK74_GL_kobra",
			"CUP_arifle_CZ805_A2"
		};
	};

	//////////
	//HLCGuns:
	//////////
	class HLC_Weapons
	{
		name = "HLC Weapons";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"hlc_smg_mp5k_PDW",
			"hlc_smg_mp5k",
			"hlc_smg_mp5a2",
			"hlc_smg_mp5a3",
			"hlc_smg_mp5a4",
			"hlc_smg_mp5n",
			"hlc_smg_mp510",
			"hlc_smg_mp5sd5",
			"hlc_smg_mp5sd6",
			"hlc_smg_9mmar",
			"hlc_rifle_ak74",
			"hlc_rifle_aks74",
			"hlc_rifle_aks74u",
			"hlc_rifle_ak47",
			"hlc_rifle_akm",
			"hlc_rifle_rpk",
			"hlc_rifle_ak12",
			"hlc_rifle_aku12",
			"hlc_rifle_rpk12",
			"hlc_rifle_rpk74n",
			"hlc_rifle_ak12gl",
			"hlc_rifle_akmgl",
			"hlc_rifle_aks74_GL",
			"hlc_rifle_saiga12k",
			"hlc_rifle_aek971",
			"hlc_rifle_RU556",
			"hlc_rifle_RU5562",
			"hlc_rifle_Colt727",
			"hlc_rifle_Colt727_GL",
			"hlc_rifle_bcmjack",
			"hlc_rifle_Bushmaster300",
			"hlc_rifle_vendimus",
			"hlc_rifle_SAMR",
			"hlc_rifle_honeybase",
			"hlc_rifle_honeybadger",
			"hlc_rifle_g3sg1",
			"hlc_rifle_psg1",
			"hlc_rifle_g3a3",
			"hlc_rifle_g3ka4",
			"HLC_Rifle_g3ka4_GL",
			"hlc_rifle_hk51",
			"hlc_rifle_hk53",
			"hlc_rifle_M14",
			"hlc_rifle_M21",
			"hlc_rifle_M14DMR",
			"hlc_rifle_m14sopmod",
			"hlc_lmg_M60E4",
			"hlc_lmg_m60",
			"hlc_lmg_minimipara",
			"hlc_lmg_minimi",
			"hlc_lmg_minimi_railed",
			"hlc_lmg_m249para",
			"hlc_lmg_M249E2",
			"hlc_rifle_aug",
			"hlc_rifle_auga1_t",
			"hlc_rifle_auga1_B",
			"hlc_rifle_auga1carb",
			"hlc_rifle_auga1carb_t",
			"hlc_rifle_auga1carb_b",
			"hlc_rifle_aughbar",
			"hlc_rifle_aughbar_b",
			"hlc_rifle_aughbar_t",
			"hlc_rifle_augpara",
			"hlc_rifle_augpara_b",
			"hlc_rifle_augpara_t",
			"hlc_rifle_auga2",
			"hlc_rifle_auga2_b",
			"hlc_rifle_auga2_t",
			"hlc_rifle_auga2carb",
			"hlc_rifle_auga2carb_t",
			"hlc_rifle_auga2carb_b ",
			"hlc_rifle_auga2lsw",
			"hlc_rifle_auga2lsw_t",
			"hlc_rifle_auga2lsw_b",
			"hlc_rifle_auga2para",
			"hlc_rifle_auga2para_b",
			"hlc_rifle_auga2para_t",
			"hlc_rifle_augsr",
			"hlc_rifle_augsr_b",
			"hlc_rifle_augsr_t",
			"hlc_rifle_augsrcarb",
			"hlc_rifle_augsrcarb_t",
			"hlc_rifle_augsrcarb_b",
			"hlc_rifle_augsrhbar",
			"hlc_rifle_augsrhbar_b",
			"hlc_rifle_augsrhbar_t",
			"hlc_rifle_auga3",
			"hlc_rifle_auga3_bl",
			"hlc_rifle_auga3_b",
			"hlc_rifle_auga3_GL",
			"hlc_rifle_auga3_GL_BL",
			"hlc_rifle_auga3_GL_B",
			"hlc_rifle_awcovert",
			"hlc_rifle_awcovert_BL",
			"hlc_rifle_awcovert_FDE",
			"hlc_rifle_awmagnum",
			"hlc_rifle_awmagnum_BL",
			"hlc_rifle_awmagnum_FDE",
			"hlc_rifle_awMagnum_FDE_ghillie",
			"hlc_rifle_awMagnum_BL_ghillie",
			"hlc_rifle_awMagnum_OD_ghillie",
			"hlc_rifle_l1a1slr",
			"hlc_rifle_SLR",
			"hlc_rifle_STG58F",
			"hlc_rifle_FAL5061",
			"hlc_rifle_c1A1",
			"hlc_rifle_LAR",
			"hlc_rifle_SLRchopmod",
			"hlc_rifle_falosw",
			"hlc_rifle_osw_GL",
			"hlc_m249_pip1",
			"hlc_m249_pip2",
			"hlc_m249_pip3",
			"hlc_m249_pip4"
		};
	};
	
	class CUP_Launchers
	{
		name = "CUP Launchers";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"CUP_glaunch_M32",
			"CUP_glaunch_M79",
			"CUP_glaunch_Mk13",
			"CUP_6Rnd_HE_M203",
			"CUP_6Rnd_FlareWhite_M203",
			"CUP_6Rnd_FlareGreen_M203",
			"CUP_6Rnd_FlareRed_M203",
			"CUP_6Rnd_FlareYellow_M203",
			"CUP_6Rnd_Smoke_M203",
			"CUP_6Rnd_SmokeRed_M203",
			"CUP_6Rnd_SmokeGreen_M203",
			"CUP_6Rnd_SmokeYellow_M203",
			"CUP_AT13_M",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_Dragon_EP1_M",
			"CUP_FlareGreen_M203",
			"CUP_FlareRed_GP25_M",
			"CUP_FlareWhite_GP25_M",
			"CUP_FlareWhite_M203",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_M67",
			"CUP_Igla_M",
			"CUP_Javelin_M",
			"CUP_M136_M",
			"CUP_MAAWS_HEAT_M",
			"CUP_MAAWS_HEDP_M",
			"CUP_Mine_M",
			"CUP_NLAW_M",
			"CUP_OG7_M",
			"CUP_PG7VL_M",
			"CUP_PG7VR_M",
			"CUP_PipeBomb_M",
			"CUP_RPG18_M",
			"CUP_SMAW_HEAA_M",
			"CUP_SMAW_HEDP_M",
			"CUP_Stinger_M",
			"CUP_Strela_2_M"
		};
	};
	
	class Bikes
	{
		name = "Bikes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Bike_OldBike",
			"Exile_Bike_MountainBike"
		};
	};

	class Cars
	{
		name = "Cars";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Car_Kart_Black",
			"Exile_Bike_QuadBike_Black",
			"Exile_Car_Lada_Green",
			"Exile_Car_Volha_White",
			"Exile_Car_Hatchback_Rusty1",
			"Exile_Car_Hatchback_Rusty2",
			"Exile_Car_Hatchback_Rusty3",
			"Exile_Car_Hatchback_Sport_Red",
			"Exile_Car_SUV_Red",
			"Exile_Car_SUVXL_Black",
			"Exile_Car_Offroad_Rusty1",
			"Exile_Car_Offroad_Rusty2",
			"Exile_Car_Offroad_Rusty3",
			"Exile_Car_Offroad_Repair_Civillian",
			"Exile_Car_Offroad_Armed_Guerilla01",
			"Exile_Car_Strider",
			"Exile_Car_Hunter",
			"Exile_Car_Ifrit"
		};
	};
	
	class Trucks
	{
		name = "Trucks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Car_Van_Black",
			"Exile_Car_Van_Box_Black",
			"Exile_Car_Van_Fuel_Black",
			"Exile_Car_Tempest",
			"Exile_Car_HEMMT",
			"Exile_Car_Ikarus_Blue",
			"Exile_Car_Ural_Open_Worker",
			"Exile_Car_Ural_Covered_Worker",
			"CUP_BAF_Jackal2_GMG_D",
			"CUP_BAF_Jackal2_GMG_W",
			"CUP_BAF_Jackal2_L2A1_D",
			"CUP_BAF_Jackal2_L2A1_W",
			"CUP_B_LAV25M240_USMC",
			"CUP_B_LAV25_HQ_USMC",
			"CUP_B_LAV25_USMC",
			"CUP_B_BM21_CDF",
			"CUP_B_BRDM2_ATGM_CDF",
			"CUP_B_BRDM2_CDF",
			"CUP_B_BRDM2_HQ_CDF",
			"CUP_B_Dingo_Des",
			"CUP_B_Dingo_GL_Des",
			"CUP_B_Dingo_GL_Wdl",
			"CUP_B_Dingo_Wdl",
			"CUP_B_HMMWV_AGS_GPK_ACR",
			"CUP_B_HMMWV_Ambulance_ACR",
			"CUP_B_HMMWV_Ambulance_USA",
			"CUP_B_HMMWV_Ambulance_USMC",
			"CUP_B_HMMWV_Avenger_USA",
			"CUP_B_HMMWV_Avenger_USMC",
			"CUP_B_HMMWV_Crows_M2_USA",
			"CUP_B_HMMWV_Crows_MK19_USA",
			"CUP_B_HMMWV_DSHKM_GPK_ACR",
			"CUP_B_HMMWV_M1114_USMC",
			"CUP_B_HMMWV_M2_GPK_ACR",
			"CUP_B_HMMWV_M2_GPK_USA",
			"CUP_B_HMMWV_M2_USA",
			"CUP_B_HMMWV_M2_USMC",
			"CUP_B_HMMWV_MK19_USA",
			"CUP_B_HMMWV_MK19_USMC",
			"CUP_B_HMMWV_SOV_USA",
			"CUP_B_HMMWV_TOW_USA",
			"CUP_B_HMMWV_TOW_USMC",
			"CUP_B_HMMWV_Terminal_USA",
			"CUP_B_HMMWV_Transport_USA",
			"CUP_B_HMMWV_Unarmed_USA",
			"CUP_B_HMMWV_Unarmed_USMC",
			"CUP_B_LR_Ambulance_CZ_D",
			"CUP_B_LR_Ambulance_CZ_W",
			"CUP_B_LR_Ambulance_GB_D",
			"CUP_B_LR_Ambulance_GB_W",
			"CUP_B_LR_MG_CZ_W",
			"CUP_B_LR_MG_GB_W",
			"CUP_B_LR_Special_CZ_W",
			"CUP_B_LR_Special_Des_CZ_D",
			"CUP_B_LR_Transport_CZ_D",
			"CUP_B_LR_Transport_CZ_W",
			"CUP_B_LR_Transport_GB_D",
			"CUP_B_LR_Transport_GB_W",
			"CUP_B_M1030",
			"CUP_B_M113_Med_USA",
			"CUP_B_M113_USA",
			"CUP_B_M163_USA",
			"CUP_B_M1A1_DES_USMC",
			"CUP_B_M1A1_DES_US_Army",
			"CUP_B_M1A1_Woodland_USMC",
			"CUP_B_M1A1_Woodland_US_Army",
			"CUP_B_M1A2_TUSK_MG_DES_USMC",
			"CUP_B_M1A2_TUSK_MG_DES_US_Army",
			"CUP_B_M1A2_TUSK_MG_USMC",
			"CUP_B_M1A2_TUSK_MG_US_Army",
			"CUP_B_M270_DPICM_USA",
			"CUP_B_M270_DPICM_USMC",
			"CUP_B_M270_HE_USA",
			"CUP_B_M270_HE_USMC",
			"CUP_B_T72_CDF",
			"CUP_B_UAZ_AGS30_ACR",
			"CUP_B_UAZ_AGS30_CDF",
			"CUP_B_UAZ_MG_ACR",
			"CUP_B_UAZ_MG_CDF",
			"CUP_B_UAZ_Open_ACR",
			"CUP_B_UAZ_Open_CDF",
			"CUP_B_UAZ_SPG9_ACR",
			"CUP_B_UAZ_SPG9_CDF",
			"CUP_B_UAZ_Unarmed_ACR",
			"CUP_B_UAZ_Unarmed_CDF",
			"CUP_B_Ural_CDF",
			"CUP_B_Ural_Empty_CDF",
			"CUP_B_Ural_Open_CDF",
			"CUP_B_Ural_Reammo_CDF",
			"CUP_B_Ural_Refuel_CDF",
			"CUP_B_Ural_Repair_CDF",
			"CUP_B_Ural_ZU23_CDF",
			"CUP_B_ZSU23_CDF",
			"CUP_C_Datsun",
			"CUP_C_Datsun_4seat",
			"CUP_C_Datsun_Covered",
			"CUP_C_Datsun_Plain",
			"CUP_C_Datsun_Tubeframe",
			"CUP_C_LR_Transport_CTK",
			"CUP_C_UAZ_Open_TK_CIV",
			"CUP_C_UAZ_Unarmed_TK_CIV",
			"CUP_C_Ural_Civ_01",
			"CUP_C_Ural_Civ_02",
			"CUP_C_Ural_Civ_03",
			"CUP_C_Ural_Open_Civ_01",
			"CUP_C_Ural_Open_Civ_02",
			"CUP_C_Ural_Open_Civ_03",
			"CUP_I_BRDM2_ATGM_NAPA",
			"CUP_I_BRDM2_ATGM_TK_Gue",
			"CUP_I_BRDM2_HQ_NAPA",
			"CUP_I_BRDM2_HQ_TK_Gue",
			"CUP_I_BRDM2_HQ_UN",
			"CUP_I_BRDM2_NAPA",
			"CUP_I_BRDM2_TK_Gue",
			"CUP_I_BRDM2_UN",
			"CUP_I_Datsun_PK",
			"CUP_I_Datsun_PK_Random",
			"CUP_I_Datsun_PK_TK",
			"CUP_I_Datsun_PK_TK_Random",
			"CUP_I_M113_Med_RACS",
			"CUP_I_M113_Med_UN",
			"CUP_I_M113_RACS",
			"CUP_I_M113_UN",
			"CUP_I_M163_RACS",
			"CUP_I_T55_TK_GUE",
			"CUP_I_T72_NAPA",
			"CUP_I_T72_RACS",
			"CUP_I_UAZ_Open_UN",
			"CUP_I_UAZ_SPG9_UN",
			"CUP_I_UAZ_Unarmed_UN",
			"CUP_I_Ural_Empty_UN",
			"CUP_I_Ural_Reammo_UN",
			"CUP_I_Ural_Repair_UN",
			"CUP_I_Ural_UN",
			"CUP_I_Ural_ZU23_NAPA",
			"CUP_I_Ural_ZU23_TK_Gue",
			"CUP_O_BM21_CHDKZ",
			"CUP_O_BM21_RU",
			"CUP_O_BM21_SLA",
			"CUP_O_BM21_TKA",
			"CUP_O_BRDM2_ATGM_CHDKZ",
			"CUP_O_BRDM2_ATGM_SLA",
			"CUP_O_BRDM2_ATGM_TKA",
			"CUP_O_BRDM2_CHDKZ",
			"CUP_O_BRDM2_HQ_CHDKZ",
			"CUP_O_BRDM2_HQ_SLA",
			"CUP_O_BRDM2_HQ_TKA",
			"CUP_O_BRDM2_SLA",
			"CUP_O_BRDM2_TKA",
			"CUP_O_BTR60_TK",
			"CUP_O_BTR90_HQ_RU",
			"CUP_O_BTR90_RU",
			"CUP_O_Datsun_PK",
			"CUP_O_Datsun_PK_Random",
			"CUP_O_LR_Ambulance_TKA",
			"CUP_O_LR_MG_TKA",
			"CUP_O_LR_MG_TKM",
			"CUP_O_LR_SPG9_TKA",
			"CUP_O_LR_SPG9_TKM",
			"CUP_O_LR_Transport_TKA",
			"CUP_O_LR_Transport_TKM",
			"CUP_O_M113_Med_TKA",
			"CUP_O_M113_TKA",
			"CUP_O_T55_TK",
			"CUP_O_T72_CHDKZ",
			"CUP_O_T72_RU",
			"CUP_O_T72_SLA",
			"CUP_O_T72_TKA",
			"CUP_O_UAZ_AGS30_CHDKZ",
			"CUP_O_UAZ_AGS30_RU",
			"CUP_O_UAZ_AGS30_TKA",
			"CUP_O_UAZ_MG_CHDKZ",
			"CUP_O_UAZ_MG_RU",
			"CUP_O_UAZ_MG_TKA",
			"CUP_O_UAZ_Open_CHDKZ",
			"CUP_O_UAZ_Open_RU",
			"CUP_O_UAZ_Open_TKA",
			"CUP_O_UAZ_SPG9_CHDKZ",
			"CUP_O_UAZ_SPG9_RU",
			"CUP_O_UAZ_SPG9_TKA",
			"CUP_O_UAZ_Unarmed_CHDKZ",
			"CUP_O_UAZ_Unarmed_RU",
			"CUP_O_UAZ_Unarmed_TKA",
			"CUP_O_Ural_CHDKZ",
			"CUP_O_Ural_Empty_CHDKZ",
			"CUP_O_Ural_Empty_RU",
			"CUP_O_Ural_Empty_SLA",
			"CUP_O_Ural_Empty_TKA",
			"CUP_O_Ural_Open_CHDKZ",
			"CUP_O_Ural_Open_RU",
			"CUP_O_Ural_Open_SLA",
			"CUP_O_Ural_Open_TKA",
			"CUP_O_Ural_RU",
			"CUP_O_Ural_Reammo_CHDKZ",
			"CUP_O_Ural_Reammo_RU",
			"CUP_O_Ural_Reammo_SLA",
			"CUP_O_Ural_Reammo_TKA",
			"CUP_O_Ural_Refuel_CHDKZ",
			"CUP_O_Ural_Refuel_RU",
			"CUP_O_Ural_Refuel_SLA",
			"CUP_O_Ural_Refuel_TKA",
			"CUP_O_Ural_Repair_CHDKZ",
			"CUP_O_Ural_Repair_RU",
			"CUP_O_Ural_Repair_SLA",
			"CUP_O_Ural_Repair_TKA",
			"CUP_O_Ural_SLA",
			"CUP_O_Ural_TKA",
			"CUP_O_Ural_ZU23_CHDKZ",
			"CUP_O_Ural_ZU23_RU",
			"CUP_O_Ural_ZU23_SLA",
			"CUP_O_Ural_ZU23_TKA",
			"CUP_O_Ural_ZU23_TKM",
			"CUP_O_ZSU23_ChDKZ",
			"CUP_O_ZSU23_SLA",
			"CUP_O_ZSU23_TK",
			"B_MBT_01_cannon_F"
		};
	};

	class Choppers
	{
		name = "Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Chopper_Hummingbird_Green",
			"Exile_Chopper_Hummingbird_Civillian_Wasp",
			"Exile_Chopper_Taru_Black",
			"Exile_Chopper_Taru_Covered_Black",
			"Exile_Chopper_Taru_Transport_Black",
			"Exile_Chopper_Orca_BlackCustom",
			"Exile_Chopper_Mohawk_FIA",
			"Exile_Chopper_Huron_Black",
			"Exile_Chopper_Hellcat_Green",
			"CUP_B_CH53E_USMC",
			"CUP_B_AH1Z",
			"CUP_B_AH1Z_7RndHydra",
			"CUP_B_AH1Z_AT",
			"CUP_B_AH1Z_NOAA",
			"CUP_B_AH1_AT_BAF",
			"CUP_B_AH1_BAF",
			"CUP_B_AH1_ES_BAF",
			"CUP_B_AH1_MR_BAF",
			"CUP_B_AH1_NO_BAF",
			"CUP_B_AH64D_AT_USA",
			"CUP_B_AH64D_ES_USA",
			"CUP_B_AH64D_MR_USA",
			"CUP_B_AH64D_NO_USA",
			"CUP_B_AH64D_USA",
			"CUP_B_AW159_Armed_BAF",
			"CUP_B_AW159_Unarmed_BAF",
			"CUP_B_CH47F_GB",
			"CUP_B_CH47F_USA",
			"CUP_B_MH60S_FFV_USMC",
			"CUP_B_MH60S_USMC",
			"CUP_B_Mi171Sh_ACR",
			"CUP_B_Mi171Sh_Unarmed_ACR",
			"CUP_B_Mi17_CDF",
			"CUP_B_Mi17_medevac_CDF",
			"CUP_B_Mi24_D_CDF",
			"CUP_B_Mi35_CZ",
			//"CUP_B_UH1Y_GUNSHIP_F",
			"CUP_B_UH1Y_MEV_F",
			"CUP_B_UH1Y_UNA_F",
			"CUP_B_UH60L_FFV_US",
			"CUP_B_UH60L_US",
			"CUP_B_UH60L_Unarmed_FFV_MEV_US",
			"CUP_B_UH60L_Unarmed_FFV_US",
			"CUP_B_UH60L_Unarmed_US",
			"CUP_B_UH60M_FFV_US",
			"CUP_B_UH60M_US",
			"CUP_B_UH60M_Unarmed_FFV_MEV_US",
			"CUP_B_UH60M_Unarmed_FFV_US",
			"CUP_B_UH60M_Unarmed_US",
			"CUP_I_Mi17_UN",
			"CUP_I_Mi24_D_ION",
			"CUP_I_Mi24_D_UN",
			"CUP_I_UH60L_FFV_RACS",
			"CUP_I_UH60L_RACS",
			"CUP_I_UH60L_Unarmed_FFV_MEV_Racs",
			"CUP_I_UH60L_Unarmed_FFV_Racs",
			"CUP_I_UH60L_Unarmed_RACS",
			"CUP_Merlin_HC3",
			"CUP_Merlin_HC3_FFV",
			"CUP_Merlin_HC3_MED",
			"CUP_O_Mi17_TK",
			"CUP_O_Mi24_D_TK",
			"CUP_O_Mi24_P_RU",
			"CUP_O_Mi24_V_RU",
			"CUP_O_Mi8_CHDKZ",
			"CUP_O_Mi8_RU",
			"CUP_O_Mi8_SLA_1",
			"CUP_O_Mi8_SLA_2",
			"CUP_O_Mi8_medevac_CHDKZ",
			"CUP_O_Mi8_medevac_RU",
			"CUP_O_Ka50_AA_SLA",
			"CUP_O_Ka50_SLA"
		};
	};

	class Boats
	{
		name = "Boats";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Boat_RubberDuck_CSAT",
			"Exile_Boat_RubberDuck_Digital",
			"Exile_Boat_RubberDuck_Orange",
			"Exile_Boat_RubberDuck_Blue",
			"Exile_Boat_RubberDuck_Black",
			"Exile_Boat_MotorBoat_Police",
			"Exile_Boat_MotorBoat_Orange",
			"Exile_Boat_MotorBoat_White",
			"Exile_Boat_SDV_CSAT",
			"Exile_Boat_SDV_Digital",
			"Exile_Boat_SDV_Grey"
		};
	};

	class Planes
	{
		name = "Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Plane_Cessna",
			"CUP_B_MV22_USMC",
			"CUP_B_AV8B",
			"CUP_B_AV8B_Deepstrike",
			"CUP_B_AV8B_FFAR_19",
			"CUP_B_AV8B_Heavy",
			"CUP_B_AV8B_Hydra19",
			"CUP_B_AV8B_LGB",
			"CUP_O_Su25_RU_1",
			"CUP_O_Su25_RU_2",
			"CUP_O_Su25_RU_3",
			"CUP_O_Su25_SLA",
			"CUP_O_Su25_TKA",
			"CUP_C_C47_CIV",
			"CUP_C_DC3_CIV",
			"CUP_B_Su25_CDF",
			"CUP_B_A10_AT_USA",
			"CUP_B_A10_CAS_USA",
			"CUP_B_C130J_USMC",
			"O_Plane_CAS_02_F"
		};
	};
};

class CfgTraders
{
	/**
	 * Weapons, scopes, silencers, ammo
	 */
	class Exile_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] = 
		{
			"PointerAttachments",
			"BipodAttachments",
			"MuzzleAttachments",
			"OpticAttachments",
			"CUP_Attachments",
			//"HLC_Attachments",
			"Ammunition",
			"CUP_Ammunition",
			//"HLC_Ammunition",
			"Pistols",
			"SubMachineGuns",
			"LightMachineGuns",
			"AssaultRifles",
			"SniperRifles",
			"CUP_Weapons",
			//"HLC_Weapons"
		};
	};

	/**
	 * Satchels, nades, UAVs, static MGs
	 */
	class Exile_Trader_SpecialOperations
	{
		name = "SPECIAL OPERATIONS";
		showWeaponFilter = 1; // for noob tubes
		categories[] = 
		{
			"Flares",
			"Smokes",
			"UAVs",
			"StaticMGs",
			"Explosives",
			"Navigation",
			"CUP_Launchers"
		};
	};

	/**
	 * Uniforms, vests, helmets, backpacks
	 */
	class Exile_Trader_Equipment
	{	
		name = "EQUIPMENT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Headgear",
			//"TRYK_Headgear",
			//"TRYK_Neckgear",
			"Uniforms",
			//"TRYK_Uniforms",
			"Vests",
			//"TRYK_Vests",
			"Backpacks",
			//"TRYK_Backpacks",
			"FirstAid"
		};
	};

	/**
	 * Cans, cans, cans
	 */
	class Exile_Trader_Food
	{
		name = "FAST FOOD";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Food",
			"Drinks"
		};
	};

	/**
	 * Light bulbs, metal, etc.
	 */
	class Exile_Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Hardware",
			"Tools"
		};
	};

	/**
	 * Sells cars and general vehicles
	 */
	class Exile_Trader_Vehicle
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Cars",
			"Trucks"
			//"HVP_Vehicles"
		};
	};

	/**
	 * Sells choppers and planes
	 */
	class Exile_Trader_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Choppers", 
			"Planes"
		};
	};

	/**
	 * Sells ships and boats
	 */ 
	class Exile_Trader_Boat
	{
		name = "BOAT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Boats"
		};
	};

	/**
	 * Sells Community Items
	 */ 
	class Exile_Trader_CommunityCustoms
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community"
		};
	};

	class Exile_Trader_CommunityCustoms2
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community2"
		};
	};

	class Exile_Trader_CommunityCustoms3
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community3"
		};
	};

	class Exile_Trader_CommunityCustoms4
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community4"
		};
	};

	class Exile_Trader_CommunityCustoms5
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community5"
		};
	};

	class Exile_Trader_CommunityCustoms6
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community6"
		};
	};

	class Exile_Trader_CommunityCustoms7
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community7"
		};
	};

	class Exile_Trader_CommunityCustoms8
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community8"
		};
	};

	class Exile_Trader_CommunityCustoms9
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community9"
		};
	};

	class Exile_Trader_CommunityCustoms10
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community10"
		};
	};
};

class CfgTrading 
{
	/*
	* This factor defines the difference between sales/purchase price of
	* items and vehicles. It is used if there is no sales price defined
	* in CfgExileArsenal. 
	*/
	sellPriceFactor = 0.5;
};

class CfgVehicleCustoms
{
	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Abstract
	{
		skins[] = 
		{
			{"Exile_Bike_QuadBike_Black",		100},
			{"Exile_Bike_QuadBike_Blue",		100},
			{"Exile_Bike_QuadBike_Red",			100},
			{"Exile_Bike_QuadBike_White",		100},
			{"Exile_Bike_QuadBike_Nato",		150},
			{"Exile_Bike_QuadBike_Csat",		150},
			{"Exile_Bike_QuadBike_Fia",			150},
			{"Exile_Bike_QuadBike_Guerilla01",	150},
			{"Exile_Bike_QuadBike_Guerilla02",	150}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_MotorBoat_Police",		350},
			{"Exile_Boat_MotorBoat_Orange",		300},
			{"Exile_Boat_MotorBoat_White",		300}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_RubberDuck_CSAT",		200},
			{"Exile_Boat_RubberDuck_Digital",	200},
			{"Exile_Boat_RubberDuck_Orange",	150},
			{"Exile_Boat_RubberDuck_Blue",		150},
			{"Exile_Boat_RubberDuck_Black",		150}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_SDV_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_SDV_CSAT",		200},
			{"Exile_Boat_SDV_Digital",	200},
			{"Exile_Boat_SDV_Grey",		100}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Hellcat_Green", 350},
			{"Exile_Chopper_Hellcat_FIA", 	500}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Karts
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Kart_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Kart_BluKing", 				100},	
			{"Exile_Car_Kart_RedStone", 			100},
			{"Exile_Car_Kart_Vrana", 				100},	
			{"Exile_Car_Kart_Green", 				100},	
			{"Exile_Car_Kart_Blue", 				100},	
			{"Exile_Car_Kart_Orange", 				100},	
			{"Exile_Car_Kart_White", 				100},	
			{"Exile_Car_Kart_Yellow", 				100},	
			{"Exile_Car_Kart_Black", 				100}	
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Hummingbird_Civillian_Blue", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Red", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_ION", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_BlueLine", 	350},
			{"Exile_Chopper_Hummingbird_Civillian_Digital", 	350},
			{"Exile_Chopper_Hummingbird_Civillian_Elliptical", 	350},
			{"Exile_Chopper_Hummingbird_Civillian_Furious", 	350},
			{"Exile_Chopper_Hummingbird_Civillian_GrayWatcher", 350},
			{"Exile_Chopper_Hummingbird_Civillian_Jeans", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Light", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Shadow", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Sheriff", 	350},
			{"Exile_Chopper_Hummingbird_Civillian_Speedy", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Sunset", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Vrana", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Wasp", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Wave", 		350}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huron_Black", 	450},
			{"Exile_Chopper_Huron_Green", 	450}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Orca_CSAT", 		350},
			{"Exile_Chopper_Orca_Black", 		350},
			{"Exile_Chopper_Orca_BlackCustom", 	350}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_CSAT",		500},
			{"Exile_Chopper_Taru_Black",	500}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Transport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Transport_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_Transport_CSAT",	500},
			{"Exile_Chopper_Taru_Transport_Black",	500}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Covered_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_Covered_CSAT",		500},
			{"Exile_Chopper_Taru_Covered_Black",	500}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Hatchback_Rusty1", 			50},
			{"Exile_Car_Hatchback_Rusty2", 			50},
			{"Exile_Car_Hatchback_Rusty3", 			50},
			{"Exile_Car_Hatchback_Beige", 			100},
			{"Exile_Car_Hatchback_Green", 			100},
			{"Exile_Car_Hatchback_Blue", 			100},
			{"Exile_Car_Hatchback_BlueCustom", 		100},
			{"Exile_Car_Hatchback_BeigeCustom", 	100},
			{"Exile_Car_Hatchback_Yellow", 			100},
			{"Exile_Car_Hatchback_Grey", 			100},
			{"Exile_Car_Hatchback_Black", 			100},
			{"Exile_Car_Hatchback_Dark", 			100}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback (Sport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Sport_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Hatchback_Sport_Red", 		100},
			{"Exile_Car_Hatchback_Sport_Blue", 		100},
			{"Exile_Car_Hatchback_Sport_Orange", 	100},
			{"Exile_Car_Hatchback_Sport_White", 	100},
			{"Exile_Car_Hatchback_Sport_Beige", 	100},
			{"Exile_Car_Hatchback_Sport_Green", 	100}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Rusty1", 		50},
			{"Exile_Car_Offroad_Rusty2", 		50},
			{"Exile_Car_Offroad_Rusty3", 		50},
			{"Exile_Car_Offroad_Red", 			500},
			{"Exile_Car_Offroad_Beige", 		500},
			{"Exile_Car_Offroad_White", 		500},
			{"Exile_Car_Offroad_Blue", 			500},
			{"Exile_Car_Offroad_DarkRed", 		500},
			{"Exile_Car_Offroad_BlueCustom", 	500},
			{"Exile_Car_Offroad_Guerilla01", 	700},
			{"Exile_Car_Offroad_Guerilla02", 	700},
			{"Exile_Car_Offroad_Guerilla03", 	700},
			{"Exile_Car_Offroad_Guerilla04", 	700},
			{"Exile_Car_Offroad_Guerilla05", 	700},
			{"Exile_Car_Offroad_Guerilla06", 	700},
			{"Exile_Car_Offroad_Guerilla07", 	700},
			{"Exile_Car_Offroad_Guerilla08", 	700},
			{"Exile_Car_Offroad_Guerilla09", 	700},
			{"Exile_Car_Offroad_Guerilla10", 	700},
			{"Exile_Car_Offroad_Guerilla11", 	700},
			{"Exile_Car_Offroad_Guerilla12", 	700}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Armed_Guerilla01",	250},
			{"Exile_Car_Offroad_Armed_Guerilla02",	250},
			{"Exile_Car_Offroad_Armed_Guerilla03",	250},
			{"Exile_Car_Offroad_Armed_Guerilla04",	250},
			{"Exile_Car_Offroad_Armed_Guerilla05",	250},
			{"Exile_Car_Offroad_Armed_Guerilla06",	250},
			{"Exile_Car_Offroad_Armed_Guerilla07",	250},
			{"Exile_Car_Offroad_Armed_Guerilla08",	250},
			{"Exile_Car_Offroad_Armed_Guerilla09",	250},
			{"Exile_Car_Offroad_Armed_Guerilla10",	250},
			{"Exile_Car_Offroad_Armed_Guerilla11",	250},
			{"Exile_Car_Offroad_Armed_Guerilla12",	250}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Repair_Civillian",		150},
			{"Exile_Car_Offroad_Repair_Red",			150},
			{"Exile_Car_Offroad_Repair_Beige",			150},
			{"Exile_Car_Offroad_Repair_White",			150},
			{"Exile_Car_Offroad_Repair_Blue",			150},
			{"Exile_Car_Offroad_Repair_DarkRed",		150},
			{"Exile_Car_Offroad_Repair_BlueCustom",		150},
			{"Exile_Car_Offroad_Repair_Guerilla01",		250},
			{"Exile_Car_Offroad_Repair_Guerilla02",		250},
			{"Exile_Car_Offroad_Repair_Guerilla03",		250},
			{"Exile_Car_Offroad_Repair_Guerilla04",		250},
			{"Exile_Car_Offroad_Repair_Guerilla05",		250},
			{"Exile_Car_Offroad_Repair_Guerilla06",		250},
			{"Exile_Car_Offroad_Repair_Guerilla07",		250},
			{"Exile_Car_Offroad_Repair_Guerilla08",		250},
			{"Exile_Car_Offroad_Repair_Guerilla09",		250},
			{"Exile_Car_Offroad_Repair_Guerilla10",		250},
			{"Exile_Car_Offroad_Repair_Guerilla11",		250},
			{"Exile_Car_Offroad_Repair_Guerilla12",		250}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_SUV_Red", 		100},
			{"Exile_Car_SUV_Black", 	150},
			{"Exile_Car_SUV_Grey", 		100},
			{"Exile_Car_SUV_Orange", 	100}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV XL
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUVXL_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_SUVXL_Black", 100}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Black",			100},
			{"Exile_Car_Van_White",			100},
			{"Exile_Car_Van_Red",			100},
			{"Exile_Car_Van_Guerilla01",	150},
			{"Exile_Car_Van_Guerilla02",	150},
			{"Exile_Car_Van_Guerilla03",	150},
			{"Exile_Car_Van_Guerilla04",	150},
			{"Exile_Car_Van_Guerilla05",	150},
			{"Exile_Car_Van_Guerilla06",	150},
			{"Exile_Car_Van_Guerilla07",	150},
			{"Exile_Car_Van_Guerilla08",	150}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Box_Black",				100},
			{"Exile_Car_Van_Box_White",				100},
			{"Exile_Car_Van_Box_Red",				100},
			{"Exile_Car_Van_Box_Guerilla01",		150},
			{"Exile_Car_Van_Box_Guerilla02",		150},
			{"Exile_Car_Van_Box_Guerilla03",		150},
			{"Exile_Car_Van_Box_Guerilla04",		150},
			{"Exile_Car_Van_Box_Guerilla05",		150},
			{"Exile_Car_Van_Box_Guerilla06",		150},
			{"Exile_Car_Van_Box_Guerilla07",		150},
			{"Exile_Car_Van_Box_Guerilla08",		150}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Fuel_Black",			100},
			{"Exile_Car_Van_Fuel_White",			100},
			{"Exile_Car_Van_Fuel_Red",				100},
			{"Exile_Car_Van_Fuel_Guerilla01",		150},
			{"Exile_Car_Van_Fuel_Guerilla02",		150},
			{"Exile_Car_Van_Fuel_Guerilla03",		150}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ikarus
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ikarus_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ikarus_Blue", 		200},
			{"Exile_Car_Ikarus_Red", 		200},
			{"Exile_Car_Ikarus_Party", 		500}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Open_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ural_Open_Blue",			300},
			{"Exile_Car_Ural_Open_Yellow",			300},
			{"Exile_Car_Ural_Open_Worker",			300},
			{"Exile_Car_Ural_Open_Military",		300}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Covered_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ural_Covered_Blue",			300},
			{"Exile_Car_Ural_Covered_Yellow",		300},
			{"Exile_Car_Ural_Covered_Worker",		300},
			{"Exile_Car_Ural_Covered_Military",		300}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Lada
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Lada_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Lada_Green", 		100},
			{"Exile_Car_Lada_Taxi", 		100},
			{"Exile_Car_Lada_Red", 			100},
			{"Exile_Car_Lada_White", 		100},
			{"Exile_Car_Lada_Hipster", 		100}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Volha
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Volha_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Volha_Blue", 		100},
			{"Exile_Car_Volha_White", 		100},
			{"Exile_Car_Volha_Black",		100}
		};
	};
};
class CfgVehicleTransport 
{
	class Exile_Container_SupplyBox
	{
		vehicles[] = {"Exile_Car_Van_Abstract", "Exile_Car_Offroad_Abstract", "Exile_Car_Zamak_Abstract", "Exile_Car_HEMMT_Abstract", "Exile_Car_Tempest_Abstract"};

		class Exile_Car_Van_Abstract
		{
			attachPosition[] = {0, -1.1, 0.2};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0, -4.4};
		};

		class Exile_Car_Offroad_Abstract
		{
			attachPosition[] = {0, -1.6, 0.4};
			cargoIndizes[] = {1, 2, 3, 4}; 
			detachPosition[] = {0, -4};
		};

		class Exile_Car_Zamak_Abstract
		{
			attachPosition[] = {0.03, 0.3, 0};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0.03, -4.8};
		};

		class Exile_Car_HEMMT_Abstract
		{
			attachPosition[] = {0.05, -0.1, 0.3};
			cargoIndizes[] = {1, 2, 8, 9}; 
			detachPosition[] = {0.05, -6.1};
		};

		class Exile_Car_Tempest_Abstract
		{
			attachPosition[] = {0.08, -0.85, 0.4};
			cargoIndizes[] = {1, 6, 7, 9}; 
			detachPosition[] = {0.08, -6};
		};
	};
};
