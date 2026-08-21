
/* fairygui::GList::setAutoResizeItem(bool) */

void __thiscall fairygui::GList::setAutoResizeItem(GList *this,bool param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (this[0x300] != (GList)param_1) {
    this[0x300] = (GList)param_1;
    GComponent::setBoundsChangedFlag((GComponent *)this);
    if (this[0x338] != (GList)0x0) {
      *(undefined4 *)(this + 0x358) = 2;
                    /* try { // try from 00a77c14 to 00b77c5f has its CatchHandler @ 00a77c14
                       catch() { ... } // from try @ 00a77c14 with catch @ 00a77c14
                       catch() { ... } // from try @ 00a77c64 with catch @ 00a77c14 */
      lVar1 = cocos2d::Director::getInstance();
      uVar2 = cocos2d::Scheduler::isScheduled
                        (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_doRefreshVirtualList
                        );
      if ((uVar2 & 1) == 0) {
        lVar1 = cocos2d::Director::getInstance();
                    /* try { // try from 00a77c60 to 00b77c63 has its CatchHandler @ 00a77c98 */
                    /* try { // try from 00a77c64 to 00b77cab has its CatchHandler @ 00a77c14 */
        cocos2d::Scheduler::schedule
                  (*(Scheduler **)(lVar1 + 0xa0),__selector_doRefreshVirtualList,(Ref *)0x0,0.0,
                   SUB81(this,0));
        return;
      }
    }
  }
  return;
}

