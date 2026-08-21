
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find_last_of(wchar_t const*, unsigned long, unsigned long)
   const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find_last_of(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  wchar_t *pwVar3;
  long lVar4;
  
  uVar1 = (ulong)((byte)*this >> 1);
  pbVar2 = this + 4;
  if (((byte)*this & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
    pbVar2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  if (param_3 == 0) {
LAB_00143b50:
    lVar4 = -1;
  }
  else {
    if (param_2 < uVar1) {
      uVar1 = param_2 + 1;
    }
    lVar4 = uVar1 << 2;
    do {
      if (lVar4 == 0) goto LAB_00143b50;
      pwVar3 = wmemchr(param_1,*(wchar_t *)(pbVar2 + lVar4 + -4),param_3);
      lVar4 = lVar4 + -4;
    } while (pwVar3 == (wchar_t *)0x0);
    lVar4 = lVar4 >> 2;
  }
  return lVar4;
}

