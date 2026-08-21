
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find(wchar_t const*, unsigned long, unsigned long) const */

ulong __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *this
      ,wchar_t *param_1,ulong param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  size_t __n;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  wchar_t __c;
  size_t __n_00;
  int iVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar4;
  ulong uVar5;
  long lVar6;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar7;
  
  if (((byte)*this & 1) == 0) {
    pbVar1 = this + 4;
    uVar5 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar5 = *(ulong *)(this + 8);
    pbVar1 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  if (uVar5 < param_2) {
    param_2 = 0xffffffffffffffff;
  }
  else if (param_3 != 0) {
    pbVar4 = pbVar1 + param_2 * 4;
    pbVar2 = pbVar1 + uVar5 * 4;
    __n_00 = (long)(param_3 << 2) >> 2;
    lVar6 = (long)pbVar2 - (long)pbVar4 >> 2;
    pbVar7 = pbVar2;
    if ((long)__n_00 <= lVar6) {
      __c = *param_1;
      do {
        __n = (lVar6 - __n_00) + 1;
        pbVar7 = pbVar2;
        if (((__n == 0) ||
            (pbVar4 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                       *)wmemchr((wchar_t *)pbVar4,__c,__n),
            pbVar4 == (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                       *)0x0)) ||
           (iVar3 = wmemcmp((wchar_t *)pbVar4,param_1,__n_00), pbVar7 = pbVar4, iVar3 == 0)) break;
        pbVar4 = pbVar4 + 4;
        lVar6 = (long)pbVar2 - (long)pbVar4 >> 2;
        pbVar7 = pbVar2;
      } while ((long)__n_00 <= lVar6);
    }
    param_2 = (long)pbVar7 - (long)pbVar1 >> 2;
    if (pbVar7 == pbVar2) {
      param_2 = 0xffffffffffffffff;
    }
  }
  return param_2;
}

