
void FUN_00e027f4(byte *param_1,byte *param_2,uint param_3)

{
  undefined1 auVar1 [16];
  ushort uVar2;
  byte *pbVar3;
  ulong uVar37;
  long lVar38;
  long lVar39;
  byte *pbVar40;
  byte *pbVar41;
  byte bVar42;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  undefined1 auVar43 [16];
  byte bVar50;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  ushort uVar61;
  ushort uVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  byte *pbVar4;
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
  
  if ((int)param_3 < 1) {
    return;
  }
  uVar37 = (ulong)param_3;
  if (0xf < param_3) {
    param_3 = param_3 & 0xf;
    lVar39 = uVar37 - param_3;
    if (lVar39 == 0) goto LAB_00e02838;
    if ((param_1 + uVar37 * 3 <= param_2) || (param_2 + uVar37 <= param_1)) {
      pbVar40 = param_1 + uVar37 * 3 + (ulong)param_3 * -3;
      lVar38 = lVar39;
      pbVar41 = param_2;
      do {
        bVar42 = *param_1;
        pbVar3 = param_1 + 1;
        bVar50 = param_1[2];
        pbVar4 = param_1 + 3;
        bVar44 = param_1[4];
        bVar53 = param_1[5];
        pbVar5 = param_1 + 6;
        bVar45 = param_1[7];
        bVar54 = param_1[8];
        pbVar6 = param_1 + 9;
        bVar46 = param_1[10];
        bVar55 = param_1[0xb];
        pbVar7 = param_1 + 0xc;
        pbVar8 = param_1 + 0xd;
        pbVar9 = param_1 + 0xe;
        pbVar10 = param_1 + 0xf;
        pbVar11 = param_1 + 0x10;
        pbVar12 = param_1 + 0x11;
        pbVar13 = param_1 + 0x12;
        pbVar14 = param_1 + 0x13;
        pbVar15 = param_1 + 0x14;
        pbVar16 = param_1 + 0x15;
        pbVar17 = param_1 + 0x16;
        pbVar18 = param_1 + 0x17;
        pbVar19 = param_1 + 0x18;
        pbVar20 = param_1 + 0x19;
        pbVar21 = param_1 + 0x1a;
        pbVar22 = param_1 + 0x1b;
        bVar47 = param_1[0x1c];
        bVar56 = param_1[0x1d];
        pbVar23 = param_1 + 0x1e;
        bVar48 = param_1[0x1f];
        bVar57 = param_1[0x20];
        pbVar24 = param_1 + 0x21;
        bVar49 = param_1[0x22];
        bVar58 = param_1[0x23];
        pbVar25 = param_1 + 0x24;
        pbVar26 = param_1 + 0x25;
        pbVar27 = param_1 + 0x26;
        pbVar28 = param_1 + 0x27;
        pbVar29 = param_1 + 0x28;
        pbVar30 = param_1 + 0x29;
        pbVar31 = param_1 + 0x2a;
        pbVar32 = param_1 + 0x2b;
        pbVar33 = param_1 + 0x2c;
        pbVar34 = param_1 + 0x2d;
        pbVar35 = param_1 + 0x2e;
        pbVar36 = param_1 + 0x2f;
        param_1 = param_1 + 0x30;
        lVar38 = lVar38 + -0x10;
        auVar59._0_8_ =
             CONCAT17(0,CONCAT16(*pbVar24,(uint6)CONCAT14(*pbVar23,(uint)CONCAT12(*pbVar22,(ushort)*
                                                  pbVar19))));
        auVar59[8] = *pbVar25;
        auVar59[9] = 0;
        auVar59[10] = *pbVar28;
        auVar59[0xb] = 0;
        auVar59[0xc] = *pbVar31;
        auVar59[0xd] = 0;
        auVar59[0xe] = *pbVar34;
        auVar59[0xf] = 0;
        auVar60._0_8_ =
             CONCAT17(0,CONCAT16(*pbVar6,(uint6)CONCAT14(*pbVar5,(uint)CONCAT12(*pbVar4,(ushort)
                                                  bVar42))));
        auVar60[8] = *pbVar7;
        auVar60[9] = 0;
        auVar60[10] = *pbVar10;
        auVar60[0xb] = 0;
        auVar60[0xc] = *pbVar13;
        auVar60[0xd] = 0;
        auVar60[0xe] = *pbVar16;
        auVar60[0xf] = 0;
        uVar2 = CONCAT11(0,*pbVar3);
        uVar61 = CONCAT11(0,*pbVar20);
        uVar62 = CONCAT11(0,*pbVar21);
        auVar43 = NEON_ext(auVar59,auVar59,8,1);
        auVar51 = NEON_ext(auVar60,auVar60,8,1);
        auVar60 = NEON_umull(auVar60._0_8_,0x41c741c741c741c7,2);
        auVar59 = NEON_umull(auVar59._0_8_,0x41c741c741c741c7,2);
        auVar52[2] = bVar44;
        auVar52._0_2_ = uVar2;
        auVar52[3] = 0;
        auVar52[4] = bVar45;
        auVar52[5] = 0;
        auVar52[6] = bVar46;
        auVar52[7] = 0;
        auVar52[8] = *pbVar8;
        auVar52[9] = 0;
        auVar52[10] = *pbVar11;
        auVar52[0xb] = 0;
        auVar52[0xc] = *pbVar14;
        auVar52[0xd] = 0;
        auVar52[0xe] = *pbVar17;
        auVar52[0xf] = 0;
        auVar63[2] = bVar44;
        auVar63._0_2_ = uVar2;
        auVar63[3] = 0;
        auVar63[4] = bVar45;
        auVar63[5] = 0;
        auVar63[6] = bVar46;
        auVar63[7] = 0;
        auVar63[8] = *pbVar8;
        auVar63[9] = 0;
        auVar63[10] = *pbVar11;
        auVar63[0xb] = 0;
        auVar63[0xc] = *pbVar14;
        auVar63[0xd] = 0;
        auVar63[0xe] = *pbVar17;
        auVar63[0xf] = 0;
        auVar63 = NEON_ext(auVar52,auVar63,8,1);
        auVar52 = NEON_umull(auVar51._0_8_,0x41c741c741c741c7,2);
        auVar64[2] = bVar47;
        auVar64._0_2_ = uVar61;
        auVar64[3] = 0;
        auVar64[4] = bVar48;
        auVar64[5] = 0;
        auVar64[6] = bVar49;
        auVar64[7] = 0;
        auVar64[8] = *pbVar26;
        auVar64[9] = 0;
        auVar64[10] = *pbVar29;
        auVar64[0xb] = 0;
        auVar64[0xc] = *pbVar32;
        auVar64[0xd] = 0;
        auVar64[0xe] = *pbVar35;
        auVar64[0xf] = 0;
        auVar66[2] = bVar47;
        auVar66._0_2_ = uVar61;
        auVar66[3] = 0;
        auVar66[4] = bVar48;
        auVar66[5] = 0;
        auVar66[6] = bVar49;
        auVar66[7] = 0;
        auVar66[8] = *pbVar26;
        auVar66[9] = 0;
        auVar66[10] = *pbVar29;
        auVar66[0xb] = 0;
        auVar66[0xc] = *pbVar32;
        auVar66[0xd] = 0;
        auVar66[0xe] = *pbVar35;
        auVar66[0xf] = 0;
        auVar64 = NEON_ext(auVar64,auVar66,8,1);
        auVar51[1] = 0;
        auVar51[0] = bVar50;
        auVar51[2] = bVar53;
        auVar51[3] = 0;
        auVar51[4] = bVar54;
        auVar51[5] = 0;
        auVar51[6] = bVar55;
        auVar51[7] = 0;
        auVar51[8] = *pbVar9;
        auVar51[9] = 0;
        auVar51[10] = *pbVar12;
        auVar51[0xb] = 0;
        auVar51[0xc] = *pbVar15;
        auVar51[0xd] = 0;
        auVar51[0xe] = *pbVar18;
        auVar51[0xf] = 0;
        auVar65[1] = 0;
        auVar65[0] = bVar50;
        auVar65[2] = bVar53;
        auVar65[3] = 0;
        auVar65[4] = bVar54;
        auVar65[5] = 0;
        auVar65[6] = bVar55;
        auVar65[7] = 0;
        auVar65[8] = *pbVar9;
        auVar65[9] = 0;
        auVar65[10] = *pbVar12;
        auVar65[0xb] = 0;
        auVar65[0xc] = *pbVar15;
        auVar65[0xd] = 0;
        auVar65[0xe] = *pbVar18;
        auVar65[0xf] = 0;
        auVar66 = NEON_ext(auVar51,auVar65,8,1);
        auVar51 = NEON_umull(auVar43._0_8_,0x41c741c741c741c7,2);
        auVar43[2] = bVar56;
        auVar43._0_2_ = uVar62;
        auVar43[3] = 0;
        auVar43[4] = bVar57;
        auVar43[5] = 0;
        auVar43[6] = bVar58;
        auVar43[7] = 0;
        auVar43[8] = *pbVar27;
        auVar43[9] = 0;
        auVar43[10] = *pbVar30;
        auVar43[0xb] = 0;
        auVar43[0xc] = *pbVar33;
        auVar43[0xd] = 0;
        auVar43[0xe] = *pbVar36;
        auVar43[0xf] = 0;
        auVar1[2] = bVar56;
        auVar1._0_2_ = uVar62;
        auVar1[3] = 0;
        auVar1[4] = bVar57;
        auVar1[5] = 0;
        auVar1[6] = bVar58;
        auVar1[7] = 0;
        auVar1[8] = *pbVar27;
        auVar1[9] = 0;
        auVar1[10] = *pbVar30;
        auVar1[0xb] = 0;
        auVar1[0xc] = *pbVar33;
        auVar1[0xd] = 0;
        auVar1[0xe] = *pbVar36;
        auVar1[0xf] = 0;
        auVar65 = NEON_ext(auVar43,auVar1,8,1);
        pbVar41[8] = (byte)(auVar59._0_4_ + (uint)uVar61 * 0x8123 + (uint)uVar62 * 0x1914 + 0x108000
                           >> 0x10);
        pbVar41[9] = (byte)(auVar59._4_4_ + (uint)bVar47 * 0x8123 + (uint)bVar56 * 0x1914 + 0x108000
                           >> 0x10);
        pbVar41[10] = (byte)(auVar59._8_4_ + (uint)bVar48 * 0x8123 + (uint)bVar57 * 0x1914 +
                             0x108000 >> 0x10);
        pbVar41[0xb] = (byte)(auVar59._12_4_ + (uint)bVar49 * 0x8123 + (uint)bVar58 * 0x1914 +
                              0x108000 >> 0x10);
        pbVar41[0xc] = (byte)(auVar51._0_4_ + (uint)auVar64._0_2_ * 0x8123 +
                              (uint)auVar65._0_2_ * 0x1914 + 0x108000 >> 0x10);
        pbVar41[0xd] = (byte)(auVar51._4_4_ + (uint)auVar64._2_2_ * 0x8123 +
                              (uint)auVar65._2_2_ * 0x1914 + 0x108000 >> 0x10);
        pbVar41[0xe] = (byte)(auVar51._8_4_ + (uint)auVar64._4_2_ * 0x8123 +
                              (uint)auVar65._4_2_ * 0x1914 + 0x108000 >> 0x10);
        pbVar41[0xf] = (byte)(auVar51._12_4_ + (uint)auVar64._6_2_ * 0x8123 +
                              (uint)auVar65._6_2_ * 0x1914 + 0x108000 >> 0x10);
        *pbVar41 = (byte)(auVar60._0_4_ + (uint)uVar2 * 0x8123 +
                          (CONCAT12(bVar54,CONCAT11(bVar53,bVar50)) & 0xff) * 0x1914 + 0x108000 >>
                         0x10);
        pbVar41[1] = (byte)(auVar60._4_4_ + (uint)bVar44 * 0x8123 + (uint)bVar53 * 0x1914 + 0x108000
                           >> 0x10);
        pbVar41[2] = (byte)(auVar60._8_4_ + (uint)bVar45 * 0x8123 + (uint)bVar54 * 0x1914 + 0x108000
                           >> 0x10);
        pbVar41[3] = (byte)(auVar60._12_4_ + (uint)bVar46 * 0x8123 + (uint)bVar55 * 0x1914 +
                            0x108000 >> 0x10);
        pbVar41[4] = (byte)(auVar52._0_4_ + (uint)auVar63._0_2_ * 0x8123 +
                            (uint)auVar66._0_2_ * 0x1914 + 0x108000 >> 0x10);
        pbVar41[5] = (byte)(auVar52._4_4_ + (uint)auVar63._2_2_ * 0x8123 +
                            (uint)auVar66._2_2_ * 0x1914 + 0x108000 >> 0x10);
        pbVar41[6] = (byte)(auVar52._8_4_ + (uint)auVar63._4_2_ * 0x8123 +
                            (uint)auVar66._4_2_ * 0x1914 + 0x108000 >> 0x10);
        pbVar41[7] = (byte)(auVar52._12_4_ + (uint)auVar63._6_2_ * 0x8123 +
                            (uint)auVar66._6_2_ * 0x1914 + 0x108000 >> 0x10);
        pbVar41 = pbVar41 + 0x10;
      } while (lVar38 != 0);
      param_1 = pbVar40;
      if (param_3 == 0) {
        return;
      }
      goto LAB_00e02838;
    }
  }
  lVar39 = 0;
LAB_00e02838:
  lVar38 = uVar37 - lVar39;
  pbVar40 = param_2 + lVar39;
  do {
    lVar38 = lVar38 + -1;
    *pbVar40 = (byte)((uint)param_1[1] * 0x8123 + (uint)*param_1 * 0x41c7 +
                      (uint)param_1[2] * 0x1914 + 0x108000 >> 0x10);
    param_1 = param_1 + 3;
    pbVar40 = pbVar40 + 1;
  } while (lVar38 != 0);
  return;
}

