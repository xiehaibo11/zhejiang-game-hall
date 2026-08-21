
/* cocos2d::extension::ScrollView::setContentOffsetInDuration(cocos2d::Vec2, float) */

void cocos2d::extension::ScrollView::setContentOffsetInDuration
               (undefined4 param_1,undefined4 param_2,float param_3,Action *param_4)

{
  long lVar1;
  long *plVar2;
  FiniteTimeAction *pFVar3;
  undefined8 uVar4;
  Ref *this;
  code *pcVar5;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined **local_80;
  code *local_78;
  undefined8 uStack_70;
  Action *local_68;
  undefined ***local_60;
  long local_48;
  
                    /* catch() { ... } // from try @ 00e15088 with catch @ 00e15210 */
                    /* catch() { ... } // from try @ 00e15050 with catch @ 00e15218 */
                    /* catch() { ... } // from try @ 00e1509c with catch @ 00e15224 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00e15064 with catch @ 00e1523c */
  local_88 = param_1;
  uStack_84 = param_2;
  if (*(long *)(param_4 + 0x460) != 0) {
    Node::stopAction(param_4);
    Ref::release(*(Ref **)(param_4 + 0x460));
    *(undefined8 *)(param_4 + 0x460) = 0;
    Node::unschedule((_func_void_float *)param_4);
    plVar2 = *(long **)(param_4 + 0x328);
    if (plVar2 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00e15510 with catch @ 00e15278 */
      (**(code **)(*plVar2 + 0x10))(plVar2,param_4);
    }
  }
  pFVar3 = (FiniteTimeAction *)MoveTo::create(param_3,(Vec2 *)&local_88);
  local_80 = &PTR_FUN_016ed5f8;
  uStack_70 = 0;
  local_78 = stoppedAnimatedScroll;
  local_68 = param_4;
  local_60 = &local_80;
  uVar4 = CallFuncN::create((function *)&local_80);
  if (&local_80 == local_60) {
    pcVar5 = (code *)(*local_60)[4];
  }
  else {
    if (local_60 == (undefined ***)0x0) goto LAB_00e152f4;
    pcVar5 = (code *)(*local_60)[5];
  }
  (*pcVar5)();
LAB_00e152f4:
  plVar2 = *(long **)(param_4 + 0x340);
  uVar4 = Sequence::create(pFVar3,uVar4,0);
  this = (Ref *)(**(code **)(*plVar2 + 0x3a8))(plVar2,uVar4);
  *(Ref **)(param_4 + 0x460) = this;
  Ref::retain(this);
  Node::schedule((_func_void_float *)param_4);
                    /* try { // try from 00e15338 to 00f15343 has its CatchHandler @ 00e155dc */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00e15350 to 00f1535b has its CatchHandler @ 00e15598 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

