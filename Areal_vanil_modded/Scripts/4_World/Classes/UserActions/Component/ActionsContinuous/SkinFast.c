modded class ActionSkinningCB : ActionContinuousBaseCB
{
    override void CreateActionComponent()
    {
        m_ActionData.m_ActionComponent = new CAContinuousTime( GetDefaultTime() );
    }
    
    float GetDefaultTime()
    {
        string item_type = m_ActionData.m_MainItem.GetType();
        
        switch(item_type)
        {
        
            case "Areal_HuntingKnife": 
                return 0.5;
            break;

            case "Kuvalda_Taiga": 
                 return 0.5;
            break;

            default:
                return UATimeSpent.SKIN;
            break
 
        }
        return -1;
    }
};