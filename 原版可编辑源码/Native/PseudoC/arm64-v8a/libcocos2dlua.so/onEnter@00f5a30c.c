
/* cocos2d::TransitionSlideInL::onEnter() */

void __thiscall cocos2d::TransitionSlideInL::onEnter(TransitionSlideInL *this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FiniteTimeAction *pFVar5;
  code *pcVar6;
  undefined **local_80;
  code *local_78;
  undefined8 uStack_70;
  TransitionSlideInL *local_68;
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
  (**(code **)(*(long *)this + 0x558))(this);
  uVar3 = (**(code **)(*(long *)this + 0x550))(this);
  uVar4 = (**(code **)(*(long *)this + 0x550))(this);
  uVar3 = (**(code **)(*(long *)this + 0x548))(this,uVar3);
  pFVar5 = (FiniteTimeAction *)(**(code **)(*(long *)this + 0x548))(this,uVar4);
                    /* try { // try from 00f5a3f4 to 0105a417 has its CatchHandler @ 00f5a3f4
                       catch() { ... } // from try @ 00f5a3f4 with catch @ 00f5a3f4
                       catch() { ... } // from try @ 00f5a41c with catch @ 00f5a3f4 */
  local_80 = &PTR_FUN_0171ca90;
  uStack_70 = 0;
  local_78 = TransitionScene::finish;
  local_68 = this;
  local_60 = (long *)&local_80;
                    /* try { // try from 00f5a418 to 0105a41b has its CatchHandler @ 00f5a428 */
                    /* try { // try from 00f5a41c to 0105a43b has its CatchHandler @ 00f5a3f4 */
  uVar4 = CallFunc::create((function *)&local_80);
                    /* catch() { ... } // from try @ 00f5a418 with catch @ 00f5a428 */
  uVar4 = Sequence::create(pFVar5,uVar4,0);
                    /* try { // try from 00f5a43c to 0105a47b has its CatchHandler @ 00f5a43c
                       catch() { ... } // from try @ 00f5a43c with catch @ 00f5a43c
                       catch() { ... } // from try @ 00f5a484 with catch @ 00f5a43c */
  if (&local_80 == (undefined ***)local_60) {
    pcVar6 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00f5a460;
    pcVar6 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar6)();
LAB_00f5a460:
  (**(code **)(**(long **)(this + 0x370) + 0x3a8))(*(long **)(this + 0x370),uVar3);
                    /* try { // try from 00f5a47c to 0105a483 has its CatchHandler @ 00f5a494 */
                    /* try { // try from 00f5a484 to 0105a4a7 has its CatchHandler @ 00f5a43c */
  (**(code **)(**(long **)(this + 0x378) + 0x3a8))(*(long **)(this + 0x378),uVar4);
                    /* catch() { ... } // from try @ 00f5a47c with catch @ 00f5a494 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00f5a5c4 with catch @ 00f5a4a8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

