
/* cocos2d::TransitionTurnOffTiles::onEnter() */

void __thiscall cocos2d::TransitionTurnOffTiles::onEnter(TransitionTurnOffTiles *this)

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
  float fVar9;
  float local_88;
  float fStack_84;
  undefined **local_80;
  code *local_78;
  undefined8 uStack_70;
  TransitionTurnOffTiles *local_68;
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00f5de5c to 0105de67 has its CatchHandler @ 00f5de94 */
                    /* try { // try from 00f5de68 to 0105deab has its CatchHandler @ 00f5de1c */
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar2 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,0), (uVar2 & 1) == 0)) {
    Scene::onEnter((Scene *)this);
    EventDispatcher::setEnabled(*(EventDispatcher **)(this + 0x1f0),false);
                    /* catch() { ... } // from try @ 00f5de5c with catch @ 00f5de94 */
    (**(code **)(**(long **)(this + 0x378) + 0x338))();
    (**(code **)(**(long **)(this + 0x370) + 800))();
  }
  NodeGrid::setTarget(*(NodeGrid **)(this + 0x390),*(Node **)(this + 0x378));
  (**(code **)(**(long **)(this + 0x390) + 800))();
  this_00 = (Director *)Director::getInstance();
  pSVar3 = (Size *)Director::getWinSize(this_00);
  Size::Size((Size *)&local_88,pSVar3);
  fVar9 = *(float *)(this + 0x380);
  Size::Size((Size *)&local_80,(float)(int)((local_88 / fStack_84) * 12.0),12.0);
  uVar4 = TurnOffTiles::create(fVar9,(Size *)&local_80);
  pFVar5 = (FiniteTimeAction *)(**(code **)(*(long *)this + 0x548))(this,uVar4);
  plVar8 = *(long **)(this + 0x390);
  local_80 = &PTR_FUN_0171cfe0;
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
    if (local_60 == (undefined ***)0x0) goto LAB_00f5dfc0;
    pcVar7 = (code *)(*local_60)[5];
  }
  (*pcVar7)();
LAB_00f5dfc0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

