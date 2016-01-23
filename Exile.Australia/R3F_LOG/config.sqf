/**
 * MAIN CONFIGURATION FILE
 * 
 * English and French comments
 * Commentaires anglais et français
 * 
 * (EN)
 * This file contains the configuration variables of the logistics system.
 * For the configuration of the creation factory, see the file "config_creation_factory.sqf".
 * IMPORTANT NOTE : when a logistics feature is given to an object/vehicle class name, all the classes which inherit
 *                  of the parent/generic class (according to the CfgVehicles) will also have this feature.
 *                  CfgVehicles tree view example : http://madbull.arma.free.fr/A3_stable_1.20.124746_CfgVehicles_tree.html
 * 
 * (FR)
 * Fichier contenant les variables de configuration du système de logistique.
 * Pour la configuration de l'usine de création, voir le fichier "config_creation_factory.sqf".
 * NOTE IMPORTANTE : lorsqu'une fonctionnalité logistique est accordée à un nom de classe d'objet/véhicule, les classes
 *                   héritant de cette classe mère/générique (selon le CfgVehicles) se verront également dotées de cette fonctionnalité.
 *                   Exemple d'arborescence du CfgVehicles : http://madbull.arma.free.fr/A3_stable_1.20.124746_CfgVehicles_tree.html
 */

/**
 * DISABLE LOGISTICS ON OBJECTS BY DEFAULT
 * 
 * (EN)
 * Define if objects and vehicles have logistics features by default,
 * or if it must be allowed explicitely on specific objects/vehicles.
 * 
 * If false : all objects are enabled according to the class names listed in this configuration file
 *            You can disable some objects with : object setVariable ["R3F_LOG_disabled", true];
 * If true :  all objects are disabled by default
 *            You can enable some objects with : object setVariable ["R3F_LOG_disabled", false];
 * 
 * 
 * (FR)
 * Défini si les objets et véhicules disposent des fonctionnalités logistiques par défaut,
 * ou si elles doivent être autorisés explicitement sur des objets/véhicules spécifiques.
 * 
 * Si false : tous les objets sont actifs en accord avec les noms de classes listés dans ce fichier
 *            Vous pouvez désactiver certains objets avec : objet setVariable ["R3F_LOG_disabled", true];
 * Si true :  tous les objets sont inactifs par défaut
 *            Vous pouvez activer quelques objets avec : objet setVariable ["R3F_LOG_disabled", false];
 */
R3F_LOG_CFG_disabled_by_default = false;

/**
 * LOCK THE LOGISTICS FEATURES TO SIDE, FACTION OR PLAYER
 * 
 * (EN)
 * Define the lock mode of the logistics features for an object.
 * An object can be locked to the a side, faction, a player (respawn) or a unit (life).
 * If the object is locked, the player can unlock it according to the
 * value of the config variable R3F_LOG_CFG_unlock_objects_timer.
 * 
 * If "none" : no lock features, everyone can used the logistics features.
 * If "side" : the object is locked to the last side which interacts with it.
 * If "faction" : the object is locked to the last faction which interacts with it.
 * If "player" : the object is locked to the last player which interacts with it. The lock is transmitted after respawn.
 * If "unit" : the object is locked to the last player which interacts with it. The lock is lost when the unit dies.
 * 
 * Note : for military objects (not civilian), the lock is initialized to the object's side.
 * 
 * See also the config variable R3F_LOG_CFG_unlock_objects_timer.
 * 
 * (FR)
 * Défini le mode de verrouillage des fonctionnalités logistics pour un objet donné.
 * Un objet peut être verrouillé pour une side, une faction, un joueur (respawn) ou une unité (vie).
 * Si l'objet est verrouillé, le joueur peut le déverrouiller en fonction de la
 * valeur de la variable de configiration R3F_LOG_CFG_unlock_objects_timer.
 * 
 * Si "none" : pas de verrouillage, tout le monde peut utiliser les fonctionnalités logistiques.
 * Si "side" : l'objet est verrouillé pour la dernière side ayant interagit avec lui.
 * Si "faction" : l'objet est verrouillé pour la dernière faction ayant interagit avec lui.
 * Si "player" : l'objet est verrouillé pour le dernier joueur ayant interagit avec lui. Le verrou est transmis après respawn.
 * Si "unit" : l'objet est verrouillé pour le dernier joueur ayant interagit avec lui. Le verrou est perdu quand l'unité meurt.
 * 
 * Note : pour les objets militaires (non civils), le verrou est initialisé à la side de l'objet.
 * 
 * Voir aussi la variable de configiration R3F_LOG_CFG_unlock_objects_timer.
 */
R3F_LOG_CFG_lock_objects_mode = "none";

/**
 * COUNTDOWN TO UNLOCK AN OBJECT
 * 
 * Define the countdown duration (in seconds) to unlock a locked object.
 * Set to -1 to deny the unlock of objects.
 * See also the config variable R3F_LOG_CFG_lock_objects_mode.
 * 
 * Défini la durée (en secondes) du compte-à-rebours pour déverrouiller un objet.
 * Mettre à -1 pour qu'on ne puisse pas déverrouiller les objets.
 * Voir aussi la variable de configiration R3F_LOG_CFG_lock_objects_mode.
 */
R3F_LOG_CFG_unlock_objects_timer = 30;

/**
 * ALLOW NO GRAVITY OVER GROUND
 * 
 * Define if movable objects with no gravity simulation can be set in height over the ground (no ground contact).
 * The no gravity objects corresponds to most of decoration and constructions items.
 * 
 * Défini si les objets déplaçable sans simulation de gravité peuvent être position en hauteur sans être contact avec le sol.
 * Les objets sans gravité correspondent à la plupart des objets de décors et de construction.
 */
R3F_LOG_CFG_no_gravity_objects_can_be_set_in_height_over_ground = true;

/**
 * LANGUAGE
 * 
 * Automatic language selection according to the game language.
 * New languages can be easily added (read below).
 * 
 * Sélection automatique de la langue en fonction de la langue du jeu.
 * De nouveaux langages peuvent facilement être ajoutés (voir ci-dessous).
 */
R3F_LOG_CFG_language = switch (language) do
{
	case "English":{"en"};
	case "French":{"fr"};
	
	// Feel free to create you own language file named "XX_strings_lang.sqf", where "XX" is the language code.
	// Make a copy of an existing language file (e.g. en_strings_lang.sqf) and translate it.
	// Then add a line with this syntax : case "YOUR_GAME_LANGUAGE":{"LANGUAGE_CODE"};
	// For example :
	
	//case "Czech":{"cz"}; // Not supported. Need your own "cz_strings_lang.sqf"
	//case "Polish":{"pl"}; // Not supported. Need your own "pl_strings_lang.sqf"
	//case "Portuguese":{"pt"}; // Not supported. Need your own "pt_strings_lang.sqf"
	//case "YOUR_GAME_LANGUAGE":{"LANGUAGE_CODE"};  // Need your own "LANGUAGE_CODE_strings_lang.sqf"
	
	default {"en"}; // If language is not supported, use English
};

/**
 * CONDITION TO ALLOW LOGISTICS
 * 
 * (EN)
 * This variable allow to set a dynamic SQF condition to allow/deny all logistics features only on specific clients.
 * The variable must be a STRING delimited by quotes and containing a valid SQF condition to evaluate during the game.
 * For example you can allow logistics only on few clients having a known game ID by setting the variable to :
 * "getPlayerUID player in [""76xxxxxxxxxxxxxxx"", ""76yyyyyyyyyyyyyyy"", ""76zzzzzzzzzzzzzzz""]"
 * Or based on the profile name : "profileName in [""john"", ""jack"", ""james""]"
 * Or only for the server admin : "serverCommandAvailable "#kick"""
 * The condition is evaluted in real time, so it can use condition depending on the mission progress : "alive officer && taskState task1 == ""Succeeded"""
 * Or to deny logistics in a circular area defined by a marker : "player distance getMarkerPos ""markerName"" > getMarkerSize ""markerName"" select 0"
 * Note that quotes of the strings inside the string condition must be doubled.
 * Note : if the condition depends of the aimed objects/vehicle, you can use the command cursorTarget
 * To allow the logistics to everyone, just set the condition to "true".
 * 
 * (FR)
 * Cette variable permet d'utiliser une condition SQF dynamique pour autoriser ou non les fonctions logistiques sur des clients spécifiques.
 * La variable doit être une CHAINE de caractères délimitée par des guillemets et doit contenir une condition SQF valide qui sera évaluée durant la mission.
 * Par exemple pour autoriser la logistique sur seulement quelques joueurs ayant un ID de jeu connu, la variable peut être défini comme suit :
 * "getPlayerUID player in [""76xxxxxxxxxxxxxxx"", ""76yyyyyyyyyyyyyyy"", ""76zzzzzzzzzzzzzzz""]"
 * Ou elle peut se baser sur le nom de profil : "profileName in [""maxime"", ""martin"", ""marc""]"
 * Ou pour n'autoriser que l'admin de serveur : "serverCommandAvailable "#kick"""
 * Les condition sont évaluées en temps réel, et peuvent donc dépendre du déroulement de la mission : "alive officier && taskState tache1 == ""Succeeded"""
 * Ou pour interdire la logistique dans la zone défini par un marqueur circulaire : "player distance getMarkerPos ""markerName"" > getMarkerSize ""markerName"" select 0"
 * Notez que les guillemets des chaînes de caractères dans la chaîne de condition doivent être doublés.
 * Note : si la condition dépend de l'objet/véhicule pointé, vous pouvez utiliser la commande cursorTarget
 * Pour autoriser la logistique chez tout le monde, il suffit de définir la condition à "true".
 */
R3F_LOG_CFG_string_condition_allow_logistics_on_this_client = "true";

/**
 * CONDITION TO ALLOW CREATION FACTORY
 * 
 * (EN)
 * This variable allow to set a dynamic SQF condition to allow/deny the access to the creation factory only on specific clients.
 * The variable must be a STRING delimited by quotes and containing a valid SQF condition to evaluate during the game.
 * For example you can allow the creation factory only on few clients having a known game ID by setting the variable to :
 * "getPlayerUID player in [""76xxxxxxxxxxxxxxx"", ""76yyyyyyyyyyyyyyy"", ""76zzzzzzzzzzzzzzz""]"
 * Or based on the profile name : "profileName in [""john"", ""jack"", ""james""]"
 * Or only for the server admin : "serverCommandAvailable "#kick"""
 * Note that quotes of the strings inside the string condition must be doubled.
 * Note : if the condition depends of the aimed objects/véhicule, you can use the command cursorTarget
 * Note also that the condition is evaluted in real time, so it can use condition depending on the mission progress :
 * "alive officer && taskState task1 == ""Succeeded"""
 * To allow the creation factory to everyone, just set the condition to "true".
 * 
 * (FR)
 * Cette variable permet d'utiliser une condition SQF dynamique pour rendre accessible ou non l'usine de création sur des clients spécifiques.
 * La variable doit être une CHAINE de caractères délimitée par des guillemets et doit contenir une condition SQF valide qui sera évaluée durant la mission.
 * Par exemple pour autoriser l'usine de création sur seulement quelques joueurs ayant un ID de jeu connu, la variable peut être défini comme suit :
 * "getPlayerUID player in [""76xxxxxxxxxxxxxxx"", ""76yyyyyyyyyyyyyyy"", ""76zzzzzzzzzzzzzzz""]"
 * Ou elle peut se baser sur le nom de profil : "profileName in [""maxime"", ""martin"", ""marc""]"
 * Ou pour n'autoriser que l'admin de serveur : "serverCommandAvailable "#kick"""
 * Notez que les guillemets des chaînes de caractères dans la chaîne de condition doivent être doublés.
 * Note : si la condition dépend de l'objet/véhicule pointé, vous pouvez utiliser la commande cursorTarget
 * Notez aussi que les condition sont évaluées en temps réel, et peuvent donc dépendre du déroulement de la mission :
 * "alive officier && taskState tache1 == ""Succeeded"""
 * Pour autoriser l'usine de création chez tout le monde, il suffit de définir la condition à "true".
 */
R3F_LOG_CFG_string_condition_allow_creation_factory_on_this_client = "false";

/*
 ********************************************************************************************
 * BELOW IS THE CLASS NAMES CONFIGURATION / CI-DESSOUS LA CONFIGURATION DES NOMS DE CLASSES *
 ********************************************************************************************
 * 
 * (EN)
 * There are two ways to manage new objects with the logistics system. The first one is to add these objects in the
 * following appropriate lists. The second one is to create a new external file in the /addons_config/ directory,
 * based on /addons_config/TEMPLATE.sqf, and to add a #include below to.
 * The first method is better to add/fix only some various class names.
 * The second method is better to take into account an additional addon.
 * 
 * These variables are based on the inheritance principle according to the CfgVehicles tree.
 * It means that a features accorded to a class name, is also accorded to all child classes.
 * Inheritance tree view : http://madbull.arma.free.fr/A3_1.32_CfgVehicles_tree.html
 * 
 * (FR)
 * Deux moyens existent pour gérer de nouveaux objets avec le système logistique. Le premier consiste à ajouter
 * ces objets dans les listes appropriées ci-dessous. Le deuxième est de créer un fichier externe dans le répertoire
 * /addons_config/ basé sur /addons_config/TEMPLATE.sqf, et d'ajouter un #include ci-dessous.
 * La première méthode est préférable lorsqu'il s'agit d'ajouter ou corriger quelques classes diverses.
 * La deuxième méthode est préférable s'il s'agit de prendre en compte le contenu d'un addon supplémentaire.
 * 
 * Ces variables sont basées sur le principe d'héritage utilisés dans l'arborescence du CfgVehicles.
 * Cela signifie qu'une fonctionnalité accordée à une classe, le sera aussi pour toutes ses classes filles.
 * Vue de l'arborescence d'héritage : http://madbull.arma.free.fr/A3_1.32_CfgVehicles_tree.html
 */

/****** LIST OF ADDONS CONFIG TO INCLUDE / LISTE DES CONFIG D'ADDONS A INCLURE ******/
#include "addons_config\A3_vanilla.sqf"
//#include "addons_config\All_in_Arma.sqf"
//#include "addons_config\R3F_addons.sqf"
//#include "addons_config\YOUR_ADDITIONAL_ADDON.sqf"

/****** TOW WITH VEHICLE / REMORQUER AVEC VEHICULE ******/

/**
 * List of class names of ground vehicles which can tow objects.
 * Liste des noms de classes des véhicules terrestres pouvant remorquer des objets.
 */
R3F_LOG_CFG_can_tow = R3F_LOG_CFG_can_tow +
[
	// e.g. : "MyTowingVehicleClassName1", "MyTowingVehicleClassName2"
	"Exile_Car_HEMMT",
	"Exile_Car_Hatchback_Rusty1",
	"Exile_Car_Hatchback_Rusty2",
	"Exile_Car_Hatchback_Rusty3",
	"Exile_Car_Hatchback_Sport_Red",
	"Exile_Car_Hunter",
	"Exile_Car_Ifrit",
	"Exile_Car_Offroad_Armed_Guerilla01",
	"Exile_Car_Offroad_Repair_Beige",
	"Exile_Car_Offroad_Repair_Blue",
	"Exile_Car_Offroad_Repair_BlueCustom",
	"Exile_Car_Offroad_Repair_Civillian",
	"Exile_Car_Offroad_Repair_DarkRed",
	"Exile_Car_Offroad_Repair_Guerilla01",
	"Exile_Car_Offroad_Repair_Guerilla02",	
	"Exile_Car_Offroad_Repair_Guerilla03",
	"Exile_Car_Offroad_Repair_Guerilla04",
	"Exile_Car_Offroad_Repair_Guerilla05",
	"Exile_Car_Offroad_Repair_Guerilla06",
	"Exile_Car_Offroad_Repair_Guerilla07",
	"Exile_Car_Offroad_Repair_Guerilla08",
	"Exile_Car_Offroad_Repair_Guerilla09",
	"Exile_Car_Offroad_Repair_Guerilla10",
	"Exile_Car_Offroad_Repair_Guerilla11",
	"Exile_Car_Offroad_Repair_Guerilla12",
	"Exile_Car_Offroad_Repair_Red",
	"Exile_Car_Offroad_Repair_White",
	"Exile_Car_Offroad_Rusty1",
	"Exile_Car_Offroad_Rusty2",
	"Exile_Car_Offroad_Rusty3",
	"Exile_Car_SUV_Red",
	"Exile_Car_Strider",
	"Exile_Car_Tempest",
	"Exile_Car_Van_Black",
	"Exile_Car_Van_Box_Black",
	"Exile_Car_Van_Fuel_Black",
	"Exile_Car_Zamak",
	//RHS Vehicles
	"rhs_Ural_Flat_MSV_01",
	"rhs_Ural_MSV_01",
	"rhs_Ural_Open_MSV_01",
	"rhs_gaz66_ammo_vmf",
	"rhs_gaz66_flat_vdv",
	"rhs_gaz66_vmf",
	"rhs_gaz66o_flat_vdv",
	"rhs_gaz66o_vdv",
	"rhs_tigr_3camo_vdv",
	"rhs_tigr_ffv_vdv",
	"rhs_tigr_m_test",
	"rhs_tigr_vdv",
	"rhs_truck",
	"rhs_uaz_open_MSV_01",
	"rhs_uaz_vdv",
	"rhsusf_M1078A1P2_B_M2_d_fmtv_usarmy",
	"rhsusf_M1083A1P2_B_M2_wd_fmtv_usarmy",
	"rhsusf_M10B3A1P2_B_M2_wd_flatbed_fmtv_usarmy",
	"rhsusf_M10B3A1P2_B_M2_wd_open_tmtv_usarmy",
	"rhsusf_m1025_w_m2",
	"rhsusf_m1078A1P2_B_M2_wd_fmtv_usarmy",
	"rhsusf_m1078A1P2_B_wd_fmtv_usarmy",
	"rhsusf_m1078A1P2_B_wd_open_fmtv_usarmy",
	"rhsusf_m113_usarmy_unarmed",
	"rhsusf_m998_w_2dr",
	"rhsusf_m998_w_2dr_halftop",
	"rhsusf_m998_w_4dr",
	"rhsusf_rg33_d",
	"rhsusf_rg33_m2_usmc_d",
	"rhsusf_rg33_m2_usmc_wd",
	//CUP Vehicles
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
];

/**
 * List of class names of objects which can be towed.
 * Liste des noms de classes des objets remorquables.
 */
R3F_LOG_CFG_can_be_towed = R3F_LOG_CFG_can_be_towed +
[
	// e.g. : "MyTowableObjectClassName1", "MyTowableObjectClassName2"
	"Exile_Bike_QuadBike_Black", 
	"Exile_Bike_QuadBike_Blue", 
	"Exile_Bike_QuadBike_Csat",
	"Exile_Bike_QuadBike_Fia", 
	"Exile_Bike_QuadBike_Guerilla01", 
	"Exile_Bike_QuadBike_Guerilla02",
	"Exile_Bike_QuadBike_Nato", 
	"Exile_Bike_QuadBike_Red", 
	"Exile_Bike_QuadBike_White", 
	"Exile_Car_HEMMT",
	"Exile_Car_Hatchback_Beige", 
	"Exile_Car_Hatchback_BeigeCustom", 
	"Exile_Car_Hatchback_Black", 
	"Exile_Car_Hatchback_Blue", 
	"Exile_Car_Hatchback_BlueCustom", 
	"Exile_Car_Hatchback_Dark", 
	"Exile_Car_Hatchback_Green", 
	"Exile_Car_Hatchback_Grey", 
	"Exile_Car_Hatchback_Rusty1",
	"Exile_Car_Hatchback_Rusty1", 
	"Exile_Car_Hatchback_Rusty2",
	"Exile_Car_Hatchback_Rusty2", 
	"Exile_Car_Hatchback_Rusty3",
	"Exile_Car_Hatchback_Rusty3", 
	"Exile_Car_Hatchback_Sport_Beige", 
	"Exile_Car_Hatchback_Sport_Blue", 
	"Exile_Car_Hatchback_Sport_Green",
	"Exile_Car_Hatchback_Sport_Orange", 
	"Exile_Car_Hatchback_Sport_Red",
	"Exile_Car_Hatchback_Sport_Red", 
	"Exile_Car_Hatchback_Sport_White", 
	"Exile_Car_Hatchback_Yellow", 
	"Exile_Car_Hunter",
	"Exile_Car_Ifrit",
	"Exile_Car_Offroad_Armed_Guerilla01",
	"Exile_Car_Offroad_Armed_Guerilla01", 
	"Exile_Car_Offroad_Armed_Guerilla02", 
	"Exile_Car_Offroad_Armed_Guerilla03", 
	"Exile_Car_Offroad_Armed_Guerilla04", 
	"Exile_Car_Offroad_Armed_Guerilla05", 
	"Exile_Car_Offroad_Armed_Guerilla06", 
	"Exile_Car_Offroad_Armed_Guerilla07", 
	"Exile_Car_Offroad_Armed_Guerilla08", 
	"Exile_Car_Offroad_Armed_Guerilla09", 
	"Exile_Car_Offroad_Armed_Guerilla10", 
	"Exile_Car_Offroad_Armed_Guerilla11", 
	"Exile_Car_Offroad_Armed_Guerilla12",
	"Exile_Car_Offroad_Beige", 
	"Exile_Car_Offroad_Blue", 
	"Exile_Car_Offroad_BlueCustom", 
	"Exile_Car_Offroad_DarkRed", 
	"Exile_Car_Offroad_Guerilla01", 
	"Exile_Car_Offroad_Guerilla02", 
	"Exile_Car_Offroad_Guerilla03", 
	"Exile_Car_Offroad_Guerilla04", 
	"Exile_Car_Offroad_Guerilla05", 
	"Exile_Car_Offroad_Guerilla06", 
	"Exile_Car_Offroad_Guerilla07", 
	"Exile_Car_Offroad_Guerilla08", 
	"Exile_Car_Offroad_Guerilla09", 
	"Exile_Car_Offroad_Guerilla10", 
	"Exile_Car_Offroad_Guerilla11", 
	"Exile_Car_Offroad_Guerilla12",
	"Exile_Car_Offroad_Red", 
	"Exile_Car_Offroad_Repair_Beige",
	"Exile_Car_Offroad_Repair_Blue",
	"Exile_Car_Offroad_Repair_BlueCustom",
	"Exile_Car_Offroad_Repair_Civillian",
	"Exile_Car_Offroad_Repair_DarkRed",
	"Exile_Car_Offroad_Repair_Guerilla01",
	"Exile_Car_Offroad_Repair_Guerilla02",	
	"Exile_Car_Offroad_Repair_Guerilla03",
	"Exile_Car_Offroad_Repair_Guerilla04",
	"Exile_Car_Offroad_Repair_Guerilla05",
	"Exile_Car_Offroad_Repair_Guerilla06",
	"Exile_Car_Offroad_Repair_Guerilla07",
	"Exile_Car_Offroad_Repair_Guerilla08",
	"Exile_Car_Offroad_Repair_Guerilla09",
	"Exile_Car_Offroad_Repair_Guerilla10",
	"Exile_Car_Offroad_Repair_Guerilla11",
	"Exile_Car_Offroad_Repair_Guerilla12",
	"Exile_Car_Offroad_Repair_Red",
	"Exile_Car_Offroad_Repair_White",
	"Exile_Car_Offroad_Rusty1",
	"Exile_Car_Offroad_Rusty1", 
	"Exile_Car_Offroad_Rusty2",
	"Exile_Car_Offroad_Rusty2", 
	"Exile_Car_Offroad_Rusty3",
	"Exile_Car_Offroad_Rusty3", 
	"Exile_Car_Offroad_White", 
	"Exile_Car_SUV_Black", 
	"Exile_Car_SUV_Grey", 
	"Exile_Car_SUV_Orange",
	"Exile_Car_SUV_Red",
	"Exile_Car_SUV_Red", 
	"Exile_Car_Strider",
	"Exile_Car_Tempest",
	"Exile_Car_Van_Black",
	"Exile_Car_Van_Black", 
	"Exile_Car_Van_Box_Black",
	"Exile_Car_Van_Fuel_Black",
	"Exile_Car_Van_Guerilla01", 
	"Exile_Car_Van_Guerilla02", 
	"Exile_Car_Van_Guerilla03", 
	"Exile_Car_Van_Guerilla04", 
	"Exile_Car_Van_Guerilla05", 
	"Exile_Car_Van_Guerilla06", 
	"Exile_Car_Van_Guerilla07", 
	"Exile_Car_Van_Guerilla08",
	"Exile_Car_Van_Red", 
	"Exile_Car_Van_White", 
	"Exile_Car_Zamak",
	"Exile_Plane_Cessna",
	//RHS Vehicles
	"rhs_Ural_Flat_MSV_01",
	"rhs_Ural_MSV_01",
	"rhs_Ural_Open_MSV_01",
	"rhs_gaz66_ammo_vmf",
	"rhs_gaz66_flat_vdv",
	"rhs_gaz66_vmf",
	"rhs_gaz66o_flat_vdv",
	"rhs_gaz66o_vdv",
	"rhs_tigr_3camo_vdv",
	"rhs_tigr_ffv_vdv",
	"rhs_tigr_m_test",
	"rhs_tigr_vdv",
	"rhs_truck",
	"rhs_uaz_open_MSV_01",
	"rhs_uaz_vdv",
	"rhsusf_M1078A1P2_B_M2_d_fmtv_usarmy",
	"rhsusf_M1083A1P2_B_M2_wd_fmtv_usarmy",
	"rhsusf_M10B3A1P2_B_M2_wd_flatbed_fmtv_usarmy",
	"rhsusf_M10B3A1P2_B_M2_wd_open_tmtv_usarmy",
	"rhsusf_m1025_w_m2",
	"rhsusf_m1078A1P2_B_M2_wd_fmtv_usarmy",
	"rhsusf_m1078A1P2_B_wd_fmtv_usarmy",
	"rhsusf_m1078A1P2_B_wd_open_fmtv_usarmy",
	"rhsusf_m113_usarmy_unarmed",
	"rhsusf_m998_w_2dr",
	"rhsusf_m998_w_2dr_halftop",
	"rhsusf_m998_w_4dr",
	"rhsusf_rg33_d",
	"rhsusf_rg33_m2_usmc_d",
	"rhsusf_rg33_m2_usmc_wd",
	//CUP Vehicles
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
];


/****** LIFT WITH VEHICLE / HELIPORTER AVEC VEHICULE ******/

/**
 * List of class names of helicopters which can lift objects.
 * Liste des noms de classes des hélicoptères pouvant héliporter des objets.
 */
R3F_LOG_CFG_can_lift = R3F_LOG_CFG_can_lift +
[
	// e.g. : "MyLifterVehicleClassName1", "MyLifterVehicleClassName2"
	// Here comes the Classname for the Chopper can Lift
	
];

/**
 * List of class names of objects which can be lifted.
 * Liste des noms de classes des objets héliportables.
 */
R3F_LOG_CFG_can_be_lifted = R3F_LOG_CFG_can_be_lifted +
[
	// e.g. : "MyLiftableObjectClassName1", "MyLiftableObjectClassName2"
	// Here comes the Classname for the Vehicle which can be Lifted
	
];


/****** LOAD IN VEHICLE / CHARGER DANS LE VEHICULE ******/

/*
* (EN)
 * This section uses a numeric quantification of capacity and cost of the objets.
 * For example, in a vehicle has a capacity of 100, we will be able to load in 5 objects costing 20 capacity units.
 * The capacity doesn't represent a real volume or weight, but a choice made for gameplay.
 * 
 * (FR)
 * Cette section utilise une quantification numérique de la capacité et du coût des objets.
 * Par exemple, dans un véhicule d'une capacité de 100, nous pouvons charger 5 objets coûtant 20 unités de capacité.
 * La capacité ne représente ni un poids, ni un volume, mais un choix fait pour la jouabilité.
 */

/**
 * List of class names of vehicles or cargo objects which can transport objects.
 * The second element of the nested arrays is the load capacity (in relation with the capacity cost of the objects).
 * 
 * Liste des noms de classes des véhicules ou "objets contenant" pouvant transporter des objets.
 * Le deuxième élément des sous-tableaux est la capacité de chargement (en relation avec le coût de capacité des objets).
 */
R3F_LOG_CFG_can_transport_cargo = R3F_LOG_CFG_can_transport_cargo +
[
	// e.g. : ["MyTransporterClassName1", itsCapacity], ["MyTransporterClassName2", itsCapacity]
	// Here Comes the Vehicle which can Load Stuff 	
];

/**
 * List of class names of objects which can be loaded in transport vehicle/cargo.
 * The second element of the nested arrays is the cost capacity (in relation with the capacity of the vehicles).
 * 
 * Liste des noms de classes des objets transportables.
 * Le deuxième élément des sous-tableaux est le coût de capacité (en relation avec la capacité des véhicules).
 */
R3F_LOG_CFG_can_be_transported_cargo = R3F_LOG_CFG_can_be_transported_cargo +
[
	// e.g. : ["MyTransportableObjectClassName1", itsCost], ["MyTransportableObjectClassName2", itsCost]
	// Here Comes the Stuff what you want to load in the Vehicle  example: ["IG_supplyCrate_F", 40]
	
];

/****** MOVABLE-BY-PLAYER OBJECTS / OBJETS DEPLACABLES PAR LE JOUEUR ******/

/**
 * List of class names of objects which can be carried and moved by a player.
 * Liste des noms de classes des objets qui peuvent être portés et déplacés par le joueur.
 */
R3F_LOG_CFG_can_be_moved_by_player = R3F_LOG_CFG_can_be_moved_by_player +
[
	// Here Comes that stuff in what a player can Move 
	// e.g. : "MyMovableObjectClassName1", "MyMovableObjectClassName2"
	"CargoNet_01_box_F",
	"Box_NATO_AmmoVeh_F",
	"B_supplyCrate_F",
	"I_CargoNET_01_F",
	"Box_NATO_Wps_F",
	"C_supplyCrate_F",
	"IG_supplyCrate_F",
	"Box_IND_AmmoVeh_F",
	"B_Slingload_01_Cargo_F",
	"B_Slingload_01_Fuel_F",
	"B_Slingload_01_Ammo_F",
	"B_Slingload_01_Medevac_F",
	"B_Slingload_01_Repair_F",
	"Land_Pod_Heli_Transport_04_covered_F",
	"Land_Pod_Heli_Transport_04_fuel_F",
	"Land_Pod_Heli_Transport_04_box_F",
	"Land_Pod_Heli_Transport_04_repair_F",
	"Land_Pod_Heli_Transport_04_medevac_F",
	"Land_Pod_Heli_Transport_04_bench_F",
	"Land_Pod_Heli_Transport_04_covered_black_F",
	"Land_Pod_Heli_Transport_04_fuel_black_F",
	"Land_Pod_Heli_Transport_04_box_black_F",
	"Land_Pod_Heli_Transport_04_repair_black_F",
	"Land_Pod_Heli_Transport_04_medevac_black_F",
	"Land_Pod_Heli_Transport_04_bench_black_F"
	
];
