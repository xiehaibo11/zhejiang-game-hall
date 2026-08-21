
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::copy(wchar_t*, unsigned long, unsigned long) const */

size_t __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::copy(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *this
      ,wchar_t *param_1,ulong param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar1;
  size_t __n;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  ulong uVar3;
  
  bVar1 = *this;
  if (((byte)bVar1 & 1) == 0) {
    uVar3 = (ulong)((byte)bVar1 >> 1);
    __n = uVar3 - param_3;
  }
  else {
    uVar3 = *(ulong *)(this + 8);
    __n = uVar3 - param_3;
  }
  if (param_3 <= uVar3) {
    if (param_2 <= __n) {
      __n = param_2;
    }
    if (((byte)bVar1 & 1) == 0) {
      pbVar2 = this + 4;
    }
    else {
      pbVar2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    if (__n != 0) {
      wmemcpy(param_1,(wchar_t *)(pbVar2 + param_3 * 4),__n);
    }
    return __n;
  }
                    /* WARNING: Subroutine does not return */
  __basic_string_common<true>::__throw_out_of_range();
}

