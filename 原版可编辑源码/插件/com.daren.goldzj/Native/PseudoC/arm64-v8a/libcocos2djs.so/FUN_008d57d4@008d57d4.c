
void FUN_008d57d4(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,byte *param_2,char *param_3)

{
  size_t sVar1;
  size_t __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  ulong uVar2;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((*param_2 & 1) == 0) {
    __n = (size_t)(*param_2 >> 1);
    sVar1 = strlen(param_3);
    param_2 = param_2 + 1;
  }
  else {
    __n = *(size_t *)(param_2 + 8);
    sVar1 = strlen(param_3);
    param_2 = *(byte **)(param_2 + 0x10);
  }
  uVar2 = __n + sVar1;
  if (uVar2 < 0xfffffffffffffff0) {
    if (uVar2 < 0x17) {
      __dest = param_1 + 1;
      *param_1 = SUB41((int)__n << 1,0);
    }
    else {
      uVar2 = uVar2 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar2);
      *(size_t *)(param_1 + 8) = __n;
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (param_1 + 0x10) = __dest;
      *(ulong *)param_1 = uVar2 | 1;
    }
    if (__n != 0) {
      memcpy(__dest,param_2,__n);
    }
    __dest[__n] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                  0x0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(param_1,param_3,sVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__basic_string_common<true>::__throw_length_error();
}

