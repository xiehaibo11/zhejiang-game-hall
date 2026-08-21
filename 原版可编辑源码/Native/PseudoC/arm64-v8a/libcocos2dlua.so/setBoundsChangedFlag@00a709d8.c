
/* fairygui::GComponent::setBoundsChangedFlag() */

void __thiscall fairygui::GComponent::setBoundsChangedFlag(GComponent *this)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(long *)(this + 0x230) != 0) || (this[0x259] != (GComponent)0x0)) {
    this[600] = (GComponent)0x1;
    lVar1 = cocos2d::Director::getInstance();
                    /* catch() { ... } // from try @ 00a708cc with catch @ 00a70a10
                       catch() { ... } // from try @ 00a709a4 with catch @ 00a70a10 */
                    /* catch() { ... } // from try @ 00a70914 with catch @ 00a70a14
                       catch() { ... } // from try @ 00a709bc with catch @ 00a70a14 */
    uVar2 = cocos2d::Scheduler::isScheduled
                      (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_doUpdateBounds);
    if ((uVar2 & 1) == 0) {
      lVar1 = cocos2d::Director::getInstance();
                    /* try { // try from 00a70a30 to 00b70caf has its CatchHandler @ 00a70a30
                       catch() { ... } // from try @ 00a70a30 with catch @ 00a70a30
                       catch() { ... } // from try @ 00a70d30 with catch @ 00a70a30 */
      cocos2d::Scheduler::schedule
                (*(Scheduler **)(lVar1 + 0xa0),__selector_doUpdateBounds,(Ref *)0x0,0.0,
                 SUB81(this,0));
      return;
    }
  }
  return;
}

