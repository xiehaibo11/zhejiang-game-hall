
/* cocos2d::TransitionRotoZoom::onEnter() */

void __thiscall cocos2d::TransitionRotoZoom::onEnter(TransitionRotoZoom *this)

{
  long lVar1;
  ulong uVar2;
  FiniteTimeAction *pFVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  long *plVar7;
  undefined **local_90;
  code *local_88;
  undefined8 uStack_80;
  TransitionRotoZoom *local_78;
  long *local_70;
  long local_58;
  
                    /* try { // try from 00f58cc4 to 01058cd3 has its CatchHandler @ 00f58e30 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00f58ce4 to 01058cef has its CatchHandler @ 00f58e58 */
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar2 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,0), (uVar2 & 1) == 0)) {
                    /* try { // try from 00f58d04 to 01058d0f has its CatchHandler @ 00f58e30 */
    Scene::onEnter((Scene *)this);
    EventDispatcher::setEnabled(*(EventDispatcher **)(this + 0x1f0),false);
    (**(code **)(**(long **)(this + 0x378) + 0x338))();
                    /* try { // try from 00f58d30 to 01058d57 has its CatchHandler @ 00f58e5c */
    (**(code **)(**(long **)(this + 0x370) + 800))();
  }
  (**(code **)(**(long **)(this + 0x370) + 0x80))(0x3a83126f);
                    /* try { // try from 00f58d5c to 01058d63 has its CatchHandler @ 00f58e48 */
  (**(code **)(**(long **)(this + 0x378) + 0x80))(0x3f800000);
  local_90 = (undefined **)0x3f0000003f000000;
  (**(code **)(**(long **)(this + 0x370) + 0x148))(*(long **)(this + 0x370),&local_90);
  local_90 = (undefined **)0x3f0000003f000000;
                    /* try { // try from 00f58d8c to 01058d93 has its CatchHandler @ 00f58e38 */
  (**(code **)(**(long **)(this + 0x378) + 0x148))(*(long **)(this + 0x378),&local_90);
  pFVar3 = (FiniteTimeAction *)ScaleBy::create(*(float *)(this + 0x380) * 0.5,0.001);
                    /* try { // try from 00f58db4 to 01058dbf has its CatchHandler @ 00f58e34 */
                    /* try { // try from 00f58dc0 to 01058e6f has its CatchHandler @ 00f58be8 */
  uVar4 = RotateBy::create(*(float *)(this + 0x380) * 0.5,720.0);
  pFVar3 = (FiniteTimeAction *)Spawn::create(pFVar3,uVar4,0);
  uVar4 = DelayTime::create(*(float *)(this + 0x380) * 0.5);
  plVar5 = (long *)Sequence::create(pFVar3,uVar4,0);
  (**(code **)(**(long **)(this + 0x378) + 0x3a8))(*(long **)(this + 0x378),plVar5);
  plVar7 = *(long **)(this + 0x370);
  pFVar3 = (FiniteTimeAction *)(**(code **)(*plVar5 + 0x20))(plVar5);
                    /* catch() { ... } // from try @ 00f58cc4 with catch @ 00f58e30
                       catch() { ... } // from try @ 00f58d04 with catch @ 00f58e30 */
                    /* catch() { ... } // from try @ 00f58db4 with catch @ 00f58e34 */
                    /* catch() { ... } // from try @ 00f58d8c with catch @ 00f58e38 */
  local_90 = &PTR_FUN_0171c8d0;
                    /* catch() { ... } // from try @ 00f58d5c with catch @ 00f58e48 */
  uStack_80 = 0;
  local_88 = TransitionScene::finish;
  local_78 = this;
  local_70 = (long *)&local_90;
                    /* catch() { ... } // from try @ 00f58ce4 with catch @ 00f58e58 */
                    /* catch() { ... } // from try @ 00f58d30 with catch @ 00f58e5c */
  uVar4 = CallFunc::create((function *)&local_90);
  uVar4 = Sequence::create(pFVar3,uVar4,0);
                    /* try { // try from 00f58e70 to 01058e9f has its CatchHandler @ 00f58e70
                       catch() { ... } // from try @ 00f58e70 with catch @ 00f58e70
                       catch() { ... } // from try @ 00f58ea4 with catch @ 00f58e70 */
  (**(code **)(*plVar7 + 0x3a8))(plVar7,uVar4);
  if (&local_90 == (undefined ***)local_70) {
                    /* try { // try from 00f58ea4 to 01058f37 has its CatchHandler @ 00f58e70 */
    pcVar6 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_00f58eb0;
    pcVar6 = *(code **)(*local_70 + 0x28);
                    /* try { // try from 00f58ea0 to 01058ea3 has its CatchHandler @ 00f58f0c */
  }
  (*pcVar6)();
LAB_00f58eb0:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

