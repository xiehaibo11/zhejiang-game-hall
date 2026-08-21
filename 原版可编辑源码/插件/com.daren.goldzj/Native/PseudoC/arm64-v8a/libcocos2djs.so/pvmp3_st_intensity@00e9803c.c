
void pvmp3_st_intensity(long param_1,long param_2,uint param_3,ulong param_4,uint param_5)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  
  lVar6 = (long)(int)(&DAT_01998678)[param_3 & 7];
  uVar8 = -(param_4 >> 0x1f & 1) & 0xfffffffc00000000 | (param_4 & 0xffffffff) << 2;
  piVar9 = (int *)(param_1 + uVar8);
  uVar7 = (int)param_5 >> 1;
  piVar11 = (int *)(param_2 + uVar8);
  piVar10 = piVar11;
  if (uVar7 != 0) {
    uVar8 = (ulong)(uVar7 - 1);
    lVar13 = (long)(int)param_4 + uVar8 * 2;
    lVar1 = lVar13 + 2;
    piVar10 = (int *)(param_2 + lVar1 * 4);
    if (uVar8 + 1 < 4) goto LAB_00e980a8;
    lVar13 = lVar13 * 4 + 8;
    if ((piVar11 < (int *)(param_1 + lVar13)) && (piVar9 < (int *)(param_2 + lVar13)))
    goto LAB_00e980a8;
    uVar4 = param_5 >> 1 & 3;
    lVar12 = (uVar8 + 1) - (ulong)uVar4;
    lVar13 = (uVar8 + 1) - (ulong)uVar4;
    uVar7 = uVar7 - (int)lVar12;
    piVar2 = piVar9 + lVar12 * 2;
    piVar3 = piVar11 + lVar12 * 2;
    do {
      iVar24 = piVar9[1];
      iVar21 = piVar9[2];
      iVar25 = piVar9[3];
      iVar22 = piVar9[4];
      iVar26 = piVar9[5];
      iVar23 = piVar9[6];
      iVar27 = piVar9[7];
      lVar13 = lVar13 + -4;
      iVar5 = (int)((ulong)(lVar6 * (*piVar9 << 1)) >> 0x20);
      iVar17 = (int)((ulong)(lVar6 * (iVar21 << 1)) >> 0x20);
      iVar14 = (int)((ulong)(lVar6 * (iVar22 << 1)) >> 0x20);
      iVar18 = (int)((ulong)(lVar6 * (iVar23 << 1)) >> 0x20);
      iVar15 = (int)((ulong)(lVar6 * (iVar24 << 1)) >> 0x20);
      iVar19 = (int)((ulong)(lVar6 * (iVar25 << 1)) >> 0x20);
      iVar16 = (int)((ulong)(lVar6 * (iVar26 << 1)) >> 0x20);
      iVar20 = (int)((ulong)(lVar6 * (iVar27 << 1)) >> 0x20);
      *piVar11 = *piVar9 - iVar5;
      piVar11[1] = iVar24 - iVar15;
      piVar11[2] = iVar21 - iVar17;
      piVar11[3] = iVar25 - iVar19;
      piVar11[4] = iVar22 - iVar14;
      piVar11[5] = iVar26 - iVar16;
      piVar11[6] = iVar23 - iVar18;
      piVar11[7] = iVar27 - iVar20;
      piVar11 = piVar11 + 8;
      *piVar9 = iVar5;
      piVar9[1] = iVar15;
      piVar9[2] = iVar17;
      piVar9[3] = iVar19;
      piVar9[4] = iVar14;
      piVar9[5] = iVar16;
      piVar9[6] = iVar18;
      piVar9[7] = iVar20;
      piVar9 = piVar9 + 8;
    } while (lVar13 != 0);
    while (piVar11 = piVar3, piVar9 = piVar2, uVar4 != 0) {
LAB_00e980a8:
      iVar5 = (int)((ulong)((*piVar9 << 1) * lVar6) >> 0x20);
      *piVar11 = *piVar9 - iVar5;
      *piVar9 = iVar5;
      iVar5 = (int)((ulong)((piVar9[1] << 1) * lVar6) >> 0x20);
      piVar11[1] = piVar9[1] - iVar5;
      piVar9[1] = iVar5;
      uVar7 = uVar7 - 1;
      piVar2 = piVar9 + 2;
      piVar3 = piVar11 + 2;
      uVar4 = uVar7;
    }
    piVar9 = (int *)(param_1 + lVar1 * 4);
  }
  if ((param_5 & 1) != 0) {
    iVar5 = (int)((ulong)((*piVar9 << 1) * lVar6) >> 0x20);
    *piVar10 = *piVar9 - iVar5;
    *piVar9 = iVar5;
  }
  return;
}

