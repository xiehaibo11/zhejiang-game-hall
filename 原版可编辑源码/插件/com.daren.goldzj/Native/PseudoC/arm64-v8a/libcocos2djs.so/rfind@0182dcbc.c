
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::rfind(wchar_t const*, unsigned long, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::rfind(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
        *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  long lVar6;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar7;
  ulong uVar8;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar9;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar10;
  ulong uVar11;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar12;
  long lVar13;
  
  if (((byte)*this & 1) == 0) {
    pbVar5 = this + 4;
    uVar8 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar8 = *(ulong *)(this + 8);
    pbVar5 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  uVar11 = uVar8;
  if (param_2 <= uVar8) {
    uVar11 = param_2;
  }
  uVar2 = uVar11 + param_3;
  if (uVar8 - uVar11 <= param_3) {
    uVar2 = uVar8;
  }
  pbVar1 = pbVar5 + uVar2 * 4;
  pbVar7 = pbVar1;
  if ((param_3 != 0) && (lVar6 = (long)(param_3 << 2) >> 2, lVar6 <= (long)(uVar2 << 2) >> 2)) {
    uVar11 = ~param_2;
    if (uVar11 < ~uVar8) {
      uVar11 = ~uVar8;
    }
    uVar8 = (-2 - uVar8) - uVar11;
    if (uVar8 <= ~param_3) {
      uVar8 = ~param_3;
    }
    pbVar9 = pbVar5 + (-4 - (uVar8 + uVar11)) * 4;
    pbVar10 = pbVar1;
    while (pbVar5 + lVar6 * 4 + -4 != pbVar10) {
      pbVar10 = pbVar10 + -4;
      pbVar12 = pbVar9;
      lVar13 = param_3 * 4;
      if (*(wchar_t *)pbVar10 == param_1[param_3 - 1]) {
        do {
          if (lVar13 + -4 == 0) {
            pbVar7 = pbVar12 + 4;
            goto LAB_0182ddac;
          }
          iVar3 = *(int *)pbVar12;
          lVar4 = lVar13 + -8;
          pbVar12 = pbVar12 + -4;
          lVar13 = lVar13 + -4;
        } while (iVar3 == *(int *)((long)param_1 + lVar4));
      }
      pbVar9 = pbVar9 + -4;
    }
  }
LAB_0182ddac:
  lVar6 = (long)pbVar7 - (long)pbVar5 >> 2;
  if (pbVar7 == pbVar1 && param_3 != 0) {
    lVar6 = -1;
  }
  return lVar6;
}

