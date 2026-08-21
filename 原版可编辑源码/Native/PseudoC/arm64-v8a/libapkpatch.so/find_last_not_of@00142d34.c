
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find_last_not_of(wchar_t const*, unsigned long, unsigned long)
   const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find_last_not_of(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  ulong uVar2;
  wchar_t *pwVar3;
  long lVar4;
  
  pbVar1 = this + 4;
  uVar2 = (ulong)((byte)*this >> 1);
  if (((byte)*this & 1) != 0) {
    pbVar1 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
    uVar2 = *(ulong *)(this + 8);
  }
  if (param_2 < uVar2) {
    uVar2 = param_2 + 1;
  }
  lVar4 = uVar2 * 4;
  do {
    lVar4 = lVar4 + -4;
    if (lVar4 == -4) {
      return -1;
    }
  } while ((param_3 != 0) &&
          (pwVar3 = wmemchr(param_1,*(wchar_t *)(pbVar1 + lVar4),param_3), pwVar3 != (wchar_t *)0x0)
          );
  return lVar4 >> 2;
}

