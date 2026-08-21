
/* cocos2d::TransitionProgress::onEnter() */

void __thiscall cocos2d::TransitionProgress::onEnter(TransitionProgress *this)

{
  long lVar1;
  Director *this_00;
  Size *pSVar2;
  long *plVar3;
  FiniteTimeAction *pFVar4;
  undefined8 uVar5;
  code *pcVar6;
  float local_88;
  float fStack_84;
  undefined **local_80;
  code *local_78;
  undefined8 uStack_70;
  TransitionProgress *local_68;
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  TransitionScene::onEnter((TransitionScene *)this);
  (**(code **)(*(long *)this + 0x550))(this);
  this_00 = (Director *)Director::getInstance();
  pSVar2 = (Size *)Director::getWinSize(this_00);
  Size::Size((Size *)&local_88,pSVar2);
  plVar3 = (long *)RenderTexture::create((int)local_88,(int)fStack_84,2,0x88f0);
  local_80 = (undefined **)0x3f0000003f000000;
  (**(code **)(*(long *)plVar3[0x70] + 0x148))((long *)plVar3[0x70],&local_80);
  (**(code **)(*plVar3 + 200))(local_88 * 0.5,fStack_84 * 0.5,plVar3);
  local_80 = (undefined **)0x3f0000003f000000;
  (**(code **)(*plVar3 + 0x148))(plVar3,&local_80);
  (**(code **)(*plVar3 + 0x538))(0,0,0,0x3f800000,plVar3);
  Node::visit(*(Node **)(this + 0x390));
                    /* try { // try from 00f6069c to 0106069f has its CatchHandler @ 00f6080c */
  (**(code **)(*plVar3 + 0x550))(plVar3);
                    /* try { // try from 00f606a0 to 010607ff has its CatchHandler @ 00f6054c */
  if (*(long *)(this + 0x390) == *(long *)(this + 0x378)) {
    TransitionScene::hideOutShowIn((TransitionScene *)this);
  }
  plVar3 = (long *)(**(code **)(*(long *)this + 0x548))(this,plVar3);
  pFVar4 = (FiniteTimeAction *)
           ProgressFromTo::create
                     (*(float *)(this + 0x380),*(float *)(this + 0x38c),*(float *)(this + 0x388));
  local_80 = &PTR_FUN_0171fea0;
  uStack_70 = 0;
  local_78 = TransitionScene::finish;
  local_68 = this;
  local_60 = &local_80;
  uVar5 = CallFunc::create((function *)&local_80);
  uVar5 = Sequence::create(pFVar4,uVar5,0);
  if (&local_80 == local_60) {
    pcVar6 = (code *)(*local_60)[4];
  }
  else {
    if (local_60 == (undefined ***)0x0) goto LAB_00f60754;
    pcVar6 = (code *)(*local_60)[5];
  }
  (*pcVar6)();
LAB_00f60754:
  (**(code **)(*plVar3 + 0x3a8))(plVar3,uVar5);
  (**(code **)(*(long *)this + 0x218))(this,plVar3,2,0xc001);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

