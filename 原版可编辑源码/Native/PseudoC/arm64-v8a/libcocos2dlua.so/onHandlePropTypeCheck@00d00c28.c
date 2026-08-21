
/* cocosbuilder::LayerLoader::onHandlePropTypeCheck(cocos2d::Node*, cocos2d::Node*, char const*,
   bool, cocosbuilder::CCBReader*) */

void cocosbuilder::LayerLoader::onHandlePropTypeCheck
               (Node *param_1,Node *param_2,char *param_3,bool param_4,CCBReader *param_5)

{
  int iVar1;
  char *__s1;
  
  __s1 = (char *)(ulong)param_4;
  iVar1 = strcmp(__s1,"isTouchEnabled");
  if (iVar1 == 0) {
    cocos2d::Layer::setTouchEnabled((Layer *)param_2,(bool)((byte)param_5 & 1));
    return;
  }
  iVar1 = strcmp(__s1,"isAccelerometerEnabled");
  if (iVar1 != 0) {
    iVar1 = strcmp(__s1,"isMouseEnabled");
    if ((iVar1 != 0) && (iVar1 = strcmp(__s1,"isKeyboardEnabled"), iVar1 != 0)) {
      NodeLoader::onHandlePropTypeCheck
                (param_1,param_2,param_3,param_4,(CCBReader *)(ulong)((uint)param_5 & 1));
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d00d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2 + 0x5f0))(param_2,(uint)param_5 & 1);
  return;
}

