
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::find_last_not_of(char const*, unsigned long, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
find_last_not_of(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 *this,char *param_1,ulong param_2,ulong param_3)

{
  void *pvVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  ulong uVar4;
  
  if (((byte)*this & 1) == 0) {
    pbVar3 = this + 1;
    uVar2 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar2 = *(ulong *)(this + 8);
    pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  if (param_2 < uVar2) {
    uVar2 = param_2 + 1;
  }
  do {
    uVar4 = uVar2;
    if (uVar4 == 0) {
      return -1;
    }
    if (param_3 == 0) break;
    pvVar1 = memchr(param_1,(uint)(byte)pbVar3[uVar4 - 1],param_3);
    uVar2 = uVar4 - 1;
  } while (pvVar1 != (void *)0x0);
  return uVar4 - 1;
}

