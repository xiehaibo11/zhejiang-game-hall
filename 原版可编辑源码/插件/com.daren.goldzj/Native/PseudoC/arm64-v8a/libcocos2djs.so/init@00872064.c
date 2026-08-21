
/* cocos2d::FileUtils::init() */

undefined8 __thiscall cocos2d::FileUtils::init(FileUtils *this)

{
  basic_string *pbVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long lVar4;
  void *__dest;
  ulong uVar5;
  void *__src;
  ulong uVar6;
  ulong local_60 [2];
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  pbVar1 = (basic_string *)(this + 0x78);
  puVar2 = *(ulong **)(this + 0x50);
  if (puVar2 == *(ulong **)(this + 0x58)) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(this + 0x48),pbVar1);
    goto LAB_00872134;
  }
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  if (((byte)*pbVar1 & 1) == 0) {
    uVar6 = *(ulong *)(this + 0x80);
    uVar5 = *(ulong *)pbVar1;
    puVar2[2] = *(ulong *)(this + 0x88);
    puVar2[1] = uVar6;
    *puVar2 = uVar5;
  }
  else {
    uVar5 = *(ulong *)(this + 0x80);
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    __src = *(void **)(this + 0x88);
    if (uVar5 < 0x17) {
      __dest = (void *)((long)puVar2 + 1);
      *(char *)puVar2 = (char)((int)uVar5 << 1);
      if (uVar5 != 0) goto LAB_00872114;
    }
    else {
      uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar6);
      puVar2[1] = uVar5;
      puVar2[2] = (ulong)__dest;
      *puVar2 = uVar6 | 1;
LAB_00872114:
      memcpy(__dest,__src,uVar5);
    }
    *(undefined1 *)((long)__dest + uVar5) = 0;
  }
  *(long *)(this + 0x50) = *(long *)(this + 0x50) + 0x18;
LAB_00872134:
  local_60[1] = 0;
  local_50 = (void *)0x0;
  local_60[0] = 0;
  puVar3 = *(undefined8 **)(this + 0x38);
  if (puVar3 < *(undefined8 **)(this + 0x40)) {
    puVar3[2] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    local_60[1] = 0;
    local_50 = (void *)0x0;
    local_60[0] = 0;
    *(long *)(this + 0x38) = *(long *)(this + 0x38) + 0x18;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(this + 0x30),(basic_string *)local_60);
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

