
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void cocos2d::experimental::volumeMulti<4, 5, short, short, short, int, short>(short*, unsigned
   long, short const*, int*, short const*, short) */

void cocos2d::experimental::volumeMulti<4,5,short,short,short,int,short>
               (short *param_1,ulong param_2,short *param_3,int *param_4,short *param_5,
               short param_6)

{
  short *psVar1;
  ushort *puVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  short sVar6;
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
  bool bVar17;
  int *piVar18;
  ulong uVar19;
  ulong uVar20;
  char cVar21;
  short sVar25;
  uint uVar22;
  char cVar26;
  short sVar27;
  undefined8 uVar23;
  short sVar29;
  uint uVar28;
  byte bVar30;
  uint uVar31;
  uint uVar32;
  undefined1 auVar24 [16];
  int iVar33;
  undefined1 auVar34 [16];
  undefined2 uVar38;
  undefined2 uVar39;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  uint uVar48;
  uint uVar52;
  undefined2 uVar53;
  uint uVar54;
  undefined2 uVar55;
  uint uVar56;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  uint uVar57;
  uint uVar60;
  uint uVar61;
  undefined1 auVar58 [16];
  uint uVar62;
  undefined1 auVar59 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  
  auVar16 = _DAT_01428190;
  auVar15 = _DAT_01428180;
  auVar14 = _DAT_01428170;
  auVar13 = _DAT_01428160;
  auVar12 = _DAT_01428150;
  auVar11 = _DAT_01427fb0;
  auVar10 = _DAT_01427fa0;
  auVar9 = _DAT_01427f90;
  auVar8 = _DAT_01427f80;
  auVar7 = _DAT_01427f70;
  if (param_4 == (int *)0x0) {
    do {
      uVar22 = (int)*param_5 * (int)*param_3;
      uVar3 = (ushort)(uVar22 >> 0xc);
      if ((int)uVar22 >> 0x1f != (int)uVar22 >> 0x1b) {
        uVar3 = (ushort)((int)uVar22 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar3;
      uVar22 = (int)*param_5 * (int)param_3[1];
      uVar3 = (ushort)(uVar22 >> 0xc);
      if ((int)uVar22 >> 0x1f != (int)uVar22 >> 0x1b) {
        uVar3 = (ushort)((int)uVar22 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar3;
      uVar22 = (int)*param_5 * (int)param_3[2];
      uVar3 = (ushort)(uVar22 >> 0xc);
      if ((int)uVar22 >> 0x1f != (int)uVar22 >> 0x1b) {
        uVar3 = (ushort)((int)uVar22 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar3;
      uVar22 = (int)*param_5 * (int)param_3[3];
      uVar3 = (ushort)(uVar22 >> 0xc);
      if ((int)uVar22 >> 0x1f != (int)uVar22 >> 0x1b) {
        uVar3 = (ushort)((int)uVar22 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar3;
      psVar1 = param_3 + 4;
      param_3 = param_3 + 5;
      uVar22 = (int)*param_5 * (int)*psVar1;
      uVar3 = (ushort)(uVar22 >> 0xc);
      if ((int)uVar22 >> 0x1f != (int)uVar22 >> 0x1b) {
        uVar3 = (ushort)((int)uVar22 >> 0x1f) ^ 0x7fff;
      }
      param_2 = param_2 - 1;
      param_1[4] = uVar3;
      param_1 = param_1 + 5;
    } while (param_2 != 0);
  }
  else {
    iVar5 = (int)param_6;
    if (3 < param_2) {
      if ((param_3 + param_2 * 5 <= param_1 || param_1 + param_2 * 5 <= param_3) &&
         ((short *)((long)param_5 + 1U) <= param_1 || param_1 + param_2 * 5 <= param_5)) {
        uVar19 = param_2 & 0xfffffffffffffffc;
        psVar1 = param_3 + uVar19 * 5;
        puVar2 = (ushort *)(param_1 + uVar19 * 5);
        piVar18 = param_4;
        uVar20 = uVar19;
        do {
          auVar43 = *(undefined1 (*) [16])param_3;
          auVar50 = *(undefined1 (*) [16])((long)param_3 + 0x10);
          uVar23 = *(undefined8 *)*(undefined1 (*) [16])((long)param_3 + 0x20);
          sVar6 = *param_5;
          uVar20 = uVar20 - 4;
          auVar58 = a64_TBL(ZEXT816(0),auVar43,auVar50,auVar7);
          auVar63 = a64_TBL(ZEXT816(0),auVar43,auVar50,auVar8);
          auVar66 = a64_TBL(ZEXT816(0),auVar43,auVar50,auVar9);
          auVar70 = a64_TBL(ZEXT816(0),auVar43,auVar50,auVar10);
          auVar34 = a64_TBL(ZEXT816(0),auVar43,auVar50,auVar11);
          sVar25 = (short)((ulong)uVar23 >> 0x10);
          sVar27 = (short)((ulong)uVar23 >> 0x20);
          sVar29 = (short)((ulong)uVar23 >> 0x30);
          uVar22 = (int)sVar6 * (int)auVar58._0_2_;
          uVar28 = (int)sVar6 * (int)auVar58._2_2_;
          uVar31 = (int)sVar6 * (int)auVar58._4_2_;
          uVar32 = (int)sVar6 * (int)auVar58._6_2_;
          auVar35._0_4_ = uVar22 >> 0xc;
          auVar35._4_4_ = uVar28 >> 0xc;
          auVar35._8_4_ = uVar31 >> 0xc;
          auVar35._12_4_ = uVar32 >> 0xc;
          uVar48 = (int)sVar6 * (int)auVar63._0_2_;
          uVar52 = (int)sVar6 * (int)auVar63._2_2_;
          uVar54 = (int)sVar6 * (int)auVar63._4_2_;
          uVar56 = (int)sVar6 * (int)(short)uVar23;
          auVar42._0_4_ = -(uint)((int)uVar22 >> 0x1b == (int)uVar22 >> 0x1f);
          auVar42._4_4_ = -(uint)((int)uVar28 >> 0x1b == (int)uVar28 >> 0x1f);
          auVar42._8_4_ = -(uint)((int)uVar31 >> 0x1b == (int)uVar31 >> 0x1f);
          auVar42._12_4_ = -(uint)((int)uVar32 >> 0x1b == (int)uVar32 >> 0x1f);
          cVar21 = (char)((int)uVar22 >> 0x1f);
          cVar26 = (char)((int)uVar28 >> 0x1f);
          auVar43._0_6_ =
               CONCAT15(cVar26,CONCAT14(cVar26,(uint)(ushort)(CONCAT11(cVar21,cVar21) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar43[6] = 0;
          auVar43[7] = cVar26;
          bVar30 = (byte)((int)uVar31 >> 0x1f);
          auVar43[8] = bVar30 ^ 0xff;
          auVar43[9] = bVar30 ^ 0x7f;
          auVar43[10] = bVar30;
          auVar43[0xb] = bVar30;
          bVar30 = (byte)((int)uVar32 >> 0x1f);
          auVar43[0xc] = bVar30 ^ 0xff;
          auVar43[0xd] = bVar30 ^ 0x7f;
          auVar43[0xe] = bVar30;
          auVar43[0xf] = bVar30;
          auVar43 = auVar43 ^ (auVar43 ^ auVar35) & auVar42;
          auVar50._0_4_ = uVar48 >> 0xc;
          auVar50._4_4_ = uVar52 >> 0xc;
          auVar50._8_4_ = uVar54 >> 0xc;
          auVar50._12_4_ = uVar56 >> 0xc;
          uVar57 = (int)sVar6 * (int)auVar66._0_2_;
          uVar60 = (int)sVar6 * (int)auVar66._2_2_;
          uVar61 = (int)sVar6 * (int)auVar66._4_2_;
          uVar62 = (int)sVar6 * (int)sVar25;
          auVar36._0_4_ = -(uint)((int)uVar48 >> 0x1b == (int)uVar48 >> 0x1f);
          auVar36._4_4_ = -(uint)((int)uVar52 >> 0x1b == (int)uVar52 >> 0x1f);
          auVar36._8_4_ = -(uint)((int)uVar54 >> 0x1b == (int)uVar54 >> 0x1f);
          auVar36._12_4_ = -(uint)((int)uVar56 >> 0x1b == (int)uVar56 >> 0x1f);
          cVar21 = (char)((int)uVar48 >> 0x1f);
          cVar26 = (char)((int)uVar52 >> 0x1f);
          auVar37._0_6_ =
               CONCAT15(cVar26,CONCAT14(cVar26,(uint)(ushort)(CONCAT11(cVar21,cVar21) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar37[6] = 0;
          auVar37[7] = cVar26;
          bVar30 = (byte)((int)uVar54 >> 0x1f);
          auVar37[8] = bVar30 ^ 0xff;
          auVar37[9] = bVar30 ^ 0x7f;
          auVar37[10] = bVar30;
          auVar37[0xb] = bVar30;
          bVar30 = (byte)((int)uVar56 >> 0x1f);
          auVar37[0xc] = bVar30 ^ 0xff;
          auVar37[0xd] = bVar30 ^ 0x7f;
          auVar37[0xe] = bVar30;
          auVar37[0xf] = bVar30;
          auVar37 = auVar37 ^ (auVar37 ^ auVar50) & auVar36;
          uVar48 = (int)sVar6 * (int)auVar70._0_2_;
          uVar52 = (int)sVar6 * (int)auVar70._2_2_;
          uVar54 = (int)sVar6 * (int)auVar70._4_2_;
          uVar56 = (int)sVar6 * (int)sVar27;
          uVar22 = (int)sVar6 * (int)auVar34._0_2_;
          uVar28 = (int)sVar6 * (int)auVar34._2_2_;
          uVar31 = (int)sVar6 * (int)auVar34._4_2_;
          uVar32 = (int)sVar6 * (int)sVar29;
          auVar67._0_4_ = uVar57 >> 0xc;
          auVar67._4_4_ = uVar60 >> 0xc;
          auVar67._8_4_ = uVar61 >> 0xc;
          auVar67._12_4_ = uVar62 >> 0xc;
          auVar47._0_4_ = -(uint)((int)uVar57 >> 0x1b == (int)uVar57 >> 0x1f);
          auVar47._4_4_ = -(uint)((int)uVar60 >> 0x1b == (int)uVar60 >> 0x1f);
          auVar47._8_4_ = -(uint)((int)uVar61 >> 0x1b == (int)uVar61 >> 0x1f);
          auVar47._12_4_ = -(uint)((int)uVar62 >> 0x1b == (int)uVar62 >> 0x1f);
          cVar21 = (char)((int)uVar57 >> 0x1f);
          cVar26 = (char)((int)uVar60 >> 0x1f);
          auVar24._0_6_ =
               CONCAT15(cVar26,CONCAT14(cVar26,(uint)(ushort)(CONCAT11(cVar21,cVar21) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar24[6] = 0;
          auVar24[7] = cVar26;
          bVar30 = (byte)((int)uVar61 >> 0x1f);
          auVar24[8] = bVar30 ^ 0xff;
          auVar24[9] = bVar30 ^ 0x7f;
          auVar24[10] = bVar30;
          auVar24[0xb] = bVar30;
          bVar30 = (byte)((int)uVar62 >> 0x1f);
          auVar24[0xc] = bVar30 ^ 0xff;
          auVar24[0xd] = bVar30 ^ 0x7f;
          auVar24[0xe] = bVar30;
          auVar24[0xf] = bVar30;
          auVar59._0_4_ = uVar48 >> 0xc;
          auVar59._4_4_ = uVar52 >> 0xc;
          auVar59._8_4_ = uVar54 >> 0xc;
          auVar59._12_4_ = uVar56 >> 0xc;
          auVar24 = auVar24 ^ (auVar24 ^ auVar67) & auVar47;
          auVar68._0_4_ = uVar22 >> 0xc;
          auVar68._4_4_ = uVar28 >> 0xc;
          auVar68._8_4_ = uVar31 >> 0xc;
          auVar68._12_4_ = uVar32 >> 0xc;
          auVar49._0_4_ = -(uint)((int)uVar48 >> 0x1b == (int)uVar48 >> 0x1f);
          auVar49._4_4_ = -(uint)((int)uVar52 >> 0x1b == (int)uVar52 >> 0x1f);
          auVar49._8_4_ = -(uint)((int)uVar54 >> 0x1b == (int)uVar54 >> 0x1f);
          auVar49._12_4_ = -(uint)((int)uVar56 >> 0x1b == (int)uVar56 >> 0x1f);
          cVar21 = (char)((int)uVar48 >> 0x1f);
          cVar26 = (char)((int)uVar52 >> 0x1f);
          auVar64._0_6_ =
               CONCAT15(cVar26,CONCAT14(cVar26,(uint)(ushort)(CONCAT11(cVar21,cVar21) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar64[6] = 0;
          auVar64[7] = cVar26;
          bVar30 = (byte)((int)uVar54 >> 0x1f);
          auVar64[8] = bVar30 ^ 0xff;
          auVar64[9] = bVar30 ^ 0x7f;
          auVar64[10] = bVar30;
          auVar64[0xb] = bVar30;
          bVar30 = (byte)((int)uVar56 >> 0x1f);
          auVar64[0xc] = bVar30 ^ 0xff;
          auVar64[0xd] = bVar30 ^ 0x7f;
          auVar64[0xe] = bVar30;
          auVar64[0xf] = bVar30;
          auVar71._0_4_ = -(uint)((int)uVar22 >> 0x1b == (int)uVar22 >> 0x1f);
          auVar71._4_4_ = -(uint)((int)uVar28 >> 0x1b == (int)uVar28 >> 0x1f);
          auVar71._8_4_ = -(uint)((int)uVar31 >> 0x1b == (int)uVar31 >> 0x1f);
          auVar71._12_4_ = -(uint)((int)uVar32 >> 0x1b == (int)uVar32 >> 0x1f);
          cVar21 = (char)((int)uVar22 >> 0x1f);
          cVar26 = (char)((int)uVar28 >> 0x1f);
          auVar72._0_6_ =
               CONCAT15(cVar26,CONCAT14(cVar26,(uint)(ushort)(CONCAT11(cVar21,cVar21) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar72[6] = 0;
          auVar72[7] = cVar26;
          bVar30 = (byte)((int)uVar31 >> 0x1f);
          auVar72[8] = bVar30 ^ 0xff;
          auVar72[9] = bVar30 ^ 0x7f;
          auVar72[10] = bVar30;
          auVar72[0xb] = bVar30;
          bVar30 = (byte)((int)uVar32 >> 0x1f);
          auVar72[0xc] = bVar30 ^ 0xff;
          auVar72[0xd] = bVar30 ^ 0x7f;
          auVar72[0xe] = bVar30;
          auVar72[0xf] = bVar30;
          auVar50 = auVar64 ^ (auVar64 ^ auVar59) & auVar49;
          uVar22 = (int)auVar63._0_2_ + (int)auVar58._0_2_ + (int)auVar66._0_2_ + (int)auVar70._0_2_
                   + (int)auVar34._0_2_;
          auVar72 = auVar72 ^ (auVar72 ^ auVar68) & auVar71;
          uVar38 = auVar37._4_2_;
          uVar39 = auVar37._12_2_;
          auVar51._0_2_ = auVar24._0_2_;
          auVar51._2_2_ = auVar24._4_2_;
          auVar51._4_2_ = auVar24._8_2_;
          auVar51._6_2_ = auVar24._12_2_;
          auVar44._0_2_ = auVar43._0_2_;
          auVar44._2_2_ = auVar43._4_2_;
          auVar44._4_2_ = auVar43._8_2_;
          auVar44._6_2_ = auVar43._12_2_;
          auVar46._2_2_ = auVar50._4_2_;
          auVar46._0_2_ = auVar50._0_2_;
          uVar53 = auVar50._8_2_;
          uVar55 = auVar50._12_2_;
          auVar46._4_2_ = uVar53;
          auVar46._6_2_ = uVar55;
          iVar33 = uVar22 * 0x1000;
          auVar69._6_10_ = auVar68._6_10_;
          auVar69._4_2_ = uVar39;
          auVar69._2_2_ = auVar24._4_2_;
          auVar69._0_2_ = uVar38;
          auVar65._6_10_ = auVar64._6_10_;
          auVar65._4_2_ = uVar55;
          auVar65._2_2_ = auVar72._8_2_;
          auVar65._0_2_ = uVar53;
          uVar40 = NEON_ext(CONCAT26(auVar24._12_2_,auVar69._0_6_),
                            CONCAT26(uVar39,CONCAT24(auVar37._8_2_,CONCAT22(uVar38,auVar37._0_2_))),
                            4,1);
          auVar51._8_2_ = auVar50._0_2_;
          auVar51._10_2_ = auVar50._4_2_;
          auVar51._12_2_ = uVar53;
          auVar51._14_2_ = uVar55;
          auVar44._8_2_ = auVar37._0_2_;
          auVar44._10_2_ = uVar38;
          auVar44._12_2_ = auVar37._8_2_;
          auVar44._14_2_ = uVar39;
          auVar46._8_2_ = auVar72._0_2_;
          auVar46._10_2_ = auVar72._4_2_;
          auVar46._12_2_ = auVar72._8_2_;
          auVar46._14_2_ = auVar72._12_2_;
          auVar50 = a64_TBL(ZEXT816(0),auVar51,auVar12);
          auVar47 = a64_TBL(ZEXT816(0),auVar46,auVar15);
          auVar43 = a64_TBL(ZEXT816(0),auVar44,auVar13);
          auVar51 = a64_TBL(ZEXT816(0),auVar44,auVar16);
          uVar40 = NEON_ext(CONCAT26(auVar72._12_2_,auVar65._0_6_),uVar40,4,1);
          auVar43 = a64_TBL(ZEXT816(0),auVar43,auVar50,auVar14);
          auVar50 = a64_TBL(ZEXT816(0),auVar47,auVar51,auVar14);
          uVar40 = NEON_ext(uVar40,uVar40,4,1);
          auVar41._10_6_ = auVar43._10_6_;
          auVar41._0_8_ = auVar43._0_8_;
          auVar41._8_2_ = auVar72._0_2_;
          auVar45._10_6_ = auVar50._10_6_;
          auVar45._0_8_ = auVar50._0_8_;
          auVar45._8_2_ = auVar24._8_2_;
          *(undefined8 *)(param_1 + 0x10) = uVar40;
          *(long *)(param_1 + 4) = auVar41._8_8_;
          *(undefined8 *)param_1 = auVar41._0_8_;
          *(long *)(param_1 + 0xc) = auVar45._8_8_;
          *(undefined8 *)(param_1 + 8) = auVar45._0_8_;
          param_1 = param_1 + 0x14;
          piVar18[2] = piVar18[2] +
                       ((((int)auVar63._4_2_ + (int)auVar58._4_2_ + (int)auVar66._4_2_ +
                          (int)auVar70._4_2_ + (int)auVar34._4_2_) * 0x1000) / 5 >> 0xc) * iVar5;
          piVar18[3] = piVar18[3] +
                       ((((int)(short)uVar23 + (int)auVar58._6_2_ + (int)sVar25 + (int)sVar27 +
                         (int)sVar29) * 0x1000) / 5 >> 0xc) * iVar5;
          *piVar18 = *piVar18 +
                     ((int)(iVar33 / 5 + (iVar33 >> 0x1f) + ((uVar22 & 0xfffff) >> 0x13)) >> 0xc) *
                     iVar5;
          piVar18[1] = piVar18[1] +
                       ((((int)auVar63._2_2_ + (int)auVar58._2_2_ + (int)auVar66._2_2_ +
                          (int)auVar70._2_2_ + (int)auVar34._2_2_) * 0x1000) / 5 >> 0xc) * iVar5;
          param_3 = (short *)(*(undefined1 (*) [16])((long)param_3 + 0x20) + 8);
          piVar18 = piVar18 + 4;
        } while (uVar20 != 0);
        bVar17 = uVar19 == param_2;
        param_3 = psVar1;
        param_4 = param_4 + uVar19;
        param_2 = param_2 - uVar19;
        param_1 = (short *)puVar2;
        if (bVar17) {
          return;
        }
      }
    }
    do {
      sVar6 = *param_3;
      uVar22 = (int)*param_5 * (int)sVar6;
      uVar3 = (ushort)(uVar22 >> 0xc);
      if ((int)uVar22 >> 0x1f != (int)uVar22 >> 0x1b) {
        uVar3 = (ushort)((int)uVar22 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar3;
      sVar25 = param_3[1];
      uVar22 = (int)*param_5 * (int)sVar25;
      uVar3 = (ushort)(uVar22 >> 0xc);
      if ((int)uVar22 >> 0x1f != (int)uVar22 >> 0x1b) {
        uVar3 = (ushort)((int)uVar22 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar3;
      sVar27 = param_3[2];
      uVar22 = (int)*param_5 * (int)sVar27;
      uVar3 = (ushort)(uVar22 >> 0xc);
      if ((int)uVar22 >> 0x1f != (int)uVar22 >> 0x1b) {
        uVar3 = (ushort)((int)uVar22 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar3;
      sVar29 = param_3[3];
      uVar22 = (int)*param_5 * (int)sVar29;
      uVar3 = (ushort)(uVar22 >> 0xc);
      if ((int)uVar22 >> 0x1f != (int)uVar22 >> 0x1b) {
        uVar3 = (ushort)((int)uVar22 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar3;
      sVar4 = param_3[4];
      uVar22 = (int)*param_5 * (int)sVar4;
      uVar3 = (ushort)(uVar22 >> 0xc);
      if ((int)uVar22 >> 0x1f != (int)uVar22 >> 0x1b) {
        uVar3 = (ushort)((int)uVar22 >> 0x1f) ^ 0x7fff;
      }
      param_1[4] = uVar3;
      param_2 = param_2 - 1;
      *param_4 = *param_4 +
                 ((((int)sVar25 + (int)sVar6 + (int)sVar27 + (int)sVar29 + (int)sVar4) * 0x1000) / 5
                 >> 0xc) * iVar5;
      param_3 = param_3 + 5;
      param_4 = param_4 + 1;
      param_1 = param_1 + 5;
    } while (param_2 != 0);
  }
                    /* WARNING: Read-only address (ram,0x01427f70) is written */
                    /* WARNING: Read-only address (ram,0x01427f80) is written */
                    /* WARNING: Read-only address (ram,0x01427f90) is written */
                    /* WARNING: Read-only address (ram,0x01427fa0) is written */
                    /* WARNING: Read-only address (ram,0x01427fb0) is written */
                    /* WARNING: Read-only address (ram,0x01428150) is written */
                    /* WARNING: Read-only address (ram,0x01428160) is written */
                    /* WARNING: Read-only address (ram,0x01428170) is written */
                    /* WARNING: Read-only address (ram,0x01428180) is written */
                    /* WARNING: Read-only address (ram,0x01428190) is written */
  return;
}

