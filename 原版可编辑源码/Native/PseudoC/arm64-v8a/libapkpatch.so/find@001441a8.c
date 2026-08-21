
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find(wchar_t const*, unsigned long, unsigned long) const */

ulong __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *this
      ,wchar_t *param_1,ulong param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  wchar_t __c;
  ulong uVar3;
  int iVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  long lVar6;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar7;
  
  pbVar2 = this + 4;
  uVar3 = (ulong)((byte)*this >> 1);
  if (((byte)*this & 1) != 0) {
    pbVar2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
    uVar3 = *(ulong *)(this + 8);
  }
  if (uVar3 < param_2) {
    param_2 = 0xffffffffffffffff;
  }
  else if (param_3 != 0) {
    pbVar5 = pbVar2 + param_2 * 4;
    pbVar1 = pbVar2 + uVar3 * 4;
    lVar6 = (long)pbVar1 - (long)pbVar5 >> 2;
    pbVar7 = pbVar1;
    if ((long)param_3 <= lVar6) {
      __c = *param_1;
      do {
        pbVar7 = pbVar1;
        if (((0xfffffffffffffffe < lVar6 - param_3) ||
            (pbVar5 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                       *)wmemchr((wchar_t *)pbVar5,__c,(lVar6 - param_3) + 1),
            pbVar5 == (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                       *)0x0)) ||
           (iVar4 = wmemcmp((wchar_t *)pbVar5,param_1,param_3), pbVar7 = pbVar5, iVar4 == 0)) break;
        pbVar5 = pbVar5 + 4;
        lVar6 = (long)pbVar1 - (long)pbVar5 >> 2;
        pbVar7 = pbVar1;
      } while ((long)param_3 <= lVar6);
    }
    param_2 = (long)pbVar7 - (long)pbVar2 >> 2;
    if (pbVar7 == pbVar1) {
      param_2 = 0xffffffffffffffff;
    }
  }
  return param_2;
}

