
/* cocos2d::Texture2D::convertRGBA8888ToI8(unsigned char const*, long, unsigned char*) */

void cocos2d::Texture2D::convertRGBA8888ToI8(uchar *param_1,long param_2,uchar *param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  uchar *puVar45;
  long lVar46;
  ulong uVar47;
  long lVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  byte bVar54;
  undefined1 auVar55 [16];
  byte bVar58;
  byte bVar59;
  byte bVar60;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  byte bVar63;
  byte bVar64;
  byte bVar65;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar66 [16];
  ushort uVar67;
  ushort uVar68;
  undefined1 auVar69 [16];
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
  byte *pbVar37;
  byte *pbVar38;
  byte *pbVar39;
  byte *pbVar40;
  byte *pbVar41;
  byte *pbVar42;
  byte *pbVar43;
  byte *pbVar44;
  
  if (0 < param_2 + -3) {
    uVar47 = param_2 - 4;
                    /* try { // try from 00fe8f74 to 010e8f7b has its CatchHandler @ 00fe901c */
    uVar1 = (uVar47 >> 2) + 1;
                    /* try { // try from 00fe8f9c to 010e8f9f has its CatchHandler @ 00fe900c */
                    /* try { // try from 00fe8fa0 to 010e9037 has its CatchHandler @ 00fe8f3c */
    if ((uVar1 < 0x11) ||
       ((param_3 < param_1 + (uVar47 | 3) && (param_1 < param_3 + (uVar47 >> 2) + 1)))) {
      lVar46 = 0;
      puVar45 = param_3;
    }
    else {
      uVar2 = 0x10;
      if ((uVar1 & 0xf) != 0) {
        uVar2 = uVar1 & 0xf;
      }
      puVar45 = param_3 + (uVar1 - uVar2);
      lVar46 = (uVar1 - uVar2) * 4;
      lVar48 = ((uVar47 >> 2) - uVar2) + 1;
      pbVar44 = param_1;
      do {
        bVar54 = *pbVar44;
        pbVar3 = pbVar44 + 1;
        pbVar4 = pbVar44 + 2;
        pbVar5 = pbVar44 + 4;
        pbVar6 = pbVar44 + 5;
        pbVar7 = pbVar44 + 6;
        pbVar8 = pbVar44 + 8;
        pbVar9 = pbVar44 + 9;
        pbVar10 = pbVar44 + 10;
        pbVar11 = pbVar44 + 0xc;
        pbVar12 = pbVar44 + 0xd;
        pbVar13 = pbVar44 + 0xe;
        pbVar14 = pbVar44 + 0x10;
        pbVar15 = pbVar44 + 0x11;
        pbVar16 = pbVar44 + 0x12;
        pbVar17 = pbVar44 + 0x14;
        pbVar18 = pbVar44 + 0x15;
        pbVar19 = pbVar44 + 0x16;
        pbVar20 = pbVar44 + 0x18;
        pbVar21 = pbVar44 + 0x19;
        pbVar22 = pbVar44 + 0x1a;
        pbVar23 = pbVar44 + 0x1c;
        pbVar24 = pbVar44 + 0x1d;
        pbVar25 = pbVar44 + 0x1e;
        pbVar26 = pbVar44 + 0x20;
        pbVar27 = pbVar44 + 0x21;
        pbVar28 = pbVar44 + 0x22;
        pbVar29 = pbVar44 + 0x24;
        bVar58 = pbVar44[0x25];
        bVar63 = pbVar44[0x26];
        pbVar30 = pbVar44 + 0x28;
        bVar59 = pbVar44[0x29];
        bVar64 = pbVar44[0x2a];
        pbVar31 = pbVar44 + 0x2c;
        bVar60 = pbVar44[0x2d];
        bVar65 = pbVar44[0x2e];
        pbVar32 = pbVar44 + 0x30;
        pbVar33 = pbVar44 + 0x31;
        pbVar34 = pbVar44 + 0x32;
        pbVar35 = pbVar44 + 0x34;
        pbVar36 = pbVar44 + 0x35;
        pbVar37 = pbVar44 + 0x36;
        pbVar38 = pbVar44 + 0x38;
        pbVar39 = pbVar44 + 0x39;
        pbVar40 = pbVar44 + 0x3a;
        pbVar41 = pbVar44 + 0x3c;
        pbVar42 = pbVar44 + 0x3d;
        pbVar43 = pbVar44 + 0x3e;
        pbVar44 = pbVar44 + 0x40;
        lVar48 = lVar48 + -0x10;
        auVar49._0_8_ =
             CONCAT17(0,CONCAT16(*pbVar31,(uint6)CONCAT14(*pbVar30,(uint)CONCAT12(*pbVar29,(ushort)*
                                                  pbVar26))));
        auVar49[8] = *pbVar32;
        auVar49[9] = 0;
        auVar49[10] = *pbVar35;
        auVar49[0xb] = 0;
        auVar49[0xc] = *pbVar38;
        auVar49[0xd] = 0;
        auVar49[0xe] = *pbVar41;
        auVar49[0xf] = 0;
        auVar66._0_8_ =
             CONCAT17(0,CONCAT16(*pbVar11,(uint6)CONCAT14(*pbVar8,(uint)CONCAT12(*pbVar5,(ushort)
                                                  bVar54))));
        auVar66[8] = *pbVar14;
        auVar66[9] = 0;
        auVar66[10] = *pbVar17;
        auVar66[0xb] = 0;
        auVar66[0xc] = *pbVar20;
        auVar66[0xd] = 0;
        auVar66[0xe] = *pbVar23;
        auVar66[0xf] = 0;
                    /* catch() { ... } // from try @ 00fe8f9c with catch @ 00fe900c */
        auVar52._0_4_ = CONCAT13(0,CONCAT12(*pbVar6,(ushort)*pbVar3));
        auVar52[4] = *pbVar9;
        auVar52[5] = 0;
        auVar52[6] = *pbVar12;
        auVar52[7] = 0;
        auVar52[8] = *pbVar15;
        auVar52[9] = 0;
        auVar52[10] = *pbVar18;
        auVar52[0xb] = 0;
        auVar52[0xc] = *pbVar21;
        auVar52[0xd] = 0;
        auVar52[0xe] = *pbVar24;
        auVar52[0xf] = 0;
        uVar67 = CONCAT11(0,*pbVar27);
        uVar68 = CONCAT11(0,*pbVar28);
        auVar55._0_4_ = CONCAT13(0,CONCAT12(*pbVar7,(ushort)*pbVar4));
        auVar55[4] = *pbVar10;
        auVar55[5] = 0;
        auVar55[6] = *pbVar13;
        auVar55[7] = 0;
        auVar55[8] = *pbVar16;
        auVar55[9] = 0;
        auVar55[10] = *pbVar19;
        auVar55[0xb] = 0;
        auVar55[0xc] = *pbVar22;
        auVar55[0xd] = 0;
        auVar55[0xe] = *pbVar25;
        auVar55[0xf] = 0;
                    /* catch() { ... } // from try @ 00fe8f74 with catch @ 00fe901c */
        auVar56 = NEON_ext(auVar49,auVar49,8,1);
        auVar61 = NEON_ext(auVar66,auVar66,8,1);
        auVar50 = NEON_umull(auVar66._0_8_,0x12b012b012b012b,2);
        auVar49 = NEON_umull(auVar49._0_8_,0x12b012b012b012b,2);
        auVar66 = NEON_ext(auVar52,auVar52,8,1);
        auVar57[2] = bVar58;
        auVar57._0_2_ = uVar67;
        auVar57[3] = 0;
        auVar57[4] = bVar59;
        auVar57[5] = 0;
        auVar57[6] = bVar60;
        auVar57[7] = 0;
        auVar57[8] = *pbVar33;
        auVar57[9] = 0;
        auVar57[10] = *pbVar36;
        auVar57[0xb] = 0;
        auVar57[0xc] = *pbVar39;
        auVar57[0xd] = 0;
        auVar57[0xe] = *pbVar42;
        auVar57[0xf] = 0;
        auVar62[2] = bVar58;
        auVar62._0_2_ = uVar67;
        auVar62[3] = 0;
        auVar62[4] = bVar59;
        auVar62[5] = 0;
        auVar62[6] = bVar60;
        auVar62[7] = 0;
        auVar62[8] = *pbVar33;
        auVar62[9] = 0;
        auVar62[10] = *pbVar36;
        auVar62[0xb] = 0;
        auVar62[0xc] = *pbVar39;
        auVar62[0xd] = 0;
        auVar62[0xe] = *pbVar42;
        auVar62[0xf] = 0;
        auVar69 = NEON_ext(auVar57,auVar62,8,1);
        auVar62 = NEON_umull(auVar61._0_8_,0x12b012b012b012b,2);
        auVar57 = NEON_umull(auVar56._0_8_,0x12b012b012b012b,2);
        auVar56[2] = bVar63;
        auVar56._0_2_ = uVar68;
        auVar56[3] = 0;
        auVar56[4] = bVar64;
        auVar56[5] = 0;
        auVar56[6] = bVar65;
        auVar56[7] = 0;
        auVar56[8] = *pbVar34;
        auVar56[9] = 0;
        auVar56[10] = *pbVar37;
        auVar56[0xb] = 0;
        auVar56[0xc] = *pbVar40;
        auVar56[0xd] = 0;
        auVar56[0xe] = *pbVar43;
        auVar56[0xf] = 0;
        auVar61[2] = bVar63;
        auVar61._0_2_ = uVar68;
        auVar61[3] = 0;
        auVar61[4] = bVar64;
        auVar61[5] = 0;
        auVar61[6] = bVar65;
        auVar61[7] = 0;
        auVar61[8] = *pbVar34;
        auVar61[9] = 0;
        auVar61[10] = *pbVar37;
        auVar61[0xb] = 0;
        auVar61[0xc] = *pbVar40;
        auVar61[0xd] = 0;
        auVar61[0xe] = *pbVar43;
        auVar61[0xf] = 0;
        auVar56 = NEON_ext(auVar56,auVar61,8,1);
        auVar61 = NEON_ext(auVar55,auVar55,8,1);
        auVar51._0_8_ =
             CONCAT44(auVar50._4_4_ + (uint)*pbVar6 * 0x24b + (uint)*pbVar7 * 0x72 + 500,
                      auVar50._0_4_ + (auVar52._0_4_ & 0xffff) * 0x24b +
                      (auVar55._0_4_ & 0xffff) * 0x72 + 500);
        auVar51._8_4_ = auVar50._8_4_ + (uint)*pbVar9 * 0x24b + (uint)*pbVar10 * 0x72 + 500;
        auVar51._12_4_ = auVar50._12_4_ + (uint)*pbVar12 * 0x24b + (uint)*pbVar13 * 0x72 + 500;
        auVar50._0_8_ =
             CONCAT44(auVar49._4_4_ + (uint)bVar58 * 0x24b + (uint)bVar63 * 0x72 + 500,
                      auVar49._0_4_ + (uint)uVar67 * 0x24b + (uint)uVar68 * 0x72 + 500);
        auVar50._8_4_ = auVar49._8_4_ + (uint)bVar59 * 0x24b + (uint)bVar64 * 0x72 + 500;
        auVar50._12_4_ = auVar49._12_4_ + (uint)bVar60 * 0x24b + (uint)bVar65 * 0x72 + 500;
        auVar53._0_8_ =
             CONCAT44(auVar57._4_4_ + (uint)auVar69._2_2_ * 0x24b + (uint)auVar56._2_2_ * 0x72 + 500
                      ,auVar57._0_4_ + (uint)auVar69._0_2_ * 0x24b + (uint)auVar56._0_2_ * 0x72 +
                       500);
        auVar53._8_4_ =
             auVar57._8_4_ + (uint)auVar69._4_2_ * 0x24b + (uint)auVar56._4_2_ * 0x72 + 500;
        auVar53._12_4_ =
             auVar57._12_4_ + (uint)auVar69._6_2_ * 0x24b + (uint)auVar56._6_2_ * 0x72 + 500;
        auVar69._0_8_ =
             CONCAT44(auVar62._4_4_ + (uint)auVar66._2_2_ * 0x24b + (uint)auVar61._2_2_ * 0x72 + 500
                      ,auVar62._0_4_ + (uint)auVar66._0_2_ * 0x24b + (uint)auVar61._0_2_ * 0x72 +
                       500);
        auVar69._8_4_ =
             auVar62._8_4_ + (uint)auVar66._4_2_ * 0x24b + (uint)auVar61._4_2_ * 0x72 + 500;
        auVar69._12_4_ =
             auVar62._12_4_ + (uint)auVar66._6_2_ * 0x24b + (uint)auVar61._6_2_ * 0x72 + 500;
        auVar62 = NEON_umull(auVar51._0_8_,0x10624dd310624dd3,4);
        auVar57 = NEON_umull(auVar50._0_8_,0x10624dd310624dd3,4);
        auVar61 = NEON_umull(auVar69._0_8_,0x10624dd310624dd3,4);
        auVar56 = NEON_umull(auVar53._0_8_,0x10624dd310624dd3,4);
        param_3[8] = (uchar)(auVar57._4_4_ >> 6);
        param_3[9] = (uchar)(auVar57._12_4_ >> 6);
        param_3[10] = (uchar)((auVar50._8_8_ & 0xffffffff) / 1000);
        param_3[0xb] = (uchar)(auVar50._8_8_ / 0x3e800000000);
        param_3[0xc] = (uchar)(auVar56._4_4_ >> 6);
        param_3[0xd] = (uchar)(auVar56._12_4_ >> 6);
        param_3[0xe] = (uchar)((auVar53._8_8_ & 0xffffffff) / 1000);
        param_3[0xf] = (uchar)(auVar53._8_8_ / 0x3e800000000);
        *param_3 = (uchar)(auVar62._4_4_ >> 6);
        param_3[1] = (uchar)(auVar62._12_4_ >> 6);
        param_3[2] = (uchar)((auVar51._8_8_ & 0xffffffff) / 1000);
        param_3[3] = (uchar)(auVar51._8_8_ / 0x3e800000000);
        param_3[4] = (uchar)(auVar61._4_4_ >> 6);
        param_3[5] = (uchar)(auVar61._12_4_ >> 6);
        param_3[6] = (uchar)((auVar69._8_8_ & 0xffffffff) / 1000);
        param_3[7] = (uchar)(auVar69._8_8_ / 0x3e800000000);
        param_3 = param_3 + 0x10;
      } while (lVar48 != 0);
    }
    do {
      pbVar44 = param_1 + lVar46;
      lVar46 = lVar46 + 4;
      *puVar45 = (uchar)(((uint)pbVar44[1] * 0x24b + (uint)*pbVar44 * 299 + (uint)pbVar44[2] * 0x72
                         + 500) / 1000);
      puVar45 = puVar45 + 1;
    } while (lVar46 < param_2 + -3);
  }
  return;
}

