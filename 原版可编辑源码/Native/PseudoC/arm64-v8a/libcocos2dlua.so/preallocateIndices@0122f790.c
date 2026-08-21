
/* btTriangleMesh::preallocateIndices(int) */

void __thiscall btTriangleMesh::preallocateIndices(btTriangleMesh *this,int param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (this[0xe8] == (btTriangleMesh)0x0) {
    if (param_1 <= *(int *)(this + 0xd0)) {
      return;
    }
    if (param_1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)btAlignedAllocInternal
                                 (-(ulong)((uint)param_1 >> 0x1f) & 0xfffffffe00000000 |
                                  (ulong)(uint)param_1 << 1,0x10);
    }
    uVar1 = *(uint *)(this + 0xcc);
    uVar5 = (ulong)(int)uVar1;
    pvVar4 = *(void **)(this + 0xd8);
    if ((int)uVar1 < 1) {
      if (pvVar4 == (void *)0x0) goto LAB_0122f964;
    }
    else {
      if (uVar1 < 0x10) {
LAB_0122f8c8:
        uVar7 = 0;
      }
      else {
        uVar7 = uVar5 & 0xfffffffffffffff0;
        if (uVar7 != 0) {
          if ((pvVar3 < (void *)((long)pvVar4 + uVar5 * 2)) &&
             (pvVar4 < (void *)((long)pvVar3 + uVar5 * 2))) goto LAB_0122f8c8;
          puVar12 = (undefined8 *)((long)pvVar3 + 0x10);
          puVar13 = (undefined8 *)((long)pvVar4 + 0x10);
          uVar14 = uVar7;
          do {
            puVar2 = puVar13 + -1;
            uVar15 = puVar13[-2];
            uVar17 = puVar13[1];
            uVar16 = *puVar13;
            uVar14 = uVar14 - 0x10;
            puVar13 = puVar13 + 4;
            puVar12[-1] = *puVar2;
            puVar12[-2] = uVar15;
            puVar12[1] = uVar17;
            *puVar12 = uVar16;
            puVar12 = puVar12 + 4;
          } while (uVar14 != 0);
          if (uVar7 == uVar5) goto LAB_0122f954;
        }
      }
      lVar6 = uVar5 - uVar7;
      puVar9 = (undefined2 *)((long)pvVar4 + uVar7 * 2);
      puVar11 = (undefined2 *)((long)pvVar3 + uVar7 * 2);
      do {
        lVar6 = lVar6 + -1;
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      } while (lVar6 != 0);
    }
LAB_0122f954:
    if (this[0xe0] != (btTriangleMesh)0x0) {
      btAlignedFreeInternal(pvVar4);
    }
    *(undefined8 *)(this + 0xd8) = 0;
LAB_0122f964:
    *(void **)(this + 0xd8) = pvVar3;
    this[0xe0] = (btTriangleMesh)0x1;
    *(int *)(this + 0xd0) = param_1;
    return;
  }
  if (param_1 <= *(int *)(this + 0xb0)) {
    return;
  }
  if (param_1 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = (void *)btAlignedAllocInternal
                               (-(ulong)((uint)param_1 >> 0x1f) & 0xfffffffc00000000 |
                                (ulong)(uint)param_1 << 2,0x10);
  }
  uVar1 = *(uint *)(this + 0xac);
  uVar5 = (ulong)(int)uVar1;
  pvVar4 = *(void **)(this + 0xb8);
  if ((int)uVar1 < 1) {
    if (pvVar4 == (void *)0x0) goto LAB_0122f874;
  }
  else {
    if (uVar1 < 8) {
LAB_0122f838:
      uVar7 = 0;
    }
    else {
      uVar7 = uVar5 & 0xfffffffffffffff8;
      if (uVar7 != 0) {
        if ((pvVar3 < (void *)((long)pvVar4 + uVar5 * 4)) &&
           (pvVar4 < (void *)((long)pvVar3 + uVar5 * 4))) goto LAB_0122f838;
        puVar12 = (undefined8 *)((long)pvVar3 + 0x10);
        puVar13 = (undefined8 *)((long)pvVar4 + 0x10);
        uVar14 = uVar7;
        do {
          puVar2 = puVar13 + -1;
          uVar15 = puVar13[-2];
          uVar17 = puVar13[1];
          uVar16 = *puVar13;
          uVar14 = uVar14 - 8;
          puVar13 = puVar13 + 4;
          puVar12[-1] = *puVar2;
          puVar12[-2] = uVar15;
          puVar12[1] = uVar17;
          *puVar12 = uVar16;
          puVar12 = puVar12 + 4;
        } while (uVar14 != 0);
        if (uVar7 == uVar5) goto LAB_0122f864;
      }
    }
    lVar6 = uVar5 - uVar7;
    puVar8 = (undefined4 *)((long)pvVar4 + uVar7 * 4);
    puVar10 = (undefined4 *)((long)pvVar3 + uVar7 * 4);
    do {
      lVar6 = lVar6 + -1;
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    } while (lVar6 != 0);
  }
LAB_0122f864:
  if (this[0xc0] != (btTriangleMesh)0x0) {
    btAlignedFreeInternal(pvVar4);
  }
  *(undefined8 *)(this + 0xb8) = 0;
LAB_0122f874:
  *(void **)(this + 0xb8) = pvVar3;
  this[0xc0] = (btTriangleMesh)0x1;
  *(int *)(this + 0xb0) = param_1;
  return;
}

