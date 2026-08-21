
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::find(char, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char param_1,ulong param_2)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  size_t __n;
  void *pvVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(this + 8);
  pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
  if (((byte)*this & 1) == 0) {
    pbVar2 = this + 1;
    uVar1 = (ulong)((byte)*this >> 1);
  }
  __n = uVar1 - param_2;
  if (uVar1 < param_2 || __n == 0) {
    lVar4 = -1;
  }
  else {
    if (__n == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = memchr(pbVar2 + param_2,(uint)(byte)param_1,__n);
    }
    lVar4 = (long)pvVar3 - (long)pbVar2;
    if (pvVar3 == (void *)0x0) {
      lVar4 = -1;
    }
  }
  return lVar4;
}

