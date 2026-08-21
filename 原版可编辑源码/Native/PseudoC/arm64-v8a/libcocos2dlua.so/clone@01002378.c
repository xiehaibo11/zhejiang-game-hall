
/* cocos2d::EventListenerPhysicsContact::clone() */

long __thiscall cocos2d::EventListenerPhysicsContact::clone(EventListenerPhysicsContact *this)

{
  long lVar1;
  long lVar2;
  EventListenerPhysicsContact *pEVar3;
  code *pcVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = create();
  if (lVar2 == 0) goto LAB_010025a8;
  pEVar3 = *(EventListenerPhysicsContact **)(this + 0xf0);
  if (pEVar3 == (EventListenerPhysicsContact *)0x0) {
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
LAB_01002424:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_01002424;
  }
  pEVar3 = *(EventListenerPhysicsContact **)(this + 0x120);
  if (pEVar3 == (EventListenerPhysicsContact *)0x0) {
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
LAB_010024a4:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_010024a4;
  }
  pEVar3 = *(EventListenerPhysicsContact **)(this + 0x150);
  if (pEVar3 == (EventListenerPhysicsContact *)0x0) {
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
LAB_01002524:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_01002524;
  }
  pEVar3 = *(EventListenerPhysicsContact **)(this + 0x180);
  if (pEVar3 == (EventListenerPhysicsContact *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (this + 0x160 == pEVar3) {
                    /* try { // try from 01002564 to 01102713 has its CatchHandler @ 01002564
                       catch() { ... } // from try @ 01002564 with catch @ 01002564
                       catch() { ... } // from try @ 01002728 with catch @ 01002564 */
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
    if (local_50 == (long *)0x0) goto LAB_010025a8;
    pcVar4 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar4)();
LAB_010025a8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

