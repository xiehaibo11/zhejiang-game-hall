
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::__init(unsigned long, wchar_t) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::__init(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t param_2)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s;
  ulong uVar1;
  
  if (0x3fffffffffffffef < param_1) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (param_1 < 5) {
    __s = this + 4;
    *this = SUB41((int)param_1 << 1,0);
    if (param_1 == 0) goto LAB_0182e3f4;
  }
  else {
    if (param_1 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar1 = param_1 + 4 & 0xfffffffffffffffc;
    __s = operator_new(uVar1 << 2);
    *(ulong *)(this + 8) = param_1;
    *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> **)
     (this + 0x10) = __s;
    *(ulong *)this = uVar1 | 1;
  }
  wmemset((wchar_t *)__s,param_2,param_1);
LAB_0182e3f4:
  *(undefined4 *)(__s + param_1 * 4) = 0;
  return;
}

