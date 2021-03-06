/*
    @author = "Aaron Clark - https://EpochMod.com";
    @contributors[] = {"DirtySanchez","He-Man"};
    @description = "Vehicle Upgrade configs";
    @licence = "Arma Public License Share Alike (APL-SA) - https://www.bistudio.com/community/licenses/arma-public-license-share-alike";
    @github = "https://github.com/EpochModTeam/Epoch/tree/release/Sources/epoch_config/Configs/CfgItemInteractions.hpp";
*/
class CfgVehicleUpgrades
{
	class C_Hatchback_01_EPOCH
	{
		upgradeToVehicle[] = {"C_Hatchback_01_EPOCH1"};
		class C_Hatchback_01_EPOCH1
		{
			ReqMaterials[] = {{1,"KitVehicleUpgradeI_200_EPOCH"}};
		};
		class C_Hatchback_02_EPOCH1: C_Hatchback_01_EPOCH1 {};
		class C_Offroad_01_EPOCH1: C_Hatchback_01_EPOCH1 {};
		class C_SUV_01_EPOCH1: C_Hatchback_01_EPOCH1 {};
		class B_MRAP_01_EPOCH1: C_Hatchback_01_EPOCH1 {};
		class O_MRAP_02_EPOCH1: C_Hatchback_01_EPOCH1 {};
		class I_MRAP_03_EPOCH1: C_Hatchback_01_EPOCH1 {};
	};
	class C_Hatchback_02_EPOCH: C_Hatchback_01_EPOCH	{	upgradeToVehicle[] = {"C_Hatchback_02_EPOCH1"};	};
	class C_Offroad_01_EPOCH: C_Hatchback_01_EPOCH		{	upgradeToVehicle[] = {"C_Offroad_01_EPOCH1"};	};
	class C_SUV_01_EPOCH: C_Hatchback_01_EPOCH			{	upgradeToVehicle[] = {"C_SUV_01_EPOCH1"};		};
	class B_MRAP_01_EPOCH: C_Hatchback_01_EPOCH			{	upgradeToVehicle[] = {"B_MRAP_01_EPOCH1"};		};
	class O_MRAP_02_EPOCH: C_Hatchback_01_EPOCH			{	upgradeToVehicle[] = {"O_MRAP_02_EPOCH1"};		};
	class I_MRAP_03_EPOCH: C_Hatchback_01_EPOCH			{	upgradeToVehicle[] = {"I_MRAP_03_EPOCH1"};		};
	
	class C_Hatchback_01_EPOCH1
	{
		upgradeToVehicle[] = {"C_Hatchback_01_EPOCH2"};
		class C_Hatchback_01_EPOCH2
		{
			ReqMaterials[] = {{1,"KitVehicleUpgradeII_200_EPOCH"}};
		};
		class C_Hatchback_02_EPOCH2: C_Hatchback_01_EPOCH2 {};
		class C_Offroad_01_EPOCH2: C_Hatchback_01_EPOCH2 {};
		class C_SUV_01_EPOCH2: C_Hatchback_01_EPOCH2 {};
		class B_MRAP_01_EPOCH2: C_Hatchback_01_EPOCH2 {};
		class O_MRAP_02_EPOCH2: C_Hatchback_01_EPOCH2 {};
		class I_MRAP_03_EPOCH2: C_Hatchback_01_EPOCH2 {};
	};
	class C_Hatchback_02_EPOCH1: C_Hatchback_01_EPOCH1	{	upgradeToVehicle[] = {"C_Hatchback_02_EPOCH2"};	};
	class C_Offroad_01_EPOCH1: C_Hatchback_01_EPOCH1	{	upgradeToVehicle[] = {"C_Offroad_01_EPOCH2"};	};
	class C_SUV_01_EPOCH1: C_Hatchback_01_EPOCH1		{	upgradeToVehicle[] = {"C_SUV_01_EPOCH2"};		};
	class B_MRAP_01_EPOCH1: C_Hatchback_01_EPOCH1		{	upgradeToVehicle[] = {"B_MRAP_01_EPOCH2"};		};
	class O_MRAP_02_EPOCH1: C_Hatchback_01_EPOCH1		{	upgradeToVehicle[] = {"O_MRAP_02_EPOCH2"};		};
	class I_MRAP_03_EPOCH1: C_Hatchback_01_EPOCH1		{	upgradeToVehicle[] = {"I_MRAP_03_EPOCH2"};		};
	
	class C_Hatchback_01_EPOCH2
	{
		upgradeToVehicle[] = {"C_Hatchback_01_EPOCH3"};
		class C_Hatchback_01_EPOCH3
		{
			ReqMaterials[] = {{1,"KitVehicleUpgradeIII_200_EPOCH"}};
		};
		class C_Hatchback_02_EPOCH3: C_Hatchback_01_EPOCH3 {};
		class C_Offroad_01_EPOCH3: C_Hatchback_01_EPOCH3 {};
		class C_SUV_01_EPOCH3: C_Hatchback_01_EPOCH3 {};
		class B_MRAP_01_EPOCH3: C_Hatchback_01_EPOCH3 {};
		class O_MRAP_02_EPOCH3: C_Hatchback_01_EPOCH3 {};
		class I_MRAP_03_EPOCH3: C_Hatchback_01_EPOCH3 {};
	};
	class C_Hatchback_02_EPOCH2: C_Hatchback_01_EPOCH2	{	upgradeToVehicle[] = {"C_Hatchback_02_EPOCH3"};	};
	class C_Offroad_01_EPOCH2: C_Hatchback_01_EPOCH2	{	upgradeToVehicle[] = {"C_Offroad_01_EPOCH3"};	};
	class C_SUV_01_EPOCH2: C_Hatchback_01_EPOCH2		{	upgradeToVehicle[] = {"C_SUV_01_EPOCH3"};		};
	class B_MRAP_01_EPOCH2: C_Hatchback_01_EPOCH2		{	upgradeToVehicle[] = {"B_MRAP_01_EPOCH3"};		};
	class O_MRAP_02_EPOCH2: C_Hatchback_01_EPOCH2		{	upgradeToVehicle[] = {"O_MRAP_02_EPOCH3"};		};
	class I_MRAP_03_EPOCH2: C_Hatchback_01_EPOCH2		{	upgradeToVehicle[] = {"I_MRAP_03_EPOCH3"};		};
	
	class C_Hatchback_01_EPOCH3
	{
		upgradeToVehicle[] = {"C_Hatchback_01_EPOCH4"};
		class C_Hatchback_01_EPOCH4
		{
			ReqMaterials[] = {{1,"KitVehicleUpgradeIV_200_EPOCH"}};
		};
		class C_Hatchback_02_EPOCH4: C_Hatchback_01_EPOCH4 {};
		class C_Offroad_01_EPOCH4: C_Hatchback_01_EPOCH4 {};
		class C_SUV_01_EPOCH4: C_Hatchback_01_EPOCH4 {};
		class B_MRAP_01_EPOCH4: C_Hatchback_01_EPOCH4 {};
		class O_MRAP_02_EPOCH4: C_Hatchback_01_EPOCH4 {};
		class I_MRAP_03_EPOCH4: C_Hatchback_01_EPOCH4 {};
	};
	class C_Hatchback_02_EPOCH3: C_Hatchback_01_EPOCH3	{	upgradeToVehicle[] = {"C_Hatchback_02_EPOCH4"};	};
	class C_Offroad_01_EPOCH3: C_Hatchback_01_EPOCH3	{	upgradeToVehicle[] = {"C_Offroad_01_EPOCH4"};	};
	class C_SUV_01_EPOCH3: C_Hatchback_01_EPOCH3		{	upgradeToVehicle[] = {"C_SUV_01_EPOCH4"};		};
	class B_MRAP_01_EPOCH3: C_Hatchback_01_EPOCH3		{	upgradeToVehicle[] = {"B_MRAP_01_EPOCH4"};		};
	class O_MRAP_02_EPOCH3: C_Hatchback_01_EPOCH3		{	upgradeToVehicle[] = {"O_MRAP_02_EPOCH4"};		};
	class I_MRAP_03_EPOCH3: C_Hatchback_01_EPOCH3		{	upgradeToVehicle[] = {"I_MRAP_03_EPOCH4"};		};

	class K01
	{
		upgradeToVehicle[] = {"mosquito_epoch"};
		class mosquito_epoch
		{
			ReqMaterials[] = {{1,"ItemVehDocRara"},{2,"PaintCanOra"},{4,"ItemPipe"},{2,"jerrycan_epoch"}};
		};
	};
	class K02: K01	{};
	class K03: K01	{};
	class K04: K01	{};

	class C_Offroad_01_EPOCH4		
	{	
		upgradeToVehicle[] = {"C_Offroad_01_EPOCH5"};
		class C_Offroad_01_EPOCH5
		{
			ReqMaterials[] = {{1,"ItemVehDocRara"},{1,"PaintCanBlu"},{1,"PaintCanRed"},{1,"CircuitParts"},{1,"ItemBattery"}};
		};
	};
	
/*
############ Examples ############

// Upgrade several M900 into Hummingbird or a Hellcat:
	class C_Heli_light_01_red_F																// Class to Upgrade ("C_Heli_light_01_red_F")
	{
		upgradeToVehicle[] = {"B_Heli_Light_01_EPOCH","I_Heli_light_03_unarmed_EPOCH"};		// What Classes can be upgraded to (Hummingbird + Hellcat)
		class B_Heli_Light_01_EPOCH															// Upgrade to: Hummingbird with "KitVehicleUpgradeII_200_EPOCH"
		{
			ReqMaterials[] = {{1,"KitVehicleUpgradeII_200_EPOCH"}};
		};
		class I_Heli_light_03_unarmed_EPOCH													// Upgrade to: Hellcat with "KitVehicleUpgradeII_200_EPOCH"
		{
			ReqMaterials[] = {{1,"KitVehicleUpgradeII_200_EPOCH"}};
		};
	};
	class C_Heli_light_01_blue_F : C_Heli_light_01_red_F {};								// Upgrade "C_Heli_light_01_blue_F" to Hummingbird / Hellcat (same setting as for "C_Heli_light_01_red_F")
	class C_Heli_light_01_ion_F : C_Heli_light_01_red_F {};
	class C_Heli_light_01_graywatcher_F : C_Heli_light_01_red_F {};
	class C_Heli_light_01_wasp_F : C_Heli_light_01_red_F {};
	class C_Heli_light_01_digital_F : C_Heli_light_01_red_F {};
	class C_Heli_light_01_vrana_F : C_Heli_light_01_red_F {};
	class C_Heli_light_01_speedy_F : C_Heli_light_01_red_F {};
	class C_Heli_light_01_jeans_F : C_Heli_light_01_red_F {};
	class C_Heli_light_01_light_F : C_Heli_light_01_red_F {};
	class C_Heli_light_01_shadow_F : C_Heli_light_01_red_F {};
	class C_Heli_light_01_furious_F : C_Heli_light_01_red_F {};
	class C_Heli_light_01_wave_F : C_Heli_light_01_red_F {};
	class C_Heli_light_01_sheriff_F : C_Heli_light_01_red_F {};



// Upgrade Offroader into an Ifrit or several Offroader Armed:
	class C_Offroad_01_EPOCH																										// Class to Upgrade ("C_Offroad_01_EPOCH")
	{
		upgradeToVehicle[] = {{"O_G_Offroad_01_armed_F","I_G_Offroad_01_armed_F","B_G_Offroad_01_armed_F"},"O_MRAP_02_EPOCH"};		// What Classes can be upgraded to
		class O_MRAP_02_EPOCH																										// Upgrade to: Ifrit with "KitVehicleUpgradeIV_200_EPOCH"
		{
			ReqMaterials[] = {{1,"KitVehicleUpgradeIV_200_EPOCH"}};
		};
		class O_G_Offroad_01_armed_F																								// Upgrade to: "Offroader Armed Brown" with "KitVehicleUpgradeIII_200_EPOCH"
		{
			ReqMaterials[] = {{1,"KitVehicleUpgradeIII_200_EPOCH"}};
		};
		class I_G_Offroad_01_armed_F : O_G_Offroad_01_armed_F {};																	// Upgrade to: Offroader Armed Green (same needed material then for "O_G_Offroad_01_armed_F")
		class B_G_Offroad_01_armed_F : O_G_Offroad_01_armed_F {};																	// Upgrade to: Offroader Armed Grey (same needed material then for "O_G_Offroad_01_armed_F")
	};
*/
};