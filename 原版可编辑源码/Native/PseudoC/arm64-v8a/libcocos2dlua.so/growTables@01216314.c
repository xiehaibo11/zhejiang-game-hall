
/* btHashedOverlappingPairCache::growTables() */

void __thiscall btHashedOverlappingPairCache::growTables(btHashedOverlappingPairCache *this)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *pvVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  iVar3 = *(int *)(this + 0x10);
  uVar4 = *(uint *)(this + 0x3c);
  if (iVar3 <= (int)uVar4) {
    return;
  }
  if (*(int *)(this + 0x40) < iVar3) {
    if (iVar3 == 0) {
      pvVar6 = (void *)0x0;
      uVar8 = uVar4;
    }
    else {
      pvVar6 = (void *)btAlignedAllocInternal((long)iVar3 << 2,0x10);
      uVar8 = *(uint *)(this + 0x3c);
    }
    pvVar7 = *(void **)(this + 0x48);
    if ((int)uVar8 < 1) {
      if (pvVar7 != (void *)0x0) goto LAB_012163f0;
    }
    else {
      uVar9 = (ulong)(int)uVar8;
      if (uVar8 < 8) {
LAB_012163c4:
        uVar12 = 0;
      }
      else {
        uVar12 = uVar9 & 0xfffffffffffffff8;
        if (uVar12 != 0) {
          if ((pvVar6 < (void *)((long)pvVar7 + uVar9 * 4)) &&
             (pvVar7 < (void *)((long)pvVar6 + uVar9 * 4))) goto LAB_012163c4;
          puVar16 = (undefined8 *)((long)pvVar6 + 0x10);
          puVar17 = (undefined8 *)((long)pvVar7 + 0x10);
          uVar13 = uVar12;
          do {
            puVar5 = puVar17 + -1;
            uVar20 = puVar17[-2];
            uVar22 = puVar17[1];
            uVar21 = *puVar17;
            uVar13 = uVar13 - 8;
            puVar17 = puVar17 + 4;
            puVar16[-1] = *puVar5;
            puVar16[-2] = uVar20;
            puVar16[1] = uVar22;
            *puVar16 = uVar21;
            puVar16 = puVar16 + 4;
          } while (uVar13 != 0);
          if (uVar12 == uVar9) goto LAB_012163f0;
        }
      }
      lVar10 = uVar9 - uVar12;
      puVar14 = (undefined4 *)((long)pvVar7 + uVar12 * 4);
      puVar15 = (undefined4 *)((long)pvVar6 + uVar12 * 4);
      do {
        lVar10 = lVar10 + -1;
        *puVar15 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
      } while (lVar10 != 0);
LAB_012163f0:
      if (this[0x50] != (btHashedOverlappingPairCache)0x0) {
        btAlignedFreeInternal(pvVar7);
      }
    }
    this[0x50] = (btHashedOverlappingPairCache)0x1;
    *(void **)(this + 0x48) = pvVar6;
    *(int *)(this + 0x40) = iVar3;
  }
  else {
    pvVar6 = *(void **)(this + 0x48);
  }
  uVar9 = (long)iVar3 * 4;
  memset((void *)((long)pvVar6 + (long)(int)uVar4 * 4),0,uVar9 + (long)(int)uVar4 * -4);
  uVar8 = *(uint *)(this + 0x5c);
  *(int *)(this + 0x3c) = iVar3;
  if (iVar3 <= (int)uVar8) goto LAB_01216578;
  lVar10 = (long)(int)uVar8;
  if (*(int *)(this + 0x60) < iVar3) {
    if (iVar3 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      pvVar6 = (void *)btAlignedAllocInternal(uVar9,0x10);
      uVar8 = *(uint *)(this + 0x5c);
    }
    pvVar7 = *(void **)(this + 0x68);
    if ((int)uVar8 < 1) {
      if (pvVar7 != (void *)0x0) goto LAB_01216544;
    }
    else {
      uVar12 = (ulong)(int)uVar8;
      if (uVar8 < 8) {
LAB_012164b4:
        uVar13 = 0;
      }
      else {
        uVar13 = uVar12 & 0xfffffffffffffff8;
        if (uVar13 != 0) {
          if ((pvVar6 < (void *)((long)pvVar7 + uVar12 * 4)) &&
             (pvVar7 < (void *)((long)pvVar6 + uVar12 * 4))) goto LAB_012164b4;
          puVar16 = (undefined8 *)((long)pvVar6 + 0x10);
          puVar17 = (undefined8 *)((long)pvVar7 + 0x10);
          uVar19 = uVar13;
          do {
            puVar5 = puVar17 + -1;
            uVar20 = puVar17[-2];
            uVar22 = puVar17[1];
            uVar21 = *puVar17;
            uVar19 = uVar19 - 8;
            puVar17 = puVar17 + 4;
            puVar16[-1] = *puVar5;
            puVar16[-2] = uVar20;
            puVar16[1] = uVar22;
            *puVar16 = uVar21;
            puVar16 = puVar16 + 4;
          } while (uVar19 != 0);
          if (uVar13 == uVar12) goto LAB_01216544;
        }
      }
      lVar11 = uVar12 - uVar13;
      puVar14 = (undefined4 *)((long)pvVar7 + uVar13 * 4);
      puVar15 = (undefined4 *)((long)pvVar6 + uVar13 * 4);
      do {
        lVar11 = lVar11 + -1;
        *puVar15 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
      } while (lVar11 != 0);
LAB_01216544:
      if (this[0x70] != (btHashedOverlappingPairCache)0x0) {
        btAlignedFreeInternal(pvVar7);
      }
    }
    this[0x70] = (btHashedOverlappingPairCache)0x1;
    *(void **)(this + 0x68) = pvVar6;
    *(int *)(this + 0x60) = iVar3;
  }
  else {
    pvVar6 = *(void **)(this + 0x68);
  }
  memset((void *)((long)pvVar6 + lVar10 * 4),0,uVar9 + lVar10 * -4);
LAB_01216578:
  *(int *)(this + 0x5c) = iVar3;
  if (0 < iVar3) {
    __n = (ulong)(iVar3 - 1) * 4 + 4;
    memset(*(void **)(this + 0x48),0xff,__n);
    memset(*(void **)(this + 0x68),0xff,__n);
  }
  if (0 < (int)uVar4) {
    lVar10 = *(long *)(this + 0x48);
    lVar11 = *(long *)(this + 0x68);
    uVar9 = 0;
    plVar18 = (long *)(*(long *)(this + 0x18) + 8);
    do {
      plVar1 = plVar18 + -1;
      lVar2 = *plVar18;
      plVar18 = plVar18 + 4;
      uVar8 = *(uint *)(*plVar1 + 0x18) | *(int *)(lVar2 + 0x18) << 0x10;
      uVar8 = uVar8 + (uVar8 << 0xf ^ 0xffffffff);
      uVar8 = (uVar8 ^ (int)uVar8 >> 10) * 9;
      uVar8 = uVar8 ^ (int)uVar8 >> 6;
      uVar8 = uVar8 + (uVar8 << 0xb ^ 0xffffffff);
      uVar8 = (uVar8 ^ (int)uVar8 >> 0x10) & *(int *)(this + 0x10) - 1U;
      uVar12 = -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2;
      *(undefined4 *)(lVar11 + uVar9 * 4) = *(undefined4 *)(lVar10 + uVar12);
      *(int *)(lVar10 + uVar12) = (int)uVar9;
      uVar9 = uVar9 + 1;
    } while (uVar4 != uVar9);
  }
  return;
}

