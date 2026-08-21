
/* cocos2d::TransitionFade::onEnter() */

void __thiscall cocos2d::TransitionFade::onEnter(TransitionFade *this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  FiniteTimeAction *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined **local_c0;
  code *local_b8;
  undefined8 uStack_b0;
  TransitionFade *local_a8;
  long *local_a0;
  undefined **local_90;
  code *local_88;
  undefined8 uStack_80;
  TransitionFade *local_78;
  undefined ***local_70;
  long local_58;
  
                    /* try { // try from 00f5d30c to 0105d317 has its CatchHandler @ 00f5d61c */
  lVar1 = tpidr_el0;
                    /* try { // try from 00f5d328 to 0105d343 has its CatchHandler @ 00f5d618 */
  local_58 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar2 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,0), (uVar2 & 1) == 0)) {
    Scene::onEnter((Scene *)this);
                    /* try { // try from 00f5d35c to 0105d363 has its CatchHandler @ 00f5d600 */
    EventDispatcher::setEnabled(*(EventDispatcher **)(this + 0x1f0),false);
    (**(code **)(**(long **)(this + 0x378) + 0x338))();
    (**(code **)(**(long **)(this + 0x370) + 800))();
  }
  uVar3 = LayerColor::create((Color4B *)(this + 0x386));
                    /* try { // try from 00f5d394 to 0105d483 has its CatchHandler @ 00f5d61c */
  (**(code **)(**(long **)(this + 0x370) + 0x170))(*(long **)(this + 0x370),0);
  (**(code **)(*(long *)this + 0x218))(this,uVar3,2,0xfadefade);
  plVar4 = (long *)(**(code **)(*(long *)this + 0x228))(this,0xfadefade);
  pFVar5 = (FiniteTimeAction *)FadeIn::create(*(float *)(this + 0x380) * 0.5);
  local_70 = &local_90;
  local_90 = &PTR_FUN_0171ced0;
  uStack_80 = 0;
  local_88 = TransitionScene::hideOutShowIn;
  local_78 = this;
  uVar3 = CallFunc::create((function *)&local_90);
  uVar6 = FadeOut::create(*(float *)(this + 0x380) * 0.5);
  local_c0 = &PTR_FUN_0171ced0;
  uStack_b0 = 0;
  local_b8 = TransitionScene::finish;
  local_a8 = this;
  local_a0 = (long *)&local_c0;
  uVar7 = CallFunc::create((function *)&local_c0);
  uVar3 = Sequence::create(pFVar5,uVar3,uVar6,uVar7,0);
  if (&local_c0 == (undefined ***)local_a0) {
                    /* try { // try from 00f5d4a8 to 0105d68b has its CatchHandler @ 00f5cf44 */
    pcVar8 = *(code **)(*local_a0 + 0x20);
LAB_00f5d4b0:
    (*pcVar8)();
  }
  else {
                    /* try { // try from 00f5d498 to 0105d4a7 has its CatchHandler @ 00f5d5fc */
    if (local_a0 != (long *)0x0) {
      pcVar8 = *(code **)(*local_a0 + 0x28);
      goto LAB_00f5d4b0;
    }
  }
  if (&local_90 == local_70) {
    pcVar8 = (code *)(*local_70)[4];
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_00f5d4e0;
    pcVar8 = (code *)(*local_70)[5];
  }
  (*pcVar8)();
LAB_00f5d4e0:
  (**(code **)(*plVar4 + 0x3a8))(plVar4,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

