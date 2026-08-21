
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find_last_not_of(wchar_t const*, unsigned long, unsigned long)
   const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find_last_not_of(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  long lVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  
  if (((byte)*this & 1) == 0) {
    pbVar5 = this + 4;
    uVar3 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar3 = *(ulong *)(this + 8);
    pbVar5 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  if (param_2 < uVar3) {
    uVar3 = param_2 + 1;
  }
  lVar1 = uVar3 << 2;
  do {
    lVar4 = lVar1;
    if (lVar4 == 0) {
      return -1;
    }
    if (param_3 == 0) break;
    pwVar2 = wmemchr(param_1,*(wchar_t *)(pbVar5 + lVar4 + -4),param_3);
    lVar1 = lVar4 + -4;
  } while (pwVar2 != (wchar_t *)0x0);
  return lVar4 + -4 >> 2;
}

