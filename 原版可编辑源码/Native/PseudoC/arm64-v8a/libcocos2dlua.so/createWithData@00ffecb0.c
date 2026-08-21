
/* cocos2d::__String::createWithData(unsigned char const*, unsigned long) */

undefined8 cocos2d::__String::createWithData(uchar *param_1,ulong param_2)

{
  long lVar1;
  char *__dest;
  undefined8 uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (uchar *)0x0) || (__dest = malloc(param_2 + 1), __dest == (char *)0x0)) {
    uVar2 = 0;
  }
  else {
    __dest[param_2] = '\0';
    if (param_2 != 0) {
      memcpy(__dest,param_1,param_2);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,__dest);
    uVar2 = create((basic_string *)local_50);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    free(__dest);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

