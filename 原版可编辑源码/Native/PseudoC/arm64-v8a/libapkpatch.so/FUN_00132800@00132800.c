
ulong FUN_00132800(ulong param_1,byte *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  bool bVar22;
  ulong uVar23;
  int iVar24;
  byte *pbVar25;
  
  uVar23 = param_1 >> 0x10 & 0xffff;
  param_1 = param_1 & 0xffff;
  if (param_3 == 1) {
    param_1 = param_1 + *param_2;
    uVar16 = param_1 - 0xfff1;
    if (param_1 < 0xfff1) {
      uVar16 = param_1;
    }
    uVar23 = uVar16 + uVar23;
    uVar17 = uVar23 * 0x10000 - 0xfff10000;
    if (uVar23 < 0xfff1) {
      uVar17 = uVar23 * 0x10000;
    }
    return uVar17 | uVar16;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  uVar16 = param_1;
  if (param_3 < 0x10) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      uVar23 = uVar16 + *param_2 + uVar23;
      uVar16 = uVar16 + *param_2;
      param_2 = param_2 + 1;
    }
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar23;
    param_1 = uVar16 - 0xfff1;
    if (uVar16 < 0xfff1) {
      param_1 = uVar16;
    }
    auVar20._8_8_ = 1;
    auVar20._0_8_ = 0xf00e10d2fc5cd;
    uVar16 = SUB168(auVar18 * auVar20,8);
  }
  else {
    if (param_3 >> 4 < 0x15b) {
LAB_001329fc:
      do {
        param_3 = param_3 - 0x10;
        lVar1 = param_1 + *param_2;
        lVar2 = lVar1 + (ulong)param_2[1];
        lVar3 = lVar2 + (ulong)param_2[2];
        lVar4 = lVar3 + (ulong)param_2[3];
        lVar5 = lVar4 + (ulong)param_2[4];
        lVar6 = lVar5 + (ulong)param_2[5];
        lVar7 = lVar6 + (ulong)param_2[6];
        lVar8 = lVar7 + (ulong)param_2[7];
        lVar9 = lVar8 + (ulong)param_2[8];
        lVar10 = lVar9 + (ulong)param_2[9];
        lVar11 = lVar10 + (ulong)param_2[10];
        lVar12 = lVar11 + (ulong)param_2[0xb];
        lVar13 = lVar12 + (ulong)param_2[0xc];
        lVar14 = lVar13 + (ulong)param_2[0xd];
        lVar15 = lVar14 + (ulong)param_2[0xe];
        pbVar25 = param_2 + 0xf;
        param_2 = param_2 + 0x10;
        param_1 = lVar15 + (ulong)*pbVar25;
        uVar23 = lVar1 + uVar23 + lVar2 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 +
                 lVar10 + lVar11 + lVar12 + lVar13 + lVar14 + lVar15 + param_1;
        if (param_3 < 0x10) goto joined_r0x00132acc;
      } while( true );
    }
    do {
      param_3 = param_3 - 0x15b0;
      iVar24 = -0x15b;
      pbVar25 = param_2;
      do {
        bVar22 = iVar24 != -1;
        iVar24 = iVar24 + 1;
        lVar1 = param_1 + *pbVar25;
        lVar2 = lVar1 + (ulong)pbVar25[1];
        lVar3 = lVar2 + (ulong)pbVar25[2];
        lVar4 = lVar3 + (ulong)pbVar25[3];
        lVar5 = lVar4 + (ulong)pbVar25[4];
        lVar6 = lVar5 + (ulong)pbVar25[5];
        lVar7 = lVar6 + (ulong)pbVar25[6];
        lVar8 = lVar7 + (ulong)pbVar25[7];
        lVar9 = lVar8 + (ulong)pbVar25[8];
        lVar10 = lVar9 + (ulong)pbVar25[9];
        lVar11 = lVar10 + (ulong)pbVar25[10];
        lVar12 = lVar11 + (ulong)pbVar25[0xb];
        lVar13 = lVar12 + (ulong)pbVar25[0xc];
        lVar14 = lVar13 + (ulong)pbVar25[0xd];
        lVar15 = lVar14 + (ulong)pbVar25[0xe];
        param_1 = lVar15 + (ulong)pbVar25[0xf];
        uVar23 = lVar1 + uVar23 + lVar2 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 +
                 lVar10 + lVar11 + lVar12 + lVar13 + lVar14 + lVar15 + param_1;
        pbVar25 = pbVar25 + 0x10;
      } while (bVar22);
      param_2 = param_2 + 0x15b0;
      param_1 = param_1 % 0xfff1;
      uVar23 = uVar23 % 0xfff1;
    } while (0x15a < param_3 >> 4);
    if (param_3 == 0) goto LAB_00132b20;
    if (0xf < param_3) goto LAB_001329fc;
    do {
      param_3 = param_3 - 1;
      param_1 = param_1 + *param_2;
      uVar23 = param_1 + uVar23;
      param_2 = param_2 + 1;
joined_r0x00132acc:
    } while (param_3 != 0);
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar23;
    auVar21._8_8_ = 1;
    auVar21._0_8_ = 0xf00e10d2fc5cd;
    uVar16 = SUB168(auVar19 * auVar21,8);
    param_1 = param_1 % 0xfff1;
  }
  uVar23 = uVar23 + (uVar16 >> 0x10) * -0xfff1;
LAB_00132b20:
  return param_1 | uVar23 << 0x10;
}

