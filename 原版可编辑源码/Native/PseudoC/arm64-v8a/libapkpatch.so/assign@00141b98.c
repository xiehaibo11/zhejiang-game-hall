
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::assign(unsigned long, char) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,char param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__s;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  ulong uVar4;
  
  bVar1 = *this;
  uVar2 = 0x16;
  if (((byte)bVar1 & 1) != 0) {
    uVar2 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if (uVar2 < param_1) {
    if (-uVar2 - 0x11 < param_1 - uVar2) {
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_length_error();
    }
    pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if (((byte)bVar1 & 1) == 0) {
      pbVar3 = this + 1;
    }
    if (uVar2 < 0x7fffffffffffffe7) {
      uVar2 = uVar2 * 2;
      if (uVar2 < param_1 || uVar2 - param_1 == 0) {
        uVar2 = param_1;
      }
      uVar4 = 0x17;
      if (0x16 < uVar2) {
        uVar4 = uVar2 + 0x10 & 0xfffffffffffffff0;
      }
    }
    else {
      uVar4 = 0xffffffffffffffef;
    }
    __s = operator_new(uVar4);
    if (((byte)bVar1 & 1) != 0) {
      operator_delete(pbVar3);
    }
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = __s;
    *(ulong *)this = uVar4 | 1;
  }
  else {
    __s = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (this + 0x10);
    if ((*(ulong *)this & 1) == 0) {
      __s = this + 1;
    }
    if (param_1 == 0) goto LAB_00141c84;
  }
  memset(__s,(uint)(byte)param_2,param_1);
LAB_00141c84:
  __s[param_1] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0
  ;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)param_1 << 1,0);
  }
  else {
    *(ulong *)(this + 8) = param_1;
  }
  return this;
}

