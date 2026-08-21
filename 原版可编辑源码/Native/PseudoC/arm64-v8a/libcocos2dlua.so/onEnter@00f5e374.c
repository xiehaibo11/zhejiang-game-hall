
/* cocos2d::TransitionSplitCols::onEnter() */

void __thiscall cocos2d::TransitionSplitCols::onEnter(TransitionSplitCols *this)

{
  long lVar1;
  ulong uVar2;
  FiniteTimeAction *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long *plVar7;
  undefined **local_80;
  code *local_78;
  undefined8 uStack_70;
  TransitionSplitCols *local_68;
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar2 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,0), (uVar2 & 1) == 0)) {
                    /* try { // try from 00f5e3b8 to 0105e3bb has its CatchHandler @ 00f5e3cc */
    Scene::onEnter((Scene *)this);
    EventDispatcher::setEnabled(*(EventDispatcher **)(this + 0x1f0),false);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f5e3b8 with catch @ 00f5e3cc
                        */
    (**(code **)(**(long **)(this + 0x378) + 0x338))();
                    /* try { // try from 00f5e3e0 to 0105e423 has its CatchHandler @ 00f5e3e0
                       catch(type#1 @ 00000000) { ... } // from try @ 00f5e3e0 with catch @ 00f5e3e0
                        */
    (**(code **)(**(long **)(this + 0x370) + 800))();
  }
  NodeGrid::setTarget(*(NodeGrid **)(this + 0x390),*(Node **)(this + 0x378));
  (**(code **)(**(long **)(this + 0x390) + 800))();
  pFVar3 = (FiniteTimeAction *)(**(code **)(*(long *)this + 0x548))(this);
                    /* try { // try from 00f5e424 to 0105e43f has its CatchHandler @ 00f5e4e0 */
  local_80 = &PTR_FUN_0171d068;
  uStack_70 = 0;
  local_78 = switchTargetToInscene;
  local_68 = this;
  local_60 = (long *)&local_80;
  uVar4 = CallFunc::create((function *)&local_80);
  uVar5 = (**(code **)(*(long *)pFVar3 + 0x20))(pFVar3);
  uVar4 = Sequence::create(pFVar3,uVar4,uVar5,0);
  if (&local_80 == (undefined ***)local_60) {
    pcVar6 = *(code **)(*local_60 + 0x20);
LAB_00f5e4a4:
    (*pcVar6)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar6 = *(code **)(*local_60 + 0x28);
    goto LAB_00f5e4a4;
  }
  plVar7 = *(long **)(this + 0x390);
                    /* try { // try from 00f5e4b4 to 0105e4b7 has its CatchHandler @ 00f5e4cc */
  pFVar3 = (FiniteTimeAction *)(**(code **)(*(long *)this + 0x550))(this,uVar4);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f5e4b4 with catch @ 00f5e4cc
                        */
  local_80 = &PTR_FUN_0171d118;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f5e424 with catch @ 00f5e4e0
                        */
  uStack_70 = 0;
  local_78 = TransitionScene::finish;
  local_68 = this;
  local_60 = (long *)&local_80;
  uVar4 = CallFunc::create((function *)&local_80);
  uVar5 = StopGrid::create();
  uVar4 = Sequence::create(pFVar3,uVar4,uVar5,0);
  (**(code **)(*plVar7 + 0x3a8))(plVar7,uVar4);
                    /* catch() { ... } // from try @ 00f5e560 with catch @ 00f5e530 */
  if (&local_80 == (undefined ***)local_60) {
    pcVar6 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00f5e554;
    pcVar6 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar6)();
LAB_00f5e554:
                    /* try { // try from 00f5e558 to 0105e55f has its CatchHandler @ 00f5e5ac */
                    /* try { // try from 00f5e560 to 0105e5c7 has its CatchHandler @ 00f5e530 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

