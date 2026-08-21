
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::compare(wchar_t const*) const */

uint __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::compare(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,wchar_t *param_1)

{
  ulong uVar1;
  size_t __n;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  uint uVar3;
  size_t sVar4;
  
  sVar4 = wcslen(param_1);
  bVar2 = *this;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if (sVar4 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_out_of_range();
  }
  __n = sVar4;
  if (uVar1 <= sVar4) {
    __n = uVar1;
  }
  if (__n != 0) {
    __s1 = this + 4;
    if (((byte)bVar2 & 1) != 0) {
      __s1 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
    }
    uVar3 = wmemcmp((wchar_t *)__s1,param_1,__n);
    if (uVar3 != 0) {
      return uVar3;
    }
  }
  uVar3 = (uint)(sVar4 < uVar1);
  if (uVar1 < sVar4) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

