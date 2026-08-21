
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::find_last_of(char const*, unsigned long, unsigned long) const */

ulong __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
find_last_of(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
            char *param_1,ulong param_2,ulong param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  void *pvVar2;
  ulong uVar3;
  
  if (((byte)*this & 1) == 0) {
    pbVar1 = this + 1;
    uVar3 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar3 = *(ulong *)(this + 8);
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  if (param_3 == 0) {
LAB_0120bdd8:
    uVar3 = 0xffffffffffffffff;
  }
  else {
    if (param_2 < uVar3) {
      uVar3 = param_2 + 1;
    }
    do {
      if (uVar3 == 0) goto LAB_0120bdd8;
      pvVar2 = memchr(param_1,(uint)(byte)pbVar1[uVar3 - 1],param_3);
      uVar3 = uVar3 - 1;
    } while (pvVar2 == (void *)0x0);
  }
  return uVar3;
}

