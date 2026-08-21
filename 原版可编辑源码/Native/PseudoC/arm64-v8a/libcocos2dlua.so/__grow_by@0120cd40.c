
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::__grow_by(unsigned long, unsigned long, unsigned long,
   unsigned long, unsigned long, unsigned long) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::__grow_by(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            *this,ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
           ulong param_6)

{
  size_t __n;
  wchar_t *__s1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s2;
  ulong uVar1;
  
  uVar1 = 0x3fffffffffffffef;
  if (0x3fffffffffffffef - param_1 < param_2) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (((byte)*this & 1) == 0) {
    __s2 = this + 4;
  }
  else {
    __s2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
             **)(this + 0x10);
  }
  if (param_1 < 0x1fffffffffffffe7) {
    uVar1 = param_1 << 1;
    if (param_1 << 1 <= param_2 + param_1) {
      uVar1 = param_2 + param_1;
    }
    if (uVar1 < 5) {
      uVar1 = 5;
    }
    else {
      if (uVar1 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      uVar1 = uVar1 + 4 & 0xfffffffffffffffc;
    }
  }
  __s1 = operator_new(uVar1 << 2);
  if (param_4 != 0) {
    wmemcpy(__s1,(wchar_t *)__s2,param_4);
  }
  __n = (param_3 - param_5) - param_4;
  if (__n != 0) {
    wmemcpy(__s1 + param_4 + param_6,(wchar_t *)(__s2 + param_5 * 4 + param_4 * 4),__n);
  }
  if (param_1 != 4) {
    operator_delete(__s2);
  }
  *(wchar_t **)(this + 0x10) = __s1;
  *(ulong *)this = uVar1 | 1;
  return;
}

