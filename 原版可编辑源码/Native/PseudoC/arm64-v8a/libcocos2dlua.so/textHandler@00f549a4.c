
/* cocos2d::TMXMapInfo::textHandler(void*, char const*, unsigned long) */

void __thiscall
cocos2d::TMXMapInfo::textHandler(TMXMapInfo *this,void *param_1,char *param_2,ulong param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [8];
  ulong local_60;
  char *local_58;
  basic_string local_50 [8];
  ulong local_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_68,param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_50,(ulong)local_68,0,(allocator *)param_3);
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (this[0xa4] != (TMXMapInfo)0x0) {
    this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this + 0x108);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_68,(basic_string *)this_00);
    uVar1 = (ulong)((byte)local_50[0] >> 1);
    pcVar3 = (char *)((ulong)local_50 | 1);
    if (((byte)local_50[0] & 1) != 0) {
      uVar1 = local_48;
      pcVar3 = local_40;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(local_68,pcVar3,uVar1);
    if (this_00 != local_68) {
      uVar1 = (ulong)((byte)local_68[0] >> 1);
      pcVar3 = (char *)((ulong)local_68 | 1);
      if (((byte)local_68[0] & 1) != 0) {
        uVar1 = local_60;
        pcVar3 = local_58;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this_00,pcVar3,uVar1);
    }
    if (((byte)local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
  }
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

