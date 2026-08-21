
/* fairygui::GList::setColumnCount(int) */

void __thiscall fairygui::GList::setColumnCount(GList *this,int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(this + 0x2ec) != param_1) {
                    /* try { // try from 00a77928 to 00b7794f has its CatchHandler @ 00a77b50 */
    *(int *)(this + 0x2ec) = param_1;
    if (((*(int *)(this + 0x2e4) == 4) || (*(int *)(this + 0x2e4) == 2)) &&
       (GComponent::setBoundsChangedFlag((GComponent *)this), this[0x338] != (GList)0x0)) {
      *(undefined4 *)(this + 0x358) = 2;
      lVar1 = cocos2d::Director::getInstance();
                    /* try { // try from 00a7795c to 00b77973 has its CatchHandler @ 00a77b70 */
      uVar2 = cocos2d::Scheduler::isScheduled
                        (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_doRefreshVirtualList
                        );
      if ((uVar2 & 1) == 0) {
        lVar1 = cocos2d::Director::getInstance();
        cocos2d::Scheduler::schedule
                  (*(Scheduler **)(lVar1 + 0xa0),__selector_doRefreshVirtualList,(Ref *)0x0,0.0,
                   SUB81(this,0));
        return;
      }
    }
  }
                    /* try { // try from 00a77978 to 00b779a3 has its CatchHandler @ 00a77b6c */
  return;
}

