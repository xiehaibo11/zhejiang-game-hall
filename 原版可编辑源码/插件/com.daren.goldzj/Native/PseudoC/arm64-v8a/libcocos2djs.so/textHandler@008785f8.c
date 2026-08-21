
/* cocos2d::DictMaker::textHandler(void*, char const*, int) */

void __thiscall
cocos2d::DictMaker::textHandler(DictMaker *this,void *param_1,char *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  size_t __n;
  char *pcVar3;
  ulong uVar4;
  ulong local_70;
  ulong local_68;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(this + 0x80);
  if (iVar1 == 0) goto LAB_00878718;
  local_70 = 0;
  local_68 = 0;
  local_60 = (char *)0x0;
  if (0xffffffef < (uint)param_3) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __n = (size_t)param_3;
  if ((uint)param_3 < 0x17) {
    pcVar3 = (char *)((ulong)&local_70 | 1);
    local_70 = (ulong)(byte)(param_3 << 1);
    if (param_3 != 0) goto LAB_00878684;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    pcVar3 = operator_new(uVar4);
    local_70 = uVar4 | 1;
    local_68 = __n;
    local_60 = pcVar3;
LAB_00878684:
    memcpy(pcVar3,param_2,__n);
  }
  pcVar3[__n] = '\0';
  if (iVar1 - 3U < 3) {
    uVar4 = (ulong)((byte)local_70._0_1_ >> 1);
    pcVar3 = (char *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      uVar4 = local_68;
      pcVar3 = local_60;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x68),pcVar3,uVar4);
  }
  else if ((iVar1 == 1) &&
          ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x50) !=
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_70)) {
    uVar4 = (ulong)((byte)local_70._0_1_ >> 1);
    pcVar3 = (char *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      uVar4 = local_68;
      pcVar3 = local_60;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x50),pcVar3,uVar4);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_00878718:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

