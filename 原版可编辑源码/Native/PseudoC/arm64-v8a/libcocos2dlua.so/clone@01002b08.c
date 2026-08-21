
/* cocos2d::EventListenerPhysicsContactWithShapes::clone() */

long __thiscall
cocos2d::EventListenerPhysicsContactWithShapes::clone(EventListenerPhysicsContactWithShapes *this)

{
  long lVar1;
  long lVar2;
  EventListenerPhysicsContactWithShapes *pEVar3;
  code *pcVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 01002a84 with catch @ 01002b20 */
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = create(*(PhysicsShape **)(this + 400),*(PhysicsShape **)(this + 0x198));
  if (lVar2 == 0) goto LAB_01002d40;
  pEVar3 = *(EventListenerPhysicsContactWithShapes **)(this + 0xf0);
  if (pEVar3 == (EventListenerPhysicsContactWithShapes *)0x0) {
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
LAB_01002bbc:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_01002bbc;
  }
  pEVar3 = *(EventListenerPhysicsContactWithShapes **)(this + 0x120);
  if (pEVar3 == (EventListenerPhysicsContactWithShapes *)0x0) {
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
LAB_01002c3c:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_01002c3c;
  }
  pEVar3 = *(EventListenerPhysicsContactWithShapes **)(this + 0x150);
  if (pEVar3 == (EventListenerPhysicsContactWithShapes *)0x0) {
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
LAB_01002cbc:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_01002cbc;
  }
  pEVar3 = *(EventListenerPhysicsContactWithShapes **)(this + 0x180);
  if (pEVar3 == (EventListenerPhysicsContactWithShapes *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (this + 0x160 == pEVar3) {
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
    if (local_50 == (long *)0x0) goto LAB_01002d40;
    pcVar4 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar4)();
LAB_01002d40:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

