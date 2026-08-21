
/* btHashMap<btInternalVertexPair, btInternalEdge>::growTables(btInternalVertexPair const&) */

void btHashMap<btInternalVertexPair,btInternalEdge>::growTables(btInternalVertexPair *param_1)

{
  size_t __n;
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ushort *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  iVar1 = *(int *)(param_1 + 0x48);
  uVar2 = *(uint *)(param_1 + 4);
  if (iVar1 <= (int)uVar2) {
    return;
  }
  if (*(int *)(param_1 + 8) < iVar1) {
    if (iVar1 == 0) {
      pvVar4 = (void *)0x0;
      uVar6 = uVar2;
    }
    else {
      pvVar4 = (void *)btAlignedAllocInternal((long)iVar1 << 2,0x10);
      uVar6 = *(uint *)(param_1 + 4);
    }
    pvVar5 = *(void **)(param_1 + 0x10);
    if ((int)uVar6 < 1) {
      if (pvVar5 != (void *)0x0) goto LAB_01248b78;
    }
    else {
      uVar7 = (ulong)(int)uVar6;
      if (uVar6 < 8) {
LAB_01248b4c:
        uVar10 = 0;
      }
      else {
        uVar10 = uVar7 & 0xfffffffffffffff8;
        if (uVar10 != 0) {
          if ((pvVar4 < (void *)((long)pvVar5 + uVar7 * 4)) &&
             (pvVar5 < (void *)((long)pvVar4 + uVar7 * 4))) goto LAB_01248b4c;
          puVar14 = (undefined8 *)((long)pvVar4 + 0x10);
          puVar15 = (undefined8 *)((long)pvVar5 + 0x10);
          uVar11 = uVar10;
          do {
            puVar3 = puVar15 + -1;
            uVar18 = puVar15[-2];
            uVar20 = puVar15[1];
            uVar19 = *puVar15;
            uVar11 = uVar11 - 8;
            puVar15 = puVar15 + 4;
            puVar14[-1] = *puVar3;
            puVar14[-2] = uVar18;
            puVar14[1] = uVar20;
            *puVar14 = uVar19;
            puVar14 = puVar14 + 4;
          } while (uVar11 != 0);
          if (uVar10 == uVar7) goto LAB_01248b78;
        }
      }
      lVar8 = uVar7 - uVar10;
      puVar12 = (undefined4 *)((long)pvVar5 + uVar10 * 4);
      puVar13 = (undefined4 *)((long)pvVar4 + uVar10 * 4);
      do {
        lVar8 = lVar8 + -1;
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      } while (lVar8 != 0);
LAB_01248b78:
      if (param_1[0x18] != (btInternalVertexPair)0x0) {
        btAlignedFreeInternal(pvVar5);
      }
    }
    param_1[0x18] = (btInternalVertexPair)0x1;
    *(void **)(param_1 + 0x10) = pvVar4;
    *(int *)(param_1 + 8) = iVar1;
  }
  else {
    pvVar4 = *(void **)(param_1 + 0x10);
  }
  uVar7 = (long)iVar1 * 4;
  memset((void *)((long)pvVar4 + (long)(int)uVar2 * 4),0,uVar7 + (long)(int)uVar2 * -4);
  uVar6 = *(uint *)(param_1 + 0x24);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 <= (int)uVar6) goto LAB_01248d00;
  lVar8 = (long)(int)uVar6;
  if (*(int *)(param_1 + 0x28) < iVar1) {
    if (iVar1 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = (void *)btAlignedAllocInternal(uVar7,0x10);
      uVar6 = *(uint *)(param_1 + 0x24);
    }
    pvVar5 = *(void **)(param_1 + 0x30);
    if ((int)uVar6 < 1) {
      if (pvVar5 != (void *)0x0) goto LAB_01248ccc;
    }
    else {
      uVar10 = (ulong)(int)uVar6;
      if (uVar6 < 8) {
LAB_01248c3c:
        uVar11 = 0;
      }
      else {
        uVar11 = uVar10 & 0xfffffffffffffff8;
        if (uVar11 != 0) {
          if ((pvVar4 < (void *)((long)pvVar5 + uVar10 * 4)) &&
             (pvVar5 < (void *)((long)pvVar4 + uVar10 * 4))) goto LAB_01248c3c;
          puVar14 = (undefined8 *)((long)pvVar4 + 0x10);
          puVar15 = (undefined8 *)((long)pvVar5 + 0x10);
          uVar17 = uVar11;
          do {
            puVar3 = puVar15 + -1;
            uVar18 = puVar15[-2];
            uVar20 = puVar15[1];
            uVar19 = *puVar15;
            uVar17 = uVar17 - 8;
            puVar15 = puVar15 + 4;
            puVar14[-1] = *puVar3;
            puVar14[-2] = uVar18;
            puVar14[1] = uVar20;
            *puVar14 = uVar19;
            puVar14 = puVar14 + 4;
          } while (uVar17 != 0);
          if (uVar11 == uVar10) goto LAB_01248ccc;
        }
      }
      lVar9 = uVar10 - uVar11;
      puVar12 = (undefined4 *)((long)pvVar5 + uVar11 * 4);
      puVar13 = (undefined4 *)((long)pvVar4 + uVar11 * 4);
      do {
        lVar9 = lVar9 + -1;
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      } while (lVar9 != 0);
LAB_01248ccc:
      if (param_1[0x38] != (btInternalVertexPair)0x0) {
        btAlignedFreeInternal(pvVar5);
      }
    }
    param_1[0x38] = (btInternalVertexPair)0x1;
    *(void **)(param_1 + 0x30) = pvVar4;
    *(int *)(param_1 + 0x28) = iVar1;
  }
  else {
    pvVar4 = *(void **)(param_1 + 0x30);
  }
  memset((void *)((long)pvVar4 + lVar8 * 4),0,uVar7 + lVar8 * -4);
LAB_01248d00:
  *(int *)(param_1 + 0x24) = iVar1;
  if (0 < iVar1) {
    __n = (ulong)(iVar1 - 1) * 4 + 4;
    memset(*(void **)(param_1 + 0x10),0xff,__n);
    memset(*(void **)(param_1 + 0x30),0xff,__n);
  }
  if (0 < (int)uVar2) {
    lVar8 = *(long *)(param_1 + 0x10);
    lVar9 = *(long *)(param_1 + 0x30);
    uVar7 = 0;
    puVar16 = (ushort *)(*(long *)(param_1 + 0x70) + 2);
    do {
      uVar6 = (int)(short)puVar16[-1] + (uint)*puVar16 * 0x10000 & *(int *)(param_1 + 0x48) - 1U;
      uVar10 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
      *(undefined4 *)(lVar9 + uVar7 * 4) = *(undefined4 *)(lVar8 + uVar10);
      *(int *)(lVar8 + uVar10) = (int)uVar7;
      uVar7 = uVar7 + 1;
      puVar16 = puVar16 + 2;
    } while (uVar2 != uVar7);
  }
  return;
}

