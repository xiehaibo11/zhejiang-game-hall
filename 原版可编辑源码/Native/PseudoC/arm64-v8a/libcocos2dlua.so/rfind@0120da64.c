
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::rfind(wchar_t const*, unsigned long, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::rfind(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
        *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar6;
  long lVar7;
  ulong uVar8;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar9;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar10;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar11;
  long lVar12;
  
  if (((byte)*this & 1) == 0) {
    pbVar6 = this + 4;
    uVar8 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar8 = *(ulong *)(this + 8);
    pbVar6 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  uVar2 = uVar8;
  if (param_2 <= uVar8) {
    uVar2 = param_2;
  }
  uVar3 = uVar2 + param_3;
  if (uVar8 - uVar2 <= param_3) {
    uVar3 = uVar8;
  }
  pbVar1 = pbVar6 + uVar3 * 4;
  pbVar9 = pbVar1;
  if ((param_3 != 0) && (lVar7 = (long)(param_3 << 2) >> 2, lVar7 <= (long)(uVar3 << 2) >> 2)) {
    pbVar11 = pbVar1;
    while (pbVar10 = pbVar11, pbVar6 + lVar7 * 4 + -4 != pbVar10) {
      pbVar11 = pbVar10 + -4;
      if (*(wchar_t *)pbVar11 == param_1[param_3 - 1]) {
        lVar12 = 0;
        do {
          if (param_3 * -4 + 4 == lVar12) {
            pbVar9 = pbVar10 + lVar12 + -4;
            goto LAB_0120db24;
          }
          lVar5 = lVar12 + -8;
          lVar4 = lVar12 + param_3 * 4 + -8;
          lVar12 = lVar12 + -4;
        } while (*(int *)(pbVar10 + lVar5) == *(int *)((long)param_1 + lVar4));
      }
    }
  }
LAB_0120db24:
  lVar7 = (long)pbVar9 - (long)pbVar6 >> 2;
  if (pbVar9 == pbVar1 && param_3 != 0) {
    lVar7 = -1;
  }
  return lVar7;
}

