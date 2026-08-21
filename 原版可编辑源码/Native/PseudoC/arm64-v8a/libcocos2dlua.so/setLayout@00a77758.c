
/* fairygui::GList::setLayout(fairygui::ListLayoutType) */

void __thiscall fairygui::GList::setLayout(GList *this,int param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(this + 0x2e4) != param_2) {
    *(int *)(this + 0x2e4) = param_2;
    GComponent::setBoundsChangedFlag((GComponent *)this);
    if (this[0x338] != (GList)0x0) {
      *(undefined4 *)(this + 0x358) = 2;
      lVar1 = cocos2d::Director::getInstance();
      uVar2 = cocos2d::Scheduler::isScheduled
                        (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_doRefreshVirtualList
                        );
      if ((uVar2 & 1) == 0) {
        lVar1 = cocos2d::Director::getInstance();
                    /* try { // try from 00a777d8 to 00b77853 has its CatchHandler @ 00a777d8
                       catch() { ... } // from try @ 00a777d8 with catch @ 00a777d8
                       catch() { ... } // from try @ 00a77a64 with catch @ 00a777d8
                       catch() { ... } // from try @ 00a77b38 with catch @ 00a777d8 */
        cocos2d::Scheduler::schedule
                  (*(Scheduler **)(lVar1 + 0xa0),__selector_doRefreshVirtualList,(Ref *)0x0,0.0,
                   SUB81(this,0));
        return;
      }
    }
  }
  return;
}

