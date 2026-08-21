
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find(wchar_t, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *this
      ,wchar_t param_1,ulong param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  size_t __n;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar4;
  
  if (((byte)*this & 1) == 0) {
    pbVar4 = this + 4;
    uVar3 = (ulong)((byte)*this >> 1);
    __n = uVar3 - param_2;
    bVar1 = __n == 0;
    if (param_2 <= uVar3 && !bVar1) {
LAB_0120da30:
      if (bVar1) {
        pwVar2 = (wchar_t *)0x0;
      }
      else {
        pwVar2 = wmemchr((wchar_t *)(pbVar4 + param_2 * 4),param_1,__n);
      }
      if (pwVar2 != (wchar_t *)0x0) {
        return (long)pwVar2 - (long)pbVar4 >> 2;
      }
      return -1;
    }
  }
  else {
    pbVar4 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
    __n = *(ulong *)(this + 8) - param_2;
    bVar1 = __n == 0;
    if (param_2 <= *(ulong *)(this + 8) && !bVar1) goto LAB_0120da30;
  }
  return -1;
}

