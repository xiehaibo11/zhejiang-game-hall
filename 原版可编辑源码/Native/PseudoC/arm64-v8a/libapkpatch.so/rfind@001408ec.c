
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::rfind(char const*, unsigned long, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::rfind
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2,ulong param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  long lVar6;
  long lVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar10;
  long lVar11;
  
  uVar4 = *(ulong *)(this + 8);
  pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
  if (((byte)*this & 1) == 0) {
    pbVar5 = this + 1;
    uVar4 = (ulong)((byte)*this >> 1);
  }
  uVar2 = uVar4;
  if (param_2 <= uVar4) {
    uVar2 = param_2;
  }
  uVar3 = uVar2 + param_3;
  if (uVar4 - uVar2 <= param_3) {
    uVar3 = uVar4;
  }
  pbVar1 = pbVar5 + uVar3;
  pbVar8 = pbVar1;
  if ((param_3 != 0) && ((long)param_3 <= (long)uVar3)) {
    pbVar10 = pbVar1;
    while (pbVar9 = pbVar10, pbVar5 + (param_3 - 1) != pbVar9) {
      pbVar10 = pbVar9 + -1;
      if (*pbVar10 ==
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + (param_3 - 1))) {
        lVar11 = 0;
        do {
          if (1 - param_3 == lVar11) {
            pbVar8 = pbVar10 + (1 - param_3);
            goto LAB_0014099c;
          }
          lVar7 = lVar11 + -2;
          lVar6 = lVar11 + (param_3 - 2);
          lVar11 = lVar11 + -1;
        } while (pbVar9[lVar7] ==
                 *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  (param_1 + lVar6));
      }
    }
  }
LAB_0014099c:
  lVar11 = (long)pbVar8 - (long)pbVar5;
  if (pbVar8 == pbVar1 && param_3 != 0) {
    lVar11 = -1;
  }
  return lVar11;
}

