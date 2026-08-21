
/* cocos2d::EventListenerFocus::create() */

EventListener * cocos2d::EventListenerFocus::create(void)

{
  long lVar1;
  EventListener *this;
  ulong uVar2;
  code *pcVar3;
  undefined **local_70;
  EventListener *pEStack_68;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = operator_new(0xd0,(nothrow_t *)&std::nothrow);
  if (this == (EventListener *)0x0) goto LAB_00fa8f58;
  EventListener::EventListener(this);
  *(undefined8 *)(this + 0xc0) = 0;
  local_70 = &PTR_FUN_01723378;
  *(undefined ***)this = &PTR__EventListenerFocus_01723330;
  pEStack_68 = this;
  local_50 = (long *)&local_70;
  uVar2 = EventListener::init(this,6,&LISTENER_ID,&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_00fa8f30:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
    goto LAB_00fa8f30;
  }
  if ((uVar2 & 1) == 0) {
    (**(code **)(*(long *)this + 8))(this);
    this = (EventListener *)0x0;
  }
  else {
    Ref::autorelease((Ref *)this);
  }
LAB_00fa8f58:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

