
/* cocos2d::TransitionZoomFlipAngular::onEnter() */

void __thiscall cocos2d::TransitionZoomFlipAngular::onEnter(TransitionZoomFlipAngular *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  FiniteTimeAction *pFVar5;
  FiniteTimeAction *pFVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined **local_a0;
  code *local_98;
  undefined8 uStack_90;
  TransitionZoomFlipAngular *local_88;
  long *local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar4 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,0), (uVar4 & 1) == 0)) {
    Scene::onEnter((Scene *)this);
    EventDispatcher::setEnabled(*(EventDispatcher **)(this + 0x1f0),false);
    (**(code **)(**(long **)(this + 0x378) + 0x338))();
    (**(code **)(**(long **)(this + 0x370) + 800))();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f5cc3c with catch @ 00f5ccd0
                        */
  (**(code **)(**(long **)(this + 0x370) + 0x170))(*(long **)(this + 0x370),0);
  fVar2 = 270.0;
  fVar3 = 90.0;
  if (*(int *)(this + 0x388) != 1) {
    fVar2 = 90.0;
    fVar3 = -90.0;
  }
  pFVar5 = (FiniteTimeAction *)DelayTime::create(*(float *)(this + 0x380) * 0.5);
  pFVar6 = (FiniteTimeAction *)
           OrbitCamera::create(*(float *)(this + 0x380) * 0.5,1.0,0.0,fVar2,fVar3,-45.0,0.0);
  uVar7 = ScaleTo::create(*(float *)(this + 0x380) * 0.5,1.0);
  uVar8 = Show::create();
  uVar7 = Spawn::create(pFVar6,uVar7,uVar8,0);
  uVar8 = Show::create();
  local_a0 = &PTR_FUN_0171ce48;
  uStack_90 = 0;
  local_98 = TransitionScene::finish;
  local_88 = this;
  local_80 = (long *)&local_a0;
  uVar9 = CallFunc::create((function *)&local_a0);
  uVar7 = Sequence::create(pFVar5,uVar7,uVar8,uVar9,0);
  if (&local_a0 == (undefined ***)local_80) {
    pcVar10 = *(code **)(*local_80 + 0x20);
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_00f5cdfc;
    pcVar10 = *(code **)(*local_80 + 0x28);
  }
  (*pcVar10)();
LAB_00f5cdfc:
  pFVar5 = (FiniteTimeAction *)
           OrbitCamera::create(*(float *)(this + 0x380) * 0.5,1.0,0.0,0.0,fVar3,45.0,0.0);
  uVar8 = ScaleTo::create(*(float *)(this + 0x380) * 0.5,0.5);
  pFVar5 = (FiniteTimeAction *)Spawn::create(pFVar5,uVar8,0);
  uVar8 = Hide::create();
  uVar9 = DelayTime::create(*(float *)(this + 0x380) * 0.5);
  uVar8 = Sequence::create(pFVar5,uVar8,uVar9,0);
  (**(code **)(**(long **)(this + 0x370) + 0x80))(0x3f000000,*(long **)(this + 0x370));
  (**(code **)(**(long **)(this + 0x370) + 0x3a8))(*(long **)(this + 0x370),uVar7);
  (**(code **)(**(long **)(this + 0x378) + 0x3a8))(*(long **)(this + 0x378),uVar8);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

