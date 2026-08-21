
/* std::__ndk1::vector<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char const*> >,
   std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char const*> > >
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
::__append(vector<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
           *this,ulong param_1)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  void *pvVar8;
  ulong uVar9;
  void *__src;
  size_t __n;
  ulong uVar10;
  
  lVar2 = *(long *)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - lVar2 >> 3) * -0x5555555555555555)) {
    uVar6 = param_1;
    lVar4 = lVar2;
    if (1 < param_1) {
      uVar10 = param_1 & 0xfffffffffffffffe;
      puVar7 = (undefined1 *)(lVar2 + 0x28);
      uVar6 = uVar10;
      do {
        puVar7[-0x18] = 0;
        *puVar7 = 0;
        uVar6 = uVar6 - 2;
        puVar7 = puVar7 + 0x30;
      } while (uVar6 != 0);
      uVar6 = param_1 - uVar10;
      lVar4 = lVar2 + uVar10 * 0x18;
      if (uVar10 == param_1) goto LAB_0086d014;
    }
    puVar7 = (undefined1 *)(lVar4 + 0x10);
    do {
      uVar6 = uVar6 - 1;
      *puVar7 = 0;
      puVar7 = puVar7 + 0x18;
    } while (uVar6 != 0);
LAB_0086d014:
    *(ulong *)(this + 8) = lVar2 + param_1 * 0x18;
    return;
  }
  __src = *(void **)this;
  uVar10 = 0xaaaaaaaaaaaaaaa;
  __n = lVar2 - (long)__src;
  lVar2 = (long)__n >> 3;
  uVar6 = lVar2 * -0x5555555555555555 + param_1;
  if (0xaaaaaaaaaaaaaaa < uVar6) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar4 = *(long *)(this + 0x10) - (long)__src >> 3;
  if ((ulong)(lVar4 * -0x5555555555555555) < 0x555555555555555) {
    uVar5 = lVar4 * 0x5555555555555556;
    uVar10 = uVar6;
    if (uVar6 <= uVar5) {
      uVar10 = uVar5;
    }
    if (uVar10 != 0) goto LAB_0086cef8;
    pvVar1 = (void *)0x0;
  }
  else {
LAB_0086cef8:
    pvVar1 = operator_new(uVar10 * 0x18);
  }
  pvVar3 = (void *)((long)pvVar1 + lVar2 * 8);
  uVar6 = param_1;
  pvVar8 = pvVar3;
  if (1 < param_1) {
    uVar9 = param_1 & 0xfffffffffffffffe;
    pvVar8 = (void *)((long)pvVar3 + uVar9 * 0x18);
    uVar6 = param_1 - uVar9;
    puVar7 = (undefined1 *)((long)pvVar1 + lVar2 * 8 + 0x28);
    uVar5 = uVar9;
    do {
      puVar7[-0x18] = 0;
      *puVar7 = 0;
      uVar5 = uVar5 - 2;
      puVar7 = puVar7 + 0x30;
    } while (uVar5 != 0);
    if (uVar9 == param_1) goto LAB_0086cf60;
  }
  puVar7 = (undefined1 *)((long)pvVar8 + 0x10);
  do {
    uVar6 = uVar6 - 1;
    *puVar7 = 0;
    puVar7 = puVar7 + 0x18;
  } while (uVar6 != 0);
LAB_0086cf60:
  lVar2 = SUB168(SEXT816((long)__n) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
  pvVar8 = (void *)((long)pvVar3 + ((lVar2 >> 2) - (lVar2 >> 0x3f)) * 0x18);
  if (0 < (long)__n) {
    memcpy(pvVar8,__src,__n);
  }
  *(void **)this = pvVar8;
  *(void **)(this + 8) = (void *)((long)pvVar3 + param_1 * 0x18);
  *(void **)(this + 0x10) = (void *)((long)pvVar1 + uVar10 * 0x18);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

