
/* std::__ndk1::__split_buffer<std::__ndk1::__state<char>*,
   std::__ndk1::allocator<std::__ndk1::__state<char>*>&>::push_back(std::__ndk1::__state<char>*&&)
    */

void __thiscall
std::__ndk1::
__split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>&>::
push_back(__split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>&>
          *this,__state **param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  size_t __n;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *__src;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar14 = *(undefined8 **)(this + 0x10);
  if (puVar14 != *(undefined8 **)(this + 0x18)) goto LAB_0086c220;
  puVar13 = *(undefined8 **)this;
  __src = *(undefined8 **)(this + 8);
  if (puVar13 <= __src && (long)__src - (long)puVar13 != 0) {
    lVar6 = (long)__src - (long)puVar13 >> 3;
    lVar1 = lVar6 + 2;
    if (-1 < lVar6 + 1) {
      lVar1 = lVar6 + 1;
    }
    __n = (long)puVar14 - (long)__src;
    puVar14 = __src + -(lVar1 >> 1);
    puVar13 = puVar14;
    if (__n != 0) {
      memmove(puVar14,__src,__n);
      puVar13 = (undefined8 *)(*(long *)(this + 8) + (lVar1 >> 1) * -8);
    }
    puVar14 = puVar14 + ((long)__n >> 3);
    *(undefined8 **)(this + 8) = puVar13;
    *(undefined8 **)(this + 0x10) = puVar14;
    goto LAB_0086c220;
  }
  lVar1 = (long)*(undefined8 **)(this + 0x18) - (long)puVar13;
  uVar7 = lVar1 >> 2;
  if (lVar1 == 0) {
    uVar7 = 1;
  }
  if (uVar7 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar5 = operator_new(uVar7 << 3);
  }
  uVar8 = uVar7 >> 2;
  puVar3 = (undefined8 *)((long)pvVar5 + uVar8 * 8);
  puVar9 = puVar3;
  if (__src != puVar14) {
    uVar10 = (ulong)((long)puVar14 + (-8 - (long)__src)) >> 3;
    uVar2 = uVar10 + 1;
    puVar13 = puVar3;
    if ((uVar2 < 4) ||
       ((puVar3 < __src + uVar10 + 1 &&
        (__src < (undefined8 *)((long)pvVar5 + (uVar8 + uVar10) * 8 + 8))))) {
LAB_0086c1f0:
      do {
        puVar9 = __src + 1;
        *puVar13 = *__src;
        puVar13 = puVar13 + 1;
        __src = puVar9;
      } while (puVar14 != puVar9);
    }
    else {
      uVar11 = uVar2 & 0x3ffffffffffffffc;
      puVar13 = __src + 2;
      __src = __src + uVar11;
      puVar9 = (undefined8 *)((long)pvVar5 + uVar8 * 8 + 0x10);
      uVar12 = uVar11;
      do {
        puVar4 = puVar13 + -1;
        uVar15 = puVar13[-2];
        uVar17 = puVar13[1];
        uVar16 = *puVar13;
        puVar13 = puVar13 + 4;
        uVar12 = uVar12 - 4;
        puVar9[-1] = *puVar4;
        puVar9[-2] = uVar15;
        puVar9[1] = uVar17;
        *puVar9 = uVar16;
        puVar9 = puVar9 + 4;
      } while (uVar12 != 0);
      puVar13 = puVar3 + uVar11;
      if (uVar2 != uVar11) goto LAB_0086c1f0;
    }
    puVar13 = *(undefined8 **)this;
    puVar9 = (undefined8 *)((long)pvVar5 + (uVar8 + uVar10 + 1) * 8);
  }
  puVar14 = puVar9;
  *(void **)this = pvVar5;
  *(undefined8 **)(this + 8) = puVar3;
  *(undefined8 **)(this + 0x10) = puVar14;
  *(void **)(this + 0x18) = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar13 != (undefined8 *)0x0) {
    operator_delete(puVar13);
    puVar14 = *(undefined8 **)(this + 0x10);
  }
LAB_0086c220:
  *puVar14 = *param_1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  return;
}

