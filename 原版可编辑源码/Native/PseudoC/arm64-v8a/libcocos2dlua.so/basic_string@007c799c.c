
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::basic_string(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long, unsigned long, std::__ndk1::allocator<char>
   const&) */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     basic_string(basic_string *param_1,ulong param_2,ulong param_3,allocator *param_4)

{
  ulong uVar1;
  allocator *__n;
  byte bVar2;
  long lVar3;
  basic_string *__dest;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  bVar2 = *(byte *)param_2;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 < param_3) {
LAB_007c7a58:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar3 = *(long *)(param_2 + 0x10);
  if ((bVar2 & 1) == 0) {
    lVar3 = param_2 + 1;
  }
  __n = (allocator *)(uVar1 - param_3);
  if (param_4 <= (allocator *)(uVar1 - param_3)) {
    __n = param_4;
  }
  if ((allocator *)0xffffffffffffffef < __n) goto LAB_007c7a58;
  if (__n < (allocator *)0x17) {
    __dest = param_1 + 1;
    *param_1 = SUB41((int)__n << 1,0);
    if (__n == (allocator *)0x0) goto LAB_007c7a40;
  }
  else {
    __dest = operator_new((ulong)(__n + 0x10) & 0xfffffffffffffff0);
    *(allocator **)(param_1 + 8) = __n;
    *(basic_string **)(param_1 + 0x10) = __dest;
    *(ulong *)param_1 = (ulong)(__n + 0x10) & 0xfffffffffffffff0 | 1;
  }
  memcpy(__dest,(void *)(lVar3 + param_3),(size_t)__n);
LAB_007c7a40:
  __dest[(long)__n] = (basic_string)0x0;
  return;
}

