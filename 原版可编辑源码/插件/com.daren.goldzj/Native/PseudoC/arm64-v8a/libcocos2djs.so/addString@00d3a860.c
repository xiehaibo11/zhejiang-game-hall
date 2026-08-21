
/* dragonBones::UserData::addString(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

void __thiscall dragonBones::UserData::addString(UserData *this,basic_string *param_2)

{
  ulong *puVar1;
  void *__dest;
  ulong uVar2;
  void *__src;
  ulong uVar3;
  
  puVar1 = *(ulong **)(this + 0x48);
  if (puVar1 == *(ulong **)(this + 0x50)) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(this + 0x40),param_2);
    return;
  }
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  if (((byte)*param_2 & 1) == 0) {
    uVar3 = *(ulong *)(param_2 + 8);
    uVar2 = *(ulong *)param_2;
    puVar1[2] = *(ulong *)(param_2 + 0x10);
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    goto LAB_00d3a91c;
  }
  uVar2 = *(ulong *)(param_2 + 8);
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __src = *(void **)(param_2 + 0x10);
  if (uVar2 < 0x17) {
    __dest = (void *)((long)puVar1 + 1);
    *(char *)puVar1 = (char)((int)uVar2 << 1);
    if (uVar2 != 0) goto LAB_00d3a908;
  }
  else {
    uVar3 = uVar2 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    puVar1[1] = uVar2;
    puVar1[2] = (ulong)__dest;
    *puVar1 = uVar3 | 1;
LAB_00d3a908:
    memcpy(__dest,__src,uVar2);
  }
  *(undefined1 *)((long)__dest + uVar2) = 0;
LAB_00d3a91c:
  *(long *)(this + 0x48) = *(long *)(this + 0x48) + 0x18;
  return;
}

