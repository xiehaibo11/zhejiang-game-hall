
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void cocos2d::volumeMulti<4, 5, short, short, short, int, short>(short*, unsigned long, short
   const*, int*, short const*, short) */

void cocos2d::volumeMulti<4,5,short,short,short,int,short>
               (short *param_1,ulong param_2,short *param_3,int *param_4,short *param_5,
               short param_6)

{
  short *psVar1;
  ushort *puVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  bool bVar27;
  int *piVar28;
  ulong uVar29;
  ulong uVar30;
  undefined2 uVar34;
  undefined2 uVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  char cVar36;
  char cVar37;
  byte bVar38;
  byte bVar39;
  int iVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  uint uVar48;
  uint uVar51;
  byte bVar52;
  uint uVar53;
  uint uVar54;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  uint uVar59;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  uint uVar65;
  uint uVar70;
  uint uVar71;
  undefined1 auVar66 [16];
  uint uVar72;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  uint uVar73;
  uint uVar76;
  uint uVar77;
  undefined1 auVar74 [16];
  uint uVar78;
  undefined1 auVar75 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  
  auVar26 = _DAT_0189ce90;
  auVar25 = _DAT_0189ce80;
  auVar24 = _DAT_0189ce70;
  auVar23 = _DAT_0189ce60;
  auVar22 = _DAT_0189ce50;
  auVar21 = _DAT_0189ce40;
  auVar20 = _DAT_0189cca0;
  auVar19 = _DAT_0189cc90;
  auVar18 = _DAT_0189cc80;
  auVar17 = _DAT_0189cc70;
  auVar16 = _DAT_0189cc60;
  if (param_4 == (int *)0x0) {
    do {
      uVar48 = (int)*param_5 * (int)*param_3;
                    /* catch() { ... } // from try @ 00a95eb0 with catch @ 00a960f4 */
      uVar3 = (ushort)(uVar48 >> 0xc);
      if ((int)uVar48 >> 0x1f != (int)uVar48 >> 0x1b) {
        uVar3 = (ushort)((int)uVar48 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar3;
      uVar48 = (int)*param_5 * (int)param_3[1];
                    /* catch() { ... } // from try @ 00a95ff0 with catch @ 00a96110 */
      uVar3 = (ushort)(uVar48 >> 0xc);
      if ((int)uVar48 >> 0x1f != (int)uVar48 >> 0x1b) {
        uVar3 = (ushort)((int)uVar48 >> 0x1f) ^ 0x7fff;
      }
                    /* try { // try from 00a96124 to 00b961d3 has its CatchHandler @ 00a96124
                       catch() { ... } // from try @ 00a96124 with catch @ 00a96124
                       catch() { ... } // from try @ 00a96210 with catch @ 00a96124 */
      param_1[1] = uVar3;
      uVar48 = (int)*param_5 * (int)param_3[2];
      uVar3 = (ushort)(uVar48 >> 0xc);
      if ((int)uVar48 >> 0x1f != (int)uVar48 >> 0x1b) {
        uVar3 = (ushort)((int)uVar48 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar3;
      uVar48 = (int)*param_5 * (int)param_3[3];
      uVar3 = (ushort)(uVar48 >> 0xc);
      if ((int)uVar48 >> 0x1f != (int)uVar48 >> 0x1b) {
        uVar3 = (ushort)((int)uVar48 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar3;
      psVar1 = param_3 + 4;
      param_3 = param_3 + 5;
      uVar48 = (int)*param_5 * (int)*psVar1;
      uVar3 = (ushort)(uVar48 >> 0xc);
      if ((int)uVar48 >> 0x1f != (int)uVar48 >> 0x1b) {
        uVar3 = (ushort)((int)uVar48 >> 0x1f) ^ 0x7fff;
      }
      param_2 = param_2 - 1;
      param_1[4] = uVar3;
      param_1 = param_1 + 5;
    } while (param_2 != 0);
  }
  else {
    iVar9 = (int)param_6;
    if (3 < param_2) {
      auVar41._8_8_ = 0;
      auVar41._0_8_ = param_2 - 1;
      uVar29 = (param_2 - 1) * 10;
                    /* try { // try from 00a961d4 to 00b96203 has its CatchHandler @ 00a96278 */
                    /* try { // try from 00a96208 to 00b9620f has its CatchHandler @ 00a96274 */
                    /* try { // try from 00a96210 to 00b96293 has its CatchHandler @ 00a96124 */
      if (((((uVar29 < ~(ulong)(param_1 + 3) || uVar29 - ~(ulong)(param_1 + 3) == 0) &&
            (SUB168(auVar41 * ZEXT816(10),8) == 0)) &&
           (uVar29 < ~(ulong)(param_1 + 4) || uVar29 - ~(ulong)(param_1 + 4) == 0)) &&
          ((uVar29 < ~(ulong)(param_1 + 2) || uVar29 - ~(ulong)(param_1 + 2) == 0 &&
           (uVar29 < ~(ulong)(param_1 + 1) || uVar29 - ~(ulong)(param_1 + 1) == 0)))) &&
         (uVar29 < ~(ulong)param_1 || uVar29 - ~(ulong)param_1 == 0)) {
        if ((param_3 + param_2 * 5 <= param_1 || param_1 + param_2 * 5 <= param_3) &&
           ((short *)((long)param_5 + 1U) <= param_1 || param_1 + param_2 * 5 <= param_5)) {
                    /* catch() { ... } // from try @ 00a96208 with catch @ 00a96274 */
                    /* catch() { ... } // from try @ 00a961d4 with catch @ 00a96278 */
          uVar30 = param_2 & 0xfffffffffffffffc;
          psVar1 = param_3 + uVar30 * 5;
          puVar2 = (ushort *)(param_1 + uVar30 * 5);
          piVar28 = param_4;
          uVar29 = uVar30;
          do {
            auVar41 = *(undefined1 (*) [16])param_3;
            auVar46 = *(undefined1 (*) [16])((long)param_3 + 0x10);
            uVar13 = *(undefined8 *)*(undefined1 (*) [16])((long)param_3 + 0x20);
            sVar4 = *param_5;
            uVar29 = uVar29 - 4;
            auVar66 = a64_TBL(ZEXT816(0),auVar41,auVar46,auVar16);
            auVar74 = a64_TBL(ZEXT816(0),auVar41,auVar46,auVar17);
            auVar79 = a64_TBL(ZEXT816(0),auVar41,auVar46,auVar18);
            auVar31 = a64_TBL(ZEXT816(0),auVar41,auVar46,auVar19);
            auVar41 = a64_TBL(ZEXT816(0),auVar41,auVar46,auVar20);
            sVar5 = (short)((ulong)uVar13 >> 0x10);
            sVar6 = (short)((ulong)uVar13 >> 0x20);
            sVar7 = (short)((ulong)uVar13 >> 0x30);
            uVar48 = (int)sVar4 * (int)auVar66._0_2_;
            uVar51 = (int)sVar4 * (int)auVar66._2_2_;
            uVar53 = (int)sVar4 * (int)auVar66._4_2_;
            uVar54 = (int)sVar4 * (int)auVar66._6_2_;
            auVar42._0_4_ = uVar48 >> 0xc;
            auVar42._4_4_ = uVar51 >> 0xc;
            auVar42._8_4_ = uVar53 >> 0xc;
            auVar42._12_4_ = uVar54 >> 0xc;
            cVar36 = (char)((int)uVar48 >> 0x1f);
            cVar37 = (char)((int)uVar51 >> 0x1f);
            bVar38 = (byte)((int)uVar53 >> 0x1f);
            bVar39 = (byte)((int)uVar54 >> 0x1f);
            uVar59 = (int)sVar4 * (int)auVar74._0_2_;
            uVar62 = (int)sVar4 * (int)auVar74._2_2_;
            uVar63 = (int)sVar4 * (int)auVar74._4_2_;
            uVar64 = (int)sVar4 * (int)(short)uVar13;
            uVar65 = (int)sVar4 * (int)auVar79._0_2_;
            uVar70 = (int)sVar4 * (int)auVar79._2_2_;
            uVar71 = (int)sVar4 * (int)auVar79._4_2_;
            uVar72 = (int)sVar4 * (int)sVar5;
            auVar55._0_4_ =
                 -(uint)((int)uVar48 >> 0x1b ==
                        CONCAT13(cVar36,CONCAT12(cVar36,CONCAT11(cVar36,cVar36))));
            auVar55._4_4_ =
                 -(uint)((int)uVar51 >> 0x1b ==
                        CONCAT13(cVar37,CONCAT12(cVar37,CONCAT11(cVar37,cVar37))));
            auVar55._8_4_ =
                 -(uint)((int)uVar53 >> 0x1b ==
                        CONCAT13(bVar38,CONCAT12(bVar38,CONCAT11(bVar38,bVar38))));
            auVar55._12_4_ =
                 -(uint)((int)uVar54 >> 0x1b ==
                        CONCAT13(bVar39,CONCAT12(bVar39,CONCAT11(bVar39,bVar39))));
            auVar75[6] = 0;
            auVar75._0_6_ =
                 CONCAT15(cVar37,CONCAT14(cVar37,(uint)(ushort)(CONCAT11(cVar36,cVar36) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar75[7] = cVar37;
            auVar75[8] = bVar38 ^ 0xff;
            auVar75[9] = bVar38 ^ 0x7f;
            auVar75[10] = bVar38;
            auVar75[0xb] = bVar38;
            auVar75[0xc] = bVar39 ^ 0xff;
            auVar75[0xd] = bVar39 ^ 0x7f;
            auVar75[0xe] = bVar39;
            auVar75[0xf] = bVar39;
            auVar56[6] = 0;
            auVar56._0_6_ =
                 CONCAT15(cVar37,CONCAT14(cVar37,(uint)(ushort)(CONCAT11(cVar36,cVar36) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar56[7] = cVar37;
            auVar56[8] = bVar38 ^ 0xff;
            auVar56[9] = bVar38 ^ 0x7f;
            auVar56[10] = bVar38;
            auVar56[0xb] = bVar38;
            auVar56[0xc] = bVar39 ^ 0xff;
            auVar56[0xd] = bVar39 ^ 0x7f;
            auVar56[0xe] = bVar39;
            auVar56[0xf] = bVar39;
            auVar56 = auVar56 ^ (auVar75 ^ auVar42) & auVar55;
            bVar38 = (byte)(uVar71 >> 0x18);
            bVar39 = (byte)(uVar72 >> 0x18);
            uVar73 = (int)sVar4 * (int)auVar31._0_2_;
            uVar76 = (int)sVar4 * (int)auVar31._2_2_;
            uVar77 = (int)sVar4 * (int)auVar31._4_2_;
            uVar78 = (int)sVar4 * (int)sVar6;
            uVar48 = (int)sVar4 * (int)auVar41._0_2_;
            uVar51 = (int)sVar4 * (int)auVar41._2_2_;
            uVar53 = (int)sVar4 * (int)auVar41._4_2_;
            uVar54 = (int)sVar4 * (int)sVar7;
            auVar80._0_4_ = -(uint)((int)uVar59 >> 0x1b == (int)uVar59 >> 0x1f);
            auVar80._4_4_ = -(uint)((int)uVar62 >> 0x1b == (int)uVar62 >> 0x1f);
            auVar80._8_4_ = -(uint)((int)uVar63 >> 0x1b == (int)uVar63 >> 0x1f);
            auVar80._12_4_ = -(uint)((int)uVar64 >> 0x1b == (int)uVar64 >> 0x1f);
            cVar36 = (char)((int)uVar59 >> 0x1f);
            cVar37 = (char)((int)uVar62 >> 0x1f);
            auVar81._0_6_ =
                 CONCAT15(cVar37,CONCAT14(cVar37,(uint)(ushort)(CONCAT11(cVar36,cVar36) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar81[6] = 0;
            auVar81[7] = cVar37;
            bVar52 = (byte)((int)uVar63 >> 0x1f);
            auVar81[8] = bVar52 ^ 0xff;
            auVar81[9] = bVar52 ^ 0x7f;
            auVar81[10] = bVar52;
            auVar81[0xb] = bVar52;
            bVar52 = (byte)((int)uVar64 >> 0x1f);
            auVar81[0xc] = bVar52 ^ 0xff;
            auVar81[0xd] = bVar52 ^ 0x7f;
            auVar81[0xe] = bVar52;
            auVar81[0xf] = bVar52;
            auVar43._0_4_ = -(uint)((int)uVar65 >> 0x1b == (int)uVar65 >> 0x1f);
            auVar43._4_4_ = -(uint)((int)uVar70 >> 0x1b == (int)uVar70 >> 0x1f);
            auVar43._8_4_ = -(uint)((int)uVar71 >> 0x1b == (int)uVar71 >> 0x1f);
            auVar43._12_4_ = -(uint)((int)uVar72 >> 0x1b == (int)uVar72 >> 0x1f);
            cVar36 = (char)((int)uVar65 >> 0x1f);
            cVar37 = (char)((int)uVar70 >> 0x1f);
            auVar44._0_6_ =
                 CONCAT15(cVar37,CONCAT14(cVar37,(uint)(ushort)(CONCAT11(cVar36,cVar36) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar44[6] = 0;
            auVar44[7] = cVar37;
            bVar52 = (char)bVar38 >> 7;
            auVar44[8] = bVar52 ^ 0xff;
            auVar44[9] = bVar52 ^ 0x7f;
            auVar44[10] = bVar52;
            auVar44[0xb] = bVar52;
            bVar52 = (char)bVar39 >> 7;
            auVar44[0xc] = bVar52 ^ 0xff;
            auVar44[0xd] = bVar52 ^ 0x7f;
            auVar44[0xe] = bVar52;
            auVar44[0xf] = bVar52;
            auVar46._4_4_ = uVar62 >> 0xc;
            auVar46._0_4_ = uVar59 >> 0xc;
            auVar46._8_4_ = uVar63 >> 0xc;
            auVar46._12_4_ = uVar64 >> 0xc;
            auVar81 = auVar81 ^ (auVar81 ^ auVar46) & auVar80;
            auVar60._0_4_ = uVar73 >> 0xc;
            auVar60._4_4_ = uVar76 >> 0xc;
            auVar60._8_4_ = uVar77 >> 0xc;
            auVar60._12_4_ = uVar78 >> 0xc;
            auVar11._6_2_ = 0;
            auVar11._0_6_ =
                 CONCAT15((char)((uVar70 >> 0xc) >> 8),CONCAT14((char)(uVar70 >> 0xc),uVar65 >> 0xc)
                         ) & 0xffff0000ffff;
            auVar11[8] = (char)(uVar71 >> 0xc);
            auVar11[9] = (char)((uVar71 >> 0xc) >> 8);
            auVar11[10] = bVar38 >> 4;
            auVar11[0xb] = 0;
            auVar11[0xc] = (char)(uVar72 >> 0xc);
            auVar11[0xd] = (char)((uVar72 >> 0xc) >> 8);
            auVar11[0xe] = bVar39 >> 4;
            auVar11[0xf] = 0;
            auVar44 = auVar44 ^ (auVar44 ^ auVar11) & auVar43;
            bVar38 = (byte)(uVar53 >> 0x18);
            bVar39 = (byte)(uVar54 >> 0x18);
            auVar32._0_4_ = -(uint)((int)uVar73 >> 0x1b == (int)uVar73 >> 0x1f);
            auVar32._4_4_ = -(uint)((int)uVar76 >> 0x1b == (int)uVar76 >> 0x1f);
            auVar32._8_4_ = -(uint)((int)uVar77 >> 0x1b == (int)uVar77 >> 0x1f);
            auVar32._12_4_ = -(uint)((int)uVar78 >> 0x1b == (int)uVar78 >> 0x1f);
            cVar36 = (char)((int)uVar73 >> 0x1f);
            cVar37 = (char)((int)uVar76 >> 0x1f);
            auVar33._0_6_ =
                 CONCAT15(cVar37,CONCAT14(cVar37,(uint)(ushort)(CONCAT11(cVar36,cVar36) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar33[6] = 0;
            auVar33[7] = cVar37;
            bVar52 = (byte)((int)uVar77 >> 0x1f);
            auVar33[8] = bVar52 ^ 0xff;
            auVar33[9] = bVar52 ^ 0x7f;
            auVar33[10] = bVar52;
            auVar33[0xb] = bVar52;
            bVar52 = (byte)((int)uVar78 >> 0x1f);
            auVar33[0xc] = bVar52 ^ 0xff;
            auVar33[0xd] = bVar52 ^ 0x7f;
            auVar33[0xe] = bVar52;
            auVar33[0xf] = bVar52;
            auVar67._0_4_ = -(uint)((int)uVar48 >> 0x1b == (int)uVar48 >> 0x1f);
            auVar67._4_4_ = -(uint)((int)uVar51 >> 0x1b == (int)uVar51 >> 0x1f);
            auVar67._8_4_ = -(uint)((int)uVar53 >> 0x1b == (int)uVar53 >> 0x1f);
            auVar67._12_4_ = -(uint)((int)uVar54 >> 0x1b == (int)uVar54 >> 0x1f);
            cVar36 = (char)((int)uVar48 >> 0x1f);
            cVar37 = (char)((int)uVar51 >> 0x1f);
            auVar68._0_6_ =
                 CONCAT15(cVar37,CONCAT14(cVar37,(uint)(ushort)(CONCAT11(cVar36,cVar36) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar68[6] = 0;
            auVar68[7] = cVar37;
            bVar52 = (char)bVar38 >> 7;
            auVar68[8] = bVar52 ^ 0xff;
            auVar68[9] = bVar52 ^ 0x7f;
            auVar68[10] = bVar52;
            auVar68[0xb] = bVar52;
            bVar52 = (char)bVar39 >> 7;
            auVar68[0xc] = bVar52 ^ 0xff;
            auVar68[0xd] = bVar52 ^ 0x7f;
            auVar68[0xe] = bVar52;
            auVar68[0xf] = bVar52;
            auVar33 = auVar33 ^ (auVar33 ^ auVar60) & auVar32;
            auVar12._6_2_ = 0;
            auVar12._0_6_ =
                 CONCAT15((char)((uVar51 >> 0xc) >> 8),CONCAT14((char)(uVar51 >> 0xc),uVar48 >> 0xc)
                         ) & 0xffff0000ffff;
            auVar12[8] = (char)(uVar53 >> 0xc);
            auVar12[9] = (char)((uVar53 >> 0xc) >> 8);
            auVar12[10] = bVar38 >> 4;
            auVar12[0xb] = 0;
            auVar12[0xc] = (char)(uVar54 >> 0xc);
            auVar12[0xd] = (char)((uVar54 >> 0xc) >> 8);
            auVar12[0xe] = bVar39 >> 4;
            auVar12[0xf] = 0;
            auVar68 = auVar68 ^ (auVar68 ^ auVar12) & auVar67;
            uVar48 = (int)auVar74._0_2_ + (int)auVar66._0_2_ + (int)auVar79._0_2_ +
                     (int)auVar31._0_2_ + (int)auVar41._0_2_;
            auVar45._0_2_ = auVar44._0_2_;
            auVar45._2_2_ = auVar44._4_2_;
            auVar47._8_2_ = auVar44._8_2_;
            auVar45._4_2_ = auVar47._8_2_;
            auVar45._6_2_ = auVar44._12_2_;
            auVar49._2_2_ = auVar33._4_2_;
            auVar49._0_2_ = auVar33._0_2_;
            uVar34 = auVar33._8_2_;
            uVar35 = auVar33._12_2_;
            auVar49._4_2_ = uVar34;
            auVar49._6_2_ = uVar35;
            auVar57._0_2_ = auVar56._0_2_;
            auVar57._2_2_ = auVar56._4_2_;
            auVar57._4_2_ = auVar56._8_2_;
            auVar57._6_2_ = auVar56._12_2_;
            auVar61._6_10_ = auVar60._6_10_;
            auVar61._4_2_ = auVar81._12_2_;
            auVar61._2_2_ = auVar44._4_2_;
            auVar61._0_2_ = auVar81._4_2_;
            uVar10 = NEON_ext(CONCAT26(auVar44._12_2_,auVar61._0_6_),
                              CONCAT17(auVar81[0xd],
                                       CONCAT16(auVar81[0xc],
                                                CONCAT15(auVar81[9],
                                                         CONCAT14(auVar81[8],
                                                                  CONCAT13(auVar81[5],
                                                                           CONCAT12(auVar81[4],
                                                                                    auVar81._0_2_)))
                                                        ))),4,1);
            auVar45._8_2_ = auVar33._0_2_;
            auVar45._10_2_ = auVar33._4_2_;
            auVar45._12_2_ = uVar34;
            auVar45._14_2_ = uVar35;
            auVar57._8_2_ = auVar81._0_2_;
            auVar57._10_2_ = auVar81._4_2_;
            auVar57._12_2_ = auVar81._8_2_;
            auVar57._14_2_ = auVar81._12_2_;
            auVar49._8_2_ = auVar68._0_2_;
            auVar49._10_2_ = auVar68._4_2_;
            auVar49._12_2_ = auVar68._8_2_;
            auVar49._14_2_ = auVar68._12_2_;
            auVar75 = a64_TBL(ZEXT816(0),auVar45,auVar22);
            auVar46 = a64_TBL(ZEXT816(0),auVar49,auVar25);
            iVar40 = uVar48 * 0x1000;
            auVar69 = a64_TBL(ZEXT816(0),auVar57,auVar23);
            auVar50 = a64_TBL(ZEXT816(0),auVar57,auVar26);
            auVar75 = a64_TBL(ZEXT816(0),auVar69,auVar75,auVar24);
            auVar46 = a64_TBL(ZEXT816(0),auVar46,auVar50,auVar24);
            auVar50._8_4_ = (int)uVar77 >> 0x1b;
            auVar50._0_8_ = uVar10;
            auVar50._12_4_ = (int)uVar78 >> 0x1b;
            auVar69._2_2_ = auVar68._8_2_;
            auVar69._0_2_ = uVar34;
            auVar69._4_2_ = uVar35;
            auVar69._6_2_ = auVar68._12_2_;
            auVar69._8_8_ = 0;
            auVar50 = a64_TBL(ZEXT816(0),auVar50,auVar69,auVar21);
            auVar58._10_6_ = auVar75._10_6_;
            auVar58._0_8_ = auVar75._0_8_;
            auVar58._8_2_ = auVar68._0_2_;
                    /* try { // try from 00a96440 to 00b964a7 has its CatchHandler @ 00a96440
                       catch() { ... } // from try @ 00a96440 with catch @ 00a96440
                       catch() { ... } // from try @ 00a964e0 with catch @ 00a96440 */
            auVar47._10_6_ = auVar46._10_6_;
            auVar47._0_8_ = auVar46._0_8_;
            *(long *)(param_1 + 0x10) = auVar50._0_8_;
            *(long *)(param_1 + 4) = auVar58._8_8_;
            *(undefined8 *)param_1 = auVar58._0_8_;
            *(long *)(param_1 + 0xc) = auVar47._8_8_;
            *(undefined8 *)(param_1 + 8) = auVar47._0_8_;
            iVar14 = (int)((ulong)*(undefined8 *)piVar28 >> 0x20) +
                     ((((int)auVar74._2_2_ + (int)auVar66._2_2_ + (int)auVar79._2_2_ +
                        (int)auVar31._2_2_ + (int)auVar41._2_2_) * 0x1000) / 5 >> 0xc) * iVar9;
            iVar15 = (int)((ulong)*(undefined8 *)(piVar28 + 2) >> 0x20) +
                     ((((int)(short)uVar13 + (int)auVar66._6_2_ + (int)sVar5 + (int)sVar6 +
                       (int)sVar7) * 0x1000) / 5 >> 0xc) * iVar9;
            param_1 = param_1 + 0x14;
            *(ulong *)(piVar28 + 2) =
                 CONCAT17((char)((uint)iVar15 >> 0x18),
                          CONCAT16((char)((uint)iVar15 >> 0x10),
                                   CONCAT15((char)((uint)iVar15 >> 8),
                                            CONCAT14((char)iVar15,
                                                     (int)*(undefined8 *)(piVar28 + 2) +
                                                     ((((int)auVar74._4_2_ + (int)auVar66._4_2_ +
                                                        (int)auVar79._4_2_ + (int)auVar31._4_2_ +
                                                       (int)auVar41._4_2_) * 0x1000) / 5 >> 0xc) *
                                                     iVar9))));
            *(ulong *)piVar28 =
                 CONCAT17((char)((uint)iVar14 >> 0x18),
                          CONCAT16((char)((uint)iVar14 >> 0x10),
                                   CONCAT15((char)((uint)iVar14 >> 8),
                                            CONCAT14((char)iVar14,
                                                     (int)*(undefined8 *)piVar28 +
                                                     ((int)(iVar40 / 5 + (iVar40 >> 0x1f) +
                                                           ((uVar48 & 0xfffff) >> 0x13)) >> 0xc) *
                                                     iVar9))));
            param_3 = (short *)(*(undefined1 (*) [16])((long)param_3 + 0x20) + 8);
            piVar28 = piVar28 + 4;
          } while (uVar29 != 0);
          bVar27 = uVar30 == param_2;
          param_3 = psVar1;
          param_4 = param_4 + uVar30;
          param_2 = param_2 - uVar30;
          param_1 = (short *)puVar2;
          if (bVar27) {
            return;
          }
        }
      }
    }
    do {
      sVar4 = *param_3;
      uVar48 = (int)*param_5 * (int)sVar4;
                    /* try { // try from 00a95ff0 to 00b960bf has its CatchHandler @ 00a96110 */
      uVar3 = (ushort)(uVar48 >> 0xc);
      if ((int)uVar48 >> 0x1f != (int)uVar48 >> 0x1b) {
        uVar3 = (ushort)((int)uVar48 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar3;
      sVar5 = param_3[1];
      uVar48 = (int)*param_5 * (int)sVar5;
      uVar3 = (ushort)(uVar48 >> 0xc);
      if ((int)uVar48 >> 0x1f != (int)uVar48 >> 0x1b) {
        uVar3 = (ushort)((int)uVar48 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar3;
      sVar6 = param_3[2];
      uVar48 = (int)*param_5 * (int)sVar6;
      uVar3 = (ushort)(uVar48 >> 0xc);
      if ((int)uVar48 >> 0x1f != (int)uVar48 >> 0x1b) {
        uVar3 = (ushort)((int)uVar48 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar3;
      sVar7 = param_3[3];
      uVar48 = (int)*param_5 * (int)sVar7;
      uVar3 = (ushort)(uVar48 >> 0xc);
      if ((int)uVar48 >> 0x1f != (int)uVar48 >> 0x1b) {
        uVar3 = (ushort)((int)uVar48 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar3;
      sVar8 = param_3[4];
      uVar48 = (int)*param_5 * (int)sVar8;
      uVar3 = (ushort)(uVar48 >> 0xc);
      if ((int)uVar48 >> 0x1f != (int)uVar48 >> 0x1b) {
        uVar3 = (ushort)((int)uVar48 >> 0x1f) ^ 0x7fff;
      }
      param_1[4] = uVar3;
                    /* try { // try from 00a960c0 to 00b96123 has its CatchHandler @ 00a95e64 */
      param_2 = param_2 - 1;
      *param_4 = *param_4 +
                 ((((int)sVar5 + (int)sVar4 + (int)sVar6 + (int)sVar7 + (int)sVar8) * 0x1000) / 5 >>
                 0xc) * iVar9;
      param_3 = param_3 + 5;
      param_4 = param_4 + 1;
      param_1 = param_1 + 5;
    } while (param_2 != 0);
  }
                    /* WARNING: Read-only address (ram,0x0189cc60) is written */
                    /* WARNING: Read-only address (ram,0x0189cc70) is written */
                    /* WARNING: Read-only address (ram,0x0189cc80) is written */
                    /* WARNING: Read-only address (ram,0x0189cc90) is written */
                    /* WARNING: Read-only address (ram,0x0189cca0) is written */
                    /* WARNING: Read-only address (ram,0x0189ce40) is written */
                    /* WARNING: Read-only address (ram,0x0189ce50) is written */
                    /* WARNING: Read-only address (ram,0x0189ce60) is written */
                    /* WARNING: Read-only address (ram,0x0189ce70) is written */
                    /* WARNING: Read-only address (ram,0x0189ce80) is written */
                    /* WARNING: Read-only address (ram,0x0189ce90) is written */
  return;
}

