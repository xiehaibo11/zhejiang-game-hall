
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find_first_not_of(wchar_t const*, unsigned long, unsigned
   long) const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find_first_not_of(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                    *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (((byte)*this & 1) == 0) {
    pbVar1 = this + 4;
    uVar3 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar3 = *(ulong *)(this + 8);
    pbVar1 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  if (param_2 < uVar3) {
    lVar4 = param_2 * 4;
    do {
      lVar5 = param_2 * 4;
      if ((param_3 == 0) ||
         (pwVar2 = wmemchr(param_1,*(wchar_t *)(pbVar1 + lVar4),param_3), lVar5 = lVar4,
         pwVar2 == (wchar_t *)0x0)) {
        return lVar5 >> 2;
      }
      lVar4 = lVar4 + 4;
    } while (uVar3 * 4 - lVar4 != 0);
  }
  return -1;
}

