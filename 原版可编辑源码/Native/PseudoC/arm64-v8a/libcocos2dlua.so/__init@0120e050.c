
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::__init(wchar_t const*, unsigned long, unsigned long) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::__init(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s1;
  ulong uVar1;
  
  if (0x3fffffffffffffef < param_3) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (param_3 < 5) {
    __s1 = this + 4;
    *this = SUB41((int)param_2 << 1,0);
  }
  else {
    if (param_3 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar1 = param_3 + 4 & 0xfffffffffffffffc;
    __s1 = operator_new(uVar1 << 2);
    *(ulong *)(this + 8) = param_2;
    *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> **)
     (this + 0x10) = __s1;
    *(ulong *)this = uVar1 | 1;
  }
  if (param_2 != 0) {
    wmemcpy((wchar_t *)__s1,param_1,param_2);
  }
  *(undefined4 *)(__s1 + param_2 * 4) = 0;
  return;
}

