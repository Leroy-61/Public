class CfgPatches
{
	class Areal_ammo_stack
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {

			"DZ_Weapons_Magazines",
			"DZ_Weapons_Ammunition"
			
			};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Ammunition_Base;
	class Ammo_45ACP: Ammunition_Base
	{
		scope = 2;
		weight = 1;
		count = 200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500000;
				};
			};
		};
	};
	class Ammo_308Win: Ammunition_Base
	{
		scope = 2;
		weight = 1;
		count = 200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500000;
				};
			};
		};
	};
	class Ammo_308WinTracer: Ammunition_Base
	{
		scope = 2;
		weight = 1;
		count = 200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500000;
				};
			};
		};
	};
	class Ammo_9x19: Ammunition_Base
	{
		scope = 2;
		weight = 1;
		count = 200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500000;
				};
			};
		};
	};
	class Ammo_380: Ammunition_Base
	{
		scope = 2;
		weight = 1;
		count = 200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500000;
				};
			};
		};
	};
	class Ammo_556x45: Ammunition_Base
	{
		scope = 2;
		weight = 1;
		count = 200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500000;
				};
			};
		};
	};
	class Ammo_556x45Tracer: Ammunition_Base
	{
		scope = 2;
		weight = 1;
		count = 200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500000;
				};
			};
		};
	};
	class Ammo_762x54: Ammunition_Base
	{
		scope = 2;
		weight = 1;
		count = 200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500000;
				};
			};
		};
	};
	class Ammo_762x54Tracer: Ammunition_Base
	{
		scope = 2;
		weight = 1;
		count = 200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500000;
				};
			};
		};
	};
	class Ammo_762x39: Ammunition_Base
	{
		scope = 2;
		weight = 1;
		count = 200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500000;
				};
			};
		};
	};
	class Ammo_762x39Tracer: Ammunition_Base
	{
		scope = 2;
		weight = 1;
		count = 200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500000;
				};
			};
		};
	};
	class Ammo_9x39AP: Ammunition_Base
	{
		scope = 2;
		weight = 1;
		count = 200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500000;
				};
			};
		};
	};
	class Ammo_9x39: Ammunition_Base
	{
		scope = 2;
		weight = 1;
		count = 200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500000;
				};
			};
		};
	};
		class Ammo_12gaSlug: Ammunition_Base
	{
		scope = 2;
		weight = 1;
		count = 200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500000;
				};
			};
		};
	};
	class Ammo_12gaSlugmod: Ammunition_Base
	{
		scope = 2;
		displayName = "Нарезной патрон 12 калибра";
		descriptionShort = "Охотничьи патроны 12 калибра";
		iconCartridge = 4;
		weight = 1;
		count = 200;
		model = "\dz\weapons\ammunition\12ga_rifled_slug.p3d";
		ammo = "Bullet_12GaugeSlugmod";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 15000000;
				};
			};
		};
	};
	class Ammo_12gaSlug540gr: Ammunition_Base
	{
		scope = 2;
		displayName = "Пуля 540gr";
		descriptionShort = "Пуля калибра 12, массой 540 гран (приблизительно 35 грамм), относится к категории сверхтяжелых пуль для гладкоствольного оружия. Ее значительная масса обеспечивает высокую останавливающую силу, что делает ее эффективной для охоты на крупную дичь. Пуля не смогла пробить большинство испытываемых внутри периметра бронепластин, однако за счет своей кинетической энергии наносит не совместимые с жизнью заброневые травмы.";
		iconCartridge = 4;
		weight = 1;
		count = 200;
		model = "\dz\weapons\ammunition\12ga_00buck.p3d";
		ammo = "Bullet_12Slug540gr"; 
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 15000000;
				};
			};
		};
	};
	class Ammo_12gaSlugPustishka: Ammunition_Base
	{
		scope = 2;
		displayName = "Пустышки 12 калибра";
		descriptionShort = "Кустарный боеприпас, разработанный неизвестным техником внутри периметра. Этот патрон снаряжен специальной пулей, содержащей стабилизированную частицу артефакта гравитационной природы. При столкновении с объектом структура артефакта разрушается, что вызывает мгновенное увеличение объема, создавая эффект локального перепада давления, сходного по своему эффекту с детонацией взрывчатых веществ. Ученым так и не удалось обнаружить следов протекция нестандартных химических реакций  после срабатывания этого боеприпаса.";
		iconCartridge = 4;
		weight = 1;
		count = 200;
		model = "\dz\weapons\ammunition\12ga_beanbag.p3d";
		ammo = "Bullet_12gaSlugPustishka";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 15000000;
				};
			};
		};
	};
	class Ammo_12gaRubberSlug: Ammunition_Base
	{
		scope = 2;
		weight = 1;
		count = 200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500000;
				};
			};
		};
	};
	class Ammo_12gaBeanbag: Ammunition_Base
	{
		scope = 2;
		weight = 1;
		count = 200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500000;
				};
			};
		};
	};
	class Ammo_357: Ammunition_Base
	{
		scope = 2;
		weight = 1;
		count = 200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500000;
				};
			};
		};
	};
	class Ammo_545x39: Ammunition_Base
	{
		scope = 2;
		weight = 1;
		count = 200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500000;
				};
			};
		};
	};
	class Ammo_545x39Tracer: Ammunition_Base
	{
		scope = 2;
		weight = 1;
		count = 200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500000;
				};
			};
		};
	};
};
