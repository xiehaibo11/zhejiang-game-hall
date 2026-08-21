
/* cocosbuilder::ControlLoader::onHandlePropTypeCheck(cocos2d::Node*, cocos2d::Node*, char const*,
   bool, cocosbuilder::CCBReader*) */

void cocosbuilder::ControlLoader::onHandlePropTypeCheck
               (Node *param_1,Node *param_2,char *param_3,bool param_4,CCBReader *param_5)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = strcmp((char *)(ulong)param_4,"enabled");
  if (iVar1 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_2 + 0x650);
  }
  else {
    iVar1 = strcmp((char *)(ulong)param_4,"selected");
    if (iVar1 != 0) {
      NodeLoader::onHandlePropTypeCheck
                (param_1,param_2,param_3,param_4,(CCBReader *)(ulong)((uint)param_5 & 1));
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_2 + 0x660);
  }
                    /* WARNING: Could not recover jumptable at 0x00cffbd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,(uint)param_5 & 1);
  return;
}

