
/* cocos2d::EventListenerPhysicsContact::init() */

uint __thiscall cocos2d::EventListenerPhysicsContact::init(EventListenerPhysicsContact *this)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  undefined **local_70;
  EventListenerPhysicsContact *pEStack_68;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,PHYSICSCONTACT_EVENT_NAME);
  local_70 = &PTR_FUN_01725020;
  pEStack_68 = this;
  local_50 = &local_70;
  uVar2 = EventListenerCustom::init
                    ((EventListenerCustom *)this,(basic_string *)local_88,(function *)&local_70);
  if (&local_70 == local_50) {
    pcVar3 = (code *)(*local_50)[4];
  }
  else {
    if (local_50 == (undefined ***)0x0) goto LAB_01001ef0;
    pcVar3 = (code *)(*local_50)[5];
  }
  (*pcVar3)();
LAB_01001ef0:
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

