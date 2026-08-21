
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void cocos2d::experimental::volumeMulti<4, 6, short, short, short, int, short>(short*, unsigned
   long, short const*, int*, short const*, short) */

void cocos2d::experimental::volumeMulti<4,6,short,short,short,int,short>
               (short *param_1,ulong param_2,short *param_3,int *param_4,short *param_5,
               short param_6)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  bool bVar19;
  short *psVar20;
  int *piVar21;
  ulong uVar22;
  ulong uVar23;
  char cVar24;
  char cVar26;
  byte bVar27;
  undefined1 auVar25 [16];
  undefined2 uVar30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 in_register_000051c8;
  short sVar44;
  int iVar42;
  short sVar45;
  short sVar46;
  undefined8 uVar43;
  short sVar47;
  undefined8 uVar48;
  short sVar50;
  short sVar51;
  short sVar52;
  undefined1 auVar49 [16];
  uint uVar53;
  uint uVar60;
  uint uVar61;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  uint uVar62;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar68 [16];
  uint uVar69;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  undefined1 auVar70 [16];
  uint uVar74;
  uint uVar79;
  uint uVar80;
  undefined2 uVar81;
  uint uVar82;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar67 [16];
  
  auVar18 = _DAT_01428210;
  auVar17 = _DAT_01428200;
  auVar16 = _DAT_014281f0;
  auVar15 = _DAT_014281e0;
  auVar14 = _DAT_014281d0;
  auVar13 = _DAT_014281c0;
  auVar12 = _DAT_014281b0;
  auVar11 = _DAT_014281a0;
  auVar10 = _DAT_01428010;
  auVar9 = _DAT_01427ff0;
  auVar8 = _DAT_01427fe0;
  auVar7 = _DAT_01427fd0;
  auVar6 = _DAT_01427fc0;
  if (param_4 == (int *)0x0) {
    do {
      uVar53 = (int)*param_5 * (int)*param_3;
      uVar2 = (ushort)(uVar53 >> 0xc);
      if ((int)uVar53 >> 0x1f != (int)uVar53 >> 0x1b) {
        uVar2 = (ushort)((int)uVar53 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar2;
      uVar53 = (int)*param_5 * (int)param_3[1];
      uVar2 = (ushort)(uVar53 >> 0xc);
      if ((int)uVar53 >> 0x1f != (int)uVar53 >> 0x1b) {
        uVar2 = (ushort)((int)uVar53 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar2;
      uVar53 = (int)*param_5 * (int)param_3[2];
      uVar2 = (ushort)(uVar53 >> 0xc);
      if ((int)uVar53 >> 0x1f != (int)uVar53 >> 0x1b) {
        uVar2 = (ushort)((int)uVar53 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar2;
      uVar53 = (int)*param_5 * (int)param_3[3];
      uVar2 = (ushort)(uVar53 >> 0xc);
      if ((int)uVar53 >> 0x1f != (int)uVar53 >> 0x1b) {
        uVar2 = (ushort)((int)uVar53 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar2;
      uVar53 = (int)*param_5 * (int)param_3[4];
      uVar2 = (ushort)(uVar53 >> 0xc);
      if ((int)uVar53 >> 0x1f != (int)uVar53 >> 0x1b) {
        uVar2 = (ushort)((int)uVar53 >> 0x1f) ^ 0x7fff;
      }
      param_1[4] = uVar2;
      psVar1 = param_3 + 5;
      param_3 = param_3 + 6;
      uVar53 = (int)*param_5 * (int)*psVar1;
      uVar2 = (ushort)(uVar53 >> 0xc);
      if ((int)uVar53 >> 0x1f != (int)uVar53 >> 0x1b) {
        uVar2 = (ushort)((int)uVar53 >> 0x1f) ^ 0x7fff;
      }
      param_2 = param_2 - 1;
      param_1[5] = uVar2;
      param_1 = param_1 + 6;
    } while (param_2 != 0);
  }
  else {
    iVar3 = (int)param_6;
    if (3 < param_2) {
      if ((param_3 + param_2 * 6 <= param_1 || param_1 + param_2 * 6 <= param_3) &&
         ((short *)((long)param_5 + 1U) <= param_1 || param_1 + param_2 * 6 <= param_5)) {
        uVar22 = param_2 & 0xfffffffffffffffc;
        psVar1 = param_3 + uVar22 * 6;
        psVar20 = param_1;
        piVar21 = param_4;
        uVar23 = uVar22;
        do {
          auVar54 = *(undefined1 (*) [16])((long)param_3 + 0x10);
          auVar5 = *(undefined1 (*) [16])((long)param_3 + 0x20);
          auVar49 = *(undefined1 (*) [16])param_3;
          sVar4 = *param_5;
          uVar23 = uVar23 - 4;
          sVar45 = auVar5._4_2_;
          auVar25 = a64_TBL(ZEXT816(0),auVar49,auVar54,auVar6);
          auVar28 = a64_TBL(ZEXT816(0),auVar49,auVar54,auVar7);
          auVar31 = a64_TBL(ZEXT816(0),auVar49,auVar54,auVar8);
          auVar35 = a64_TBL(ZEXT816(0),auVar49,auVar54,auVar9);
          auVar38._8_8_ = 0xfffefffefffefffe;
          auVar38._0_8_ = 0xfffefffe15140908;
          auVar38 = a64_TBL(ZEXT816(0),auVar49,auVar54,auVar38);
          auVar49 = a64_TBL(ZEXT816(0),auVar49,auVar54,auVar10);
          auVar54 = NEON_ext(auVar5,auVar5,8,1);
          auVar64._0_6_ =
               (undefined6)
               CONCAT44(CONCAT22(sVar45,auVar54._4_2_),CONCAT22(auVar5._0_2_,auVar54._0_2_));
          auVar64._6_2_ = sVar45;
          auVar64._8_8_ = 0;
          auVar55._6_10_ = auVar54._6_10_;
          auVar55._0_4_ = auVar54._0_4_;
          auVar55._4_2_ = auVar5._2_2_;
          auVar54 = NEON_ext(auVar5,auVar64,0xe,1);
          uVar48 = NEON_ext(auVar55._0_8_,auVar49._0_8_,4,1);
          uVar53 = (int)sVar4 * (int)auVar25._0_2_;
          uVar60 = (int)sVar4 * (int)auVar25._2_2_;
          uVar61 = (int)sVar4 * (int)auVar25._4_2_;
          uVar62 = (int)sVar4 * (int)sVar45;
          uVar43 = NEON_ext(auVar54._0_8_,auVar38._0_8_,4,1);
          uVar69 = (int)sVar4 * (int)auVar28._0_2_;
          uVar71 = (int)sVar4 * (int)auVar28._2_2_;
          uVar72 = (int)sVar4 * (int)auVar28._4_2_;
          uVar73 = (int)sVar4 * (int)auVar5._6_2_;
          auVar63._0_4_ = uVar53 >> 0xc;
          auVar63._4_4_ = uVar60 >> 0xc;
          auVar63._8_4_ = uVar61 >> 0xc;
          auVar63._12_4_ = uVar62 >> 0xc;
          auVar39._0_4_ = -(uint)((int)uVar53 >> 0x1b == (int)uVar53 >> 0x1f);
          auVar39._4_4_ = -(uint)((int)uVar60 >> 0x1b == (int)uVar60 >> 0x1f);
          auVar39._8_4_ = -(uint)((int)uVar61 >> 0x1b == (int)uVar61 >> 0x1f);
          auVar39._12_4_ = -(uint)((int)uVar62 >> 0x1b == (int)uVar62 >> 0x1f);
          cVar24 = (char)((int)uVar53 >> 0x1f);
          cVar26 = (char)((int)uVar60 >> 0x1f);
          auVar40._0_6_ =
               CONCAT15(cVar26,CONCAT14(cVar26,(uint)(ushort)(CONCAT11(cVar24,cVar24) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar40[6] = 0;
          auVar40[7] = cVar26;
          bVar27 = (byte)((int)uVar61 >> 0x1f);
          auVar40[8] = bVar27 ^ 0xff;
          auVar40[9] = bVar27 ^ 0x7f;
          auVar40[10] = bVar27;
          auVar40[0xb] = bVar27;
          bVar27 = (byte)((int)uVar62 >> 0x1f);
          auVar40[0xc] = bVar27 ^ 0xff;
          auVar40[0xd] = bVar27 ^ 0x7f;
          auVar40[0xe] = bVar27;
          auVar40[0xf] = bVar27;
          auVar40 = auVar40 ^ (auVar40 ^ auVar63) & auVar39;
          auVar56._0_4_ = uVar69 >> 0xc;
          auVar56._4_4_ = uVar71 >> 0xc;
          auVar56._8_4_ = uVar72 >> 0xc;
          auVar56._12_4_ = uVar73 >> 0xc;
          uVar74 = (int)sVar4 * (int)auVar31._0_2_;
          uVar79 = (int)sVar4 * (int)auVar31._2_2_;
          uVar80 = (int)sVar4 * (int)auVar31._4_2_;
          uVar82 = (int)sVar4 * (int)auVar5._8_2_;
          auVar68._0_4_ = -(uint)((int)uVar69 >> 0x1b == (int)uVar69 >> 0x1f);
          auVar68._4_4_ = -(uint)((int)uVar71 >> 0x1b == (int)uVar71 >> 0x1f);
          auVar68._8_4_ = -(uint)((int)uVar72 >> 0x1b == (int)uVar72 >> 0x1f);
          auVar68._12_4_ = -(uint)((int)uVar73 >> 0x1b == (int)uVar73 >> 0x1f);
          cVar24 = (char)((int)uVar69 >> 0x1f);
          cVar26 = (char)((int)uVar71 >> 0x1f);
          auVar29._0_6_ =
               CONCAT15(cVar26,CONCAT14(cVar26,(uint)(ushort)(CONCAT11(cVar24,cVar24) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar29[6] = 0;
          auVar29[7] = cVar26;
          bVar27 = (byte)((int)uVar72 >> 0x1f);
          auVar29[8] = bVar27 ^ 0xff;
          auVar29[9] = bVar27 ^ 0x7f;
          auVar29[10] = bVar27;
          auVar29[0xb] = bVar27;
          bVar27 = (byte)((int)uVar73 >> 0x1f);
          auVar29[0xc] = bVar27 ^ 0xff;
          auVar29[0xd] = bVar27 ^ 0x7f;
          auVar29[0xe] = bVar27;
          auVar29[0xf] = bVar27;
          auVar29 = auVar29 ^ (auVar29 ^ auVar56) & auVar68;
          uVar53 = (int)sVar4 * (int)auVar35._0_2_;
          uVar60 = (int)sVar4 * (int)auVar35._2_2_;
          uVar61 = (int)sVar4 * (int)auVar35._4_2_;
          uVar62 = (int)sVar4 * (int)auVar5._10_2_;
          auVar32._0_4_ = uVar74 >> 0xc;
          auVar32._4_4_ = uVar79 >> 0xc;
          auVar32._8_4_ = uVar80 >> 0xc;
          auVar32._12_4_ = uVar82 >> 0xc;
          auVar57._0_4_ = -(uint)((int)uVar74 >> 0x1b == (int)uVar74 >> 0x1f);
          auVar57._4_4_ = -(uint)((int)uVar79 >> 0x1b == (int)uVar79 >> 0x1f);
          auVar57._8_4_ = -(uint)((int)uVar80 >> 0x1b == (int)uVar80 >> 0x1f);
          auVar57._12_4_ = -(uint)((int)uVar82 >> 0x1b == (int)uVar82 >> 0x1f);
          cVar24 = (char)((int)uVar74 >> 0x1f);
          cVar26 = (char)((int)uVar79 >> 0x1f);
          auVar58._0_6_ =
               CONCAT15(cVar26,CONCAT14(cVar26,(uint)(ushort)(CONCAT11(cVar24,cVar24) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar58[6] = 0;
          auVar58[7] = cVar26;
          bVar27 = (byte)((int)uVar80 >> 0x1f);
          auVar58[8] = bVar27 ^ 0xff;
          auVar58[9] = bVar27 ^ 0x7f;
          auVar58[10] = bVar27;
          auVar58[0xb] = bVar27;
          bVar27 = (byte)((int)uVar82 >> 0x1f);
          auVar58[0xc] = bVar27 ^ 0xff;
          auVar58[0xd] = bVar27 ^ 0x7f;
          auVar58[0xe] = bVar27;
          auVar58[0xf] = bVar27;
          uVar48 = NEON_ext(uVar48,uVar48,4,1);
          uVar43 = NEON_ext(uVar43,uVar43,4,1);
          auVar75._0_4_ = uVar53 >> 0xc;
          auVar75._4_4_ = uVar60 >> 0xc;
          auVar75._8_4_ = uVar61 >> 0xc;
          auVar75._12_4_ = uVar62 >> 0xc;
          auVar58 = auVar58 ^ (auVar58 ^ auVar32) & auVar57;
          sVar50 = (short)((ulong)uVar48 >> 0x10);
          sVar51 = (short)((ulong)uVar48 >> 0x20);
          sVar52 = (short)((ulong)uVar48 >> 0x30);
          uVar69 = (int)sVar4 * (int)(short)uVar48;
          uVar71 = (int)sVar4 * (int)sVar50;
          uVar72 = (int)sVar4 * (int)sVar51;
          uVar73 = (int)sVar4 * (int)sVar52;
          auVar70._0_4_ = -(uint)((int)uVar53 >> 0x1b == (int)uVar53 >> 0x1f);
          auVar70._4_4_ = -(uint)((int)uVar60 >> 0x1b == (int)uVar60 >> 0x1f);
          auVar70._8_4_ = -(uint)((int)uVar61 >> 0x1b == (int)uVar61 >> 0x1f);
          auVar70._12_4_ = -(uint)((int)uVar62 >> 0x1b == (int)uVar62 >> 0x1f);
          cVar24 = (char)((int)uVar53 >> 0x1f);
          cVar26 = (char)((int)uVar60 >> 0x1f);
          auVar49._0_6_ =
               CONCAT15(cVar26,CONCAT14(cVar26,(uint)(ushort)(CONCAT11(cVar24,cVar24) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar49[6] = 0;
          auVar49[7] = cVar26;
          bVar27 = (byte)((int)uVar61 >> 0x1f);
          auVar49[8] = bVar27 ^ 0xff;
          auVar49[9] = bVar27 ^ 0x7f;
          auVar49[10] = bVar27;
          auVar49[0xb] = bVar27;
          bVar27 = (byte)((int)uVar62 >> 0x1f);
          auVar49[0xc] = bVar27 ^ 0xff;
          auVar49[0xd] = bVar27 ^ 0x7f;
          auVar49[0xe] = bVar27;
          auVar49[0xf] = bVar27;
          sVar44 = (short)((ulong)uVar43 >> 0x10);
          sVar46 = (short)((ulong)uVar43 >> 0x20);
          sVar47 = (short)((ulong)uVar43 >> 0x30);
          uVar53 = (int)sVar4 * (int)(short)uVar43;
          uVar60 = (int)sVar4 * (int)sVar44;
          uVar61 = (int)sVar4 * (int)sVar46;
          uVar62 = (int)sVar4 * (int)sVar47;
          auVar36._0_4_ = uVar69 >> 0xc;
          auVar36._4_4_ = uVar71 >> 0xc;
          auVar36._8_4_ = uVar72 >> 0xc;
          auVar36._12_4_ = uVar73 >> 0xc;
          auVar49 = auVar49 ^ (auVar49 ^ auVar75) & auVar70;
          auVar65._0_4_ = uVar53 >> 0xc;
          auVar65._4_4_ = uVar60 >> 0xc;
          auVar65._8_4_ = uVar61 >> 0xc;
          auVar65._12_4_ = uVar62 >> 0xc;
          auVar76._0_4_ = -(uint)((int)uVar69 >> 0x1b == (int)uVar69 >> 0x1f);
          auVar76._4_4_ = -(uint)((int)uVar71 >> 0x1b == (int)uVar71 >> 0x1f);
          auVar76._8_4_ = -(uint)((int)uVar72 >> 0x1b == (int)uVar72 >> 0x1f);
          auVar76._12_4_ = -(uint)((int)uVar73 >> 0x1b == (int)uVar73 >> 0x1f);
          cVar24 = (char)((int)uVar69 >> 0x1f);
          cVar26 = (char)((int)uVar71 >> 0x1f);
          auVar77._0_6_ =
               CONCAT15(cVar26,CONCAT14(cVar26,(uint)(ushort)(CONCAT11(cVar24,cVar24) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar77[6] = 0;
          auVar77[7] = cVar26;
          bVar27 = (byte)((int)uVar72 >> 0x1f);
          auVar77[8] = bVar27 ^ 0xff;
          auVar77[9] = bVar27 ^ 0x7f;
          auVar77[10] = bVar27;
          auVar77[0xb] = bVar27;
          bVar27 = (byte)((int)uVar73 >> 0x1f);
          auVar77[0xc] = bVar27 ^ 0xff;
          auVar77[0xd] = bVar27 ^ 0x7f;
          auVar77[0xe] = bVar27;
          auVar77[0xf] = bVar27;
          auVar33._0_4_ = -(uint)((int)uVar53 >> 0x1b == (int)uVar53 >> 0x1f);
          auVar33._4_4_ = -(uint)((int)uVar60 >> 0x1b == (int)uVar60 >> 0x1f);
          auVar33._8_4_ = -(uint)((int)uVar61 >> 0x1b == (int)uVar61 >> 0x1f);
          auVar33._12_4_ = -(uint)((int)uVar62 >> 0x1b == (int)uVar62 >> 0x1f);
          cVar24 = (char)((int)uVar53 >> 0x1f);
          cVar26 = (char)((int)uVar60 >> 0x1f);
          auVar34._0_6_ =
               CONCAT15(cVar26,CONCAT14(cVar26,(uint)(ushort)(CONCAT11(cVar24,cVar24) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar34[6] = 0;
          auVar34[7] = cVar26;
          bVar27 = (byte)((int)uVar61 >> 0x1f);
          auVar34[8] = bVar27 ^ 0xff;
          auVar34[9] = bVar27 ^ 0x7f;
          auVar34[10] = bVar27;
          auVar34[0xb] = bVar27;
          bVar27 = (byte)((int)uVar62 >> 0x1f);
          auVar34[0xc] = bVar27 ^ 0xff;
          auVar34[0xd] = bVar27 ^ 0x7f;
          auVar34[0xe] = bVar27;
          auVar34[0xf] = bVar27;
          uVar53 = (int)auVar28._0_2_ + (int)auVar25._0_2_ + (int)auVar31._0_2_ + (int)auVar35._0_2_
                   + (int)(short)uVar43 + (int)(short)uVar48;
          auVar41._0_2_ = auVar40._0_2_;
          auVar41._2_2_ = auVar40._4_2_;
          auVar41._4_2_ = auVar40._8_2_;
          auVar41._6_2_ = auVar40._12_2_;
          auVar77 = auVar77 ^ (auVar77 ^ auVar36) & auVar76;
          uVar30 = auVar29._12_2_;
          auVar59._0_8_ =
               CONCAT26(auVar58._12_2_,CONCAT24(auVar58._8_2_,CONCAT22(auVar58._4_2_,auVar58._0_2_))
                       );
          auVar34 = auVar34 ^ (auVar34 ^ auVar65) & auVar33;
          iVar42 = uVar53 * 0x1000;
          auVar66._6_10_ = auVar65._6_10_;
          auVar66._4_2_ = auVar40._12_2_;
          auVar66._2_2_ = auVar29._8_2_;
          auVar66._0_2_ = auVar40._8_2_;
          auVar67._0_6_ = auVar66._0_6_;
          auVar67._6_2_ = uVar30;
          auVar67._8_8_ = 0;
          uVar43 = CONCAT26(auVar34._12_2_,
                            CONCAT24(auVar34._8_2_,CONCAT22(auVar34._4_2_,auVar34._0_2_)));
          uVar81 = auVar77._12_2_;
          auVar37._8_2_ = auVar77._0_2_;
          auVar37._0_8_ = uVar43;
          auVar37._10_2_ = auVar77._4_2_;
          auVar37._12_2_ = auVar77._8_2_;
          auVar37._14_2_ = uVar81;
          uVar48 = NEON_ext(auVar59._0_8_,
                            CONCAT26(auVar49._4_2_,
                                     (int6)CONCAT44(CONCAT22(uVar30,auVar58._4_2_),
                                                    CONCAT22(auVar49._0_2_,auVar58._0_2_))),4,1);
          auVar59._8_2_ = auVar49._0_2_;
          auVar59._10_2_ = auVar49._4_2_;
          auVar59._12_2_ = auVar49._8_2_;
          auVar59._14_2_ = auVar49._12_2_;
          auVar41._8_2_ = auVar29._0_2_;
          auVar41._10_2_ = auVar29._4_2_;
          auVar41._12_2_ = auVar29._8_2_;
          auVar41._14_2_ = uVar30;
          auVar54 = a64_TBL(ZEXT816(0),auVar37,auVar11);
          auVar49 = a64_TBL(ZEXT816(0),auVar59,auVar15);
          auVar38 = a64_TBL(ZEXT816(0),auVar41,auVar17);
          auVar63 = a64_TBL(ZEXT816(0),auVar54,auVar67,auVar12);
          auVar78._8_8_ = auVar77._8_8_;
          auVar78._0_8_ =
               NEON_ext(uVar43,CONCAT26(uVar81,(int6)CONCAT44(CONCAT22(uVar81,auVar34._12_2_),
                                                              CONCAT22(auVar77._4_2_,auVar34._4_2_))
                                       ),4,1);
          auVar54._8_8_ = in_register_000051c8;
          auVar54._0_8_ = uVar48;
          auVar38 = a64_TBL(ZEXT816(0),auVar38,auVar54,auVar12);
          auVar68 = a64_TBL(ZEXT816(0),auVar59,auVar13);
          auVar49 = a64_TBL(ZEXT816(0),auVar49,auVar78,auVar12);
          auVar54 = a64_TBL(ZEXT816(0),auVar37,auVar18);
          auVar77 = a64_TBL(ZEXT816(0),auVar41,auVar16);
          auVar63 = a64_TBL(ZEXT816(0),auVar63,auVar68,auVar14);
          auVar54 = a64_TBL(ZEXT816(0),auVar38,auVar54,auVar14);
          auVar38 = a64_TBL(ZEXT816(0),auVar49,auVar77,auVar14);
          *(long *)(psVar20 + 0xc) = auVar38._8_8_;
          *(long *)(psVar20 + 8) = auVar38._0_8_;
          *(long *)(psVar20 + 0x14) = auVar63._8_8_;
          *(long *)(psVar20 + 0x10) = auVar63._0_8_;
          *(long *)(psVar20 + 4) = auVar54._8_8_;
          *(long *)psVar20 = auVar54._0_8_;
          param_3 = (short *)((long)param_3 + 0x30);
          piVar21[2] = piVar21[2] +
                       ((((int)auVar28._4_2_ + (int)auVar25._4_2_ + (int)auVar31._4_2_ +
                          (int)auVar35._4_2_ + (int)sVar46 + (int)sVar51) * 0x1000) / 6 >> 0xc) *
                       iVar3;
          piVar21[3] = piVar21[3] +
                       ((((int)auVar5._6_2_ + (int)sVar45 + (int)auVar5._8_2_ + (int)auVar5._10_2_ +
                          (int)sVar47 + (int)sVar52) * 0x1000) / 6 >> 0xc) * iVar3;
          *piVar21 = *piVar21 +
                     ((int)(iVar42 / 6 + (iVar42 >> 0x1f) + ((uVar53 & 0xfffff) >> 0x13)) >> 0xc) *
                     iVar3;
          piVar21[1] = piVar21[1] +
                       ((((int)auVar28._2_2_ + (int)auVar25._2_2_ + (int)auVar31._2_2_ +
                          (int)auVar35._2_2_ + (int)sVar44 + (int)sVar50) * 0x1000) / 6 >> 0xc) *
                       iVar3;
          psVar20 = psVar20 + 0x18;
          piVar21 = piVar21 + 4;
        } while (uVar23 != 0);
        bVar19 = uVar22 == param_2;
        param_3 = psVar1;
        param_4 = param_4 + uVar22;
        param_2 = param_2 - uVar22;
        param_1 = param_1 + uVar22 * 6;
        if (bVar19) {
          return;
        }
      }
    }
    do {
      sVar4 = *param_3;
      uVar53 = (int)*param_5 * (int)sVar4;
      uVar2 = (ushort)(uVar53 >> 0xc);
      if ((int)uVar53 >> 0x1f != (int)uVar53 >> 0x1b) {
        uVar2 = (ushort)((int)uVar53 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar2;
      sVar44 = param_3[1];
      uVar53 = (int)*param_5 * (int)sVar44;
      uVar2 = (ushort)(uVar53 >> 0xc);
      if ((int)uVar53 >> 0x1f != (int)uVar53 >> 0x1b) {
        uVar2 = (ushort)((int)uVar53 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar2;
      sVar45 = param_3[2];
      uVar53 = (int)*param_5 * (int)sVar45;
      uVar2 = (ushort)(uVar53 >> 0xc);
      if ((int)uVar53 >> 0x1f != (int)uVar53 >> 0x1b) {
        uVar2 = (ushort)((int)uVar53 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar2;
      sVar46 = param_3[3];
      uVar53 = (int)*param_5 * (int)sVar46;
      uVar2 = (ushort)(uVar53 >> 0xc);
      if ((int)uVar53 >> 0x1f != (int)uVar53 >> 0x1b) {
        uVar2 = (ushort)((int)uVar53 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar2;
      sVar47 = param_3[4];
      uVar53 = (int)*param_5 * (int)sVar47;
      uVar2 = (ushort)(uVar53 >> 0xc);
      if ((int)uVar53 >> 0x1f != (int)uVar53 >> 0x1b) {
        uVar2 = (ushort)((int)uVar53 >> 0x1f) ^ 0x7fff;
      }
      param_1[4] = uVar2;
      sVar50 = param_3[5];
      uVar53 = (int)*param_5 * (int)sVar50;
      uVar2 = (ushort)(uVar53 >> 0xc);
      if ((int)uVar53 >> 0x1f != (int)uVar53 >> 0x1b) {
        uVar2 = (ushort)((int)uVar53 >> 0x1f) ^ 0x7fff;
      }
      param_1[5] = uVar2;
      param_2 = param_2 - 1;
      *param_4 = *param_4 +
                 ((((int)sVar44 + (int)sVar4 + (int)sVar45 + (int)sVar46 + (int)sVar47 + (int)sVar50
                   ) * 0x1000) / 6 >> 0xc) * iVar3;
      param_3 = param_3 + 6;
      param_4 = param_4 + 1;
      param_1 = param_1 + 6;
    } while (param_2 != 0);
  }
                    /* WARNING: Read-only address (ram,0x01427fc0) is written */
                    /* WARNING: Read-only address (ram,0x01427fd0) is written */
                    /* WARNING: Read-only address (ram,0x01427fe0) is written */
                    /* WARNING: Read-only address (ram,0x01427ff0) is written */
                    /* WARNING: Read-only address (ram,0x01428010) is written */
                    /* WARNING: Read-only address (ram,0x014281a0) is written */
                    /* WARNING: Read-only address (ram,0x014281b0) is written */
                    /* WARNING: Read-only address (ram,0x014281c0) is written */
                    /* WARNING: Read-only address (ram,0x014281d0) is written */
                    /* WARNING: Read-only address (ram,0x014281e0) is written */
                    /* WARNING: Read-only address (ram,0x014281f0) is written */
                    /* WARNING: Read-only address (ram,0x01428200) is written */
                    /* WARNING: Read-only address (ram,0x01428210) is written */
  return;
}

