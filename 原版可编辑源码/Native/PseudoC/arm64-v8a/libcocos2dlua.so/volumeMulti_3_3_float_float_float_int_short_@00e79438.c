
/* void cocos2d::experimental::volumeMulti<3, 3, float, float, float, int, short>(float*, unsigned
   long, float const*, int*, float const*, short) */

void cocos2d::experimental::volumeMulti<3,3,float,float,float,int,short>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               short param_6)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar17 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  uint uVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar53;
  byte bVar54;
  float fVar49;
  int iVar51;
  byte bVar55;
  byte bVar56;
  byte bVar58;
  byte bVar59;
  float fVar57;
  byte bVar60;
  ulong uVar52;
  byte bVar61;
  byte bVar65;
  byte bVar66;
  float fVar62;
  byte bVar67;
  byte bVar68;
  byte bVar70;
  byte bVar71;
  float fVar69;
  byte bVar72;
  ulong uVar64;
  byte bVar73;
  byte bVar77;
  byte bVar78;
  float fVar74;
  byte bVar79;
  byte bVar80;
  byte bVar82;
  byte bVar83;
  float fVar81;
  byte bVar84;
  byte bVar85;
  byte bVar87;
  byte bVar88;
  float fVar86;
  byte bVar89;
  byte bVar90;
  byte bVar92;
  byte bVar93;
  float fVar91;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  byte bVar94;
  float fVar95;
  float fVar98;
  float fVar99;
  float fVar100;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar101;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  int iVar104;
  int iVar105;
  int iVar106;
  int iVar107;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  int iVar110;
  int iVar111;
  int iVar112;
  int iVar113;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined4 uVar50;
  undefined4 uVar63;
  
  if (param_4 == (int *)0x0) {
    if (3 < param_2) {
      if ((param_3 + param_2 * 3 <= param_1 || param_1 + param_2 * 3 <= param_3) &&
         ((float *)((long)param_5 + 1U) <= param_1 || param_1 + param_2 * 3 <= param_5)) {
        uVar9 = param_2 & 0xfffffffffffffffc;
        pfVar1 = param_3 + uVar9 * 3;
        pfVar2 = param_1 + uVar9 * 3;
        uVar8 = uVar9;
        do {
          fVar22 = *param_3;
          fVar16 = param_3[1];
          fVar49 = param_3[2];
          fVar13 = param_3[3];
          fVar18 = param_3[4];
          fVar57 = param_3[5];
          fVar14 = param_3[6];
          fVar19 = param_3[7];
          fVar62 = param_3[8];
          fVar15 = param_3[9];
          fVar20 = param_3[10];
          fVar69 = param_3[0xb];
          param_3 = param_3 + 0xc;
          fVar74 = *param_5;
          uVar8 = uVar8 - 4;
          *param_1 = *param_1 + fVar22 * fVar74;
          param_1[1] = param_1[1] + fVar16 * fVar74;
          param_1[2] = param_1[2] + fVar49 * fVar74;
          param_1[3] = param_1[3] + fVar13 * fVar74;
          param_1[4] = param_1[4] + fVar18 * fVar74;
          param_1[5] = param_1[5] + fVar57 * fVar74;
          param_1[6] = param_1[6] + fVar14 * fVar74;
          param_1[7] = param_1[7] + fVar19 * fVar74;
          param_1[8] = param_1[8] + fVar62 * fVar74;
          param_1[9] = param_1[9] + fVar15 * fVar74;
          param_1[10] = param_1[10] + fVar20 * fVar74;
          param_1[0xb] = param_1[0xb] + fVar69 * fVar74;
          param_1 = param_1 + 0xc;
        } while (uVar8 != 0);
        bVar6 = uVar9 == param_2;
        param_3 = pfVar1;
        param_2 = param_2 - uVar9;
        param_1 = pfVar2;
        if (bVar6) {
          return;
        }
      }
    }
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + *param_3 * *param_5;
      param_1[1] = param_1[1] + param_3[1] * *param_5;
      pfVar1 = param_3 + 2;
      param_3 = param_3 + 3;
      param_1[2] = param_1[2] + *pfVar1 * *param_5;
      param_1 = param_1 + 3;
    } while (param_2 != 0);
  }
  else {
    iVar3 = (int)param_6;
    if (3 < param_2) {
      if ((param_3 + param_2 * 3 <= param_1 || param_1 + param_2 * 3 <= param_3) &&
         ((float *)((long)param_5 + 1U) <= param_1 || param_1 + param_2 * 3 <= param_5)) {
        uVar9 = param_2 & 0xfffffffffffffffc;
        auVar17 = NEON_fmov(0xc1800000,4);
        auVar21 = NEON_fmov(0x41800000,4);
        auVar23 = NEON_fmov(0xbfe0000000000000,8);
        auVar24 = NEON_fmov(0x3fe0000000000000,8);
        pfVar1 = param_3 + uVar9 * 3;
        pfVar2 = param_1 + uVar9 * 3;
        piVar7 = param_4;
        uVar8 = uVar9;
        do {
          fVar49 = *param_3;
          fVar74 = param_3[1];
          fVar95 = param_3[2];
          fVar57 = param_3[3];
          fVar81 = param_3[4];
          fVar98 = param_3[5];
          fVar62 = param_3[6];
          fVar86 = param_3[7];
          fVar99 = param_3[8];
          fVar69 = param_3[9];
          fVar91 = param_3[10];
          fVar100 = param_3[0xb];
          param_3 = param_3 + 0xc;
          fVar101 = *param_5;
          uVar8 = uVar8 - 4;
          fVar22 = auVar17._0_4_;
          auVar30._0_4_ = -(uint)(fVar49 <= fVar22);
          fVar13 = auVar17._4_4_;
          auVar30._4_4_ = -(uint)(fVar57 <= fVar13);
          fVar14 = auVar17._8_4_;
          auVar30._8_4_ = -(uint)(fVar62 <= fVar14);
          fVar15 = auVar17._12_4_;
          auVar30._12_4_ = -(uint)(fVar69 <= fVar15);
          fVar16 = auVar21._0_4_;
          iVar10 = -(uint)(fVar16 <= fVar49);
          fVar18 = auVar21._4_4_;
          iVar11 = -(uint)(fVar18 <= fVar57);
          fVar19 = auVar21._8_4_;
          iVar12 = -(uint)(fVar19 <= fVar62);
          fVar20 = auVar21._12_4_;
          iVar51 = -(uint)(fVar20 <= fVar69);
          auVar102._0_4_ = -(uint)(fVar74 <= fVar22);
          auVar102._4_4_ = -(uint)(fVar81 <= fVar13);
          auVar102._8_4_ = -(uint)(fVar86 <= fVar14);
          auVar102._12_4_ = -(uint)(fVar91 <= fVar15);
          iVar104 = -(uint)(fVar16 <= fVar74);
          iVar105 = -(uint)(fVar18 <= fVar81);
          iVar106 = -(uint)(fVar19 <= fVar86);
          iVar107 = -(uint)(fVar20 <= fVar91);
          auVar97._0_8_ = (long)(int)-(uint)(0.0 < fVar62 * 1.3421773e+08);
          auVar97._8_8_ = (long)(int)-(uint)(0.0 < fVar69 * 1.3421773e+08);
          auVar75._0_8_ = (long)(int)-(uint)(0.0 < fVar49 * 1.3421773e+08);
          auVar75._8_8_ = (long)(int)-(uint)(0.0 < fVar57 * 1.3421773e+08);
          auVar108._0_4_ = -(uint)(fVar95 <= fVar22);
          auVar108._4_4_ = -(uint)(fVar98 <= fVar13);
          auVar108._8_4_ = -(uint)(fVar99 <= fVar14);
          auVar108._12_4_ = -(uint)(fVar100 <= fVar15);
          iVar110 = -(uint)(fVar16 <= fVar95);
          iVar111 = -(uint)(fVar18 <= fVar98);
          iVar112 = -(uint)(fVar19 <= fVar99);
          iVar113 = -(uint)(fVar20 <= fVar100);
          auVar76 = auVar23 ^ (auVar23 ^ auVar24) & auVar75;
          auVar27 = auVar23 ^ (auVar23 ^ auVar24) & auVar97;
          auVar96._0_8_ = (long)(int)-(uint)(0.0 < fVar86 * 1.3421773e+08);
          auVar96._8_8_ = (long)(int)-(uint)(0.0 < fVar91 * 1.3421773e+08);
          auVar114._0_8_ = (long)(int)-(uint)(0.0 < fVar74 * 1.3421773e+08);
          auVar114._8_8_ = (long)(int)-(uint)(0.0 < fVar81 * 1.3421773e+08);
          auVar115 = auVar23 ^ (auVar23 ^ auVar24) & auVar114;
          auVar97 = auVar23 ^ (auVar23 ^ auVar24) & auVar96;
          auVar116._0_8_ = (long)(int)-(uint)(0.0 < fVar99 * 1.3421773e+08);
          auVar116._8_8_ = (long)(int)-(uint)(0.0 < fVar100 * 1.3421773e+08);
          auVar117._0_8_ = (long)(int)-(uint)(0.0 < fVar95 * 1.3421773e+08);
          auVar117._8_8_ = (long)(int)-(uint)(0.0 < fVar98 * 1.3421773e+08);
          auVar28 = auVar23 ^ (auVar23 ^ auVar24) & auVar117;
          auVar117 = auVar23 ^ (auVar23 ^ auVar24) & auVar116;
          auVar31._0_4_ = (undefined4)(long)(auVar76._0_8_ + (double)(fVar49 * 1.3421773e+08));
          auVar31._4_4_ = (int)(long)(auVar76._8_8_ + (double)(fVar57 * 1.3421773e+08));
          auVar103._0_4_ = (undefined4)(long)(auVar115._0_8_ + (double)(fVar74 * 1.3421773e+08));
          auVar103._4_4_ = (int)(long)(auVar115._8_8_ + (double)(fVar81 * 1.3421773e+08));
          auVar31._8_4_ = (int)(long)(auVar27._0_8_ + (double)(fVar62 * 1.3421773e+08));
          auVar31._12_4_ = (int)(long)(auVar27._8_8_ + (double)(fVar69 * 1.3421773e+08));
          auVar103._8_4_ = (int)(long)(auVar97._0_8_ + (double)(fVar86 * 1.3421773e+08));
          auVar103._12_4_ = (int)(long)(auVar97._8_8_ + (double)(fVar91 * 1.3421773e+08));
          auVar109._0_4_ = (undefined4)(long)(auVar28._0_8_ + (double)(fVar95 * 1.3421773e+08));
          auVar109._4_4_ = (int)(long)(auVar28._8_8_ + (double)(fVar98 * 1.3421773e+08));
          auVar109._8_4_ = (int)(long)(auVar117._0_8_ + (double)(fVar99 * 1.3421773e+08));
          auVar109._12_4_ = (int)(long)(auVar117._8_8_ + (double)(fVar100 * 1.3421773e+08));
          bVar32 = (byte)iVar10 & ~(byte)auVar30._0_4_;
          bVar33 = (byte)((uint)iVar10 >> 8) & ~(byte)((uint)auVar30._0_4_ >> 8);
          bVar34 = (byte)((uint)iVar10 >> 0x10) & ~(byte)((uint)auVar30._0_4_ >> 0x10);
          bVar35 = (byte)((uint)iVar10 >> 0x18) & ~(byte)((uint)auVar30._0_4_ >> 0x18);
          bVar36 = (byte)iVar11 & ~(byte)auVar30._4_4_;
          bVar37 = (byte)((uint)iVar11 >> 8) & ~(byte)((uint)auVar30._4_4_ >> 8);
          bVar38 = (byte)((uint)iVar11 >> 0x10) & ~(byte)((uint)auVar30._4_4_ >> 0x10);
          bVar39 = (byte)((uint)iVar11 >> 0x18) & ~(byte)((uint)auVar30._4_4_ >> 0x18);
          bVar40 = (byte)iVar12 & ~(byte)auVar30._8_4_;
          bVar41 = (byte)((uint)iVar12 >> 8) & ~(byte)((uint)auVar30._8_4_ >> 8);
          bVar42 = (byte)((uint)iVar12 >> 0x10) & ~(byte)((uint)auVar30._8_4_ >> 0x10);
          bVar43 = (byte)((uint)iVar12 >> 0x18) & ~(byte)((uint)auVar30._8_4_ >> 0x18);
          bVar44 = (byte)iVar51 & ~(byte)auVar30._12_4_;
          bVar45 = (byte)((uint)iVar51 >> 8) & ~(byte)((uint)auVar30._12_4_ >> 8);
          bVar46 = (byte)((uint)iVar51 >> 0x10) & ~(byte)((uint)auVar30._12_4_ >> 0x10);
          bVar47 = (byte)((uint)iVar51 >> 0x18) & ~(byte)((uint)auVar30._12_4_ >> 0x18);
          auVar27._8_4_ = 0x80000000;
          auVar27._0_8_ = 0x8000000080000000;
          auVar27._12_4_ = 0x80000000;
          auVar31 = auVar31 ^ (auVar31 ^ auVar27) & auVar30;
          bVar48 = (byte)iVar104 & ~(byte)auVar102._0_4_;
          bVar53 = (byte)((uint)iVar104 >> 8) & ~(byte)((uint)auVar102._0_4_ >> 8);
          bVar54 = (byte)((uint)iVar104 >> 0x10) & ~(byte)((uint)auVar102._0_4_ >> 0x10);
          bVar55 = (byte)((uint)iVar104 >> 0x18) & ~(byte)((uint)auVar102._0_4_ >> 0x18);
          uVar50 = CONCAT13(bVar55,CONCAT12(bVar54,CONCAT11(bVar53,bVar48)));
          bVar56 = (byte)iVar105 & ~(byte)auVar102._4_4_;
          bVar58 = (byte)((uint)iVar105 >> 8) & ~(byte)((uint)auVar102._4_4_ >> 8);
          bVar59 = (byte)((uint)iVar105 >> 0x10) & ~(byte)((uint)auVar102._4_4_ >> 0x10);
          bVar60 = (byte)((uint)iVar105 >> 0x18) & ~(byte)((uint)auVar102._4_4_ >> 0x18);
          bVar61 = (byte)iVar106 & ~(byte)auVar102._8_4_;
          bVar65 = (byte)((uint)iVar106 >> 8) & ~(byte)((uint)auVar102._8_4_ >> 8);
          bVar66 = (byte)((uint)iVar106 >> 0x10) & ~(byte)((uint)auVar102._8_4_ >> 0x10);
          bVar67 = (byte)((uint)iVar106 >> 0x18) & ~(byte)((uint)auVar102._8_4_ >> 0x18);
          uVar63 = CONCAT13(bVar67,CONCAT12(bVar66,CONCAT11(bVar65,bVar61)));
          bVar68 = (byte)iVar107 & ~(byte)auVar102._12_4_;
          bVar70 = (byte)((uint)iVar107 >> 8) & ~(byte)((uint)auVar102._12_4_ >> 8);
          bVar71 = (byte)((uint)iVar107 >> 0x10) & ~(byte)((uint)auVar102._12_4_ >> 0x10);
          bVar72 = (byte)((uint)iVar107 >> 0x18) & ~(byte)((uint)auVar102._12_4_ >> 0x18);
          auVar28._8_4_ = 0x80000000;
          auVar28._0_8_ = 0x8000000080000000;
          auVar28._12_4_ = 0x80000000;
          auVar103 = auVar103 ^ (auVar103 ^ auVar28) & auVar102;
          bVar73 = (byte)iVar110 & ~(byte)auVar108._0_4_;
          bVar77 = (byte)((uint)iVar110 >> 8) & ~(byte)((uint)auVar108._0_4_ >> 8);
          bVar78 = (byte)((uint)iVar110 >> 0x10) & ~(byte)((uint)auVar108._0_4_ >> 0x10);
          bVar79 = (byte)((uint)iVar110 >> 0x18) & ~(byte)((uint)auVar108._0_4_ >> 0x18);
          bVar80 = (byte)iVar111 & ~(byte)auVar108._4_4_;
          bVar82 = (byte)((uint)iVar111 >> 8) & ~(byte)((uint)auVar108._4_4_ >> 8);
          bVar83 = (byte)((uint)iVar111 >> 0x10) & ~(byte)((uint)auVar108._4_4_ >> 0x10);
          bVar84 = (byte)((uint)iVar111 >> 0x18) & ~(byte)((uint)auVar108._4_4_ >> 0x18);
          bVar85 = (byte)iVar112 & ~(byte)auVar108._8_4_;
          bVar87 = (byte)((uint)iVar112 >> 8) & ~(byte)((uint)auVar108._8_4_ >> 8);
          bVar88 = (byte)((uint)iVar112 >> 0x10) & ~(byte)((uint)auVar108._8_4_ >> 0x10);
          bVar89 = (byte)((uint)iVar112 >> 0x18) & ~(byte)((uint)auVar108._8_4_ >> 0x18);
          bVar90 = (byte)iVar113 & ~(byte)auVar108._12_4_;
          bVar92 = (byte)((uint)iVar113 >> 8) & ~(byte)((uint)auVar108._12_4_ >> 8);
          bVar93 = (byte)((uint)iVar113 >> 0x10) & ~(byte)((uint)auVar108._12_4_ >> 0x10);
          bVar94 = (byte)((uint)iVar113 >> 0x18) & ~(byte)((uint)auVar108._12_4_ >> 0x18);
          auVar76._8_4_ = 0x80000000;
          auVar76._0_8_ = 0x8000000080000000;
          auVar76._12_4_ = 0x80000000;
          auVar109 = auVar109 ^ (auVar109 ^ auVar76) & auVar108;
          uVar25 = CONCAT13(bVar35,CONCAT12(bVar34,CONCAT11(bVar33,bVar32))) & 0x7fffffff;
          uVar26 = CONCAT13(bVar39,CONCAT12(bVar38,CONCAT11(bVar37,bVar36))) & 0x7fffffff;
          uVar4 = CONCAT13(bVar43,CONCAT12(bVar42,CONCAT11(bVar41,bVar40))) & 0x7fffffff;
          uVar5 = CONCAT13(bVar47,CONCAT12(bVar46,CONCAT11(bVar45,bVar44))) & 0x7fffffff;
          uVar52 = CONCAT44((int)(CONCAT17(bVar60,CONCAT16(bVar59,CONCAT15(bVar58,CONCAT14(bVar56,
                                                  uVar50)))) >> 0x20),uVar50) & 0x7fffffff7fffffff;
          uVar64 = CONCAT44((int)(CONCAT17(bVar72,CONCAT16(bVar71,CONCAT15(bVar70,CONCAT14(bVar68,
                                                  uVar63)))) >> 0x20),uVar63) & 0x7fffffff7fffffff;
          iVar12 = CONCAT13((byte)(uVar25 >> 0x18) | auVar31[3] & ~bVar35,
                            CONCAT12((byte)(uVar25 >> 0x10) | auVar31[2] & ~bVar34,
                                     CONCAT11((byte)(uVar25 >> 8) | auVar31[1] & ~bVar33,
                                              (byte)uVar25 | auVar31[0] & ~bVar32)));
          auVar29._0_8_ =
               CONCAT17((byte)(uVar26 >> 0x18) | auVar31[7] & ~bVar39,
                        CONCAT16((byte)(uVar26 >> 0x10) | auVar31[6] & ~bVar38,
                                 CONCAT15((byte)(uVar26 >> 8) | auVar31[5] & ~bVar37,
                                          CONCAT14((byte)uVar26 | auVar31[4] & ~bVar36,iVar12))));
          auVar29[8] = (byte)uVar4 | auVar31[8] & ~bVar40;
          auVar29[9] = (byte)(uVar4 >> 8) | auVar31[9] & ~bVar41;
          auVar29[10] = (byte)(uVar4 >> 0x10) | auVar31[10] & ~bVar42;
          auVar29[0xb] = (byte)(uVar4 >> 0x18) | auVar31[0xb] & ~bVar43;
          auVar115[0xc] = (byte)uVar5 | auVar31[0xc] & ~bVar44;
          auVar115._0_12_ = auVar29;
          auVar115[0xd] = (byte)(uVar5 >> 8) | auVar31[0xd] & ~bVar45;
          auVar115[0xe] = (byte)(uVar5 >> 0x10) | auVar31[0xe] & ~bVar46;
          auVar115[0xf] = (byte)(uVar5 >> 0x18) | auVar31[0xf] & ~bVar47;
          iVar51 = CONCAT13(bVar79 & 0x7f | auVar109[3] & ~bVar79,
                            CONCAT12(bVar78 | auVar109[2] & ~bVar78,
                                     CONCAT11(bVar77 | auVar109[1] & ~bVar77,
                                              bVar73 | auVar109[0] & ~bVar73)));
          iVar11 = CONCAT13(bVar89 & 0x7f | auVar109[0xb] & ~bVar89,
                            CONCAT12(bVar88 | auVar109[10] & ~bVar88,
                                     CONCAT11(bVar87 | auVar109[9] & ~bVar87,
                                              bVar85 | auVar109[8] & ~bVar85)));
          iVar10 = iVar11 + CONCAT13((byte)(uVar64 >> 0x18) | auVar103[0xb] & ~bVar67,
                                     CONCAT12((byte)(uVar64 >> 0x10) | auVar103[10] & ~bVar66,
                                              CONCAT11((byte)(uVar64 >> 8) | auVar103[9] & ~bVar65,
                                                       (byte)uVar64 | auVar103[8] & ~bVar61))) +
                            auVar29._8_4_;
          iVar11 = (int)(CONCAT17(bVar94 & 0x7f | auVar109[0xf] & ~bVar94,
                                  CONCAT16(bVar93 | auVar109[0xe] & ~bVar93,
                                           CONCAT15(bVar92 | auVar109[0xd] & ~bVar92,
                                                    CONCAT14(bVar90 | auVar109[0xc] & ~bVar90,iVar11
                                                            )))) >> 0x20) +
                   CONCAT13((byte)(uVar64 >> 0x38) | auVar103[0xf] & ~bVar72,
                            CONCAT12((byte)(uVar64 >> 0x30) | auVar103[0xe] & ~bVar71,
                                     CONCAT11((byte)(uVar64 >> 0x28) | auVar103[0xd] & ~bVar70,
                                              (byte)(uVar64 >> 0x20) | auVar103[0xc] & ~bVar68))) +
                   auVar115._12_4_;
          *param_1 = fVar49 * fVar101 + *param_1;
          param_1[1] = fVar74 * fVar101 + param_1[1];
          param_1[2] = fVar95 * fVar101 + param_1[2];
          param_1[3] = fVar57 * fVar101 + param_1[3];
          param_1[4] = fVar81 * fVar101 + param_1[4];
          param_1[5] = fVar98 * fVar101 + param_1[5];
          param_1[6] = fVar62 * fVar101 + param_1[6];
          param_1[7] = fVar86 * fVar101 + param_1[7];
          param_1[8] = fVar99 * fVar101 + param_1[8];
          param_1[9] = fVar69 * fVar101 + param_1[9];
          param_1[10] = fVar91 * fVar101 + param_1[10];
          param_1[0xb] = fVar100 * fVar101 + param_1[0xb];
          param_1 = param_1 + 0xc;
          iVar10 = iVar10 / 3 + (iVar10 >> 0x1f);
          iVar11 = (int)(CONCAT14((char)(iVar11 / 0x3000000) + (char)(iVar11 >> 0x1f),
                                  (int)((ulong)((long)iVar11 * 0x55555556) >> 0x18)) >> 8);
          *(ulong *)(piVar7 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(piVar7 + 2) >> 0x20) +
                        (iVar11 - (iVar11 >> 0x1f) >> 0xc) * iVar3,
                        (int)*(undefined8 *)(piVar7 + 2) +
                        (iVar10 - (iVar10 >> 0x1f) >> 0xc) * iVar3);
          *(ulong *)piVar7 =
               CONCAT44((int)((ulong)*(undefined8 *)piVar7 >> 0x20) +
                        (((int)(CONCAT17(bVar84 & 0x7f | auVar109[7] & ~bVar84,
                                         CONCAT16(bVar83 | auVar109[6] & ~bVar83,
                                                  CONCAT15(bVar82 | auVar109[5] & ~bVar82,
                                                           CONCAT14(bVar80 | auVar109[4] & ~bVar80,
                                                                    iVar51)))) >> 0x20) +
                         CONCAT13((byte)(uVar52 >> 0x38) | auVar103[7] & ~bVar60,
                                  CONCAT12((byte)(uVar52 >> 0x30) | auVar103[6] & ~bVar59,
                                           CONCAT11((byte)(uVar52 >> 0x28) | auVar103[5] & ~bVar58,
                                                    (byte)(uVar52 >> 0x20) | auVar103[4] & ~bVar56))
                                 ) + (int)((ulong)auVar29._0_8_ >> 0x20)) / 3 >> 0xc) * iVar3,
                        (int)*(undefined8 *)piVar7 +
                        ((iVar51 + CONCAT13((byte)(uVar52 >> 0x18) | auVar103[3] & ~bVar55,
                                            CONCAT12((byte)(uVar52 >> 0x10) | auVar103[2] & ~bVar54,
                                                     CONCAT11((byte)(uVar52 >> 8) |
                                                              auVar103[1] & ~bVar53,
                                                              (byte)uVar52 | auVar103[0] & ~bVar48))
                                           ) + iVar12) / 3 >> 0xc) * iVar3);
          piVar7 = piVar7 + 4;
        } while (uVar8 != 0);
        bVar6 = uVar9 == param_2;
        param_3 = pfVar1;
        param_4 = param_4 + uVar9;
        param_2 = param_2 - uVar9;
        param_1 = pfVar2;
        if (bVar6) {
          return;
        }
      }
    }
    do {
      fVar22 = *param_3;
      uVar25 = 0xbfe00000;
      if (fVar22 <= -16.0) {
        iVar10 = -0x80000000;
      }
      else if (16.0 <= fVar22) {
        iVar10 = 0x7fffffff;
      }
      else {
        uVar26 = 0x3fe00000;
        if (fVar22 * 1.3421773e+08 <= 0.0) {
          uVar26 = uVar25;
        }
        iVar10 = (int)((double)((ulong)uVar26 << 0x20) + (double)(fVar22 * 1.3421773e+08));
      }
      *param_1 = fVar22 * *param_5 + *param_1;
      fVar22 = param_3[1];
      if (fVar22 <= -16.0) {
        iVar11 = -0x80000000;
      }
      else if (16.0 <= fVar22) {
        iVar11 = 0x7fffffff;
      }
      else {
        uVar26 = 0x3fe00000;
        if (fVar22 * 1.3421773e+08 <= 0.0) {
          uVar26 = uVar25;
        }
        iVar11 = (int)((double)((ulong)uVar26 << 0x20) + (double)(fVar22 * 1.3421773e+08));
      }
      param_1[1] = fVar22 * *param_5 + param_1[1];
      fVar22 = param_3[2];
      if (fVar22 <= -16.0) {
        iVar12 = -0x80000000;
      }
      else if (16.0 <= fVar22) {
        iVar12 = 0x7fffffff;
      }
      else {
        uVar26 = 0x3fe00000;
        if (fVar22 * 1.3421773e+08 <= 0.0) {
          uVar26 = uVar25;
        }
        iVar12 = (int)((double)((ulong)uVar26 << 0x20) + (double)(fVar22 * 1.3421773e+08));
      }
      param_1[2] = fVar22 * *param_5 + param_1[2];
      param_2 = param_2 - 1;
      *param_4 = *param_4 + ((iVar12 + iVar11 + iVar10) / 3 >> 0xc) * iVar3;
      param_3 = param_3 + 3;
      param_4 = param_4 + 1;
      param_1 = param_1 + 3;
    } while (param_2 != 0);
  }
  return;
}

