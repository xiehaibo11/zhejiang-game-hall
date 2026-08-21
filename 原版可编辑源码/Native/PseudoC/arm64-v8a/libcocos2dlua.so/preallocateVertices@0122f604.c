
/* btTriangleMesh::preallocateVertices(int) */

void __thiscall btTriangleMesh::preallocateVertices(btTriangleMesh *this,int param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (this[0xe9] != (btTriangleMesh)0x0) {
    if (param_1 <= *(int *)(this + 0x70)) {
      return;
    }
    if (param_1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = btAlignedAllocInternal
                        (-(ulong)((uint)param_1 >> 0x1f) & 0xfffffff000000000 |
                         (ulong)(uint)param_1 << 4,0x10);
    }
    lVar6 = (long)*(int *)(this + 0x6c);
    if (0 < *(int *)(this + 0x6c)) {
      lVar8 = 0;
      do {
        lVar6 = lVar6 + -1;
        uVar15 = *(undefined8 *)(*(long *)(this + 0x78) + lVar8);
        ((undefined8 *)(lVar3 + lVar8))[1] = ((undefined8 *)(*(long *)(this + 0x78) + lVar8))[1];
        *(undefined8 *)(lVar3 + lVar8) = uVar15;
        lVar8 = lVar8 + 0x10;
      } while (lVar6 != 0);
    }
    if (*(void **)(this + 0x78) != (void *)0x0) {
      if (this[0x80] != (btTriangleMesh)0x0) {
        btAlignedFreeInternal(*(void **)(this + 0x78));
      }
      *(undefined8 *)(this + 0x78) = 0;
    }
    *(long *)(this + 0x78) = lVar3;
    this[0x80] = (btTriangleMesh)0x1;
    *(int *)(this + 0x70) = param_1;
    return;
  }
  if (param_1 <= *(int *)(this + 0x90)) {
    return;
  }
  if (param_1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = (void *)btAlignedAllocInternal
                               (-(ulong)((uint)param_1 >> 0x1f) & 0xfffffffc00000000 |
                                (ulong)(uint)param_1 << 2,0x10);
  }
  uVar1 = *(uint *)(this + 0x8c);
  uVar7 = (ulong)(int)uVar1;
  pvVar5 = *(void **)(this + 0x98);
  if ((int)uVar1 < 1) {
    if (pvVar5 == (void *)0x0) goto LAB_0122f770;
  }
  else {
    if (uVar1 < 8) {
LAB_0122f704:
      uVar9 = 0;
    }
    else {
      uVar9 = uVar7 & 0xfffffffffffffff8;
      if (uVar9 != 0) {
        if ((pvVar4 < (void *)((long)pvVar5 + uVar7 * 4)) &&
           (pvVar5 < (void *)((long)pvVar4 + uVar7 * 4))) goto LAB_0122f704;
        puVar12 = (undefined8 *)((long)pvVar4 + 0x10);
        puVar13 = (undefined8 *)((long)pvVar5 + 0x10);
        uVar14 = uVar9;
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
        if (uVar9 == uVar7) goto LAB_0122f760;
      }
    }
    lVar3 = uVar7 - uVar9;
    puVar10 = (undefined4 *)((long)pvVar5 + uVar9 * 4);
    puVar11 = (undefined4 *)((long)pvVar4 + uVar9 * 4);
    do {
      lVar3 = lVar3 + -1;
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    } while (lVar3 != 0);
  }
LAB_0122f760:
  if (this[0xa0] != (btTriangleMesh)0x0) {
    btAlignedFreeInternal(pvVar5);
  }
  *(undefined8 *)(this + 0x98) = 0;
LAB_0122f770:
  *(void **)(this + 0x98) = pvVar4;
  this[0xa0] = (btTriangleMesh)0x1;
  *(int *)(this + 0x90) = param_1;
  return;
}

