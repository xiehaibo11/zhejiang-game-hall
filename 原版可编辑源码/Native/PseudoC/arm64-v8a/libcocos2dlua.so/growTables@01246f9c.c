
/* btHashedSimplePairCache::growTables() */

void __thiscall btHashedSimplePairCache::growTables(btHashedSimplePairCache *this)

{
  uint *puVar1;
  size_t __n;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int *piVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  iVar2 = *(int *)(this + 0x10);
  uVar3 = *(uint *)(this + 0x34);
  if (iVar2 <= (int)uVar3) {
    return;
  }
  if (*(int *)(this + 0x38) < iVar2) {
    if (iVar2 == 0) {
      pvVar5 = (void *)0x0;
      uVar7 = uVar3;
    }
    else {
      pvVar5 = (void *)btAlignedAllocInternal((long)iVar2 << 2,0x10);
      uVar7 = *(uint *)(this + 0x34);
    }
    pvVar6 = *(void **)(this + 0x40);
    if ((int)uVar7 < 1) {
      if (pvVar6 != (void *)0x0) goto LAB_01247078;
    }
    else {
      uVar8 = (ulong)(int)uVar7;
      if (uVar7 < 8) {
LAB_0124704c:
        uVar11 = 0;
      }
      else {
        uVar11 = uVar8 & 0xfffffffffffffff8;
        if (uVar11 != 0) {
          if ((pvVar5 < (void *)((long)pvVar6 + uVar8 * 4)) &&
             (pvVar6 < (void *)((long)pvVar5 + uVar8 * 4))) goto LAB_0124704c;
          puVar15 = (undefined8 *)((long)pvVar5 + 0x10);
          puVar16 = (undefined8 *)((long)pvVar6 + 0x10);
          uVar12 = uVar11;
          do {
            puVar4 = puVar16 + -1;
            uVar19 = puVar16[-2];
            uVar21 = puVar16[1];
            uVar20 = *puVar16;
            uVar12 = uVar12 - 8;
            puVar16 = puVar16 + 4;
            puVar15[-1] = *puVar4;
            puVar15[-2] = uVar19;
            puVar15[1] = uVar21;
            *puVar15 = uVar20;
            puVar15 = puVar15 + 4;
          } while (uVar12 != 0);
          if (uVar11 == uVar8) goto LAB_01247078;
        }
      }
      lVar9 = uVar8 - uVar11;
      puVar13 = (undefined4 *)((long)pvVar6 + uVar11 * 4);
      puVar14 = (undefined4 *)((long)pvVar5 + uVar11 * 4);
      do {
        lVar9 = lVar9 + -1;
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      } while (lVar9 != 0);
LAB_01247078:
      if (this[0x48] != (btHashedSimplePairCache)0x0) {
        btAlignedFreeInternal(pvVar6);
      }
    }
    this[0x48] = (btHashedSimplePairCache)0x1;
    *(void **)(this + 0x40) = pvVar5;
    *(int *)(this + 0x38) = iVar2;
  }
  else {
    pvVar5 = *(void **)(this + 0x40);
  }
  uVar8 = (long)iVar2 * 4;
  memset((void *)((long)pvVar5 + (long)(int)uVar3 * 4),0,uVar8 + (long)(int)uVar3 * -4);
  uVar7 = *(uint *)(this + 0x54);
  *(int *)(this + 0x34) = iVar2;
  if (iVar2 <= (int)uVar7) goto LAB_01247200;
  lVar9 = (long)(int)uVar7;
  if (*(int *)(this + 0x58) < iVar2) {
    if (iVar2 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)btAlignedAllocInternal(uVar8,0x10);
      uVar7 = *(uint *)(this + 0x54);
    }
    pvVar6 = *(void **)(this + 0x60);
    if ((int)uVar7 < 1) {
      if (pvVar6 != (void *)0x0) goto LAB_012471cc;
    }
    else {
      uVar11 = (ulong)(int)uVar7;
      if (uVar7 < 8) {
LAB_0124713c:
        uVar12 = 0;
      }
      else {
        uVar12 = uVar11 & 0xfffffffffffffff8;
        if (uVar12 != 0) {
          if ((pvVar5 < (void *)((long)pvVar6 + uVar11 * 4)) &&
             (pvVar6 < (void *)((long)pvVar5 + uVar11 * 4))) goto LAB_0124713c;
          puVar15 = (undefined8 *)((long)pvVar5 + 0x10);
          puVar16 = (undefined8 *)((long)pvVar6 + 0x10);
          uVar18 = uVar12;
          do {
            puVar4 = puVar16 + -1;
            uVar19 = puVar16[-2];
            uVar21 = puVar16[1];
            uVar20 = *puVar16;
            uVar18 = uVar18 - 8;
            puVar16 = puVar16 + 4;
            puVar15[-1] = *puVar4;
            puVar15[-2] = uVar19;
            puVar15[1] = uVar21;
            *puVar15 = uVar20;
            puVar15 = puVar15 + 4;
          } while (uVar18 != 0);
          if (uVar12 == uVar11) goto LAB_012471cc;
        }
      }
      lVar10 = uVar11 - uVar12;
      puVar13 = (undefined4 *)((long)pvVar6 + uVar12 * 4);
      puVar14 = (undefined4 *)((long)pvVar5 + uVar12 * 4);
      do {
        lVar10 = lVar10 + -1;
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      } while (lVar10 != 0);
LAB_012471cc:
      if (this[0x68] != (btHashedSimplePairCache)0x0) {
        btAlignedFreeInternal(pvVar6);
      }
    }
    this[0x68] = (btHashedSimplePairCache)0x1;
    *(void **)(this + 0x60) = pvVar5;
    *(int *)(this + 0x58) = iVar2;
  }
  else {
    pvVar5 = *(void **)(this + 0x60);
  }
  memset((void *)((long)pvVar5 + lVar9 * 4),0,uVar8 + lVar9 * -4);
LAB_01247200:
  *(int *)(this + 0x54) = iVar2;
  if (0 < iVar2) {
    __n = (ulong)(iVar2 - 1) * 4 + 4;
    memset(*(void **)(this + 0x40),0xff,__n);
    memset(*(void **)(this + 0x60),0xff,__n);
  }
  if (0 < (int)uVar3) {
    lVar9 = *(long *)(this + 0x40);
    lVar10 = *(long *)(this + 0x60);
    uVar8 = 0;
    piVar17 = (int *)(*(long *)(this + 0x18) + 4);
    do {
      puVar1 = (uint *)(piVar17 + -1);
      iVar2 = *piVar17;
      piVar17 = piVar17 + 4;
      uVar7 = *puVar1 | iVar2 << 0x10;
      uVar7 = uVar7 + (uVar7 << 0xf ^ 0xffffffff);
      uVar7 = (uVar7 ^ (int)uVar7 >> 10) * 9;
      uVar7 = uVar7 ^ (int)uVar7 >> 6;
      uVar7 = uVar7 + (uVar7 << 0xb ^ 0xffffffff);
      uVar7 = (uVar7 ^ (int)uVar7 >> 0x10) & *(int *)(this + 0x10) - 1U;
      uVar11 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2;
      *(undefined4 *)(lVar10 + uVar8 * 4) = *(undefined4 *)(lVar9 + uVar11);
      *(int *)(lVar9 + uVar11) = (int)uVar8;
      uVar8 = uVar8 + 1;
    } while (uVar3 != uVar8);
  }
  return;
}

