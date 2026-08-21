
/* btHashedSimplePairCache::removeOverlappingPair(int, int) */

undefined8 __thiscall
btHashedSimplePairCache::removeOverlappingPair
          (btHashedSimplePairCache *this,int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int *piVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  
  uVar3 = param_1 | param_2 << 0x10;
  gRemoveSimplePairs = gRemoveSimplePairs + 1;
  uVar3 = uVar3 + (uVar3 << 0xf ^ 0xffffffff);
  uVar3 = (uVar3 ^ (int)uVar3 >> 10) * 9;
  uVar3 = uVar3 ^ (int)uVar3 >> 6;
  lVar10 = *(long *)(this + 0x40);
  uVar3 = uVar3 + (uVar3 << 0xb ^ 0xffffffff);
  piVar13 = (int *)(lVar10 + (long)(int)(*(int *)(this + 0x10) - 1U & (uVar3 ^ (int)uVar3 >> 0x10))
                             * 4);
  iVar12 = *piVar13;
  if (iVar12 == -1) {
    return 0;
  }
  lVar8 = *(long *)(this + 0x18);
  iVar7 = iVar12;
  while( true ) {
    piVar1 = (int *)(lVar8 + (long)iVar7 * 0x10);
    lVar9 = (long)iVar7;
    if ((*piVar1 == param_1) && (piVar1[1] == param_2)) break;
    iVar7 = *(int *)(*(long *)(this + 0x60) + lVar9 * 4);
    if (iVar7 == -1) {
      return 0;
    }
  }
  uVar6 = 0;
  if (piVar1 != (int *)0x0) {
    uVar6 = *(undefined8 *)(lVar8 + lVar9 * 0x10 + 8);
    lVar11 = *(long *)(this + 0x60);
    if (iVar12 == iVar7) {
      iVar12 = *(int *)(lVar11 + lVar9 * 4);
    }
    else {
      do {
        iVar15 = iVar12;
        iVar12 = *(int *)(lVar11 + (long)iVar15 * 4);
      } while (iVar12 != iVar7);
      iVar12 = *(int *)(lVar11 + lVar9 * 4);
      if (iVar15 != -1) {
        piVar13 = (int *)(lVar11 + (long)iVar15 * 4);
      }
    }
    *piVar13 = iVar12;
    lVar14 = (long)*(int *)(this + 0xc) + -1;
    iVar12 = (int)lVar14;
    if (iVar12 == iVar7) {
      *(int *)(this + 0xc) = iVar7;
      return uVar6;
    }
    puVar2 = (uint *)(lVar8 + lVar14 * 0x10);
    uVar3 = *puVar2 | puVar2[1] << 0x10;
    uVar3 = uVar3 + (uVar3 << 0xf ^ 0xffffffff);
    uVar3 = (uVar3 ^ (int)uVar3 >> 10) * 9;
    uVar3 = uVar3 ^ (int)uVar3 >> 6;
    uVar3 = uVar3 + (uVar3 << 0xb ^ 0xffffffff);
    uVar3 = (uVar3 ^ (int)uVar3 >> 0x10) & *(int *)(this + 0x10) - 1U;
    piVar13 = (int *)(lVar10 + (long)(int)uVar3 * 4);
    iVar15 = *piVar13;
    if (*piVar13 == iVar12) {
      iVar12 = *(int *)(lVar11 + lVar14 * 4);
    }
    else {
      do {
        iVar16 = iVar15;
        iVar15 = *(int *)(lVar11 + (long)iVar16 * 4);
      } while (iVar15 != iVar12);
      iVar12 = *(int *)(lVar11 + lVar14 * 4);
      if (iVar16 != -1) {
        piVar13 = (int *)(lVar11 + (long)iVar16 * 4);
      }
    }
    *piVar13 = iVar12;
    puVar4 = (undefined8 *)(lVar8 + lVar14 * 0x10);
    uVar17 = *puVar4;
    lVar11 = (long)(int)uVar3 * 4;
    puVar5 = (undefined8 *)(lVar8 + lVar9 * 0x10);
    puVar5[1] = puVar4[1];
    *puVar5 = uVar17;
    lVar10 = *(long *)(this + 0x40);
    *(undefined4 *)(*(long *)(this + 0x60) + lVar9 * 4) = *(undefined4 *)(lVar10 + lVar11);
    *(int *)(lVar10 + lVar11) = iVar7;
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
  }
  return uVar6;
}

