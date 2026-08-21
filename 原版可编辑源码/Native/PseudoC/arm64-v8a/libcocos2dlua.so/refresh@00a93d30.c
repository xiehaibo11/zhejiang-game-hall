
/* fairygui::ScrollPane::refresh() */

void fairygui::ScrollPane::refresh(void)

{
  long lVar1;
  ScrollPane *in_x0;
  long lVar2;
  float fVar3;
  float in_s1;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = cocos2d::Director::getInstance();
  cocos2d::Scheduler::unschedule(*(_func_void_float **)(lVar2 + 0xa0),(Ref *)__selector_refresh);
  in_x0[0x45] = (ScrollPane)0x0;
  if (in_x0[0x58] == (ScrollPane)0x0) {
    if (in_x0[0x4d] == (ScrollPane)0x0) goto LAB_00a93dd4;
                    /* try { // try from 00a93e64 to 00b93e73 has its CatchHandler @ 00a94268 */
    fVar6 = *(float *)(in_x0 + 0x5c);
                    /* try { // try from 00a93e74 to 00b93e8f has its CatchHandler @ 00a94264 */
    fVar5 = *(float *)(in_x0 + 0x60);
    fVar3 = -fVar6;
    local_60 = fVar6;
    fStack_5c = fVar5;
    fVar4 = (float)(**(code **)(**(long **)(in_x0 + 0xf8) + 0xd0))
                             (*(long **)(in_x0 + 0xf8),&local_60);
    if ((0.0 < fVar6) && (fVar6 < *(float *)(in_x0 + 0x74))) {
      fVar3 = -fVar4;
    }
    fVar4 = -fVar5;
                    /* try { // try from 00a93eb8 to 00b93ebf has its CatchHandler @ 00a94260 */
    if ((0.0 < fVar5) && (fVar5 < *(float *)(in_x0 + 0x78))) {
                    /* try { // try from 00a93ec0 to 00b93eeb has its CatchHandler @ 00a93da0 */
      fVar4 = -in_s1;
    }
  }
  else {
    fVar4 = *(float *)(in_x0 + 0x60);
                    /* try { // try from 00a93da0 to 00b93e17 has its CatchHandler @ 00a93da0
                       catch() { ... } // from try @ 00a93da0 with catch @ 00a93da0
                       catch() { ... } // from try @ 00a93ec0 with catch @ 00a93da0
                       catch() { ... } // from try @ 00a93f90 with catch @ 00a93da0
                       catch() { ... } // from try @ 00a94074 with catch @ 00a93da0
                       catch() { ... } // from try @ 00a94140 with catch @ 00a93da0
                       catch() { ... } // from try @ 00a941ec with catch @ 00a93da0 */
    fVar3 = (float)alignByPage(in_x0,-*(float *)(in_x0 + 0x5c),0,false);
    fVar4 = (float)alignByPage(in_x0,-fVar4,1,false);
  }
  *(float *)(in_x0 + 0x5c) = -fVar3;
  *(float *)(in_x0 + 0x60) = -fVar4;
LAB_00a93dd4:
  refresh2(in_x0);
  UIEventDispatcher::dispatchEvent
            (*(UIEventDispatcher **)(in_x0 + 0xf8),0x28,(void *)0x0,(Value *)&cocos2d::Value::Null);
  if (in_x0[0x45] != (ScrollPane)0x0) {
    in_x0[0x45] = (ScrollPane)0x0;
    lVar2 = cocos2d::Director::getInstance();
                    /* try { // try from 00a93e18 to 00b93e4b has its CatchHandler @ 00a94278 */
    cocos2d::Scheduler::unschedule(*(_func_void_float **)(lVar2 + 0xa0),(Ref *)__selector_refresh);
    refresh2(in_x0);
  }
  updateScrollBarPos(in_x0);
  *(undefined4 *)(in_x0 + 0xbc) = 0;
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 00a93e54 to 00b93e63 has its CatchHandler @ 00a9426c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

