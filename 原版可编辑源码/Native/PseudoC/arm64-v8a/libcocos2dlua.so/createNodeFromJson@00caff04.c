
/* cocos2d::CSLoader::createNodeFromJson(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::CSLoader::createNodeFromJson(CSLoader *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *__src;
  long lVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  ulong local_70;
  ulong local_68;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (this[0x50] == (CSLoader)0x0) {
    lVar3 = cocostudio::GUIReader::getInstance();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_70,"");
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (lVar3 + 0x28) !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_70)
    {
      uVar1 = local_70 >> 1 & 0x7f;
      pcVar5 = (char *)((ulong)&local_70 | 1);
      if ((local_70 & 1) != 0) {
        uVar1 = local_68;
        pcVar5 = local_60;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (lVar3 + 0x28),pcVar5,uVar1);
    }
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x58),"",0);
    goto LAB_00cb00d0;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  __src = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __src = param_1 + 1;
    uVar1 = (ulong)((byte)*param_1 >> 1);
  }
  uVar6 = uVar1;
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    do {
      uVar4 = uVar6;
      if (uVar4 == 0) break;
      uVar6 = uVar4 - 1;
    } while (__src[uVar4 - 1] != (basic_string)0x2f);
  }
  if (uVar4 <= uVar1) {
    uVar1 = uVar4;
  }
  local_68 = 0;
  local_60 = (char *)0x0;
  local_70 = 0;
  if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar1 < 0x17) {
    pcVar5 = (char *)((ulong)&local_70 | 1);
    local_70 = (ulong)(byte)((int)uVar1 << 1);
    if (uVar1 != 0) goto LAB_00cb0048;
  }
  else {
    uVar6 = uVar1 + 0x10 & 0xfffffffffffffff0;
    pcVar5 = operator_new(uVar6);
    local_70 = uVar6 | 1;
    local_68 = uVar1;
    local_60 = pcVar5;
LAB_00cb0048:
    memcpy(pcVar5,__src,uVar1);
  }
  pcVar5[uVar1] = '\0';
  lVar3 = cocostudio::GUIReader::getInstance();
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (lVar3 + 0x28) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_70) {
    uVar1 = local_70 >> 1 & 0x7f;
    pcVar5 = (char *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      uVar1 = local_68;
      pcVar5 = local_60;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28),pcVar5,uVar1);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x58) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_70) {
    uVar1 = local_70 >> 1 & 0x7f;
    pcVar5 = (char *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      uVar1 = local_68;
      pcVar5 = local_60;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x58),pcVar5,uVar1);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_00cb00d0:
  loadNodeWithFile(this,param_1);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

