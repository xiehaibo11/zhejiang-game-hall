
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::rfind(char const*, unsigned long, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::rfind
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2,ulong param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  long lVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  ulong uVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar10;
  ulong uVar11;
  
  if (((byte)*this & 1) == 0) {
    pbVar4 = this + 1;
    uVar7 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar7 = *(ulong *)(this + 8);
    pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  uVar11 = uVar7;
  if (param_2 <= uVar7) {
    uVar11 = param_2;
  }
  uVar2 = uVar11 + param_3;
  if (uVar7 - uVar11 <= param_3) {
    uVar2 = uVar7;
  }
  pbVar1 = pbVar4 + uVar2;
  pbVar6 = pbVar1;
  if ((param_3 != 0) && ((long)param_3 <= (long)uVar2)) {
    uVar11 = ~param_2;
    if (uVar11 < ~uVar7) {
      uVar11 = ~uVar7;
    }
    uVar7 = (-2 - uVar7) - uVar11;
    if (uVar7 <= ~param_3) {
      uVar7 = ~param_3;
    }
    pbVar8 = pbVar4 + ((-4 - uVar7) - uVar11);
    pbVar9 = pbVar1;
    while (pbVar4 + (param_3 - 1) != pbVar9) {
      pbVar9 = pbVar9 + -1;
      pbVar10 = pbVar8;
      uVar7 = param_3;
      if (*pbVar9 ==
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + (param_3 - 1))) {
        do {
          if (uVar7 - 1 == 0) {
            pbVar6 = pbVar10 + 1;
            goto LAB_0182bf18;
          }
          bVar3 = *pbVar10;
          lVar5 = uVar7 - 2;
          pbVar10 = pbVar10 + -1;
          uVar7 = uVar7 - 1;
        } while (bVar3 == *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)(param_1 + lVar5));
      }
      pbVar8 = pbVar8 + -1;
    }
  }
LAB_0182bf18:
  lVar5 = (long)pbVar6 - (long)pbVar4;
  if (pbVar6 == pbVar1 && param_3 != 0) {
    lVar5 = -1;
  }
  return lVar5;
}

