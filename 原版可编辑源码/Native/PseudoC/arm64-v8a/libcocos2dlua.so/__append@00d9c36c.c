
/* std::__ndk1::vector<dragonBones::ActionFrame, std::__ndk1::allocator<dragonBones::ActionFrame>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<dragonBones::ActionFrame,std::__ndk1::allocator<dragonBones::ActionFrame>>::
__append(vector<dragonBones::ActionFrame,std::__ndk1::allocator<dragonBones::ActionFrame>> *this,
        ulong param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  void *pvVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  puVar4 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar4 >> 5)) {
    puVar5 = puVar4;
    if (param_1 != 0) {
      puVar5 = puVar4 + param_1 * 4;
      lVar11 = param_1 << 5;
      do {
        puVar4[1] = 0;
        *puVar4 = 0;
        puVar4[3] = 0;
        puVar4[2] = 0;
        lVar11 = lVar11 + -0x20;
        puVar4 = puVar4 + 4;
      } while (lVar11 != 0);
    }
    *(undefined8 **)(this + 8) = puVar5;
    return;
  }
  lVar11 = (long)puVar4 - *(long *)this >> 5;
  uVar12 = lVar11 + param_1;
  if (uVar12 >> 0x3b != 0) {
LAB_00d9c3d4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar6 = *(long *)(this + 0x10) - *(long *)this;
  if ((ulong)(lVar6 >> 5) < 0x3ffffffffffffff) {
    uVar7 = lVar6 >> 4;
    if (uVar12 <= uVar7) {
      uVar12 = uVar7;
    }
    if (uVar12 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00d9c418;
    }
    if (uVar12 >> 0x3b != 0) goto LAB_00d9c3d4;
  }
  else {
    uVar12 = 0x7ffffffffffffff;
  }
  pvVar2 = operator_new(uVar12 << 5);
LAB_00d9c418:
  puVar5 = (undefined8 *)((long)pvVar2 + lVar11 * 0x20);
  lVar11 = param_1 * 0x20;
  puVar4 = puVar5 + param_1 * 4;
  puVar9 = puVar5;
  do {
    puVar9[1] = 0;
    *puVar9 = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    lVar11 = lVar11 + -0x20;
    puVar9 = puVar9 + 4;
  } while (lVar11 != 0);
  pvVar8 = *(void **)this;
  pvVar3 = *(void **)(this + 8);
  pvVar10 = pvVar8;
  if (pvVar3 != pvVar8) {
    lVar11 = 0;
    do {
      uVar1 = *(undefined4 *)((long)pvVar3 + lVar11 + -0x20);
      *(undefined8 *)((long)puVar5 + lVar11 + -0x10) = 0;
      *(undefined8 *)((long)puVar5 + lVar11 + -8) = 0;
      *(undefined8 *)((long)puVar5 + lVar11 + -0x18) = 0;
      *(undefined4 *)((long)puVar5 + lVar11 + -0x20) = uVar1;
      uVar13 = *(undefined8 *)((long)pvVar3 + lVar11 + -0x18);
      lVar6 = lVar11 + -0x20;
      *(undefined8 *)((long)puVar5 + lVar11 + -0x10) =
           *(undefined8 *)((long)pvVar3 + lVar11 + -0x10);
      *(undefined8 *)((long)puVar5 + lVar11 + -0x18) = uVar13;
      *(undefined8 *)((long)puVar5 + lVar11 + -8) = *(undefined8 *)((long)pvVar3 + lVar11 + -8);
      *(undefined8 *)((long)pvVar3 + lVar11 + -0x18) = 0;
      *(undefined8 *)((long)pvVar3 + lVar11 + -0x10) = 0;
      *(undefined8 *)((long)pvVar3 + lVar11 + -8) = 0;
      lVar11 = lVar6;
    } while ((long)pvVar8 - (long)pvVar3 != lVar6);
    pvVar8 = *(void **)(this + 8);
    puVar5 = (undefined8 *)((long)puVar5 + lVar6);
    pvVar10 = *(void **)this;
  }
  *(undefined8 **)this = puVar5;
  *(undefined8 **)(this + 8) = puVar4;
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar12 * 0x20);
  while (pvVar2 = pvVar8, pvVar2 != pvVar10) {
    pvVar3 = *(void **)((long)pvVar2 + -0x18);
    pvVar8 = (void *)((long)pvVar2 + -0x20);
    if (pvVar3 != (void *)0x0) {
      *(void **)((long)pvVar2 + -0x10) = pvVar3;
      operator_delete(pvVar3);
    }
  }
  if (pvVar10 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar10);
  return;
}

