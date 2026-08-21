
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::basic_string(std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long,
   unsigned long, std::__ndk1::allocator<wchar_t> const&) */

void std::__ndk1::
     basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
     basic_string(basic_string *param_1,ulong param_2,ulong param_3,allocator *param_4)

{
  long lVar1;
  allocator *__n;
  byte bVar2;
  basic_string *__s1;
  ulong uVar3;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  bVar2 = *(byte *)param_2;
  uVar3 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar3 = *(ulong *)(param_2 + 8);
  }
  if (uVar3 < param_3) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_out_of_range();
  }
  lVar1 = param_2 + 4;
  if ((bVar2 & 1) != 0) {
    lVar1 = *(long *)(param_2 + 0x10);
  }
  __n = (allocator *)(uVar3 - param_3);
  if (param_4 <= (allocator *)(uVar3 - param_3)) {
    __n = param_4;
  }
  if ((allocator *)0x3fffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if ((allocator *)&DAT_00000004 < __n) {
    if ((ulong)(__n + 4) >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar3 = (ulong)(__n + 4) & 0xfffffffffffffffc;
    __s1 = operator_new(uVar3 << 2);
    *(allocator **)(param_1 + 8) = __n;
    *(basic_string **)(param_1 + 0x10) = __s1;
    *(ulong *)param_1 = uVar3 | 1;
  }
  else {
    __s1 = param_1 + 4;
    *param_1 = SUB41((int)__n << 1,0);
    if (__n == (allocator *)0x0) goto LAB_0182c810;
  }
  wmemcpy((wchar_t *)__s1,(wchar_t *)(lVar1 + param_3 * 4),(size_t)__n);
LAB_0182c810:
  *(undefined4 *)(__s1 + (long)__n * 4) = 0;
  return;
}

