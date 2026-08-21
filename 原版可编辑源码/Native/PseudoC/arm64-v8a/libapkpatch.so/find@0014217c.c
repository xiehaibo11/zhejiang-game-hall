
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::find(char const*, unsigned long, unsigned long) const */

ulong __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2,ulong param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  byte bVar4;
  int iVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  long lVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  
  uVar2 = *(ulong *)(this + 8);
  pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
  if (((byte)*this & 1) == 0) {
    pbVar3 = this + 1;
    uVar2 = (ulong)((byte)*this >> 1);
  }
  if (uVar2 < param_2) {
    param_2 = 0xffffffffffffffff;
  }
  else if (param_3 != 0) {
    pbVar6 = pbVar3 + param_2;
    pbVar1 = pbVar3 + uVar2;
    lVar7 = (long)pbVar1 - (long)pbVar6;
    pbVar8 = pbVar1;
    if ((long)param_3 <= lVar7) {
      bVar4 = *param_1;
      do {
        pbVar8 = pbVar1;
        if (((0xfffffffffffffffe < lVar7 - param_3) ||
            (pbVar6 = memchr(pbVar6,(uint)bVar4,(lVar7 - param_3) + 1),
            pbVar6 == (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)0x0)) ||
           (iVar5 = memcmp(pbVar6,param_1,param_3), pbVar8 = pbVar6, iVar5 == 0)) break;
        pbVar6 = pbVar6 + 1;
        lVar7 = (long)pbVar1 - (long)pbVar6;
        pbVar8 = pbVar1;
      } while ((long)param_3 <= lVar7);
    }
    param_2 = (long)pbVar8 - (long)pbVar3;
    if (pbVar8 == pbVar1) {
      param_2 = 0xffffffffffffffff;
    }
  }
  return param_2;
}

