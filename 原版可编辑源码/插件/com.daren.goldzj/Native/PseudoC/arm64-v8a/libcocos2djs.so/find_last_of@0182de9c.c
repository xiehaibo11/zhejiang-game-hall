
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find_last_of(wchar_t const*, unsigned long, unsigned long)
   const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find_last_of(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  wchar_t *pwVar2;
  long lVar3;
  ulong uVar4;
  
  if (((byte)*this & 1) == 0) {
    pbVar1 = this + 4;
    uVar4 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar4 = *(ulong *)(this + 8);
    pbVar1 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  if (param_3 == 0) {
LAB_0182df08:
    lVar3 = -1;
  }
  else {
    if (param_2 < uVar4) {
      uVar4 = param_2 + 1;
    }
    lVar3 = uVar4 << 2;
    do {
      if (lVar3 == 0) goto LAB_0182df08;
      pwVar2 = wmemchr(param_1,*(wchar_t *)(pbVar1 + lVar3 + -4),param_3);
      lVar3 = lVar3 + -4;
    } while (pwVar2 == (wchar_t *)0x0);
    lVar3 = lVar3 >> 2;
  }
  return lVar3;
}

