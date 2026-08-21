
/* void cocos2d::volumeMulti<3, 4, float, float, float, int, short>(float*, unsigned long, float
   const*, int*, float const*, short) */

void cocos2d::volumeMulti<3,4,float,float,float,int,short>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               short param_6)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  bool bVar6;
  int *piVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  undefined1 auVar18 [16];
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  undefined1 auVar23 [16];
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
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
  undefined1 auVar42 [16];
  byte bVar43;
  byte bVar47;
  byte bVar48;
  int iVar44;
  byte bVar49;
  byte bVar50;
  byte bVar52;
  byte bVar53;
  int iVar51;
  byte bVar54;
  ulong uVar46;
  byte bVar55;
  byte bVar59;
  byte bVar60;
  int iVar56;
  byte bVar61;
  byte bVar62;
  byte bVar64;
  byte bVar65;
  int iVar63;
  byte bVar66;
  ulong uVar58;
  byte bVar67;
  byte bVar71;
  byte bVar72;
  float fVar68;
  byte bVar73;
  byte bVar74;
  byte bVar76;
  byte bVar77;
  float fVar75;
  long lVar70;
  byte bVar78;
  byte bVar79;
  byte bVar83;
  byte bVar84;
  float fVar80;
  byte bVar85;
  byte bVar86;
  byte bVar88;
  byte bVar89;
  float fVar87;
  long lVar82;
  byte bVar90;
  byte bVar91;
  byte bVar97;
  byte bVar98;
  float fVar92;
  byte bVar99;
  byte bVar104;
  byte bVar109;
  undefined1 auVar93 [12];
  byte bVar100;
  byte bVar102;
  byte bVar103;
  float fVar101;
  byte bVar105;
  byte bVar107;
  byte bVar108;
  float fVar106;
  byte bVar110;
  byte bVar112;
  byte bVar113;
  float fVar111;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  byte bVar114;
  byte bVar115;
  byte bVar119;
  byte bVar120;
  float fVar116;
  byte bVar121;
  byte bVar122;
  byte bVar124;
  byte bVar125;
  float fVar123;
  byte bVar126;
  byte bVar127;
  byte bVar129;
  byte bVar130;
  float fVar128;
  byte bVar131;
  byte bVar132;
  byte bVar134;
  byte bVar135;
  float fVar133;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  byte bVar136;
  undefined1 uVar137;
  undefined1 uVar138;
  undefined1 uVar139;
  undefined1 uVar140;
  undefined1 uVar141;
  undefined1 uVar142;
  undefined1 uVar143;
  undefined1 uVar144;
  undefined1 uVar145;
  float fVar146;
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  int iVar151;
  int iVar152;
  int iVar153;
  int iVar154;
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  int iVar157;
  int iVar158;
  int iVar159;
  int iVar160;
  undefined4 uVar45;
  undefined4 uVar57;
  undefined4 uVar69;
  undefined4 uVar81;
  undefined1 auVar96 [16];
  
  if (param_4 == (int *)0x0) {
    if (3 < param_2) {
      uVar8 = (param_2 - 1) * 0x10;
                    /* try { // try from 00a81bb8 to 00b81bbf has its CatchHandler @ 00a81c48 */
                    /* try { // try from 00a81bd0 to 00b81bd3 has its CatchHandler @ 00a81c40 */
                    /* try { // try from 00a81be4 to 00b81be7 has its CatchHandler @ 00a81c44 */
                    /* try { // try from 00a81be8 to 00b81c07 has its CatchHandler @ 00a81c50 */
      if ((((uVar8 < ~(ulong)(param_1 + 3) || uVar8 - ~(ulong)(param_1 + 3) == 0) &&
           (param_2 - 1 >> 0x3c == 0)) &&
          (uVar8 < ~(ulong)(param_1 + 2) || uVar8 - ~(ulong)(param_1 + 2) == 0)) &&
         ((uVar8 < ~(ulong)(param_1 + 1) || uVar8 - ~(ulong)(param_1 + 1) == 0 &&
          (uVar8 < ~(ulong)param_1 || uVar8 - ~(ulong)param_1 == 0)))) {
                    /* try { // try from 00a81c08 to 00b81c6b has its CatchHandler @ 00a81b7c */
        if ((param_3 + param_2 * 4 <= param_1 || param_1 + param_2 * 4 <= param_3) &&
           ((float *)((long)param_5 + 1U) <= param_1 || param_1 + param_2 * 4 <= param_5)) {
                    /* catch() { ... } // from try @ 00a81bd0 with catch @ 00a81c40 */
          uVar10 = param_2 & 0xfffffffffffffffc;
                    /* catch() { ... } // from try @ 00a81be4 with catch @ 00a81c44 */
                    /* catch() { ... } // from try @ 00a81bb8 with catch @ 00a81c48 */
          pfVar1 = param_3 + uVar10 * 4;
                    /* catch() { ... } // from try @ 00a81be8 with catch @ 00a81c50 */
          pfVar2 = param_1 + uVar10 * 4;
          uVar8 = uVar10;
          do {
            fVar28 = *param_3;
            fVar17 = param_3[1];
            fVar22 = param_3[2];
            fVar68 = param_3[3];
            fVar14 = param_3[4];
            fVar19 = param_3[5];
            fVar24 = param_3[6];
            fVar75 = param_3[7];
            fVar15 = param_3[8];
            fVar20 = param_3[9];
            fVar25 = param_3[10];
            fVar80 = param_3[0xb];
            fVar16 = param_3[0xc];
            fVar21 = param_3[0xd];
            fVar26 = param_3[0xe];
            fVar87 = param_3[0xf];
            param_3 = param_3 + 0x10;
            fVar92 = *param_5;
            uVar8 = uVar8 - 4;
            *param_1 = *param_1 + fVar28 * fVar92;
            param_1[1] = param_1[1] + fVar17 * fVar92;
            param_1[2] = param_1[2] + fVar22 * fVar92;
            param_1[3] = param_1[3] + fVar68 * fVar92;
            param_1[4] = param_1[4] + fVar14 * fVar92;
            param_1[5] = param_1[5] + fVar19 * fVar92;
            param_1[6] = param_1[6] + fVar24 * fVar92;
            param_1[7] = param_1[7] + fVar75 * fVar92;
            param_1[8] = param_1[8] + fVar15 * fVar92;
            param_1[9] = param_1[9] + fVar20 * fVar92;
            param_1[10] = param_1[10] + fVar25 * fVar92;
            param_1[0xb] = param_1[0xb] + fVar80 * fVar92;
            param_1[0xc] = param_1[0xc] + fVar16 * fVar92;
            param_1[0xd] = param_1[0xd] + fVar21 * fVar92;
            param_1[0xe] = param_1[0xe] + fVar26 * fVar92;
            param_1[0xf] = param_1[0xf] + fVar87 * fVar92;
            param_1 = param_1 + 0x10;
          } while (uVar8 != 0);
          bVar6 = uVar10 == param_2;
          param_3 = pfVar1;
          param_2 = param_2 - uVar10;
          param_1 = pfVar2;
                    /* try { // try from 00a81c94 to 00b81cef has its CatchHandler @ 00a81c94
                       catch() { ... } // from try @ 00a81c94 with catch @ 00a81c94
                       catch() { ... } // from try @ 00a81f04 with catch @ 00a81c94
                       catch() { ... } // from try @ 00a82004 with catch @ 00a81c94 */
          if (bVar6) {
            return;
          }
        }
      }
    }
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + *param_3 * *param_5;
      param_1[1] = param_1[1] + param_3[1] * *param_5;
                    /* catch() { ... } // from try @ 00a816ac with catch @ 00a818d0 */
      param_1[2] = param_1[2] + param_3[2] * *param_5;
      param_1[3] = param_1[3] + param_3[3] * *param_5;
                    /* try { // try from 00a818ec to 00b81913 has its CatchHandler @ 00a818ec
                       catch() { ... } // from try @ 00a818ec with catch @ 00a818ec
                       catch() { ... } // from try @ 00a81974 with catch @ 00a818ec */
      param_3 = param_3 + 4;
      param_1 = param_1 + 4;
    } while (param_2 != 0);
  }
  else {
    iVar3 = (int)param_6;
    if (3 < param_2) {
      uVar8 = (param_2 - 1) * 0x10;
                    /* try { // try from 00a81914 to 00b81927 has its CatchHandler @ 00a819b8 */
                    /* try { // try from 00a8192c to 00b8193b has its CatchHandler @ 00a819b4 */
                    /* try { // try from 00a8193c to 00b8195f has its CatchHandler @ 00a819a4 */
      if (((uVar8 < ~(ulong)(param_1 + 3) || uVar8 - ~(ulong)(param_1 + 3) == 0) &&
          (param_2 - 1 >> 0x3c == 0)) &&
         ((uVar8 < ~(ulong)(param_1 + 2) || uVar8 - ~(ulong)(param_1 + 2) == 0 &&
          ((uVar8 < ~(ulong)(param_1 + 1) || uVar8 - ~(ulong)(param_1 + 1) == 0 &&
           (uVar8 < ~(ulong)param_1 || uVar8 - ~(ulong)param_1 == 0)))))) {
                    /* try { // try from 00a81968 to 00b81973 has its CatchHandler @ 00a819bc */
                    /* try { // try from 00a81974 to 00b819cf has its CatchHandler @ 00a818ec */
        if ((param_3 + param_2 * 4 <= param_1 || param_1 + param_2 * 4 <= param_3) &&
           ((float *)((long)param_5 + 1U) <= param_1 || param_1 + param_2 * 4 <= param_5)) {
                    /* catch() { ... } // from try @ 00a8193c with catch @ 00a819a4 */
          uVar10 = param_2 & 0xfffffffffffffffc;
          auVar18 = NEON_fmov(0xc1800000,4);
                    /* catch() { ... } // from try @ 00a8192c with catch @ 00a819b4 */
          auVar23 = NEON_fmov(0x41800000,4);
                    /* catch() { ... } // from try @ 00a81914 with catch @ 00a819b8 */
                    /* catch() { ... } // from try @ 00a81968 with catch @ 00a819bc */
          auVar27 = NEON_fmov(0xbfe0000000000000,8);
          auVar29 = NEON_fmov(0x3fe0000000000000,8);
          pfVar1 = param_3 + uVar10 * 4;
          pfVar2 = param_1 + uVar10 * 4;
          piVar7 = param_4;
          uVar8 = uVar10;
          do {
            fVar68 = *param_3;
            fVar92 = param_3[1];
            fVar116 = param_3[2];
            fVar28 = param_3[3];
            fVar75 = param_3[4];
            fVar101 = param_3[5];
            fVar123 = param_3[6];
            fVar14 = param_3[7];
            fVar80 = param_3[8];
            fVar106 = param_3[9];
            fVar128 = param_3[10];
            fVar15 = param_3[0xb];
            fVar87 = param_3[0xc];
            fVar111 = param_3[0xd];
            fVar133 = param_3[0xe];
            fVar16 = param_3[0xf];
            param_3 = param_3 + 0x10;
            fVar146 = *param_5;
            uVar8 = uVar8 - 4;
            fVar17 = auVar18._0_4_;
            auVar31._0_4_ = -(uint)(fVar68 <= fVar17);
            fVar19 = auVar18._4_4_;
            auVar31._4_4_ = -(uint)(fVar75 <= fVar19);
            fVar20 = auVar18._8_4_;
            auVar31._8_4_ = -(uint)(fVar80 <= fVar20);
            fVar21 = auVar18._12_4_;
            auVar31._12_4_ = -(uint)(fVar87 <= fVar21);
            fVar22 = auVar23._0_4_;
            iVar44 = -(uint)(fVar22 <= fVar68);
            fVar24 = auVar23._4_4_;
            iVar51 = -(uint)(fVar24 <= fVar75);
            fVar25 = auVar23._8_4_;
            iVar56 = -(uint)(fVar25 <= fVar80);
            fVar26 = auVar23._12_4_;
            iVar63 = -(uint)(fVar26 <= fVar87);
            auVar149._0_4_ = -(uint)(fVar92 <= fVar17);
            auVar149._4_4_ = -(uint)(fVar101 <= fVar19);
            auVar149._8_4_ = -(uint)(fVar106 <= fVar20);
            auVar149._12_4_ = -(uint)(fVar111 <= fVar21);
            iVar151 = -(uint)(fVar22 <= fVar92);
            iVar152 = -(uint)(fVar24 <= fVar101);
            iVar153 = -(uint)(fVar25 <= fVar106);
            iVar154 = -(uint)(fVar26 <= fVar111);
            auVar39._0_8_ = (long)(int)-(uint)(0.0 < fVar80 * 1.3421773e+08);
            auVar39._8_8_ = (long)(int)-(uint)(0.0 < fVar87 * 1.3421773e+08);
            auVar94._0_8_ = (long)(int)-(uint)(0.0 < fVar68 * 1.3421773e+08);
            auVar94._8_8_ = (long)(int)-(uint)(0.0 < fVar75 * 1.3421773e+08);
            auVar155._0_4_ = -(uint)(fVar116 <= fVar17);
            auVar155._4_4_ = -(uint)(fVar123 <= fVar19);
            auVar155._8_4_ = -(uint)(fVar128 <= fVar20);
            auVar155._12_4_ = -(uint)(fVar133 <= fVar21);
            iVar157 = -(uint)(fVar22 <= fVar116);
            iVar158 = -(uint)(fVar24 <= fVar123);
            iVar159 = -(uint)(fVar25 <= fVar128);
            iVar160 = -(uint)(fVar26 <= fVar133);
            auVar33._0_4_ = -(uint)(fVar28 <= fVar17);
            auVar33._4_4_ = -(uint)(fVar14 <= fVar19);
            auVar33._8_4_ = -(uint)(fVar15 <= fVar20);
            auVar33._12_4_ = -(uint)(fVar16 <= fVar21);
            iVar9 = -(uint)(fVar22 <= fVar28);
            iVar11 = -(uint)(fVar24 <= fVar14);
            iVar12 = -(uint)(fVar25 <= fVar15);
            iVar13 = -(uint)(fVar26 <= fVar16);
                    /* try { // try from 00a81a3c to 00b81a6f has its CatchHandler @ 00a81a3c
                       catch() { ... } // from try @ 00a81a3c with catch @ 00a81a3c
                       catch() { ... } // from try @ 00a81a84 with catch @ 00a81a3c */
            auVar95 = auVar27 ^ (auVar27 ^ auVar29) & auVar94;
            auVar117._0_8_ = (long)(int)-(uint)(0.0 < fVar106 * 1.3421773e+08);
            auVar117._8_8_ = (long)(int)-(uint)(0.0 < fVar111 * 1.3421773e+08);
            auVar147._0_8_ = (long)(int)-(uint)(0.0 < fVar92 * 1.3421773e+08);
            auVar147._8_8_ = (long)(int)-(uint)(0.0 < fVar101 * 1.3421773e+08);
            auVar148 = auVar27 ^ (auVar27 ^ auVar29) & auVar147;
            auVar40 = auVar27 ^ (auVar27 ^ auVar29) & auVar39;
            auVar34._0_8_ = (long)(int)-(uint)(0.0 < fVar128 * 1.3421773e+08);
            auVar34._8_8_ = (long)(int)-(uint)(0.0 < fVar133 * 1.3421773e+08);
                    /* try { // try from 00a81a70 to 00b81a77 has its CatchHandler @ 00a81aa8 */
            auVar118 = auVar27 ^ (auVar27 ^ auVar29) & auVar117;
                    /* try { // try from 00a81a80 to 00b81a83 has its CatchHandler @ 00a81a98 */
            auVar37._0_8_ = (long)(int)-(uint)(0.0 < fVar116 * 1.3421773e+08);
            auVar37._8_8_ = (long)(int)-(uint)(0.0 < fVar123 * 1.3421773e+08);
                    /* try { // try from 00a81a84 to 00b81abb has its CatchHandler @ 00a81a3c */
            auVar35 = auVar27 ^ (auVar27 ^ auVar29) & auVar34;
            auVar36._0_8_ = (long)(int)-(uint)(0.0 < fVar15 * 1.3421773e+08);
            auVar36._8_8_ = (long)(int)-(uint)(0.0 < fVar16 * 1.3421773e+08);
            auVar41._0_8_ = (long)(int)-(uint)(0.0 < fVar28 * 1.3421773e+08);
            auVar41._8_8_ = (long)(int)-(uint)(0.0 < fVar14 * 1.3421773e+08);
                    /* catch() { ... } // from try @ 00a81a80 with catch @ 00a81a98 */
            auVar38 = auVar27 ^ (auVar27 ^ auVar29) & auVar37;
                    /* catch() { ... } // from try @ 00a81a70 with catch @ 00a81aa8 */
            auVar42 = auVar27 ^ (auVar27 ^ auVar29) & auVar41;
            auVar32._0_4_ = (undefined4)(long)(auVar95._0_8_ + (double)(fVar68 * 1.3421773e+08));
            auVar32._4_4_ = (int)(long)(auVar95._8_8_ + (double)(fVar75 * 1.3421773e+08));
                    /* try { // try from 00a81abc to 00b81af3 has its CatchHandler @ 00a81abc
                       catch() { ... } // from try @ 00a81abc with catch @ 00a81abc
                       catch() { ... } // from try @ 00a81afc with catch @ 00a81abc */
            auVar150._0_4_ = (undefined4)(long)(auVar148._0_8_ + (double)(fVar92 * 1.3421773e+08));
            auVar150._4_4_ = (int)(long)(auVar148._8_8_ + (double)(fVar101 * 1.3421773e+08));
            auVar32._8_4_ = (int)(long)(auVar40._0_8_ + (double)(fVar80 * 1.3421773e+08));
            auVar32._12_4_ = (int)(long)(auVar40._8_8_ + (double)(fVar87 * 1.3421773e+08));
            auVar150._8_4_ = (int)(long)(auVar118._0_8_ + (double)(fVar106 * 1.3421773e+08));
            auVar150._12_4_ = (int)(long)(auVar118._8_8_ + (double)(fVar111 * 1.3421773e+08));
            auVar40 = auVar27 ^ (auVar27 ^ auVar29) & auVar36;
            auVar156._0_4_ = (undefined4)(long)(auVar38._0_8_ + (double)(fVar116 * 1.3421773e+08));
            auVar156._4_4_ = (int)(long)(auVar38._8_8_ + (double)(fVar123 * 1.3421773e+08));
            auVar156._8_4_ = (int)(long)(auVar35._0_8_ + (double)(fVar128 * 1.3421773e+08));
            auVar156._12_4_ = (int)(long)(auVar35._8_8_ + (double)(fVar133 * 1.3421773e+08));
            lVar5 = (long)(auVar42._8_8_ + (double)(fVar14 * 1.3421773e+08));
            lVar70 = (long)(auVar40._0_8_ + (double)(fVar15 * 1.3421773e+08));
            lVar82 = (long)(auVar40._8_8_ + (double)(fVar16 * 1.3421773e+08));
                    /* try { // try from 00a81af4 to 00b81afb has its CatchHandler @ 00a81b0c */
            uVar137 = (undefined1)((ulong)lVar5 >> 8);
            uVar138 = (undefined1)((ulong)lVar5 >> 0x10);
            uVar139 = (undefined1)((ulong)lVar5 >> 0x18);
            uVar140 = (undefined1)((ulong)lVar70 >> 8);
            uVar141 = (undefined1)((ulong)lVar70 >> 0x10);
            uVar142 = (undefined1)((ulong)lVar70 >> 0x18);
            uVar143 = (undefined1)((ulong)lVar82 >> 8);
            uVar144 = (undefined1)((ulong)lVar82 >> 0x10);
            uVar145 = (undefined1)((ulong)lVar82 >> 0x18);
                    /* try { // try from 00a81afc to 00b81b1f has its CatchHandler @ 00a81abc */
            bVar43 = (byte)iVar44 & ~(byte)auVar31._0_4_;
            bVar47 = (byte)((uint)iVar44 >> 8) & ~(byte)((uint)auVar31._0_4_ >> 8);
            bVar48 = (byte)((uint)iVar44 >> 0x10) & ~(byte)((uint)auVar31._0_4_ >> 0x10);
            bVar49 = (byte)((uint)iVar44 >> 0x18) & ~(byte)((uint)auVar31._0_4_ >> 0x18);
            uVar45 = CONCAT13(bVar49,CONCAT12(bVar48,CONCAT11(bVar47,bVar43)));
            bVar50 = (byte)iVar51 & ~(byte)auVar31._4_4_;
            bVar52 = (byte)((uint)iVar51 >> 8) & ~(byte)((uint)auVar31._4_4_ >> 8);
            bVar53 = (byte)((uint)iVar51 >> 0x10) & ~(byte)((uint)auVar31._4_4_ >> 0x10);
            bVar54 = (byte)((uint)iVar51 >> 0x18) & ~(byte)((uint)auVar31._4_4_ >> 0x18);
            bVar55 = (byte)iVar56 & ~(byte)auVar31._8_4_;
            bVar59 = (byte)((uint)iVar56 >> 8) & ~(byte)((uint)auVar31._8_4_ >> 8);
            bVar60 = (byte)((uint)iVar56 >> 0x10) & ~(byte)((uint)auVar31._8_4_ >> 0x10);
            bVar61 = (byte)((uint)iVar56 >> 0x18) & ~(byte)((uint)auVar31._8_4_ >> 0x18);
            uVar57 = CONCAT13(bVar61,CONCAT12(bVar60,CONCAT11(bVar59,bVar55)));
            bVar62 = (byte)iVar63 & ~(byte)auVar31._12_4_;
            bVar64 = (byte)((uint)iVar63 >> 8) & ~(byte)((uint)auVar31._12_4_ >> 8);
            bVar65 = (byte)((uint)iVar63 >> 0x10) & ~(byte)((uint)auVar31._12_4_ >> 0x10);
            bVar66 = (byte)((uint)iVar63 >> 0x18) & ~(byte)((uint)auVar31._12_4_ >> 0x18);
            auVar35._8_4_ = 0x80000000;
            auVar35._0_8_ = 0x8000000080000000;
            auVar35._12_4_ = 0x80000000;
            auVar32 = auVar32 ^ (auVar32 ^ auVar35) & auVar31;
            bVar67 = (byte)iVar151 & ~(byte)auVar149._0_4_;
            bVar71 = (byte)((uint)iVar151 >> 8) & ~(byte)((uint)auVar149._0_4_ >> 8);
            bVar72 = (byte)((uint)iVar151 >> 0x10) & ~(byte)((uint)auVar149._0_4_ >> 0x10);
            bVar73 = (byte)((uint)iVar151 >> 0x18) & ~(byte)((uint)auVar149._0_4_ >> 0x18);
            uVar69 = CONCAT13(bVar73,CONCAT12(bVar72,CONCAT11(bVar71,bVar67)));
            bVar74 = (byte)iVar152 & ~(byte)auVar149._4_4_;
            bVar76 = (byte)((uint)iVar152 >> 8) & ~(byte)((uint)auVar149._4_4_ >> 8);
            bVar77 = (byte)((uint)iVar152 >> 0x10) & ~(byte)((uint)auVar149._4_4_ >> 0x10);
            bVar78 = (byte)((uint)iVar152 >> 0x18) & ~(byte)((uint)auVar149._4_4_ >> 0x18);
            bVar79 = (byte)iVar153 & ~(byte)auVar149._8_4_;
            bVar83 = (byte)((uint)iVar153 >> 8) & ~(byte)((uint)auVar149._8_4_ >> 8);
            bVar84 = (byte)((uint)iVar153 >> 0x10) & ~(byte)((uint)auVar149._8_4_ >> 0x10);
            bVar85 = (byte)((uint)iVar153 >> 0x18) & ~(byte)((uint)auVar149._8_4_ >> 0x18);
            uVar81 = CONCAT13(bVar85,CONCAT12(bVar84,CONCAT11(bVar83,bVar79)));
            bVar86 = (byte)iVar154 & ~(byte)auVar149._12_4_;
            bVar88 = (byte)((uint)iVar154 >> 8) & ~(byte)((uint)auVar149._12_4_ >> 8);
            bVar89 = (byte)((uint)iVar154 >> 0x10) & ~(byte)((uint)auVar149._12_4_ >> 0x10);
            bVar90 = (byte)((uint)iVar154 >> 0x18) & ~(byte)((uint)auVar149._12_4_ >> 0x18);
            auVar40._8_4_ = 0x80000000;
            auVar40._0_8_ = 0x8000000080000000;
            auVar40._12_4_ = 0x80000000;
            auVar150 = auVar150 ^ (auVar150 ^ auVar40) & auVar149;
                    /* catch() { ... } // from try @ 00a81af4 with catch @ 00a81b0c */
            bVar91 = (byte)iVar157 & ~(byte)auVar155._0_4_;
            bVar97 = (byte)((uint)iVar157 >> 8) & ~(byte)((uint)auVar155._0_4_ >> 8);
            bVar98 = (byte)((uint)iVar157 >> 0x10) & ~(byte)((uint)auVar155._0_4_ >> 0x10);
            bVar99 = (byte)((uint)iVar157 >> 0x18) & ~(byte)((uint)auVar155._0_4_ >> 0x18);
            bVar100 = (byte)iVar158 & ~(byte)auVar155._4_4_;
            bVar102 = (byte)((uint)iVar158 >> 8) & ~(byte)((uint)auVar155._4_4_ >> 8);
            bVar103 = (byte)((uint)iVar158 >> 0x10) & ~(byte)((uint)auVar155._4_4_ >> 0x10);
            bVar104 = (byte)((uint)iVar158 >> 0x18) & ~(byte)((uint)auVar155._4_4_ >> 0x18);
            bVar105 = (byte)iVar159 & ~(byte)auVar155._8_4_;
            bVar107 = (byte)((uint)iVar159 >> 8) & ~(byte)((uint)auVar155._8_4_ >> 8);
            bVar108 = (byte)((uint)iVar159 >> 0x10) & ~(byte)((uint)auVar155._8_4_ >> 0x10);
            bVar109 = (byte)((uint)iVar159 >> 0x18) & ~(byte)((uint)auVar155._8_4_ >> 0x18);
            bVar110 = (byte)iVar160 & ~(byte)auVar155._12_4_;
            bVar112 = (byte)((uint)iVar160 >> 8) & ~(byte)((uint)auVar155._12_4_ >> 8);
            bVar113 = (byte)((uint)iVar160 >> 0x10) & ~(byte)((uint)auVar155._12_4_ >> 0x10);
            bVar114 = (byte)((uint)iVar160 >> 0x18) & ~(byte)((uint)auVar155._12_4_ >> 0x18);
            auVar38._8_4_ = 0x80000000;
            auVar38._0_8_ = 0x8000000080000000;
            auVar38._12_4_ = 0x80000000;
            auVar156 = auVar156 ^ (auVar156 ^ auVar38) & auVar155;
            bVar115 = (byte)iVar9 & ~(byte)auVar33._0_4_;
            bVar119 = (byte)((uint)iVar9 >> 8) & ~(byte)((uint)auVar33._0_4_ >> 8);
            bVar120 = (byte)((uint)iVar9 >> 0x10) & ~(byte)((uint)auVar33._0_4_ >> 0x10);
            bVar121 = (byte)((uint)iVar9 >> 0x18) & ~(byte)((uint)auVar33._0_4_ >> 0x18);
            bVar122 = (byte)iVar11 & ~(byte)auVar33._4_4_;
            bVar124 = (byte)((uint)iVar11 >> 8) & ~(byte)((uint)auVar33._4_4_ >> 8);
            bVar125 = (byte)((uint)iVar11 >> 0x10) & ~(byte)((uint)auVar33._4_4_ >> 0x10);
            bVar126 = (byte)((uint)iVar11 >> 0x18) & ~(byte)((uint)auVar33._4_4_ >> 0x18);
            bVar127 = (byte)iVar12 & ~(byte)auVar33._8_4_;
            bVar129 = (byte)((uint)iVar12 >> 8) & ~(byte)((uint)auVar33._8_4_ >> 8);
            bVar130 = (byte)((uint)iVar12 >> 0x10) & ~(byte)((uint)auVar33._8_4_ >> 0x10);
            bVar131 = (byte)((uint)iVar12 >> 0x18) & ~(byte)((uint)auVar33._8_4_ >> 0x18);
            bVar132 = (byte)iVar13 & ~(byte)auVar33._12_4_;
            bVar134 = (byte)((uint)iVar13 >> 8) & ~(byte)((uint)auVar33._12_4_ >> 8);
            bVar135 = (byte)((uint)iVar13 >> 0x10) & ~(byte)((uint)auVar33._12_4_ >> 0x10);
            bVar136 = (byte)((uint)iVar13 >> 0x18) & ~(byte)((uint)auVar33._12_4_ >> 0x18);
            auVar95._8_4_ = 0x80000000;
            auVar95._0_8_ = 0x8000000080000000;
            auVar95._12_4_ = 0x80000000;
            uVar4 = (undefined4)(long)(auVar42._0_8_ + (double)(fVar28 * 1.3421773e+08));
            auVar42[4] = (char)lVar5;
            auVar42._0_4_ = uVar4;
            auVar42[5] = uVar137;
            auVar42[6] = uVar138;
            auVar42[7] = uVar139;
            auVar42[8] = (char)lVar70;
            auVar42[9] = uVar140;
            auVar42[10] = uVar141;
            auVar42[0xb] = uVar142;
            auVar42[0xc] = (char)lVar82;
            auVar42[0xd] = uVar143;
            auVar42[0xe] = uVar144;
            auVar42[0xf] = uVar145;
            auVar118[4] = (char)lVar5;
            auVar118._0_4_ = uVar4;
            auVar118[5] = uVar137;
            auVar118[6] = uVar138;
            auVar118[7] = uVar139;
            auVar118[8] = (char)lVar70;
            auVar118[9] = uVar140;
            auVar118[10] = uVar141;
            auVar118[0xb] = uVar142;
            auVar118[0xc] = (char)lVar82;
            auVar118[0xd] = uVar143;
            auVar118[0xe] = uVar144;
            auVar118[0xf] = uVar145;
            auVar118 = auVar118 ^ (auVar42 ^ auVar95) & auVar33;
            uVar46 = CONCAT44((int)(CONCAT17(bVar54,CONCAT16(bVar53,CONCAT15(bVar52,CONCAT14(bVar50,
                                                  uVar45)))) >> 0x20),uVar45) & 0x7fffffff7fffffff;
            uVar58 = CONCAT44((int)(CONCAT17(bVar66,CONCAT16(bVar65,CONCAT15(bVar64,CONCAT14(bVar62,
                                                  uVar57)))) >> 0x20),uVar57) & 0x7fffffff7fffffff;
            iVar9 = CONCAT13((byte)(uVar46 >> 0x18) | auVar32[3] & ~bVar49,
                             CONCAT12((byte)(uVar46 >> 0x10) | auVar32[2] & ~bVar48,
                                      CONCAT11((byte)(uVar46 >> 8) | auVar32[1] & ~bVar47,
                                               (byte)uVar46 | auVar32[0] & ~bVar43)));
            auVar30._0_8_ =
                 CONCAT17((byte)(uVar46 >> 0x38) | auVar32[7] & ~bVar54,
                          CONCAT16((byte)(uVar46 >> 0x30) | auVar32[6] & ~bVar53,
                                   CONCAT15((byte)(uVar46 >> 0x28) | auVar32[5] & ~bVar52,
                                            CONCAT14((byte)(uVar46 >> 0x20) | auVar32[4] & ~bVar50,
                                                     iVar9))));
            auVar30[8] = (byte)uVar58 | auVar32[8] & ~bVar55;
            auVar30[9] = (byte)(uVar58 >> 8) | auVar32[9] & ~bVar59;
            auVar30[10] = (byte)(uVar58 >> 0x10) | auVar32[10] & ~bVar60;
            auVar30[0xb] = (byte)(uVar58 >> 0x18) | auVar32[0xb] & ~bVar61;
            auVar148[0xc] = (byte)(uVar58 >> 0x20) | auVar32[0xc] & ~bVar62;
            auVar148._0_12_ = auVar30;
            auVar148[0xd] = (byte)(uVar58 >> 0x28) | auVar32[0xd] & ~bVar64;
            auVar148[0xe] = (byte)(uVar58 >> 0x30) | auVar32[0xe] & ~bVar65;
            auVar148[0xf] = (byte)(uVar58 >> 0x38) | auVar32[0xf] & ~bVar66;
            uVar46 = CONCAT44((int)(CONCAT17(bVar78,CONCAT16(bVar77,CONCAT15(bVar76,CONCAT14(bVar74,
                                                  uVar69)))) >> 0x20),uVar69) & 0x7fffffff7fffffff;
            uVar58 = CONCAT44((int)(CONCAT17(bVar90,CONCAT16(bVar89,CONCAT15(bVar88,CONCAT14(bVar86,
                                                  uVar81)))) >> 0x20),uVar81) & 0x7fffffff7fffffff;
            iVar12 = CONCAT13((byte)(uVar46 >> 0x18) | auVar150[3] & ~bVar73,
                              CONCAT12((byte)(uVar46 >> 0x10) | auVar150[2] & ~bVar72,
                                       CONCAT11((byte)(uVar46 >> 8) | auVar150[1] & ~bVar71,
                                                (byte)uVar46 | auVar150[0] & ~bVar67)));
            iVar13 = CONCAT13((byte)(uVar58 >> 0x18) | auVar150[0xb] & ~bVar85,
                              CONCAT12((byte)(uVar58 >> 0x10) | auVar150[10] & ~bVar84,
                                       CONCAT11((byte)(uVar58 >> 8) | auVar150[9] & ~bVar83,
                                                (byte)uVar58 | auVar150[8] & ~bVar79)));
            iVar44 = CONCAT13(bVar99 & 0x7f | auVar156[3] & ~bVar99,
                              CONCAT12(bVar98 | auVar156[2] & ~bVar98,
                                       CONCAT11(bVar97 | auVar156[1] & ~bVar97,
                                                bVar91 | auVar156[0] & ~bVar91)));
            iVar51 = CONCAT13(bVar109 & 0x7f | auVar156[0xb] & ~bVar109,
                              CONCAT12(bVar108 | auVar156[10] & ~bVar108,
                                       CONCAT11(bVar107 | auVar156[9] & ~bVar107,
                                                bVar105 | auVar156[8] & ~bVar105)));
            iVar11 = CONCAT13(bVar121 & 0x7f | auVar118[3] & ~bVar121,
                              CONCAT12(bVar120 | auVar118[2] & ~bVar120,
                                       CONCAT11(bVar119 | auVar118[1] & ~bVar119,
                                                bVar115 | auVar118[0] & ~bVar115)));
            auVar93._0_8_ =
                 CONCAT17(bVar126 & 0x7f | auVar118[7] & ~bVar126,
                          CONCAT16(bVar125 | auVar118[6] & ~bVar125,
                                   CONCAT15(bVar124 | auVar118[5] & ~bVar124,
                                            CONCAT14(bVar122 | auVar118[4] & ~bVar122,iVar11))));
            auVar93[8] = bVar127 | auVar118[8] & ~bVar127;
            auVar93[9] = bVar129 | auVar118[9] & ~bVar129;
            auVar93[10] = bVar130 | auVar118[10] & ~bVar130;
            auVar93[0xb] = bVar131 & 0x7f | auVar118[0xb] & ~bVar131;
            auVar96[0xc] = bVar132 | auVar118[0xc] & ~bVar132;
            auVar96._0_12_ = auVar93;
            auVar96[0xd] = bVar134 | auVar118[0xd] & ~bVar134;
            auVar96[0xe] = bVar135 | auVar118[0xe] & ~bVar135;
            auVar96[0xf] = bVar136 & 0x7f | auVar118[0xf] & ~bVar136;
            *param_1 = fVar68 * fVar146 + *param_1;
            param_1[1] = fVar92 * fVar146 + param_1[1];
            param_1[2] = fVar116 * fVar146 + param_1[2];
            param_1[3] = fVar28 * fVar146 + param_1[3];
            param_1[4] = fVar75 * fVar146 + param_1[4];
            param_1[5] = fVar101 * fVar146 + param_1[5];
            param_1[6] = fVar123 * fVar146 + param_1[6];
            param_1[7] = fVar14 * fVar146 + param_1[7];
            param_1[8] = fVar80 * fVar146 + param_1[8];
            param_1[9] = fVar106 * fVar146 + param_1[9];
            param_1[10] = fVar128 * fVar146 + param_1[10];
            param_1[0xb] = fVar15 * fVar146 + param_1[0xb];
            param_1[0xc] = fVar87 * fVar146 + param_1[0xc];
            param_1[0xd] = fVar111 * fVar146 + param_1[0xd];
            param_1[0xe] = fVar133 * fVar146 + param_1[0xe];
            param_1[0xf] = fVar16 * fVar146 + param_1[0xf];
            param_1 = param_1 + 0x10;
            iVar11 = iVar11 + iVar44 + iVar12 + iVar9;
            iVar9 = (int)((ulong)auVar93._0_8_ >> 0x20) +
                    (int)(CONCAT17(bVar104 & 0x7f | auVar156[7] & ~bVar104,
                                   CONCAT16(bVar103 | auVar156[6] & ~bVar103,
                                            CONCAT15(bVar102 | auVar156[5] & ~bVar102,
                                                     CONCAT14(bVar100 | auVar156[4] & ~bVar100,
                                                              iVar44)))) >> 0x20) +
                    (int)(CONCAT17((byte)(uVar46 >> 0x38) | auVar150[7] & ~bVar78,
                                   CONCAT16((byte)(uVar46 >> 0x30) | auVar150[6] & ~bVar77,
                                            CONCAT15((byte)(uVar46 >> 0x28) | auVar150[5] & ~bVar76,
                                                     CONCAT14((byte)(uVar46 >> 0x20) |
                                                              auVar150[4] & ~bVar74,iVar12)))) >>
                         0x20) + (int)((ulong)auVar30._0_8_ >> 0x20);
            iVar12 = auVar93._8_4_ + iVar51 + iVar13 + auVar30._8_4_;
            iVar13 = auVar96._12_4_ +
                     (int)(CONCAT17(bVar114 & 0x7f | auVar156[0xf] & ~bVar114,
                                    CONCAT16(bVar113 | auVar156[0xe] & ~bVar113,
                                             CONCAT15(bVar112 | auVar156[0xd] & ~bVar112,
                                                      CONCAT14(bVar110 | auVar156[0xc] & ~bVar110,
                                                               iVar51)))) >> 0x20) +
                     (int)(CONCAT17((byte)(uVar58 >> 0x38) | auVar150[0xf] & ~bVar90,
                                    CONCAT16((byte)(uVar58 >> 0x30) | auVar150[0xe] & ~bVar89,
                                             CONCAT15((byte)(uVar58 >> 0x28) |
                                                      auVar150[0xd] & ~bVar88,
                                                      CONCAT14((byte)(uVar58 >> 0x20) |
                                                               auVar150[0xc] & ~bVar86,iVar13)))) >>
                          0x20) + auVar148._12_4_;
                    /* try { // try from 00a81b7c to 00b81bb7 has its CatchHandler @ 00a81b7c
                       catch() { ... } // from try @ 00a81b7c with catch @ 00a81b7c
                       catch() { ... } // from try @ 00a81c08 with catch @ 00a81b7c */
            *(ulong *)(piVar7 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar7 + 2) >> 0x20) +
                          ((int)(iVar13 + ((uint)(iVar13 >> 0x1f) >> 0x1e)) >> 0xe) * iVar3,
                          (int)*(undefined8 *)(piVar7 + 2) +
                          ((int)(iVar12 + ((uint)(iVar12 >> 0x1f) >> 0x1e)) >> 0xe) * iVar3);
            *(ulong *)piVar7 =
                 CONCAT44((int)((ulong)*(undefined8 *)piVar7 >> 0x20) +
                          ((int)(iVar9 + ((uint)(iVar9 >> 0x1f) >> 0x1e)) >> 0xe) * iVar3,
                          (int)*(undefined8 *)piVar7 +
                          ((int)(iVar11 + ((uint)(iVar11 >> 0x1f) >> 0x1e)) >> 0xe) * iVar3);
            piVar7 = piVar7 + 4;
          } while (uVar8 != 0);
          bVar6 = uVar10 == param_2;
          param_3 = pfVar1;
          param_4 = param_4 + uVar10;
          param_2 = param_2 - uVar10;
          param_1 = pfVar2;
          if (bVar6) {
            return;
          }
        }
      }
    }
    do {
      fVar28 = *param_3;
      if (fVar28 <= -16.0) {
        iVar9 = -0x80000000;
      }
      else if (16.0 <= fVar28) {
        iVar9 = 0x7fffffff;
      }
      else {
        fVar14 = 0.5;
        if (fVar28 * 1.3421773e+08 <= 0.0) {
          fVar14 = -0.5;
        }
        iVar9 = (int)(fVar14 + fVar28 * 1.3421773e+08);
      }
      *param_1 = fVar28 * *param_5 + *param_1;
      fVar28 = param_3[1];
      if (fVar28 <= -16.0) {
        iVar11 = -0x80000000;
      }
      else if (16.0 <= fVar28) {
        iVar11 = 0x7fffffff;
      }
      else {
        fVar14 = 0.5;
        if (fVar28 * 1.3421773e+08 <= 0.0) {
          fVar14 = -0.5;
        }
        iVar11 = (int)(fVar14 + fVar28 * 1.3421773e+08);
      }
      param_1[1] = fVar28 * *param_5 + param_1[1];
      fVar28 = param_3[2];
      if (fVar28 <= -16.0) {
        iVar12 = -0x80000000;
      }
      else if (16.0 <= fVar28) {
        iVar12 = 0x7fffffff;
      }
      else {
        fVar14 = 0.5;
        if (fVar28 * 1.3421773e+08 <= 0.0) {
          fVar14 = -0.5;
        }
        iVar12 = (int)(fVar14 + fVar28 * 1.3421773e+08);
      }
      param_1[2] = fVar28 * *param_5 + param_1[2];
      fVar28 = param_3[3];
      if (fVar28 <= -16.0) {
        iVar13 = -0x80000000;
      }
      else if (16.0 <= fVar28) {
        iVar13 = 0x7fffffff;
      }
      else {
        fVar14 = 0.5;
        if (fVar28 * 1.3421773e+08 <= 0.0) {
          fVar14 = -0.5;
        }
        iVar13 = (int)(fVar14 + fVar28 * 1.3421773e+08);
      }
      iVar13 = iVar13 + iVar12 + iVar11 + iVar9;
      param_1[3] = fVar28 * *param_5 + param_1[3];
      iVar9 = iVar13 + 3;
      if (-1 < iVar13) {
        iVar9 = iVar13;
      }
      param_2 = param_2 - 1;
      *param_4 = *param_4 + (iVar9 >> 0xe) * iVar3;
      param_3 = param_3 + 4;
      param_4 = param_4 + 1;
      param_1 = param_1 + 4;
    } while (param_2 != 0);
  }
  return;
}

