
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::basic_string(std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long,
   unsigned long, std::__ndk1::allocator<wchar_t> const&) */

void std::__ndk1::
     basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
     basic_string(basic_string *param_1,ulong param_2,ulong param_3,allocator *param_4)

{
  ulong uVar1;
  long lVar2;
  allocator *__n;
  byte bVar3;
  basic_string *__s1;
  
  bVar3 = *(byte *)param_2;
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 < param_3) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_out_of_range();
  }
  lVar2 = param_2 + 4;
  if ((bVar3 & 1) != 0) {
    lVar2 = *(long *)(param_2 + 0x10);
  }
  __n = (allocator *)(uVar1 - param_3);
  if (param_4 <= (allocator *)(uVar1 - param_3)) {
    __n = param_4;
  }
  if ((allocator *)0x3fffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < (allocator *)0x5) {
    __s1 = param_1 + 4;
    *param_1 = SUB41((int)__n << 1,0);
    if (__n == (allocator *)0x0) goto LAB_00143958;
  }
  else {
    __s1 = operator_new(((ulong)(__n + 4) & 0xfffffffffffffffc) << 2);
    *(allocator **)(param_1 + 8) = __n;
    *(basic_string **)(param_1 + 0x10) = __s1;
    *(ulong *)param_1 = (ulong)(__n + 4) & 0xfffffffffffffffc | 1;
  }
  wmemcpy((wchar_t *)__s1,(wchar_t *)(lVar2 + param_3 * 4),(size_t)__n);
LAB_00143958:
  *(undefined4 *)(__s1 + (long)__n * 4) = 0;
  return;
}

