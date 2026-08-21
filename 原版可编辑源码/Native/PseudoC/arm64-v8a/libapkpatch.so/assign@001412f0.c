
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::assign(char const*, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  
  bVar3 = *this;
  uVar1 = 0x16;
  if (((byte)bVar3 & 1) != 0) {
    uVar1 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if (uVar1 < param_2) {
    uVar2 = (ulong)((byte)bVar3 >> 1);
    if (((byte)bVar3 & 1) != 0) {
      uVar2 = *(ulong *)(this + 8);
    }
    __grow_by_and_replace(this,uVar1,param_2 - uVar1,uVar2,0,uVar2,param_2,param_1);
  }
  else {
    __dest = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if (((byte)bVar3 & 1) == 0) {
      __dest = this + 1;
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
  }
  return this;
}

