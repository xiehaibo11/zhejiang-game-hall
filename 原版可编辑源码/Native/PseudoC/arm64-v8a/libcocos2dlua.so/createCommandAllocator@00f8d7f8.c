
/* cocos2d::Console::createCommandAllocator() */

void __thiscall cocos2d::Console::createCommandAllocator(Console *this)

{
  long lVar1;
  code *pcVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_130 [16];
  void *local_120;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_118 [16];
  void *local_108;
  undefined **local_100;
  code *local_f8;
  undefined8 uStack_f0;
  Console *local_e8;
  undefined ***local_e0;
  Command aCStack_d0 [152];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_118,"allocator");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            (local_130,"Display allocator diagnostics for all allocators. Args: [-h | help | ]");
  local_e0 = &local_100;
  local_100 = &PTR_FUN_017223e0;
  uStack_f0 = 0;
  local_f8 = commandAllocator;
  local_e8 = this;
  Command::Command(aCStack_d0,(basic_string *)local_118,(basic_string *)local_130,
                   (function *)&local_100);
  addCommand(this,aCStack_d0);
  Command::~Command(aCStack_d0);
  if (&local_100 == local_e0) {
    pcVar2 = (code *)(*local_e0)[4];
  }
  else {
    if (local_e0 == (undefined ***)0x0) goto LAB_00f8d8bc;
    pcVar2 = (code *)(*local_e0)[5];
  }
  (*pcVar2)();
LAB_00f8d8bc:
  if (((byte)local_130[0] & 1) != 0) {
    operator_delete(local_120);
  }
  if (((byte)local_118[0] & 1) != 0) {
    operator_delete(local_108);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

