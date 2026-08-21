
void FUN_00e02948(byte *param_1,byte *param_2,uint param_3)

{
  undefined1 auVar1 [16];
  ushort uVar2;
  ushort uVar3;
  byte *pbVar4;
  ulong uVar39;
  long lVar40;
  long lVar41;
  byte *pbVar42;
  byte *pbVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  undefined1 auVar51 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  ushort uVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *pbVar32;
  byte *pbVar33;
  byte *pbVar34;
  byte *pbVar35;
  byte *pbVar36;
  byte *pbVar37;
  byte *pbVar38;
  
  if ((int)param_3 < 1) {
    return;
  }
  uVar39 = (ulong)param_3;
  if (0xf < param_3) {
    param_3 = param_3 & 0xf;
    lVar41 = uVar39 - param_3;
    if (lVar41 == 0) goto LAB_00e0298c;
    if ((param_1 + uVar39 * 3 <= param_2) || (param_2 + uVar39 <= param_1)) {
      pbVar42 = param_1 + uVar39 * 3 + (ulong)param_3 * -3;
      lVar40 = lVar41;
      pbVar43 = param_2;
      do {
        bVar44 = *param_1;
        pbVar4 = param_1 + 1;
        pbVar5 = param_1 + 2;
        bVar45 = param_1[3];
        bVar52 = param_1[4];
        pbVar6 = param_1 + 5;
        bVar46 = param_1[6];
        bVar53 = param_1[7];
        pbVar7 = param_1 + 8;
        bVar47 = param_1[9];
        bVar54 = param_1[10];
        pbVar8 = param_1 + 0xb;
        pbVar9 = param_1 + 0xc;
        pbVar10 = param_1 + 0xd;
        pbVar11 = param_1 + 0xe;
        pbVar12 = param_1 + 0xf;
        pbVar13 = param_1 + 0x10;
        pbVar14 = param_1 + 0x11;
        pbVar15 = param_1 + 0x12;
        pbVar16 = param_1 + 0x13;
        pbVar17 = param_1 + 0x14;
        pbVar18 = param_1 + 0x15;
        pbVar19 = param_1 + 0x16;
        pbVar20 = param_1 + 0x17;
        pbVar21 = param_1 + 0x18;
        pbVar22 = param_1 + 0x19;
        pbVar23 = param_1 + 0x1a;
        bVar48 = param_1[0x1b];
        bVar55 = param_1[0x1c];
        pbVar24 = param_1 + 0x1d;
        bVar49 = param_1[0x1e];
        bVar56 = param_1[0x1f];
        pbVar25 = param_1 + 0x20;
        bVar50 = param_1[0x21];
        bVar57 = param_1[0x22];
        pbVar26 = param_1 + 0x23;
        pbVar27 = param_1 + 0x24;
        pbVar28 = param_1 + 0x25;
        pbVar29 = param_1 + 0x26;
        pbVar30 = param_1 + 0x27;
        pbVar31 = param_1 + 0x28;
        pbVar32 = param_1 + 0x29;
        pbVar33 = param_1 + 0x2a;
        pbVar34 = param_1 + 0x2b;
        pbVar35 = param_1 + 0x2c;
        pbVar36 = param_1 + 0x2d;
        pbVar37 = param_1 + 0x2e;
        pbVar38 = param_1 + 0x2f;
        param_1 = param_1 + 0x30;
        lVar40 = lVar40 + -0x10;
        auVar60._0_8_ =
             CONCAT17(0,CONCAT16(*pbVar26,(uint6)CONCAT14(*pbVar25,(uint)CONCAT12(*pbVar24,(ushort)*
                                                  pbVar23))));
        auVar60[8] = *pbVar29;
        auVar60[9] = 0;
        auVar60[10] = *pbVar32;
        auVar60[0xb] = 0;
        auVar60[0xc] = *pbVar35;
        auVar60[0xd] = 0;
        auVar60[0xe] = *pbVar38;
        auVar60[0xf] = 0;
        auVar61._0_8_ =
             CONCAT17(0,CONCAT16(*pbVar8,(uint6)CONCAT14(*pbVar7,(uint)CONCAT12(*pbVar6,(ushort)*
                                                  pbVar5))));
        auVar61[8] = *pbVar11;
        auVar61[9] = 0;
        auVar61[10] = *pbVar14;
        auVar61[0xb] = 0;
        auVar61[0xc] = *pbVar17;
        auVar61[0xd] = 0;
        auVar61[0xe] = *pbVar20;
        auVar61[0xf] = 0;
        uVar3 = CONCAT11(0,*pbVar4);
        uVar62 = CONCAT11(0,*pbVar22);
        uVar2 = CONCAT11(0,*pbVar21);
        auVar51 = NEON_ext(auVar60,auVar60,8,1);
        auVar58 = NEON_ext(auVar61,auVar61,8,1);
        auVar61 = NEON_umull(auVar61._0_8_,0x41c741c741c741c7,2);
        auVar60 = NEON_umull(auVar60._0_8_,0x41c741c741c741c7,2);
        auVar59[2] = bVar52;
        auVar59._0_2_ = uVar3;
        auVar59[3] = 0;
        auVar59[4] = bVar53;
        auVar59[5] = 0;
        auVar59[6] = bVar54;
        auVar59[7] = 0;
        auVar59[8] = *pbVar10;
        auVar59[9] = 0;
        auVar59[10] = *pbVar13;
        auVar59[0xb] = 0;
        auVar59[0xc] = *pbVar16;
        auVar59[0xd] = 0;
        auVar59[0xe] = *pbVar19;
        auVar59[0xf] = 0;
        auVar63[2] = bVar52;
        auVar63._0_2_ = uVar3;
        auVar63[3] = 0;
        auVar63[4] = bVar53;
        auVar63[5] = 0;
        auVar63[6] = bVar54;
        auVar63[7] = 0;
        auVar63[8] = *pbVar10;
        auVar63[9] = 0;
        auVar63[10] = *pbVar13;
        auVar63[0xb] = 0;
        auVar63[0xc] = *pbVar16;
        auVar63[0xd] = 0;
        auVar63[0xe] = *pbVar19;
        auVar63[0xf] = 0;
        auVar63 = NEON_ext(auVar59,auVar63,8,1);
        auVar59 = NEON_umull(auVar58._0_8_,0x41c741c741c741c7,2);
        auVar64[2] = bVar55;
        auVar64._0_2_ = uVar62;
        auVar64[3] = 0;
        auVar64[4] = bVar56;
        auVar64[5] = 0;
        auVar64[6] = bVar57;
        auVar64[7] = 0;
        auVar64[8] = *pbVar28;
        auVar64[9] = 0;
        auVar64[10] = *pbVar31;
        auVar64[0xb] = 0;
        auVar64[0xc] = *pbVar34;
        auVar64[0xd] = 0;
        auVar64[0xe] = *pbVar37;
        auVar64[0xf] = 0;
        auVar66[2] = bVar55;
        auVar66._0_2_ = uVar62;
        auVar66[3] = 0;
        auVar66[4] = bVar56;
        auVar66[5] = 0;
        auVar66[6] = bVar57;
        auVar66[7] = 0;
        auVar66[8] = *pbVar28;
        auVar66[9] = 0;
        auVar66[10] = *pbVar31;
        auVar66[0xb] = 0;
        auVar66[0xc] = *pbVar34;
        auVar66[0xd] = 0;
        auVar66[0xe] = *pbVar37;
        auVar66[0xf] = 0;
        auVar64 = NEON_ext(auVar64,auVar66,8,1);
        auVar58[1] = 0;
        auVar58[0] = bVar44;
        auVar58[2] = bVar45;
        auVar58[3] = 0;
        auVar58[4] = bVar46;
        auVar58[5] = 0;
        auVar58[6] = bVar47;
        auVar58[7] = 0;
        auVar58[8] = *pbVar9;
        auVar58[9] = 0;
        auVar58[10] = *pbVar12;
        auVar58[0xb] = 0;
        auVar58[0xc] = *pbVar15;
        auVar58[0xd] = 0;
        auVar58[0xe] = *pbVar18;
        auVar58[0xf] = 0;
        auVar65[1] = 0;
        auVar65[0] = bVar44;
        auVar65[2] = bVar45;
        auVar65[3] = 0;
        auVar65[4] = bVar46;
        auVar65[5] = 0;
        auVar65[6] = bVar47;
        auVar65[7] = 0;
        auVar65[8] = *pbVar9;
        auVar65[9] = 0;
        auVar65[10] = *pbVar12;
        auVar65[0xb] = 0;
        auVar65[0xc] = *pbVar15;
        auVar65[0xd] = 0;
        auVar65[0xe] = *pbVar18;
        auVar65[0xf] = 0;
        auVar66 = NEON_ext(auVar58,auVar65,8,1);
        auVar58 = NEON_umull(auVar51._0_8_,0x41c741c741c741c7,2);
        auVar51[2] = bVar48;
        auVar51._0_2_ = uVar2;
        auVar51[3] = 0;
        auVar51[4] = bVar49;
        auVar51[5] = 0;
        auVar51[6] = bVar50;
        auVar51[7] = 0;
        auVar51[8] = *pbVar27;
        auVar51[9] = 0;
        auVar51[10] = *pbVar30;
        auVar51[0xb] = 0;
        auVar51[0xc] = *pbVar33;
        auVar51[0xd] = 0;
        auVar51[0xe] = *pbVar36;
        auVar51[0xf] = 0;
        auVar1[2] = bVar48;
        auVar1._0_2_ = uVar2;
        auVar1[3] = 0;
        auVar1[4] = bVar49;
        auVar1[5] = 0;
        auVar1[6] = bVar50;
        auVar1[7] = 0;
        auVar1[8] = *pbVar27;
        auVar1[9] = 0;
        auVar1[10] = *pbVar30;
        auVar1[0xb] = 0;
        auVar1[0xc] = *pbVar33;
        auVar1[0xd] = 0;
        auVar1[0xe] = *pbVar36;
        auVar1[0xf] = 0;
        auVar65 = NEON_ext(auVar51,auVar1,8,1);
        pbVar43[8] = (byte)(auVar60._0_4_ + (uint)uVar62 * 0x8123 + (uint)uVar2 * 0x1914 + 0x108000
                           >> 0x10);
        pbVar43[9] = (byte)(auVar60._4_4_ + (uint)bVar55 * 0x8123 + (uint)bVar48 * 0x1914 + 0x108000
                           >> 0x10);
        pbVar43[10] = (byte)(auVar60._8_4_ + (uint)bVar56 * 0x8123 + (uint)bVar49 * 0x1914 +
                             0x108000 >> 0x10);
        pbVar43[0xb] = (byte)(auVar60._12_4_ + (uint)bVar57 * 0x8123 + (uint)bVar50 * 0x1914 +
                              0x108000 >> 0x10);
        pbVar43[0xc] = (byte)(auVar58._0_4_ + (uint)auVar64._0_2_ * 0x8123 +
                              (uint)auVar65._0_2_ * 0x1914 + 0x108000 >> 0x10);
        pbVar43[0xd] = (byte)(auVar58._4_4_ + (uint)auVar64._2_2_ * 0x8123 +
                              (uint)auVar65._2_2_ * 0x1914 + 0x108000 >> 0x10);
        pbVar43[0xe] = (byte)(auVar58._8_4_ + (uint)auVar64._4_2_ * 0x8123 +
                              (uint)auVar65._4_2_ * 0x1914 + 0x108000 >> 0x10);
        pbVar43[0xf] = (byte)(auVar58._12_4_ + (uint)auVar64._6_2_ * 0x8123 +
                              (uint)auVar65._6_2_ * 0x1914 + 0x108000 >> 0x10);
        *pbVar43 = (byte)(auVar61._0_4_ + (uint)uVar3 * 0x8123 +
                          (CONCAT12(bVar46,CONCAT11(bVar45,bVar44)) & 0xff) * 0x1914 + 0x108000 >>
                         0x10);
        pbVar43[1] = (byte)(auVar61._4_4_ + (uint)bVar52 * 0x8123 + (uint)bVar45 * 0x1914 + 0x108000
                           >> 0x10);
        pbVar43[2] = (byte)(auVar61._8_4_ + (uint)bVar53 * 0x8123 + (uint)bVar46 * 0x1914 + 0x108000
                           >> 0x10);
        pbVar43[3] = (byte)(auVar61._12_4_ + (uint)bVar54 * 0x8123 + (uint)bVar47 * 0x1914 +
                            0x108000 >> 0x10);
        pbVar43[4] = (byte)(auVar59._0_4_ + (uint)auVar63._0_2_ * 0x8123 +
                            (uint)auVar66._0_2_ * 0x1914 + 0x108000 >> 0x10);
        pbVar43[5] = (byte)(auVar59._4_4_ + (uint)auVar63._2_2_ * 0x8123 +
                            (uint)auVar66._2_2_ * 0x1914 + 0x108000 >> 0x10);
        pbVar43[6] = (byte)(auVar59._8_4_ + (uint)auVar63._4_2_ * 0x8123 +
                            (uint)auVar66._4_2_ * 0x1914 + 0x108000 >> 0x10);
        pbVar43[7] = (byte)(auVar59._12_4_ + (uint)auVar63._6_2_ * 0x8123 +
                            (uint)auVar66._6_2_ * 0x1914 + 0x108000 >> 0x10);
        pbVar43 = pbVar43 + 0x10;
      } while (lVar40 != 0);
      param_1 = pbVar42;
      if (param_3 == 0) {
        return;
      }
      goto LAB_00e0298c;
    }
  }
  lVar41 = 0;
LAB_00e0298c:
  lVar40 = uVar39 - lVar41;
  param_1 = param_1 + 2;
  pbVar42 = param_2 + lVar41;
  do {
    lVar40 = lVar40 + -1;
    *pbVar42 = (byte)((uint)param_1[-1] * 0x8123 + (uint)*param_1 * 0x41c7 +
                      (uint)param_1[-2] * 0x1914 + 0x108000 >> 0x10);
    param_1 = param_1 + 3;
    pbVar42 = pbVar42 + 1;
  } while (lVar40 != 0);
  return;
}

