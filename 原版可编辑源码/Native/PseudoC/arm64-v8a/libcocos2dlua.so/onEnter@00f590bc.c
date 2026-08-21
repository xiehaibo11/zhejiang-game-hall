
/* cocos2d::TransitionJumpZoom::onEnter() */

void __thiscall cocos2d::TransitionJumpZoom::onEnter(TransitionJumpZoom *this)

{
  long lVar1;
  ulong uVar2;
  Director *this_00;
  Size *pSVar3;
  FiniteTimeAction *pFVar4;
  undefined8 uVar5;
  FiniteTimeAction *pFVar6;
  undefined8 uVar7;
  code *pcVar8;
  long *plVar9;
  float local_a8 [2];
  undefined **local_a0;
  code *local_98;
  undefined8 uStack_90;
  TransitionJumpZoom *local_88;
  undefined ***local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar2 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,0), (uVar2 & 1) == 0)) {
    Scene::onEnter((Scene *)this);
    EventDispatcher::setEnabled(*(EventDispatcher **)(this + 0x1f0),false);
    (**(code **)(**(long **)(this + 0x378) + 0x338))();
    (**(code **)(**(long **)(this + 0x370) + 800))();
  }
  this_00 = (Director *)Director::getInstance();
  pSVar3 = (Size *)Director::getWinSize(this_00);
  Size::Size((Size *)local_a8,pSVar3);
  (**(code **)(**(long **)(this + 0x370) + 0x80))(0x3f000000);
  (**(code **)(**(long **)(this + 0x370) + 200))(local_a8[0],0);
  local_a0 = (undefined **)0x3f0000003f000000;
  (**(code **)(**(long **)(this + 0x370) + 0x148))(*(long **)(this + 0x370),&local_a0);
  local_a0 = (undefined **)0x3f0000003f000000;
  (**(code **)(**(long **)(this + 0x378) + 0x148))(*(long **)(this + 0x378),&local_a0);
  local_a0 = (undefined **)(ulong)(uint)-local_a8[0];
  pFVar4 = (FiniteTimeAction *)
           JumpBy::create(*(float *)(this + 0x380) * 0.25,(Vec2 *)&local_a0,local_a8[0] * 0.25,2);
  uVar5 = ScaleTo::create(*(float *)(this + 0x380) * 0.25,1.0);
  pFVar6 = (FiniteTimeAction *)ScaleTo::create(*(float *)(this + 0x380) * 0.25,0.5);
                    /* try { // try from 00f5920c to 0105927f has its CatchHandler @ 00f5920c
                       catch() { ... } // from try @ 00f5920c with catch @ 00f5920c
                       catch() { ... } // from try @ 00f592c0 with catch @ 00f5920c */
  uVar7 = Sequence::create(pFVar6,pFVar4,0);
  uVar5 = Sequence::create(pFVar4,uVar5,0);
  pFVar4 = (FiniteTimeAction *)DelayTime::create(*(float *)(this + 0x380) * 0.5);
  (**(code **)(**(long **)(this + 0x378) + 0x3a8))(*(long **)(this + 0x378),uVar7);
  plVar9 = *(long **)(this + 0x370);
  local_a0 = &PTR_FUN_0171c980;
                    /* try { // try from 00f59280 to 010592bf has its CatchHandler @ 00f5930c */
  uStack_90 = 0;
  local_98 = TransitionScene::finish;
  local_88 = this;
  local_80 = &local_a0;
  uVar7 = CallFunc::create((function *)&local_a0);
  uVar5 = Sequence::create(pFVar4,uVar5,uVar7,0);
  (**(code **)(*plVar9 + 0x3a8))(plVar9,uVar5);
                    /* try { // try from 00f592c0 to 0105932b has its CatchHandler @ 00f5920c */
  if (&local_a0 == local_80) {
    pcVar8 = (code *)(*local_80)[4];
  }
  else {
    if (local_80 == (undefined ***)0x0) goto LAB_00f592e0;
    pcVar8 = (code *)(*local_80)[5];
  }
  (*pcVar8)();
LAB_00f592e0:
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* catch() { ... } // from try @ 00f59280 with catch @ 00f5930c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

