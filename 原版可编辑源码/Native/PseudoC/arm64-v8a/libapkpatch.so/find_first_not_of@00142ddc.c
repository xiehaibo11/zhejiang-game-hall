
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find_first_not_of(wchar_t const*, unsigned long, unsigned
   long) const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find_first_not_of(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                    *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  ulong uVar2;
  wchar_t *pwVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar4;
  long lVar5;
  
  pbVar1 = this + 4;
  uVar2 = (ulong)((byte)*this >> 1);
  if (((byte)*this & 1) != 0) {
    pbVar1 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
    uVar2 = *(ulong *)(this + 8);
  }
  if (param_2 < uVar2) {
    pbVar4 = pbVar1 + param_2 * 4;
    if (param_3 == 0) {
LAB_00142e58:
      return (long)pbVar4 - (long)pbVar1 >> 2;
    }
    lVar5 = uVar2 * 4 + param_2 * -4;
    do {
      pwVar3 = wmemchr(param_1,*(wchar_t *)pbVar4,param_3);
      if (pwVar3 == (wchar_t *)0x0) goto LAB_00142e58;
      lVar5 = lVar5 + -4;
      pbVar4 = pbVar4 + 4;
    } while (lVar5 != 0);
  }
  return -1;
}

