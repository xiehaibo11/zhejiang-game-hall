
undefined8 floor1_inverse2(long *param_1,long param_2,int *param_3,void *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  int *piVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint *puVar20;
  ulong uVar21;
  int iVar22;
  int iVar23;
  
  lVar11 = *(long *)(*(long *)(*param_1 + 0x30) + param_1[0xb] * 8);
  if (lVar11 < 0) {
    lVar11 = lVar11 + 1;
  }
  uVar13 = lVar11 >> 1;
  if (param_3 == (int *)0x0) {
    memset(param_4,0,-(uVar13 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar13 & 0xffffffff) << 2);
    return 0;
  }
  iVar22 = *(int *)(param_2 + 0x34);
  uVar10 = *(int *)(param_2 + 0x38) * *param_3;
  uVar12 = (uint)uVar13;
  if (iVar22 < 2) {
    uVar14 = 0;
  }
  else {
    lVar16 = *(long *)(param_2 + 0x18);
    uVar19 = 0;
    uVar14 = 0;
    lVar11 = 1;
    uVar9 = uVar10;
    do {
      uVar13 = (ulong)*(byte *)(lVar16 + lVar11);
      uVar10 = uVar9;
      uVar7 = uVar19;
      if ((uint)param_3[uVar13] >> 0xf == 0) {
        uVar14 = (uint)*(ushort *)(*(long *)(param_2 + 0x10) + uVar13 * 2);
        uVar10 = *(int *)(param_2 + 0x38) * (param_3[uVar13] & 0x7fffU);
        uVar6 = uVar14;
        if ((int)uVar12 <= (int)uVar14) {
          uVar6 = uVar12;
        }
        uVar7 = uVar14;
        if (((uVar10 | uVar9) < 0x100) && (iVar23 = uVar6 - uVar19, 0 < iVar23)) {
          iVar5 = uVar10 - uVar9;
          uVar6 = uVar14 - uVar19;
          iVar22 = 0;
          if (uVar6 != 0) {
            iVar22 = iVar5 / (int)uVar6;
          }
          iVar4 = iVar22 * uVar6;
          iVar3 = -iVar4;
          if (-1 < iVar4) {
            iVar3 = iVar4;
          }
          iVar4 = -iVar5;
          if (-1 < iVar5) {
            iVar4 = iVar5;
          }
          iVar8 = 0;
          if (-1 < iVar5) {
            iVar8 = uVar6 - 1;
          }
          piVar15 = (int *)(FLOOR_fromdB_LOOKUP + (long)(int)uVar9 * 4);
          iVar2 = uVar6 - (iVar4 - iVar3);
          if (-1 < iVar5) {
            iVar2 = iVar4 - iVar3;
          }
          puVar20 = (uint *)((long)param_4 + (long)(int)uVar19 * 4);
          do {
            iVar3 = *piVar15;
            piVar1 = piVar15 + (iVar22 + (iVar5 >> 0x1f));
            iVar8 = iVar8 - iVar2;
            iVar23 = iVar23 + -1;
            piVar15 = piVar1 + 1;
            if (-1 < iVar8) {
              piVar15 = piVar1;
            }
            *puVar20 = (uint)((ulong)((long)iVar3 * (long)(int)*puVar20) >> 0xf) & 0xfffe0000 |
                       (uint)((long)iVar3 * (long)(int)*puVar20) >> 0xf;
            iVar8 = (uVar6 & iVar8 >> 0x1f) + iVar8;
            puVar20 = puVar20 + 1;
          } while (0 < iVar23);
          iVar22 = *(int *)(param_2 + 0x34);
        }
      }
      uVar19 = uVar7;
      lVar11 = lVar11 + 1;
      uVar9 = uVar10;
    } while (lVar11 < iVar22);
  }
  if ((int)uVar14 < (int)uVar12) {
    lVar11 = (long)(int)uVar14;
    uVar13 = (int)uVar12 - lVar11;
    if (7 < uVar13) {
      uVar17 = uVar13 & 0xfffffffffffffff8;
      lVar16 = lVar11 * 4;
      lVar11 = uVar17 + lVar11;
      puVar18 = (undefined8 *)((long)param_4 + lVar16 + 0x10);
      uVar21 = uVar17;
      do {
        uVar21 = uVar21 - 8;
        puVar18[-1] = CONCAT44((int)((ulong)puVar18[-1] >> 0x20) * uVar10,(int)puVar18[-1] * uVar10)
        ;
        puVar18[-2] = CONCAT44((int)((ulong)puVar18[-2] >> 0x20) * uVar10,(int)puVar18[-2] * uVar10)
        ;
        puVar18[1] = CONCAT44((int)((ulong)puVar18[1] >> 0x20) * uVar10,(int)puVar18[1] * uVar10);
        *puVar18 = CONCAT44((int)((ulong)*puVar18 >> 0x20) * uVar10,(int)*puVar18 * uVar10);
        puVar18 = puVar18 + 4;
      } while (uVar21 != 0);
      if (uVar13 == uVar17) {
        return 1;
      }
    }
    lVar16 = (int)uVar12 - lVar11;
    piVar15 = (int *)((long)param_4 + lVar11 * 4);
    do {
      lVar16 = lVar16 + -1;
      *piVar15 = *piVar15 * uVar10;
      piVar15 = piVar15 + 1;
    } while (lVar16 != 0);
  }
  return 1;
}

