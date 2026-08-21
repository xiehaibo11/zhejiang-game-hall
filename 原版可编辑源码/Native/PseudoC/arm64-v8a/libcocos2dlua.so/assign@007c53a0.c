
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::assign(char const*, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  
  bVar1 = *this;
  if (((byte)bVar1 & 1) == 0) {
    uVar2 = 0x16;
    if (0x16 < param_2) {
LAB_007c53f4:
      if (((byte)bVar1 & 1) == 0) {
        uVar3 = (ulong)((byte)bVar1 >> 1);
      }
      else {
        uVar3 = *(ulong *)(this + 8);
      }
      __grow_by_and_replace(this,uVar2,param_2 - uVar2,uVar3,0,uVar3,param_2,param_1);
      return this;
    }
  }
  else {
    uVar2 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    if (uVar2 < param_2) goto LAB_007c53f4;
  }
  if (((byte)bVar1 & 1) == 0) {
    __dest = this + 1;
  }
  else {
    __dest = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  if (param_2 != 0) {
    memmove(__dest,param_1,param_2);
  }
  __dest[param_2] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)param_2 << 1,0);
  }
  else {
    *(ulong *)(this + 8) = param_2;
  }
  return this;
}

