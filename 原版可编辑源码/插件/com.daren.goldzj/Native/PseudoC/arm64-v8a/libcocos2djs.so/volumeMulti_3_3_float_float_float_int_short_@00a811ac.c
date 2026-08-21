
/* void cocos2d::volumeMulti<3, 3, float, float, float, int, short>(float*, unsigned long, float
   const*, int*, float const*, short) */

void cocos2d::volumeMulti<3,3,float,float,float,int,short>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               short param_6)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  undefined1 auVar19 [16];
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
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
      auVar19._8_8_ = 0;
      auVar19._0_8_ = param_2 - 1;
                    /* catch() { ... } // from try @ 00a8152c with catch @ 00a815f0 */
      uVar10 = (param_2 - 1) * 0xc;
                    /* catch() { ... } // from try @ 00a81520 with catch @ 00a815f4 */
                    /* catch() { ... } // from try @ 00a81500 with catch @ 00a815f8 */
                    /* catch() { ... } // from try @ 00a81538 with catch @ 00a81608 */
      if ((((uVar10 < ~(ulong)(param_1 + 2) || uVar10 - ~(ulong)(param_1 + 2) == 0) &&
           (SUB168(auVar19 * ZEXT816(0xc),8) == 0)) &&
          (uVar10 < ~(ulong)(param_1 + 1) || uVar10 - ~(ulong)(param_1 + 1) == 0)) &&
         (uVar10 < ~(ulong)param_1 || uVar10 - ~(ulong)param_1 == 0)) {
                    /* catch() { ... } // from try @ 00a816c0 with catch @ 00a81660 */
        if ((param_3 + param_2 * 3 <= param_1 || param_1 + param_2 * 3 <= param_3) &&
           ((float *)((long)param_5 + 1U) <= param_1 || param_1 + param_2 * 3 <= param_5)) {
          uVar11 = param_2 & 0xfffffffffffffffc;
          pfVar1 = param_3 + uVar11 * 3;
          pfVar2 = param_1 + uVar11 * 3;
          uVar10 = uVar11;
          do {
            fVar15 = *param_3;
            fVar18 = param_3[1];
            fVar49 = param_3[2];
            fVar25 = param_3[3];
            fVar20 = param_3[4];
            fVar57 = param_3[5];
            fVar16 = param_3[6];
            fVar21 = param_3[7];
            fVar62 = param_3[8];
            fVar17 = param_3[9];
            fVar22 = param_3[10];
            fVar69 = param_3[0xb];
            param_3 = param_3 + 0xc;
            fVar74 = *param_5;
            uVar10 = uVar10 - 4;
                    /* try { // try from 00a816ac to 00b816bf has its CatchHandler @ 00a818d0 */
            *param_1 = *param_1 + fVar15 * fVar74;
            param_1[1] = param_1[1] + fVar18 * fVar74;
            param_1[2] = param_1[2] + fVar49 * fVar74;
            param_1[3] = param_1[3] + fVar25 * fVar74;
            param_1[4] = param_1[4] + fVar20 * fVar74;
            param_1[5] = param_1[5] + fVar57 * fVar74;
            param_1[6] = param_1[6] + fVar16 * fVar74;
            param_1[7] = param_1[7] + fVar21 * fVar74;
            param_1[8] = param_1[8] + fVar62 * fVar74;
            param_1[9] = param_1[9] + fVar17 * fVar74;
            param_1[10] = param_1[10] + fVar22 * fVar74;
            param_1[0xb] = param_1[0xb] + fVar69 * fVar74;
            param_1 = param_1 + 0xc;
          } while (uVar10 != 0);
          bVar8 = uVar11 == param_2;
          param_3 = pfVar1;
          param_2 = param_2 - uVar11;
          param_1 = pfVar2;
          if (bVar8) {
            return;
          }
        }
      }
    }
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + *param_3 * *param_5;
      param_1[1] = param_1[1] + param_3[1] * *param_5;
      param_1[2] = param_1[2] + param_3[2] * *param_5;
      param_3 = param_3 + 3;
      param_1 = param_1 + 3;
                    /* catch() { ... } // from try @ 00a812b0 with catch @ 00a8137c */
    } while (param_2 != 0);
  }
  else {
    iVar3 = (int)param_6;
    if (3 < param_2) {
      auVar23._8_8_ = 0;
      auVar23._0_8_ = param_2 - 1;
                    /* catch() { ... } // from try @ 00a812c8 with catch @ 00a81394 */
                    /* catch() { ... } // from try @ 00a81288 with catch @ 00a81398 */
                    /* catch() { ... } // from try @ 00a812d0 with catch @ 00a8139c */
      uVar10 = (param_2 - 1) * 0xc;
                    /* catch() { ... } // from try @ 00a812b8 with catch @ 00a813ac */
                    /* catch() { ... } // from try @ 00a81274 with catch @ 00a813c4 */
                    /* catch() { ... } // from try @ 00a81248 with catch @ 00a813c8 */
      if (((uVar10 < ~(ulong)(param_1 + 2) || uVar10 - ~(ulong)(param_1 + 2) == 0) &&
          (SUB168(auVar23 * ZEXT816(0xc),8) == 0)) &&
         ((uVar10 < ~(ulong)(param_1 + 1) || uVar10 - ~(ulong)(param_1 + 1) == 0 &&
          (uVar10 < ~(ulong)param_1 || uVar10 - ~(ulong)param_1 == 0)))) {
                    /* try { // try from 00a81418 to 00b8145b has its CatchHandler @ 00a81418
                       catch() { ... } // from try @ 00a81418 with catch @ 00a81418
                       catch() { ... } // from try @ 00a81468 with catch @ 00a81418 */
        if ((param_3 + param_2 * 3 <= param_1 || param_1 + param_2 * 3 <= param_3) &&
           ((float *)((long)param_5 + 1U) <= param_1 || param_1 + param_2 * 3 <= param_5)) {
          uVar11 = param_2 & 0xfffffffffffffffc;
          auVar19 = NEON_fmov(0xc1800000,4);
          auVar23 = NEON_fmov(0x41800000,4);
          auVar24 = NEON_fmov(0xbfe0000000000000,8);
          auVar26 = NEON_fmov(0x3fe0000000000000,8);
                    /* try { // try from 00a8145c to 00b81467 has its CatchHandler @ 00a81498 */
          pfVar1 = param_3 + uVar11 * 3;
          pfVar2 = param_1 + uVar11 * 3;
                    /* try { // try from 00a81468 to 00b814ab has its CatchHandler @ 00a81418 */
          piVar9 = param_4;
          uVar10 = uVar11;
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
            uVar10 = uVar10 - 4;
            fVar15 = auVar19._0_4_;
            auVar30._0_4_ = -(uint)(fVar49 <= fVar15);
            fVar25 = auVar19._4_4_;
            auVar30._4_4_ = -(uint)(fVar57 <= fVar25);
            fVar16 = auVar19._8_4_;
            auVar30._8_4_ = -(uint)(fVar62 <= fVar16);
            fVar17 = auVar19._12_4_;
            auVar30._12_4_ = -(uint)(fVar69 <= fVar17);
            fVar18 = auVar23._0_4_;
            iVar12 = -(uint)(fVar18 <= fVar49);
            fVar20 = auVar23._4_4_;
            iVar13 = -(uint)(fVar20 <= fVar57);
            fVar21 = auVar23._8_4_;
            iVar14 = -(uint)(fVar21 <= fVar62);
            fVar22 = auVar23._12_4_;
            iVar51 = -(uint)(fVar22 <= fVar69);
            auVar102._0_4_ = -(uint)(fVar74 <= fVar15);
            auVar102._4_4_ = -(uint)(fVar81 <= fVar25);
            auVar102._8_4_ = -(uint)(fVar86 <= fVar16);
            auVar102._12_4_ = -(uint)(fVar91 <= fVar17);
            iVar104 = -(uint)(fVar18 <= fVar74);
            iVar105 = -(uint)(fVar20 <= fVar81);
            iVar106 = -(uint)(fVar21 <= fVar86);
            iVar107 = -(uint)(fVar22 <= fVar91);
                    /* catch() { ... } // from try @ 00a8145c with catch @ 00a81498 */
            auVar97._0_8_ = (long)(int)-(uint)(0.0 < fVar62 * 1.3421773e+08);
            auVar97._8_8_ = (long)(int)-(uint)(0.0 < fVar69 * 1.3421773e+08);
            auVar75._0_8_ = (long)(int)-(uint)(0.0 < fVar49 * 1.3421773e+08);
            auVar75._8_8_ = (long)(int)-(uint)(0.0 < fVar57 * 1.3421773e+08);
                    /* try { // try from 00a814ac to 00b814ff has its CatchHandler @ 00a814ac
                       catch() { ... } // from try @ 00a814ac with catch @ 00a814ac
                       catch() { ... } // from try @ 00a8157c with catch @ 00a814ac */
            auVar108._0_4_ = -(uint)(fVar95 <= fVar15);
            auVar108._4_4_ = -(uint)(fVar98 <= fVar25);
            auVar108._8_4_ = -(uint)(fVar99 <= fVar16);
            auVar108._12_4_ = -(uint)(fVar100 <= fVar17);
            iVar110 = -(uint)(fVar18 <= fVar95);
            iVar111 = -(uint)(fVar20 <= fVar98);
            iVar112 = -(uint)(fVar21 <= fVar99);
            iVar113 = -(uint)(fVar22 <= fVar100);
            auVar76 = auVar24 ^ (auVar24 ^ auVar26) & auVar75;
            auVar27 = auVar24 ^ (auVar24 ^ auVar26) & auVar97;
            auVar96._0_8_ = (long)(int)-(uint)(0.0 < fVar86 * 1.3421773e+08);
            auVar96._8_8_ = (long)(int)-(uint)(0.0 < fVar91 * 1.3421773e+08);
            auVar114._0_8_ = (long)(int)-(uint)(0.0 < fVar74 * 1.3421773e+08);
            auVar114._8_8_ = (long)(int)-(uint)(0.0 < fVar81 * 1.3421773e+08);
            auVar115 = auVar24 ^ (auVar24 ^ auVar26) & auVar114;
            auVar97 = auVar24 ^ (auVar24 ^ auVar26) & auVar96;
            auVar116._0_8_ = (long)(int)-(uint)(0.0 < fVar99 * 1.3421773e+08);
            auVar116._8_8_ = (long)(int)-(uint)(0.0 < fVar100 * 1.3421773e+08);
            auVar117._0_8_ = (long)(int)-(uint)(0.0 < fVar95 * 1.3421773e+08);
            auVar117._8_8_ = (long)(int)-(uint)(0.0 < fVar98 * 1.3421773e+08);
                    /* try { // try from 00a81500 to 00b81517 has its CatchHandler @ 00a815f8 */
            auVar28 = auVar24 ^ (auVar24 ^ auVar26) & auVar117;
            auVar117 = auVar24 ^ (auVar24 ^ auVar26) & auVar116;
                    /* try { // try from 00a81520 to 00b8152b has its CatchHandler @ 00a815f4 */
            auVar31._0_4_ = (undefined4)(long)(auVar76._0_8_ + (double)(fVar49 * 1.3421773e+08));
            auVar31._4_4_ = (int)(long)(auVar76._8_8_ + (double)(fVar57 * 1.3421773e+08));
            auVar103._0_4_ = (undefined4)(long)(auVar115._0_8_ + (double)(fVar74 * 1.3421773e+08));
            auVar103._4_4_ = (int)(long)(auVar115._8_8_ + (double)(fVar81 * 1.3421773e+08));
            auVar31._8_4_ = (int)(long)(auVar27._0_8_ + (double)(fVar62 * 1.3421773e+08));
                    /* try { // try from 00a8152c to 00b81537 has its CatchHandler @ 00a815f0 */
            auVar31._12_4_ = (int)(long)(auVar27._8_8_ + (double)(fVar69 * 1.3421773e+08));
            auVar103._8_4_ = (int)(long)(auVar97._0_8_ + (double)(fVar86 * 1.3421773e+08));
            auVar103._12_4_ = (int)(long)(auVar97._8_8_ + (double)(fVar91 * 1.3421773e+08));
                    /* try { // try from 00a81538 to 00b8157b has its CatchHandler @ 00a81608 */
            auVar109._0_4_ = (undefined4)(long)(auVar28._0_8_ + (double)(fVar95 * 1.3421773e+08));
            auVar109._4_4_ = (int)(long)(auVar28._8_8_ + (double)(fVar98 * 1.3421773e+08));
            auVar109._8_4_ = (int)(long)(auVar117._0_8_ + (double)(fVar99 * 1.3421773e+08));
            auVar109._12_4_ = (int)(long)(auVar117._8_8_ + (double)(fVar100 * 1.3421773e+08));
            bVar32 = (byte)iVar12 & ~(byte)auVar30._0_4_;
            bVar33 = (byte)((uint)iVar12 >> 8) & ~(byte)((uint)auVar30._0_4_ >> 8);
            bVar34 = (byte)((uint)iVar12 >> 0x10) & ~(byte)((uint)auVar30._0_4_ >> 0x10);
            bVar35 = (byte)((uint)iVar12 >> 0x18) & ~(byte)((uint)auVar30._0_4_ >> 0x18);
            bVar36 = (byte)iVar13 & ~(byte)auVar30._4_4_;
            bVar37 = (byte)((uint)iVar13 >> 8) & ~(byte)((uint)auVar30._4_4_ >> 8);
            bVar38 = (byte)((uint)iVar13 >> 0x10) & ~(byte)((uint)auVar30._4_4_ >> 0x10);
            bVar39 = (byte)((uint)iVar13 >> 0x18) & ~(byte)((uint)auVar30._4_4_ >> 0x18);
            bVar40 = (byte)iVar14 & ~(byte)auVar30._8_4_;
            bVar41 = (byte)((uint)iVar14 >> 8) & ~(byte)((uint)auVar30._8_4_ >> 8);
            bVar42 = (byte)((uint)iVar14 >> 0x10) & ~(byte)((uint)auVar30._8_4_ >> 0x10);
            bVar43 = (byte)((uint)iVar14 >> 0x18) & ~(byte)((uint)auVar30._8_4_ >> 0x18);
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
            uVar4 = CONCAT13(bVar35,CONCAT12(bVar34,CONCAT11(bVar33,bVar32))) & 0x7fffffff;
            uVar5 = CONCAT13(bVar39,CONCAT12(bVar38,CONCAT11(bVar37,bVar36))) & 0x7fffffff;
            uVar6 = CONCAT13(bVar43,CONCAT12(bVar42,CONCAT11(bVar41,bVar40))) & 0x7fffffff;
            uVar7 = CONCAT13(bVar47,CONCAT12(bVar46,CONCAT11(bVar45,bVar44))) & 0x7fffffff;
            uVar52 = CONCAT44((int)(CONCAT17(bVar60,CONCAT16(bVar59,CONCAT15(bVar58,CONCAT14(bVar56,
                                                  uVar50)))) >> 0x20),uVar50) & 0x7fffffff7fffffff;
            uVar64 = CONCAT44((int)(CONCAT17(bVar72,CONCAT16(bVar71,CONCAT15(bVar70,CONCAT14(bVar68,
                                                  uVar63)))) >> 0x20),uVar63) & 0x7fffffff7fffffff;
            iVar14 = CONCAT13((byte)(uVar4 >> 0x18) | auVar31[3] & ~bVar35,
                              CONCAT12((byte)(uVar4 >> 0x10) | auVar31[2] & ~bVar34,
                                       CONCAT11((byte)(uVar4 >> 8) | auVar31[1] & ~bVar33,
                                                (byte)uVar4 | auVar31[0] & ~bVar32)));
            auVar29._0_8_ =
                 CONCAT17((byte)(uVar5 >> 0x18) | auVar31[7] & ~bVar39,
                          CONCAT16((byte)(uVar5 >> 0x10) | auVar31[6] & ~bVar38,
                                   CONCAT15((byte)(uVar5 >> 8) | auVar31[5] & ~bVar37,
                                            CONCAT14((byte)uVar5 | auVar31[4] & ~bVar36,iVar14))));
            auVar29[8] = (byte)uVar6 | auVar31[8] & ~bVar40;
            auVar29[9] = (byte)(uVar6 >> 8) | auVar31[9] & ~bVar41;
            auVar29[10] = (byte)(uVar6 >> 0x10) | auVar31[10] & ~bVar42;
            auVar29[0xb] = (byte)(uVar6 >> 0x18) | auVar31[0xb] & ~bVar43;
            auVar115[0xc] = (byte)uVar7 | auVar31[0xc] & ~bVar44;
            auVar115._0_12_ = auVar29;
            auVar115[0xd] = (byte)(uVar7 >> 8) | auVar31[0xd] & ~bVar45;
            auVar115[0xe] = (byte)(uVar7 >> 0x10) | auVar31[0xe] & ~bVar46;
            auVar115[0xf] = (byte)(uVar7 >> 0x18) | auVar31[0xf] & ~bVar47;
                    /* try { // try from 00a8157c to 00b8165f has its CatchHandler @ 00a814ac */
            iVar51 = CONCAT13(bVar79 & 0x7f | auVar109[3] & ~bVar79,
                              CONCAT12(bVar78 | auVar109[2] & ~bVar78,
                                       CONCAT11(bVar77 | auVar109[1] & ~bVar77,
                                                bVar73 | auVar109[0] & ~bVar73)));
            iVar13 = CONCAT13(bVar89 & 0x7f | auVar109[0xb] & ~bVar89,
                              CONCAT12(bVar88 | auVar109[10] & ~bVar88,
                                       CONCAT11(bVar87 | auVar109[9] & ~bVar87,
                                                bVar85 | auVar109[8] & ~bVar85)));
            iVar12 = iVar13 + CONCAT13((byte)(uVar64 >> 0x18) | auVar103[0xb] & ~bVar67,
                                       CONCAT12((byte)(uVar64 >> 0x10) | auVar103[10] & ~bVar66,
                                                CONCAT11((byte)(uVar64 >> 8) | auVar103[9] & ~bVar65
                                                         ,(byte)uVar64 | auVar103[8] & ~bVar61))) +
                              auVar29._8_4_;
            iVar13 = (int)(CONCAT17(bVar94 & 0x7f | auVar109[0xf] & ~bVar94,
                                    CONCAT16(bVar93 | auVar109[0xe] & ~bVar93,
                                             CONCAT15(bVar92 | auVar109[0xd] & ~bVar92,
                                                      CONCAT14(bVar90 | auVar109[0xc] & ~bVar90,
                                                               iVar13)))) >> 0x20) +
                     CONCAT13((byte)(uVar64 >> 0x38) | auVar103[0xf] & ~bVar72,
                              CONCAT12((byte)(uVar64 >> 0x30) | auVar103[0xe] & ~bVar71,
                                       CONCAT11((byte)(uVar64 >> 0x28) | auVar103[0xd] & ~bVar70,
                                                (byte)(uVar64 >> 0x20) | auVar103[0xc] & ~bVar68)))
                     + auVar115._12_4_;
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
            iVar12 = iVar12 / 3 + (iVar12 >> 0x1f);
            iVar13 = (int)(CONCAT14((char)(iVar13 / 0x3000000) + (char)(iVar13 >> 0x1f),
                                    (int)((ulong)((long)iVar13 * 0x55555556) >> 0x18)) >> 8);
            *(ulong *)(piVar9 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar9 + 2) >> 0x20) +
                          (iVar13 - (iVar13 >> 0x1f) >> 0xc) * iVar3,
                          (int)*(undefined8 *)(piVar9 + 2) +
                          (iVar12 - (iVar12 >> 0x1f) >> 0xc) * iVar3);
            *(ulong *)piVar9 =
                 CONCAT44((int)((ulong)*(undefined8 *)piVar9 >> 0x20) +
                          (((int)(CONCAT17(bVar84 & 0x7f | auVar109[7] & ~bVar84,
                                           CONCAT16(bVar83 | auVar109[6] & ~bVar83,
                                                    CONCAT15(bVar82 | auVar109[5] & ~bVar82,
                                                             CONCAT14(bVar80 | auVar109[4] & ~bVar80
                                                                      ,iVar51)))) >> 0x20) +
                           CONCAT13((byte)(uVar52 >> 0x38) | auVar103[7] & ~bVar60,
                                    CONCAT12((byte)(uVar52 >> 0x30) | auVar103[6] & ~bVar59,
                                             CONCAT11((byte)(uVar52 >> 0x28) | auVar103[5] & ~bVar58
                                                      ,(byte)(uVar52 >> 0x20) |
                                                       auVar103[4] & ~bVar56))) +
                           (int)((ulong)auVar29._0_8_ >> 0x20)) / 3 >> 0xc) * iVar3,
                          (int)*(undefined8 *)piVar9 +
                          ((iVar51 + CONCAT13((byte)(uVar52 >> 0x18) | auVar103[3] & ~bVar55,
                                              CONCAT12((byte)(uVar52 >> 0x10) |
                                                       auVar103[2] & ~bVar54,
                                                       CONCAT11((byte)(uVar52 >> 8) |
                                                                auVar103[1] & ~bVar53,
                                                                (byte)uVar52 | auVar103[0] & ~bVar48
                                                               ))) + iVar14) / 3 >> 0xc) * iVar3);
            piVar9 = piVar9 + 4;
          } while (uVar10 != 0);
          bVar8 = uVar11 == param_2;
          param_3 = pfVar1;
          param_4 = param_4 + uVar11;
          param_2 = param_2 - uVar11;
          param_1 = pfVar2;
          if (bVar8) {
            return;
          }
        }
      }
    }
    do {
      fVar25 = *param_3;
                    /* try { // try from 00a811f8 to 00b81247 has its CatchHandler @ 00a811f8
                       catch() { ... } // from try @ 00a811f8 with catch @ 00a811f8
                       catch() { ... } // from try @ 00a81300 with catch @ 00a811f8 */
      fVar15 = 0.5;
      if (fVar25 <= -16.0) {
        iVar12 = -0x80000000;
      }
      else if (16.0 <= fVar25) {
        iVar12 = 0x7fffffff;
      }
      else {
        fVar16 = fVar15;
        if (fVar25 * 1.3421773e+08 <= 0.0) {
          fVar16 = -0.5;
        }
        iVar12 = (int)(fVar16 + fVar25 * 1.3421773e+08);
      }
      *param_1 = fVar25 * *param_5 + *param_1;
      fVar25 = param_3[1];
                    /* try { // try from 00a81248 to 00b8125f has its CatchHandler @ 00a813c8 */
      if (fVar25 <= -16.0) {
        iVar13 = -0x80000000;
                    /* try { // try from 00a81274 to 00b81287 has its CatchHandler @ 00a813c4 */
      }
      else if (16.0 <= fVar25) {
        iVar13 = 0x7fffffff;
      }
      else {
        fVar16 = fVar15;
        if (fVar25 * 1.3421773e+08 <= 0.0) {
          fVar16 = -0.5;
        }
        iVar13 = (int)(fVar16 + fVar25 * 1.3421773e+08);
      }
                    /* try { // try from 00a81288 to 00b81297 has its CatchHandler @ 00a81398 */
      param_1[1] = fVar25 * *param_5 + param_1[1];
      fVar25 = param_3[2];
      if (fVar25 <= -16.0) {
        iVar14 = -0x80000000;
                    /* try { // try from 00a812c8 to 00b812cf has its CatchHandler @ 00a81394 */
      }
      else if (16.0 <= fVar25) {
        iVar14 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a812b0 to 00b812b7 has its CatchHandler @ 00a8137c */
        if (fVar25 * 1.3421773e+08 <= 0.0) {
          fVar15 = -0.5;
        }
                    /* try { // try from 00a812b8 to 00b812c7 has its CatchHandler @ 00a813ac */
        iVar14 = (int)(fVar15 + fVar25 * 1.3421773e+08);
      }
                    /* try { // try from 00a812d0 to 00b812ff has its CatchHandler @ 00a8139c */
      param_1[2] = fVar25 * *param_5 + param_1[2];
      param_2 = param_2 - 1;
                    /* try { // try from 00a81300 to 00b81417 has its CatchHandler @ 00a811f8 */
      *param_4 = *param_4 + ((iVar14 + iVar13 + iVar12) / 3 >> 0xc) * iVar3;
      param_3 = param_3 + 3;
      param_4 = param_4 + 1;
      param_1 = param_1 + 3;
    } while (param_2 != 0);
  }
  return;
}

