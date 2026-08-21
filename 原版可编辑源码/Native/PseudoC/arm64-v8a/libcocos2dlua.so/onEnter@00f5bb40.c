
/* cocos2d::TransitionFlipY::onEnter() */

void __thiscall cocos2d::TransitionFlipY::onEnter(TransitionFlipY *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  FiniteTimeAction *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined **local_a0;
  code *local_98;
  undefined8 uStack_90;
  TransitionFlipY *local_88;
  long *local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00f5bb00 with catch @ 00f5bb70 */
                    /* catch() { ... } // from try @ 00f5bae8 with catch @ 00f5bb88 */
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar4 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,0), (uVar4 & 1) == 0)) {
    Scene::onEnter((Scene *)this);
    EventDispatcher::setEnabled(*(EventDispatcher **)(this + 0x1f0),false);
                    /* catch() { ... } // from try @ 00f5bad8 with catch @ 00f5bba0 */
                    /* catch() { ... } // from try @ 00f5ba04 with catch @ 00f5bba4 */
                    /* catch() { ... } // from try @ 00f5ba38 with catch @ 00f5bba8
                       catch() { ... } // from try @ 00f5bb2c with catch @ 00f5bba8 */
    (**(code **)(**(long **)(this + 0x378) + 0x338))();
                    /* try { // try from 00f5bbbc to 0105bc2b has its CatchHandler @ 00f5bbbc
                       catch() { ... } // from try @ 00f5bbbc with catch @ 00f5bbbc
                       catch() { ... } // from try @ 00f5bc38 with catch @ 00f5bbbc */
    (**(code **)(**(long **)(this + 0x370) + 800))();
  }
  (**(code **)(**(long **)(this + 0x370) + 0x170))(*(long **)(this + 0x370),0);
  fVar2 = 270.0;
  fVar3 = 90.0;
  if (*(int *)(this + 0x388) != 0) {
    fVar2 = 90.0;
    fVar3 = -90.0;
  }
  pFVar5 = (FiniteTimeAction *)DelayTime::create(*(float *)(this + 0x380) * 0.5);
  uVar6 = Show::create();
                    /* try { // try from 00f5bc2c to 0105bc37 has its CatchHandler @ 00f5bc7c */
                    /* try { // try from 00f5bc38 to 0105bc97 has its CatchHandler @ 00f5bbbc */
  uVar7 = OrbitCamera::create(*(float *)(this + 0x380) * 0.5,1.0,0.0,fVar2,fVar3,90.0,0.0);
  local_a0 = &PTR_FUN_0171cc28;
  uStack_90 = 0;
  local_98 = TransitionScene::finish;
  local_88 = this;
  local_80 = (long *)&local_a0;
  uVar8 = CallFunc::create((function *)&local_a0);
                    /* catch() { ... } // from try @ 00f5bc2c with catch @ 00f5bc7c */
  uVar6 = Sequence::create(pFVar5,uVar6,uVar7,uVar8,0);
  if (&local_a0 == (undefined ***)local_80) {
    pcVar9 = *(code **)(*local_80 + 0x20);
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_00f5bcbc;
    pcVar9 = *(code **)(*local_80 + 0x28);
  }
  (*pcVar9)();
LAB_00f5bcbc:
  pFVar5 = (FiniteTimeAction *)
           OrbitCamera::create(*(float *)(this + 0x380) * 0.5,1.0,0.0,0.0,fVar3,90.0,0.0);
  uVar7 = Hide::create();
                    /* try { // try from 00f5bcf0 to 0105bdcf has its CatchHandler @ 00f5bcf0
                       catch() { ... } // from try @ 00f5bcf0 with catch @ 00f5bcf0
                       catch() { ... } // from try @ 00f5be70 with catch @ 00f5bcf0 */
  uVar8 = DelayTime::create(*(float *)(this + 0x380) * 0.5);
  uVar7 = Sequence::create(pFVar5,uVar7,uVar8,0);
  (**(code **)(**(long **)(this + 0x370) + 0x3a8))(*(long **)(this + 0x370),uVar6);
  (**(code **)(**(long **)(this + 0x378) + 0x3a8))(*(long **)(this + 0x378),uVar7);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

