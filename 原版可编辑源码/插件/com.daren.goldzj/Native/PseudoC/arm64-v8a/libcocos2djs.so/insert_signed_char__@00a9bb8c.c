
/* std::__ndk1::enable_if<__is_forward_iterator<signed char*>::value&&is_constructible<char,
   std::__ndk1::iterator_traits<signed char*>::reference>::value, std::__ndk1::__wrap_iter<char*>
   >::type std::__ndk1::vector<char, std::__ndk1::allocator<char> >::insert<signed
   char*>(std::__ndk1::__wrap_iter<char const*>, signed char*, signed char*) */

undefined1 * __thiscall
std::__ndk1::vector<char,std::__ndk1::allocator<char>>::insert<signed_char*>
          (vector<char,std::__ndk1::allocator<char>> *this,undefined1 *param_2,undefined1 *param_3,
          undefined1 *param_4)

{
  undefined8 *puVar1;
  size_t sVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  void *__src;
  void *pvVar12;
  ulong uVar13;
  size_t __n;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar13 = (long)param_4 - (long)param_3;
  if ((long)uVar13 < 1) {
    return param_2;
  }
  puVar11 = *(undefined1 **)(this + 8);
  if ((long)uVar13 <= *(long *)(this + 0x10) - (long)puVar11) {
    lVar5 = (long)puVar11 - (long)param_2;
    puVar4 = puVar11;
    if (lVar5 < (long)uVar13) {
      for (puVar7 = param_3 + lVar5; puVar7 != param_4; puVar7 = puVar7 + 1) {
        *puVar4 = *puVar7;
        puVar4 = (undefined1 *)(*(long *)(this + 8) + 1);
        *(undefined1 **)(this + 8) = puVar4;
      }
      param_4 = param_3 + lVar5;
      if (lVar5 < 1) {
        return param_2;
      }
    }
    puVar7 = param_2 + uVar13;
    sVar2 = (long)puVar4 - (long)puVar7;
    if (puVar4 + -uVar13 < puVar11) {
      puVar11 = puVar11 + (long)(puVar7 + (-(long)param_2 - (long)puVar4));
      puVar10 = puVar4 + (long)param_2 + -(long)puVar7;
      puVar7 = puVar4;
      do {
        puVar11 = puVar11 + -1;
        *puVar7 = *puVar10;
        puVar7 = (undefined1 *)(*(long *)(this + 8) + 1);
        *(undefined1 **)(this + 8) = puVar7;
        puVar10 = puVar10 + 1;
      } while (puVar11 != (undefined1 *)0x0);
    }
    if (sVar2 != 0) {
      memmove(puVar4 + -sVar2,param_2,sVar2);
    }
                    /* try { // try from 00a9bcb8 to 00b9bd03 has its CatchHandler @ 00a9bcb8
                       catch() { ... } // from try @ 00a9bcb8 with catch @ 00a9bcb8
                       catch() { ... } // from try @ 00a9bd0c with catch @ 00a9bcb8 */
    uVar13 = (long)param_4 - (long)param_3;
    if (uVar13 == 0) {
      return param_2;
    }
    puVar11 = param_2;
    if ((0x1f < uVar13) &&
       ((param_4 <= param_2 || (param_4 + ((long)param_2 - (long)param_3) <= param_3)))) {
      uVar6 = uVar13 & 0xffffffffffffffe0;
      puVar8 = (undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + uVar6;
      puVar9 = (undefined8 *)(param_2 + 0x10);
      uVar3 = uVar6;
      do {
        puVar1 = puVar8 + -1;
        uVar14 = puVar8[-2];
        uVar16 = puVar8[1];
        uVar15 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar3 = uVar3 - 0x20;
        puVar9[-1] = *puVar1;
        puVar9[-2] = uVar14;
        puVar9[1] = uVar16;
        *puVar9 = uVar15;
        puVar9 = puVar9 + 4;
      } while (uVar3 != 0);
      puVar11 = param_2 + uVar6;
      if (uVar6 == uVar13) {
        return param_2;
      }
    }
    do {
      puVar4 = param_3 + 1;
      *puVar11 = *param_3;
      puVar11 = puVar11 + 1;
      param_3 = puVar4;
    } while (param_4 != puVar4);
    return param_2;
  }
  __src = *(void **)this;
  puVar11 = puVar11 + (uVar13 - (long)__src);
  if ((long)puVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar3 = *(long *)(this + 0x10) - (long)__src;
  if (uVar3 < 0x3fffffffffffffff) {
    puVar4 = (undefined1 *)(uVar3 * 2);
    if (puVar11 <= puVar4) {
      puVar11 = puVar4;
    }
    if (puVar11 != (undefined1 *)0x0) goto LAB_00a9bd00;
    pvVar12 = (void *)0x0;
  }
  else {
    puVar11 = (undefined1 *)0x7fffffffffffffff;
LAB_00a9bd00:
                    /* try { // try from 00a9bd04 to 00b9bd0b has its CatchHandler @ 00a9bd68 */
    pvVar12 = operator_new((ulong)puVar11);
  }
                    /* try { // try from 00a9bd0c to 00b9bd7b has its CatchHandler @ 00a9bcb8 */
  puVar4 = (undefined1 *)((long)pvVar12 + ((long)param_2 - (long)__src));
  puVar7 = puVar4;
  if (param_3 == param_4) goto LAB_00a9bdb0;
  lVar5 = -(long)__src - (long)param_3;
  if ((uVar13 < 0x20) ||
     ((puVar4 < param_4 &&
      (param_3 < (undefined1 *)((long)pvVar12 + (long)(param_4 + (long)(param_2 + lVar5))))))) {
LAB_00a9bd98:
    do {
      puVar10 = param_3 + 1;
      *puVar7 = *param_3;
      puVar7 = puVar7 + 1;
      param_3 = puVar10;
    } while (param_4 != puVar10);
  }
  else {
    uVar6 = uVar13 & 0xffffffffffffffe0;
    puVar8 = (undefined8 *)(param_3 + 0x10);
                    /* catch() { ... } // from try @ 00a9bd04 with catch @ 00a9bd68 */
    param_3 = param_3 + uVar6;
    puVar9 = (undefined8 *)((long)pvVar12 + (long)(param_2 + (0x10 - (long)__src)));
    uVar3 = uVar6;
    do {
      puVar1 = puVar8 + -1;
      uVar14 = puVar8[-2];
      uVar16 = puVar8[1];
      uVar15 = *puVar8;
      puVar8 = puVar8 + 4;
      uVar3 = uVar3 - 0x20;
      puVar9[-1] = *puVar1;
      puVar9[-2] = uVar14;
      puVar9[1] = uVar16;
      *puVar9 = uVar15;
      puVar9 = puVar9 + 4;
    } while (uVar3 != 0);
    puVar7 = puVar4 + uVar6;
    if (uVar13 != uVar6) goto LAB_00a9bd98;
  }
  __src = *(void **)this;
  puVar7 = (undefined1 *)((long)pvVar12 + (long)(param_4 + (long)(param_2 + lVar5)));
LAB_00a9bdb0:
  sVar2 = (long)param_2 - (long)__src;
  if (0 < (long)sVar2) {
    memcpy(puVar4 + -sVar2,__src,sVar2);
  }
  __n = *(long *)(this + 8) - (long)param_2;
  if (0 < (long)__n) {
    memcpy(puVar7,param_2,__n);
    puVar7 = puVar7 + __n;
  }
  *(undefined1 **)this = puVar4 + -sVar2;
  *(undefined1 **)(this + 8) = puVar7;
  *(undefined1 **)(this + 0x10) = (undefined1 *)((long)pvVar12 + (long)puVar11);
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
  return puVar4;
}

