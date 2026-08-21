
/* cocos2d::TransitionFadeTR::onEnter() */

void __thiscall cocos2d::TransitionFadeTR::onEnter(TransitionFadeTR *this)

{
  long lVar1;
  ulong uVar2;
  Director *this_00;
  Size *pSVar3;
  undefined8 uVar4;
  FiniteTimeAction *pFVar5;
  undefined8 uVar6;
  code *pcVar7;
  long *plVar8;
  float local_88;
  float fStack_84;
  undefined **local_80;
  code *local_78;
  undefined8 uStack_70;
  TransitionFadeTR *local_68;
  undefined ***local_60;
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
  NodeGrid::setTarget(*(NodeGrid **)(this + 0x390),*(Node **)(this + 0x378));
  (**(code **)(**(long **)(this + 0x390) + 800))();
  this_00 = (Director *)Director::getInstance();
  pSVar3 = (Size *)Director::getWinSize(this_00);
  Size::Size((Size *)&local_88,pSVar3);
  Size::Size((Size *)&local_80,(float)(int)((local_88 / fStack_84) * 12.0),12.0);
  uVar4 = (**(code **)(*(long *)this + 0x548))(this,&local_80);
  plVar8 = *(long **)(this + 0x390);
  pFVar5 = (FiniteTimeAction *)(**(code **)(*(long *)this + 0x550))(this,uVar4);
  local_80 = &PTR_FUN_0171d1a0;
  uStack_70 = 0;
  local_78 = TransitionScene::finish;
  local_68 = this;
  local_60 = &local_80;
  uVar4 = CallFunc::create((function *)&local_80);
  uVar6 = StopGrid::create();
  uVar4 = Sequence::create(pFVar5,uVar4,uVar6,0);
  (**(code **)(*plVar8 + 0x3a8))(plVar8,uVar4);
  if (&local_80 == local_60) {
    pcVar7 = (code *)(*local_60)[4];
  }
  else {
    if (local_60 == (undefined ***)0x0) goto LAB_00f5ec14;
    pcVar7 = (code *)(*local_60)[5];
  }
  (*pcVar7)();
LAB_00f5ec14:
                    /* try { // try from 00f5ec18 to 0105ec3f has its CatchHandler @ 00f5ee54 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

