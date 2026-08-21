
/* cocos2d::EventListenerCustom::init(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (cocos2d::EventCustom*)> const&) */

uint __thiscall
cocos2d::EventListenerCustom::init
          (EventListenerCustom *this,basic_string *param_1,function *param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  code *pcVar4;
  undefined **local_70;
  EventListenerCustom *pEStack_68;
  long *local_50;
  long local_38;
  
  local_50 = (long *)&local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00fa86d8 with catch @ 00fa8860 */
  plVar3 = *(long **)(param_2 + 0x20);
  if (plVar3 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if ((long *)param_2 == plVar3) {
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_70);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3);
  }
  FUN_00fa8b44(&local_70,this + 0xa0);
  if (&local_70 == (undefined ***)local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_00fa88ec:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_00fa88ec;
  }
  local_70 = &PTR_FUN_017232b0;
  pEStack_68 = this;
  local_50 = (long *)&local_70;
  uVar2 = EventListener::init((EventListener *)this,8,param_1,&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00fa8944;
    pcVar4 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar4)();
LAB_00fa8944:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

