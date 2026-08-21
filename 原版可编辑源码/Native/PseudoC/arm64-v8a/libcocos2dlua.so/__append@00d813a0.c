
/* std::__ndk1::vector<dragonBones::DisplayData*, std::__ndk1::allocator<dragonBones::DisplayData*>
   >::__append(unsigned long, dragonBones::DisplayData* const&) */

void __thiscall
std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>::
__append(vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>> *this,
        ulong param_1,DisplayData **param_2)

{
  void *__src;
  DisplayData *pDVar1;
  void *pvVar2;
  size_t __n;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  puVar3 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar3 >> 3)) {
    puVar4 = puVar3;
    if (param_1 != 0) {
      puVar4 = puVar3 + param_1;
      lVar11 = param_1 << 3;
      do {
        lVar11 = lVar11 + -8;
        *puVar3 = *param_2;
        puVar3 = puVar3 + 1;
      } while (lVar11 != 0);
    }
    *(undefined8 **)(this + 8) = puVar4;
    return;
  }
  lVar11 = (long)puVar3 - *(long *)this >> 3;
  uVar10 = lVar11 + param_1;
  if (uVar10 >> 0x3d != 0) {
LAB_00d81410:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = *(long *)(this + 0x10) - *(long *)this;
  if ((ulong)(lVar5 >> 3) < 0xfffffffffffffff) {
    uVar6 = lVar5 >> 2;
    if (uVar10 <= uVar6) {
      uVar10 = uVar6;
    }
    if (uVar10 != 0) {
      if (uVar10 >> 0x3d != 0) goto LAB_00d81410;
      goto LAB_00d8144c;
    }
    pvVar2 = (void *)0x0;
  }
  else {
    uVar10 = 0x1fffffffffffffff;
LAB_00d8144c:
    pvVar2 = operator_new(uVar10 << 3);
  }
  uVar7 = param_1 * 8 - 8;
  puVar3 = (undefined8 *)((long)pvVar2 + lVar11 * 8);
  uVar6 = (uVar7 >> 3) + 1;
  puVar4 = puVar3;
  if ((3 < uVar6) &&
     (((undefined8 *)((long)param_2 + 1U) <= puVar3 ||
      ((DisplayData **)((long)pvVar2 + (lVar11 + (uVar7 >> 3)) * 8 + 8) <= param_2)))) {
    pDVar1 = *param_2;
    uVar9 = uVar6 & 0x3ffffffffffffffc;
    puVar4 = (undefined8 *)((long)pvVar2 + lVar11 * 8 + 0x10);
    uVar7 = uVar9;
    do {
      puVar4[-1] = pDVar1;
      puVar4[-2] = pDVar1;
      puVar4[1] = pDVar1;
      *puVar4 = pDVar1;
      uVar7 = uVar7 - 4;
      puVar4 = puVar4 + 4;
    } while (uVar7 != 0);
    puVar4 = puVar3 + uVar9;
    if (uVar6 == uVar9) goto LAB_00d814e0;
  }
  do {
    puVar8 = puVar4 + 1;
    *puVar4 = *param_2;
    puVar4 = puVar8;
  } while (puVar3 + param_1 != puVar8);
LAB_00d814e0:
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar3 - __n),__src,__n);
  }
  *(void **)this = (void *)((long)puVar3 - __n);
  *(undefined8 **)(this + 8) = puVar3 + param_1;
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar10 * 8);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

