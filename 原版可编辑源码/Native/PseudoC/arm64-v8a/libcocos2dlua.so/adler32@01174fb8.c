
ulong adler32(ulong param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
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
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulong uVar24;
  byte *pbVar25;
  long lVar26;
  int iVar27;
  
  uVar24 = param_1 >> 0x10 & 0xffff;
  param_1 = param_1 & 0xffff;
  if (param_3 == 1) {
    param_1 = param_1 + *param_2;
    uVar17 = param_1 - 0xfff1;
    if (param_1 < 0xfff1) {
      uVar17 = param_1;
    }
    uVar24 = uVar17 + uVar24;
    uVar18 = uVar24 + 0xffffffff000f;
    if (uVar24 < 0xfff1) {
      uVar18 = uVar24;
    }
    return uVar17 | uVar18 << 0x10;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  uVar17 = param_1;
  if (param_3 < 0x10) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      uVar24 = uVar17 + *param_2 + uVar24;
      uVar17 = uVar17 + *param_2;
      param_2 = param_2 + 1;
    }
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar24;
    param_1 = uVar17 - 0xfff1;
    if (uVar17 < 0xfff1) {
      param_1 = uVar17;
    }
    auVar22._8_8_ = 1;
    auVar22._0_8_ = 0xf00e10d2fc5cd;
    uVar17 = SUB168(auVar20 * auVar22,8);
  }
  else {
    if (param_3 >> 4 < 0x15b) {
LAB_011751b4:
      uVar19 = param_3 - 0x10;
      pbVar25 = param_2;
      do {
        param_3 = param_3 - 0x10;
        lVar26 = param_1 + *pbVar25;
        lVar2 = lVar26 + (ulong)pbVar25[1];
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
        pbVar1 = pbVar25 + 0xf;
        pbVar25 = pbVar25 + 0x10;
        param_1 = lVar15 + (ulong)*pbVar1;
        uVar24 = lVar26 + uVar24 + lVar2 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 +
                 lVar10 + lVar11 + lVar12 + lVar13 + lVar14 + lVar15 + param_1;
      } while (0xf < param_3);
      param_3 = uVar19 & 0xf;
      if (param_3 != 0) {
        param_2 = param_2 + (ulong)(uVar19 & 0xfffffff0) + 0x10;
        goto LAB_011752a0;
      }
    }
    else {
      do {
        lVar26 = 0;
        param_3 = param_3 - 0x15b0;
        iVar27 = -0x15b;
        do {
          pbVar25 = param_2 + lVar26;
          iVar27 = iVar27 + 1;
          lVar26 = lVar26 + 0x10;
          lVar2 = param_1 + *pbVar25;
          lVar3 = lVar2 + (ulong)pbVar25[1];
          lVar4 = lVar3 + (ulong)pbVar25[2];
          lVar5 = lVar4 + (ulong)pbVar25[3];
          lVar6 = lVar5 + (ulong)pbVar25[4];
          lVar7 = lVar6 + (ulong)pbVar25[5];
          lVar8 = lVar7 + (ulong)pbVar25[6];
          lVar9 = lVar8 + (ulong)pbVar25[7];
          lVar10 = lVar9 + (ulong)pbVar25[8];
          lVar11 = lVar10 + (ulong)pbVar25[9];
          lVar12 = lVar11 + (ulong)pbVar25[10];
          lVar13 = lVar12 + (ulong)pbVar25[0xb];
          lVar14 = lVar13 + (ulong)pbVar25[0xc];
          lVar15 = lVar14 + (ulong)pbVar25[0xd];
          lVar16 = lVar15 + (ulong)pbVar25[0xe];
          param_1 = lVar16 + (ulong)pbVar25[0xf];
          uVar24 = lVar2 + uVar24 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 + lVar10 +
                   lVar11 + lVar12 + lVar13 + lVar14 + lVar15 + lVar16 + param_1;
        } while (iVar27 != 0);
        param_2 = param_2 + 0x15b0;
        param_1 = param_1 % 0xfff1;
        uVar24 = uVar24 % 0xfff1;
      } while (0x15a < param_3 >> 4);
      if (param_3 == 0) goto LAB_011752f0;
      if (0xf < param_3) goto LAB_011751b4;
LAB_011752a0:
      do {
        param_3 = param_3 - 1;
        param_1 = param_1 + *param_2;
        uVar24 = param_1 + uVar24;
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar24;
    auVar23._8_8_ = 1;
    auVar23._0_8_ = 0xf00e10d2fc5cd;
    uVar17 = SUB168(auVar21 * auVar23,8);
    param_1 = param_1 % 0xfff1;
  }
  uVar24 = uVar24 + (uVar17 >> 0x10) * -0xfff1;
LAB_011752f0:
  return param_1 | uVar24 << 0x10;
}

