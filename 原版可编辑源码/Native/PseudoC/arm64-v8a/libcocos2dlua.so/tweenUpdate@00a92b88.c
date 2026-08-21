
/* fairygui::ScrollPane::tweenUpdate(float) */

void __thiscall fairygui::ScrollPane::tweenUpdate(ScrollPane *this,float param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  uVar6 = runTween(this,0,param_1);
  fVar4 = (float)runTween(this,1,param_1);
  plVar3 = *(long **)(this + 0x108);
                    /* try { // try from 00a92bcc to 00b92c1b has its CatchHandler @ 00a92bcc
                       catch() { ... } // from try @ 00a92bcc with catch @ 00a92bcc
                       catch() { ... } // from try @ 00a92c68 with catch @ 00a92bcc
                       catch() { ... } // from try @ 00a92cac with catch @ 00a92bcc */
  lVar1 = (**(code **)(*(long *)plVar3[0x32] + 0x168))();
  (**(code **)(*plVar3 + 200))(uVar6,*(float *)(lVar1 + 4) - fVar4,plVar3);
  if (*(int *)(this + 0xd0) == 2) {
    fVar5 = *(float *)(this + 0x74);
    if (0.0 < fVar5) {
      fVar7 = -(float)uVar6;
      fVar8 = (float)NEON_fminnm(fVar5,0);
      if (fVar8 <= fVar7) {
                    /* try { // try from 00a92c1c to 00b92c67 has its CatchHandler @ 00a92cec */
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
        fVar8 = fVar7;
        if (fVar5 <= fVar7) {
          fVar8 = fVar5;
        }
      }
      *(float *)(this + 0x5c) = fVar8;
    }
    fVar5 = *(float *)(this + 0x78);
    if (0.0 < fVar5) {
      fVar4 = -fVar4;
      fVar8 = (float)NEON_fminnm(fVar5,0);
      if (fVar8 <= fVar4) {
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
        fVar8 = fVar4;
        if (fVar5 <= fVar4) {
          fVar8 = fVar5;
        }
      }
      *(float *)(this + 0x60) = fVar8;
    }
    if (this[0x58] != (ScrollPane)0x0) {
                    /* try { // try from 00a92c68 to 00b92c97 has its CatchHandler @ 00a92bcc */
      updatePageController(this);
    }
  }
  if ((*(float *)(this + 0xdc) == 0.0) && (*(float *)(this + 0xe0) == 0.0)) {
    *(undefined4 *)(this + 0xd0) = 0;
    lVar1 = cocos2d::Director::getInstance();
                    /* try { // try from 00a92c98 to 00b92cab has its CatchHandler @ 00a92cec */
    cocos2d::Scheduler::unschedule(*(_func_void_float **)(lVar1 + 0xa0),(Ref *)tweenUpdate);
    loopCheckingCurrent(this);
                    /* try { // try from 00a92cac to 00b92d07 has its CatchHandler @ 00a92bcc */
    updateScrollBarPos(this);
    updateScrollBarVisible(this);
    UIEventDispatcher::dispatchEvent
              (*(UIEventDispatcher **)(this + 0xf8),0x28,(void *)0x0,(Value *)&cocos2d::Value::Null)
    ;
    iVar2 = 0x29;
  }
  else {
    updateScrollBarPos(this);
    iVar2 = 0x28;
  }
                    /* catch() { ... } // from try @ 00a92c1c with catch @ 00a92cec
                       catch() { ... } // from try @ 00a92c98 with catch @ 00a92cec */
  UIEventDispatcher::dispatchEvent
            (*(UIEventDispatcher **)(this + 0xf8),iVar2,(void *)0x0,(Value *)&cocos2d::Value::Null);
  return;
}

