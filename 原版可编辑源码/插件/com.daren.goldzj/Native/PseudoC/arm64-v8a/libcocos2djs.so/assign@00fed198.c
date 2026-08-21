
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::assign(char const*) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  size_t __n;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  
  __n = strlen(param_1);
  bVar1 = *this;
  if (((byte)bVar1 & 1) == 0) {
    uVar2 = 0x16;
    uVar3 = __n - 0x16;
    if (0x15 < __n && uVar3 != 0) {
LAB_00fed1f4:
      if (((byte)bVar1 & 1) == 0) {
        uVar4 = (ulong)((byte)bVar1 >> 1);
      }
      else {
        uVar4 = *(ulong *)(this + 8);
      }
      __grow_by_and_replace(this,uVar2,uVar3,uVar4,0,uVar4,__n,param_1);
      return this;
    }
  }
  else {
    uVar2 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    uVar3 = __n - uVar2;
    if (uVar2 <= __n && uVar3 != 0) goto LAB_00fed1f4;
  }
  if (((byte)bVar1 & 1) == 0) {
    __dest = this + 1;
  }
  else {
    __dest = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  if (__n != 0) {
    memmove(__dest,param_1,__n);
  }
  __dest[__n] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)__n << 1,0);
  }
  else {
    *(size_t *)(this + 8) = __n;
  }
  return this;
}

