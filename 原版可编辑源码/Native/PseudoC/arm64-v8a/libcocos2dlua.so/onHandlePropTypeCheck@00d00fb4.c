
/* cocosbuilder::MenuItemLoader::onHandlePropTypeCheck(cocos2d::Node*, cocos2d::Node*, char const*,
   bool, cocosbuilder::CCBReader*) */

void cocosbuilder::MenuItemLoader::onHandlePropTypeCheck
               (Node *param_1,Node *param_2,char *param_3,bool param_4,CCBReader *param_5)

{
  int iVar1;
  
  iVar1 = strcmp((char *)(ulong)param_4,"isEnabled");
  if (iVar1 != 0) {
    NodeLoader::onHandlePropTypeCheck
              (param_1,param_2,param_3,param_4,(CCBReader *)(ulong)((uint)param_5 & 1));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d01040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2 + 0x550))(param_2,(uint)param_5 & 1);
  return;
}

