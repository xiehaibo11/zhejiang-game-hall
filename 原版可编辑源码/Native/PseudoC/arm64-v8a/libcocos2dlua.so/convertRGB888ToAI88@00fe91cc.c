
/* cocos2d::Texture2D::convertRGB888ToAI88(unsigned char const*, long, unsigned char*) */

void cocos2d::Texture2D::convertRGB888ToAI88(uchar *param_1,long param_2,uchar *param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ushort uVar3;
  byte *pbVar4;
  long lVar43;
  ulong uVar44;
  uchar *puVar45;
  ulong uVar46;
  undefined1 auVar47 [16];
  byte bVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  byte bVar62;
  byte bVar63;
  byte bVar64;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar65 [16];
  ushort uVar66;
  ushort uVar67;
  undefined1 auVar68 [16];
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
    uVar44 = (param_2 - 3U) / 3;
    uVar1 = uVar44 + 1;
    if ((uVar1 < 0x10) ||
       ((param_3 < param_1 + uVar44 * 3 + 3 && (param_1 < param_3 + uVar44 * 2 + 2)))) {
      lVar43 = 0;
      puVar45 = param_3;
    }
    else {
      uVar46 = uVar1 & 0x7ffffffffffffff0;
      puVar45 = param_3 + uVar46 * 2;
      lVar43 = uVar46 * 3;
      uVar44 = uVar46;
      pbVar42 = param_1;
      do {
        bVar48 = *pbVar42;
        pbVar4 = pbVar42 + 1;
        pbVar5 = pbVar42 + 2;
        pbVar6 = pbVar42 + 3;
        bVar53 = pbVar42[4];
        pbVar7 = pbVar42 + 5;
        pbVar8 = pbVar42 + 6;
        bVar54 = pbVar42[7];
        pbVar9 = pbVar42 + 8;
        pbVar10 = pbVar42 + 9;
        bVar55 = pbVar42[10];
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
        bVar56 = pbVar42[0x1c];
        bVar62 = pbVar42[0x1d];
        pbVar28 = pbVar42 + 0x1e;
        bVar57 = pbVar42[0x1f];
        bVar63 = pbVar42[0x20];
        pbVar29 = pbVar42 + 0x21;
        bVar58 = pbVar42[0x22];
        bVar64 = pbVar42[0x23];
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
        uVar44 = uVar44 - 0x10;
        auVar70._0_8_ =
             CONCAT17(0,CONCAT16(*pbVar10,(uint6)CONCAT14(*pbVar8,(uint)CONCAT12(*pbVar6,(ushort)
                                                  bVar48))));
        auVar70[8] = *pbVar12;
        auVar70[9] = 0;
        auVar70[10] = *pbVar15;
        auVar70[0xb] = 0;
        auVar70[0xc] = *pbVar18;
        auVar70[0xd] = 0;
        auVar70[0xe] = *pbVar21;
        auVar70[0xf] = 0;
        auVar47._0_8_ =
             CONCAT17(0,CONCAT16(*pbVar29,(uint6)CONCAT14(*pbVar28,(uint)CONCAT12(*pbVar27,(ushort)*
                                                  pbVar24))));
        auVar47[8] = *pbVar30;
        auVar47[9] = 0;
        auVar47[10] = *pbVar33;
        auVar47[0xb] = 0;
        auVar47[0xc] = *pbVar36;
        auVar47[0xd] = 0;
        auVar47[0xe] = *pbVar39;
        auVar47[0xf] = 0;
        uVar3 = CONCAT11(0,*pbVar4);
        uVar67 = CONCAT11(0,*pbVar26);
        auVar49._0_4_ = CONCAT13(0,CONCAT12(*pbVar7,(ushort)*pbVar5));
        auVar49[4] = *pbVar9;
        auVar49[5] = 0;
        auVar49[6] = *pbVar11;
        auVar49[7] = 0;
        auVar49[8] = *pbVar14;
        auVar49[9] = 0;
        auVar49[10] = *pbVar17;
        auVar49[0xb] = 0;
        auVar49[0xc] = *pbVar20;
        auVar49[0xd] = 0;
        auVar49[0xe] = *pbVar23;
        auVar49[0xf] = 0;
        auVar59 = NEON_ext(auVar70,auVar70,8,1);
        auVar65 = NEON_umull(auVar70._0_8_,0x12b012b012b012b,2);
        uVar66 = CONCAT11(0,*pbVar25);
        auVar51 = NEON_ext(auVar47,auVar47,8,1);
        auVar47 = NEON_umull(auVar47._0_8_,0x12b012b012b012b,2);
        auVar52[2] = bVar53;
        auVar52._0_2_ = uVar3;
        auVar52[3] = 0;
        auVar52[4] = bVar54;
        auVar52[5] = 0;
        auVar52[6] = bVar55;
        auVar52[7] = 0;
        auVar52[8] = *pbVar13;
        auVar52[9] = 0;
        auVar52[10] = *pbVar16;
        auVar52[0xb] = 0;
        auVar52[0xc] = *pbVar19;
        auVar52[0xd] = 0;
        auVar52[0xe] = *pbVar22;
        auVar52[0xf] = 0;
        auVar60[2] = bVar53;
        auVar60._0_2_ = uVar3;
        auVar60[3] = 0;
        auVar60[4] = bVar54;
        auVar60[5] = 0;
        auVar60[6] = bVar55;
        auVar60[7] = 0;
        auVar60[8] = *pbVar13;
        auVar60[9] = 0;
        auVar60[10] = *pbVar16;
        auVar60[0xb] = 0;
        auVar60[0xc] = *pbVar19;
        auVar60[0xd] = 0;
        auVar60[0xe] = *pbVar22;
        auVar60[0xf] = 0;
        auVar68 = NEON_ext(auVar52,auVar60,8,1);
        auVar60 = NEON_umull(auVar59._0_8_,0x12b012b012b012b,2);
        auVar59[2] = bVar56;
        auVar59._0_2_ = uVar66;
        auVar59[3] = 0;
        auVar59[4] = bVar57;
        auVar59[5] = 0;
        auVar59[6] = bVar58;
        auVar59[7] = 0;
        auVar59[8] = *pbVar31;
        auVar59[9] = 0;
        auVar59[10] = *pbVar34;
        auVar59[0xb] = 0;
        auVar59[0xc] = *pbVar37;
        auVar59[0xd] = 0;
        auVar59[0xe] = *pbVar40;
        auVar59[0xf] = 0;
        auVar69[2] = bVar56;
        auVar69._0_2_ = uVar66;
        auVar69[3] = 0;
        auVar69[4] = bVar57;
        auVar69[5] = 0;
        auVar69[6] = bVar58;
        auVar69[7] = 0;
        auVar69[8] = *pbVar31;
        auVar69[9] = 0;
        auVar69[10] = *pbVar34;
        auVar69[0xb] = 0;
        auVar69[0xc] = *pbVar37;
        auVar69[0xd] = 0;
        auVar69[0xe] = *pbVar40;
        auVar69[0xf] = 0;
        auVar59 = NEON_ext(auVar59,auVar69,8,1);
        auVar70 = NEON_ext(auVar49,auVar49,8,1);
        auVar52 = NEON_umull(auVar51._0_8_,0x12b012b012b012b,2);
        auVar51[2] = bVar62;
        auVar51._0_2_ = uVar67;
        auVar51[3] = 0;
        auVar51[4] = bVar63;
        auVar51[5] = 0;
        auVar51[6] = bVar64;
        auVar51[7] = 0;
        auVar51[8] = *pbVar32;
        auVar51[9] = 0;
        auVar51[10] = *pbVar35;
        auVar51[0xb] = 0;
        auVar51[0xc] = *pbVar38;
        auVar51[0xd] = 0;
        auVar51[0xe] = *pbVar41;
        auVar51[0xf] = 0;
        auVar2[2] = bVar62;
        auVar2._0_2_ = uVar67;
        auVar2[3] = 0;
        auVar2[4] = bVar63;
        auVar2[5] = 0;
        auVar2[6] = bVar64;
        auVar2[7] = 0;
        auVar2[8] = *pbVar32;
        auVar2[9] = 0;
        auVar2[10] = *pbVar35;
        auVar2[0xb] = 0;
        auVar2[0xc] = *pbVar38;
        auVar2[0xd] = 0;
        auVar2[0xe] = *pbVar41;
        auVar2[0xf] = 0;
        auVar69 = NEON_ext(auVar51,auVar2,8,1);
        auVar50._0_8_ =
             CONCAT44(auVar65._4_4_ + (uint)bVar53 * 0x24b + (uint)*pbVar7 * 0x72 + 500,
                      auVar65._0_4_ + (uint)uVar3 * 0x24b + (auVar49._0_4_ & 0xffff) * 0x72 + 500);
        auVar50._8_4_ = auVar65._8_4_ + (uint)bVar54 * 0x24b + (uint)*pbVar9 * 0x72 + 500;
        auVar50._12_4_ = auVar65._12_4_ + (uint)bVar55 * 0x24b + (uint)*pbVar11 * 0x72 + 500;
        auVar65._0_8_ =
             CONCAT44(auVar47._4_4_ + (uint)bVar56 * 0x24b + (uint)bVar62 * 0x72 + 500,
                      auVar47._0_4_ + (uint)uVar66 * 0x24b + (uint)uVar67 * 0x72 + 500);
        auVar65._8_4_ = auVar47._8_4_ + (uint)bVar57 * 0x24b + (uint)bVar63 * 0x72 + 500;
        auVar65._12_4_ = auVar47._12_4_ + (uint)bVar58 * 0x24b + (uint)bVar64 * 0x72 + 500;
        auVar61._0_8_ =
             CONCAT44(auVar60._4_4_ + (uint)auVar68._2_2_ * 0x24b + (uint)auVar70._2_2_ * 0x72 + 500
                      ,auVar60._0_4_ + (uint)auVar68._0_2_ * 0x24b + (uint)auVar70._0_2_ * 0x72 +
                       500);
        auVar61._8_4_ =
             auVar60._8_4_ + (uint)auVar68._4_2_ * 0x24b + (uint)auVar70._4_2_ * 0x72 + 500;
        auVar61._12_4_ =
             auVar60._12_4_ + (uint)auVar68._6_2_ * 0x24b + (uint)auVar70._6_2_ * 0x72 + 500;
        auVar60 = NEON_umull(auVar50._0_8_,0x10624dd310624dd3,4);
        auVar68._0_8_ =
             CONCAT44(auVar52._4_4_ + (uint)auVar59._2_2_ * 0x24b + (uint)auVar69._2_2_ * 0x72 + 500
                      ,auVar52._0_4_ + (uint)auVar59._0_2_ * 0x24b + (uint)auVar69._0_2_ * 0x72 +
                       500);
        auVar68._8_4_ =
             auVar52._8_4_ + (uint)auVar59._4_2_ * 0x24b + (uint)auVar69._4_2_ * 0x72 + 500;
        auVar68._12_4_ =
             auVar52._12_4_ + (uint)auVar59._6_2_ * 0x24b + (uint)auVar69._6_2_ * 0x72 + 500;
        auVar52 = NEON_umull(auVar65._0_8_,0x10624dd310624dd3,4);
        auVar69 = NEON_umull(auVar61._0_8_,0x10624dd310624dd3,4);
        auVar59 = NEON_umull(auVar68._0_8_,0x10624dd310624dd3,4);
        *param_3 = (uchar)(auVar60._4_4_ >> 6);
        param_3[1] = 0xff;
        param_3[2] = (uchar)(auVar60._12_4_ >> 6);
        param_3[3] = 0xff;
        param_3[4] = (uchar)((auVar50._8_8_ & 0xffffffff) / 1000);
        param_3[5] = 0xff;
        param_3[6] = (uchar)(auVar50._8_8_ / 0x3e800000000);
        param_3[7] = 0xff;
        param_3[8] = (uchar)(auVar69._4_4_ >> 6);
        param_3[9] = 0xff;
        param_3[10] = (uchar)(auVar69._12_4_ >> 6);
        param_3[0xb] = 0xff;
        param_3[0xc] = (uchar)((auVar61._8_8_ & 0xffffffff) / 1000);
        param_3[0xd] = 0xff;
        param_3[0xe] = (uchar)((uint)((auVar61._8_8_ >> 0x20) * 0x10624dd3 >> 0x10) >> 0x16);
        param_3[0xf] = 0xff;
        param_3[0x10] = (uchar)(auVar52._4_4_ >> 6);
        param_3[0x11] = 0xff;
        param_3[0x12] = (uchar)(auVar52._12_4_ >> 6);
        param_3[0x13] = 0xff;
        param_3[0x14] = (uchar)((auVar65._8_8_ & 0xffffffff) / 1000);
        param_3[0x15] = 0xff;
        param_3[0x16] = (uchar)((uint)((auVar65._8_8_ >> 0x20) * 0x10624dd3 >> 0x10) >> 0x16);
        param_3[0x17] = 0xff;
        param_3[0x18] = (uchar)(auVar59._4_4_ >> 6);
        param_3[0x19] = 0xff;
        param_3[0x1a] = (uchar)(auVar59._12_4_ >> 6);
        param_3[0x1b] = 0xff;
        param_3[0x1c] = (uchar)((auVar68._8_8_ & 0xffffffff) / 1000);
        param_3[0x1d] = 0xff;
        param_3[0x1e] = (uchar)(auVar68._8_8_ / 0x3e800000000);
        param_3[0x1f] = 0xff;
        param_3 = param_3 + 0x20;
      } while (uVar44 != 0);
                    /* try { // try from 00fe9390 to 010e94c7 has its CatchHandler @ 00fe9390
                       catch() { ... } // from try @ 00fe9390 with catch @ 00fe9390
                       catch() { ... } // from try @ 00fe94d0 with catch @ 00fe9390 */
      if (uVar1 == uVar46) {
        return;
      }
    }
    do {
      pbVar42 = param_1 + lVar43;
      bVar48 = pbVar42[1];
      bVar53 = *pbVar42;
      bVar54 = pbVar42[2];
      lVar43 = lVar43 + 3;
      puVar45[1] = 0xff;
      *puVar45 = (uchar)(((uint)bVar48 * 0x24b + (uint)bVar53 * 299 + (uint)bVar54 * 0x72 + 500) /
                        1000);
      puVar45 = puVar45 + 2;
    } while (lVar43 < param_2 + -2);
  }
  return;
}

