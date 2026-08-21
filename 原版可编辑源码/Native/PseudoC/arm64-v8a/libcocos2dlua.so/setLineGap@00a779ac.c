
/* fairygui::GList::setLineGap(int) */

void __thiscall fairygui::GList::setLineGap(GList *this,int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(this + 0x2f0) != param_1) {
    *(int *)(this + 0x2f0) = param_1;
    GComponent::setBoundsChangedFlag((GComponent *)this);
    if (this[0x338] != (GList)0x0) {
      *(undefined4 *)(this + 0x358) = 2;
      lVar1 = cocos2d::Director::getInstance();
      uVar2 = cocos2d::Scheduler::isScheduled
                        (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_doRefreshVirtualList
                        );
                    /* try { // try from 00a779fc to 00b77a13 has its CatchHandler @ 00a77b60 */
      if ((uVar2 & 1) == 0) {
        lVar1 = cocos2d::Director::getInstance();
                    /* try { // try from 00a77a18 to 00b77a2f has its CatchHandler @ 00a77b54 */
        cocos2d::Scheduler::schedule
                  (*(Scheduler **)(lVar1 + 0xa0),__selector_doRefreshVirtualList,(Ref *)0x0,0.0,
                   SUB81(this,0));
        return;
      }
    }
  }
  return;
}

