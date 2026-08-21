
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::at(unsigned long) const */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::at(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *this,
    ulong param_1)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar1;
  ulong uVar2;
  
  bVar1 = *this;
  if (((byte)bVar1 & 1) == 0) {
    uVar2 = (ulong)((byte)bVar1 >> 1);
  }
  else {
    uVar2 = *(ulong *)(this + 8);
  }
  if (uVar2 <= param_1) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_out_of_range();
  }
  if (((byte)bVar1 & 1) == 0) {
    return this + param_1 * 4 + 4;
  }
  return (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *)
         (*(long *)(this + 0x10) + param_1 * 4);
}

