
/* cocosbuilder::ScrollViewLoader::onHandlePropTypeIntegerLabeled(cocos2d::Node*, cocos2d::Node*,
   char const*, int, cocosbuilder::CCBReader*) */

void cocosbuilder::ScrollViewLoader::onHandlePropTypeIntegerLabeled
               (Node *param_1,Node *param_2,char *param_3,int param_4,CCBReader *param_5)

{
  int iVar1;
  
  iVar1 = strcmp((char *)(ulong)(uint)param_4,"direction");
  if (iVar1 != 0) {
    NodeLoader::onHandlePropTypeFloatScale
              (param_1,param_2,param_3,(float)(int)param_5,(CCBReader *)(ulong)(uint)param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00cfeecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2 + 0x650))(param_2,(ulong)param_5 & 0xffffffff);
  return;
}

