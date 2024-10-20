modded class ModItemRegisterCallbacks
{
	
	override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		pType.AddItemInHandsProfileIK("Ammo_12gaSlug540gr", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/ammunition/12ga_00buck.anm");
		pType.AddItemInHandsProfileIK("Ammo_12gaSlugPustishka", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/ammunition/12ga_00buck.anm"); 
	    pType.AddItemInHandsProfileIK("Ammo_12gaSlugmod", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/ammunition/12ga_00buck.anm");
	};	
};