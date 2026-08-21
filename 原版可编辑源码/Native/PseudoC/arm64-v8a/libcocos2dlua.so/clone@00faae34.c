
/* cocos2d::EventListenerTouchAllAtOnce::clone() */

EventListener * __thiscall
cocos2d::EventListenerTouchAllAtOnce::clone(EventListenerTouchAllAtOnce *this)

{
  long lVar1;
  EventListener *this_00;
  ulong uVar2;
  EventListenerTouchAllAtOnce *pEVar3;
  code *pcVar4;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = operator_new(0x160,(nothrow_t *)&std::nothrow);
  if (this_00 == (EventListener *)0x0) goto LAB_00fab10c;
  EventListener::EventListener(this_00);
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xf0) = 0;
  *(undefined8 *)(this_00 + 0x120) = 0;
  *(undefined8 *)(this_00 + 0x150) = 0;
  *(undefined ***)this_00 = &PTR__EventListenerTouchAllAtOnce_017235b8;
  local_60 = (long *)0x0;
  uVar2 = EventListener::init(this_00,2,LISTENER_ID,alStack_80);
  if (alStack_80 == local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00faaee4:
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00faaee4;
  }
  if ((uVar2 & 1) == 0) {
    (**(code **)(*(long *)this_00 + 8))(this_00);
    this_00 = (EventListener *)0x0;
    goto LAB_00fab10c;
  }
  Ref::autorelease((Ref *)this_00);
  pEVar3 = *(EventListenerTouchAllAtOnce **)(this + 0xc0);
  if (pEVar3 == (EventListenerTouchAllAtOnce *)0x0) {
    local_60 = (long *)0x0;
  }
  else if (this + 0xa0 == pEVar3) {
    local_60 = alStack_80;
    (**(code **)(*(long *)pEVar3 + 0x18))(pEVar3,alStack_80);
  }
  else {
    local_60 = (long *)(**(code **)(*(long *)pEVar3 + 0x10))();
  }
  FUN_008ae5c8(alStack_80,this_00 + 0xa0);
  if (alStack_80 == local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00faaf88:
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00faaf88;
  }
  pEVar3 = *(EventListenerTouchAllAtOnce **)(this + 0xf0);
  if (pEVar3 == (EventListenerTouchAllAtOnce *)0x0) {
    local_60 = (long *)0x0;
  }
  else if (this + 0xd0 == pEVar3) {
                    /* catch() { ... } // from try @ 00faaffc with catch @ 00faafc0
                       catch() { ... } // from try @ 00fab048 with catch @ 00faafc0 */
    local_60 = alStack_80;
    (**(code **)(*(long *)pEVar3 + 0x18))(pEVar3,alStack_80);
  }
  else {
    local_60 = (long *)(**(code **)(*(long *)pEVar3 + 0x10))();
  }
  FUN_008ae5c8(alStack_80,this_00 + 0xd0);
  if (alStack_80 == local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00fab008:
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
                    /* try { // try from 00faaff8 to 010aaffb has its CatchHandler @ 00fab048 */
    pcVar4 = *(code **)(*local_60 + 0x28);
                    /* try { // try from 00faaffc to 010ab03f has its CatchHandler @ 00faafc0 */
    goto LAB_00fab008;
  }
  pEVar3 = *(EventListenerTouchAllAtOnce **)(this + 0x120);
  if (pEVar3 == (EventListenerTouchAllAtOnce *)0x0) {
    local_60 = (long *)0x0;
  }
  else if (this + 0x100 == pEVar3) {
                    /* try { // try from 00fab040 to 010ab047 has its CatchHandler @ 00fab048 */
                    /* catch() { ... } // from try @ 00faaff8 with catch @ 00fab048
                       catch() { ... } // from try @ 00fab040 with catch @ 00fab048
                       try { // try from 00fab048 to 010ab067 has its CatchHandler @ 00faafc0 */
    local_60 = alStack_80;
    (**(code **)(*(long *)pEVar3 + 0x18))(pEVar3,alStack_80);
  }
  else {
    local_60 = (long *)(**(code **)(*(long *)pEVar3 + 0x10))();
  }
  FUN_008ae5c8(alStack_80,this_00 + 0x100);
                    /* try { // try from 00fab068 to 010ab0d7 has its CatchHandler @ 00fab068
                       catch() { ... } // from try @ 00fab068 with catch @ 00fab068
                       catch() { ... } // from try @ 00fab0e4 with catch @ 00fab068 */
  if (alStack_80 == local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00fab088:
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00fab088;
  }
  pEVar3 = *(EventListenerTouchAllAtOnce **)(this + 0x150);
  if (pEVar3 == (EventListenerTouchAllAtOnce *)0x0) {
    local_60 = (long *)0x0;
  }
  else if (this + 0x130 == pEVar3) {
    local_60 = alStack_80;
    (**(code **)(*(long *)pEVar3 + 0x18))(pEVar3,alStack_80);
  }
  else {
    local_60 = (long *)(**(code **)(*(long *)pEVar3 + 0x10))();
  }
                    /* try { // try from 00fab0d8 to 010ab0e3 has its CatchHandler @ 00fab1a4 */
  FUN_008ae5c8(alStack_80,this_00 + 0x130);
                    /* try { // try from 00fab0e4 to 010ab1b7 has its CatchHandler @ 00fab068 */
  if (alStack_80 == local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00fab10c;
    pcVar4 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar4)();
LAB_00fab10c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

