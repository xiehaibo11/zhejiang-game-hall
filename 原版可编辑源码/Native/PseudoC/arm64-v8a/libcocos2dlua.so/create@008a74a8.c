
/* cocos2d::LuaEventListenerCustom::create(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

EventListenerCustom * cocos2d::LuaEventListenerCustom::create(basic_string *param_1)

{
  long lVar1;
  EventListenerCustom *this;
  ulong uVar2;
  code *pcVar3;
  undefined **local_70;
  EventListenerCustom *pEStack_68;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = operator_new(0xd0,(nothrow_t *)&std::nothrow);
  if (this == (EventListenerCustom *)0x0) goto LAB_008a7560;
  EventListenerCustom::EventListenerCustom(this);
  local_70 = &PTR_FUN_0169a8b0;
  pEStack_68 = this;
  local_50 = (long *)&local_70;
  uVar2 = EventListenerCustom::init(this,param_1,(function *)&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_008a7538:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
    goto LAB_008a7538;
  }
  if ((uVar2 & 1) == 0) {
    (**(code **)(*(long *)this + 8))(this);
    this = (EventListenerCustom *)0x0;
  }
  else {
    Ref::autorelease((Ref *)this);
  }
LAB_008a7560:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

