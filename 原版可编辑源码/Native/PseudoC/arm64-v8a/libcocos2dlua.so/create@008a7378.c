
/* cocos2d::LuaEventListenerAcceleration::create() */

EventListenerAcceleration * cocos2d::LuaEventListenerAcceleration::create(void)

{
  long lVar1;
  EventListenerAcceleration *this;
  ulong uVar2;
  code *pcVar3;
  undefined **local_70;
  EventListenerAcceleration *pEStack_68;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = operator_new(0xd0,(nothrow_t *)&std::nothrow);
  if (this == (EventListenerAcceleration *)0x0) goto LAB_008a7428;
  EventListenerAcceleration::EventListenerAcceleration(this);
  local_70 = &PTR_FUN_0169a830;
  pEStack_68 = this;
  local_50 = (long *)&local_70;
  uVar2 = EventListenerAcceleration::init(this,(function *)&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_008a7400:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
    goto LAB_008a7400;
  }
  if ((uVar2 & 1) == 0) {
    (**(code **)(*(long *)this + 8))(this);
    this = (EventListenerAcceleration *)0x0;
  }
  else {
    Ref::autorelease((Ref *)this);
  }
LAB_008a7428:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

