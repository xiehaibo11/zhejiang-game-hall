
/* cocos2d::EventListenerPhysicsContactWithGroup::clone() */

long __thiscall
cocos2d::EventListenerPhysicsContactWithGroup::clone(EventListenerPhysicsContactWithGroup *this)

{
  long lVar1;
  long lVar2;
  EventListenerPhysicsContactWithGroup *pEVar3;
  code *pcVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
                    /* catch() { ... } // from try @ 01002e3c with catch @ 01002eb8 */
                    /* catch() { ... } // from try @ 01002e58 with catch @ 01002ec0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = create(*(int *)(this + 400));
  if (lVar2 == 0) goto LAB_010030e0;
  pEVar3 = *(EventListenerPhysicsContactWithGroup **)(this + 0xf0);
                    /* try { // try from 01002ee4 to 01102f23 has its CatchHandler @ 01002ee4
                       catch() { ... } // from try @ 01002ee4 with catch @ 01002ee4
                       catch() { ... } // from try @ 01002f4c with catch @ 01002ee4 */
  if (pEVar3 == (EventListenerPhysicsContactWithGroup *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (this + 0xd0 == pEVar3) {
    local_50 = alStack_70;
                    /* try { // try from 01002f24 to 01102f4b has its CatchHandler @ 01002f64 */
    (**(code **)(*(long *)pEVar3 + 0x18))(pEVar3,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*(long *)pEVar3 + 0x10))();
  }
  FUN_008bac30(alStack_70,lVar2 + 0xd0);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_01002f5c:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
                    /* try { // try from 01002f4c to 01102f77 has its CatchHandler @ 01002ee4 */
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_01002f5c;
  }
  pEVar3 = *(EventListenerPhysicsContactWithGroup **)(this + 0x120);
                    /* catch() { ... } // from try @ 01002f24 with catch @ 01002f64 */
  if (pEVar3 == (EventListenerPhysicsContactWithGroup *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (this + 0x100 == pEVar3) {
                    /* try { // try from 01002f9c to 01102f9f has its CatchHandler @ 01002fb0 */
    local_50 = alStack_70;
    (**(code **)(*(long *)pEVar3 + 0x18))(pEVar3,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*(long *)pEVar3 + 0x10))();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01002f9c with catch @ 01002fb0
                        */
  FUN_008baeb8(alStack_70,lVar2 + 0x100);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_01002fdc:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_01002fdc;
  }
  pEVar3 = *(EventListenerPhysicsContactWithGroup **)(this + 0x150);
  if (pEVar3 == (EventListenerPhysicsContactWithGroup *)0x0) {
    local_50 = (long *)0x0;
  }
  else {
                    /* try { // try from 01002fe8 to 01102feb has its CatchHandler @ 01003004 */
    if (this + 0x130 == pEVar3) {
                    /* try { // try from 01003018 to 0110303f has its CatchHandler @ 01003018
                       catch(type#1 @ 00000000) { ... } // from try @ 01003018 with catch @ 01003018
                        */
      local_50 = alStack_70;
      (**(code **)(*(long *)pEVar3 + 0x18))(pEVar3,alStack_70);
    }
    else {
      local_50 = (long *)(**(code **)(*(long *)pEVar3 + 0x10))();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01002fe8 with catch @ 01003004
                        */
    }
  }
  FUN_008bb130(alStack_70,lVar2 + 0x130);
                    /* try { // try from 01003040 to 01103047 has its CatchHandler @ 010030a8 */
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_0100305c:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_0100305c;
  }
  pEVar3 = *(EventListenerPhysicsContactWithGroup **)(this + 0x180);
  if (pEVar3 == (EventListenerPhysicsContactWithGroup *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (this + 0x160 == pEVar3) {
    local_50 = alStack_70;
    (**(code **)(*(long *)pEVar3 + 0x18))(pEVar3,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*(long *)pEVar3 + 0x10))();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01003040 with catch @ 010030a8
                        */
  FUN_008bb390(alStack_70,lVar2 + 0x160);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_010030e0;
    pcVar4 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar4)();
LAB_010030e0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

