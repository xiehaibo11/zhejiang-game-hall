
/* cocos2d::Console::log(char const*) */

void __thiscall cocos2d::Console::log(Console *this,char *param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (this[0x100] != (Console)0x0) {
    std::__ndk1::mutex::lock((mutex *)(this + 0x104));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_50,param_1);
    puVar1 = *(ulong **)(this + 0x138);
    if (puVar1 < *(ulong **)(this + 0x140)) {
      puVar1[2] = (ulong)local_40;
      puVar1[1] = uStack_48;
      *puVar1 = local_50;
      uStack_48 = 0;
      local_40 = (void *)0x0;
      local_50 = 0;
      *(ulong **)(this + 0x138) = puVar1 + 3;
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  *)(this + 0x130),(basic_string *)&local_50);
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
      }
    }
    std::__ndk1::mutex::unlock((mutex *)(this + 0x104));
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

