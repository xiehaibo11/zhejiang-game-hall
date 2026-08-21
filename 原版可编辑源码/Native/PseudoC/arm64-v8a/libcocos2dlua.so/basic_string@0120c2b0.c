
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::basic_string(std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::basic_string(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *this,basic_string *param_1)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s1;
  ulong __n;
  wchar_t *__s2;
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (((byte)*param_1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = uVar3;
    *(undefined8 *)this = uVar2;
    return;
  }
  __n = *(ulong *)(param_1 + 8);
  if (0x3fffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  __s2 = *(wchar_t **)(param_1 + 0x10);
  if (__n < 5) {
    __s1 = this + 4;
    *this = SUB41((int)__n << 1,0);
    if (__n == 0) goto LAB_0120c34c;
  }
  else {
    if (__n + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar1 = __n + 4 & 0xfffffffffffffffc;
    __s1 = operator_new(uVar1 << 2);
    *(ulong *)(this + 8) = __n;
    *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> **)
     (this + 0x10) = __s1;
    *(ulong *)this = uVar1 | 1;
  }
  wmemcpy((wchar_t *)__s1,__s2,__n);
LAB_0120c34c:
  *(undefined4 *)(__s1 + __n * 4) = 0;
  return;
}

