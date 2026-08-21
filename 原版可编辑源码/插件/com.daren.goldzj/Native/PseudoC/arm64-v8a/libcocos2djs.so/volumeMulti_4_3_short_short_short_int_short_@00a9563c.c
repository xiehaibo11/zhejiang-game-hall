
/* void cocos2d::volumeMulti<4, 3, short, short, short, int, short>(short*, unsigned long, short
   const*, int*, short const*, short) */

void cocos2d::volumeMulti<4,3,short,short,short,int,short>
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
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  bool bVar19;
  int *piVar20;
  ulong uVar21;
  ulong uVar22;
  char cVar23;
  char cVar27;
  byte bVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  byte bVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  short sVar41;
  short sVar46;
  short sVar47;
  short sVar48;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  short sVar49;
  short sVar52;
  short sVar53;
  short sVar54;
  byte bVar55;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  short sVar56;
  short sVar60;
  short sVar61;
  short sVar62;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  char cVar63;
  char cVar64;
  byte bVar65;
  uint uVar66;
  uint uVar69;
  uint uVar70;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  uint uVar82;
  uint uVar87;
  uint uVar88;
  uint uVar89;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  
  if (param_4 == (int *)0x0) {
    if (7 < param_2) {
                    /* catch() { ... } // from try @ 00a95814 with catch @ 00a9591c */
                    /* catch() { ... } // from try @ 00a95808 with catch @ 00a95920 */
      auVar57._8_8_ = 0;
      auVar57._0_8_ = param_2 - 1;
                    /* catch() { ... } // from try @ 00a9581c with catch @ 00a95928
                       catch() { ... } // from try @ 00a958bc with catch @ 00a95928 */
      uVar21 = (param_2 - 1) * 6;
                    /* try { // try from 00a95944 to 00b95997 has its CatchHandler @ 00a95944
                       catch() { ... } // from try @ 00a95944 with catch @ 00a95944
                       catch() { ... } // from try @ 00a95a2c with catch @ 00a95944 */
      if ((((uVar21 < ~(ulong)(param_1 + 1) || uVar21 - ~(ulong)(param_1 + 1) == 0) &&
           (SUB168(auVar57 * ZEXT816(6),8) == 0)) &&
          (uVar21 < ~(ulong)(param_1 + 2) || uVar21 - ~(ulong)(param_1 + 2) == 0)) &&
         (uVar21 < ~(ulong)param_1 || uVar21 - ~(ulong)param_1 == 0)) {
                    /* try { // try from 00a95998 to 00b959a3 has its CatchHandler @ 00a95a68 */
                    /* try { // try from 00a959a4 to 00b959ab has its CatchHandler @ 00a95a64 */
                    /* try { // try from 00a959ac to 00b95a2b has its CatchHandler @ 00a95a70 */
        if ((param_3 + param_2 * 3 <= param_1 || param_1 + param_2 * 3 <= param_3) &&
           ((short *)((long)param_5 + 1U) <= param_1 || param_1 + param_2 * 3 <= param_5)) {
          uVar22 = param_2 & 0xfffffffffffffff8;
          psVar1 = param_3 + uVar22 * 3;
          puVar2 = (ushort *)(param_1 + uVar22 * 3);
          uVar21 = uVar22;
          do {
            auVar24._0_2_ = *param_3;
            sVar41 = param_3[1];
            auVar42._0_2_ = param_3[2];
            auVar24._2_2_ = param_3[3];
            sVar46 = param_3[4];
            uVar29 = (undefined1)((ushort)sVar46 >> 8);
            auVar42._2_2_ = param_3[5];
            auVar24._4_2_ = param_3[6];
            sVar47 = param_3[7];
            uVar30 = (undefined1)((ushort)sVar47 >> 8);
            auVar42._4_2_ = param_3[8];
            auVar24._6_2_ = param_3[9];
            sVar48 = param_3[10];
            uVar31 = (undefined1)((ushort)sVar48 >> 8);
            auVar42._6_2_ = param_3[0xb];
            auVar24._8_2_ = param_3[0xc];
            uVar32 = (undefined1)param_3[0xd];
            uVar33 = (undefined1)((ushort)param_3[0xd] >> 8);
            auVar42._8_2_ = param_3[0xe];
            auVar24._10_2_ = param_3[0xf];
            uVar34 = (undefined1)param_3[0x10];
            uVar35 = (undefined1)((ushort)param_3[0x10] >> 8);
            auVar42._10_2_ = param_3[0x11];
            auVar24._12_2_ = param_3[0x12];
            uVar36 = (undefined1)param_3[0x13];
            uVar38 = (undefined1)((ushort)param_3[0x13] >> 8);
            auVar42._12_2_ = param_3[0x14];
            auVar24._14_2_ = param_3[0x15];
            uVar39 = (undefined1)param_3[0x16];
            uVar40 = (undefined1)((ushort)param_3[0x16] >> 8);
            auVar42._14_2_ = param_3[0x17];
            param_3 = param_3 + 0x18;
            sVar4 = *param_5;
            uVar21 = uVar21 - 8;
            auVar57 = NEON_ext(auVar24,auVar24,8,1);
            uVar72 = (int)sVar4 * (int)auVar24._0_2_;
            uVar76 = (int)sVar4 * (int)auVar24._2_2_;
            uVar78 = (int)sVar4 * (int)auVar24._4_2_;
            uVar80 = (int)sVar4 * (int)auVar24._6_2_;
            auVar68[2] = (char)sVar46;
            auVar68._0_2_ = sVar41;
            auVar68[3] = uVar29;
            auVar68[4] = (char)sVar47;
            auVar68[5] = uVar30;
            auVar68[6] = (char)sVar48;
            auVar68[7] = uVar31;
            auVar68[8] = uVar32;
            auVar68[9] = uVar33;
            auVar68[10] = uVar34;
            auVar68[0xb] = uVar35;
            auVar68[0xc] = uVar36;
            auVar68[0xd] = uVar38;
            auVar68[0xe] = uVar39;
            auVar68[0xf] = uVar40;
            auVar85[2] = (char)sVar46;
            auVar85._0_2_ = sVar41;
            auVar85[3] = uVar29;
            auVar85[4] = (char)sVar47;
            auVar85[5] = uVar30;
            auVar85[6] = (char)sVar48;
            auVar85[7] = uVar31;
            auVar85[8] = uVar32;
            auVar85[9] = uVar33;
            auVar85[10] = uVar34;
            auVar85[0xb] = uVar35;
            auVar85[0xc] = uVar36;
            auVar85[0xd] = uVar38;
            auVar85[0xe] = uVar39;
            auVar85[0xf] = uVar40;
            auVar68 = NEON_ext(auVar68,auVar85,8,1);
            uVar73 = (int)sVar4 * (int)sVar41;
            uVar77 = (int)sVar4 * (int)sVar46;
            uVar79 = (int)sVar4 * (int)sVar47;
            uVar81 = (int)sVar4 * (int)sVar48;
            auVar85 = NEON_ext(auVar42,auVar42,8,1);
            uVar82 = (int)sVar4 * (int)auVar42._0_2_;
            uVar87 = (int)sVar4 * (int)auVar42._2_2_;
            uVar88 = (int)sVar4 * (int)auVar42._4_2_;
            uVar89 = (int)sVar4 * (int)auVar42._6_2_;
            uVar5 = (int)sVar4 * (int)auVar57._0_2_;
            uVar12 = (int)sVar4 * (int)auVar57._2_2_;
            uVar13 = (int)sVar4 * (int)auVar57._4_2_;
            uVar14 = (int)sVar4 * (int)auVar57._6_2_;
            auVar43._0_4_ = uVar72 >> 0xc;
            auVar43._4_4_ = uVar76 >> 0xc;
            auVar43._8_4_ = uVar78 >> 0xc;
            auVar43._12_4_ = uVar80 >> 0xc;
            cVar23 = (char)((int)uVar72 >> 0x1f);
            cVar27 = (char)((int)uVar76 >> 0x1f);
            bVar55 = (byte)((int)uVar78 >> 0x1f);
            bVar65 = (byte)((int)uVar80 >> 0x1f);
            auVar58._0_4_ =
                 -(uint)((int)uVar72 >> 0x1b ==
                        CONCAT13(cVar23,CONCAT12(cVar23,CONCAT11(cVar23,cVar23))));
            auVar58._4_4_ =
                 -(uint)((int)uVar76 >> 0x1b ==
                        CONCAT13(cVar27,CONCAT12(cVar27,CONCAT11(cVar27,cVar27))));
            auVar58._8_4_ =
                 -(uint)((int)uVar78 >> 0x1b ==
                        CONCAT13(bVar55,CONCAT12(bVar55,CONCAT11(bVar55,bVar55))));
            auVar58._12_4_ =
                 -(uint)((int)uVar80 >> 0x1b ==
                        CONCAT13(bVar65,CONCAT12(bVar65,CONCAT11(bVar65,bVar65))));
            auVar10[6] = 0;
            auVar10._0_6_ =
                 CONCAT15(cVar27,CONCAT14(cVar27,(uint)(ushort)(CONCAT11(cVar23,cVar23) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar10[7] = cVar27;
            auVar10[8] = bVar55 ^ 0xff;
            auVar10[9] = bVar55 ^ 0x7f;
            auVar10[10] = bVar55;
            auVar10[0xb] = bVar55;
            auVar10[0xc] = bVar65 ^ 0xff;
            auVar10[0xd] = bVar65 ^ 0x7f;
            auVar10[0xe] = bVar65;
            auVar10[0xf] = bVar65;
            auVar59[6] = 0;
            auVar59._0_6_ =
                 CONCAT15(cVar27,CONCAT14(cVar27,(uint)(ushort)(CONCAT11(cVar23,cVar23) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar59[7] = cVar27;
            auVar59[8] = bVar55 ^ 0xff;
            auVar59[9] = bVar55 ^ 0x7f;
            auVar59[10] = bVar55;
            auVar59[0xb] = bVar55;
            auVar59[0xc] = bVar65 ^ 0xff;
            auVar59[0xd] = bVar65 ^ 0x7f;
            auVar59[0xe] = bVar65;
            auVar59[0xf] = bVar65;
            auVar59 = auVar59 ^ (auVar10 ^ auVar43) & auVar58;
            cVar23 = (char)((int)uVar5 >> 0x1f);
            cVar27 = (char)((int)uVar12 >> 0x1f);
            bVar28 = (byte)((int)uVar13 >> 0x1f);
            bVar37 = (byte)((int)uVar14 >> 0x1f);
                    /* try { // try from 00a95a2c to 00b95a8b has its CatchHandler @ 00a95944 */
            uVar66 = (int)sVar4 * (int)auVar68._0_2_;
            uVar69 = (int)sVar4 * (int)auVar68._2_2_;
            uVar70 = (int)sVar4 * (int)auVar68._4_2_;
            uVar71 = (int)sVar4 * (int)auVar68._6_2_;
            auVar92._0_4_ = -(uint)((int)uVar73 >> 0x1b == (int)uVar73 >> 0x1f);
            auVar92._4_4_ = -(uint)((int)uVar77 >> 0x1b == (int)uVar77 >> 0x1f);
            auVar92._8_4_ = -(uint)((int)uVar79 >> 0x1b == (int)uVar79 >> 0x1f);
            auVar92._12_4_ = -(uint)((int)uVar81 >> 0x1b == (int)uVar81 >> 0x1f);
            cVar63 = (char)((int)uVar73 >> 0x1f);
            cVar64 = (char)((int)uVar77 >> 0x1f);
            auVar93._0_6_ =
                 CONCAT15(cVar64,CONCAT14(cVar64,(uint)(ushort)(CONCAT11(cVar63,cVar63) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar93[6] = 0;
            auVar93[7] = cVar64;
            bVar55 = (byte)((int)uVar79 >> 0x1f);
            auVar93[8] = bVar55 ^ 0xff;
            auVar93[9] = bVar55 ^ 0x7f;
            auVar93[10] = bVar55;
            auVar93[0xb] = bVar55;
            bVar55 = (byte)((int)uVar81 >> 0x1f);
            auVar93[0xc] = bVar55 ^ 0xff;
            auVar93[0xd] = bVar55 ^ 0x7f;
            auVar93[0xe] = bVar55;
            auVar93[0xf] = bVar55;
            auVar44._0_4_ =
                 -(uint)((int)uVar5 >> 0x1b ==
                        CONCAT13(cVar23,CONCAT12(cVar23,CONCAT11(cVar23,cVar23))));
            auVar44._4_4_ =
                 -(uint)((int)uVar12 >> 0x1b ==
                        CONCAT13(cVar27,CONCAT12(cVar27,CONCAT11(cVar27,cVar27))));
            auVar44._8_4_ =
                 -(uint)((int)uVar13 >> 0x1b ==
                        CONCAT13(bVar28,CONCAT12(bVar28,CONCAT11(bVar28,bVar28))));
            auVar44._12_4_ =
                 -(uint)((int)uVar14 >> 0x1b ==
                        CONCAT13(bVar37,CONCAT12(bVar37,CONCAT11(bVar37,bVar37))));
            uVar72 = (int)sVar4 * (int)auVar85._0_2_;
            uVar76 = (int)sVar4 * (int)auVar85._2_2_;
            uVar78 = (int)sVar4 * (int)auVar85._4_2_;
            uVar80 = (int)sVar4 * (int)auVar85._6_2_;
            auVar86._0_4_ = uVar82 >> 0xc;
            auVar86._4_4_ = uVar87 >> 0xc;
            auVar86._8_4_ = uVar88 >> 0xc;
            auVar86._12_4_ = uVar89 >> 0xc;
            bVar55 = (byte)(uVar70 >> 0x18);
            bVar65 = (byte)(uVar71 >> 0x18);
            auVar16._8_4_ = uVar79 >> 0xc;
            auVar16._0_8_ =
                 (ulong)CONCAT24((short)(uVar77 >> 0xc),uVar73 >> 0xc) & 0xffffffff0000ffff;
            auVar16._12_4_ = uVar81 >> 0xc;
            auVar93 = auVar93 ^ (auVar93 ^ auVar16) & auVar92;
            auVar8[6] = 0;
            auVar8._0_6_ = CONCAT15(cVar27,CONCAT14(cVar27,(uint)(ushort)(CONCAT11(cVar23,cVar23) ^
                                                                         0x7fff))) ^ 0x7fff00000000;
            auVar8[7] = cVar27;
            auVar8[8] = bVar28 ^ 0xff;
            auVar8[9] = bVar28 ^ 0x7f;
            auVar8[10] = bVar28;
            auVar8[0xb] = bVar28;
            auVar8[0xc] = bVar37 ^ 0xff;
            auVar8[0xd] = bVar37 ^ 0x7f;
            auVar8[0xe] = bVar37;
            auVar8[0xf] = bVar37;
            auVar18._8_2_ = (short)(uVar13 >> 0xc);
            auVar18._0_8_ =
                 (ulong)CONCAT24((short)(uVar12 >> 0xc),uVar5 >> 0xc) & 0xffffffff0000ffff;
            auVar18._10_2_ = (ushort)(uVar13 >> 0x1c);
            auVar18._12_2_ = (short)(uVar14 >> 0xc);
            auVar18._14_2_ = (ushort)(uVar14 >> 0x1c);
            auVar45[6] = 0;
            auVar45._0_6_ =
                 CONCAT15(cVar27,CONCAT14(cVar27,(uint)(ushort)(CONCAT11(cVar23,cVar23) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar45[7] = cVar27;
            auVar45[8] = bVar28 ^ 0xff;
            auVar45[9] = bVar28 ^ 0x7f;
            auVar45[10] = bVar28;
            auVar45[0xb] = bVar28;
            auVar45[0xc] = bVar37 ^ 0xff;
            auVar45[0xd] = bVar37 ^ 0x7f;
            auVar45[0xe] = bVar37;
            auVar45[0xf] = bVar37;
            auVar45 = auVar45 ^ (auVar8 ^ auVar18) & auVar44;
                    /* catch() { ... } // from try @ 00a959a4 with catch @ 00a95a64 */
                    /* catch() { ... } // from try @ 00a95998 with catch @ 00a95a68 */
            auVar95._0_4_ = -(uint)((int)uVar82 >> 0x1b == (int)uVar82 >> 0x1f);
            auVar95._4_4_ = -(uint)((int)uVar87 >> 0x1b == (int)uVar87 >> 0x1f);
            auVar95._8_4_ = -(uint)((int)uVar88 >> 0x1b == (int)uVar88 >> 0x1f);
            auVar95._12_4_ = -(uint)((int)uVar89 >> 0x1b == (int)uVar89 >> 0x1f);
            cVar23 = (char)((int)uVar82 >> 0x1f);
            cVar27 = (char)((int)uVar87 >> 0x1f);
            auVar96._0_6_ =
                 CONCAT15(cVar27,CONCAT14(cVar27,(uint)(ushort)(CONCAT11(cVar23,cVar23) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar96[6] = 0;
            auVar96[7] = cVar27;
            bVar28 = (byte)((int)uVar88 >> 0x1f);
            auVar96[8] = bVar28 ^ 0xff;
            auVar96[9] = bVar28 ^ 0x7f;
            auVar96[10] = bVar28;
            auVar96[0xb] = bVar28;
            bVar28 = (byte)((int)uVar89 >> 0x1f);
            auVar96[0xc] = bVar28 ^ 0xff;
            auVar96[0xd] = bVar28 ^ 0x7f;
            auVar96[0xe] = bVar28;
            auVar96[0xf] = bVar28;
                    /* catch() { ... } // from try @ 00a959ac with catch @ 00a95a70 */
            auVar74._0_4_ = -(uint)((int)uVar66 >> 0x1b == (int)uVar66 >> 0x1f);
            auVar74._4_4_ = -(uint)((int)uVar69 >> 0x1b == (int)uVar69 >> 0x1f);
            auVar74._8_4_ = -(uint)((int)uVar70 >> 0x1b == (int)uVar70 >> 0x1f);
            auVar74._12_4_ = -(uint)((int)uVar71 >> 0x1b == (int)uVar71 >> 0x1f);
            cVar23 = (char)((int)uVar66 >> 0x1f);
            cVar27 = (char)((int)uVar69 >> 0x1f);
            auVar75._0_6_ =
                 CONCAT15(cVar27,CONCAT14(cVar27,(uint)(ushort)(CONCAT11(cVar23,cVar23) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar75[6] = 0;
            auVar75[7] = cVar27;
            bVar28 = (char)bVar55 >> 7;
            auVar75[8] = bVar28 ^ 0xff;
            auVar75[9] = bVar28 ^ 0x7f;
            auVar75[10] = bVar28;
            auVar75[0xb] = bVar28;
            bVar28 = (char)bVar65 >> 7;
            auVar75[0xc] = bVar28 ^ 0xff;
            auVar75[0xd] = bVar28 ^ 0x7f;
            auVar75[0xe] = bVar28;
            auVar75[0xf] = bVar28;
            auVar96 = auVar96 ^ (auVar96 ^ auVar86) & auVar95;
            auVar11._6_2_ = 0;
            auVar11._0_6_ =
                 CONCAT15((char)((uVar69 >> 0xc) >> 8),CONCAT14((char)(uVar69 >> 0xc),uVar66 >> 0xc)
                         ) & 0xffff0000ffff;
            auVar11[8] = (char)(uVar70 >> 0xc);
            auVar11[9] = (char)((uVar70 >> 0xc) >> 8);
            auVar11[10] = bVar55 >> 4;
            auVar11[0xb] = 0;
            auVar11[0xc] = (char)(uVar71 >> 0xc);
            auVar11[0xd] = (char)((uVar71 >> 0xc) >> 8);
            auVar11[0xe] = bVar65 >> 4;
            auVar11[0xf] = 0;
                    /* try { // try from 00a95a8c to 00b95adf has its CatchHandler @ 00a95a8c
                       catch() { ... } // from try @ 00a95a8c with catch @ 00a95a8c
                       catch() { ... } // from try @ 00a95b74 with catch @ 00a95a8c */
            auVar75 = auVar75 ^ (auVar75 ^ auVar11) & auVar74;
            auVar25._0_4_ = -(uint)((int)uVar72 >> 0x1b == (int)uVar72 >> 0x1f);
            auVar25._4_4_ = -(uint)((int)uVar76 >> 0x1b == (int)uVar76 >> 0x1f);
            auVar25._8_4_ = -(uint)((int)uVar78 >> 0x1b == (int)uVar78 >> 0x1f);
            auVar25._12_4_ = -(uint)((int)uVar80 >> 0x1b == (int)uVar80 >> 0x1f);
            cVar23 = (char)((int)uVar72 >> 0x1f);
            cVar27 = (char)((int)uVar76 >> 0x1f);
            auVar26._0_6_ =
                 CONCAT15(cVar27,CONCAT14(cVar27,(uint)(ushort)(CONCAT11(cVar23,cVar23) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar26[6] = 0;
            auVar26[7] = cVar27;
            bVar55 = (byte)((int)uVar78 >> 0x1f);
            auVar26[8] = bVar55 ^ 0xff;
            auVar26[9] = bVar55 ^ 0x7f;
            auVar26[10] = bVar55;
            auVar26[0xb] = bVar55;
            bVar55 = (byte)((int)uVar80 >> 0x1f);
            auVar26[0xc] = bVar55 ^ 0xff;
            auVar26[0xd] = bVar55 ^ 0x7f;
            auVar26[0xe] = bVar55;
            auVar26[0xf] = bVar55;
            auVar17._8_4_ = uVar78 >> 0xc;
            auVar17._0_8_ =
                 (ulong)CONCAT24((short)(uVar76 >> 0xc),uVar72 >> 0xc) & 0xffffffff0000ffff;
            auVar17._12_4_ = uVar80 >> 0xc;
            auVar26 = auVar26 ^ (auVar26 ^ auVar17) & auVar25;
            *param_1 = auVar59._0_2_;
            param_1[1] = auVar93._0_2_;
            param_1[2] = auVar96._0_2_;
            param_1[3] = auVar59._4_2_;
            param_1[4] = auVar93._4_2_;
            param_1[5] = auVar96._4_2_;
            param_1[6] = auVar59._8_2_;
            param_1[7] = auVar93._8_2_;
            param_1[8] = auVar96._8_2_;
            param_1[9] = auVar59._12_2_;
            param_1[10] = auVar93._12_2_;
            param_1[0xb] = auVar96._12_2_;
            param_1[0xc] = auVar45._0_2_;
            param_1[0xd] = auVar75._0_2_;
            param_1[0xe] = auVar26._0_2_;
            param_1[0xf] = auVar45._4_2_;
            param_1[0x10] = auVar75._4_2_;
            param_1[0x11] = auVar26._4_2_;
            param_1[0x12] = auVar45._8_2_;
            param_1[0x13] = auVar75._8_2_;
            param_1[0x14] = auVar26._8_2_;
            param_1[0x15] = auVar45._12_2_;
            param_1[0x16] = auVar75._12_2_;
            param_1[0x17] = auVar26._12_2_;
            param_1 = param_1 + 0x18;
          } while (uVar21 != 0);
          bVar19 = uVar22 == param_2;
          param_3 = psVar1;
          param_2 = param_2 - uVar22;
          param_1 = (short *)puVar2;
          if (bVar19) {
            return;
          }
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
                    /* try { // try from 00a95754 to 00b957b3 has its CatchHandler @ 00a95650 */
      uVar3 = (ushort)(uVar5 >> 0xc);
      if ((int)uVar5 >> 0x1f != (int)uVar5 >> 0x1b) {
        uVar3 = (ushort)((int)uVar5 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar3;
      uVar5 = (int)*param_5 * (int)param_3[2];
      uVar3 = (ushort)(uVar5 >> 0xc);
                    /* catch() { ... } // from try @ 00a956b0 with catch @ 00a9578c */
      if ((int)uVar5 >> 0x1f != (int)uVar5 >> 0x1b) {
        uVar3 = (ushort)((int)uVar5 >> 0x1f) ^ 0x7fff;
      }
                    /* catch() { ... } // from try @ 00a956a4 with catch @ 00a95790 */
      param_2 = param_2 - 1;
      param_1[2] = uVar3;
                    /* catch() { ... } // from try @ 00a956b8 with catch @ 00a95798 */
      param_3 = param_3 + 3;
      param_1 = param_1 + 3;
    } while (param_2 != 0);
  }
  else {
    iVar6 = (int)param_6;
    if (3 < param_2) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_2 - 1;
                    /* try { // try from 00a957b4 to 00b95807 has its CatchHandler @ 00a957b4
                       catch() { ... } // from try @ 00a957b4 with catch @ 00a957b4
                       catch() { ... } // from try @ 00a958cc with catch @ 00a957b4 */
      uVar21 = (param_2 - 1) * 6;
      if (((uVar21 < ~(ulong)(param_1 + 1) || uVar21 - ~(ulong)(param_1 + 1) == 0) &&
          (SUB168(auVar7 * ZEXT816(6),8) == 0)) &&
         ((uVar21 < ~(ulong)(param_1 + 2) || uVar21 - ~(ulong)(param_1 + 2) == 0 &&
          (uVar21 < ~(ulong)param_1 || uVar21 - ~(ulong)param_1 == 0)))) {
                    /* try { // try from 00a95808 to 00b95813 has its CatchHandler @ 00a95920 */
                    /* try { // try from 00a95814 to 00b9581b has its CatchHandler @ 00a9591c */
                    /* try { // try from 00a9581c to 00b9589f has its CatchHandler @ 00a95928 */
        if ((param_3 + param_2 * 3 <= param_1 || param_1 + param_2 * 3 <= param_3) &&
           ((short *)((long)param_5 + 1U) <= param_1 || param_1 + param_2 * 3 <= param_5)) {
          uVar22 = param_2 & 0xfffffffffffffffc;
          psVar1 = param_3 + uVar22 * 3;
          puVar2 = (ushort *)(param_1 + uVar22 * 3);
          piVar20 = param_4;
          uVar21 = uVar22;
          do {
            sVar41 = *param_3;
            sVar49 = param_3[1];
            sVar56 = param_3[2];
            sVar46 = param_3[3];
            sVar52 = param_3[4];
            sVar60 = param_3[5];
            sVar47 = param_3[6];
            sVar53 = param_3[7];
            sVar61 = param_3[8];
            sVar48 = param_3[9];
            sVar54 = param_3[10];
            sVar62 = param_3[0xb];
            param_3 = param_3 + 0xc;
            sVar4 = *param_5;
            uVar21 = uVar21 - 4;
            uVar72 = (int)sVar4 * (int)sVar41;
            uVar76 = (int)sVar4 * (int)sVar46;
            uVar78 = (int)sVar4 * (int)sVar47;
            uVar80 = (int)sVar4 * (int)sVar48;
            uVar82 = (int)sVar4 * (int)sVar49;
            uVar87 = (int)sVar4 * (int)sVar52;
            uVar88 = (int)sVar4 * (int)sVar53;
            uVar89 = (int)sVar4 * (int)sVar54;
            uVar5 = (int)sVar4 * (int)sVar56;
            uVar12 = (int)sVar4 * (int)sVar60;
            uVar13 = (int)sVar4 * (int)sVar61;
            uVar14 = (int)sVar4 * (int)sVar62;
                    /* try { // try from 00a958a0 to 00b958ab has its CatchHandler @ 00a95904 */
            auVar90._0_4_ = -(uint)((int)uVar72 >> 0x1b == (int)uVar72 >> 0x1f);
            auVar90._4_4_ = -(uint)((int)uVar76 >> 0x1b == (int)uVar76 >> 0x1f);
            auVar90._8_4_ = -(uint)((int)uVar78 >> 0x1b == (int)uVar78 >> 0x1f);
            auVar90._12_4_ = -(uint)((int)uVar80 >> 0x1b == (int)uVar80 >> 0x1f);
            cVar23 = (char)((int)uVar72 >> 0x1f);
            cVar27 = (char)((int)uVar76 >> 0x1f);
            auVar91._0_6_ =
                 CONCAT15(cVar27,CONCAT14(cVar27,(uint)(ushort)(CONCAT11(cVar23,cVar23) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar91[6] = 0;
            auVar91[7] = cVar27;
            bVar55 = (byte)((int)uVar78 >> 0x1f);
            auVar91[8] = bVar55 ^ 0xff;
            auVar91[9] = bVar55 ^ 0x7f;
            auVar91[10] = bVar55;
            auVar91[0xb] = bVar55;
            bVar55 = (byte)((int)uVar80 >> 0x1f);
            auVar91[0xc] = bVar55 ^ 0xff;
            auVar91[0xd] = bVar55 ^ 0x7f;
            auVar91[0xe] = bVar55;
            auVar91[0xf] = bVar55;
            auVar94._0_4_ = uVar82 >> 0xc;
            auVar94._4_4_ = uVar87 >> 0xc;
            auVar94._8_4_ = uVar88 >> 0xc;
            auVar94._12_4_ = uVar89 >> 0xc;
            auVar67._0_4_ = uVar5 >> 0xc;
            auVar67._4_4_ = uVar12 >> 0xc;
            auVar67._8_4_ = uVar13 >> 0xc;
            auVar67._12_4_ = uVar14 >> 0xc;
            cVar63 = (char)((int)uVar5 >> 0x1f);
            cVar64 = (char)((int)uVar12 >> 0x1f);
            bVar65 = (byte)((int)uVar13 >> 0x1f);
            bVar28 = (byte)((int)uVar14 >> 0x1f);
                    /* try { // try from 00a958bc to 00b958cb has its CatchHandler @ 00a95928 */
            auVar50._0_4_ = -(uint)((int)uVar82 >> 0x1b == (int)uVar82 >> 0x1f);
            auVar50._4_4_ = -(uint)((int)uVar87 >> 0x1b == (int)uVar87 >> 0x1f);
            auVar50._8_4_ = -(uint)((int)uVar88 >> 0x1b == (int)uVar88 >> 0x1f);
            auVar50._12_4_ = -(uint)((int)uVar89 >> 0x1b == (int)uVar89 >> 0x1f);
            cVar23 = (char)((int)uVar82 >> 0x1f);
            cVar27 = (char)((int)uVar87 >> 0x1f);
            auVar51._0_6_ =
                 CONCAT15(cVar27,CONCAT14(cVar27,(uint)(ushort)(CONCAT11(cVar23,cVar23) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar51[6] = 0;
            auVar51[7] = cVar27;
            bVar55 = (byte)((int)uVar88 >> 0x1f);
            auVar51[8] = bVar55 ^ 0xff;
            auVar51[9] = bVar55 ^ 0x7f;
            auVar51[10] = bVar55;
            auVar51[0xb] = bVar55;
            bVar55 = (byte)((int)uVar89 >> 0x1f);
            auVar51[0xc] = bVar55 ^ 0xff;
            auVar51[0xd] = bVar55 ^ 0x7f;
            auVar51[0xe] = bVar55;
            auVar51[0xf] = bVar55;
            auVar15._8_4_ = uVar78 >> 0xc;
            auVar15._0_8_ =
                 (ulong)CONCAT24((short)(uVar76 >> 0xc),uVar72 >> 0xc) & 0xffffffff0000ffff;
            auVar15._12_4_ = uVar80 >> 0xc;
            auVar91 = auVar91 ^ (auVar91 ^ auVar15) & auVar90;
            auVar83._0_4_ =
                 -(uint)((int)uVar5 >> 0x1b ==
                        CONCAT13(cVar63,CONCAT12(cVar63,CONCAT11(cVar63,cVar63))));
            auVar83._4_4_ =
                 -(uint)((int)uVar12 >> 0x1b ==
                        CONCAT13(cVar64,CONCAT12(cVar64,CONCAT11(cVar64,cVar64))));
            auVar83._8_4_ =
                 -(uint)((int)uVar13 >> 0x1b ==
                        CONCAT13(bVar65,CONCAT12(bVar65,CONCAT11(bVar65,bVar65))));
            auVar83._12_4_ =
                 -(uint)((int)uVar14 >> 0x1b ==
                        CONCAT13(bVar28,CONCAT12(bVar28,CONCAT11(bVar28,bVar28))));
                    /* try { // try from 00a958cc to 00b95943 has its CatchHandler @ 00a957b4 */
            auVar51 = auVar51 ^ (auVar51 ^ auVar94) & auVar50;
            auVar9[6] = 0;
            auVar9._0_6_ = CONCAT15(cVar64,CONCAT14(cVar64,(uint)(ushort)(CONCAT11(cVar63,cVar63) ^
                                                                         0x7fff))) ^ 0x7fff00000000;
            auVar9[7] = cVar64;
            auVar9[8] = bVar65 ^ 0xff;
            auVar9[9] = bVar65 ^ 0x7f;
            auVar9[10] = bVar65;
            auVar9[0xb] = bVar65;
            auVar9[0xc] = bVar28 ^ 0xff;
            auVar9[0xd] = bVar28 ^ 0x7f;
            auVar9[0xe] = bVar28;
            auVar9[0xf] = bVar28;
            auVar84[6] = 0;
            auVar84._0_6_ =
                 CONCAT15(cVar64,CONCAT14(cVar64,(uint)(ushort)(CONCAT11(cVar63,cVar63) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar84[7] = cVar64;
            auVar84[8] = bVar65 ^ 0xff;
            auVar84[9] = bVar65 ^ 0x7f;
            auVar84[10] = bVar65;
            auVar84[0xb] = bVar65;
            auVar84[0xc] = bVar28 ^ 0xff;
            auVar84[0xd] = bVar28 ^ 0x7f;
            auVar84[0xe] = bVar28;
            auVar84[0xf] = bVar28;
            auVar84 = auVar84 ^ (auVar9 ^ auVar67) & auVar83;
            *param_1 = auVar91._0_2_;
            param_1[1] = auVar51._0_2_;
            param_1[2] = auVar84._0_2_;
            param_1[3] = auVar91._4_2_;
            param_1[4] = auVar51._4_2_;
            param_1[5] = auVar84._4_2_;
            param_1[6] = auVar91._8_2_;
            param_1[7] = auVar51._8_2_;
            param_1[8] = auVar84._8_2_;
            param_1[9] = auVar91._12_2_;
            param_1[10] = auVar51._12_2_;
            param_1[0xb] = auVar84._12_2_;
            param_1 = param_1 + 0xc;
                    /* catch() { ... } // from try @ 00a958a0 with catch @ 00a95904 */
            piVar20[2] = piVar20[2] +
                         ((((int)sVar53 + (int)sVar47 + (int)sVar61) * 0x1000) / 3 >> 0xc) * iVar6;
            piVar20[3] = piVar20[3] +
                         ((((int)sVar54 + (int)sVar48 + (int)sVar62) * 0x1000) / 3 >> 0xc) * iVar6;
            *piVar20 = *piVar20 +
                       ((((int)sVar49 + (int)sVar41 + (int)sVar56) * 0x1000) / 3 >> 0xc) * iVar6;
            piVar20[1] = piVar20[1] +
                         ((((int)sVar52 + (int)sVar46 + (int)sVar60) * 0x1000) / 3 >> 0xc) * iVar6;
            piVar20 = piVar20 + 4;
          } while (uVar21 != 0);
          bVar19 = uVar22 == param_2;
          param_3 = psVar1;
          param_4 = param_4 + uVar22;
          param_2 = param_2 - uVar22;
          param_1 = (short *)puVar2;
          if (bVar19) {
            return;
          }
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
      sVar41 = param_3[1];
      uVar5 = (int)*param_5 * (int)sVar41;
                    /* try { // try from 00a956a4 to 00b956af has its CatchHandler @ 00a95790 */
      uVar3 = (ushort)(uVar5 >> 0xc);
      if ((int)uVar5 >> 0x1f != (int)uVar5 >> 0x1b) {
        uVar3 = (ushort)((int)uVar5 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar3;
                    /* try { // try from 00a956b0 to 00b956b7 has its CatchHandler @ 00a9578c */
      sVar46 = param_3[2];
                    /* try { // try from 00a956b8 to 00b95753 has its CatchHandler @ 00a95798 */
      uVar5 = (int)*param_5 * (int)sVar46;
      uVar3 = (ushort)(uVar5 >> 0xc);
      if ((int)uVar5 >> 0x1f != (int)uVar5 >> 0x1b) {
        uVar3 = (ushort)((int)uVar5 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar3;
      param_2 = param_2 - 1;
      *param_4 = *param_4 + ((((int)sVar41 + (int)sVar4 + (int)sVar46) * 0x1000) / 3 >> 0xc) * iVar6
      ;
      param_3 = param_3 + 3;
      param_4 = param_4 + 1;
      param_1 = param_1 + 3;
    } while (param_2 != 0);
  }
  return;
}

