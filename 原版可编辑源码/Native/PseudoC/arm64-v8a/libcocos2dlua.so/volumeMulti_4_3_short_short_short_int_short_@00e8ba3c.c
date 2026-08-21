
/* void cocos2d::experimental::volumeMulti<4, 3, short, short, short, int, short>(short*, unsigned
   long, short const*, int*, short const*, short) */

void cocos2d::experimental::volumeMulti<4,3,short,short,short,int,short>
               (short *param_1,ulong param_2,short *param_3,int *param_4,short *param_5,
               short param_6)

{
  short *psVar1;
  ushort *puVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  bool bVar17;
  int *piVar18;
  ulong uVar19;
  ulong uVar20;
  char cVar21;
  char cVar25;
  byte bVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  byte bVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  short sVar39;
  short sVar44;
  short sVar45;
  short sVar46;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  short sVar47;
  short sVar50;
  short sVar51;
  short sVar52;
  byte bVar53;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  short sVar54;
  short sVar58;
  short sVar59;
  short sVar60;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  char cVar61;
  char cVar62;
  byte bVar63;
  uint uVar64;
  uint uVar67;
  uint uVar68;
  undefined1 auVar65 [16];
  uint uVar69;
  undefined1 auVar66 [16];
  uint uVar70;
  uint uVar71;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  uint uVar79;
  uint uVar80;
  uint uVar85;
  uint uVar86;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  uint uVar87;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  
  if (param_4 == (int *)0x0) {
    if (7 < param_2) {
      if ((param_3 + param_2 * 3 <= param_1 || param_1 + param_2 * 3 <= param_3) &&
         ((short *)((long)param_5 + 1U) <= param_1 || param_1 + param_2 * 3 <= param_5)) {
        uVar20 = param_2 & 0xfffffffffffffff8;
        psVar1 = param_3 + uVar20 * 3;
        puVar2 = (ushort *)(param_1 + uVar20 * 3);
        uVar19 = uVar20;
        do {
          auVar22._0_2_ = *param_3;
          sVar39 = param_3[1];
          auVar40._0_2_ = param_3[2];
          auVar22._2_2_ = param_3[3];
          sVar44 = param_3[4];
          uVar27 = (undefined1)((ushort)sVar44 >> 8);
          auVar40._2_2_ = param_3[5];
          auVar22._4_2_ = param_3[6];
          sVar45 = param_3[7];
          uVar28 = (undefined1)((ushort)sVar45 >> 8);
          auVar40._4_2_ = param_3[8];
          auVar22._6_2_ = param_3[9];
          sVar46 = param_3[10];
          uVar29 = (undefined1)((ushort)sVar46 >> 8);
          auVar40._6_2_ = param_3[0xb];
          auVar22._8_2_ = param_3[0xc];
          uVar30 = (undefined1)param_3[0xd];
          uVar31 = (undefined1)((ushort)param_3[0xd] >> 8);
          auVar40._8_2_ = param_3[0xe];
          auVar22._10_2_ = param_3[0xf];
          uVar32 = (undefined1)param_3[0x10];
          uVar33 = (undefined1)((ushort)param_3[0x10] >> 8);
          auVar40._10_2_ = param_3[0x11];
          auVar22._12_2_ = param_3[0x12];
          uVar34 = (undefined1)param_3[0x13];
          uVar36 = (undefined1)((ushort)param_3[0x13] >> 8);
          auVar40._12_2_ = param_3[0x14];
          auVar22._14_2_ = param_3[0x15];
          uVar37 = (undefined1)param_3[0x16];
          uVar38 = (undefined1)((ushort)param_3[0x16] >> 8);
          auVar40._14_2_ = param_3[0x17];
          param_3 = param_3 + 0x18;
          sVar4 = *param_5;
          uVar19 = uVar19 - 8;
          auVar55 = NEON_ext(auVar22,auVar22,8,1);
          uVar71 = (int)sVar4 * (int)auVar22._0_2_;
          uVar75 = (int)sVar4 * (int)auVar22._2_2_;
          uVar77 = (int)sVar4 * (int)auVar22._4_2_;
          uVar79 = (int)sVar4 * (int)auVar22._6_2_;
          auVar65[2] = (char)sVar44;
          auVar65._0_2_ = sVar39;
          auVar65[3] = uVar27;
          auVar65[4] = (char)sVar45;
          auVar65[5] = uVar28;
          auVar65[6] = (char)sVar46;
          auVar65[7] = uVar29;
          auVar65[8] = uVar30;
          auVar65[9] = uVar31;
          auVar65[10] = uVar32;
          auVar65[0xb] = uVar33;
          auVar65[0xc] = uVar34;
          auVar65[0xd] = uVar36;
          auVar65[0xe] = uVar37;
          auVar65[0xf] = uVar38;
          auVar81[2] = (char)sVar44;
          auVar81._0_2_ = sVar39;
          auVar81[3] = uVar27;
          auVar81[4] = (char)sVar45;
          auVar81[5] = uVar28;
          auVar81[6] = (char)sVar46;
          auVar81[7] = uVar29;
          auVar81[8] = uVar30;
          auVar81[9] = uVar31;
          auVar81[10] = uVar32;
          auVar81[0xb] = uVar33;
          auVar81[0xc] = uVar34;
          auVar81[0xd] = uVar36;
          auVar81[0xe] = uVar37;
          auVar81[0xf] = uVar38;
          auVar65 = NEON_ext(auVar65,auVar81,8,1);
          uVar70 = (int)sVar4 * (int)sVar39;
          uVar74 = (int)sVar4 * (int)sVar44;
          uVar76 = (int)sVar4 * (int)sVar45;
          uVar78 = (int)sVar4 * (int)sVar46;
          auVar81 = NEON_ext(auVar40,auVar40,8,1);
          uVar80 = (int)sVar4 * (int)auVar40._0_2_;
          uVar85 = (int)sVar4 * (int)auVar40._2_2_;
          uVar86 = (int)sVar4 * (int)auVar40._4_2_;
          uVar87 = (int)sVar4 * (int)auVar40._6_2_;
          uVar5 = (int)sVar4 * (int)auVar55._0_2_;
          uVar10 = (int)sVar4 * (int)auVar55._2_2_;
          uVar11 = (int)sVar4 * (int)auVar55._4_2_;
          uVar12 = (int)sVar4 * (int)auVar55._6_2_;
          auVar41._0_4_ = uVar71 >> 0xc;
          auVar41._4_4_ = uVar75 >> 0xc;
          auVar41._8_4_ = uVar77 >> 0xc;
          auVar41._12_4_ = uVar79 >> 0xc;
          cVar21 = (char)((int)uVar71 >> 0x1f);
          cVar25 = (char)((int)uVar75 >> 0x1f);
          bVar53 = (byte)((int)uVar77 >> 0x1f);
          bVar63 = (byte)((int)uVar79 >> 0x1f);
          auVar56._0_4_ =
               -(uint)((int)uVar71 >> 0x1b ==
                      CONCAT13(cVar21,CONCAT12(cVar21,CONCAT11(cVar21,cVar21))));
          auVar56._4_4_ =
               -(uint)((int)uVar75 >> 0x1b ==
                      CONCAT13(cVar25,CONCAT12(cVar25,CONCAT11(cVar25,cVar25))));
          auVar56._8_4_ =
               -(uint)((int)uVar77 >> 0x1b ==
                      CONCAT13(bVar53,CONCAT12(bVar53,CONCAT11(bVar53,bVar53))));
          auVar56._12_4_ =
               -(uint)((int)uVar79 >> 0x1b ==
                      CONCAT13(bVar63,CONCAT12(bVar63,CONCAT11(bVar63,bVar63))));
          auVar8[6] = 0;
          auVar8._0_6_ = CONCAT15(cVar25,CONCAT14(cVar25,(uint)(ushort)(CONCAT11(cVar21,cVar21) ^
                                                                       0x7fff))) ^ 0x7fff00000000;
          auVar8[7] = cVar25;
          auVar8[8] = bVar53 ^ 0xff;
          auVar8[9] = bVar53 ^ 0x7f;
          auVar8[10] = bVar53;
          auVar8[0xb] = bVar53;
          auVar8[0xc] = bVar63 ^ 0xff;
          auVar8[0xd] = bVar63 ^ 0x7f;
          auVar8[0xe] = bVar63;
          auVar8[0xf] = bVar63;
          auVar57[6] = 0;
          auVar57._0_6_ =
               CONCAT15(cVar25,CONCAT14(cVar25,(uint)(ushort)(CONCAT11(cVar21,cVar21) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar57[7] = cVar25;
          auVar57[8] = bVar53 ^ 0xff;
          auVar57[9] = bVar53 ^ 0x7f;
          auVar57[10] = bVar53;
          auVar57[0xb] = bVar53;
          auVar57[0xc] = bVar63 ^ 0xff;
          auVar57[0xd] = bVar63 ^ 0x7f;
          auVar57[0xe] = bVar63;
          auVar57[0xf] = bVar63;
          auVar57 = auVar57 ^ (auVar8 ^ auVar41) & auVar56;
          cVar21 = (char)((int)uVar5 >> 0x1f);
          cVar25 = (char)((int)uVar10 >> 0x1f);
          bVar26 = (byte)((int)uVar11 >> 0x1f);
          bVar35 = (byte)((int)uVar12 >> 0x1f);
          uVar64 = (int)sVar4 * (int)auVar65._0_2_;
          uVar67 = (int)sVar4 * (int)auVar65._2_2_;
          uVar68 = (int)sVar4 * (int)auVar65._4_2_;
          uVar69 = (int)sVar4 * (int)auVar65._6_2_;
          auVar88._0_4_ = -(uint)((int)uVar70 >> 0x1b == (int)uVar70 >> 0x1f);
          auVar88._4_4_ = -(uint)((int)uVar74 >> 0x1b == (int)uVar74 >> 0x1f);
          auVar88._8_4_ = -(uint)((int)uVar76 >> 0x1b == (int)uVar76 >> 0x1f);
          auVar88._12_4_ = -(uint)((int)uVar78 >> 0x1b == (int)uVar78 >> 0x1f);
          cVar61 = (char)((int)uVar70 >> 0x1f);
          cVar62 = (char)((int)uVar74 >> 0x1f);
          auVar89._0_6_ =
               CONCAT15(cVar62,CONCAT14(cVar62,(uint)(ushort)(CONCAT11(cVar61,cVar61) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar89[6] = 0;
          auVar89[7] = cVar62;
          bVar53 = (byte)((int)uVar76 >> 0x1f);
          auVar89[8] = bVar53 ^ 0xff;
          auVar89[9] = bVar53 ^ 0x7f;
          auVar89[10] = bVar53;
          auVar89[0xb] = bVar53;
          bVar53 = (byte)((int)uVar78 >> 0x1f);
          auVar89[0xc] = bVar53 ^ 0xff;
          auVar89[0xd] = bVar53 ^ 0x7f;
          auVar89[0xe] = bVar53;
          auVar89[0xf] = bVar53;
          auVar42._0_4_ =
               -(uint)((int)uVar5 >> 0x1b ==
                      CONCAT13(cVar21,CONCAT12(cVar21,CONCAT11(cVar21,cVar21))));
          auVar42._4_4_ =
               -(uint)((int)uVar10 >> 0x1b ==
                      CONCAT13(cVar25,CONCAT12(cVar25,CONCAT11(cVar25,cVar25))));
          auVar42._8_4_ =
               -(uint)((int)uVar11 >> 0x1b ==
                      CONCAT13(bVar26,CONCAT12(bVar26,CONCAT11(bVar26,bVar26))));
          auVar42._12_4_ =
               -(uint)((int)uVar12 >> 0x1b ==
                      CONCAT13(bVar35,CONCAT12(bVar35,CONCAT11(bVar35,bVar35))));
          uVar71 = (int)sVar4 * (int)auVar81._0_2_;
          uVar75 = (int)sVar4 * (int)auVar81._2_2_;
          uVar77 = (int)sVar4 * (int)auVar81._4_2_;
          uVar79 = (int)sVar4 * (int)auVar81._6_2_;
          auVar82._0_4_ = uVar80 >> 0xc;
          auVar82._4_4_ = uVar85 >> 0xc;
          auVar82._8_4_ = uVar86 >> 0xc;
          auVar82._12_4_ = uVar87 >> 0xc;
          bVar53 = (byte)(uVar68 >> 0x18);
          bVar63 = (byte)(uVar69 >> 0x18);
          auVar14._8_4_ = uVar76 >> 0xc;
          auVar14._0_8_ = (ulong)CONCAT24((short)(uVar74 >> 0xc),uVar70 >> 0xc) & 0xffffffff0000ffff
          ;
          auVar14._12_4_ = uVar78 >> 0xc;
          auVar89 = auVar89 ^ (auVar89 ^ auVar14) & auVar88;
          auVar55[6] = 0;
          auVar55._0_6_ =
               CONCAT15(cVar25,CONCAT14(cVar25,(uint)(ushort)(CONCAT11(cVar21,cVar21) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar55[7] = cVar25;
          auVar55[8] = bVar26 ^ 0xff;
          auVar55[9] = bVar26 ^ 0x7f;
          auVar55[10] = bVar26;
          auVar55[0xb] = bVar26;
          auVar55[0xc] = bVar35 ^ 0xff;
          auVar55[0xd] = bVar35 ^ 0x7f;
          auVar55[0xe] = bVar35;
          auVar55[0xf] = bVar35;
          auVar16._8_2_ = (short)(uVar11 >> 0xc);
          auVar16._0_8_ = (ulong)CONCAT24((short)(uVar10 >> 0xc),uVar5 >> 0xc) & 0xffffffff0000ffff;
          auVar16._10_2_ = (ushort)(uVar11 >> 0x1c);
          auVar16._12_2_ = (short)(uVar12 >> 0xc);
          auVar16._14_2_ = (ushort)(uVar12 >> 0x1c);
          auVar43[6] = 0;
          auVar43._0_6_ =
               CONCAT15(cVar25,CONCAT14(cVar25,(uint)(ushort)(CONCAT11(cVar21,cVar21) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar43[7] = cVar25;
          auVar43[8] = bVar26 ^ 0xff;
          auVar43[9] = bVar26 ^ 0x7f;
          auVar43[10] = bVar26;
          auVar43[0xb] = bVar26;
          auVar43[0xc] = bVar35 ^ 0xff;
          auVar43[0xd] = bVar35 ^ 0x7f;
          auVar43[0xe] = bVar35;
          auVar43[0xf] = bVar35;
          auVar43 = auVar43 ^ (auVar55 ^ auVar16) & auVar42;
          auVar92._0_4_ = -(uint)((int)uVar80 >> 0x1b == (int)uVar80 >> 0x1f);
          auVar92._4_4_ = -(uint)((int)uVar85 >> 0x1b == (int)uVar85 >> 0x1f);
          auVar92._8_4_ = -(uint)((int)uVar86 >> 0x1b == (int)uVar86 >> 0x1f);
          auVar92._12_4_ = -(uint)((int)uVar87 >> 0x1b == (int)uVar87 >> 0x1f);
          cVar21 = (char)((int)uVar80 >> 0x1f);
          cVar25 = (char)((int)uVar85 >> 0x1f);
          auVar93._0_6_ =
               CONCAT15(cVar25,CONCAT14(cVar25,(uint)(ushort)(CONCAT11(cVar21,cVar21) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar93[6] = 0;
          auVar93[7] = cVar25;
          bVar26 = (byte)((int)uVar86 >> 0x1f);
          auVar93[8] = bVar26 ^ 0xff;
          auVar93[9] = bVar26 ^ 0x7f;
          auVar93[10] = bVar26;
          auVar93[0xb] = bVar26;
          bVar26 = (byte)((int)uVar87 >> 0x1f);
          auVar93[0xc] = bVar26 ^ 0xff;
          auVar93[0xd] = bVar26 ^ 0x7f;
          auVar93[0xe] = bVar26;
          auVar93[0xf] = bVar26;
          auVar72._0_4_ = -(uint)((int)uVar64 >> 0x1b == (int)uVar64 >> 0x1f);
          auVar72._4_4_ = -(uint)((int)uVar67 >> 0x1b == (int)uVar67 >> 0x1f);
          auVar72._8_4_ = -(uint)((int)uVar68 >> 0x1b == (int)uVar68 >> 0x1f);
          auVar72._12_4_ = -(uint)((int)uVar69 >> 0x1b == (int)uVar69 >> 0x1f);
          cVar21 = (char)((int)uVar64 >> 0x1f);
          cVar25 = (char)((int)uVar67 >> 0x1f);
          auVar73._0_6_ =
               CONCAT15(cVar25,CONCAT14(cVar25,(uint)(ushort)(CONCAT11(cVar21,cVar21) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar73[6] = 0;
          auVar73[7] = cVar25;
          bVar26 = (char)bVar53 >> 7;
          auVar73[8] = bVar26 ^ 0xff;
          auVar73[9] = bVar26 ^ 0x7f;
          auVar73[10] = bVar26;
          auVar73[0xb] = bVar26;
          bVar26 = (char)bVar63 >> 7;
          auVar73[0xc] = bVar26 ^ 0xff;
          auVar73[0xd] = bVar26 ^ 0x7f;
          auVar73[0xe] = bVar26;
          auVar73[0xf] = bVar26;
          auVar93 = auVar93 ^ (auVar93 ^ auVar82) & auVar92;
          auVar9._6_2_ = 0;
          auVar9._0_6_ = CONCAT15((char)((uVar67 >> 0xc) >> 8),
                                  CONCAT14((char)(uVar67 >> 0xc),uVar64 >> 0xc)) & 0xffff0000ffff;
          auVar9[8] = (char)(uVar68 >> 0xc);
          auVar9[9] = (char)((uVar68 >> 0xc) >> 8);
          auVar9[10] = bVar53 >> 4;
          auVar9[0xb] = 0;
          auVar9[0xc] = (char)(uVar69 >> 0xc);
          auVar9[0xd] = (char)((uVar69 >> 0xc) >> 8);
          auVar9[0xe] = bVar63 >> 4;
          auVar9[0xf] = 0;
          auVar73 = auVar73 ^ (auVar73 ^ auVar9) & auVar72;
          auVar23._0_4_ = -(uint)((int)uVar71 >> 0x1b == (int)uVar71 >> 0x1f);
          auVar23._4_4_ = -(uint)((int)uVar75 >> 0x1b == (int)uVar75 >> 0x1f);
          auVar23._8_4_ = -(uint)((int)uVar77 >> 0x1b == (int)uVar77 >> 0x1f);
          auVar23._12_4_ = -(uint)((int)uVar79 >> 0x1b == (int)uVar79 >> 0x1f);
          cVar21 = (char)((int)uVar71 >> 0x1f);
          cVar25 = (char)((int)uVar75 >> 0x1f);
          auVar24._0_6_ =
               CONCAT15(cVar25,CONCAT14(cVar25,(uint)(ushort)(CONCAT11(cVar21,cVar21) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar24[6] = 0;
          auVar24[7] = cVar25;
          bVar53 = (byte)((int)uVar77 >> 0x1f);
          auVar24[8] = bVar53 ^ 0xff;
          auVar24[9] = bVar53 ^ 0x7f;
          auVar24[10] = bVar53;
          auVar24[0xb] = bVar53;
          bVar53 = (byte)((int)uVar79 >> 0x1f);
          auVar24[0xc] = bVar53 ^ 0xff;
          auVar24[0xd] = bVar53 ^ 0x7f;
          auVar24[0xe] = bVar53;
          auVar24[0xf] = bVar53;
          auVar15._8_4_ = uVar77 >> 0xc;
          auVar15._0_8_ = (ulong)CONCAT24((short)(uVar75 >> 0xc),uVar71 >> 0xc) & 0xffffffff0000ffff
          ;
          auVar15._12_4_ = uVar79 >> 0xc;
          auVar24 = auVar24 ^ (auVar24 ^ auVar15) & auVar23;
          *param_1 = auVar57._0_2_;
          param_1[1] = auVar89._0_2_;
          param_1[2] = auVar93._0_2_;
          param_1[3] = auVar57._4_2_;
          param_1[4] = auVar89._4_2_;
          param_1[5] = auVar93._4_2_;
          param_1[6] = auVar57._8_2_;
          param_1[7] = auVar89._8_2_;
          param_1[8] = auVar93._8_2_;
          param_1[9] = auVar57._12_2_;
          param_1[10] = auVar89._12_2_;
          param_1[0xb] = auVar93._12_2_;
          param_1[0xc] = auVar43._0_2_;
          param_1[0xd] = auVar73._0_2_;
          param_1[0xe] = auVar24._0_2_;
          param_1[0xf] = auVar43._4_2_;
          param_1[0x10] = auVar73._4_2_;
          param_1[0x11] = auVar24._4_2_;
          param_1[0x12] = auVar43._8_2_;
          param_1[0x13] = auVar73._8_2_;
          param_1[0x14] = auVar24._8_2_;
          param_1[0x15] = auVar43._12_2_;
          param_1[0x16] = auVar73._12_2_;
          param_1[0x17] = auVar24._12_2_;
          param_1 = param_1 + 0x18;
        } while (uVar19 != 0);
        bVar17 = uVar20 == param_2;
        param_3 = psVar1;
        param_2 = param_2 - uVar20;
        param_1 = (short *)puVar2;
        if (bVar17) {
          return;
        }
      }
    }
    do {
      uVar5 = (int)*param_5 * (int)*param_3;
      uVar3 = (ushort)(uVar5 >> 0xc);
      if ((int)uVar5 >> 0x1f != (int)uVar5 >> 0x1b) {
        uVar3 = (ushort)((int)uVar5 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar3;
      uVar5 = (int)*param_5 * (int)param_3[1];
      uVar3 = (ushort)(uVar5 >> 0xc);
      if ((int)uVar5 >> 0x1f != (int)uVar5 >> 0x1b) {
        uVar3 = (ushort)((int)uVar5 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar3;
      psVar1 = param_3 + 2;
      param_3 = param_3 + 3;
      uVar5 = (int)*param_5 * (int)*psVar1;
      uVar3 = (ushort)(uVar5 >> 0xc);
      if ((int)uVar5 >> 0x1f != (int)uVar5 >> 0x1b) {
        uVar3 = (ushort)((int)uVar5 >> 0x1f) ^ 0x7fff;
      }
      param_2 = param_2 - 1;
      param_1[2] = uVar3;
      param_1 = param_1 + 3;
    } while (param_2 != 0);
  }
  else {
    iVar6 = (int)param_6;
    if (3 < param_2) {
      if ((param_3 + param_2 * 3 <= param_1 || param_1 + param_2 * 3 <= param_3) &&
         ((short *)((long)param_5 + 1U) <= param_1 || param_1 + param_2 * 3 <= param_5)) {
        uVar20 = param_2 & 0xfffffffffffffffc;
        psVar1 = param_3 + uVar20 * 3;
        puVar2 = (ushort *)(param_1 + uVar20 * 3);
        piVar18 = param_4;
        uVar19 = uVar20;
        do {
          sVar39 = *param_3;
          sVar47 = param_3[1];
          sVar54 = param_3[2];
          sVar44 = param_3[3];
          sVar50 = param_3[4];
          sVar58 = param_3[5];
          sVar45 = param_3[6];
          sVar51 = param_3[7];
          sVar59 = param_3[8];
          sVar46 = param_3[9];
          sVar52 = param_3[10];
          sVar60 = param_3[0xb];
          param_3 = param_3 + 0xc;
          sVar4 = *param_5;
          uVar19 = uVar19 - 4;
          uVar71 = (int)sVar4 * (int)sVar39;
          uVar75 = (int)sVar4 * (int)sVar44;
          uVar77 = (int)sVar4 * (int)sVar45;
          uVar79 = (int)sVar4 * (int)sVar46;
          uVar80 = (int)sVar4 * (int)sVar47;
          uVar85 = (int)sVar4 * (int)sVar50;
          uVar86 = (int)sVar4 * (int)sVar51;
          uVar87 = (int)sVar4 * (int)sVar52;
          uVar5 = (int)sVar4 * (int)sVar54;
          uVar10 = (int)sVar4 * (int)sVar58;
          uVar11 = (int)sVar4 * (int)sVar59;
          uVar12 = (int)sVar4 * (int)sVar60;
          auVar90._0_4_ = -(uint)((int)uVar71 >> 0x1b == (int)uVar71 >> 0x1f);
          auVar90._4_4_ = -(uint)((int)uVar75 >> 0x1b == (int)uVar75 >> 0x1f);
          auVar90._8_4_ = -(uint)((int)uVar77 >> 0x1b == (int)uVar77 >> 0x1f);
          auVar90._12_4_ = -(uint)((int)uVar79 >> 0x1b == (int)uVar79 >> 0x1f);
          cVar21 = (char)((int)uVar71 >> 0x1f);
          cVar25 = (char)((int)uVar75 >> 0x1f);
          auVar91._0_6_ =
               CONCAT15(cVar25,CONCAT14(cVar25,(uint)(ushort)(CONCAT11(cVar21,cVar21) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar91[6] = 0;
          auVar91[7] = cVar25;
          bVar53 = (byte)((int)uVar77 >> 0x1f);
          auVar91[8] = bVar53 ^ 0xff;
          auVar91[9] = bVar53 ^ 0x7f;
          auVar91[10] = bVar53;
          auVar91[0xb] = bVar53;
          bVar53 = (byte)((int)uVar79 >> 0x1f);
          auVar91[0xc] = bVar53 ^ 0xff;
          auVar91[0xd] = bVar53 ^ 0x7f;
          auVar91[0xe] = bVar53;
          auVar91[0xf] = bVar53;
          auVar94._0_4_ = uVar80 >> 0xc;
          auVar94._4_4_ = uVar85 >> 0xc;
          auVar94._8_4_ = uVar86 >> 0xc;
          auVar94._12_4_ = uVar87 >> 0xc;
          auVar66._0_4_ = uVar5 >> 0xc;
          auVar66._4_4_ = uVar10 >> 0xc;
          auVar66._8_4_ = uVar11 >> 0xc;
          auVar66._12_4_ = uVar12 >> 0xc;
          cVar61 = (char)((int)uVar5 >> 0x1f);
          cVar62 = (char)((int)uVar10 >> 0x1f);
          bVar63 = (byte)((int)uVar11 >> 0x1f);
          bVar26 = (byte)((int)uVar12 >> 0x1f);
          auVar48._0_4_ = -(uint)((int)uVar80 >> 0x1b == (int)uVar80 >> 0x1f);
          auVar48._4_4_ = -(uint)((int)uVar85 >> 0x1b == (int)uVar85 >> 0x1f);
          auVar48._8_4_ = -(uint)((int)uVar86 >> 0x1b == (int)uVar86 >> 0x1f);
          auVar48._12_4_ = -(uint)((int)uVar87 >> 0x1b == (int)uVar87 >> 0x1f);
          cVar21 = (char)((int)uVar80 >> 0x1f);
          cVar25 = (char)((int)uVar85 >> 0x1f);
          auVar49._0_6_ =
               CONCAT15(cVar25,CONCAT14(cVar25,(uint)(ushort)(CONCAT11(cVar21,cVar21) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar49[6] = 0;
          auVar49[7] = cVar25;
          bVar53 = (byte)((int)uVar86 >> 0x1f);
          auVar49[8] = bVar53 ^ 0xff;
          auVar49[9] = bVar53 ^ 0x7f;
          auVar49[10] = bVar53;
          auVar49[0xb] = bVar53;
          bVar53 = (byte)((int)uVar87 >> 0x1f);
          auVar49[0xc] = bVar53 ^ 0xff;
          auVar49[0xd] = bVar53 ^ 0x7f;
          auVar49[0xe] = bVar53;
          auVar49[0xf] = bVar53;
          auVar13._8_4_ = uVar77 >> 0xc;
          auVar13._0_8_ = (ulong)CONCAT24((short)(uVar75 >> 0xc),uVar71 >> 0xc) & 0xffffffff0000ffff
          ;
          auVar13._12_4_ = uVar79 >> 0xc;
          auVar91 = auVar91 ^ (auVar91 ^ auVar13) & auVar90;
          auVar83._0_4_ =
               -(uint)((int)uVar5 >> 0x1b ==
                      CONCAT13(cVar61,CONCAT12(cVar61,CONCAT11(cVar61,cVar61))));
          auVar83._4_4_ =
               -(uint)((int)uVar10 >> 0x1b ==
                      CONCAT13(cVar62,CONCAT12(cVar62,CONCAT11(cVar62,cVar62))));
          auVar83._8_4_ =
               -(uint)((int)uVar11 >> 0x1b ==
                      CONCAT13(bVar63,CONCAT12(bVar63,CONCAT11(bVar63,bVar63))));
          auVar83._12_4_ =
               -(uint)((int)uVar12 >> 0x1b ==
                      CONCAT13(bVar26,CONCAT12(bVar26,CONCAT11(bVar26,bVar26))));
          auVar49 = auVar49 ^ (auVar49 ^ auVar94) & auVar48;
          auVar7[6] = 0;
          auVar7._0_6_ = CONCAT15(cVar62,CONCAT14(cVar62,(uint)(ushort)(CONCAT11(cVar61,cVar61) ^
                                                                       0x7fff))) ^ 0x7fff00000000;
          auVar7[7] = cVar62;
          auVar7[8] = bVar63 ^ 0xff;
          auVar7[9] = bVar63 ^ 0x7f;
          auVar7[10] = bVar63;
          auVar7[0xb] = bVar63;
          auVar7[0xc] = bVar26 ^ 0xff;
          auVar7[0xd] = bVar26 ^ 0x7f;
          auVar7[0xe] = bVar26;
          auVar7[0xf] = bVar26;
          auVar84[6] = 0;
          auVar84._0_6_ =
               CONCAT15(cVar62,CONCAT14(cVar62,(uint)(ushort)(CONCAT11(cVar61,cVar61) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar84[7] = cVar62;
          auVar84[8] = bVar63 ^ 0xff;
          auVar84[9] = bVar63 ^ 0x7f;
          auVar84[10] = bVar63;
          auVar84[0xb] = bVar63;
          auVar84[0xc] = bVar26 ^ 0xff;
          auVar84[0xd] = bVar26 ^ 0x7f;
          auVar84[0xe] = bVar26;
          auVar84[0xf] = bVar26;
          auVar84 = auVar84 ^ (auVar7 ^ auVar66) & auVar83;
          *param_1 = auVar91._0_2_;
          param_1[1] = auVar49._0_2_;
          param_1[2] = auVar84._0_2_;
          param_1[3] = auVar91._4_2_;
          param_1[4] = auVar49._4_2_;
          param_1[5] = auVar84._4_2_;
          param_1[6] = auVar91._8_2_;
          param_1[7] = auVar49._8_2_;
          param_1[8] = auVar84._8_2_;
          param_1[9] = auVar91._12_2_;
          param_1[10] = auVar49._12_2_;
          param_1[0xb] = auVar84._12_2_;
          param_1 = param_1 + 0xc;
          piVar18[2] = piVar18[2] +
                       ((((int)sVar51 + (int)sVar45 + (int)sVar59) * 0x1000) / 3 >> 0xc) * iVar6;
          piVar18[3] = piVar18[3] +
                       ((((int)sVar52 + (int)sVar46 + (int)sVar60) * 0x1000) / 3 >> 0xc) * iVar6;
          *piVar18 = *piVar18 +
                     ((((int)sVar47 + (int)sVar39 + (int)sVar54) * 0x1000) / 3 >> 0xc) * iVar6;
          piVar18[1] = piVar18[1] +
                       ((((int)sVar50 + (int)sVar44 + (int)sVar58) * 0x1000) / 3 >> 0xc) * iVar6;
          piVar18 = piVar18 + 4;
        } while (uVar19 != 0);
        bVar17 = uVar20 == param_2;
        param_3 = psVar1;
        param_4 = param_4 + uVar20;
        param_2 = param_2 - uVar20;
        param_1 = (short *)puVar2;
        if (bVar17) {
          return;
        }
      }
    }
    do {
      sVar4 = *param_3;
      uVar5 = (int)*param_5 * (int)sVar4;
      uVar3 = (ushort)(uVar5 >> 0xc);
      if ((int)uVar5 >> 0x1f != (int)uVar5 >> 0x1b) {
        uVar3 = (ushort)((int)uVar5 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar3;
      sVar39 = param_3[1];
      uVar5 = (int)*param_5 * (int)sVar39;
      uVar3 = (ushort)(uVar5 >> 0xc);
      if ((int)uVar5 >> 0x1f != (int)uVar5 >> 0x1b) {
        uVar3 = (ushort)((int)uVar5 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar3;
      sVar44 = param_3[2];
      uVar5 = (int)*param_5 * (int)sVar44;
      uVar3 = (ushort)(uVar5 >> 0xc);
      if ((int)uVar5 >> 0x1f != (int)uVar5 >> 0x1b) {
        uVar3 = (ushort)((int)uVar5 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar3;
      param_2 = param_2 - 1;
      *param_4 = *param_4 + ((((int)sVar39 + (int)sVar4 + (int)sVar44) * 0x1000) / 3 >> 0xc) * iVar6
      ;
      param_3 = param_3 + 3;
      param_4 = param_4 + 1;
      param_1 = param_1 + 3;
    } while (param_2 != 0);
  }
  return;
}

