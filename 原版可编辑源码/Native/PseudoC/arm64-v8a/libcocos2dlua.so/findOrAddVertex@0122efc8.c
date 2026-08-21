
/* btTriangleMesh::findOrAddVertex(btVector3 const&, bool) */

ulong __thiscall
btTriangleMesh::findOrAddVertex(btTriangleMesh *this,btVector3 *param_1,bool param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if (this[0xe9] != (btTriangleMesh)0x0) {
    iVar6 = *(int *)(this + 0x6c);
    if ((0 < iVar6) && (param_2)) {
      uVar2 = 0;
      puVar10 = (undefined8 *)(*(long *)(this + 0x78) + 4);
      do {
        fVar21 = *(float *)((long)puVar10 + -4) - *(float *)param_1;
        fVar22 = (float)*puVar10 - (float)*(undefined8 *)(param_1 + 4);
        fVar23 = (float)((ulong)*puVar10 >> 0x20) -
                 (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
        if (fVar21 * fVar21 + fVar22 * fVar22 + fVar23 * fVar23 <= *(float *)(this + 0xec)) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        puVar10 = puVar10 + 2;
      } while ((long)uVar2 < (long)iVar6);
    }
    *(int *)(*(long *)(this + 0x28) + 0x14) = *(int *)(*(long *)(this + 0x28) + 0x14) + 1;
    if (iVar6 == *(int *)(this + 0x70)) {
      uVar8 = iVar6 << 1;
      if (iVar6 == 0) {
        uVar8 = 1;
      }
      if (iVar6 < (int)uVar8) {
        if (uVar8 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = btAlignedAllocInternal
                            (-(ulong)(uVar8 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar8 << 4,0x10);
          iVar6 = *(int *)(this + 0x6c);
        }
        if (0 < iVar6) {
          lVar9 = 0;
          lVar7 = (long)iVar6;
          do {
            lVar7 = lVar7 + -1;
            uVar18 = *(undefined8 *)(*(long *)(this + 0x78) + lVar9);
            ((undefined8 *)(lVar3 + lVar9))[1] = ((undefined8 *)(*(long *)(this + 0x78) + lVar9))[1]
            ;
            *(undefined8 *)(lVar3 + lVar9) = uVar18;
            lVar9 = lVar9 + 0x10;
          } while (lVar7 != 0);
        }
        if (*(void **)(this + 0x78) != (void *)0x0) {
          if (this[0x80] != (btTriangleMesh)0x0) {
            btAlignedFreeInternal(*(void **)(this + 0x78));
          }
          *(undefined8 *)(this + 0x78) = 0;
        }
        iVar6 = *(int *)(this + 0x6c);
        this[0x80] = (btTriangleMesh)0x1;
        *(long *)(this + 0x78) = lVar3;
        *(uint *)(this + 0x70) = uVar8;
      }
    }
    uVar18 = *(undefined8 *)param_1;
    puVar10 = (undefined8 *)(*(long *)(this + 0x78) + (long)iVar6 * 0x10);
    puVar10[1] = *(undefined8 *)(param_1 + 8);
    *puVar10 = uVar18;
    uVar8 = *(uint *)(this + 0x6c);
    *(uint *)(this + 0x6c) = uVar8 + 1;
    *(undefined8 *)(*(long *)(this + 0x28) + 0x18) = *(undefined8 *)(this + 0x78);
    return (ulong)uVar8;
  }
  uVar8 = *(uint *)(this + 0x8c);
  if ((0 < (int)uVar8) && (param_2)) {
    lVar3 = 0;
    puVar10 = (undefined8 *)(*(long *)(this + 0x98) + 4);
    do {
      fVar21 = *(float *)((long)puVar10 + -4) - *(float *)param_1;
      fVar22 = (float)*puVar10 - (float)*(undefined8 *)(param_1 + 4);
      fVar23 = (float)((ulong)*puVar10 >> 0x20) -
               (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
      if (fVar21 * fVar21 + fVar22 * fVar22 + fVar23 * fVar23 <= *(float *)(this + 0xec)) {
        return (ulong)(uint)((int)lVar3 / 3);
      }
      lVar3 = lVar3 + 3;
      puVar10 = (undefined8 *)((long)puVar10 + 0xc);
    } while (lVar3 < (int)uVar8);
  }
  uVar16 = *(uint *)(this + 0x90);
  if (uVar8 == *(uint *)(this + 0x90)) {
    uVar17 = uVar8 << 1;
    if (uVar8 == 0) {
      uVar17 = 1;
    }
    uVar16 = uVar8;
    if ((int)uVar8 < (int)uVar17) {
      if (uVar17 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = (void *)btAlignedAllocInternal
                                   (-(ulong)(uVar17 >> 0x1f) & 0xfffffffc00000000 |
                                    (ulong)uVar17 << 2,0x10);
        uVar8 = *(uint *)(this + 0x8c);
      }
      pvVar5 = *(void **)(this + 0x98);
      if ((int)uVar8 < 1) {
        if (pvVar5 != (void *)0x0) goto LAB_0122f28c;
      }
      else {
        uVar2 = (ulong)(int)uVar8;
        if (uVar8 < 8) {
LAB_0122f230:
          uVar11 = 0;
        }
        else {
          uVar11 = uVar2 & 0xfffffffffffffff8;
          if (uVar11 != 0) {
            if ((pvVar4 < (void *)((long)pvVar5 + uVar2 * 4)) &&
               (pvVar5 < (void *)((long)pvVar4 + uVar2 * 4))) goto LAB_0122f230;
            puVar10 = (undefined8 *)((long)pvVar4 + 0x10);
            puVar14 = (undefined8 *)((long)pvVar5 + 0x10);
            uVar15 = uVar11;
            do {
              puVar1 = puVar14 + -1;
              uVar18 = puVar14[-2];
              uVar20 = puVar14[1];
              uVar19 = *puVar14;
              uVar15 = uVar15 - 8;
              puVar14 = puVar14 + 4;
              puVar10[-1] = *puVar1;
              puVar10[-2] = uVar18;
              puVar10[1] = uVar20;
              *puVar10 = uVar19;
              puVar10 = puVar10 + 4;
            } while (uVar15 != 0);
            if (uVar11 == uVar2) goto LAB_0122f28c;
          }
        }
        lVar3 = uVar2 - uVar11;
        puVar12 = (undefined4 *)((long)pvVar5 + uVar11 * 4);
        puVar13 = (undefined4 *)((long)pvVar4 + uVar11 * 4);
        do {
          lVar3 = lVar3 + -1;
          *puVar13 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        } while (lVar3 != 0);
LAB_0122f28c:
        if (this[0xa0] != (btTriangleMesh)0x0) {
          btAlignedFreeInternal(pvVar5);
          uVar8 = *(uint *)(this + 0x8c);
        }
        *(undefined8 *)(this + 0x98) = 0;
      }
      *(void **)(this + 0x98) = pvVar4;
      this[0xa0] = (btTriangleMesh)0x1;
      *(uint *)(this + 0x90) = uVar17;
      uVar16 = uVar17;
    }
  }
  pvVar4 = *(void **)(this + 0x98);
  uVar17 = uVar8 + 1;
  *(undefined4 *)((long)pvVar4 + (long)(int)uVar8 * 4) = *(undefined4 *)param_1;
  *(uint *)(this + 0x8c) = uVar17;
  if (uVar17 == uVar16) {
    uVar8 = uVar16 << 1;
    if (uVar16 == 0) {
      uVar8 = 1;
    }
    uVar17 = uVar16;
    if ((int)uVar16 < (int)uVar8) {
      if (uVar8 == 0) {
        pvVar5 = (void *)0x0;
        if (0 < (int)uVar16) goto LAB_0122f304;
LAB_0122f37c:
        if (pvVar4 != (void *)0x0) goto LAB_0122f3b0;
      }
      else {
        pvVar5 = (void *)btAlignedAllocInternal
                                   (-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2
                                    ,0x10);
        uVar16 = *(uint *)(this + 0x8c);
        pvVar4 = *(void **)(this + 0x98);
        if ((int)uVar16 < 1) goto LAB_0122f37c;
LAB_0122f304:
        uVar2 = (ulong)(int)uVar16;
        if (uVar16 < 8) {
LAB_0122f334:
          uVar11 = 0;
LAB_0122f338:
          lVar3 = uVar2 - uVar11;
          puVar12 = (undefined4 *)((long)pvVar4 + uVar11 * 4);
          puVar13 = (undefined4 *)((long)pvVar5 + uVar11 * 4);
          do {
            lVar3 = lVar3 + -1;
            *puVar13 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar13 = puVar13 + 1;
          } while (lVar3 != 0);
        }
        else {
          uVar11 = uVar2 & 0xfffffffffffffff8;
          if (uVar11 == 0) goto LAB_0122f338;
          if ((pvVar5 < (void *)((long)pvVar4 + uVar2 * 4)) &&
             (pvVar4 < (void *)((long)pvVar5 + uVar2 * 4))) goto LAB_0122f334;
          puVar10 = (undefined8 *)((long)pvVar5 + 0x10);
          puVar14 = (undefined8 *)((long)pvVar4 + 0x10);
          uVar15 = uVar11;
          do {
            puVar1 = puVar14 + -1;
            uVar18 = puVar14[-2];
            uVar20 = puVar14[1];
            uVar19 = *puVar14;
            uVar15 = uVar15 - 8;
            puVar14 = puVar14 + 4;
            puVar10[-1] = *puVar1;
            puVar10[-2] = uVar18;
            puVar10[1] = uVar20;
            *puVar10 = uVar19;
            puVar10 = puVar10 + 4;
          } while (uVar15 != 0);
          if (uVar11 != uVar2) goto LAB_0122f338;
        }
LAB_0122f3b0:
        if (this[0xa0] != (btTriangleMesh)0x0) {
          btAlignedFreeInternal(pvVar4);
          uVar16 = *(uint *)(this + 0x8c);
        }
        *(undefined8 *)(this + 0x98) = 0;
      }
      pvVar4 = pvVar5;
      this[0xa0] = (btTriangleMesh)0x1;
      *(void **)(this + 0x98) = pvVar4;
      *(uint *)(this + 0x90) = uVar8;
      uVar17 = uVar16;
      uVar16 = uVar8;
    }
  }
  uVar8 = uVar17 + 1;
  *(undefined4 *)((long)pvVar4 + (long)(int)uVar17 * 4) = *(undefined4 *)(param_1 + 4);
  *(uint *)(this + 0x8c) = uVar8;
  if (uVar8 != uVar16) goto LAB_0122f4f4;
  uVar17 = uVar16 << 1;
  if (uVar16 == 0) {
    uVar17 = 1;
  }
  uVar8 = uVar16;
  if ((int)uVar17 <= (int)uVar16) goto LAB_0122f4f4;
  if (uVar17 == 0) {
    pvVar5 = (void *)0x0;
    if (0 < (int)uVar16) goto LAB_0122f42c;
LAB_0122f490:
    if (pvVar4 != (void *)0x0) goto LAB_0122f4c4;
  }
  else {
    pvVar5 = (void *)btAlignedAllocInternal
                               (-(ulong)(uVar17 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar17 << 2,
                                0x10);
    uVar8 = *(uint *)(this + 0x8c);
    pvVar4 = *(void **)(this + 0x98);
    if ((int)uVar8 < 1) goto LAB_0122f490;
LAB_0122f42c:
    uVar2 = (ulong)(int)uVar8;
    if (uVar8 < 8) {
LAB_0122f45c:
      uVar11 = 0;
LAB_0122f460:
      lVar3 = uVar2 - uVar11;
      puVar12 = (undefined4 *)((long)pvVar4 + uVar11 * 4);
      puVar13 = (undefined4 *)((long)pvVar5 + uVar11 * 4);
      do {
        lVar3 = lVar3 + -1;
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      } while (lVar3 != 0);
    }
    else {
      uVar11 = uVar2 & 0xfffffffffffffff8;
      if (uVar11 == 0) goto LAB_0122f460;
      if ((pvVar5 < (void *)((long)pvVar4 + uVar2 * 4)) &&
         (pvVar4 < (void *)((long)pvVar5 + uVar2 * 4))) goto LAB_0122f45c;
      puVar10 = (undefined8 *)((long)pvVar5 + 0x10);
      puVar14 = (undefined8 *)((long)pvVar4 + 0x10);
      uVar15 = uVar11;
      do {
        puVar1 = puVar14 + -1;
        uVar18 = puVar14[-2];
        uVar20 = puVar14[1];
        uVar19 = *puVar14;
        uVar15 = uVar15 - 8;
        puVar14 = puVar14 + 4;
        puVar10[-1] = *puVar1;
        puVar10[-2] = uVar18;
        puVar10[1] = uVar20;
        *puVar10 = uVar19;
        puVar10 = puVar10 + 4;
      } while (uVar15 != 0);
      if (uVar11 != uVar2) goto LAB_0122f460;
    }
LAB_0122f4c4:
    if (this[0xa0] != (btTriangleMesh)0x0) {
      btAlignedFreeInternal(pvVar4);
      uVar8 = *(uint *)(this + 0x8c);
    }
    *(undefined8 *)(this + 0x98) = 0;
  }
  pvVar4 = pvVar5;
  this[0xa0] = (btTriangleMesh)0x1;
  *(void **)(this + 0x98) = pvVar4;
  *(uint *)(this + 0x90) = uVar17;
LAB_0122f4f4:
  *(undefined4 *)((long)pvVar4 + (long)(int)uVar8 * 4) = *(undefined4 *)(param_1 + 8);
  lVar3 = *(long *)(this + 0x28);
  *(uint *)(this + 0x8c) = uVar8 + 1;
  *(void **)(lVar3 + 0x18) = pvVar4;
  *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
  return (ulong)((int)(uVar8 + 1) / 3 - 1);
}

