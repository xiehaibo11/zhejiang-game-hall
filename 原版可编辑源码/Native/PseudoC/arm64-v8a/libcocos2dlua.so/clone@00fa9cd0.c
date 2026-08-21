
/* cocos2d::EventListenerMouse::clone() */

EventListener * __thiscall cocos2d::EventListenerMouse::clone(EventListenerMouse *this)

{
  long lVar1;
  EventListener *this_00;
  ulong uVar2;
  EventListenerMouse *pEVar3;
  code *pcVar4;
  undefined **local_80;
  EventListener *pEStack_78;
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = operator_new(0x160,(nothrow_t *)&std::nothrow);
  if (this_00 == (EventListener *)0x0) goto LAB_00fa9fb4;
  EventListener::EventListener(this_00);
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xf0) = 0;
  *(undefined8 *)(this_00 + 0x120) = 0;
  *(undefined8 *)(this_00 + 0x150) = 0;
  local_80 = &PTR_FUN_01723508;
  *(undefined ***)this_00 = &PTR__EventListenerMouse_017234c0;
  pEStack_78 = this_00;
  local_60 = (long *)&local_80;
  uVar2 = EventListener::init(this_00,4,&LISTENER_ID,&local_80);
  if (&local_80 == (undefined ***)local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00fa9d8c:
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00fa9d8c;
  }
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 00fa9dcc to 010a9dd3 has its CatchHandler @ 00fa9dec */
    (**(code **)(*(long *)this_00 + 8))(this_00);
                    /* try { // try from 00fa9dd4 to 010a9dff has its CatchHandler @ 00fa9db4 */
    this_00 = (EventListener *)0x0;
    goto LAB_00fa9fb4;
  }
  Ref::autorelease((Ref *)this_00);
  pEVar3 = *(EventListenerMouse **)(this + 0xf0);
  if (pEVar3 == (EventListenerMouse *)0x0) {
    local_60 = (long *)0x0;
  }
  else if (this + 0xd0 == pEVar3) {
                    /* catch() { ... } // from try @ 00fa9dcc with catch @ 00fa9dec */
    local_60 = (long *)&local_80;
    (**(code **)(*(long *)pEVar3 + 0x18))(pEVar3,&local_80);
  }
  else {
                    /* try { // try from 00fa9db4 to 010a9dcb has its CatchHandler @ 00fa9db4
                       catch() { ... } // from try @ 00fa9db4 with catch @ 00fa9db4
                       catch() { ... } // from try @ 00fa9dd4 with catch @ 00fa9db4 */
    local_60 = (long *)(**(code **)(*(long *)pEVar3 + 0x10))();
  }
  FUN_008b4d3c(&local_80,this_00 + 0xd0);
  if (&local_80 == (undefined ***)local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00fa9e30:
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00fa9e30;
  }
  pEVar3 = *(EventListenerMouse **)(this + 0xc0);
  if (pEVar3 == (EventListenerMouse *)0x0) {
    local_60 = (long *)0x0;
  }
  else if (this + 0xa0 == pEVar3) {
    local_60 = (long *)&local_80;
    (**(code **)(*(long *)pEVar3 + 0x18))(pEVar3,&local_80);
  }
  else {
    local_60 = (long *)(**(code **)(*(long *)pEVar3 + 0x10))();
  }
  FUN_008b4d3c(&local_80,this_00 + 0xa0);
  if (&local_80 == (undefined ***)local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00fa9eb0:
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00fa9eb0;
  }
  pEVar3 = *(EventListenerMouse **)(this + 0x120);
  if (pEVar3 == (EventListenerMouse *)0x0) {
    local_60 = (long *)0x0;
  }
  else if (this + 0x100 == pEVar3) {
    local_60 = (long *)&local_80;
    (**(code **)(*(long *)pEVar3 + 0x18))(pEVar3,&local_80);
  }
  else {
    local_60 = (long *)(**(code **)(*(long *)pEVar3 + 0x10))();
  }
  FUN_008b4d3c(&local_80,this_00 + 0x100);
  if (&local_80 == (undefined ***)local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00fa9f30:
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00fa9f30;
  }
  pEVar3 = *(EventListenerMouse **)(this + 0x150);
  if (pEVar3 == (EventListenerMouse *)0x0) {
    local_60 = (long *)0x0;
  }
  else if (this + 0x130 == pEVar3) {
    local_60 = (long *)&local_80;
    (**(code **)(*(long *)pEVar3 + 0x18))(pEVar3,&local_80);
  }
  else {
    local_60 = (long *)(**(code **)(*(long *)pEVar3 + 0x10))();
  }
  FUN_008b4d3c(&local_80,this_00 + 0x130);
  if (&local_80 == (undefined ***)local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00fa9fb4;
    pcVar4 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar4)();
LAB_00fa9fb4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

