
/* void cocos2d::experimental::volumeMulti<4, 4, short, short, short, int, short>(short*, unsigned
   long, short const*, int*, short const*, short) */

void cocos2d::experimental::volumeMulti<4,4,short,short,short,int,short>
               (short *param_1,ulong param_2,short *param_3,int *param_4,short *param_5,
               short param_6)

{
  short *psVar1;
  ushort *puVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  char cVar15;
  char cVar16;
  byte bVar17;
  byte bVar18;
  char cVar19;
  short sVar20;
  uint uVar21;
  short sVar25;
  char cVar26;
  short sVar27;
  uint uVar28;
  short sVar29;
  uint uVar30;
  undefined1 auVar22 [16];
  uint uVar31;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  short sVar32;
  uint uVar33;
  short sVar36;
  short sVar37;
  uint uVar38;
  short sVar39;
  uint uVar40;
  undefined1 auVar34 [16];
  uint uVar41;
  undefined1 auVar35 [16];
  short sVar42;
  short sVar47;
  short sVar48;
  short sVar49;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  short sVar50;
  short sVar54;
  short sVar55;
  short sVar56;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  uint uVar60;
  uint uVar67;
  byte bVar68;
  uint uVar69;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  uint uVar70;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  uint uVar71;
  uint uVar72;
  uint uVar76;
  uint uVar78;
  uint uVar80;
  undefined1 auVar73 [16];
  uint uVar77;
  uint uVar79;
  uint uVar81;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  uint uVar82;
  uint uVar86;
  uint uVar87;
  undefined1 auVar83 [16];
  uint uVar88;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  char cVar89;
  char cVar90;
  char cVar91;
  char cVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  
  if (param_4 == (int *)0x0) {
    if (7 < param_2) {
      if ((param_3 + param_2 * 4 <= param_1 || param_1 + param_2 * 4 <= param_3) &&
         ((short *)((long)param_5 + 1U) <= param_1 || param_1 + param_2 * 4 <= param_5)) {
        uVar14 = param_2 & 0xfffffffffffffff8;
        psVar1 = param_3 + uVar14 * 4;
        puVar2 = (ushort *)(param_1 + uVar14 * 4);
        uVar13 = uVar14;
        do {
          auVar22._0_2_ = *param_3;
          auVar34._0_2_ = param_3[1];
          auVar43._0_2_ = param_3[2];
          auVar51._0_2_ = param_3[3];
          auVar22._2_2_ = param_3[4];
          auVar34._2_2_ = param_3[5];
          auVar43._2_2_ = param_3[6];
          auVar51._2_2_ = param_3[7];
          auVar22._4_2_ = param_3[8];
          auVar34._4_2_ = param_3[9];
          auVar43._4_2_ = param_3[10];
          auVar51._4_2_ = param_3[0xb];
          auVar22._6_2_ = param_3[0xc];
          auVar34._6_2_ = param_3[0xd];
          auVar43._6_2_ = param_3[0xe];
          auVar51._6_2_ = param_3[0xf];
          auVar22._8_2_ = param_3[0x10];
          auVar34._8_2_ = param_3[0x11];
          auVar43._8_2_ = param_3[0x12];
          auVar51._8_2_ = param_3[0x13];
          auVar22._10_2_ = param_3[0x14];
          auVar34._10_2_ = param_3[0x15];
          auVar43._10_2_ = param_3[0x16];
          auVar51._10_2_ = param_3[0x17];
          auVar22._12_2_ = param_3[0x18];
          auVar34._12_2_ = param_3[0x19];
          auVar43._12_2_ = param_3[0x1a];
          auVar51._12_2_ = param_3[0x1b];
          auVar22._14_2_ = param_3[0x1c];
          auVar34._14_2_ = param_3[0x1d];
          auVar43._14_2_ = param_3[0x1e];
          auVar51._14_2_ = param_3[0x1f];
          param_3 = param_3 + 0x20;
          sVar4 = *param_5;
          uVar13 = uVar13 - 8;
          auVar57 = NEON_ext(auVar22,auVar22,8,1);
          uVar60 = (int)sVar4 * (int)auVar22._0_2_;
          uVar67 = (int)sVar4 * (int)auVar22._2_2_;
          uVar69 = (int)sVar4 * (int)auVar22._4_2_;
          uVar70 = (int)sVar4 * (int)auVar22._6_2_;
          auVar61 = NEON_ext(auVar34,auVar34,8,1);
          uVar71 = (int)sVar4 * (int)auVar34._0_2_;
          uVar76 = (int)sVar4 * (int)auVar34._2_2_;
          uVar78 = (int)sVar4 * (int)auVar34._4_2_;
          uVar80 = (int)sVar4 * (int)auVar34._6_2_;
          auVar83 = NEON_ext(auVar43,auVar43,8,1);
          uVar82 = (int)sVar4 * (int)auVar43._0_2_;
          uVar86 = (int)sVar4 * (int)auVar43._2_2_;
          uVar87 = (int)sVar4 * (int)auVar43._4_2_;
          uVar88 = (int)sVar4 * (int)auVar43._6_2_;
          auVar93 = NEON_ext(auVar51,auVar51,8,1);
          uVar21 = (int)sVar4 * (int)auVar51._0_2_;
          uVar28 = (int)sVar4 * (int)auVar51._2_2_;
          uVar30 = (int)sVar4 * (int)auVar51._4_2_;
          uVar31 = (int)sVar4 * (int)auVar51._6_2_;
          uVar33 = (int)sVar4 * (int)auVar57._0_2_;
          uVar38 = (int)sVar4 * (int)auVar57._2_2_;
          uVar40 = (int)sVar4 * (int)auVar57._4_2_;
          uVar41 = (int)sVar4 * (int)auVar57._6_2_;
          auVar44._0_4_ = uVar60 >> 0xc;
          auVar44._4_4_ = uVar67 >> 0xc;
          auVar44._8_4_ = uVar69 >> 0xc;
          auVar44._12_4_ = uVar70 >> 0xc;
          uVar72 = (int)sVar4 * (int)auVar61._0_2_;
          uVar77 = (int)sVar4 * (int)auVar61._2_2_;
          uVar79 = (int)sVar4 * (int)auVar61._4_2_;
          uVar81 = (int)sVar4 * (int)auVar61._6_2_;
          auVar62._0_4_ = uVar71 >> 0xc;
          auVar62._4_4_ = uVar76 >> 0xc;
          auVar62._8_4_ = uVar78 >> 0xc;
          auVar62._12_4_ = uVar80 >> 0xc;
          auVar52._0_4_ = -(uint)((int)uVar60 >> 0x1b == (int)uVar60 >> 0x1f);
          auVar52._4_4_ = -(uint)((int)uVar67 >> 0x1b == (int)uVar67 >> 0x1f);
          auVar52._8_4_ = -(uint)((int)uVar69 >> 0x1b == (int)uVar69 >> 0x1f);
          auVar52._12_4_ = -(uint)((int)uVar70 >> 0x1b == (int)uVar70 >> 0x1f);
          cVar15 = (char)((int)uVar60 >> 0x1f);
          cVar16 = (char)((int)uVar67 >> 0x1f);
          auVar53._0_6_ =
               CONCAT15(cVar16,CONCAT14(cVar16,(uint)(ushort)(CONCAT11(cVar15,cVar15) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar53[6] = 0;
          auVar53[7] = cVar16;
          bVar17 = (byte)((int)uVar69 >> 0x1f);
          auVar53[8] = bVar17 ^ 0xff;
          auVar53[9] = bVar17 ^ 0x7f;
          auVar53[10] = bVar17;
          auVar53[0xb] = bVar17;
          bVar17 = (byte)((int)uVar70 >> 0x1f);
          auVar53[0xc] = bVar17 ^ 0xff;
          auVar53[0xd] = bVar17 ^ 0x7f;
          auVar53[0xe] = bVar17;
          auVar53[0xf] = bVar17;
          auVar98._0_4_ = -(uint)((int)uVar71 >> 0x1b == (int)uVar71 >> 0x1f);
          auVar98._4_4_ = -(uint)((int)uVar76 >> 0x1b == (int)uVar76 >> 0x1f);
          auVar98._8_4_ = -(uint)((int)uVar78 >> 0x1b == (int)uVar78 >> 0x1f);
          auVar98._12_4_ = -(uint)((int)uVar80 >> 0x1b == (int)uVar80 >> 0x1f);
          cVar15 = (char)((int)uVar71 >> 0x1f);
          cVar16 = (char)((int)uVar76 >> 0x1f);
          auVar99._0_6_ =
               CONCAT15(cVar16,CONCAT14(cVar16,(uint)(ushort)(CONCAT11(cVar15,cVar15) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar99[6] = 0;
          auVar99[7] = cVar16;
          bVar17 = (byte)((int)uVar78 >> 0x1f);
          auVar99[8] = bVar17 ^ 0xff;
          auVar99[9] = bVar17 ^ 0x7f;
          auVar99[10] = bVar17;
          auVar99[0xb] = bVar17;
          bVar17 = (byte)((int)uVar80 >> 0x1f);
          auVar99[0xc] = bVar17 ^ 0xff;
          auVar99[0xd] = bVar17 ^ 0x7f;
          auVar99[0xe] = bVar17;
          auVar99[0xf] = bVar17;
          cVar89 = (char)((int)uVar82 >> 0x1f);
          cVar91 = (char)((int)uVar86 >> 0x1f);
          bVar18 = (byte)((int)uVar87 >> 0x1f);
          bVar68 = (byte)((int)uVar88 >> 0x1f);
          auVar53 = auVar53 ^ (auVar53 ^ auVar44) & auVar52;
          auVar58._0_4_ = uVar33 >> 0xc;
          auVar58._4_4_ = uVar38 >> 0xc;
          auVar58._8_4_ = uVar40 >> 0xc;
          auVar58._12_4_ = uVar41 >> 0xc;
          auVar99 = auVar99 ^ (auVar99 ^ auVar62) & auVar98;
          auVar102._0_4_ =
               -(uint)((int)uVar82 >> 0x1b ==
                      CONCAT13(cVar89,CONCAT12(cVar89,CONCAT11(cVar89,cVar89))));
          auVar102._4_4_ =
               -(uint)((int)uVar86 >> 0x1b ==
                      CONCAT13(cVar91,CONCAT12(cVar91,CONCAT11(cVar91,cVar91))));
          auVar102._8_4_ =
               -(uint)((int)uVar87 >> 0x1b ==
                      CONCAT13(bVar18,CONCAT12(bVar18,CONCAT11(bVar18,bVar18))));
          auVar102._12_4_ =
               -(uint)((int)uVar88 >> 0x1b ==
                      CONCAT13(bVar68,CONCAT12(bVar68,CONCAT11(bVar68,bVar68))));
          auVar63._0_4_ = -(uint)((int)uVar33 >> 0x1b == (int)uVar33 >> 0x1f);
          auVar63._4_4_ = -(uint)((int)uVar38 >> 0x1b == (int)uVar38 >> 0x1f);
          auVar63._8_4_ = -(uint)((int)uVar40 >> 0x1b == (int)uVar40 >> 0x1f);
          auVar63._12_4_ = -(uint)((int)uVar41 >> 0x1b == (int)uVar41 >> 0x1f);
          cVar15 = (char)((int)uVar33 >> 0x1f);
          cVar16 = (char)((int)uVar38 >> 0x1f);
          auVar64._0_6_ =
               CONCAT15(cVar16,CONCAT14(cVar16,(uint)(ushort)(CONCAT11(cVar15,cVar15) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar64[6] = 0;
          auVar64[7] = cVar16;
          bVar17 = (byte)((int)uVar40 >> 0x1f);
          auVar64[8] = bVar17 ^ 0xff;
          auVar64[9] = bVar17 ^ 0x7f;
          auVar64[10] = bVar17;
          auVar64[0xb] = bVar17;
          bVar17 = (byte)((int)uVar41 >> 0x1f);
          auVar64[0xc] = bVar17 ^ 0xff;
          auVar64[0xd] = bVar17 ^ 0x7f;
          auVar64[0xe] = bVar17;
          auVar64[0xf] = bVar17;
          uVar33 = (int)sVar4 * (int)auVar83._0_2_;
          uVar38 = (int)sVar4 * (int)auVar83._2_2_;
          uVar40 = (int)sVar4 * (int)auVar83._4_2_;
          uVar41 = (int)sVar4 * (int)auVar83._6_2_;
          uVar60 = (int)sVar4 * (int)auVar93._0_2_;
          uVar67 = (int)sVar4 * (int)auVar93._2_2_;
          uVar69 = (int)sVar4 * (int)auVar93._4_2_;
          uVar70 = (int)sVar4 * (int)auVar93._6_2_;
          auVar94._0_4_ = uVar21 >> 0xc;
          auVar94._4_4_ = uVar28 >> 0xc;
          auVar94._8_4_ = uVar30 >> 0xc;
          auVar94._12_4_ = uVar31 >> 0xc;
          auVar73._0_4_ = uVar72 >> 0xc;
          auVar73._4_4_ = uVar77 >> 0xc;
          auVar73._8_4_ = uVar79 >> 0xc;
          auVar73._12_4_ = uVar81 >> 0xc;
          auVar8[6] = 0;
          auVar8._0_6_ = CONCAT15(cVar91,CONCAT14(cVar91,(uint)(ushort)(CONCAT11(cVar89,cVar89) ^
                                                                       0x7fff))) ^ 0x7fff00000000;
          auVar8[7] = cVar91;
          auVar8[8] = bVar18 ^ 0xff;
          auVar8[9] = bVar18 ^ 0x7f;
          auVar8[10] = bVar18;
          auVar8[0xb] = bVar18;
          auVar8[0xc] = bVar68 ^ 0xff;
          auVar8[0xd] = bVar68 ^ 0x7f;
          auVar8[0xe] = bVar68;
          auVar8[0xf] = bVar68;
          auVar9._8_4_ = uVar87 >> 0xc;
          auVar9._0_8_ = (ulong)CONCAT24((short)(uVar86 >> 0xc),uVar82 >> 0xc) & 0xffffffff0000ffff;
          auVar9._12_4_ = uVar88 >> 0xc;
          auVar103[6] = 0;
          auVar103._0_6_ =
               CONCAT15(cVar91,CONCAT14(cVar91,(uint)(ushort)(CONCAT11(cVar89,cVar89) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar103[7] = cVar91;
          auVar103[8] = bVar18 ^ 0xff;
          auVar103[9] = bVar18 ^ 0x7f;
          auVar103[10] = bVar18;
          auVar103[0xb] = bVar18;
          auVar103[0xc] = bVar68 ^ 0xff;
          auVar103[0xd] = bVar68 ^ 0x7f;
          auVar103[0xe] = bVar68;
          auVar103[0xf] = bVar68;
          auVar103 = auVar103 ^ (auVar8 ^ auVar9) & auVar102;
          cVar15 = (char)(uVar72 >> 0x18);
          cVar90 = cVar15 >> 7;
          cVar16 = (char)(uVar77 >> 0x18);
          cVar92 = cVar16 >> 7;
          cVar89 = (char)(uVar79 >> 0x18);
          bVar18 = cVar89 >> 7;
          cVar91 = (char)(uVar81 >> 0x18);
          bVar68 = cVar91 >> 7;
          auVar64 = auVar64 ^ (auVar64 ^ auVar58) & auVar63;
          auVar45._0_4_ = -(uint)((int)uVar21 >> 0x1b == (int)uVar21 >> 0x1f);
          auVar45._4_4_ = -(uint)((int)uVar28 >> 0x1b == (int)uVar28 >> 0x1f);
          auVar45._8_4_ = -(uint)((int)uVar30 >> 0x1b == (int)uVar30 >> 0x1f);
          auVar45._12_4_ = -(uint)((int)uVar31 >> 0x1b == (int)uVar31 >> 0x1f);
          cVar19 = (char)((int)uVar21 >> 0x1f);
          cVar26 = (char)((int)uVar28 >> 0x1f);
          auVar46._0_6_ =
               CONCAT15(cVar26,CONCAT14(cVar26,(uint)(ushort)(CONCAT11(cVar19,cVar19) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar46[6] = 0;
          auVar46[7] = cVar26;
          bVar17 = (byte)((int)uVar30 >> 0x1f);
          auVar46[8] = bVar17 ^ 0xff;
          auVar46[9] = bVar17 ^ 0x7f;
          auVar46[10] = bVar17;
          auVar46[0xb] = bVar17;
          bVar17 = (byte)((int)uVar31 >> 0x1f);
          auVar46[0xc] = bVar17 ^ 0xff;
          auVar46[0xd] = bVar17 ^ 0x7f;
          auVar46[0xe] = bVar17;
          auVar46[0xf] = bVar17;
          auVar59._0_4_ =
               -(uint)(CONCAT13(cVar90,CONCAT12(cVar90,CONCAT11(cVar90,cVar15 >> 3))) ==
                      CONCAT13(cVar90,CONCAT12(cVar90,CONCAT11(cVar90,cVar90))));
          auVar59._4_4_ =
               -(uint)(CONCAT13(cVar92,CONCAT12(cVar92,CONCAT11(cVar92,cVar16 >> 3))) ==
                      CONCAT13(cVar92,CONCAT12(cVar92,CONCAT11(cVar92,cVar92))));
          auVar59._8_4_ =
               -(uint)(CONCAT13(bVar18,CONCAT12(bVar18,CONCAT11(bVar18,cVar89 >> 3))) ==
                      CONCAT13(bVar18,CONCAT12(bVar18,CONCAT11(bVar18,bVar18))));
          auVar59._12_4_ =
               -(uint)(CONCAT13(bVar68,CONCAT12(bVar68,CONCAT11(bVar68,cVar91 >> 3))) ==
                      CONCAT13(bVar68,CONCAT12(bVar68,CONCAT11(bVar68,bVar68))));
          auVar46 = auVar46 ^ (auVar46 ^ auVar94) & auVar45;
          auVar83[6] = 0;
          auVar83._0_6_ =
               CONCAT15(cVar92,CONCAT14(cVar92,(uint)(ushort)(CONCAT11(cVar90,cVar90) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar83[7] = cVar92;
          auVar83[8] = bVar18 ^ 0xff;
          auVar83[9] = bVar18 ^ 0x7f;
          auVar83[10] = bVar18;
          auVar83[0xb] = bVar18;
          auVar83[0xc] = bVar68 ^ 0xff;
          auVar83[0xd] = bVar68 ^ 0x7f;
          auVar83[0xe] = bVar68;
          auVar83[0xf] = bVar68;
          auVar93[6] = 0;
          auVar93._0_6_ =
               CONCAT15(cVar92,CONCAT14(cVar92,(uint)(ushort)(CONCAT11(cVar90,cVar90) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar93[7] = cVar92;
          auVar93[8] = bVar18 ^ 0xff;
          auVar93[9] = bVar18 ^ 0x7f;
          auVar93[10] = bVar18;
          auVar93[0xb] = bVar18;
          auVar93[0xc] = bVar68 ^ 0xff;
          auVar93[0xd] = bVar68 ^ 0x7f;
          auVar93[0xe] = bVar68;
          auVar93[0xf] = bVar68;
          auVar93 = auVar93 ^ (auVar83 ^ auVar73) & auVar59;
          auVar23._0_4_ = -(uint)((int)uVar33 >> 0x1b == (int)uVar33 >> 0x1f);
          auVar23._4_4_ = -(uint)((int)uVar38 >> 0x1b == (int)uVar38 >> 0x1f);
          auVar23._8_4_ = -(uint)((int)uVar40 >> 0x1b == (int)uVar40 >> 0x1f);
          auVar23._12_4_ = -(uint)((int)uVar41 >> 0x1b == (int)uVar41 >> 0x1f);
          cVar15 = (char)((int)uVar33 >> 0x1f);
          cVar16 = (char)((int)uVar38 >> 0x1f);
          auVar24._0_6_ =
               CONCAT15(cVar16,CONCAT14(cVar16,(uint)(ushort)(CONCAT11(cVar15,cVar15) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar24[6] = 0;
          auVar24[7] = cVar16;
          bVar17 = (byte)((int)uVar40 >> 0x1f);
          auVar24[8] = bVar17 ^ 0xff;
          auVar24[9] = bVar17 ^ 0x7f;
          auVar24[10] = bVar17;
          auVar24[0xb] = bVar17;
          bVar17 = (byte)((int)uVar41 >> 0x1f);
          auVar24[0xc] = bVar17 ^ 0xff;
          auVar24[0xd] = bVar17 ^ 0x7f;
          auVar24[0xe] = bVar17;
          auVar24[0xf] = bVar17;
          auVar95._0_4_ = uVar60 >> 0xc;
          auVar95._4_4_ = uVar67 >> 0xc;
          auVar95._8_4_ = uVar69 >> 0xc;
          auVar95._12_4_ = uVar70 >> 0xc;
          cVar15 = (char)((int)uVar60 >> 0x1f);
          cVar16 = (char)((int)uVar67 >> 0x1f);
          bVar17 = (byte)((int)uVar69 >> 0x1f);
          bVar18 = (byte)((int)uVar70 >> 0x1f);
          auVar10._8_4_ = uVar40 >> 0xc;
          auVar10._0_8_ = (ulong)CONCAT24((short)(uVar38 >> 0xc),uVar33 >> 0xc) & 0xffffffff0000ffff
          ;
          auVar10._12_4_ = uVar41 >> 0xc;
          auVar24 = auVar24 ^ (auVar24 ^ auVar10) & auVar23;
          auVar35._0_4_ =
               -(uint)((int)uVar60 >> 0x1b ==
                      CONCAT13(cVar15,CONCAT12(cVar15,CONCAT11(cVar15,cVar15))));
          auVar35._4_4_ =
               -(uint)((int)uVar67 >> 0x1b ==
                      CONCAT13(cVar16,CONCAT12(cVar16,CONCAT11(cVar16,cVar16))));
          auVar35._8_4_ =
               -(uint)((int)uVar69 >> 0x1b ==
                      CONCAT13(bVar17,CONCAT12(bVar17,CONCAT11(bVar17,bVar17))));
          auVar35._12_4_ =
               -(uint)((int)uVar70 >> 0x1b ==
                      CONCAT13(bVar18,CONCAT12(bVar18,CONCAT11(bVar18,bVar18))));
          auVar57[6] = 0;
          auVar57._0_6_ =
               CONCAT15(cVar16,CONCAT14(cVar16,(uint)(ushort)(CONCAT11(cVar15,cVar15) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar57[7] = cVar16;
          auVar57[8] = bVar17 ^ 0xff;
          auVar57[9] = bVar17 ^ 0x7f;
          auVar57[10] = bVar17;
          auVar57[0xb] = bVar17;
          auVar57[0xc] = bVar18 ^ 0xff;
          auVar57[0xd] = bVar18 ^ 0x7f;
          auVar57[0xe] = bVar18;
          auVar57[0xf] = bVar18;
          auVar61[6] = 0;
          auVar61._0_6_ =
               CONCAT15(cVar16,CONCAT14(cVar16,(uint)(ushort)(CONCAT11(cVar15,cVar15) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar61[7] = cVar16;
          auVar61[8] = bVar17 ^ 0xff;
          auVar61[9] = bVar17 ^ 0x7f;
          auVar61[10] = bVar17;
          auVar61[0xb] = bVar17;
          auVar61[0xc] = bVar18 ^ 0xff;
          auVar61[0xd] = bVar18 ^ 0x7f;
          auVar61[0xe] = bVar18;
          auVar61[0xf] = bVar18;
          auVar61 = auVar61 ^ (auVar57 ^ auVar95) & auVar35;
          *param_1 = auVar53._0_2_;
          param_1[1] = auVar99._0_2_;
          param_1[2] = auVar103._0_2_;
          param_1[3] = auVar46._0_2_;
          param_1[4] = auVar53._4_2_;
          param_1[5] = auVar99._4_2_;
          param_1[6] = auVar103._4_2_;
          param_1[7] = auVar46._4_2_;
          param_1[8] = auVar53._8_2_;
          param_1[9] = auVar99._8_2_;
          param_1[10] = auVar103._8_2_;
          param_1[0xb] = auVar46._8_2_;
          param_1[0xc] = auVar53._12_2_;
          param_1[0xd] = auVar99._12_2_;
          param_1[0xe] = auVar103._12_2_;
          param_1[0xf] = auVar46._12_2_;
          param_1[0x10] = auVar64._0_2_;
          param_1[0x11] = auVar93._0_2_;
          param_1[0x12] = auVar24._0_2_;
          param_1[0x13] = auVar61._0_2_;
          param_1[0x14] = auVar64._4_2_;
          param_1[0x15] = auVar93._4_2_;
          param_1[0x16] = auVar24._4_2_;
          param_1[0x17] = auVar61._4_2_;
          param_1[0x18] = auVar64._8_2_;
          param_1[0x19] = auVar93._8_2_;
          param_1[0x1a] = auVar24._8_2_;
          param_1[0x1b] = auVar61._8_2_;
          param_1[0x1c] = auVar64._12_2_;
          param_1[0x1d] = auVar93._12_2_;
          param_1[0x1e] = auVar24._12_2_;
          param_1[0x1f] = auVar61._12_2_;
          param_1 = param_1 + 0x20;
        } while (uVar13 != 0);
        bVar11 = uVar14 == param_2;
        param_3 = psVar1;
        param_2 = param_2 - uVar14;
        param_1 = (short *)puVar2;
        if (bVar11) {
          return;
        }
      }
    }
    do {
      uVar60 = (int)*param_5 * (int)*param_3;
      uVar3 = (ushort)(uVar60 >> 0xc);
      if ((int)uVar60 >> 0x1f != (int)uVar60 >> 0x1b) {
        uVar3 = (ushort)((int)uVar60 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar3;
      uVar60 = (int)*param_5 * (int)param_3[1];
      uVar3 = (ushort)(uVar60 >> 0xc);
      if ((int)uVar60 >> 0x1f != (int)uVar60 >> 0x1b) {
        uVar3 = (ushort)((int)uVar60 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar3;
      uVar60 = (int)*param_5 * (int)param_3[2];
      uVar3 = (ushort)(uVar60 >> 0xc);
      if ((int)uVar60 >> 0x1f != (int)uVar60 >> 0x1b) {
        uVar3 = (ushort)((int)uVar60 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar3;
      psVar1 = param_3 + 3;
      param_3 = param_3 + 4;
      uVar60 = (int)*param_5 * (int)*psVar1;
      uVar3 = (ushort)(uVar60 >> 0xc);
      if ((int)uVar60 >> 0x1f != (int)uVar60 >> 0x1b) {
        uVar3 = (ushort)((int)uVar60 >> 0x1f) ^ 0x7fff;
      }
      param_2 = param_2 - 1;
      param_1[3] = uVar3;
      param_1 = param_1 + 4;
    } while (param_2 != 0);
  }
  else {
    iVar5 = (int)param_6;
    if (3 < param_2) {
      if ((param_3 + param_2 * 4 <= param_1 || param_1 + param_2 * 4 <= param_3) &&
         ((short *)((long)param_5 + 1U) <= param_1 || param_1 + param_2 * 4 <= param_5)) {
        uVar14 = param_2 & 0xfffffffffffffffc;
        psVar1 = param_3 + uVar14 * 4;
        puVar2 = (ushort *)(param_1 + uVar14 * 4);
        piVar12 = param_4;
        uVar13 = uVar14;
        do {
          sVar20 = *param_3;
          sVar32 = param_3[1];
          sVar42 = param_3[2];
          sVar50 = param_3[3];
          sVar25 = param_3[4];
          sVar36 = param_3[5];
          sVar47 = param_3[6];
          sVar54 = param_3[7];
          sVar27 = param_3[8];
          sVar37 = param_3[9];
          sVar48 = param_3[10];
          sVar55 = param_3[0xb];
          sVar29 = param_3[0xc];
          sVar39 = param_3[0xd];
          sVar49 = param_3[0xe];
          sVar56 = param_3[0xf];
          param_3 = param_3 + 0x10;
          sVar4 = *param_5;
          uVar13 = uVar13 - 4;
          uVar60 = (int)sVar4 * (int)sVar20;
          uVar67 = (int)sVar4 * (int)sVar25;
          uVar69 = (int)sVar4 * (int)sVar27;
          uVar70 = (int)sVar4 * (int)sVar29;
          bVar17 = (byte)(uVar69 >> 0x18);
          bVar18 = (byte)(uVar70 >> 0x18);
          uVar72 = (int)sVar4 * (int)sVar32;
          uVar77 = (int)sVar4 * (int)sVar36;
          uVar79 = (int)sVar4 * (int)sVar37;
          uVar81 = (int)sVar4 * (int)sVar39;
          auVar96._0_4_ = -(uint)((int)uVar60 >> 0x1b == (int)uVar60 >> 0x1f);
          auVar96._4_4_ = -(uint)((int)uVar67 >> 0x1b == (int)uVar67 >> 0x1f);
          auVar96._8_4_ = -(uint)((int)uVar69 >> 0x1b == (int)uVar69 >> 0x1f);
          auVar96._12_4_ = -(uint)((int)uVar70 >> 0x1b == (int)uVar70 >> 0x1f);
          cVar15 = (char)((int)uVar60 >> 0x1f);
          cVar16 = (char)((int)uVar67 >> 0x1f);
          auVar97._0_6_ =
               CONCAT15(cVar16,CONCAT14(cVar16,(uint)(ushort)(CONCAT11(cVar15,cVar15) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar97[6] = 0;
          auVar97[7] = cVar16;
          bVar68 = (char)bVar17 >> 7;
          auVar97[8] = bVar68 ^ 0xff;
          auVar97[9] = bVar68 ^ 0x7f;
          auVar97[10] = bVar68;
          auVar97[0xb] = bVar68;
          bVar68 = (char)bVar18 >> 7;
          auVar97[0xc] = bVar68 ^ 0xff;
          auVar97[0xd] = bVar68 ^ 0x7f;
          auVar97[0xe] = bVar68;
          auVar97[0xf] = bVar68;
          auVar100._0_4_ = uVar72 >> 0xc;
          auVar100._4_4_ = uVar77 >> 0xc;
          auVar100._8_4_ = uVar79 >> 0xc;
          auVar100._12_4_ = uVar81 >> 0xc;
          auVar6._6_2_ = 0;
          auVar6._0_6_ = CONCAT15((char)((uVar67 >> 0xc) >> 8),
                                  CONCAT14((char)(uVar67 >> 0xc),uVar60 >> 0xc)) & 0xffff0000ffff;
          auVar6[8] = (char)(uVar69 >> 0xc);
          auVar6[9] = (char)((uVar69 >> 0xc) >> 8);
          auVar6[10] = bVar17 >> 4;
          auVar6[0xb] = 0;
          auVar6[0xc] = (char)(uVar70 >> 0xc);
          auVar6[0xd] = (char)((uVar70 >> 0xc) >> 8);
          auVar6[0xe] = bVar18 >> 4;
          auVar6[0xf] = 0;
          auVar97 = auVar97 ^ (auVar97 ^ auVar6) & auVar96;
          uVar82 = (int)sVar4 * (int)sVar42;
          uVar86 = (int)sVar4 * (int)sVar47;
          uVar87 = (int)sVar4 * (int)sVar48;
          uVar88 = (int)sVar4 * (int)sVar49;
          auVar65._0_4_ = -(uint)((int)uVar72 >> 0x1b == (int)uVar72 >> 0x1f);
          auVar65._4_4_ = -(uint)((int)uVar77 >> 0x1b == (int)uVar77 >> 0x1f);
          auVar65._8_4_ = -(uint)((int)uVar79 >> 0x1b == (int)uVar79 >> 0x1f);
          auVar65._12_4_ = -(uint)((int)uVar81 >> 0x1b == (int)uVar81 >> 0x1f);
          cVar15 = (char)((int)uVar72 >> 0x1f);
          cVar16 = (char)((int)uVar77 >> 0x1f);
          auVar66._0_6_ =
               CONCAT15(cVar16,CONCAT14(cVar16,(uint)(ushort)(CONCAT11(cVar15,cVar15) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar66[6] = 0;
          auVar66[7] = cVar16;
          bVar17 = (byte)((int)uVar79 >> 0x1f);
          auVar66[8] = bVar17 ^ 0xff;
          auVar66[9] = bVar17 ^ 0x7f;
          auVar66[10] = bVar17;
          auVar66[0xb] = bVar17;
          bVar17 = (byte)((int)uVar81 >> 0x1f);
          auVar66[0xc] = bVar17 ^ 0xff;
          auVar66[0xd] = bVar17 ^ 0x7f;
          auVar66[0xe] = bVar17;
          auVar66[0xf] = bVar17;
          bVar17 = (byte)(uVar87 >> 0x18);
          bVar18 = (byte)(uVar88 >> 0x18);
          auVar66 = auVar66 ^ (auVar66 ^ auVar100) & auVar65;
          uVar60 = (int)sVar4 * (int)sVar50;
          uVar67 = (int)sVar4 * (int)sVar54;
          uVar69 = (int)sVar4 * (int)sVar55;
          uVar70 = (int)sVar4 * (int)sVar56;
          auVar74._0_4_ = -(uint)((int)uVar82 >> 0x1b == (int)uVar82 >> 0x1f);
          auVar74._4_4_ = -(uint)((int)uVar86 >> 0x1b == (int)uVar86 >> 0x1f);
          auVar74._8_4_ = -(uint)((int)uVar87 >> 0x1b == (int)uVar87 >> 0x1f);
          auVar74._12_4_ = -(uint)((int)uVar88 >> 0x1b == (int)uVar88 >> 0x1f);
          cVar15 = (char)((int)uVar82 >> 0x1f);
          cVar16 = (char)((int)uVar86 >> 0x1f);
          auVar75._0_6_ =
               CONCAT15(cVar16,CONCAT14(cVar16,(uint)(ushort)(CONCAT11(cVar15,cVar15) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar75[6] = 0;
          auVar75[7] = cVar16;
          bVar68 = (char)bVar17 >> 7;
          auVar75[8] = bVar68 ^ 0xff;
          auVar75[9] = bVar68 ^ 0x7f;
          auVar75[10] = bVar68;
          auVar75[0xb] = bVar68;
          bVar68 = (char)bVar18 >> 7;
          auVar75[0xc] = bVar68 ^ 0xff;
          auVar75[0xd] = bVar68 ^ 0x7f;
          auVar75[0xe] = bVar68;
          auVar75[0xf] = bVar68;
          auVar101._0_4_ = uVar60 >> 0xc;
          auVar101._4_4_ = uVar67 >> 0xc;
          auVar101._8_4_ = uVar69 >> 0xc;
          auVar101._12_4_ = uVar70 >> 0xc;
          auVar7._6_2_ = 0;
          auVar7._0_6_ = CONCAT15((char)((uVar86 >> 0xc) >> 8),
                                  CONCAT14((char)(uVar86 >> 0xc),uVar82 >> 0xc)) & 0xffff0000ffff;
          auVar7[8] = (char)(uVar87 >> 0xc);
          auVar7[9] = (char)((uVar87 >> 0xc) >> 8);
          auVar7[10] = bVar17 >> 4;
          auVar7[0xb] = 0;
          auVar7[0xc] = (char)(uVar88 >> 0xc);
          auVar7[0xd] = (char)((uVar88 >> 0xc) >> 8);
          auVar7[0xe] = bVar18 >> 4;
          auVar7[0xf] = 0;
          auVar75 = auVar75 ^ (auVar75 ^ auVar7) & auVar74;
          auVar84._0_4_ = -(uint)((int)uVar60 >> 0x1b == (int)uVar60 >> 0x1f);
          auVar84._4_4_ = -(uint)((int)uVar67 >> 0x1b == (int)uVar67 >> 0x1f);
          auVar84._8_4_ = -(uint)((int)uVar69 >> 0x1b == (int)uVar69 >> 0x1f);
          auVar84._12_4_ = -(uint)((int)uVar70 >> 0x1b == (int)uVar70 >> 0x1f);
          cVar15 = (char)((int)uVar60 >> 0x1f);
          cVar16 = (char)((int)uVar67 >> 0x1f);
          auVar85._0_6_ =
               CONCAT15(cVar16,CONCAT14(cVar16,(uint)(ushort)(CONCAT11(cVar15,cVar15) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar85[6] = 0;
          auVar85[7] = cVar16;
          bVar17 = (byte)((int)uVar69 >> 0x1f);
          auVar85[8] = bVar17 ^ 0xff;
          auVar85[9] = bVar17 ^ 0x7f;
          auVar85[10] = bVar17;
          auVar85[0xb] = bVar17;
          bVar17 = (byte)((int)uVar70 >> 0x1f);
          auVar85[0xc] = bVar17 ^ 0xff;
          auVar85[0xd] = bVar17 ^ 0x7f;
          auVar85[0xe] = bVar17;
          auVar85[0xf] = bVar17;
          auVar85 = auVar85 ^ (auVar85 ^ auVar101) & auVar84;
          *param_1 = auVar97._0_2_;
          param_1[1] = auVar66._0_2_;
          param_1[2] = auVar75._0_2_;
          param_1[3] = auVar85._0_2_;
          param_1[4] = auVar97._4_2_;
          param_1[5] = auVar66._4_2_;
          param_1[6] = auVar75._4_2_;
          param_1[7] = auVar85._4_2_;
          param_1[8] = auVar97._8_2_;
          param_1[9] = auVar66._8_2_;
          param_1[10] = auVar75._8_2_;
          param_1[0xb] = auVar85._8_2_;
          param_1[0xc] = auVar97._12_2_;
          param_1[0xd] = auVar66._12_2_;
          param_1[0xe] = auVar75._12_2_;
          param_1[0xf] = auVar85._12_2_;
          param_1 = param_1 + 0x10;
          piVar12[2] = piVar12[2] +
                       ((int)sVar37 + (int)sVar27 + (int)sVar48 + (int)sVar55 >> 2) * iVar5;
          piVar12[3] = piVar12[3] +
                       ((int)sVar39 + (int)sVar29 + (int)sVar49 + (int)sVar56 >> 2) * iVar5;
          *piVar12 = *piVar12 + ((int)sVar32 + (int)sVar20 + (int)sVar42 + (int)sVar50 >> 2) * iVar5
          ;
          piVar12[1] = piVar12[1] +
                       ((int)sVar36 + (int)sVar25 + (int)sVar47 + (int)sVar54 >> 2) * iVar5;
          piVar12 = piVar12 + 4;
        } while (uVar13 != 0);
        bVar11 = uVar14 == param_2;
        param_3 = psVar1;
        param_4 = param_4 + uVar14;
        param_2 = param_2 - uVar14;
        param_1 = (short *)puVar2;
        if (bVar11) {
          return;
        }
      }
    }
    do {
      sVar4 = *param_3;
      uVar60 = (int)*param_5 * (int)sVar4;
      uVar3 = (ushort)(uVar60 >> 0xc);
      if ((int)uVar60 >> 0x1f != (int)uVar60 >> 0x1b) {
        uVar3 = (ushort)((int)uVar60 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar3;
      sVar20 = param_3[1];
      uVar60 = (int)*param_5 * (int)sVar20;
      uVar3 = (ushort)(uVar60 >> 0xc);
      if ((int)uVar60 >> 0x1f != (int)uVar60 >> 0x1b) {
        uVar3 = (ushort)((int)uVar60 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar3;
      sVar25 = param_3[2];
      uVar60 = (int)*param_5 * (int)sVar25;
      uVar3 = (ushort)(uVar60 >> 0xc);
      if ((int)uVar60 >> 0x1f != (int)uVar60 >> 0x1b) {
        uVar3 = (ushort)((int)uVar60 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar3;
      sVar27 = param_3[3];
      uVar60 = (int)*param_5 * (int)sVar27;
      uVar3 = (ushort)(uVar60 >> 0xc);
      if ((int)uVar60 >> 0x1f != (int)uVar60 >> 0x1b) {
        uVar3 = (ushort)((int)uVar60 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar3;
      param_2 = param_2 - 1;
      *param_4 = *param_4 + ((int)sVar20 + (int)sVar4 + (int)sVar25 + (int)sVar27 >> 2) * iVar5;
      param_3 = param_3 + 4;
      param_4 = param_4 + 1;
      param_1 = param_1 + 4;
    } while (param_2 != 0);
  }
  return;
}

