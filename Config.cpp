class CfgPatches
{
	class Haywards_Builder_Bag_Mod
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters_Backpacks"
		};
	};
};
class CfgMods
{
	class Haywards_Builder_Bag_Mod
	{
		dir="HaywardsBuilderBagMod";
		picture=""; 
		action="";
		hideName=1;
		hidePicture=1;
		name="Haywards Builder Bag Mod";
		credits=""; 
		author="Lee Hayward";
		authorID="76561198040948171";  
		version="1.5";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"HaywardsBuilderBagMod/scripts/4_World"
				};
			};
		
		};	
		
	};
};

class CfgVehicles
{

	class Clothing;
	class AliceBag_ColorBase;
	class Builders_Bag_Yellow: AliceBag_ColorBase // Builders Backpack
	{
		scope=2;
		displayName="Builders Bag - Yellow";
		descriptionShort="Can we build it? YES WE CAN!";
		model="\dz\characters\backpacks\alicebackpack_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		itemSize[]={5,6};
		itemsCargoSize[]={10,50};
		weight=0;
		varWetMax=0;
		heatIsolation=1;
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Knife",
			"Shoulder",
			"Pistol",
			"Truck_01_WoodenLogs",
			"Truck_01_WoodenPlanks",
			"Truck_01_MetalSheets",
			"Truck_01_Barrel1",
			"Truck_01_Barrel2",
			"Truck_01_Barrel3",
			"Truck_01_Barrel4",
			"Truck_01_WoodenCrate1",
			"Truck_01_WoodenCrate2",
			"Truck_01_WoodenCrate3",
			"Truck_01_WoodenCrate4"
			
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"\HaywardsBuilderBagMod\data\builderbag_alicepack_yellow_co.paa",
			"\HaywardsBuilderBagMod\data\builderbag_alicepack_yellow_co.paa",
			"\HaywardsBuilderBagMod\data\builderbag_alicepack_yellow_co.paa"
		};
		
	};
	
	class Builders_Bag_Blue: AliceBag_ColorBase // Builders Backpack
	{
		scope=2; 
		displayName="Builders Bag - Blue";
		descriptionShort="Can we build it? YES WE CAN!";
		model="\dz\characters\backpacks\alicebackpack_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		itemSize[]={5,6};
		itemsCargoSize[]={10,50};
		weight=0;
		varWetMax=0;
		heatIsolation=1;
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Knife",
			"Shoulder",
			"Pistol",
			"Truck_01_WoodenLogs",
			"Truck_01_WoodenPlanks",
			"Truck_01_MetalSheets",
			"Truck_01_Barrel1",
			"Truck_01_Barrel2",
			"Truck_01_Barrel3",
			"Truck_01_Barrel4",
			"Truck_01_WoodenCrate1",
			"Truck_01_WoodenCrate2",
			"Truck_01_WoodenCrate3",
			"Truck_01_WoodenCrate4"
			
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"\HaywardsBuilderBagMod\data\builderbag_alicepack_blue_co.paa",
			"\HaywardsBuilderBagMod\data\builderbag_alicepack_blue_co.paa",
			"\HaywardsBuilderBagMod\data\builderbag_alicepack_blue_co.paa"
		};
		
	};

};

