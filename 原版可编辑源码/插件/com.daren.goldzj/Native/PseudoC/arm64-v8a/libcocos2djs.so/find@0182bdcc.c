
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::find(char, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char param_1,ulong param_2)

{
  bool bVar1;
  void *pvVar2;
  ulong uVar3;
  size_t __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  
  if (((byte)*this & 1) == 0) {
    pbVar4 = this + 1;
    uVar3 = (ulong)((byte)*this >> 1);
    __n = uVar3 - param_2;
    bVar1 = __n == 0;
    if (param_2 <= uVar3 && !bVar1) {
LAB_0182be04:
      if (bVar1) {
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = memchr(pbVar4 + param_2,(uint)(byte)param_1,__n);
      }
      if (pvVar2 != (void *)0x0) {
        return (long)pvVar2 - (long)pbVar4;
      }
      return -1;
    }
  }
  else {
    pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    __n = *(ulong *)(this + 8) - param_2;
    bVar1 = __n == 0;
    if (param_2 <= *(ulong *)(this + 8) && !bVar1) goto LAB_0182be04;
  }
  return -1;
}

