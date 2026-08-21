
undefined8 floor1_inverse2(long *param_1,long param_2,int *param_3,void *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint *puVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  
  lVar10 = *(long *)(*(long *)(*param_1 + 0x30) + param_1[0xb] * 8);
  if (lVar10 < 0) {
    lVar10 = lVar10 + 1;
  }
  uVar12 = lVar10 >> 1;
  if (param_3 == (int *)0x0) {
    memset(param_4,0,-(uVar12 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar12 & 0xffffffff) << 2);
    return 0;
  }
  iVar21 = *(int *)(param_2 + 0x34);
  iVar9 = *(int *)(param_2 + 0x38) * *param_3;
  uVar11 = (uint)uVar12;
  if (iVar21 < 2) {
    uVar13 = 0;
    if ((int)uVar11 < 1) {
      return 1;
    }
  }
  else {
    lVar15 = *(long *)(param_2 + 0x18);
    uVar18 = 0;
    uVar13 = 0;
    lVar10 = 1;
    iVar8 = iVar9;
    do {
      uVar12 = (ulong)*(byte *)(lVar15 + lVar10);
      iVar9 = iVar8;
      uVar2 = uVar18;
      if ((uint)param_3[uVar12] >> 0xf == 0) {
        uVar13 = (uint)*(ushort *)(*(long *)(param_2 + 0x10) + uVar12 * 2);
        iVar9 = *(int *)(param_2 + 0x38) * (param_3[uVar12] & 0x7fffU);
        uVar2 = uVar13;
        if ((int)uVar11 <= (int)uVar13) {
          uVar2 = uVar11;
        }
        iVar22 = uVar2 - uVar18;
        uVar2 = uVar13;
        if (0 < iVar22) {
          iVar5 = iVar9 - iVar8;
          uVar6 = uVar13 - uVar18;
          iVar21 = 0;
          if (uVar6 != 0) {
            iVar21 = iVar5 / (int)uVar6;
          }
          iVar4 = iVar21 * uVar6;
          iVar3 = -iVar4;
          if (-1 < iVar4) {
            iVar3 = iVar4;
          }
          iVar4 = -iVar5;
          if (-1 < iVar5) {
            iVar4 = iVar5;
          }
          iVar7 = 0;
          if (-1 < iVar5) {
            iVar7 = uVar6 - 1;
          }
          piVar14 = (int *)(FLOOR_fromdB_LOOKUP + (long)iVar8 * 4);
          iVar8 = uVar6 - (iVar4 - iVar3);
          if (-1 < iVar5) {
            iVar8 = iVar4 - iVar3;
          }
          puVar19 = (uint *)((long)param_4 + (long)(int)uVar18 * 4);
          do {
            iVar3 = *piVar14;
            piVar1 = piVar14 + (iVar21 + (iVar5 >> 0x1f));
            iVar7 = iVar7 - iVar8;
            iVar22 = iVar22 + -1;
            piVar14 = piVar1 + 1;
            if (-1 < iVar7) {
              piVar14 = piVar1;
            }
            *puVar19 = (uint)((ulong)((long)iVar3 * (long)(int)*puVar19) >> 0xf) & 0xfffe0000 |
                       (uint)((long)iVar3 * (long)(int)*puVar19) >> 0xf;
            iVar7 = (uVar6 & iVar7 >> 0x1f) + iVar7;
            puVar19 = puVar19 + 1;
          } while (0 < iVar22);
          iVar21 = *(int *)(param_2 + 0x34);
        }
      }
      uVar18 = uVar2;
      lVar10 = lVar10 + 1;
      iVar8 = iVar9;
    } while (lVar10 < iVar21);
    if ((int)uVar11 <= (int)uVar13) {
      return 1;
    }
  }
  lVar10 = (long)(int)uVar13;
  uVar12 = (int)uVar11 - lVar10;
  if (7 < uVar12) {
    uVar16 = uVar12 & 0xfffffffffffffff8;
    lVar15 = lVar10 * 4;
    lVar10 = uVar16 + lVar10;
    puVar17 = (undefined8 *)((long)param_4 + lVar15 + 0x10);
    uVar20 = uVar16;
    do {
      uVar20 = uVar20 - 8;
      puVar17[-1] = CONCAT44((int)((ulong)puVar17[-1] >> 0x20) * iVar9,(int)puVar17[-1] * iVar9);
      puVar17[-2] = CONCAT44((int)((ulong)puVar17[-2] >> 0x20) * iVar9,(int)puVar17[-2] * iVar9);
      puVar17[1] = CONCAT44((int)((ulong)puVar17[1] >> 0x20) * iVar9,(int)puVar17[1] * iVar9);
      *puVar17 = CONCAT44((int)((ulong)*puVar17 >> 0x20) * iVar9,(int)*puVar17 * iVar9);
      puVar17 = puVar17 + 4;
    } while (uVar20 != 0);
    if (uVar12 == uVar16) {
      return 1;
    }
  }
  lVar15 = (int)uVar11 - lVar10;
  piVar14 = (int *)((long)param_4 + lVar10 * 4);
  do {
    lVar15 = lVar15 + -1;
    *piVar14 = *piVar14 * iVar9;
    piVar14 = piVar14 + 1;
  } while (lVar15 != 0);
  return 1;
}

