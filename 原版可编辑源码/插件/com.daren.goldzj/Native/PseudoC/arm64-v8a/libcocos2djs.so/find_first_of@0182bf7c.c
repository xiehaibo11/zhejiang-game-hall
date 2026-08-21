
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::find_first_of(char const*, unsigned long, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
find_first_of(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
             char *param_1,ulong param_2,ulong param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  long lVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  ulong uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  
  if (((byte)*this & 1) == 0) {
    pbVar1 = this + 1;
    uVar6 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar6 = *(ulong *)(this + 8);
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  if ((param_3 == 0) || (uVar6 <= param_2)) {
    return -1;
  }
  pbVar4 = pbVar1 + param_2;
  pbVar2 = pbVar1 + uVar6;
  do {
    uVar6 = param_3;
    pbVar7 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             param_1;
    do {
      pbVar5 = pbVar4;
      if (*pbVar4 == *pbVar7) goto LAB_0182bfd4;
      uVar6 = uVar6 - 1;
      pbVar7 = pbVar7 + 1;
    } while (uVar6 != 0);
    pbVar4 = pbVar4 + 1;
    pbVar5 = pbVar2;
  } while (pbVar4 != pbVar2);
LAB_0182bfd4:
  lVar3 = (long)pbVar5 - (long)pbVar1;
  if (pbVar5 == pbVar2) {
    lVar3 = -1;
  }
  return lVar3;
}

