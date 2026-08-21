
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::compare(wchar_t const*) const */

uint __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::compare(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,wchar_t *param_1)

{
  size_t __n;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar1;
  uint uVar2;
  size_t sVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s1;
  ulong uVar4;
  
  sVar3 = wcslen(param_1);
  bVar1 = *this;
  if (((byte)bVar1 & 1) == 0) {
    uVar4 = (ulong)((byte)bVar1 >> 1);
  }
  else {
    uVar4 = *(ulong *)(this + 8);
  }
  if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_out_of_range();
  }
  if (((byte)bVar1 & 1) == 0) {
    __s1 = this + 4;
  }
  else {
    __s1 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
             **)(this + 0x10);
  }
  __n = sVar3;
  if (uVar4 <= sVar3) {
    __n = uVar4;
  }
  if (((__n == 0) || (uVar2 = wmemcmp((wchar_t *)__s1,param_1,__n), uVar2 == 0)) &&
     (uVar2 = (uint)(sVar3 < uVar4), uVar4 < sVar3)) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

