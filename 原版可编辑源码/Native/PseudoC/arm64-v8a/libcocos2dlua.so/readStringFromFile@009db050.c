
/* universe::TanGaoXiong::readStringFromFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void universe::TanGaoXiong::readStringFromFile(basic_string *param_1)

{
  long lVar1;
  void *__src;
  undefined8 in_x1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  void *__dest;
  ulong uVar2;
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  ulong local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __src = (void *)(**(code **)(*(long *)param_1 + 0x10))(param_1,in_x1,&local_50);
  if ((__src == (void *)0x0) || (local_50 == 0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(in_x8,"");
  }
  else {
    uStack_60 = 0;
    local_58 = (void *)0x0;
    local_68 = 0;
    if (0xffffffffffffffef < local_50) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (local_50 < 0x17) {
      __dest = (void *)((ulong)&local_68 | 1);
      local_68 = (ulong)(byte)((int)local_50 << 1);
    }
    else {
      uVar2 = local_50 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar2);
      local_68 = uVar2 | 1;
      uStack_60 = local_50;
      local_58 = __dest;
    }
    memcpy(__dest,__src,local_50);
    *(undefined1 *)((long)__dest + local_50) = 0;
    free(__src);
    *(void **)(in_x8 + 0x10) = local_58;
    *(ulong *)(in_x8 + 8) = uStack_60;
    *(ulong *)in_x8 = local_68;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

