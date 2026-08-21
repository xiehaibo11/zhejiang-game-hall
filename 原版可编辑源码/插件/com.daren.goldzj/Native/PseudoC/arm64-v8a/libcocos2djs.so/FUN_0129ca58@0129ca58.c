
uint FUN_0129ca58(uint param_1,byte *param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined8 uVar39;
  byte bVar46;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  undefined8 uVar47;
  byte bVar54;
  
  uVar13 = param_1 & 0xffff;
  param_1 = param_1 >> 0x10;
  pbVar12 = param_2;
  uVar14 = uVar13;
  if (((ulong)param_2 & 0xf) != 0) {
    do {
      param_2 = pbVar12 + 1;
      param_3 = param_3 - 1;
      uVar13 = uVar13 + *pbVar12;
      param_1 = uVar13 + param_1;
      pbVar12 = param_2;
    } while (((ulong)param_2 & 0xf) != 0);
    param_1 = param_1 % 0xfff1;
    uVar14 = uVar13 - 0xfff1;
    if (uVar13 < 0xfff1) {
      uVar14 = uVar13;
    }
  }
  uVar15 = param_3 & 0x1f;
  for (param_3 = param_3 >> 5; param_3 != 0; param_3 = param_3 - uVar8) {
    uVar8 = param_3;
    if (0xac < param_3) {
      uVar8 = 0xad;
    }
    iVar25 = 0;
    iVar26 = 0;
    iVar27 = 0;
    iVar28 = uVar14 * (int)uVar8;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    sVar21 = 0;
    sVar22 = 0;
    sVar23 = 0;
    sVar24 = 0;
    iVar35 = 0;
    iVar36 = 0;
    iVar37 = 0;
    iVar38 = 0;
    uVar11 = uVar8 & 0xffffffff;
    pbVar12 = param_2;
    auVar30 = ZEXT816(0);
    auVar34 = ZEXT816(0);
    auVar32 = ZEXT816(0);
    do {
      uVar47 = *(undefined8 *)(pbVar12 + 8);
      uVar39 = *(undefined8 *)pbVar12;
      iVar25 = iVar25 + iVar35;
      iVar26 = iVar26 + iVar36;
      iVar27 = iVar27 + iVar37;
      iVar28 = iVar28 + iVar38;
      uVar13 = (int)uVar11 - 1;
      uVar11 = (ulong)uVar13;
      bVar40 = (byte)((ulong)uVar39 >> 8);
      bVar41 = (byte)((ulong)uVar39 >> 0x10);
      bVar42 = (byte)((ulong)uVar39 >> 0x18);
      bVar43 = (byte)((ulong)uVar39 >> 0x20);
      bVar44 = (byte)((ulong)uVar39 >> 0x28);
      bVar45 = (byte)((ulong)uVar39 >> 0x30);
      bVar46 = (byte)((ulong)uVar39 >> 0x38);
      bVar48 = (byte)((ulong)uVar47 >> 8);
      bVar49 = (byte)((ulong)uVar47 >> 0x10);
      bVar50 = (byte)((ulong)uVar47 >> 0x18);
      bVar51 = (byte)((ulong)uVar47 >> 0x20);
      bVar52 = (byte)((ulong)uVar47 >> 0x28);
      bVar53 = (byte)((ulong)uVar47 >> 0x30);
      bVar54 = (byte)((ulong)uVar47 >> 0x38);
      auVar31._0_2_ = auVar32._0_2_ + (ushort)(byte)uVar39;
      auVar31._2_2_ = auVar32._2_2_ + (ushort)bVar40;
      auVar31._4_2_ = auVar32._4_2_ + (ushort)bVar41;
      auVar31._6_2_ = auVar32._6_2_ + (ushort)bVar42;
      auVar31._8_2_ = auVar32._8_2_ + (ushort)bVar43;
      auVar31._10_2_ = auVar32._10_2_ + (ushort)bVar44;
      auVar31._12_2_ = auVar32._12_2_ + (ushort)bVar45;
      auVar31._14_2_ = auVar32._14_2_ + (ushort)bVar46;
      auVar29._0_2_ = auVar34._0_2_ + (ushort)(byte)uVar47;
      auVar29._2_2_ = auVar34._2_2_ + (ushort)bVar48;
      auVar29._4_2_ = auVar34._4_2_ + (ushort)bVar49;
      auVar29._6_2_ = auVar34._6_2_ + (ushort)bVar50;
      auVar29._8_2_ = auVar34._8_2_ + (ushort)bVar51;
      auVar29._10_2_ = auVar34._10_2_ + (ushort)bVar52;
      auVar29._12_2_ = auVar34._12_2_ + (ushort)bVar53;
      auVar29._14_2_ = auVar34._14_2_ + (ushort)bVar54;
      uVar17 = uVar17 + pbVar12[0x10];
      uVar18 = uVar18 + pbVar12[0x11];
      uVar19 = uVar19 + pbVar12[0x12];
      uVar20 = uVar20 + pbVar12[0x13];
      sVar21 = sVar21 + (ushort)pbVar12[0x14];
      sVar22 = sVar22 + (ushort)pbVar12[0x15];
      sVar23 = sVar23 + (ushort)pbVar12[0x16];
      sVar24 = sVar24 + (ushort)pbVar12[0x17];
      auVar16._0_2_ = auVar30._0_2_ + (ushort)pbVar12[0x18];
      auVar16._2_2_ = auVar30._2_2_ + (ushort)pbVar12[0x19];
      auVar16._4_2_ = auVar30._4_2_ + (ushort)pbVar12[0x1a];
      auVar16._6_2_ = auVar30._6_2_ + (ushort)pbVar12[0x1b];
      auVar16._8_2_ = auVar30._8_2_ + (ushort)pbVar12[0x1c];
      auVar16._10_2_ = auVar30._10_2_ + (ushort)pbVar12[0x1d];
      auVar16._12_2_ = auVar30._12_2_ + (ushort)pbVar12[0x1e];
      auVar16._14_2_ = auVar30._14_2_ + (ushort)pbVar12[0x1f];
      iVar35 = iVar35 + (uint)(ushort)((ushort)pbVar12[0x10] + (ushort)pbVar12[0x11] +
                                      (ushort)(byte)uVar39 + (ushort)bVar40) +
                        (uint)(ushort)((ushort)pbVar12[0x12] + (ushort)pbVar12[0x13] +
                                      (ushort)bVar41 + (ushort)bVar42);
      iVar36 = iVar36 + (uint)(ushort)((ushort)pbVar12[0x14] + (ushort)pbVar12[0x15] +
                                      (ushort)bVar43 + (ushort)bVar44) +
                        (uint)(ushort)((ushort)pbVar12[0x16] + (ushort)pbVar12[0x17] +
                                      (ushort)bVar45 + (ushort)bVar46);
      iVar37 = iVar37 + (uint)(ushort)((ushort)pbVar12[0x18] + (ushort)pbVar12[0x19] +
                                      (ushort)(byte)uVar47 + (ushort)bVar48) +
                        (uint)(ushort)((ushort)pbVar12[0x1a] + (ushort)pbVar12[0x1b] +
                                      (ushort)bVar49 + (ushort)bVar50);
      iVar38 = iVar38 + (uint)(ushort)((ushort)pbVar12[0x1c] + (ushort)pbVar12[0x1d] +
                                      (ushort)bVar51 + (ushort)bVar52) +
                        (uint)(ushort)((ushort)pbVar12[0x1e] + (ushort)pbVar12[0x1f] +
                                      (ushort)bVar53 + (ushort)bVar54);
      pbVar12 = pbVar12 + 0x20;
      auVar30 = auVar16;
      auVar34 = auVar29;
      auVar32 = auVar31;
    } while (uVar13 != 0);
    auVar32 = NEON_ext(auVar31,auVar31,8,1);
    auVar33 = NEON_ext(auVar29,auVar29,8,1);
    auVar30._2_2_ = uVar18;
    auVar30._0_2_ = uVar17;
    auVar30._4_2_ = uVar19;
    auVar30._6_2_ = uVar20;
    auVar30._8_2_ = sVar21;
    auVar30._10_2_ = sVar22;
    auVar30._12_2_ = sVar23;
    auVar30._14_2_ = sVar24;
    auVar34._2_2_ = uVar18;
    auVar34._0_2_ = uVar17;
    auVar34._4_2_ = uVar19;
    auVar34._6_2_ = uVar20;
    auVar34._8_2_ = sVar21;
    auVar34._10_2_ = sVar22;
    auVar34._12_2_ = sVar23;
    auVar34._14_2_ = sVar24;
    auVar30 = NEON_ext(auVar30,auVar34,8,1);
    auVar34 = NEON_ext(auVar16,auVar16,8,1);
    iVar25 = iVar25 * 0x20 + (uint)auVar31._0_2_ * 0x20 + (uint)auVar32._0_2_ * 0x1c +
             (uint)auVar29._0_2_ * 0x18 + (uint)auVar33._0_2_ * 0x14 + (uint)uVar17 * 0x10 +
             (uint)auVar30._0_2_ * 0xc + (uint)auVar16._0_2_ * 8 + (uint)auVar34._0_2_ * 4;
    iVar26 = iVar26 * 0x20 + (uint)auVar31._2_2_ * 0x1f + (uint)auVar32._2_2_ * 0x1b +
             (uint)auVar29._2_2_ * 0x17 + (uint)auVar33._2_2_ * 0x13 + (uint)uVar18 * 0xf +
             (uint)auVar30._2_2_ * 0xb + (uint)auVar16._2_2_ * 7 + (uint)auVar34._2_2_ * 3;
    iVar27 = iVar27 * 0x20 + (uint)auVar31._4_2_ * 0x1e + (uint)auVar32._4_2_ * 0x1a +
             (uint)auVar29._4_2_ * 0x16 + (uint)auVar33._4_2_ * 0x12 + (uint)uVar19 * 0xe +
             (uint)auVar30._4_2_ * 10 + (uint)auVar16._4_2_ * 6 + (uint)auVar34._4_2_ * 2;
    iVar28 = iVar28 * 0x20 + (uint)auVar31._6_2_ * 0x1d + (uint)auVar32._6_2_ * 0x19 +
             (uint)auVar29._6_2_ * 0x15 + (uint)auVar33._6_2_ * 0x11 + (uint)uVar20 * 0xd +
             (uint)auVar30._6_2_ * 9 + (uint)auVar16._6_2_ * 5 + (uint)auVar34._6_2_;
    auVar9._4_4_ = iVar36;
    auVar9._0_4_ = iVar35;
    auVar9._8_4_ = iVar37;
    auVar9._12_4_ = iVar38;
    auVar10._4_4_ = iVar36;
    auVar10._0_4_ = iVar35;
    auVar10._8_4_ = iVar37;
    auVar10._12_4_ = iVar38;
    auVar34 = NEON_ext(auVar9,auVar10,8,1);
    auVar32._4_4_ = iVar26;
    auVar32._0_4_ = iVar25;
    auVar32._8_4_ = iVar27;
    auVar32._12_4_ = iVar28;
    auVar33._4_4_ = iVar26;
    auVar33._0_4_ = iVar25;
    auVar33._8_4_ = iVar27;
    auVar33._12_4_ = iVar28;
    auVar30 = NEON_ext(auVar32,auVar33,8,1);
    param_2 = param_2 + (uVar8 * 0x20 + 0x1fffffffe0 & 0x1fffffffe0) + 0x20;
    uVar14 = (iVar35 + iVar36 + auVar34._0_4_ + auVar34._4_4_ + uVar14) % 0xfff1;
    param_1 = (iVar25 + iVar26 + auVar30._0_4_ + auVar30._4_4_ + param_1) % 0xfff1;
  }
  if (uVar15 == 0) goto LAB_0129cd08;
  if (uVar15 < 0x10) {
LAB_0129ccc8:
    do {
      uVar15 = uVar15 - 1;
      uVar14 = uVar14 + *param_2;
      param_1 = uVar14 + param_1;
      param_2 = param_2 + 1;
      uVar13 = uVar14;
    } while (uVar15 != 0);
  }
  else {
    uVar15 = uVar15 - 0x10;
    iVar28 = uVar14 + *param_2;
    iVar25 = iVar28 + (uint)param_2[1];
    iVar26 = iVar25 + (uint)param_2[2];
    iVar27 = iVar26 + (uint)param_2[3];
    iVar35 = iVar27 + (uint)param_2[4];
    iVar36 = iVar35 + (uint)param_2[5];
    iVar37 = iVar36 + (uint)param_2[6];
    iVar38 = iVar37 + (uint)param_2[7];
    iVar1 = iVar38 + (uint)param_2[8];
    iVar2 = iVar1 + (uint)param_2[9];
    iVar3 = iVar2 + (uint)param_2[10];
    iVar4 = iVar3 + (uint)param_2[0xb];
    iVar5 = iVar4 + (uint)param_2[0xc];
    iVar6 = iVar5 + (uint)param_2[0xd];
    iVar7 = iVar6 + (uint)param_2[0xe];
    uVar14 = iVar7 + (uint)param_2[0xf];
    param_1 = iVar28 + param_1 + iVar25 + iVar26 + iVar27 + iVar35 + iVar36 + iVar37 + iVar38 +
              iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + uVar14;
    uVar13 = uVar14;
    if (uVar15 != 0) {
      param_2 = param_2 + 0x10;
      goto LAB_0129ccc8;
    }
  }
  uVar14 = uVar13 - 0xfff1;
  if (uVar13 < 0xfff1) {
    uVar14 = uVar13;
  }
  param_1 = param_1 % 0xfff1;
LAB_0129cd08:
  return uVar14 | param_1 << 0x10;
}

