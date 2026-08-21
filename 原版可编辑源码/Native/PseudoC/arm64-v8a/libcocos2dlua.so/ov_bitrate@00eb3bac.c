
long ov_bitrate(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  if (*(int *)(param_1 + 0xb0) < 2) {
    return -0x83;
  }
  uVar3 = *(uint *)(param_1 + 0x28);
  uVar10 = (ulong)uVar3;
  iVar9 = (int)param_2;
  if ((int)uVar3 <= iVar9) {
    return -0x83;
  }
  if ((iVar9 != 0) && (*(int *)(param_1 + 8) == 0)) {
    if ((int)uVar3 < 1) {
      return -0x83;
    }
LAB_00eb3c24:
    if (0 < *(long *)(param_1 + 0x68)) {
      return *(long *)(param_1 + 0x68);
    }
    lVar11 = *(long *)(param_1 + 0x60);
    if (lVar11 < 1) {
      return -1;
    }
    if (0 < *(long *)(param_1 + 0x70)) {
      lVar11 = *(long *)(param_1 + 0x70) + lVar11;
      if (lVar11 < 0) {
        lVar11 = lVar11 + 1;
      }
      return lVar11 >> 1;
    }
    return lVar11;
  }
  if (-1 < iVar9) {
    if (*(int *)(param_1 + 8) == 0) goto LAB_00eb3c24;
    uVar10 = -(param_2 >> 0x1f & 1) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3;
    lVar11 = (*(long *)(uVar10 + *(long *)(param_1 + 0x30) + 8) -
             *(long *)(*(long *)(param_1 + 0x38) + uVar10)) * 8000;
    goto LAB_00eb3d20;
  }
  if ((int)uVar3 < 1) {
    lVar11 = 0;
  }
  else {
    if (uVar3 < 4) {
      uVar13 = 0;
      lVar11 = 0;
LAB_00eb3ce8:
      plVar14 = (long *)(uVar13 * 8 + *(long *)(param_1 + 0x30));
      lVar8 = uVar10 - uVar13;
      plVar12 = (long *)(*(long *)(param_1 + 0x38) + uVar13 * 8);
      do {
        plVar14 = plVar14 + 1;
        lVar8 = lVar8 + -1;
        lVar11 = lVar11 + (*plVar14 - *plVar12) * 8;
        plVar12 = plVar12 + 1;
      } while (lVar8 != 0);
    }
    else {
      uVar13 = uVar10 & 0xfffffffc;
      plVar14 = (long *)(*(long *)(param_1 + 0x30) + 0x18);
      plVar12 = (long *)(*(long *)(param_1 + 0x38) + 0x10);
      lVar11 = 0;
      lVar8 = 0;
      lVar16 = 0;
      lVar17 = 0;
      uVar15 = uVar13;
      do {
        plVar1 = plVar14 + -2;
        plVar4 = plVar14 + -1;
        plVar5 = plVar14 + 1;
        lVar18 = *plVar14;
        plVar2 = plVar12 + -2;
        plVar6 = plVar12 + -1;
        plVar7 = plVar12 + 1;
        lVar19 = *plVar12;
        plVar14 = plVar14 + 4;
        uVar15 = uVar15 - 4;
        plVar12 = plVar12 + 4;
        lVar11 = (*plVar1 - *plVar2) * 8 + lVar11;
        lVar8 = (*plVar4 - *plVar6) * 8 + lVar8;
        lVar16 = (lVar18 - lVar19) * 8 + lVar16;
        lVar17 = (*plVar5 - *plVar7) * 8 + lVar17;
      } while (uVar15 != 0);
      lVar11 = lVar16 + lVar11 + lVar17 + lVar8;
      if (uVar13 != uVar10) goto LAB_00eb3ce8;
    }
    lVar11 = lVar11 * 1000;
  }
  param_2 = 0xffffffff;
LAB_00eb3d20:
  lVar8 = ov_time_total(param_1,param_2);
  if (lVar8 != 0) {
    return lVar11 / lVar8;
  }
  return 0;
}

