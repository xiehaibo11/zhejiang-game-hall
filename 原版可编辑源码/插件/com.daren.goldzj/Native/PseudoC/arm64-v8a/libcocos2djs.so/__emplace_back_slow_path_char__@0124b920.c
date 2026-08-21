
/* void std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   >::__emplace_back_slow_path<char*>(char*&&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::__emplace_back_slow_path<char*>
          (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
           *this,char **param_1)

{
  ulong uVar1;
  ulong *puVar2;
  byte bVar3;
  byte *pbVar4;
  void *pvVar5;
  size_t __n;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *__s;
  void *__dest;
  ulong *puVar12;
  ulong uVar13;
  
  lVar9 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar9 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
LAB_0124bb08:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar8 = lVar7 * 0x5555555555555556;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
    uVar1 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar1 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar1) goto LAB_0124bb08;
    pvVar5 = operator_new(uVar1 * 0x18);
  }
  __s = *param_1;
  puVar12 = (ulong *)((long)pvVar5 + lVar9 * 8);
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) goto LAB_0124bb08;
  if (__n < 0x17) {
    __dest = (void *)((long)puVar12 + 1);
    *(char *)puVar12 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0124ba3c;
  }
  else {
    uVar8 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar8);
    *(size_t *)((long)pvVar5 + lVar9 * 8 + 8) = __n;
    *(void **)((long)pvVar5 + lVar9 * 8 + 0x10) = __dest;
    *puVar12 = uVar8 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_0124ba3c:
  *(undefined1 *)((long)__dest + __n) = 0;
  pbVar6 = *(byte **)this;
  pbVar10 = *(byte **)(this + 8);
  puVar2 = puVar12 + 3;
  pbVar11 = pbVar6;
  if (pbVar10 != pbVar6) {
    do {
      uVar13 = *(ulong *)(pbVar10 + -0x10);
      uVar8 = *(ulong *)(pbVar10 + -0x18);
      puVar12[-1] = *(ulong *)(pbVar10 + -8);
      puVar12[-2] = uVar13;
      puVar12[-3] = uVar8;
      pbVar10[-0x10] = 0;
      pbVar10[-0xf] = 0;
      pbVar10[-0xe] = 0;
      pbVar10[-0xd] = 0;
      pbVar10[-0xc] = 0;
      pbVar10[-0xb] = 0;
      pbVar10[-10] = 0;
      pbVar10[-9] = 0;
      pbVar10[-8] = 0;
      pbVar10[-7] = 0;
      pbVar10[-6] = 0;
      pbVar10[-5] = 0;
      pbVar10[-4] = 0;
      pbVar10[-3] = 0;
      pbVar10[-2] = 0;
      pbVar10[-1] = 0;
      pbVar10[-0x18] = 0;
      pbVar10[-0x17] = 0;
      pbVar10[-0x16] = 0;
      pbVar10[-0x15] = 0;
      pbVar10[-0x14] = 0;
      pbVar10[-0x13] = 0;
      pbVar10[-0x12] = 0;
      pbVar10[-0x11] = 0;
      pbVar10 = pbVar10 + -0x18;
      puVar12 = puVar12 + -3;
    } while (pbVar6 != pbVar10);
    pbVar6 = *(byte **)(this + 8);
    pbVar11 = *(byte **)this;
  }
  *(ulong **)this = puVar12;
  *(ulong **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar1 * 0x18);
  if (pbVar6 != pbVar11) {
    bVar3 = pbVar6[-0x18];
    pbVar10 = pbVar6 + -0x18;
    while( true ) {
      pbVar4 = pbVar10;
      if ((bVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar6 + -8));
      }
      if (pbVar11 == pbVar4) break;
      bVar3 = pbVar4[-0x18];
      pbVar10 = pbVar4 + -0x18;
      pbVar6 = pbVar4;
    }
  }
  if (pbVar11 != (byte *)0x0) {
    operator_delete(pbVar11);
    return;
  }
  return;
}

