
/* std::__ndk1::vector<dragonBones::DisplayData*, std::__ndk1::allocator<dragonBones::DisplayData*>
   >::__append(unsigned long, dragonBones::DisplayData* const&) */

void __thiscall
std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>::
__append(vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>> *this,
        ulong param_1,DisplayData **param_2)

{
  ulong uVar1;
  void *__src;
  DisplayData *pDVar2;
  bool bVar3;
  void *pvVar4;
  size_t __n;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  puVar7 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar7 >> 3)) {
    do {
      param_1 = param_1 - 1;
      *puVar7 = *param_2;
      puVar7 = (undefined8 *)(*(long *)(this + 8) + 8);
      *(undefined8 **)(this + 8) = puVar7;
    } while (param_1 != 0);
    return;
  }
  lVar11 = (long)puVar7 - *(long *)this >> 3;
  uVar1 = lVar11 + param_1;
  if (uVar1 >> 0x3d != 0) {
LAB_00d2db18:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = *(long *)(this + 0x10) - *(long *)this;
  if ((ulong)(lVar5 >> 3) < 0xfffffffffffffff) {
    uVar6 = lVar5 >> 2;
    uVar10 = uVar1;
    if (uVar1 <= uVar6) {
      uVar10 = uVar6;
    }
    if (uVar10 != 0) {
      if (uVar10 >> 0x3d != 0) goto LAB_00d2db18;
      goto LAB_00d2db40;
    }
    pvVar4 = (void *)0x0;
  }
  else {
    uVar10 = 0x1fffffffffffffff;
LAB_00d2db40:
    pvVar4 = operator_new(uVar10 << 3);
  }
  puVar7 = (undefined8 *)((long)pvVar4 + lVar11 * 8);
  puVar8 = puVar7;
  if ((3 < param_1) &&
     (((undefined8 *)((long)param_2 + 1U) <= puVar7 ||
      ((DisplayData **)((long)pvVar4 + (lVar11 + param_1) * 8) <= param_2)))) {
    pDVar2 = *param_2;
    uVar9 = param_1 & 0xfffffffffffffffc;
    puVar8 = (undefined8 *)((long)pvVar4 + lVar11 * 8 + 0x10);
    uVar6 = uVar9;
    do {
      puVar8[-1] = pDVar2;
      puVar8[-2] = pDVar2;
      puVar8[1] = pDVar2;
      *puVar8 = pDVar2;
      uVar6 = uVar6 - 4;
      puVar8 = puVar8 + 4;
    } while (uVar6 != 0);
    bVar3 = uVar9 == param_1;
    puVar8 = puVar7 + uVar9;
    param_1 = param_1 - uVar9;
    if (bVar3) goto LAB_00d2db88;
  }
  do {
    param_1 = param_1 - 1;
    *puVar8 = *param_2;
    puVar8 = puVar8 + 1;
  } while (param_1 != 0);
LAB_00d2db88:
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar7 - __n),__src,__n);
  }
  *(void **)this = (void *)((long)puVar7 - __n);
  *(void **)(this + 8) = (void *)((long)pvVar4 + uVar1 * 8);
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar10 * 8);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

