
/* btTriangleMesh::addIndex(int) */

void __thiscall btTriangleMesh::addIndex(btTriangleMesh *this,int param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  btTriangleMesh *pbVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  undefined2 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  if (this[0xe8] == (btTriangleMesh)0x0) {
    uVar5 = *(uint *)(this + 0xcc);
    if (uVar5 == *(uint *)(this + 0xd0)) {
      uVar1 = uVar5 << 1;
      if (uVar5 == 0) {
        uVar1 = 1;
      }
      if ((int)uVar5 < (int)uVar1) {
        if (uVar1 == 0) {
          pvVar3 = (void *)0x0;
        }
        else {
          pvVar3 = (void *)btAlignedAllocInternal
                                     (-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 |
                                      (ulong)uVar1 << 1,0x10);
          uVar5 = *(uint *)(this + 0xcc);
        }
        pvVar4 = *(void **)(this + 0xd8);
        if ((int)uVar5 < 1) {
          if (pvVar4 != (void *)0x0) goto LAB_0122ef74;
        }
        else {
          uVar6 = (ulong)(int)uVar5;
          if (uVar5 < 0x10) {
LAB_0122eee8:
            uVar8 = 0;
          }
          else {
            uVar8 = uVar6 & 0xfffffffffffffff0;
            if (uVar8 != 0) {
              if ((pvVar3 < (void *)((long)pvVar4 + uVar6 * 2)) &&
                 (pvVar4 < (void *)((long)pvVar3 + uVar6 * 2))) goto LAB_0122eee8;
              puVar13 = (undefined8 *)((long)pvVar3 + 0x10);
              puVar15 = (undefined8 *)((long)pvVar4 + 0x10);
              uVar16 = uVar8;
              do {
                puVar2 = puVar15 + -1;
                uVar17 = puVar15[-2];
                uVar19 = puVar15[1];
                uVar18 = *puVar15;
                uVar16 = uVar16 - 0x10;
                puVar15 = puVar15 + 4;
                puVar13[-1] = *puVar2;
                puVar13[-2] = uVar17;
                puVar13[1] = uVar19;
                *puVar13 = uVar18;
                puVar13 = puVar13 + 4;
              } while (uVar16 != 0);
              if (uVar8 == uVar6) goto LAB_0122ef74;
            }
          }
          lVar7 = uVar6 - uVar8;
          puVar12 = (undefined2 *)((long)pvVar4 + uVar8 * 2);
          puVar14 = (undefined2 *)((long)pvVar3 + uVar8 * 2);
          do {
            lVar7 = lVar7 + -1;
            *puVar14 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar14 = puVar14 + 1;
          } while (lVar7 != 0);
LAB_0122ef74:
          if (this[0xe0] != (btTriangleMesh)0x0) {
            btAlignedFreeInternal(pvVar4);
            uVar5 = *(uint *)(this + 0xcc);
          }
          *(undefined8 *)(this + 0xd8) = 0;
        }
        *(void **)(this + 0xd8) = pvVar3;
        this[0xe0] = (btTriangleMesh)0x1;
        *(uint *)(this + 0xd0) = uVar1;
      }
    }
    pbVar10 = this + 0xd8;
    *(short *)(*(long *)pbVar10 + (long)(int)uVar5 * 2) = (short)param_1;
    *(uint *)(this + 0xcc) = uVar5 + 1;
    goto LAB_0122efac;
  }
  uVar5 = *(uint *)(this + 0xac);
  if (uVar5 == *(uint *)(this + 0xb0)) {
    uVar1 = uVar5 << 1;
    if (uVar5 == 0) {
      uVar1 = 1;
    }
    if ((int)uVar5 < (int)uVar1) {
      if (uVar1 == 0) {
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = (void *)btAlignedAllocInternal
                                   (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2
                                    ,0x10);
        uVar5 = *(uint *)(this + 0xac);
      }
      pvVar4 = *(void **)(this + 0xb8);
      if ((int)uVar5 < 1) {
        if (pvVar4 != (void *)0x0) goto LAB_0122ee68;
      }
      else {
        uVar6 = (ulong)(int)uVar5;
        if (uVar5 < 8) {
LAB_0122ee3c:
          uVar8 = 0;
        }
        else {
          uVar8 = uVar6 & 0xfffffffffffffff8;
          if (uVar8 != 0) {
            if ((pvVar3 < (void *)((long)pvVar4 + uVar6 * 4)) &&
               (pvVar4 < (void *)((long)pvVar3 + uVar6 * 4))) goto LAB_0122ee3c;
            puVar13 = (undefined8 *)((long)pvVar3 + 0x10);
            puVar15 = (undefined8 *)((long)pvVar4 + 0x10);
            uVar16 = uVar8;
            do {
              puVar2 = puVar15 + -1;
              uVar17 = puVar15[-2];
              uVar19 = puVar15[1];
              uVar18 = *puVar15;
              uVar16 = uVar16 - 8;
              puVar15 = puVar15 + 4;
              puVar13[-1] = *puVar2;
              puVar13[-2] = uVar17;
              puVar13[1] = uVar19;
              *puVar13 = uVar18;
              puVar13 = puVar13 + 4;
            } while (uVar16 != 0);
            if (uVar8 == uVar6) goto LAB_0122ee68;
          }
        }
        lVar7 = uVar6 - uVar8;
        puVar9 = (undefined4 *)((long)pvVar4 + uVar8 * 4);
        puVar11 = (undefined4 *)((long)pvVar3 + uVar8 * 4);
        do {
          lVar7 = lVar7 + -1;
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        } while (lVar7 != 0);
LAB_0122ee68:
        if (this[0xc0] != (btTriangleMesh)0x0) {
          btAlignedFreeInternal(pvVar4);
        }
        uVar5 = *(uint *)(this + 0xac);
        *(undefined8 *)(this + 0xb8) = 0;
      }
      *(void **)(this + 0xb8) = pvVar3;
      this[0xc0] = (btTriangleMesh)0x1;
      *(uint *)(this + 0xb0) = uVar1;
    }
  }
  pbVar10 = this + 0xb8;
  *(int *)(*(long *)pbVar10 + (long)(int)uVar5 * 4) = param_1;
  *(int *)(this + 0xac) = *(int *)(this + 0xac) + 1;
LAB_0122efac:
  *(undefined8 *)(*(long *)(this + 0x28) + 8) = *(undefined8 *)pbVar10;
  return;
}

