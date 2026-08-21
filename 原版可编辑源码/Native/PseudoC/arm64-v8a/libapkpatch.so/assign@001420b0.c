
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::assign(char const*) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1)

{
  ulong uVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  size_t __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  
  __n = strlen(param_1);
  bVar3 = *this;
  uVar1 = 0x16;
  if (((byte)bVar3 & 1) != 0) {
    uVar1 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if (__n < uVar1 || __n - uVar1 == 0) {
    __dest = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if (((byte)bVar3 & 1) == 0) {
      __dest = this + 1;
    }
    if (__n != 0) {
      memmove(__dest,param_1,__n);
    }
    __dest[__n] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                  0x0;
    if (((byte)*this & 1) == 0) {
      *this = SUB41((int)__n << 1,0);
    }
    else {
      *(size_t *)(this + 8) = __n;
    }
  }
  else {
    uVar2 = (ulong)((byte)bVar3 >> 1);
    if (((byte)bVar3 & 1) != 0) {
      uVar2 = *(ulong *)(this + 8);
    }
    __grow_by_and_replace(this,uVar1,__n - uVar1,uVar2,0,uVar2,__n,param_1);
  }
  return this;
}

