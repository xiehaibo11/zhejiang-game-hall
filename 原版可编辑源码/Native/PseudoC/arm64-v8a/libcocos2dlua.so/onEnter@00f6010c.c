
/* cocos2d::TransitionPageTurn::onEnter() */

void __thiscall cocos2d::TransitionPageTurn::onEnter(TransitionPageTurn *this)

{
  TransitionPageTurn TVar1;
  long lVar2;
  Director *this_00;
  Size *pSVar3;
  FiniteTimeAction *pFVar4;
  FiniteTimeAction *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float local_88;
  float fStack_84;
  undefined **local_80;
  code *local_78;
  undefined8 uStack_70;
  TransitionPageTurn *local_68;
  undefined ***local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  TransitionScene::onEnter((TransitionScene *)this);
  NodeGrid::setTarget(*(NodeGrid **)(this + 0x388),*(Node **)(this + 0x370));
  NodeGrid::setTarget(*(NodeGrid **)(this + 0x390),*(Node **)(this + 0x378));
  (**(code **)(**(long **)(this + 0x388) + 800))();
  (**(code **)(**(long **)(this + 0x390) + 800))();
  this_00 = (Director *)Director::getInstance();
  pSVar3 = (Size *)Director::getWinSize(this_00);
  Size::Size((Size *)&local_88,pSVar3);
  fVar11 = 12.0;
  if (local_88 <= fStack_84) {
    fVar11 = 16.0;
  }
  fVar10 = 16.0;
  if (local_88 <= fStack_84) {
    fVar10 = 12.0;
  }
  Size::Size((Size *)&local_80,fVar10,fVar11);
  TVar1 = this[0x398];
  pFVar4 = (FiniteTimeAction *)PageTurn3D::create(*(float *)(this + 0x380),(Size *)&local_80);
  if (TVar1 != (TransitionPageTurn)0x0) {
    pFVar4 = (FiniteTimeAction *)ReverseTime::create(pFVar4);
  }
  local_68 = this;
  if (this[0x398] == (TransitionPageTurn)0x0) {
    plVar9 = *(long **)(this + 0x390);
    local_60 = &local_80;
    local_80 = &PTR_FUN_0171d798;
    uStack_70 = 0;
    local_78 = TransitionScene::finish;
    uVar6 = CallFunc::create((function *)&local_80);
    uVar7 = StopGrid::create();
    uVar6 = Sequence::create(pFVar4,uVar6,uVar7,0);
    (**(code **)(*plVar9 + 0x3a8))(plVar9,uVar6);
  }
  else {
    (**(code **)(**(long **)(this + 0x388) + 0x170))(*(long **)(this + 0x388),0);
    plVar9 = *(long **)(this + 0x388);
    pFVar5 = (FiniteTimeAction *)Show::create();
    local_60 = &local_80;
    local_80 = &PTR_FUN_0171d798;
    uStack_70 = 0;
    local_78 = TransitionScene::finish;
    uVar6 = CallFunc::create((function *)&local_80);
    uVar7 = StopGrid::create();
    uVar6 = Sequence::create(pFVar5,pFVar4,uVar6,uVar7,0);
    (**(code **)(*plVar9 + 0x3a8))(plVar9,uVar6);
  }
  if (&local_80 == local_60) {
    pcVar8 = (code *)(*local_60)[4];
  }
  else {
    if (local_60 == (undefined ***)0x0) goto LAB_00f602f0;
    pcVar8 = (code *)(*local_60)[5];
  }
  (*pcVar8)();
LAB_00f602f0:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

