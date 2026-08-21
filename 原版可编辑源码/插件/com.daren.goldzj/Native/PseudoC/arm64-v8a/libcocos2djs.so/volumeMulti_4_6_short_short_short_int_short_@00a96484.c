
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void cocos2d::volumeMulti<4, 6, short, short, short, int, short>(short*, unsigned long, short
   const*, int*, short const*, short) */

void cocos2d::volumeMulti<4,6,short,short,short,int,short>
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
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  bool bVar21;
  int *piVar22;
  ulong uVar23;
  ulong uVar24;
  char cVar25;
  char cVar27;
  byte bVar28;
  undefined1 auVar26 [16];
  undefined2 uVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined8 in_register_000051c8;
  short sVar46;
  int iVar44;
  short sVar47;
  short sVar48;
  undefined8 uVar45;
  short sVar49;
  undefined8 uVar50;
  short sVar52;
  short sVar53;
  short sVar54;
  undefined1 auVar51 [16];
  uint uVar55;
  uint uVar62;
  uint uVar63;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  uint uVar64;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar70 [16];
  uint uVar71;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  undefined1 auVar72 [16];
  uint uVar76;
  uint uVar79;
  uint uVar80;
  undefined2 uVar81;
  uint uVar82;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar69 [16];
  
  auVar20 = _DAT_0189cf10;
  auVar19 = _DAT_0189cf00;
  auVar18 = _DAT_0189cef0;
  auVar17 = _DAT_0189cee0;
  auVar16 = _DAT_0189ced0;
  auVar15 = _DAT_0189cec0;
  auVar14 = _DAT_0189ceb0;
  auVar13 = _DAT_0189cea0;
  auVar12 = _DAT_0189cd00;
  auVar11 = _DAT_0189ccf0;
  auVar10 = _DAT_0189cce0;
  auVar9 = _DAT_0189ccd0;
  auVar8 = _DAT_0189ccc0;
  auVar7 = _DAT_0189ccb0;
  if (param_4 == (int *)0x0) {
    do {
      uVar55 = (int)*param_5 * (int)*param_3;
      uVar3 = (ushort)(uVar55 >> 0xc);
      if ((int)uVar55 >> 0x1f != (int)uVar55 >> 0x1b) {
        uVar3 = (ushort)((int)uVar55 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar3;
      uVar55 = (int)*param_5 * (int)param_3[1];
      uVar3 = (ushort)(uVar55 >> 0xc);
      if ((int)uVar55 >> 0x1f != (int)uVar55 >> 0x1b) {
        uVar3 = (ushort)((int)uVar55 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar3;
      uVar55 = (int)*param_5 * (int)param_3[2];
      uVar3 = (ushort)(uVar55 >> 0xc);
      if ((int)uVar55 >> 0x1f != (int)uVar55 >> 0x1b) {
        uVar3 = (ushort)((int)uVar55 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar3;
      uVar55 = (int)*param_5 * (int)param_3[3];
      uVar3 = (ushort)(uVar55 >> 0xc);
      if ((int)uVar55 >> 0x1f != (int)uVar55 >> 0x1b) {
        uVar3 = (ushort)((int)uVar55 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar3;
      uVar55 = (int)*param_5 * (int)param_3[4];
      uVar3 = (ushort)(uVar55 >> 0xc);
      if ((int)uVar55 >> 0x1f != (int)uVar55 >> 0x1b) {
        uVar3 = (ushort)((int)uVar55 >> 0x1f) ^ 0x7fff;
      }
      param_1[4] = uVar3;
      psVar1 = param_3 + 5;
      param_3 = param_3 + 6;
      uVar55 = (int)*param_5 * (int)*psVar1;
      uVar3 = (ushort)(uVar55 >> 0xc);
      if ((int)uVar55 >> 0x1f != (int)uVar55 >> 0x1b) {
        uVar3 = (ushort)((int)uVar55 >> 0x1f) ^ 0x7fff;
      }
      param_2 = param_2 - 1;
      param_1[5] = uVar3;
      param_1 = param_1 + 6;
    } while (param_2 != 0);
  }
  else {
    iVar5 = (int)param_6;
    if (3 < param_2) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_2 - 1;
      uVar23 = (param_2 - 1) * 0xc;
      if (((((uVar23 < ~(ulong)(param_1 + 4) || uVar23 - ~(ulong)(param_1 + 4) == 0) &&
            (SUB168(auVar6 * ZEXT816(0xc),8) == 0)) &&
           (uVar23 < ~(ulong)(param_1 + 5) || uVar23 - ~(ulong)(param_1 + 5) == 0)) &&
          ((uVar23 < ~(ulong)(param_1 + 3) || uVar23 - ~(ulong)(param_1 + 3) == 0 &&
           (uVar23 < ~(ulong)(param_1 + 2) || uVar23 - ~(ulong)(param_1 + 2) == 0)))) &&
         ((uVar23 < ~(ulong)(param_1 + 1) || uVar23 - ~(ulong)(param_1 + 1) == 0 &&
          (uVar23 < ~(ulong)param_1 || uVar23 - ~(ulong)param_1 == 0)))) {
        if ((param_3 + param_2 * 6 <= param_1 || param_1 + param_2 * 6 <= param_3) &&
           ((short *)((long)param_5 + 1U) <= param_1 || param_1 + param_2 * 6 <= param_5)) {
          uVar24 = param_2 & 0xfffffffffffffffc;
          psVar1 = param_3 + uVar24 * 6;
          puVar2 = (ushort *)(param_1 + uVar24 * 6);
          piVar22 = param_4;
          uVar23 = uVar24;
          do {
            auVar56 = *(undefined1 (*) [16])((long)param_3 + 0x10);
            auVar6 = *(undefined1 (*) [16])((long)param_3 + 0x20);
            auVar51 = *(undefined1 (*) [16])param_3;
            sVar4 = *param_5;
            uVar23 = uVar23 - 4;
            sVar47 = auVar6._4_2_;
            auVar26 = a64_TBL(ZEXT816(0),auVar51,auVar56,auVar7);
            auVar29 = a64_TBL(ZEXT816(0),auVar51,auVar56,auVar8);
            auVar33 = a64_TBL(ZEXT816(0),auVar51,auVar56,auVar9);
            auVar38 = a64_TBL(ZEXT816(0),auVar51,auVar56,auVar10);
            auVar40 = a64_TBL(ZEXT816(0),auVar51,auVar56,auVar11);
            auVar51 = a64_TBL(ZEXT816(0),auVar51,auVar56,auVar12);
            auVar56 = NEON_ext(auVar6,auVar6,8,1);
            auVar66._0_6_ =
                 (undefined6)
                 CONCAT44(CONCAT22(sVar47,auVar56._4_2_),CONCAT22(auVar6._0_2_,auVar56._0_2_));
            auVar66._6_2_ = sVar47;
            auVar66._8_8_ = 0;
            auVar57._6_10_ = auVar56._6_10_;
            auVar57._0_4_ = auVar56._0_4_;
            auVar57._4_2_ = auVar6._2_2_;
            auVar56 = NEON_ext(auVar6,auVar66,0xe,1);
            uVar50 = NEON_ext(auVar57._0_8_,auVar51._0_8_,4,1);
            uVar55 = (int)sVar4 * (int)auVar26._0_2_;
            uVar62 = (int)sVar4 * (int)auVar26._2_2_;
            uVar63 = (int)sVar4 * (int)auVar26._4_2_;
            uVar64 = (int)sVar4 * (int)sVar47;
            uVar45 = NEON_ext(auVar56._0_8_,auVar40._0_8_,4,1);
            uVar71 = (int)sVar4 * (int)auVar29._0_2_;
            uVar73 = (int)sVar4 * (int)auVar29._2_2_;
            uVar74 = (int)sVar4 * (int)auVar29._4_2_;
            uVar75 = (int)sVar4 * (int)auVar6._6_2_;
            auVar65._0_4_ = uVar55 >> 0xc;
            auVar65._4_4_ = uVar62 >> 0xc;
            auVar65._8_4_ = uVar63 >> 0xc;
            auVar65._12_4_ = uVar64 >> 0xc;
            auVar41._0_4_ = -(uint)((int)uVar55 >> 0x1b == (int)uVar55 >> 0x1f);
            auVar41._4_4_ = -(uint)((int)uVar62 >> 0x1b == (int)uVar62 >> 0x1f);
            auVar41._8_4_ = -(uint)((int)uVar63 >> 0x1b == (int)uVar63 >> 0x1f);
            auVar41._12_4_ = -(uint)((int)uVar64 >> 0x1b == (int)uVar64 >> 0x1f);
            cVar25 = (char)((int)uVar55 >> 0x1f);
            cVar27 = (char)((int)uVar62 >> 0x1f);
            auVar42._0_6_ =
                 CONCAT15(cVar27,CONCAT14(cVar27,(uint)(ushort)(CONCAT11(cVar25,cVar25) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar42[6] = 0;
            auVar42[7] = cVar27;
            bVar28 = (byte)((int)uVar63 >> 0x1f);
            auVar42[8] = bVar28 ^ 0xff;
            auVar42[9] = bVar28 ^ 0x7f;
            auVar42[10] = bVar28;
            auVar42[0xb] = bVar28;
            bVar28 = (byte)((int)uVar64 >> 0x1f);
            auVar42[0xc] = bVar28 ^ 0xff;
            auVar42[0xd] = bVar28 ^ 0x7f;
            auVar42[0xe] = bVar28;
            auVar42[0xf] = bVar28;
            auVar42 = auVar42 ^ (auVar42 ^ auVar65) & auVar41;
            auVar58._0_4_ = uVar71 >> 0xc;
            auVar58._4_4_ = uVar73 >> 0xc;
            auVar58._8_4_ = uVar74 >> 0xc;
            auVar58._12_4_ = uVar75 >> 0xc;
            uVar76 = (int)sVar4 * (int)auVar33._0_2_;
            uVar79 = (int)sVar4 * (int)auVar33._2_2_;
            uVar80 = (int)sVar4 * (int)auVar33._4_2_;
            uVar82 = (int)sVar4 * (int)auVar6._8_2_;
            auVar70._0_4_ = -(uint)((int)uVar71 >> 0x1b == (int)uVar71 >> 0x1f);
            auVar70._4_4_ = -(uint)((int)uVar73 >> 0x1b == (int)uVar73 >> 0x1f);
            auVar70._8_4_ = -(uint)((int)uVar74 >> 0x1b == (int)uVar74 >> 0x1f);
            auVar70._12_4_ = -(uint)((int)uVar75 >> 0x1b == (int)uVar75 >> 0x1f);
            cVar25 = (char)((int)uVar71 >> 0x1f);
            cVar27 = (char)((int)uVar73 >> 0x1f);
            auVar30._0_6_ =
                 CONCAT15(cVar27,CONCAT14(cVar27,(uint)(ushort)(CONCAT11(cVar25,cVar25) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar30[6] = 0;
            auVar30[7] = cVar27;
            bVar28 = (byte)((int)uVar74 >> 0x1f);
            auVar30[8] = bVar28 ^ 0xff;
            auVar30[9] = bVar28 ^ 0x7f;
            auVar30[10] = bVar28;
            auVar30[0xb] = bVar28;
            bVar28 = (byte)((int)uVar75 >> 0x1f);
            auVar30[0xc] = bVar28 ^ 0xff;
            auVar30[0xd] = bVar28 ^ 0x7f;
            auVar30[0xe] = bVar28;
            auVar30[0xf] = bVar28;
            auVar30 = auVar30 ^ (auVar30 ^ auVar58) & auVar70;
            uVar55 = (int)sVar4 * (int)auVar38._0_2_;
            uVar62 = (int)sVar4 * (int)auVar38._2_2_;
            uVar63 = (int)sVar4 * (int)auVar38._4_2_;
            uVar64 = (int)sVar4 * (int)auVar6._10_2_;
            auVar34._0_4_ = uVar76 >> 0xc;
            auVar34._4_4_ = uVar79 >> 0xc;
            auVar34._8_4_ = uVar80 >> 0xc;
            auVar34._12_4_ = uVar82 >> 0xc;
            auVar59._0_4_ = -(uint)((int)uVar76 >> 0x1b == (int)uVar76 >> 0x1f);
            auVar59._4_4_ = -(uint)((int)uVar79 >> 0x1b == (int)uVar79 >> 0x1f);
            auVar59._8_4_ = -(uint)((int)uVar80 >> 0x1b == (int)uVar80 >> 0x1f);
            auVar59._12_4_ = -(uint)((int)uVar82 >> 0x1b == (int)uVar82 >> 0x1f);
            cVar25 = (char)((int)uVar76 >> 0x1f);
            cVar27 = (char)((int)uVar79 >> 0x1f);
            auVar60._0_6_ =
                 CONCAT15(cVar27,CONCAT14(cVar27,(uint)(ushort)(CONCAT11(cVar25,cVar25) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar60[6] = 0;
            auVar60[7] = cVar27;
            bVar28 = (byte)((int)uVar80 >> 0x1f);
            auVar60[8] = bVar28 ^ 0xff;
            auVar60[9] = bVar28 ^ 0x7f;
            auVar60[10] = bVar28;
            auVar60[0xb] = bVar28;
            bVar28 = (byte)((int)uVar82 >> 0x1f);
            auVar60[0xc] = bVar28 ^ 0xff;
            auVar60[0xd] = bVar28 ^ 0x7f;
            auVar60[0xe] = bVar28;
            auVar60[0xf] = bVar28;
            uVar50 = NEON_ext(uVar50,uVar50,4,1);
            auVar77._0_4_ = uVar55 >> 0xc;
            auVar77._4_4_ = uVar62 >> 0xc;
            auVar77._8_4_ = uVar63 >> 0xc;
            auVar77._12_4_ = uVar64 >> 0xc;
            auVar60 = auVar60 ^ (auVar60 ^ auVar34) & auVar59;
            uVar45 = NEON_ext(uVar45,uVar45,4,1);
            sVar52 = (short)((ulong)uVar50 >> 0x10);
            sVar53 = (short)((ulong)uVar50 >> 0x20);
            sVar54 = (short)((ulong)uVar50 >> 0x30);
            uVar71 = (int)sVar4 * (int)(short)uVar50;
            uVar73 = (int)sVar4 * (int)sVar52;
            uVar74 = (int)sVar4 * (int)sVar53;
            uVar75 = (int)sVar4 * (int)sVar54;
            auVar72._0_4_ = -(uint)((int)uVar55 >> 0x1b == (int)uVar55 >> 0x1f);
            auVar72._4_4_ = -(uint)((int)uVar62 >> 0x1b == (int)uVar62 >> 0x1f);
            auVar72._8_4_ = -(uint)((int)uVar63 >> 0x1b == (int)uVar63 >> 0x1f);
            auVar72._12_4_ = -(uint)((int)uVar64 >> 0x1b == (int)uVar64 >> 0x1f);
            cVar25 = (char)((int)uVar55 >> 0x1f);
            cVar27 = (char)((int)uVar62 >> 0x1f);
            auVar51._0_6_ =
                 CONCAT15(cVar27,CONCAT14(cVar27,(uint)(ushort)(CONCAT11(cVar25,cVar25) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar51[6] = 0;
            auVar51[7] = cVar27;
            bVar28 = (byte)((int)uVar63 >> 0x1f);
            auVar51[8] = bVar28 ^ 0xff;
            auVar51[9] = bVar28 ^ 0x7f;
            auVar51[10] = bVar28;
            auVar51[0xb] = bVar28;
            bVar28 = (byte)((int)uVar64 >> 0x1f);
            auVar51[0xc] = bVar28 ^ 0xff;
            auVar51[0xd] = bVar28 ^ 0x7f;
            auVar51[0xe] = bVar28;
            auVar51[0xf] = bVar28;
            sVar46 = (short)((ulong)uVar45 >> 0x10);
            sVar48 = (short)((ulong)uVar45 >> 0x20);
            sVar49 = (short)((ulong)uVar45 >> 0x30);
            uVar55 = (int)sVar4 * (int)(short)uVar45;
            uVar62 = (int)sVar4 * (int)sVar46;
            uVar63 = (int)sVar4 * (int)sVar48;
            uVar64 = (int)sVar4 * (int)sVar49;
            auVar51 = auVar51 ^ (auVar51 ^ auVar77) & auVar72;
            auVar39._0_4_ = uVar71 >> 0xc;
            auVar39._4_4_ = uVar73 >> 0xc;
            auVar39._8_4_ = uVar74 >> 0xc;
            auVar39._12_4_ = uVar75 >> 0xc;
            auVar67._0_4_ = uVar55 >> 0xc;
            auVar67._4_4_ = uVar62 >> 0xc;
            auVar67._8_4_ = uVar63 >> 0xc;
            auVar67._12_4_ = uVar64 >> 0xc;
            auVar78._0_4_ = -(uint)((int)uVar71 >> 0x1b == (int)uVar71 >> 0x1f);
            auVar78._4_4_ = -(uint)((int)uVar73 >> 0x1b == (int)uVar73 >> 0x1f);
            auVar78._8_4_ = -(uint)((int)uVar74 >> 0x1b == (int)uVar74 >> 0x1f);
            auVar78._12_4_ = -(uint)((int)uVar75 >> 0x1b == (int)uVar75 >> 0x1f);
            cVar25 = (char)((int)uVar71 >> 0x1f);
            cVar27 = (char)((int)uVar73 >> 0x1f);
            auVar40._0_6_ =
                 CONCAT15(cVar27,CONCAT14(cVar27,(uint)(ushort)(CONCAT11(cVar25,cVar25) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar40[6] = 0;
            auVar40[7] = cVar27;
            bVar28 = (byte)((int)uVar74 >> 0x1f);
            auVar40[8] = bVar28 ^ 0xff;
            auVar40[9] = bVar28 ^ 0x7f;
            auVar40[10] = bVar28;
            auVar40[0xb] = bVar28;
            bVar28 = (byte)((int)uVar75 >> 0x1f);
            auVar40[0xc] = bVar28 ^ 0xff;
            auVar40[0xd] = bVar28 ^ 0x7f;
            auVar40[0xe] = bVar28;
            auVar40[0xf] = bVar28;
            auVar43._0_2_ = auVar42._0_2_;
            auVar43._2_2_ = auVar42._4_2_;
            auVar43._4_2_ = auVar42._8_2_;
            auVar43._6_2_ = auVar42._12_2_;
            auVar40 = auVar40 ^ (auVar40 ^ auVar39) & auVar78;
            uVar32 = auVar30._12_2_;
            auVar61._0_8_ =
                 CONCAT26(auVar60._12_2_,
                          CONCAT24(auVar60._8_2_,CONCAT22(auVar60._4_2_,auVar60._0_2_)));
            auVar35._0_4_ = -(uint)((int)uVar55 >> 0x1b == (int)uVar55 >> 0x1f);
            auVar35._4_4_ = -(uint)((int)uVar62 >> 0x1b == (int)uVar62 >> 0x1f);
            auVar35._8_4_ = -(uint)((int)uVar63 >> 0x1b == (int)uVar63 >> 0x1f);
            auVar35._12_4_ = -(uint)((int)uVar64 >> 0x1b == (int)uVar64 >> 0x1f);
            cVar25 = (char)((int)uVar55 >> 0x1f);
            cVar27 = (char)((int)uVar62 >> 0x1f);
            auVar36._0_6_ =
                 CONCAT15(cVar27,CONCAT14(cVar27,(uint)(ushort)(CONCAT11(cVar25,cVar25) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar36[6] = 0;
            auVar36[7] = cVar27;
            bVar28 = (byte)((int)uVar63 >> 0x1f);
            auVar36[8] = bVar28 ^ 0xff;
            auVar36[9] = bVar28 ^ 0x7f;
            auVar36[10] = bVar28;
            auVar36[0xb] = bVar28;
            bVar28 = (byte)((int)uVar64 >> 0x1f);
            auVar36[0xc] = bVar28 ^ 0xff;
            auVar36[0xd] = bVar28 ^ 0x7f;
            auVar36[0xe] = bVar28;
            auVar36[0xf] = bVar28;
            auVar36 = auVar36 ^ (auVar36 ^ auVar67) & auVar35;
            auVar68._6_10_ = auVar67._6_10_;
            auVar68._4_2_ = auVar42._12_2_;
            auVar68._2_2_ = auVar30._8_2_;
            auVar68._0_2_ = auVar42._8_2_;
            auVar69._0_6_ = auVar68._0_6_;
            auVar69._6_2_ = uVar32;
            auVar69._8_8_ = 0;
            uVar55 = (int)auVar29._0_2_ + (int)auVar26._0_2_ + (int)auVar33._0_2_ +
                     (int)auVar38._0_2_ + (int)(short)uVar45 + (int)(short)uVar50;
            uVar81 = auVar40._12_2_;
            auVar37._0_8_ =
                 CONCAT26(auVar36._12_2_,
                          CONCAT24(auVar36._8_2_,CONCAT22(auVar36._4_2_,auVar36._0_2_)));
            uVar45 = NEON_ext(auVar61._0_8_,
                              CONCAT26(auVar51._4_2_,
                                       (int6)CONCAT44(CONCAT22(uVar32,auVar60._4_2_),
                                                      CONCAT22(auVar51._0_2_,auVar60._0_2_))),4,1);
            auVar61._8_2_ = auVar51._0_2_;
            auVar61._10_2_ = auVar51._4_2_;
            auVar61._12_2_ = auVar51._8_2_;
            auVar61._14_2_ = auVar51._12_2_;
            auVar43._8_2_ = auVar30._0_2_;
            auVar43._10_2_ = auVar30._4_2_;
            auVar43._12_2_ = auVar30._8_2_;
            auVar43._14_2_ = uVar32;
            auVar51 = a64_TBL(ZEXT816(0),auVar61,auVar13);
            iVar44 = uVar55 * 0x1000;
            auVar31._8_8_ = auVar30._8_8_;
            auVar31._0_8_ =
                 NEON_ext(auVar37._0_8_,
                          CONCAT26(uVar81,(int6)CONCAT44(CONCAT22(uVar81,auVar36._12_2_),
                                                         CONCAT22(auVar40._4_2_,auVar36._4_2_))),4,1
                         );
            auVar37._8_2_ = auVar40._0_2_;
            auVar37._10_2_ = auVar40._4_2_;
            auVar37._12_2_ = auVar40._8_2_;
            auVar37._14_2_ = uVar81;
            auVar40 = a64_TBL(ZEXT816(0),auVar43,auVar19);
            auVar65 = a64_TBL(ZEXT816(0),auVar37,auVar17);
            auVar56._8_8_ = in_register_000051c8;
            auVar56._0_8_ = uVar45;
            auVar40 = a64_TBL(ZEXT816(0),auVar40,auVar56,auVar14);
            auVar56 = a64_TBL(ZEXT816(0),auVar51,auVar31,auVar14);
            auVar65 = a64_TBL(ZEXT816(0),auVar65,auVar69,auVar14);
            auVar30 = a64_TBL(ZEXT816(0),auVar37,auVar20);
            auVar51 = a64_TBL(ZEXT816(0),auVar43,auVar15);
            auVar70 = a64_TBL(ZEXT816(0),auVar61,auVar18);
            auVar40 = a64_TBL(ZEXT816(0),auVar40,auVar30,auVar16);
            auVar51 = a64_TBL(ZEXT816(0),auVar56,auVar51,auVar16);
            auVar56 = a64_TBL(ZEXT816(0),auVar65,auVar70,auVar16);
            *(long *)(param_1 + 4) = auVar40._8_8_;
            *(long *)param_1 = auVar40._0_8_;
            *(long *)(param_1 + 0xc) = auVar51._8_8_;
            *(long *)(param_1 + 8) = auVar51._0_8_;
            *(long *)(param_1 + 0x14) = auVar56._8_8_;
            *(long *)(param_1 + 0x10) = auVar56._0_8_;
            param_1 = param_1 + 0x18;
            piVar22[2] = piVar22[2] +
                         ((((int)auVar29._4_2_ + (int)auVar26._4_2_ + (int)auVar33._4_2_ +
                            (int)auVar38._4_2_ + (int)sVar48 + (int)sVar53) * 0x1000) / 6 >> 0xc) *
                         iVar5;
            piVar22[3] = piVar22[3] +
                         ((((int)auVar6._6_2_ + (int)sVar47 + (int)auVar6._8_2_ + (int)auVar6._10_2_
                            + (int)sVar49 + (int)sVar54) * 0x1000) / 6 >> 0xc) * iVar5;
            *piVar22 = *piVar22 +
                       ((int)(iVar44 / 6 + (iVar44 >> 0x1f) + ((uVar55 & 0xfffff) >> 0x13)) >> 0xc)
                       * iVar5;
            piVar22[1] = piVar22[1] +
                         ((((int)auVar29._2_2_ + (int)auVar26._2_2_ + (int)auVar33._2_2_ +
                            (int)auVar38._2_2_ + (int)sVar46 + (int)sVar52) * 0x1000) / 6 >> 0xc) *
                         iVar5;
            param_3 = (short *)((long)param_3 + 0x30);
            piVar22 = piVar22 + 4;
          } while (uVar23 != 0);
          bVar21 = uVar24 == param_2;
          param_3 = psVar1;
          param_4 = param_4 + uVar24;
          param_2 = param_2 - uVar24;
          param_1 = (short *)puVar2;
          if (bVar21) {
            return;
          }
        }
      }
    }
    do {
      sVar4 = *param_3;
      uVar55 = (int)*param_5 * (int)sVar4;
      uVar3 = (ushort)(uVar55 >> 0xc);
      if ((int)uVar55 >> 0x1f != (int)uVar55 >> 0x1b) {
        uVar3 = (ushort)((int)uVar55 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar3;
      sVar46 = param_3[1];
      uVar55 = (int)*param_5 * (int)sVar46;
                    /* try { // try from 00a964e0 to 00b9652b has its CatchHandler @ 00a96440 */
      uVar3 = (ushort)(uVar55 >> 0xc);
      if ((int)uVar55 >> 0x1f != (int)uVar55 >> 0x1b) {
        uVar3 = (ushort)((int)uVar55 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar3;
      sVar47 = param_3[2];
      uVar55 = (int)*param_5 * (int)sVar47;
      uVar3 = (ushort)(uVar55 >> 0xc);
                    /* catch() { ... } // from try @ 00a964a8 with catch @ 00a96518 */
      if ((int)uVar55 >> 0x1f != (int)uVar55 >> 0x1b) {
        uVar3 = (ushort)((int)uVar55 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar3;
      sVar48 = param_3[3];
      uVar55 = (int)*param_5 * (int)sVar48;
      uVar3 = (ushort)(uVar55 >> 0xc);
      if ((int)uVar55 >> 0x1f != (int)uVar55 >> 0x1b) {
        uVar3 = (ushort)((int)uVar55 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar3;
      sVar49 = param_3[4];
      uVar55 = (int)*param_5 * (int)sVar49;
      uVar3 = (ushort)(uVar55 >> 0xc);
      if ((int)uVar55 >> 0x1f != (int)uVar55 >> 0x1b) {
        uVar3 = (ushort)((int)uVar55 >> 0x1f) ^ 0x7fff;
      }
      param_1[4] = uVar3;
      sVar52 = param_3[5];
      uVar55 = (int)*param_5 * (int)sVar52;
      uVar3 = (ushort)(uVar55 >> 0xc);
      if ((int)uVar55 >> 0x1f != (int)uVar55 >> 0x1b) {
        uVar3 = (ushort)((int)uVar55 >> 0x1f) ^ 0x7fff;
      }
      param_1[5] = uVar3;
      param_2 = param_2 - 1;
      *param_4 = *param_4 +
                 ((((int)sVar46 + (int)sVar4 + (int)sVar47 + (int)sVar48 + (int)sVar49 + (int)sVar52
                   ) * 0x1000) / 6 >> 0xc) * iVar5;
      param_3 = param_3 + 6;
      param_4 = param_4 + 1;
      param_1 = param_1 + 6;
    } while (param_2 != 0);
  }
                    /* WARNING: Read-only address (ram,0x0189ccb0) is written */
                    /* WARNING: Read-only address (ram,0x0189ccc0) is written */
                    /* WARNING: Read-only address (ram,0x0189ccd0) is written */
                    /* WARNING: Read-only address (ram,0x0189cce0) is written */
                    /* WARNING: Read-only address (ram,0x0189ccf0) is written */
                    /* WARNING: Read-only address (ram,0x0189cd00) is written */
                    /* WARNING: Read-only address (ram,0x0189cea0) is written */
                    /* WARNING: Read-only address (ram,0x0189ceb0) is written */
                    /* WARNING: Read-only address (ram,0x0189cec0) is written */
                    /* WARNING: Read-only address (ram,0x0189ced0) is written */
                    /* WARNING: Read-only address (ram,0x0189cee0) is written */
                    /* WARNING: Read-only address (ram,0x0189cef0) is written */
                    /* WARNING: Read-only address (ram,0x0189cf00) is written */
                    /* WARNING: Read-only address (ram,0x0189cf10) is written */
  return;
}

