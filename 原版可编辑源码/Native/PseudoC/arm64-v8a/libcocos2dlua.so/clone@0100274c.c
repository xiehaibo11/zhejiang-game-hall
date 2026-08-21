
/* cocos2d::EventListenerPhysicsContactWithBodies::clone() */

long __thiscall
cocos2d::EventListenerPhysicsContactWithBodies::clone(EventListenerPhysicsContactWithBodies *this)

{
  long lVar1;
  long lVar2;
  EventListenerPhysicsContactWithBodies *pEVar3;
  code *pcVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = create(*(PhysicsBody **)(this + 400),*(PhysicsBody **)(this + 0x198));
  if (lVar2 == 0) goto LAB_01002984;
  pEVar3 = *(EventListenerPhysicsContactWithBodies **)(this + 0xf0);
  if (pEVar3 == (EventListenerPhysicsContactWithBodies *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (this + 0xd0 == pEVar3) {
    local_50 = alStack_70;
    (**(code **)(*(long *)pEVar3 + 0x18))(pEVar3,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*(long *)pEVar3 + 0x10))();
  }
  FUN_008bac30(alStack_70,lVar2 + 0xd0);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_01002800:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_01002800;
  }
  pEVar3 = *(EventListenerPhysicsContactWithBodies **)(this + 0x120);
  if (pEVar3 == (EventListenerPhysicsContactWithBodies *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (this + 0x100 == pEVar3) {
    local_50 = alStack_70;
    (**(code **)(*(long *)pEVar3 + 0x18))(pEVar3,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*(long *)pEVar3 + 0x10))();
  }
  FUN_008baeb8(alStack_70,lVar2 + 0x100);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_01002880:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_01002880;
  }
  pEVar3 = *(EventListenerPhysicsContactWithBodies **)(this + 0x150);
  if (pEVar3 == (EventListenerPhysicsContactWithBodies *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (this + 0x130 == pEVar3) {
    local_50 = alStack_70;
    (**(code **)(*(long *)pEVar3 + 0x18))(pEVar3,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*(long *)pEVar3 + 0x10))();
  }
  FUN_008bb130(alStack_70,lVar2 + 0x130);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_01002900:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_01002900;
  }
  pEVar3 = *(EventListenerPhysicsContactWithBodies **)(this + 0x180);
  if (pEVar3 == (EventListenerPhysicsContactWithBodies *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (this + 0x160 == pEVar3) {
                    /* catch() { ... } // from try @ 01002714 with catch @ 01002938 */
    local_50 = alStack_70;
    (**(code **)(*(long *)pEVar3 + 0x18))(pEVar3,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*(long *)pEVar3 + 0x10))();
  }
  FUN_008bb390(alStack_70,lVar2 + 0x160);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_01002984;
    pcVar4 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar4)();
LAB_01002984:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

