
/* cocos2d::EventListenerFocus::clone() */

EventListener * __thiscall cocos2d::EventListenerFocus::clone(EventListenerFocus *this)

{
  long lVar1;
  EventListener *this_00;
  ulong uVar2;
  EventListenerFocus *pEVar3;
  code *pcVar4;
  undefined **local_80;
  EventListener *pEStack_78;
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = operator_new(0xd0,(nothrow_t *)&std::nothrow);
  if (this_00 == (EventListener *)0x0) goto LAB_00fa9208;
  EventListener::EventListener(this_00);
                    /* try { // try from 00fa9100 to 010a9117 has its CatchHandler @ 00fa9100
                       catch() { ... } // from try @ 00fa9100 with catch @ 00fa9100
                       catch() { ... } // from try @ 00fa9120 with catch @ 00fa9100 */
  *(undefined8 *)(this_00 + 0xc0) = 0;
  local_80 = &PTR_FUN_01723378;
                    /* try { // try from 00fa9118 to 010a911f has its CatchHandler @ 00fa9138 */
  *(undefined ***)this_00 = &PTR__EventListenerFocus_01723330;
  pEStack_78 = this_00;
  local_60 = (long *)&local_80;
                    /* try { // try from 00fa9120 to 010a914b has its CatchHandler @ 00fa9100 */
  uVar2 = EventListener::init(this_00,6,&LISTENER_ID,&local_80);
                    /* catch() { ... } // from try @ 00fa9118 with catch @ 00fa9138 */
  if (&local_80 == (undefined ***)local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00fa9160:
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00fa9160;
  }
  if ((uVar2 & 1) == 0) {
    (**(code **)(*(long *)this_00 + 8))(this_00);
    this_00 = (EventListener *)0x0;
  }
  else {
    Ref::autorelease((Ref *)this_00);
    pEVar3 = *(EventListenerFocus **)(this + 0xc0);
    if (pEVar3 == (EventListenerFocus *)0x0) {
      local_60 = (long *)0x0;
    }
    else if (this + 0xa0 == pEVar3) {
      local_60 = (long *)&local_80;
      (**(code **)(*(long *)pEVar3 + 0x18))(pEVar3,&local_80);
    }
    else {
      local_60 = (long *)(**(code **)(*(long *)pEVar3 + 0x10))();
    }
    FUN_00963a28(&local_80,this_00 + 0xa0);
    if (&local_80 == (undefined ***)local_60) {
      pcVar4 = *(code **)(*local_60 + 0x20);
    }
    else {
      if (local_60 == (long *)0x0) goto LAB_00fa9208;
      pcVar4 = *(code **)(*local_60 + 0x28);
    }
    (*pcVar4)();
  }
LAB_00fa9208:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

