
/* cocos2d::TransitionMoveInL::onEnter() */

void __thiscall cocos2d::TransitionMoveInL::onEnter(TransitionMoveInL *this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  FiniteTimeAction *pFVar4;
  code *pcVar5;
  long *plVar6;
  undefined **local_80;
  code *local_78;
  undefined8 uStack_70;
  TransitionMoveInL *local_68;
  long *local_60;
  long local_48;
  
                    /* try { // try from 00f59624 to 0105962f has its CatchHandler @ 00f59c24 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar2 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,0), (uVar2 & 1) == 0)) {
    Scene::onEnter((Scene *)this);
    EventDispatcher::setEnabled(*(EventDispatcher **)(this + 0x1f0),false);
    (**(code **)(**(long **)(this + 0x378) + 0x338))();
    (**(code **)(**(long **)(this + 0x370) + 800))();
  }
  (**(code **)(*(long *)this + 0x558))(this);
                    /* try { // try from 00f596a8 to 010596b3 has its CatchHandler @ 00f59c2c */
  uVar3 = (**(code **)(*(long *)this + 0x548))(this);
                    /* try { // try from 00f596b4 to 010596bf has its CatchHandler @ 00f59c14 */
  plVar6 = *(long **)(this + 0x370);
                    /* try { // try from 00f596c0 to 010596d7 has its CatchHandler @ 00f59bf4 */
  pFVar4 = (FiniteTimeAction *)(**(code **)(*(long *)this + 0x550))(this,uVar3);
  local_80 = &PTR_FUN_0171ca08;
  uStack_70 = 0;
  local_78 = TransitionScene::finish;
  local_68 = this;
  local_60 = (long *)&local_80;
  uVar3 = CallFunc::create((function *)&local_80);
  uVar3 = Sequence::create(pFVar4,uVar3,0);
  (**(code **)(*plVar6 + 0x3a8))(plVar6,uVar3);
  if (&local_80 == (undefined ***)local_60) {
    pcVar5 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00f59754;
    pcVar5 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar5)();
LAB_00f59754:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00f59774 to 01059793 has its CatchHandler @ 00f59bdc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

