
/* cocos2d::Texture2D::convertRGBA8888ToAI88(unsigned char const*, long, unsigned char*) */

void cocos2d::Texture2D::convertRGBA8888ToAI88(uchar *param_1,long param_2,uchar *param_3)

{
  ulong uVar1;
  ushort uVar2;
  ushort uVar3;
  byte *pbVar4;
  long lVar46;
  uchar *puVar47;
  ulong uVar48;
  ulong uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
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
  byte *pbVar45;
  
  if (0 < param_2 + -3) {
    uVar1 = (param_2 - 4U >> 2) + 1;
    if ((uVar1 < 0x10) ||
       ((param_3 < param_1 + (param_2 & 0xfffffffffffffffc) &&
        (param_1 < param_3 + (param_2 - 4U >> 1 & 0x7ffffffffffffffe) + 2)))) {
      lVar46 = 0;
      puVar47 = param_3;
    }
    else {
      uVar48 = uVar1 & 0x7ffffffffffffff0;
      puVar47 = param_3 + uVar48 * 2;
      lVar46 = uVar48 << 2;
      uVar49 = uVar48;
      pbVar45 = param_1;
      do {
        bVar54 = *pbVar45;
        pbVar4 = pbVar45 + 1;
        pbVar5 = pbVar45 + 2;
        bVar61 = pbVar45[3];
        pbVar6 = pbVar45 + 4;
        pbVar7 = pbVar45 + 5;
        bVar55 = pbVar45[6];
        bVar62 = pbVar45[7];
        pbVar8 = pbVar45 + 8;
        pbVar9 = pbVar45 + 9;
        bVar56 = pbVar45[10];
        bVar63 = pbVar45[0xb];
        pbVar10 = pbVar45 + 0xc;
        pbVar11 = pbVar45 + 0xd;
        bVar57 = pbVar45[0xe];
        bVar64 = pbVar45[0xf];
        pbVar12 = pbVar45 + 0x10;
        pbVar13 = pbVar45 + 0x11;
        pbVar14 = pbVar45 + 0x12;
        bVar65 = pbVar45[0x13];
        pbVar15 = pbVar45 + 0x14;
        pbVar16 = pbVar45 + 0x15;
        pbVar17 = pbVar45 + 0x16;
        bVar66 = pbVar45[0x17];
        pbVar18 = pbVar45 + 0x18;
        pbVar19 = pbVar45 + 0x19;
        pbVar20 = pbVar45 + 0x1a;
        bVar67 = pbVar45[0x1b];
        pbVar21 = pbVar45 + 0x1c;
        pbVar22 = pbVar45 + 0x1d;
        pbVar23 = pbVar45 + 0x1e;
        bVar68 = pbVar45[0x1f];
        pbVar24 = pbVar45 + 0x20;
        pbVar25 = pbVar45 + 0x21;
        pbVar26 = pbVar45 + 0x22;
        bVar69 = pbVar45[0x23];
        pbVar27 = pbVar45 + 0x24;
        pbVar28 = pbVar45 + 0x25;
        bVar58 = pbVar45[0x26];
        bVar70 = pbVar45[0x27];
        pbVar29 = pbVar45 + 0x28;
        pbVar30 = pbVar45 + 0x29;
        bVar59 = pbVar45[0x2a];
        bVar71 = pbVar45[0x2b];
        pbVar31 = pbVar45 + 0x2c;
        pbVar32 = pbVar45 + 0x2d;
        bVar60 = pbVar45[0x2e];
        bVar72 = pbVar45[0x2f];
        pbVar33 = pbVar45 + 0x30;
        pbVar34 = pbVar45 + 0x31;
        pbVar35 = pbVar45 + 0x32;
        bVar73 = pbVar45[0x33];
        pbVar36 = pbVar45 + 0x34;
        pbVar37 = pbVar45 + 0x35;
        pbVar38 = pbVar45 + 0x36;
        bVar74 = pbVar45[0x37];
        pbVar39 = pbVar45 + 0x38;
        pbVar40 = pbVar45 + 0x39;
        pbVar41 = pbVar45 + 0x3a;
        bVar75 = pbVar45[0x3b];
        pbVar42 = pbVar45 + 0x3c;
        pbVar43 = pbVar45 + 0x3d;
        pbVar44 = pbVar45 + 0x3e;
        bVar76 = pbVar45[0x3f];
        pbVar45 = pbVar45 + 0x40;
        uVar49 = uVar49 - 0x10;
        auVar82._0_8_ =
             CONCAT17(0,CONCAT16(*pbVar10,(uint6)CONCAT14(*pbVar8,(uint)CONCAT12(*pbVar6,(ushort)
                                                  bVar54))));
        auVar82[8] = *pbVar12;
        auVar82[9] = 0;
        auVar82[10] = *pbVar15;
        auVar82[0xb] = 0;
        auVar82[0xc] = *pbVar18;
        auVar82[0xd] = 0;
        auVar82[0xe] = *pbVar21;
        auVar82[0xf] = 0;
        auVar50._0_8_ =
             CONCAT17(0,CONCAT16(*pbVar31,(uint6)CONCAT14(*pbVar29,(uint)CONCAT12(*pbVar27,(ushort)*
                                                  pbVar24))));
        auVar50[8] = *pbVar33;
        auVar50[9] = 0;
        auVar50[10] = *pbVar36;
        auVar50[0xb] = 0;
        auVar50[0xc] = *pbVar39;
        auVar50[0xd] = 0;
        auVar50[0xe] = *pbVar42;
        auVar50[0xf] = 0;
        auVar53._0_4_ = CONCAT13(0,CONCAT12(*pbVar7,(ushort)*pbVar4));
        auVar53[4] = *pbVar9;
        auVar53[5] = 0;
        auVar53[6] = *pbVar11;
        auVar53[7] = 0;
        auVar53[8] = *pbVar13;
        auVar53[9] = 0;
        auVar53[10] = *pbVar16;
        auVar53[0xb] = 0;
        auVar53[0xc] = *pbVar19;
        auVar53[0xd] = 0;
        auVar53[0xe] = *pbVar22;
        auVar53[0xf] = 0;
        auVar81 = NEON_ext(auVar82,auVar82,8,1);
        auVar51 = NEON_umull(auVar82._0_8_,0x12b012b012b012b,2);
        auVar77._0_4_ = CONCAT13(0,CONCAT12(*pbVar28,(ushort)*pbVar25));
        auVar77[4] = *pbVar30;
        auVar77[5] = 0;
        auVar77[6] = *pbVar32;
        auVar77[7] = 0;
        auVar77[8] = *pbVar34;
        auVar77[9] = 0;
        auVar77[10] = *pbVar37;
        auVar77[0xb] = 0;
        auVar77[0xc] = *pbVar40;
        auVar77[0xd] = 0;
        auVar77[0xe] = *pbVar43;
        auVar77[0xf] = 0;
        uVar2 = CONCAT11(0,*pbVar5);
        auVar79 = NEON_ext(auVar50,auVar50,8,1);
        auVar50 = NEON_umull(auVar50._0_8_,0x12b012b012b012b,2);
        auVar83 = NEON_ext(auVar53,auVar53,8,1);
        auVar82 = NEON_umull(auVar81._0_8_,0x12b012b012b012b,2);
        uVar3 = CONCAT11(0,*pbVar26);
        auVar84 = NEON_ext(auVar77,auVar77,8,1);
        auVar80[2] = bVar55;
        auVar80._0_2_ = uVar2;
        auVar80[3] = 0;
        auVar80[4] = bVar56;
        auVar80[5] = 0;
        auVar80[6] = bVar57;
        auVar80[7] = 0;
        auVar80[8] = *pbVar14;
        auVar80[9] = 0;
        auVar80[10] = *pbVar17;
        auVar80[0xb] = 0;
        auVar80[0xc] = *pbVar20;
        auVar80[0xd] = 0;
        auVar80[0xe] = *pbVar23;
        auVar80[0xf] = 0;
        auVar85[2] = bVar55;
        auVar85._0_2_ = uVar2;
        auVar85[3] = 0;
        auVar85[4] = bVar56;
        auVar85[5] = 0;
        auVar85[6] = bVar57;
        auVar85[7] = 0;
        auVar85[8] = *pbVar14;
        auVar85[9] = 0;
        auVar85[10] = *pbVar17;
        auVar85[0xb] = 0;
        auVar85[0xc] = *pbVar20;
        auVar85[0xd] = 0;
        auVar85[0xe] = *pbVar23;
        auVar85[0xf] = 0;
        auVar85 = NEON_ext(auVar80,auVar85,8,1);
        auVar80 = NEON_umull(auVar79._0_8_,0x12b012b012b012b,2);
                    /* try { // try from 00fe94c8 to 010e94cf has its CatchHandler @ 00fe95e0 */
                    /* try { // try from 00fe94d0 to 010e95f3 has its CatchHandler @ 00fe9390 */
        auVar79[2] = bVar58;
        auVar79._0_2_ = uVar3;
        auVar79[3] = 0;
        auVar79[4] = bVar59;
        auVar79[5] = 0;
        auVar79[6] = bVar60;
        auVar79[7] = 0;
        auVar79[8] = *pbVar35;
        auVar79[9] = 0;
        auVar79[10] = *pbVar38;
        auVar79[0xb] = 0;
        auVar79[0xc] = *pbVar41;
        auVar79[0xd] = 0;
        auVar79[0xe] = *pbVar44;
        auVar79[0xf] = 0;
        auVar81[2] = bVar58;
        auVar81._0_2_ = uVar3;
        auVar81[3] = 0;
        auVar81[4] = bVar59;
        auVar81[5] = 0;
        auVar81[6] = bVar60;
        auVar81[7] = 0;
        auVar81[8] = *pbVar35;
        auVar81[9] = 0;
        auVar81[10] = *pbVar38;
        auVar81[0xb] = 0;
        auVar81[0xc] = *pbVar41;
        auVar81[0xd] = 0;
        auVar81[0xe] = *pbVar44;
        auVar81[0xf] = 0;
        auVar79 = NEON_ext(auVar79,auVar81,8,1);
        auVar52._0_8_ =
             CONCAT44(auVar51._4_4_ + (uint)*pbVar7 * 0x24b + (uint)bVar55 * 0x72 + 500,
                      auVar51._0_4_ + (auVar53._0_4_ & 0xffff) * 0x24b + (uint)uVar2 * 0x72 + 500);
        auVar52._8_4_ = auVar51._8_4_ + (uint)*pbVar9 * 0x24b + (uint)bVar56 * 0x72 + 500;
        auVar52._12_4_ = auVar51._12_4_ + (uint)*pbVar11 * 0x24b + (uint)bVar57 * 0x72 + 500;
        auVar51._0_8_ =
             CONCAT44(auVar50._4_4_ + (uint)*pbVar28 * 0x24b + (uint)bVar58 * 0x72 + 500,
                      auVar50._0_4_ + (auVar77._0_4_ & 0xffff) * 0x24b + (uint)uVar3 * 0x72 + 500);
        auVar51._8_4_ = auVar50._8_4_ + (uint)*pbVar30 * 0x24b + (uint)bVar59 * 0x72 + 500;
        auVar51._12_4_ = auVar50._12_4_ + (uint)*pbVar32 * 0x24b + (uint)bVar60 * 0x72 + 500;
        auVar78._0_8_ =
             CONCAT44(auVar82._4_4_ + (uint)auVar83._2_2_ * 0x24b + (uint)auVar85._2_2_ * 0x72 + 500
                      ,auVar82._0_4_ + (uint)auVar83._0_2_ * 0x24b + (uint)auVar85._0_2_ * 0x72 +
                       500);
        auVar78._8_4_ =
             auVar82._8_4_ + (uint)auVar83._4_2_ * 0x24b + (uint)auVar85._4_2_ * 0x72 + 500;
        auVar78._12_4_ =
             auVar82._12_4_ + (uint)auVar83._6_2_ * 0x24b + (uint)auVar85._6_2_ * 0x72 + 500;
        auVar81 = NEON_umull(auVar52._0_8_,0x10624dd310624dd3,4);
        auVar83._0_8_ =
             CONCAT44(auVar80._4_4_ + (uint)auVar84._2_2_ * 0x24b + (uint)auVar79._2_2_ * 0x72 + 500
                      ,auVar80._0_4_ + (uint)auVar84._0_2_ * 0x24b + (uint)auVar79._0_2_ * 0x72 +
                       500);
        auVar83._8_4_ =
             auVar80._8_4_ + (uint)auVar84._4_2_ * 0x24b + (uint)auVar79._4_2_ * 0x72 + 500;
        auVar83._12_4_ =
             auVar80._12_4_ + (uint)auVar84._6_2_ * 0x24b + (uint)auVar79._6_2_ * 0x72 + 500;
        auVar79 = NEON_umull(auVar51._0_8_,0x10624dd310624dd3,4);
        auVar85 = NEON_umull(auVar78._0_8_,0x10624dd310624dd3,4);
        auVar80 = NEON_umull(auVar83._0_8_,0x10624dd310624dd3,4);
        *param_3 = (uchar)(auVar81._4_4_ >> 6);
        param_3[1] = bVar61;
        param_3[2] = (uchar)(auVar81._12_4_ >> 6);
        param_3[3] = bVar62;
        param_3[4] = (uchar)((auVar52._8_8_ & 0xffffffff) / 1000);
        param_3[5] = bVar63;
        param_3[6] = (uchar)((uint)((auVar52._8_8_ >> 0x20) * 0x10624dd3 >> 0x10) >> 0x16);
        param_3[7] = bVar64;
        param_3[8] = (uchar)(auVar85._4_4_ >> 6);
        param_3[9] = bVar65;
        param_3[10] = (uchar)(auVar85._12_4_ >> 6);
        param_3[0xb] = bVar66;
        param_3[0xc] = (uchar)((auVar78._8_8_ & 0xffffffff) / 1000);
        param_3[0xd] = bVar67;
        param_3[0xe] = (uchar)(auVar78._8_8_ / 0x3e800000000);
        param_3[0xf] = bVar68;
        param_3[0x10] = (uchar)(auVar79._4_4_ >> 6);
        param_3[0x11] = bVar69;
        param_3[0x12] = (uchar)(auVar79._12_4_ >> 6);
        param_3[0x13] = bVar70;
        param_3[0x14] = (uchar)((auVar51._8_8_ & 0xffffffff) / 1000);
        param_3[0x15] = bVar71;
        param_3[0x16] = (uchar)((uint)((auVar51._8_8_ >> 0x20) * 0x10624dd3 >> 0x10) >> 0x16);
        param_3[0x17] = bVar72;
        param_3[0x18] = (uchar)(auVar80._4_4_ >> 6);
        param_3[0x19] = bVar73;
        param_3[0x1a] = (uchar)(auVar80._12_4_ >> 6);
        param_3[0x1b] = bVar74;
        param_3[0x1c] = (uchar)((auVar83._8_8_ & 0xffffffff) / 1000);
        param_3[0x1d] = bVar75;
        param_3[0x1e] = (uchar)((uint)((auVar83._8_8_ >> 0x20) * 0x10624dd3 >> 0x10) >> 0x16);
        param_3[0x1f] = bVar76;
        param_3 = param_3 + 0x20;
      } while (uVar49 != 0);
      if (uVar1 == uVar48) {
        return;
      }
    }
    do {
      pbVar45 = param_1 + lVar46;
      lVar46 = lVar46 + 4;
      *puVar47 = (uchar)(((uint)pbVar45[1] * 0x24b + (uint)*pbVar45 * 299 + (uint)pbVar45[2] * 0x72
                         + 500) / 1000);
      puVar47[1] = pbVar45[3];
      puVar47 = puVar47 + 2;
    } while (lVar46 < param_2 + -3);
  }
  return;
}

