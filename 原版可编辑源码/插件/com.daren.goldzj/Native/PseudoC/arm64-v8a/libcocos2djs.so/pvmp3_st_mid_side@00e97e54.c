
void pvmp3_st_mid_side(long param_1,long param_2,ulong param_3,uint param_4)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined1 auVar20 [16];
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  uVar10 = -(param_3 >> 0x1f & 1) & 0xfffffffc00000000 | (param_3 & 0xffffffff) << 2;
  uVar9 = (int)param_4 >> 1;
  piVar13 = (int *)(param_1 + uVar10);
  piVar11 = (int *)(param_2 + uVar10);
  piVar12 = piVar13;
  if (uVar9 != 0) {
    uVar10 = (ulong)(uVar9 - 1);
    lVar15 = (long)(int)param_3 + uVar10 * 2;
    lVar1 = lVar15 + 2;
    piVar12 = (int *)(param_1 + lVar1 * 4);
    if (uVar10 + 1 < 4) goto LAB_00e97eb8;
    lVar15 = lVar15 * 4 + 8;
    if ((piVar13 < (int *)(param_2 + lVar15)) && (piVar11 < (int *)(param_1 + lVar15)))
    goto LAB_00e97eb8;
    uVar4 = param_4 >> 1 & 3;
    lVar14 = (uVar10 + 1) - (ulong)uVar4;
    lVar15 = (uVar10 + 1) - (ulong)uVar4;
    uVar9 = uVar9 - (int)lVar14;
    piVar2 = piVar13 + lVar14 * 2;
    piVar3 = piVar11 + lVar14 * 2;
    do {
      lVar15 = lVar15 + -4;
      iVar21 = *piVar11 * 2 + *piVar13 * 2;
      iVar22 = piVar11[2] * 2 + piVar13[2] * 2;
      iVar23 = piVar11[4] * 2 + piVar13[4] * 2;
      iVar24 = piVar11[6] * 2 + piVar13[6] * 2;
      iVar25 = piVar11[1] * 2 + piVar13[1] * 2;
      iVar26 = piVar11[3] * 2 + piVar13[3] * 2;
      iVar27 = piVar11[5] * 2 + piVar13[5] * 2;
      iVar28 = piVar11[7] * 2 + piVar13[7] * 2;
      iVar29 = *piVar13 * 2 + *piVar11 * -2;
      iVar30 = piVar13[2] * 2 + piVar11[2] * -2;
      iVar31 = piVar13[4] * 2 + piVar11[4] * -2;
      iVar32 = piVar13[6] * 2 + piVar11[6] * -2;
      iVar16 = piVar13[1] * 2 + piVar11[1] * -2;
      iVar17 = piVar13[3] * 2 + piVar11[3] * -2;
      iVar18 = piVar13[5] * 2 + piVar11[5] * -2;
      iVar19 = piVar13[7] * 2 + piVar11[7] * -2;
      auVar20._4_4_ = iVar22;
      auVar20._0_4_ = iVar21;
      auVar20._8_4_ = iVar23;
      auVar20._12_4_ = iVar24;
      auVar33._4_4_ = iVar22;
      auVar33._0_4_ = iVar21;
      auVar33._8_4_ = iVar23;
      auVar33._12_4_ = iVar24;
      auVar20 = NEON_ext(auVar20,auVar33,8,1);
      auVar34._4_4_ = iVar26;
      auVar34._0_4_ = iVar25;
      auVar34._8_4_ = iVar27;
      auVar34._12_4_ = iVar28;
      auVar6._4_4_ = iVar26;
      auVar6._0_4_ = iVar25;
      auVar6._8_4_ = iVar27;
      auVar6._12_4_ = iVar28;
      auVar33 = NEON_ext(auVar34,auVar6,8,1);
      auVar7._4_4_ = iVar30;
      auVar7._0_4_ = iVar29;
      auVar7._8_4_ = iVar31;
      auVar7._12_4_ = iVar32;
      auVar8._4_4_ = iVar30;
      auVar8._0_4_ = iVar29;
      auVar8._8_4_ = iVar31;
      auVar8._12_4_ = iVar32;
      auVar34 = NEON_ext(auVar7,auVar8,8,1);
      auVar35._4_4_ = iVar17;
      auVar35._0_4_ = iVar16;
      auVar35._8_4_ = iVar18;
      auVar35._12_4_ = iVar19;
      auVar5._4_4_ = iVar17;
      auVar5._0_4_ = iVar16;
      auVar5._8_4_ = iVar18;
      auVar5._12_4_ = iVar19;
      auVar35 = NEON_ext(auVar35,auVar5,8,1);
      *piVar13 = (int)((ulong)((long)iVar21 * 0x5a827999) >> 0x20);
      piVar13[1] = (int)((ulong)((long)iVar25 * 0x5a827999) >> 0x20);
      piVar13[2] = (int)((ulong)((long)iVar22 * 0x5a827999) >> 0x20);
      piVar13[3] = (int)((ulong)((long)iVar26 * 0x5a827999) >> 0x20);
      piVar13[4] = (int)((ulong)((long)auVar20._0_4_ * 0x5a827999) >> 0x20);
      piVar13[5] = (int)((ulong)((long)auVar33._0_4_ * 0x5a827999) >> 0x20);
      piVar13[6] = (int)((ulong)((long)auVar20._4_4_ * 0x5a827999) >> 0x20);
      piVar13[7] = (int)((ulong)((long)auVar33._4_4_ * 0x5a827999) >> 0x20);
      piVar13 = piVar13 + 8;
      *piVar11 = (int)((ulong)((long)iVar29 * 0x5a827999) >> 0x20);
      piVar11[1] = (int)((ulong)((long)iVar16 * 0x5a827999) >> 0x20);
      piVar11[2] = (int)((ulong)((long)iVar30 * 0x5a827999) >> 0x20);
      piVar11[3] = (int)((ulong)((long)iVar17 * 0x5a827999) >> 0x20);
      piVar11[4] = (int)((ulong)((long)auVar34._0_4_ * 0x5a827999) >> 0x20);
      piVar11[5] = (int)((ulong)((long)auVar35._0_4_ * 0x5a827999) >> 0x20);
      piVar11[6] = (int)((ulong)((long)auVar34._4_4_ * 0x5a827999) >> 0x20);
      piVar11[7] = (int)((ulong)((long)auVar35._4_4_ * 0x5a827999) >> 0x20);
      piVar11 = piVar11 + 8;
    } while (lVar15 != 0);
    while (piVar11 = piVar3, piVar13 = piVar2, uVar4 != 0) {
LAB_00e97eb8:
      iVar16 = *piVar13;
      iVar17 = *piVar11;
      *piVar13 = (int)((ulong)((long)(iVar17 * 2 + iVar16 * 2) * 0x5a827999) >> 0x20);
      *piVar11 = (int)((ulong)((long)(iVar16 * 2 + iVar17 * -2) * 0x5a827999) >> 0x20);
      iVar16 = piVar13[1];
      iVar17 = piVar11[1];
      piVar13[1] = (int)((ulong)((long)(iVar17 * 2 + iVar16 * 2) * 0x5a827999) >> 0x20);
      piVar11[1] = (int)((ulong)((long)(iVar16 * 2 + iVar17 * -2) * 0x5a827999) >> 0x20);
      uVar9 = uVar9 - 1;
      piVar2 = piVar13 + 2;
      piVar3 = piVar11 + 2;
      uVar4 = uVar9;
    }
    piVar11 = (int *)(param_2 + lVar1 * 4);
  }
  if ((param_4 & 1) != 0) {
    iVar16 = *piVar12;
    iVar17 = *piVar11;
    *piVar12 = (int)((ulong)((long)(iVar17 * 2 + iVar16 * 2) * 0x5a827999) >> 0x20);
    *piVar11 = (int)((ulong)((long)(iVar16 * 2 + iVar17 * -2) * 0x5a827999) >> 0x20);
  }
  return;
}

