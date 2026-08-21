
/* cocos2d::EventListenerKeyboard::clone() */

EventListener * __thiscall cocos2d::EventListenerKeyboard::clone(EventListenerKeyboard *this)

{
  long lVar1;
  EventListener *this_00;
  ulong uVar2;
  EventListenerKeyboard *pEVar3;
  code *pcVar4;
  undefined **local_80;
  EventListener *pEStack_78;
  long *local_60;
  long local_48;
  
                    /* try { // try from 00fa95f0 to 010a95f7 has its CatchHandler @ 00fa96e8 */
  lVar1 = tpidr_el0;
                    /* try { // try from 00fa95f8 to 010a96df has its CatchHandler @ 00fa928c */
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = operator_new(0x100,(nothrow_t *)&std::nothrow);
  if (this_00 == (EventListener *)0x0) goto LAB_00fa97b8;
  EventListener::EventListener(this_00);
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xf0) = 0;
  local_80 = &PTR_FUN_01723440;
  *(undefined ***)this_00 = &PTR__EventListenerKeyboard_017233f8;
  pEStack_78 = this_00;
  local_60 = (long *)&local_80;
  uVar2 = EventListener::init(this_00,3,&LISTENER_ID,&local_80);
  if (&local_80 == (undefined ***)local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00fa9690:
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00fa9690;
  }
  if ((uVar2 & 1) == 0) {
    (**(code **)(*(long *)this_00 + 8))(this_00);
    this_00 = (EventListener *)0x0;
    goto LAB_00fa97b8;
  }
  Ref::autorelease((Ref *)this_00);
  pEVar3 = *(EventListenerKeyboard **)(this + 0xc0);
  if (pEVar3 == (EventListenerKeyboard *)0x0) {
                    /* try { // try from 00fa96e0 to 010a96e3 has its CatchHandler @ 00fa96ec */
    local_60 = (long *)0x0;
                    /* try { // try from 00fa96e4 to 010a96e7 has its CatchHandler @ 00fa96e8 */
  }
  else if (this + 0xa0 == pEVar3) {
                    /* catch() { ... } // from try @ 00fa95f0 with catch @ 00fa96e8
                       catch() { ... } // from try @ 00fa96e4 with catch @ 00fa96e8
                       try { // try from 00fa96e8 to 010a977f has its CatchHandler @ 00fa928c */
                    /* catch() { ... } // from try @ 00fa9388 with catch @ 00fa96ec
                       catch() { ... } // from try @ 00fa96e0 with catch @ 00fa96ec */
                    /* catch() { ... } // from try @ 00fa95d8 with catch @ 00fa96f0 */
    local_60 = (long *)&local_80;
    (**(code **)(*(long *)pEVar3 + 0x18))(pEVar3,&local_80);
  }
  else {
    local_60 = (long *)(**(code **)(*(long *)pEVar3 + 0x10))();
  }
  FUN_008af1b8(&local_80,this_00 + 0xa0);
                    /* catch() { ... } // from try @ 00fa9370 with catch @ 00fa9718 */
  if (&local_80 == (undefined ***)local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00fa9734:
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00fa9734;
  }
  pEVar3 = *(EventListenerKeyboard **)(this + 0xf0);
  if (pEVar3 == (EventListenerKeyboard *)0x0) {
    local_60 = (long *)0x0;
  }
  else if (this + 0xd0 == pEVar3) {
                    /* catch() { ... } // from try @ 00fa9594 with catch @ 00fa9768 */
                    /* catch() { ... } // from try @ 00fa932c with catch @ 00fa976c */
    local_60 = (long *)&local_80;
    (**(code **)(*(long *)pEVar3 + 0x18))(pEVar3,&local_80);
  }
  else {
    local_60 = (long *)(**(code **)(*(long *)pEVar3 + 0x10))();
  }
  FUN_008af1b8(&local_80,this_00 + 0xd0);
  if (&local_80 == (undefined ***)local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00fa97b8;
    pcVar4 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar4)();
LAB_00fa97b8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

