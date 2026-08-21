
/* universe::Translated::getTime() const */

void __thiscall universe::Translated::getTime(Translated *this)

{
  long lVar1;
  tm *__tp;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  time_t local_58;
  undefined8 local_50;
  char acStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_50 = std::__ndk1::chrono::system_clock::now();
  local_58 = std::__ndk1::chrono::system_clock::to_time_t((time_point *)&local_50);
  __tp = localtime(&local_58);
  strftime(acStack_48,0x20,"%Y.%m.%d %H:%M:%S",__tp);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(in_x8,acStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

