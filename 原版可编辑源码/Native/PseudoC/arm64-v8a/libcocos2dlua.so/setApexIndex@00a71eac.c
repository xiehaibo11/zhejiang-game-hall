
/* fairygui::GComponent::setApexIndex(int) */

void __thiscall fairygui::GComponent::setApexIndex(GComponent *this,int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(int *)(this + 0x254) != param_1) &&
     (*(int *)(this + 0x254) = param_1, *(int *)(this + 0x250) == 2)) {
    lVar1 = cocos2d::Director::getInstance();
    uVar2 = cocos2d::Scheduler::isScheduled
                      (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_buildNativeDisplayList
                      );
                    /* try { // try from 00a71ef4 to 00b71efb has its CatchHandler @ 00a720e0 */
    if ((uVar2 & 1) == 0) {
      lVar1 = cocos2d::Director::getInstance();
                    /* try { // try from 00a71f2c to 00b71f33 has its CatchHandler @ 00a720b4 */
      cocos2d::Scheduler::schedule
                (*(Scheduler **)(lVar1 + 0xa0),__selector_buildNativeDisplayList,(Ref *)0x0,0.0,
                 SUB81(this,0));
      return;
    }
  }
  return;
}

