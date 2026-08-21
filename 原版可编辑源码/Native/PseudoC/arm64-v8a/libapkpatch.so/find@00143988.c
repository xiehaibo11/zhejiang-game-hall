
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find(wchar_t, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *this
      ,wchar_t param_1,ulong param_2)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  size_t __n;
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
  __n = uVar2 - param_2;
  if (uVar2 < param_2 || __n == 0) {
    lVar4 = -1;
  }
  else {
    if (__n == 0) {
      pwVar3 = (wchar_t *)0x0;
    }
    else {
      pwVar3 = wmemchr((wchar_t *)(pbVar1 + param_2 * 4),param_1,__n);
    }
    lVar4 = (long)pwVar3 - (long)pbVar1 >> 2;
    if (pwVar3 == (wchar_t *)0x0) {
      lVar4 = -1;
    }
  }
  return lVar4;
}

