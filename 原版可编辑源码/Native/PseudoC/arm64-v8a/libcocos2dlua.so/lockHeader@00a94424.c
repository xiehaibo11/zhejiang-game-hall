
/* fairygui::ScrollPane::lockHeader(int) */

void __thiscall fairygui::ScrollPane::lockHeader(ScrollPane *this,int param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(int *)(this + 200) != param_1) {
    lVar3 = *(long *)(this + 0x108);
    fVar4 = *(float *)(lVar3 + 0x50);
    lVar1 = (**(code **)(**(long **)(lVar3 + 400) + 0x168))();
    fVar5 = *(float *)(lVar1 + 4);
    fVar6 = *(float *)(lVar3 + 0x54);
    *(int *)(this + 200) = param_1;
    uVar2 = UIEventDispatcher::isDispatchingEvent(*(UIEventDispatcher **)(this + 0xf8),0x2a);
    if ((uVar2 & 1) == 0) {
      fVar5 = fVar5 - fVar6;
      fVar6 = fVar4;
      if (*(int *)(this + 0x48) != 0) {
        fVar6 = fVar5;
      }
      if (0.0 <= fVar6) {
        *(float *)(this + 0xd4) = fVar4;
        *(float *)(this + 0xd8) = fVar5;
        lVar1 = 0xdc;
        if (*(int *)(this + 0x48) != 0) {
          lVar1 = 0xe0;
        }
                    /* try { // try from 00a944c4 to 00b94527 has its CatchHandler @ 00a944c4
                       catch() { ... } // from try @ 00a944c4 with catch @ 00a944c4
                       catch() { ... } // from try @ 00a94704 with catch @ 00a944c4
                       catch() { ... } // from try @ 00a947d0 with catch @ 00a944c4 */
        *(undefined8 *)(this + 0xe0) = 0;
        *(undefined4 *)(this + 0xe8) = 0;
        *(undefined4 *)(this + 0xdc) = 0;
        *(float *)(this + lVar1) = (float)*(int *)(this + 200) - fVar6;
        *(undefined8 *)(this + 0xec) = 0x3e99999a3e99999a;
        *(undefined4 *)(this + 0xd0) = 2;
        lVar1 = cocos2d::Director::getInstance();
        uVar2 = cocos2d::Scheduler::isScheduled
                          (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)tweenUpdate);
        if ((uVar2 & 1) == 0) {
          lVar1 = cocos2d::Director::getInstance();
                    /* try { // try from 00a94528 to 00b9455b has its CatchHandler @ 00a947fc */
          cocos2d::Scheduler::schedule
                    (*(Scheduler **)(lVar1 + 0xa0),tweenUpdate,(Ref *)0x0,0.0,SUB81(this,0));
        }
        updateScrollBarVisible(this);
        lVar1 = cocos2d::Director::getInstance();
        uVar2 = cocos2d::Scheduler::isScheduled
                          (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)tweenUpdate);
        if ((uVar2 & 1) == 0) {
          lVar1 = cocos2d::Director::getInstance();
                    /* try { // try from 00a94574 to 00b9458b has its CatchHandler @ 00a947f4 */
                    /* try { // try from 00a945a0 to 00b945ab has its CatchHandler @ 00a947fc */
          cocos2d::Scheduler::schedule
                    (*(Scheduler **)(lVar1 + 0xa0),tweenUpdate,(Ref *)0x0,0.0,SUB81(this,0));
          return;
        }
      }
    }
  }
                    /* try { // try from 00a94564 to 00b94573 has its CatchHandler @ 00a947f8 */
  return;
}

