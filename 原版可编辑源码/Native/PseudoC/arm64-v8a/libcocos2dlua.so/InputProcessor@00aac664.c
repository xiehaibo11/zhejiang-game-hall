
/* fairygui::InputProcessor::InputProcessor(fairygui::GComponent*) */

void __thiscall fairygui::InputProcessor::InputProcessor(InputProcessor *this,GComponent *param_1)

{
  long lVar1;
  Ref *pRVar2;
  EventListenerTouchOneByOne *this_00;
  EventDispatcher *pEVar3;
  code *pcVar4;
  long lVar5;
  undefined **local_80;
  code *local_78;
  undefined8 uStack_70;
  InputProcessor *local_68;
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  InputEvent::InputEvent((InputEvent *)(this + 0x70));
  *(undefined2 *)(this + 0xa8) = 0;
  *(GComponent **)(this + 0x30) = param_1;
  *(InputProcessor **)(this + 0xa0) = this;
  pRVar2 = (Ref *)cocos2d::EventListenerTouchOneByOne::create();
  *(Ref **)this = pRVar2;
  this_00 = (EventListenerTouchOneByOne *)0x0;
  if (pRVar2 != (Ref *)0x0) {
    cocos2d::Ref::retain(pRVar2);
    this_00 = *(EventListenerTouchOneByOne **)this;
  }
  cocos2d::EventListenerTouchOneByOne::setSwallowTouches(this_00,false);
  local_80 = &PTR_FUN_016a9d40;
  uStack_70 = 0;
  local_78 = onTouchBegan;
  local_68 = this;
  local_60 = (long *)&local_80;
  FUN_008aeb48(&local_80,*(long *)this + 0xa0);
  if (&local_80 == (undefined ***)local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00aac734:
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00aac734;
  }
  local_80 = &PTR_FUN_016a9dd8;
  uStack_70 = 0;
  local_78 = onTouchMoved;
  local_68 = this;
  local_60 = (long *)&local_80;
  FUN_008aedb8(&local_80,*(long *)this + 0xd0);
  if (&local_80 == (undefined ***)local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00aac798:
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
                    /* try { // try from 00aac784 to 00bac7b7 has its CatchHandler @ 00aac884 */
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00aac798;
  }
  local_80 = &PTR_FUN_016a9dd8;
                    /* try { // try from 00aac7b8 to 00bac7cb has its CatchHandler @ 00aac850 */
  uStack_70 = 0;
  local_78 = onTouchEnded;
  local_68 = this;
  local_60 = (long *)&local_80;
  FUN_008aedb8(&local_80,*(long *)this + 0x100);
                    /* try { // try from 00aac7d0 to 00bac803 has its CatchHandler @ 00aac854 */
  if (&local_80 == (undefined ***)local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00aac7f4:
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00aac7f4;
  }
                    /* try { // try from 00aac804 to 00bac89f has its CatchHandler @ 00aac3b4 */
  local_80 = &PTR_FUN_016a9dd8;
  uStack_70 = 0;
  local_78 = onTouchCancelled;
  local_68 = this;
  local_60 = (long *)&local_80;
  FUN_008aedb8(&local_80,*(long *)this + 0x130);
  if (&local_80 == (undefined ***)local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00aac850:
                    /* catch() { ... } // from try @ 00aac7b8 with catch @ 00aac850 */
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00aac850;
  }
                    /* catch() { ... } // from try @ 00aac7d0 with catch @ 00aac854 */
  pEVar3 = (EventDispatcher *)(**(code **)(**(long **)(*(long *)(this + 0x30) + 0xa8) + 0x388))();
  cocos2d::EventDispatcher::addEventListenerWithSceneGraphPriority
            (pEVar3,*(EventListener **)this,*(Node **)(*(long *)(this + 0x30) + 0xa8));
  pRVar2 = (Ref *)cocos2d::EventListenerKeyboard::create();
  *(Ref **)(this + 0x10) = pRVar2;
  if (pRVar2 == (Ref *)0x0) {
    lVar5 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 00aac784 with catch @ 00aac884 */
    cocos2d::Ref::retain(pRVar2);
    lVar5 = *(long *)(this + 0x10);
  }
  local_80 = &PTR_FUN_016a9e70;
  uStack_70 = 0;
  local_78 = onKeyDown;
  local_68 = this;
  local_60 = (long *)&local_80;
  FUN_008af1b8(&local_80,lVar5 + 0xa0);
  if (&local_80 == (undefined ***)local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00aac8f0:
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00aac8f0;
  }
  local_80 = &PTR_FUN_016a9e70;
  uStack_70 = 0;
  local_78 = onKeyUp;
  local_68 = this;
  local_60 = (long *)&local_80;
  FUN_008af1b8(&local_80,*(long *)(this + 0x10) + 0xd0);
  if (&local_80 == (undefined ***)local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00aac950;
    pcVar4 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar4)();
LAB_00aac950:
  pEVar3 = (EventDispatcher *)(**(code **)(**(long **)(*(long *)(this + 0x30) + 0xa8) + 0x388))();
  cocos2d::EventDispatcher::addEventListenerWithSceneGraphPriority
            (pEVar3,*(EventListener **)(this + 0x10),*(Node **)(*(long *)(this + 0x30) + 0xa8));
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

