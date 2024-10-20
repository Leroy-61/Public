class CfgPatches
{
	class Areal_ammo_demage
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Weapons_Projectiles",
			"DZ_Scripts"
		};
		ammo[]=
		{
			"Bullet_12Slug540gr",
			"Bullet_12gaSlugPustishka",
			"Bullet_12GaugeSlugmod"
		};
	};
};
class cfgAmmoTypes
{
    class AType_Bullet_12Slug540gr 
    {
        name = "Bullet_12Slug540gr";
    };
    class AType_Bullet_12gaSlugPustishka
    {
        name = "Bullet_12gaSlugPustishka";
    };
	class AType_Bullet_12GaugeSlugmod
    {
        name = "Bullet_12GaugeSlugmod";
    };
};
class CfgAmmo
{
	class Bullet_Base;
	class ShotgunCore;
	class DefaultAmmo;
	class BulletCore;
	class Shotgun_Base;
	class Bullet_12GaugeSlugmod: Bullet_Base
	{
		scope = 1;
		proxyShape="\dz\weapons\projectiles\shotgunshell_slug.p3d";
		casing="FxCartridge_12Slug";
		round="FxRound_12Slug";
		spawnPileType="Ammo_12gaSlugmod";
		hit=11;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=380;
		typicalSpeed=420;
		airFriction=-0.0049999999;
		caliber=1;
		deflecting=0;
		damageBarrel=600;
		damageBarrelDestroyed=600;
		weight= 0.028;
		impactBehaviour=0;
		hitAnimation=1;
		unconRefillModifier=1.75;
		class SoundSetsGroundHits
		{
			default[] = {"Shell_12ga_default_SoundSet"};
			asphalt_ext[] = {"Shell_12ga_default_SoundSet"};
			asphalt_destroyed_ext[] = {"Shell_12ga_default_SoundSet"};
			asphalt_int[] = {"Shell_12ga_default_int_SoundSet"};
			asphalt_destroyed_int[] = {"Shell_12ga_default_int_SoundSet"};
			asphalt_felt[] = {"Shell_12ga_default_SoundSet"};
			asphalt_felt_int[] = {"Shell_12ga_default_int_SoundSet"};
			cp_broadleaf_dense1[] = {"Shell_12ga_leaves_SoundSet"};
			cp_broadleaf_dense2[] = {"Shell_12ga_leaves_SoundSet"};
			cp_broadleaf_sparse1[] = {"Shell_12ga_leaves_SoundSet"};
			cp_broadleaf_sparse2[] = {"Shell_12ga_leaves_SoundSet"};
			cp_conifer_common1[] = {"Shell_12ga_leaves_SoundSet"};
			cp_conifer_common2[] = {"Shell_12ga_leaves_SoundSet"};
			cp_conifer_moss1[] = {"Shell_12ga_leaves_SoundSet"};
			cp_conifer_moss2[] = {"Shell_12ga_leaves_SoundSet"};
			cp_concrete1[] = {"Shell_12ga_default_SoundSet"};
			cp_concrete2[] = {"Shell_12ga_default_SoundSet"};
			concrete_ext[] = {"Shell_12ga_default_SoundSet"};
			concrete_stairs_ext[] = {"Shell_12ga_default_SoundSet"};
			concrete_int[] = {"Shell_12ga_default_int_SoundSet"};
			concrete_stairs[] = {"Shell_12ga_default_SoundSet"};
			ceramic_tiles_ext[] = {"Shell_12ga_default_SoundSet"};
			ceramic_tiles_int[] = {"Shell_12ga_default_SoundSet"};
			ceramic_tiles_roof_ext[] = {"Shell_12ga_default_SoundSet"};
			ceramic_tiles_roof_int[] = {"Shell_12ga_default_SoundSet"};
			cp_dirt[] = {"Shell_12ga_dirt_SoundSet"};
			dirt_ext[] = {"Shell_12ga_dirt_SoundSet"};
			dirt_int[] = {"Shell_12ga_dirt_int_SoundSet"};
			cp_grass[] = {"Shell_12ga_grass_SoundSet"};
			grass_dry_ext[] = {"Shell_12ga_grass_SoundSet"};
			grass_dry_int[] = {"Shell_12ga_grass_int_SoundSet"};
			cp_grass_tall[] = {"Shell_12ga_grass_SoundSet"};
			cp_gravel[] = {"Shell_12ga_gravel_SoundSet"};
			gravel_small_ext[] = {"Shell_12ga_gravel_SoundSet"};
			gravel_small_int[] = {"Shell_12ga_gravel_int_SoundSet"};
			gravel_large_ext[] = {"Shell_12ga_gravel_SoundSet"};
			gravel_large_int[] = {"Shell_12ga_gravel_int_SoundSet"};
			lino_ext[] = {"Shell_12ga_default_SoundSet"};
			lino_int[] = {"Shell_12ga_default_SoundSet"};
			metal_thick_ext[] = {"Shell_12ga_metal_SoundSet"};
			metal_stairs_ext[] = {"Shell_12ga_metal_SoundSet"};
			metal_thick_int[] = {"Shell_12ga_metal_int_SoundSet"};
			metal_thin_ext[] = {"Shell_12ga_metal_SoundSet"};
			metal_thin_int[] = {"Shell_12ga_metal_int_SoundSet"};
			metal_thin_mesh_ext[] = {"Shell_12ga_metal_SoundSet"};
			metal_thin_mesh_int[] = {"Shell_12ga_metal_int_SoundSet"};
			cp_rock[] = {"Shell_12ga_default_SoundSet"};
			rubble_large_ext[] = {"Shell_12ga_gravel_SoundSet"};
			rubble_large_int[] = {"Shell_12ga_gravel_SoundSet"};
			rubble_small_ext[] = {"Shell_12ga_gravel_SoundSet"};
			rubble_small_int[] = {"Shell_12ga_gravel_SoundSet"};
			sand_ext[] = {"Shell_12ga_sand_SoundSet"};
			sand_int[] = {"Shell_12ga_sand_int_SoundSet"};
			stone_ext[] = {"Shell_12ga_sand_SoundSet"};
			stone_int[] = {"Shell_12ga_sand_int_SoundSet"};
			textile_carpet_ext[] = {"Shell_12ga_carpet_SoundSet"};
			textile_carpet_int[] = {"Shell_12ga_carpet_int_SoundSet"};
			trash_ext[] = {"Shell_12ga_default_SoundSet"};
			trash_int[] = {"Shell_12ga_default_SoundSet"};
			wood_parquet_ext[] = {"Shell_12ga_wood_SoundSet"};
			wood_parquet_int[] = {"Shell_12ga_wood_int_SoundSet"};
			wood_planks_ext[] = {"Shell_12ga_wood_SoundSet"};
			wood_planks_stairs_ext[] = {"Shell_12ga_wood_SoundSet"};
			wood_planks_int[] = {"Shell_12ga_wood_int_SoundSet"};
			wood_planks_stairs_int[] = {"Shell_12ga_wood_int_SoundSet"};
			fresh_water_ext[] = {"Shell_12ga_water_SoundSet"};
			fresh_water_int[] = {"Shell_12ga_water_int_SoundSet"};
			water_int[] = {"Shell_12ga_water_int_SoundSet"};
			water[] = {"Shell_12ga_water_int_SoundSet"};
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 110;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 110;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="sound";
		};
	};
	class Bullet_12Slug540gr: Bullet_Base
	{
		scope = 1;
		proxyShape="\dz\weapons\projectiles\shotgunshell_slug.p3d";
		casing="FxCartridge_12Slug";
		round="FxRound_12Slug";
		spawnPileType="Ammo_12gaSlug540gr";
		hit=11;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=510;
		typicalSpeed=530;
		airFriction=-0.0049999999;
		caliber=1;
		deflecting=0;
		damageBarrel=600;
		damageBarrelDestroyed=600;
		weight= 0.028;
		impactBehaviour=0;
		hitAnimation=1;
		unconRefillModifier=1.75;
		class SoundSetsGroundHits
		{
			default[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			asphalt_ext[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			asphalt_destroyed_ext[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			asphalt_int[]=
			{
				"Shell_12ga_default_int_SoundSet"
			};
			asphalt_destroyed_int[]=
			{
				"Shell_12ga_default_int_SoundSet"
			};
			asphalt_felt[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			asphalt_felt_int[]=
			{
				"Shell_12ga_default_int_SoundSet"
			};
			cp_broadleaf_dense1[]=
			{
				"Shell_12ga_leaves_SoundSet"
			};
			cp_broadleaf_dense2[]=
			{
				"Shell_12ga_leaves_SoundSet"
			};
			cp_broadleaf_sparse1[]=
			{
				"Shell_12ga_leaves_SoundSet"
			};
			cp_broadleaf_sparse2[]=
			{
				"Shell_12ga_leaves_SoundSet"
			};
			cp_conifer_common1[]=
			{
				"Shell_12ga_leaves_SoundSet"
			};
			cp_conifer_common2[]=
			{
				"Shell_12ga_leaves_SoundSet"
			};
			cp_conifer_moss1[]=
			{
				"Shell_12ga_leaves_SoundSet"
			};
			cp_conifer_moss2[]=
			{
				"Shell_12ga_leaves_SoundSet"
			};
			cp_concrete1[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			cp_concrete2[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			concrete_ext[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			concrete_stairs_ext[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			concrete_int[]=
			{
				"Shell_12ga_default_int_SoundSet"
			};
			concrete_stairs[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			ceramic_tiles_ext[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			ceramic_tiles_int[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			ceramic_tiles_roof_ext[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			ceramic_tiles_roof_int[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			cp_dirt[]=
			{
				"Shell_12ga_dirt_SoundSet"
			};
			dirt_ext[]=
			{
				"Shell_12ga_dirt_SoundSet"
			};
			dirt_int[]=
			{
				"Shell_12ga_dirt_int_SoundSet"
			};
			cp_grass[]=
			{
				"Shell_12ga_grass_SoundSet"
			};
			grass_dry_ext[]=
			{
				"Shell_12ga_grass_SoundSet"
			};
			grass_dry_int[]=
			{
				"Shell_12ga_grass_int_SoundSet"
			};
			cp_grass_tall[]=
			{
				"Shell_12ga_grass_SoundSet"
			};
			cp_gravel[]=
			{
				"Shell_12ga_gravel_SoundSet"
			};
			gravel_small_ext[]=
			{
				"Shell_12ga_gravel_SoundSet"
			};
			gravel_small_int[]=
			{
				"Shell_12ga_gravel_int_SoundSet"
			};
			gravel_large_ext[]=
			{
				"Shell_12ga_gravel_SoundSet"
			};
			gravel_large_int[]=
			{
				"Shell_12ga_gravel_int_SoundSet"
			};
			lino_ext[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			lino_int[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			metal_thick_ext[]=
			{
				"Shell_12ga_metal_SoundSet"
			};
			metal_stairs_ext[]=
			{
				"Shell_12ga_metal_SoundSet"
			};
			metal_thick_int[]=
			{
				"Shell_12ga_metal_int_SoundSet"
			};
			metal_thin_ext[]=
			{
				"Shell_12ga_metal_SoundSet"
			};
			metal_thin_int[]=
			{
				"Shell_12ga_metal_int_SoundSet"
			};
			metal_thin_mesh_ext[]=
			{
				"Shell_12ga_metal_SoundSet"
			};
			metal_thin_mesh_int[]=
			{
				"Shell_12ga_metal_int_SoundSet"
			};
			cp_rock[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			rubble_large_ext[]=
			{
				"Shell_12ga_gravel_SoundSet"
			};
			rubble_large_int[]=
			{
				"Shell_12ga_gravel_SoundSet"
			};
			rubble_small_ext[]=
			{
				"Shell_12ga_gravel_SoundSet"
			};
			rubble_small_int[]=
			{
				"Shell_12ga_gravel_SoundSet"
			};
			sand_ext[]=
			{
				"Shell_12ga_sand_SoundSet"
			};
			sand_int[]=
			{
				"Shell_12ga_sand_int_SoundSet"
			};
			stone_ext[]=
			{
				"Shell_12ga_sand_SoundSet"
			};
			stone_int[]=
			{
				"Shell_12ga_sand_int_SoundSet"
			};
			textile_carpet_ext[]=
			{
				"Shell_12ga_carpet_SoundSet"
			};
			textile_carpet_int[]=
			{
				"Shell_12ga_carpet_int_SoundSet"
			};
			trash_ext[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			trash_int[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			wood_parquet_ext[]=
			{
				"Shell_12ga_wood_SoundSet"
			};
			wood_parquet_int[]=
			{
				"Shell_12ga_wood_int_SoundSet"
			};
			wood_planks_ext[]=
			{
				"Shell_12ga_wood_SoundSet"
			};
			wood_planks_stairs_ext[]=
			{
				"Shell_12ga_wood_SoundSet"
			};
			wood_planks_int[]=
			{
				"Shell_12ga_wood_int_SoundSet"
			};
			wood_planks_stairs_int[]=
			{
				"Shell_12ga_wood_int_SoundSet"
			};
			fresh_water_ext[]=
			{
				"Shell_12ga_water_SoundSet"
			};
			fresh_water_int[]=
			{
				"Shell_12ga_water_int_SoundSet"
			};
			water_int[]=
			{
				"Shell_12ga_water_int_SoundSet"
			};
			water[]=
			{
				"Shell_12ga_water_int_SoundSet"
			};
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 600;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 110;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class Bullet_12gaSlugPustishka: Bullet_Base
	{
		scope = 1;
		proxyShape="\dz\weapons\projectiles\shotgunshell_slug.p3d";
		casing="FxCartridge_12Slug";
		round="FxRound_12Slug";
		spawnPileType="Ammo_12gaSlugPustishka";
		hit=11;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=510;
		typicalSpeed=530;
		airFriction= -0.005;
		caliber=1;
		deflecting=0;
		damageBarrel=600;
		damageBarrelDestroyed=600;
		weight=0.09;
		impactBehaviour=0;
		hitAnimation=1;
		unconRefillModifier=1.75;
		class SoundSetsGroundHits
		{
			default[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			asphalt_ext[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			asphalt_destroyed_ext[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			asphalt_int[]=
			{
				"Shell_12ga_default_int_SoundSet"
			};
			asphalt_destroyed_int[]=
			{
				"Shell_12ga_default_int_SoundSet"
			};
			asphalt_felt[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			asphalt_felt_int[]=
			{
				"Shell_12ga_default_int_SoundSet"
			};
			cp_broadleaf_dense1[]=
			{
				"Shell_12ga_leaves_SoundSet"
			};
			cp_broadleaf_dense2[]=
			{
				"Shell_12ga_leaves_SoundSet"
			};
			cp_broadleaf_sparse1[]=
			{
				"Shell_12ga_leaves_SoundSet"
			};
			cp_broadleaf_sparse2[]=
			{
				"Shell_12ga_leaves_SoundSet"
			};
			cp_conifer_common1[]=
			{
				"Shell_12ga_leaves_SoundSet"
			};
			cp_conifer_common2[]=
			{
				"Shell_12ga_leaves_SoundSet"
			};
			cp_conifer_moss1[]=
			{
				"Shell_12ga_leaves_SoundSet"
			};
			cp_conifer_moss2[]=
			{
				"Shell_12ga_leaves_SoundSet"
			};
			cp_concrete1[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			cp_concrete2[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			concrete_ext[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			concrete_stairs_ext[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			concrete_int[]=
			{
				"Shell_12ga_default_int_SoundSet"
			};
			concrete_stairs[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			ceramic_tiles_ext[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			ceramic_tiles_int[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			ceramic_tiles_roof_ext[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			ceramic_tiles_roof_int[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			cp_dirt[]=
			{
				"Shell_12ga_dirt_SoundSet"
			};
			dirt_ext[]=
			{
				"Shell_12ga_dirt_SoundSet"
			};
			dirt_int[]=
			{
				"Shell_12ga_dirt_int_SoundSet"
			};
			cp_grass[]=
			{
				"Shell_12ga_grass_SoundSet"
			};
			grass_dry_ext[]=
			{
				"Shell_12ga_grass_SoundSet"
			};
			grass_dry_int[]=
			{
				"Shell_12ga_grass_int_SoundSet"
			};
			cp_grass_tall[]=
			{
				"Shell_12ga_grass_SoundSet"
			};
			cp_gravel[]=
			{
				"Shell_12ga_gravel_SoundSet"
			};
			gravel_small_ext[]=
			{
				"Shell_12ga_gravel_SoundSet"
			};
			gravel_small_int[]=
			{
				"Shell_12ga_gravel_int_SoundSet"
			};
			gravel_large_ext[]=
			{
				"Shell_12ga_gravel_SoundSet"
			};
			gravel_large_int[]=
			{
				"Shell_12ga_gravel_int_SoundSet"
			};
			lino_ext[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			lino_int[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			metal_thick_ext[]=
			{
				"Shell_12ga_metal_SoundSet"
			};
			metal_stairs_ext[]=
			{
				"Shell_12ga_metal_SoundSet"
			};
			metal_thick_int[]=
			{
				"Shell_12ga_metal_int_SoundSet"
			};
			metal_thin_ext[]=
			{
				"Shell_12ga_metal_SoundSet"
			};
			metal_thin_int[]=
			{
				"Shell_12ga_metal_int_SoundSet"
			};
			metal_thin_mesh_ext[]=
			{
				"Shell_12ga_metal_SoundSet"
			};
			metal_thin_mesh_int[]=
			{
				"Shell_12ga_metal_int_SoundSet"
			};
			cp_rock[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			rubble_large_ext[]=
			{
				"Shell_12ga_gravel_SoundSet"
			};
			rubble_large_int[]=
			{
				"Shell_12ga_gravel_SoundSet"
			};
			rubble_small_ext[]=
			{
				"Shell_12ga_gravel_SoundSet"
			};
			rubble_small_int[]=
			{
				"Shell_12ga_gravel_SoundSet"
			};
			sand_ext[]=
			{
				"Shell_12ga_sand_SoundSet"
			};
			sand_int[]=
			{
				"Shell_12ga_sand_int_SoundSet"
			};
			stone_ext[]=
			{
				"Shell_12ga_sand_SoundSet"
			};
			stone_int[]=
			{
				"Shell_12ga_sand_int_SoundSet"
			};
			textile_carpet_ext[]=
			{
				"Shell_12ga_carpet_SoundSet"
			};
			textile_carpet_int[]=
			{
				"Shell_12ga_carpet_int_SoundSet"
			};
			trash_ext[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			trash_int[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			wood_parquet_ext[]=
			{
				"Shell_12ga_wood_SoundSet"
			};
			wood_parquet_int[]=
			{
				"Shell_12ga_wood_int_SoundSet"
			};
			wood_planks_ext[]=
			{
				"Shell_12ga_wood_SoundSet"
			};
			wood_planks_stairs_ext[]=
			{
				"Shell_12ga_wood_SoundSet"
			};
			wood_planks_int[]=
			{
				"Shell_12ga_wood_int_SoundSet"
			};
			wood_planks_stairs_int[]=
			{
				"Shell_12ga_wood_int_SoundSet"
			};
			fresh_water_ext[]=
			{
				"Shell_12ga_water_SoundSet"
			};
			fresh_water_int[]=
			{
				"Shell_12ga_water_int_SoundSet"
			};
			water_int[]=
			{
				"Shell_12ga_water_int_SoundSet"
			};
			water[]=
			{
				"Shell_12ga_water_int_SoundSet"
			};
			
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 1500;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 110;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
};

