
/* fairygui::GList::setAlign(cocos2d::TextHAlignment) */

void __thiscall fairygui::GList::setAlign(GList *this,int param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(this + 0x2f8) != param_2) {
    *(int *)(this + 0x2f8) = param_2;
    GComponent::setBoundsChangedFlag((GComponent *)this);
    if (this[0x338] != (GList)0x0) {
                    /* try { // try from 00a77af4 to 00b77afb has its CatchHandler @ 00a77b6c */
      *(undefined4 *)(this + 0x358) = 2;
      lVar1 = cocos2d::Director::getInstance();
                    /* try { // try from 00a77b00 to 00b77b07 has its CatchHandler @ 00a77b5c */
      uVar2 = cocos2d::Scheduler::isScheduled
                        (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_doRefreshVirtualList
                        );
      if ((uVar2 & 1) == 0) {
        lVar1 = cocos2d::Director::getInstance();
                    /* try { // try from 00a77b30 to 00b77b37 has its CatchHandler @ 00a77b4c */
                    /* try { // try from 00a77b38 to 00b77b93 has its CatchHandler @ 00a777d8 */
                    /* catch() { ... } // from try @ 00a77a38 with catch @ 00a77b4c
                       catch() { ... } // from try @ 00a77b30 with catch @ 00a77b4c */
        cocos2d::Scheduler::schedule
                  (*(Scheduler **)(lVar1 + 0xa0),__selector_doRefreshVirtualList,(Ref *)0x0,0.0,
                   SUB81(this,0));
        return;
      }
    }
  }
                    /* try { // try from 00a77b18 to 00b77b1f has its CatchHandler @ 00a77b50 */
  return;
}

