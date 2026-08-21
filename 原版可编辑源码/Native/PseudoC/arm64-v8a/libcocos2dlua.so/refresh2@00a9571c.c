
/* fairygui::ScrollPane::refresh2() */

void __thiscall fairygui::ScrollPane::refresh2(ScrollPane *this)

{
  ScrollPane SVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
                    /* try { // try from 00a95730 to 00b95747 has its CatchHandler @ 00a95e48 */
  if ((*(int *)(this + 0xbc) == 1) && (this[0xb8] == (ScrollPane)0x0)) {
    if (*(float *)(this + 0x74) <= 0.0) {
      fVar6 = (float)(**(code **)(**(long **)(this + 0x108) + 0xe0))();
      if (fVar6 == 0.0) {
        fVar6 = 0.0;
      }
      else {
        fVar6 = 0.0;
                    /* try { // try from 00a95818 to 00b9582f has its CatchHandler @ 00a95e44 */
        (**(code **)(**(long **)(this + 0x108) + 0xd8))(0);
      }
    }
    else {
      fVar6 = (float)-(int)*(float *)(this + 0x5c);
                    /* try { // try from 00a957e8 to 00b95817 has its CatchHandler @ 00a954f4 */
    }
    if (*(float *)(this + 0x78) <= 0.0) {
      lVar5 = *(long *)(this + 0x108);
                    /* try { // try from 00a95854 to 00b9587f has its CatchHandler @ 00a95e10 */
      lVar2 = (**(code **)(**(long **)(lVar5 + 400) + 0x168))();
      fVar9 = 0.0;
      if (*(float *)(lVar2 + 4) - *(float *)(lVar5 + 0x54) != 0.0) {
        plVar4 = *(long **)(this + 0x108);
                    /* try { // try from 00a95880 to 00b958af has its CatchHandler @ 00a954f4 */
        lVar2 = (**(code **)(*(long *)plVar4[0x32] + 0x168))();
        (**(code **)(*plVar4 + 0xe8))(*(undefined4 *)(lVar2 + 4),plVar4);
      }
    }
    else {
                    /* try { // try from 00a95834 to 00b9584b has its CatchHandler @ 00a95e14 */
      fVar9 = (float)-(int)*(float *)(this + 0x60);
    }
    fVar7 = (float)(**(code **)(**(long **)(this + 0x108) + 0xe0))();
                    /* try { // try from 00a958b0 to 00b958c7 has its CatchHandler @ 00a95e40 */
                    /* try { // try from 00a958d4 to 00b958eb has its CatchHandler @ 00a95e00 */
    if ((fVar6 != fVar7) ||
       (lVar5 = *(long *)(this + 0x108), lVar2 = (**(code **)(**(long **)(lVar5 + 400) + 0x168))(),
       fVar9 != *(float *)(lVar2 + 4) - *(float *)(lVar5 + 0x54))) {
      lVar5 = *(long *)(this + 0x108);
      *(undefined8 *)(this + 0xec) = 0x3f0000003f000000;
      fVar7 = *(float *)(lVar5 + 0x50);
      lVar2 = (**(code **)(**(long **)(lVar5 + 400) + 0x168))();
                    /* try { // try from 00a958f8 to 00b9590f has its CatchHandler @ 00a95dc8 */
      fVar8 = *(float *)(lVar2 + 4) - *(float *)(lVar5 + 0x54);
                    /* try { // try from 00a95914 to 00b9594b has its CatchHandler @ 00a95dc4 */
      *(undefined4 *)(this + 0xd0) = 1;
      *(float *)(this + 0xd4) = fVar7;
      *(float *)(this + 0xd8) = fVar8;
      *(float *)(this + 0xdc) = fVar6 - fVar7;
      *(float *)(this + 0xe0) = fVar9 - fVar8;
      *(undefined4 *)(this + 0xe4) = 0;
      *(undefined4 *)(this + 0xe8) = 0;
      lVar2 = cocos2d::Director::getInstance();
      uVar3 = cocos2d::Scheduler::isScheduled
                        (*(_func_void_float **)(lVar2 + 0xa0),(Ref *)tweenUpdate);
      if ((uVar3 & 1) == 0) {
        lVar2 = cocos2d::Director::getInstance();
                    /* try { // try from 00a9594c to 00b9597b has its CatchHandler @ 00a954f4 */
        cocos2d::Scheduler::schedule
                  (*(Scheduler **)(lVar2 + 0xa0),tweenUpdate,(Ref *)0x0,0.0,SUB81(this,0));
      }
      updateScrollBarVisible(this);
      SVar1 = this[0x58];
      goto joined_r0x00a959a0;
    }
    if (*(int *)(this + 0xd0) != 0) {
                    /* try { // try from 00a95998 to 00b959a7 has its CatchHandler @ 00a95dfc */
      killTween(this);
      SVar1 = this[0x58];
      goto joined_r0x00a959a0;
    }
  }
  else {
    if (*(int *)(this + 0xd0) != 0) {
                    /* try { // try from 00a95754 to 00b9576b has its CatchHandler @ 00a95e18 */
      killTween(this);
    }
    plVar4 = *(long **)(this + 0x108);
    fVar6 = *(float *)(this + 0x5c);
    fVar9 = *(float *)(this + 0x60);
                    /* try { // try from 00a95778 to 00b9578f has its CatchHandler @ 00a95dcc */
    lVar2 = (**(code **)(*(long *)plVar4[0x32] + 0x168))();
                    /* try { // try from 00a95794 to 00b957ab has its CatchHandler @ 00a95db4 */
    (**(code **)(*plVar4 + 200))
              ((float)(int)-fVar6,*(float *)(lVar2 + 4) - (float)(int)-fVar9,plVar4);
    loopCheckingCurrent(this);
  }
  SVar1 = this[0x58];
joined_r0x00a959a0:
  if (SVar1 == (ScrollPane)0x0) {
                    /* try { // try from 00a9597c to 00b95993 has its CatchHandler @ 00a95e3c */
    return;
  }
                    /* try { // try from 00a957b4 to 00b957e7 has its CatchHandler @ 00a95db0 */
  updatePageController(this);
  return;
}

