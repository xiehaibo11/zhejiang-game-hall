
/* cocos2d::EventListenerTouchAllAtOnce::create() */

EventListener * cocos2d::EventListenerTouchAllAtOnce::create(void)

{
  long lVar1;
  EventListener *this;
  ulong uVar2;
  code *pcVar3;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x160,(nothrow_t *)&std::nothrow);
  if (this == (EventListener *)0x0) goto LAB_00faad84;
  EventListener::EventListener(this);
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined ***)this = &PTR__EventListenerTouchAllAtOnce_017235b8;
  local_50 = (long *)0x0;
  uVar2 = EventListener::init(this,2,LISTENER_ID,alStack_70);
  if (alStack_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_00faad5c:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
    goto LAB_00faad5c;
  }
  if ((uVar2 & 1) == 0) {
    (**(code **)(*(long *)this + 8))(this);
    this = (EventListener *)0x0;
  }
  else {
    Ref::autorelease((Ref *)this);
  }
LAB_00faad84:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

