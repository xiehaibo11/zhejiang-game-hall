
/* cocosbuilder::ControlButtonLoader::onHandlePropTypeCheck(cocos2d::Node*, cocos2d::Node*, char
   const*, bool, cocosbuilder::CCBReader*) */

void cocosbuilder::ControlButtonLoader::onHandlePropTypeCheck
               (Node *param_1,Node *param_2,char *param_3,bool param_4,CCBReader *param_5)

{
  int iVar1;
  
  iVar1 = strcmp((char *)(ulong)param_4,"zoomOnTouchDown");
  if (iVar1 != 0) {
    ControlLoader::onHandlePropTypeCheck
              (param_1,param_2,param_3,param_4,(CCBReader *)(ulong)((uint)param_5 & 1));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00cff3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2 + 0x790))(param_2,(uint)param_5 & 1);
  return;
}

