
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
  ulong uVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  long lVar6;
  long lVar7;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar8;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar9;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar10;
  long lVar11;
  
  uVar2 = (ulong)((byte)*this >> 1);
  pbVar5 = this + 4;
  if (((byte)*this & 1) != 0) {
    uVar2 = *(ulong *)(this + 8);
    pbVar5 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  uVar3 = uVar2;
  if (param_2 <= uVar2) {
    uVar3 = param_2;
  }
  uVar4 = uVar3 + param_3;
  if (uVar2 - uVar3 <= param_3) {
    uVar4 = uVar2;
  }
  pbVar1 = pbVar5 + uVar4 * 4;
  pbVar8 = pbVar1;
  if ((param_3 != 0) && ((long)param_3 <= (long)uVar4)) {
    pbVar10 = pbVar1;
    while (pbVar9 = pbVar10, pbVar5 + param_3 * 4 + -4 != pbVar9) {
      pbVar10 = pbVar9 + -4;
      if (*(wchar_t *)pbVar10 == param_1[param_3 - 1]) {
        lVar11 = 0;
        do {
          if (param_3 * -4 + 4 == lVar11) {
            pbVar8 = pbVar9 + lVar11 + -4;
            goto LAB_00142adc;
          }
          lVar7 = lVar11 + -8;
          lVar6 = lVar11 + param_3 * 4 + -8;
          lVar11 = lVar11 + -4;
        } while (*(int *)(pbVar9 + lVar7) == *(int *)((long)param_1 + lVar6));
      }
    }
  }
LAB_00142adc:
  lVar11 = (long)pbVar8 - (long)pbVar5 >> 2;
  if (pbVar8 == pbVar1 && param_3 != 0) {
    lVar11 = -1;
  }
  return lVar11;
}

