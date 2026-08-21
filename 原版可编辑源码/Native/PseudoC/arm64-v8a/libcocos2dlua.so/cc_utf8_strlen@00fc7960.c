
/* cocos2d::cc_utf8_strlen(char const*, int) */

long cocos2d::cc_utf8_strlen(char *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (param_1 == (char *)0x0) {
    lVar4 = -1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_40,param_1);
    pvVar1 = (void *)((ulong)local_40 | 1);
    if (((byte)local_40[0] & 1) != 0) {
      pvVar1 = local_30;
    }
    iVar3 = getUTF8StringLength(pvVar1);
    lVar4 = (long)iVar3;
    if (((byte)local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

