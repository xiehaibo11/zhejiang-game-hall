
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::find(char const*, unsigned long, unsigned long) const */

ulong __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2,ulong param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  size_t __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  byte bVar3;
  int iVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  ulong uVar6;
  long lVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  
  if (((byte)*this & 1) == 0) {
    pbVar1 = this + 1;
    uVar6 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar6 = *(ulong *)(this + 8);
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  if (uVar6 < param_2) {
    param_2 = 0xffffffffffffffff;
  }
  else if (param_3 != 0) {
    pbVar5 = pbVar1 + param_2;
    pbVar2 = pbVar1 + uVar6;
    lVar7 = (long)pbVar2 - (long)pbVar5;
    pbVar8 = pbVar2;
    if ((long)param_3 <= lVar7) {
      bVar3 = *param_1;
      do {
        __n = (lVar7 - param_3) + 1;
        pbVar8 = pbVar2;
        if (((__n == 0) ||
            (pbVar5 = memchr(pbVar5,(uint)bVar3,__n),
            pbVar5 == (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)0x0)) ||
           (iVar4 = memcmp(pbVar5,param_1,param_3), pbVar8 = pbVar5, iVar4 == 0)) break;
        pbVar5 = pbVar5 + 1;
        lVar7 = (long)pbVar2 - (long)pbVar5;
        pbVar8 = pbVar2;
      } while ((long)param_3 <= lVar7);
    }
    param_2 = (long)pbVar8 - (long)pbVar1;
    if (pbVar8 == pbVar2) {
      param_2 = 0xffffffffffffffff;
    }
  }
  return param_2;
}

