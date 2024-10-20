class CfgPatches
{
	class Areal_vanil_modded
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters"
		};
	};
};
class CfgMods
{
	class Areal_vanil_modded
	{
		dir="Areal_vanil_modded";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="Areal_vanil_modded";
		credits="";
		author="";
		authorID="0";
		version=0.1;
		extra=0;
		type="mod";
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Areal_vanil_modded\Scripts\4_World"
				};
			};
		};
	};
};
