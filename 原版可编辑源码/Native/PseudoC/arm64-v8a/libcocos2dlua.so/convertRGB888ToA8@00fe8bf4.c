
/* cocos2d::Texture2D::convertRGB888ToA8(unsigned char const*, long, unsigned char*) */

void cocos2d::Texture2D::convertRGB888ToA8(uchar *param_1,long param_2,uchar *param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ushort uVar3;
  byte *pbVar4;
  ulong uVar43;
  long lVar44;
  uchar *puVar45;
  ulong uVar46;
  byte bVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  byte bVar60;
  byte bVar61;
  byte bVar62;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  ushort uVar67;
  ushort uVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
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
  byte *pbVar39;
  byte *pbVar40;
  byte *pbVar41;
  byte *pbVar42;
  
  if (0 < param_2 + -2) {
    uVar43 = (param_2 - 3U) / 3;
    uVar1 = uVar43 + 1;
    if ((uVar1 < 0x10) || ((param_3 < param_1 + uVar43 * 3 + 3 && (param_1 < param_3 + uVar43 + 1)))
       ) {
      lVar44 = 0;
      puVar45 = param_3;
    }
    else {
      uVar46 = uVar1 & 0x7ffffffffffffff0;
      puVar45 = param_3 + uVar46;
      lVar44 = uVar46 * 3;
      uVar43 = uVar46;
      pbVar42 = param_1;
      do {
        bVar47 = *pbVar42;
        pbVar4 = pbVar42 + 1;
        pbVar5 = pbVar42 + 2;
        pbVar6 = pbVar42 + 3;
        bVar52 = pbVar42[4];
        pbVar7 = pbVar42 + 5;
        pbVar8 = pbVar42 + 6;
        bVar53 = pbVar42[7];
        pbVar9 = pbVar42 + 8;
        pbVar10 = pbVar42 + 9;
        bVar54 = pbVar42[10];
        pbVar11 = pbVar42 + 0xb;
        pbVar12 = pbVar42 + 0xc;
        pbVar13 = pbVar42 + 0xd;
        pbVar14 = pbVar42 + 0xe;
        pbVar15 = pbVar42 + 0xf;
        pbVar16 = pbVar42 + 0x10;
        pbVar17 = pbVar42 + 0x11;
        pbVar18 = pbVar42 + 0x12;
        pbVar19 = pbVar42 + 0x13;
        pbVar20 = pbVar42 + 0x14;
        pbVar21 = pbVar42 + 0x15;
        pbVar22 = pbVar42 + 0x16;
        pbVar23 = pbVar42 + 0x17;
        pbVar24 = pbVar42 + 0x18;
        pbVar25 = pbVar42 + 0x19;
        pbVar26 = pbVar42 + 0x1a;
        pbVar27 = pbVar42 + 0x1b;
        bVar55 = pbVar42[0x1c];
        bVar60 = pbVar42[0x1d];
        pbVar28 = pbVar42 + 0x1e;
        bVar56 = pbVar42[0x1f];
        bVar61 = pbVar42[0x20];
        pbVar29 = pbVar42 + 0x21;
        bVar57 = pbVar42[0x22];
        bVar62 = pbVar42[0x23];
        pbVar30 = pbVar42 + 0x24;
        pbVar31 = pbVar42 + 0x25;
        pbVar32 = pbVar42 + 0x26;
        pbVar33 = pbVar42 + 0x27;
        pbVar34 = pbVar42 + 0x28;
        pbVar35 = pbVar42 + 0x29;
        pbVar36 = pbVar42 + 0x2a;
        pbVar37 = pbVar42 + 0x2b;
        pbVar38 = pbVar42 + 0x2c;
        pbVar39 = pbVar42 + 0x2d;
        pbVar40 = pbVar42 + 0x2e;
        pbVar41 = pbVar42 + 0x2f;
        pbVar42 = pbVar42 + 0x30;
        uVar43 = uVar43 - 0x10;
        auVar69._0_8_ =
             CONCAT17(0,CONCAT16(*pbVar29,(uint6)CONCAT14(*pbVar28,(uint)CONCAT12(*pbVar27,(ushort)*
                                                  pbVar24))));
        auVar69[8] = *pbVar30;
        auVar69[9] = 0;
        auVar69[10] = *pbVar33;
        auVar69[0xb] = 0;
        auVar69[0xc] = *pbVar36;
        auVar69[0xd] = 0;
        auVar69[0xe] = *pbVar39;
        auVar69[0xf] = 0;
        auVar65._0_8_ =
             CONCAT17(0,CONCAT16(*pbVar10,(uint6)CONCAT14(*pbVar8,(uint)CONCAT12(*pbVar6,(ushort)
                                                  bVar47))));
        auVar65[8] = *pbVar12;
        auVar65[9] = 0;
        auVar65[10] = *pbVar15;
        auVar65[0xb] = 0;
        auVar65[0xc] = *pbVar18;
        auVar65[0xd] = 0;
        auVar65[0xe] = *pbVar21;
        auVar65[0xf] = 0;
        uVar3 = CONCAT11(0,*pbVar4);
        uVar67 = CONCAT11(0,*pbVar25);
        uVar68 = CONCAT11(0,*pbVar26);
        auVar48._0_4_ = CONCAT13(0,CONCAT12(*pbVar7,(ushort)*pbVar5));
        auVar48[4] = *pbVar9;
        auVar48[5] = 0;
        auVar48[6] = *pbVar11;
        auVar48[7] = 0;
        auVar48[8] = *pbVar14;
        auVar48[9] = 0;
        auVar48[10] = *pbVar17;
        auVar48[0xb] = 0;
        auVar48[0xc] = *pbVar20;
        auVar48[0xd] = 0;
        auVar48[0xe] = *pbVar23;
        auVar48[0xf] = 0;
        auVar50 = NEON_ext(auVar69,auVar69,8,1);
        auVar58 = NEON_ext(auVar65,auVar65,8,1);
        auVar66 = NEON_umull(auVar65._0_8_,0x12b012b012b012b,2);
        auVar63 = NEON_umull(auVar69._0_8_,0x12b012b012b012b,2);
        auVar51[2] = bVar52;
        auVar51._0_2_ = uVar3;
        auVar51[3] = 0;
        auVar51[4] = bVar53;
        auVar51[5] = 0;
        auVar51[6] = bVar54;
        auVar51[7] = 0;
        auVar51[8] = *pbVar13;
        auVar51[9] = 0;
        auVar51[10] = *pbVar16;
        auVar51[0xb] = 0;
        auVar51[0xc] = *pbVar19;
        auVar51[0xd] = 0;
        auVar51[0xe] = *pbVar22;
        auVar51[0xf] = 0;
        auVar59[2] = bVar52;
        auVar59._0_2_ = uVar3;
        auVar59[3] = 0;
        auVar59[4] = bVar53;
        auVar59[5] = 0;
        auVar59[6] = bVar54;
        auVar59[7] = 0;
        auVar59[8] = *pbVar13;
        auVar59[9] = 0;
        auVar59[10] = *pbVar16;
        auVar59[0xb] = 0;
        auVar59[0xc] = *pbVar19;
        auVar59[0xd] = 0;
        auVar59[0xe] = *pbVar22;
        auVar59[0xf] = 0;
        auVar69 = NEON_ext(auVar51,auVar59,8,1);
        auVar59 = NEON_umull(auVar58._0_8_,0x12b012b012b012b,2);
        auVar58[2] = bVar55;
        auVar58._0_2_ = uVar67;
        auVar58[3] = 0;
        auVar58[4] = bVar56;
        auVar58[5] = 0;
        auVar58[6] = bVar57;
        auVar58[7] = 0;
        auVar58[8] = *pbVar31;
        auVar58[9] = 0;
        auVar58[10] = *pbVar34;
        auVar58[0xb] = 0;
        auVar58[0xc] = *pbVar37;
        auVar58[0xd] = 0;
        auVar58[0xe] = *pbVar40;
        auVar58[0xf] = 0;
        auVar70[2] = bVar55;
        auVar70._0_2_ = uVar67;
        auVar70[3] = 0;
        auVar70[4] = bVar56;
        auVar70[5] = 0;
        auVar70[6] = bVar57;
        auVar70[7] = 0;
        auVar70[8] = *pbVar31;
        auVar70[9] = 0;
        auVar70[10] = *pbVar34;
        auVar70[0xb] = 0;
        auVar70[0xc] = *pbVar37;
        auVar70[0xd] = 0;
        auVar70[0xe] = *pbVar40;
        auVar70[0xf] = 0;
        auVar58 = NEON_ext(auVar58,auVar70,8,1);
        auVar70 = NEON_ext(auVar48,auVar48,8,1);
        auVar51 = NEON_umull(auVar50._0_8_,0x12b012b012b012b,2);
        auVar50[2] = bVar60;
        auVar50._0_2_ = uVar68;
        auVar50[3] = 0;
        auVar50[4] = bVar61;
        auVar50[5] = 0;
        auVar50[6] = bVar62;
        auVar50[7] = 0;
        auVar50[8] = *pbVar32;
        auVar50[9] = 0;
        auVar50[10] = *pbVar35;
        auVar50[0xb] = 0;
        auVar50[0xc] = *pbVar38;
        auVar50[0xd] = 0;
        auVar50[0xe] = *pbVar41;
        auVar50[0xf] = 0;
        auVar2[2] = bVar60;
        auVar2._0_2_ = uVar68;
        auVar2[3] = 0;
        auVar2[4] = bVar61;
        auVar2[5] = 0;
        auVar2[6] = bVar62;
        auVar2[7] = 0;
        auVar2[8] = *pbVar32;
        auVar2[9] = 0;
        auVar2[10] = *pbVar35;
        auVar2[0xb] = 0;
        auVar2[0xc] = *pbVar38;
        auVar2[0xd] = 0;
        auVar2[0xe] = *pbVar41;
        auVar2[0xf] = 0;
        auVar50 = NEON_ext(auVar50,auVar2,8,1);
        auVar49._0_8_ =
             CONCAT44(auVar63._4_4_ + (uint)bVar55 * 0x24b + (uint)bVar60 * 0x72 + 500,
                      auVar63._0_4_ + (uint)uVar67 * 0x24b + (uint)uVar68 * 0x72 + 500);
        auVar49._8_4_ = auVar63._8_4_ + (uint)bVar56 * 0x24b + (uint)bVar61 * 0x72 + 500;
        auVar49._12_4_ = auVar63._12_4_ + (uint)bVar57 * 0x24b + (uint)bVar62 * 0x72 + 500;
        auVar64._0_8_ =
             CONCAT44(auVar66._4_4_ + (uint)bVar52 * 0x24b + (uint)*pbVar7 * 0x72 + 500,
                      auVar66._0_4_ + (uint)uVar3 * 0x24b + (auVar48._0_4_ & 0xffff) * 0x72 + 500);
        auVar64._8_4_ = auVar66._8_4_ + (uint)bVar53 * 0x24b + (uint)*pbVar9 * 0x72 + 500;
        auVar64._12_4_ = auVar66._12_4_ + (uint)bVar54 * 0x24b + (uint)*pbVar11 * 0x72 + 500;
        auVar66._0_8_ =
             CONCAT44(auVar59._4_4_ + (uint)auVar69._2_2_ * 0x24b + (uint)auVar70._2_2_ * 0x72 + 500
                      ,auVar59._0_4_ + (uint)auVar69._0_2_ * 0x24b + (uint)auVar70._0_2_ * 0x72 +
                       500);
        auVar66._8_4_ =
             auVar59._8_4_ + (uint)auVar69._4_2_ * 0x24b + (uint)auVar70._4_2_ * 0x72 + 500;
        auVar66._12_4_ =
             auVar59._12_4_ + (uint)auVar69._6_2_ * 0x24b + (uint)auVar70._6_2_ * 0x72 + 500;
        auVar70 = NEON_umull(auVar64._0_8_,0x10624dd310624dd3,4);
        auVar63._0_8_ =
             CONCAT44(auVar51._4_4_ + (uint)auVar58._2_2_ * 0x24b + (uint)auVar50._2_2_ * 0x72 + 500
                      ,auVar51._0_4_ + (uint)auVar58._0_2_ * 0x24b + (uint)auVar50._0_2_ * 0x72 +
                       500);
        auVar63._8_4_ =
             auVar51._8_4_ + (uint)auVar58._4_2_ * 0x24b + (uint)auVar50._4_2_ * 0x72 + 500;
        auVar63._12_4_ =
             auVar51._12_4_ + (uint)auVar58._6_2_ * 0x24b + (uint)auVar50._6_2_ * 0x72 + 500;
        auVar51 = NEON_umull(auVar49._0_8_,0x10624dd310624dd3,4);
        auVar58 = NEON_umull(auVar66._0_8_,0x10624dd310624dd3,4);
        auVar59 = NEON_umull(auVar63._0_8_,0x10624dd310624dd3,4);
        param_3[8] = (uchar)(auVar51._4_4_ >> 6);
        param_3[9] = (uchar)(auVar51._12_4_ >> 6);
        param_3[10] = (uchar)((auVar49._8_8_ & 0xffffffff) / 1000);
        param_3[0xb] = (uchar)((uint)((auVar49._8_8_ >> 0x20) * 0x10624dd3 >> 0x10) >> 0x16);
        param_3[0xc] = (uchar)(auVar59._4_4_ >> 6);
        param_3[0xd] = (uchar)(auVar59._12_4_ >> 6);
        param_3[0xe] = (uchar)((auVar63._8_8_ & 0xffffffff) / 1000);
        param_3[0xf] = (uchar)(auVar63._8_8_ / 0x3e800000000);
        *param_3 = (uchar)(auVar70._4_4_ >> 6);
        param_3[1] = (uchar)(auVar70._12_4_ >> 6);
        param_3[2] = (uchar)((auVar64._8_8_ & 0xffffffff) / 1000);
        param_3[3] = (uchar)(auVar64._8_8_ / 0x3e800000000);
        param_3[4] = (uchar)(auVar58._4_4_ >> 6);
        param_3[5] = (uchar)(auVar58._12_4_ >> 6);
        param_3[6] = (uchar)((auVar66._8_8_ & 0xffffffff) / 1000);
        param_3[7] = (uchar)((uint)((auVar66._8_8_ >> 0x20) * 0x10624dd3 >> 0x10) >> 0x16);
        param_3 = param_3 + 0x10;
      } while (uVar43 != 0);
      if (uVar1 == uVar46) {
        return;
      }
    }
    do {
      pbVar42 = param_1 + lVar44;
      lVar44 = lVar44 + 3;
      *puVar45 = (uchar)(((uint)pbVar42[1] * 0x24b + (uint)*pbVar42 * 299 + (uint)pbVar42[2] * 0x72
                         + 500) / 1000);
      puVar45 = puVar45 + 1;
    } while (lVar44 < param_2 + -2);
  }
  return;
}

