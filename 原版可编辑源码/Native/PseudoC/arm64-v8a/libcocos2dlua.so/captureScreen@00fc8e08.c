
/* cocos2d::utils::captureScreen(std::__ndk1::function<void (bool, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)> const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void cocos2d::utils::captureScreen(function *param_1,basic_string *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  EventDispatcher *this;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [16];
  void *local_b8;
  undefined **local_b0 [2];
  long alStack_a0 [2];
  undefined ***local_90;
  long *local_80;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (DAT_01792580 != 0) goto LAB_00fc8f88;
  CustomCommand::init((CustomCommand *)&DAT_01792530,3.4028235e+38);
  local_b0[0] = (undefined **)onCaptureScreen;
  plVar2 = *(long **)(param_1 + 0x20);
  local_80 = alStack_a0;
  if (plVar2 == (long *)0x0) {
    local_80 = (long *)0x0;
  }
  else if ((long *)param_1 == plVar2) {
    (**(code **)(*plVar2 + 0x18))(plVar2,local_80);
  }
  else {
    local_80 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_70,param_2);
  std::__ndk1::function<void()>::operator=((function<void()> *)&DAT_01792550,(__bind *)local_b0);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (alStack_a0 == local_80) {
    pcVar4 = *(code **)(*local_80 + 0x20);
LAB_00fc8f04:
    (*pcVar4)();
  }
  else if (local_80 != (long *)0x0) {
    pcVar4 = *(code **)(*local_80 + 0x28);
    goto LAB_00fc8f04;
  }
  lVar3 = Director::getInstance();
  this = *(EventDispatcher **)(lVar3 + 0xb0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,Director::EVENT_AFTER_DRAW);
  local_b0[0] = &PTR_FUN_01723c70;
  local_90 = local_b0;
  DAT_01792580 = EventDispatcher::addCustomEventListener
                           (this,(basic_string *)local_c8,(function *)local_b0);
  if (local_b0 == local_90) {
    pcVar4 = (code *)(*local_90)[4];
LAB_00fc8f74:
    (*pcVar4)();
  }
  else if (local_90 != (undefined ***)0x0) {
    pcVar4 = (code *)(*local_90)[5];
    goto LAB_00fc8f74;
  }
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
LAB_00fc8f88:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

