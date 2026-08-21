
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::compare(unsigned long, unsigned long, wchar_t const*, unsigned
   long) const */

uint __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::compare(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1,ulong param_2,wchar_t *param_3,ulong param_4)

{
  ulong uVar1;
  size_t __n;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  uint uVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar4;
  ulong uVar5;
  
  bVar2 = *this;
  if (((byte)bVar2 & 1) == 0) {
    uVar5 = (ulong)((byte)bVar2 >> 1);
  }
  else {
    uVar5 = *(ulong *)(this + 8);
  }
  if ((param_4 != 0xffffffffffffffff) && (param_1 <= uVar5)) {
    uVar1 = uVar5 - param_1;
    if (param_2 <= uVar5 - param_1) {
      uVar1 = param_2;
    }
    if (((byte)bVar2 & 1) == 0) {
      pbVar4 = this + 4;
    }
    else {
      pbVar4 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    __n = param_4;
    if (uVar1 <= param_4) {
      __n = uVar1;
    }
    if (((__n == 0) || (uVar3 = wmemcmp((wchar_t *)(pbVar4 + param_1 * 4),param_3,__n), uVar3 == 0))
       && (uVar3 = (uint)(param_4 < uVar1), uVar1 < param_4)) {
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __basic_string_common<true>::__throw_out_of_range();
}

