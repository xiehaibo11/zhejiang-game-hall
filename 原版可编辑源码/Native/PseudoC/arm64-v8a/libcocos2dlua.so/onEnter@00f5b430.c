
/* cocos2d::TransitionShrinkGrow::onEnter() */

void __thiscall cocos2d::TransitionShrinkGrow::onEnter(TransitionShrinkGrow *this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FiniteTimeAction *pFVar5;
  code *pcVar6;
  long *plVar7;
  undefined **local_80;
  code *local_78;
  undefined8 uStack_70;
  TransitionShrinkGrow *local_68;
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar2 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,0), (uVar2 & 1) == 0)) {
    Scene::onEnter((Scene *)this);
    EventDispatcher::setEnabled(*(EventDispatcher **)(this + 0x1f0),false);
    (**(code **)(**(long **)(this + 0x378) + 0x338))();
    (**(code **)(**(long **)(this + 0x370) + 800))();
  }
  (**(code **)(**(long **)(this + 0x370) + 0x80))(0x3a83126f);
  (**(code **)(**(long **)(this + 0x378) + 0x80))(0x3f800000);
  local_80 = (undefined **)0x3f0000003f2aaaab;
  (**(code **)(**(long **)(this + 0x370) + 0x148))(*(long **)(this + 0x370),&local_80);
  local_80 = (undefined **)0x3f0000003eaaaaab;
  (**(code **)(**(long **)(this + 0x378) + 0x148))(*(long **)(this + 0x378),&local_80);
  uVar3 = ScaleTo::create(*(float *)(this + 0x380),0.01);
  uVar4 = ScaleTo::create(*(float *)(this + 0x380),1.0);
  plVar7 = *(long **)(this + 0x370);
  uVar4 = (**(code **)(*(long *)this + 0x548))(this,uVar4);
  (**(code **)(*plVar7 + 0x3a8))(plVar7,uVar4);
  plVar7 = *(long **)(this + 0x378);
  pFVar5 = (FiniteTimeAction *)(**(code **)(*(long *)this + 0x548))(this,uVar3);
  local_80 = &PTR_FUN_0171cb18;
                    /* try { // try from 00f5b5b0 to 0105b5bb has its CatchHandler @ 00f5b60c */
  uStack_70 = 0;
  local_78 = TransitionScene::finish;
  local_68 = this;
  local_60 = (long *)&local_80;
                    /* try { // try from 00f5b5bc to 0105b627 has its CatchHandler @ 00f5b1e8 */
  uVar3 = CallFunc::create((function *)&local_80);
  uVar3 = Sequence::create(pFVar5,uVar3,0);
  (**(code **)(*plVar7 + 0x3a8))(plVar7,uVar3);
  if (&local_80 == (undefined ***)local_60) {
                    /* catch() { ... } // from try @ 00f5b2a0 with catch @ 00f5b604 */
                    /* catch() { ... } // from try @ 00f5b28c with catch @ 00f5b608 */
    pcVar6 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00f5b610;
    pcVar6 = *(code **)(*local_60 + 0x28);
  }
                    /* catch() { ... } // from try @ 00f5b2a8 with catch @ 00f5b60c
                       catch() { ... } // from try @ 00f5b5b0 with catch @ 00f5b60c */
  (*pcVar6)();
LAB_00f5b610:
                    /* catch() { ... } // from try @ 00f5b3b4 with catch @ 00f5b610 */
                    /* catch() { ... } // from try @ 00f5b3e0 with catch @ 00f5b614 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00f5b730 with catch @ 00f5b628
                       catch() { ... } // from try @ 00f5b844 with catch @ 00f5b628 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

