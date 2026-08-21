
/* fairygui::ScrollPane::lockFooter(int) */

void __thiscall fairygui::ScrollPane::lockFooter(ScrollPane *this,int param_1)

{
  ScrollPane *pSVar1;
  ScrollPane *pSVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(int *)(this + 0xcc) != param_1) {
    lVar6 = *(long *)(this + 0x108);
    fVar7 = *(float *)(lVar6 + 0x50);
    lVar4 = (**(code **)(**(long **)(lVar6 + 400) + 0x168))();
    fVar8 = *(float *)(lVar4 + 4);
    fVar9 = *(float *)(lVar6 + 0x54);
                    /* try { // try from 00a94660 to 00b94703 has its CatchHandler @ 00a94810 */
    *(int *)(this + 0xcc) = param_1;
    uVar5 = UIEventDispatcher::isDispatchingEvent(*(UIEventDispatcher **)(this + 0xf8),0x2b);
    if ((uVar5 & 1) == 0) {
      iVar3 = *(int *)(this + 0x48);
      fVar8 = fVar8 - fVar9;
      fVar9 = fVar7;
      if (iVar3 != 0) {
        fVar9 = fVar8;
      }
      if (0.0 <= fVar9) {
        *(float *)(this + 0xd4) = fVar7;
        *(float *)(this + 0xd8) = fVar8;
        *(undefined4 *)(this + 0xdc) = 0;
        *(undefined4 *)(this + 0xe0) = 0;
        pSVar1 = this + 0x74;
        if (iVar3 != 0) {
          pSVar1 = this + 0x78;
        }
        if (*(float *)pSVar1 == 0.0) {
          pSVar1 = this + 0x6c;
          if (iVar3 != 0) {
            pSVar1 = this + 0x70;
          }
          pSVar2 = this + 100;
          if (iVar3 != 0) {
            pSVar2 = this + 0x68;
          }
          fVar7 = (*(float *)pSVar1 + (float)*(int *)(this + 0xcc)) - *(float *)pSVar2;
          fVar8 = 0.0;
          if (0.0 < fVar7) {
            fVar8 = fVar7;
          }
        }
        else {
          fVar8 = *(float *)pSVar1 + (float)*(int *)(this + 0xcc);
        }
                    /* try { // try from 00a94704 to 00b9477f has its CatchHandler @ 00a944c4 */
        lVar4 = 0xdc;
        if (iVar3 != 0) {
          lVar4 = 0xe0;
        }
        *(float *)(this + lVar4) = -fVar8 - fVar9;
        *(undefined8 *)(this + 0xec) = 0x3e99999a3e99999a;
        *(undefined8 *)(this + 0xe4) = 0;
        *(undefined4 *)(this + 0xd0) = 2;
        lVar4 = cocos2d::Director::getInstance();
        uVar5 = cocos2d::Scheduler::isScheduled
                          (*(_func_void_float **)(lVar4 + 0xa0),(Ref *)tweenUpdate);
        if ((uVar5 & 1) == 0) {
          lVar4 = cocos2d::Director::getInstance();
          cocos2d::Scheduler::schedule
                    (*(Scheduler **)(lVar4 + 0xa0),tweenUpdate,(Ref *)0x0,0.0,SUB81(this,0));
        }
        updateScrollBarVisible(this);
        lVar4 = cocos2d::Director::getInstance();
                    /* try { // try from 00a94780 to 00b94793 has its CatchHandler @ 00a947fc */
        uVar5 = cocos2d::Scheduler::isScheduled
                          (*(_func_void_float **)(lVar4 + 0xa0),(Ref *)tweenUpdate);
        if ((uVar5 & 1) == 0) {
          lVar4 = cocos2d::Director::getInstance();
                    /* try { // try from 00a947bc to 00b947cf has its CatchHandler @ 00a94810 */
                    /* try { // try from 00a947d0 to 00b94863 has its CatchHandler @ 00a944c4 */
          cocos2d::Scheduler::schedule
                    (*(Scheduler **)(lVar4 + 0xa0),tweenUpdate,(Ref *)0x0,0.0,SUB81(this,0));
          return;
        }
      }
    }
  }
                    /* try { // try from 00a947a4 to 00b947b7 has its CatchHandler @ 00a9480c */
  return;
}

