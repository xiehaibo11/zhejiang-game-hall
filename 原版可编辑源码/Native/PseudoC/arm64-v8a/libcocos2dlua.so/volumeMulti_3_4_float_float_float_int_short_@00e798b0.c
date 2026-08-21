
/* void cocos2d::experimental::volumeMulti<3, 4, float, float, float, int, short>(float*, unsigned
   long, float const*, int*, float const*, short) */

void cocos2d::experimental::volumeMulti<3,4,float,float,float,int,short>
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
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  float fVar22;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar23 [16];
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint uVar30;
  uint uVar31;
  undefined1 auVar32 [12];
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
  undefined1 auVar44 [16];
  byte bVar45;
  byte bVar49;
  byte bVar50;
  int iVar46;
  byte bVar51;
  byte bVar52;
  byte bVar54;
  byte bVar55;
  int iVar53;
  byte bVar56;
  ulong uVar48;
  byte bVar57;
  byte bVar61;
  byte bVar62;
  int iVar58;
  byte bVar63;
  byte bVar64;
  byte bVar66;
  byte bVar67;
  int iVar65;
  byte bVar68;
  ulong uVar60;
  byte bVar69;
  byte bVar73;
  byte bVar74;
  float fVar70;
  byte bVar75;
  byte bVar76;
  byte bVar78;
  byte bVar79;
  float fVar77;
  long lVar72;
  byte bVar80;
  byte bVar81;
  byte bVar85;
  byte bVar86;
  float fVar82;
  byte bVar87;
  byte bVar88;
  byte bVar90;
  byte bVar91;
  float fVar89;
  long lVar84;
  byte bVar92;
  byte bVar93;
  byte bVar99;
  byte bVar100;
  float fVar94;
  byte bVar101;
  byte bVar106;
  byte bVar111;
  undefined1 auVar95 [12];
  byte bVar102;
  byte bVar104;
  byte bVar105;
  float fVar103;
  byte bVar107;
  byte bVar109;
  byte bVar110;
  float fVar108;
  byte bVar112;
  byte bVar114;
  byte bVar115;
  float fVar113;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  byte bVar116;
  byte bVar117;
  byte bVar121;
  byte bVar122;
  float fVar118;
  byte bVar123;
  byte bVar124;
  byte bVar126;
  byte bVar127;
  float fVar125;
  byte bVar128;
  byte bVar129;
  byte bVar131;
  byte bVar132;
  float fVar130;
  byte bVar133;
  byte bVar134;
  byte bVar136;
  byte bVar137;
  float fVar135;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  byte bVar138;
  undefined1 uVar139;
  undefined1 uVar140;
  undefined1 uVar141;
  undefined1 uVar142;
  undefined1 uVar143;
  undefined1 uVar144;
  undefined1 uVar145;
  undefined1 uVar146;
  undefined1 uVar147;
  float fVar148;
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  int iVar153;
  int iVar154;
  int iVar155;
  int iVar156;
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  int iVar159;
  int iVar160;
  int iVar161;
  int iVar162;
  undefined4 uVar47;
  undefined4 uVar59;
  undefined4 uVar71;
  undefined4 uVar83;
  undefined1 auVar98 [16];
  
  if (param_4 == (int *)0x0) {
    if (3 < param_2) {
      if ((param_3 + param_2 * 4 <= param_1 || param_1 + param_2 * 4 <= param_3) &&
         ((float *)((long)param_5 + 1U) <= param_1 || param_1 + param_2 * 4 <= param_5)) {
        uVar9 = param_2 & 0xfffffffffffffffc;
        pfVar1 = param_3 + uVar9 * 4;
        pfVar2 = param_1 + uVar9 * 4;
        uVar8 = uVar9;
        do {
          fVar27 = *param_3;
          fVar17 = param_3[1];
          fVar22 = param_3[2];
          fVar70 = param_3[3];
          fVar14 = param_3[4];
          fVar19 = param_3[5];
          fVar24 = param_3[6];
          fVar77 = param_3[7];
          fVar15 = param_3[8];
          fVar20 = param_3[9];
          fVar25 = param_3[10];
          fVar82 = param_3[0xb];
          fVar16 = param_3[0xc];
          fVar21 = param_3[0xd];
          fVar26 = param_3[0xe];
          fVar89 = param_3[0xf];
          param_3 = param_3 + 0x10;
          fVar94 = *param_5;
          uVar8 = uVar8 - 4;
          *param_1 = *param_1 + fVar27 * fVar94;
          param_1[1] = param_1[1] + fVar17 * fVar94;
          param_1[2] = param_1[2] + fVar22 * fVar94;
          param_1[3] = param_1[3] + fVar70 * fVar94;
          param_1[4] = param_1[4] + fVar14 * fVar94;
          param_1[5] = param_1[5] + fVar19 * fVar94;
          param_1[6] = param_1[6] + fVar24 * fVar94;
          param_1[7] = param_1[7] + fVar77 * fVar94;
          param_1[8] = param_1[8] + fVar15 * fVar94;
          param_1[9] = param_1[9] + fVar20 * fVar94;
          param_1[10] = param_1[10] + fVar25 * fVar94;
          param_1[0xb] = param_1[0xb] + fVar82 * fVar94;
          param_1[0xc] = param_1[0xc] + fVar16 * fVar94;
          param_1[0xd] = param_1[0xd] + fVar21 * fVar94;
          param_1[0xe] = param_1[0xe] + fVar26 * fVar94;
          param_1[0xf] = param_1[0xf] + fVar89 * fVar94;
          param_1 = param_1 + 0x10;
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
      param_1[2] = param_1[2] + param_3[2] * *param_5;
      pfVar1 = param_3 + 3;
      param_3 = param_3 + 4;
      param_1[3] = param_1[3] + *pfVar1 * *param_5;
      param_1 = param_1 + 4;
    } while (param_2 != 0);
  }
  else {
    iVar3 = (int)param_6;
    if (3 < param_2) {
      if ((param_3 + param_2 * 4 <= param_1 || param_1 + param_2 * 4 <= param_3) &&
         ((float *)((long)param_5 + 1U) <= param_1 || param_1 + param_2 * 4 <= param_5)) {
        uVar9 = param_2 & 0xfffffffffffffffc;
        auVar18 = NEON_fmov(0xc1800000,4);
        auVar23 = NEON_fmov(0x41800000,4);
        auVar28 = NEON_fmov(0xbfe0000000000000,8);
        auVar29 = NEON_fmov(0x3fe0000000000000,8);
        pfVar1 = param_3 + uVar9 * 4;
        pfVar2 = param_1 + uVar9 * 4;
        piVar7 = param_4;
        uVar8 = uVar9;
        do {
          fVar70 = *param_3;
          fVar94 = param_3[1];
          fVar118 = param_3[2];
          fVar27 = param_3[3];
          fVar77 = param_3[4];
          fVar103 = param_3[5];
          fVar125 = param_3[6];
          fVar14 = param_3[7];
          fVar82 = param_3[8];
          fVar108 = param_3[9];
          fVar130 = param_3[10];
          fVar15 = param_3[0xb];
          fVar89 = param_3[0xc];
          fVar113 = param_3[0xd];
          fVar135 = param_3[0xe];
          fVar16 = param_3[0xf];
          param_3 = param_3 + 0x10;
          fVar148 = *param_5;
          uVar8 = uVar8 - 4;
          fVar17 = auVar18._0_4_;
          auVar33._0_4_ = -(uint)(fVar70 <= fVar17);
          fVar19 = auVar18._4_4_;
          auVar33._4_4_ = -(uint)(fVar77 <= fVar19);
          fVar20 = auVar18._8_4_;
          auVar33._8_4_ = -(uint)(fVar82 <= fVar20);
          fVar21 = auVar18._12_4_;
          auVar33._12_4_ = -(uint)(fVar89 <= fVar21);
          fVar22 = auVar23._0_4_;
          iVar46 = -(uint)(fVar22 <= fVar70);
          fVar24 = auVar23._4_4_;
          iVar53 = -(uint)(fVar24 <= fVar77);
          fVar25 = auVar23._8_4_;
          iVar58 = -(uint)(fVar25 <= fVar82);
          fVar26 = auVar23._12_4_;
          iVar65 = -(uint)(fVar26 <= fVar89);
          auVar151._0_4_ = -(uint)(fVar94 <= fVar17);
          auVar151._4_4_ = -(uint)(fVar103 <= fVar19);
          auVar151._8_4_ = -(uint)(fVar108 <= fVar20);
          auVar151._12_4_ = -(uint)(fVar113 <= fVar21);
          iVar153 = -(uint)(fVar22 <= fVar94);
          iVar154 = -(uint)(fVar24 <= fVar103);
          iVar155 = -(uint)(fVar25 <= fVar108);
          iVar156 = -(uint)(fVar26 <= fVar113);
          auVar41._0_8_ = (long)(int)-(uint)(0.0 < fVar82 * 1.3421773e+08);
          auVar41._8_8_ = (long)(int)-(uint)(0.0 < fVar89 * 1.3421773e+08);
          auVar96._0_8_ = (long)(int)-(uint)(0.0 < fVar70 * 1.3421773e+08);
          auVar96._8_8_ = (long)(int)-(uint)(0.0 < fVar77 * 1.3421773e+08);
          auVar157._0_4_ = -(uint)(fVar118 <= fVar17);
          auVar157._4_4_ = -(uint)(fVar125 <= fVar19);
          auVar157._8_4_ = -(uint)(fVar130 <= fVar20);
          auVar157._12_4_ = -(uint)(fVar135 <= fVar21);
          iVar159 = -(uint)(fVar22 <= fVar118);
          iVar160 = -(uint)(fVar24 <= fVar125);
          iVar161 = -(uint)(fVar25 <= fVar130);
          iVar162 = -(uint)(fVar26 <= fVar135);
          auVar35._0_4_ = -(uint)(fVar27 <= fVar17);
          auVar35._4_4_ = -(uint)(fVar14 <= fVar19);
          auVar35._8_4_ = -(uint)(fVar15 <= fVar20);
          auVar35._12_4_ = -(uint)(fVar16 <= fVar21);
          iVar10 = -(uint)(fVar22 <= fVar27);
          iVar11 = -(uint)(fVar24 <= fVar14);
          iVar12 = -(uint)(fVar25 <= fVar15);
          iVar13 = -(uint)(fVar26 <= fVar16);
          auVar97 = auVar28 ^ (auVar28 ^ auVar29) & auVar96;
          auVar119._0_8_ = (long)(int)-(uint)(0.0 < fVar108 * 1.3421773e+08);
          auVar119._8_8_ = (long)(int)-(uint)(0.0 < fVar113 * 1.3421773e+08);
          auVar149._0_8_ = (long)(int)-(uint)(0.0 < fVar94 * 1.3421773e+08);
          auVar149._8_8_ = (long)(int)-(uint)(0.0 < fVar103 * 1.3421773e+08);
          auVar150 = auVar28 ^ (auVar28 ^ auVar29) & auVar149;
          auVar42 = auVar28 ^ (auVar28 ^ auVar29) & auVar41;
          auVar36._0_8_ = (long)(int)-(uint)(0.0 < fVar130 * 1.3421773e+08);
          auVar36._8_8_ = (long)(int)-(uint)(0.0 < fVar135 * 1.3421773e+08);
          auVar120 = auVar28 ^ (auVar28 ^ auVar29) & auVar119;
          auVar39._0_8_ = (long)(int)-(uint)(0.0 < fVar118 * 1.3421773e+08);
          auVar39._8_8_ = (long)(int)-(uint)(0.0 < fVar125 * 1.3421773e+08);
          auVar37 = auVar28 ^ (auVar28 ^ auVar29) & auVar36;
          auVar38._0_8_ = (long)(int)-(uint)(0.0 < fVar15 * 1.3421773e+08);
          auVar38._8_8_ = (long)(int)-(uint)(0.0 < fVar16 * 1.3421773e+08);
          auVar43._0_8_ = (long)(int)-(uint)(0.0 < fVar27 * 1.3421773e+08);
          auVar43._8_8_ = (long)(int)-(uint)(0.0 < fVar14 * 1.3421773e+08);
          auVar40 = auVar28 ^ (auVar28 ^ auVar29) & auVar39;
          auVar44 = auVar28 ^ (auVar28 ^ auVar29) & auVar43;
          auVar34._0_4_ = (undefined4)(long)(auVar97._0_8_ + (double)(fVar70 * 1.3421773e+08));
          auVar34._4_4_ = (int)(long)(auVar97._8_8_ + (double)(fVar77 * 1.3421773e+08));
          auVar152._0_4_ = (undefined4)(long)(auVar150._0_8_ + (double)(fVar94 * 1.3421773e+08));
          auVar152._4_4_ = (int)(long)(auVar150._8_8_ + (double)(fVar103 * 1.3421773e+08));
          auVar34._8_4_ = (int)(long)(auVar42._0_8_ + (double)(fVar82 * 1.3421773e+08));
          auVar34._12_4_ = (int)(long)(auVar42._8_8_ + (double)(fVar89 * 1.3421773e+08));
          auVar152._8_4_ = (int)(long)(auVar120._0_8_ + (double)(fVar108 * 1.3421773e+08));
          auVar152._12_4_ = (int)(long)(auVar120._8_8_ + (double)(fVar113 * 1.3421773e+08));
          auVar42 = auVar28 ^ (auVar28 ^ auVar29) & auVar38;
          auVar158._0_4_ = (undefined4)(long)(auVar40._0_8_ + (double)(fVar118 * 1.3421773e+08));
          auVar158._4_4_ = (int)(long)(auVar40._8_8_ + (double)(fVar125 * 1.3421773e+08));
          auVar158._8_4_ = (int)(long)(auVar37._0_8_ + (double)(fVar130 * 1.3421773e+08));
          auVar158._12_4_ = (int)(long)(auVar37._8_8_ + (double)(fVar135 * 1.3421773e+08));
          lVar5 = (long)(auVar44._8_8_ + (double)(fVar14 * 1.3421773e+08));
          lVar72 = (long)(auVar42._0_8_ + (double)(fVar15 * 1.3421773e+08));
          lVar84 = (long)(auVar42._8_8_ + (double)(fVar16 * 1.3421773e+08));
          uVar139 = (undefined1)((ulong)lVar5 >> 8);
          uVar140 = (undefined1)((ulong)lVar5 >> 0x10);
          uVar141 = (undefined1)((ulong)lVar5 >> 0x18);
          uVar142 = (undefined1)((ulong)lVar72 >> 8);
          uVar143 = (undefined1)((ulong)lVar72 >> 0x10);
          uVar144 = (undefined1)((ulong)lVar72 >> 0x18);
          uVar145 = (undefined1)((ulong)lVar84 >> 8);
          uVar146 = (undefined1)((ulong)lVar84 >> 0x10);
          uVar147 = (undefined1)((ulong)lVar84 >> 0x18);
          bVar45 = (byte)iVar46 & ~(byte)auVar33._0_4_;
          bVar49 = (byte)((uint)iVar46 >> 8) & ~(byte)((uint)auVar33._0_4_ >> 8);
          bVar50 = (byte)((uint)iVar46 >> 0x10) & ~(byte)((uint)auVar33._0_4_ >> 0x10);
          bVar51 = (byte)((uint)iVar46 >> 0x18) & ~(byte)((uint)auVar33._0_4_ >> 0x18);
          uVar47 = CONCAT13(bVar51,CONCAT12(bVar50,CONCAT11(bVar49,bVar45)));
          bVar52 = (byte)iVar53 & ~(byte)auVar33._4_4_;
          bVar54 = (byte)((uint)iVar53 >> 8) & ~(byte)((uint)auVar33._4_4_ >> 8);
          bVar55 = (byte)((uint)iVar53 >> 0x10) & ~(byte)((uint)auVar33._4_4_ >> 0x10);
          bVar56 = (byte)((uint)iVar53 >> 0x18) & ~(byte)((uint)auVar33._4_4_ >> 0x18);
          bVar57 = (byte)iVar58 & ~(byte)auVar33._8_4_;
          bVar61 = (byte)((uint)iVar58 >> 8) & ~(byte)((uint)auVar33._8_4_ >> 8);
          bVar62 = (byte)((uint)iVar58 >> 0x10) & ~(byte)((uint)auVar33._8_4_ >> 0x10);
          bVar63 = (byte)((uint)iVar58 >> 0x18) & ~(byte)((uint)auVar33._8_4_ >> 0x18);
          uVar59 = CONCAT13(bVar63,CONCAT12(bVar62,CONCAT11(bVar61,bVar57)));
          bVar64 = (byte)iVar65 & ~(byte)auVar33._12_4_;
          bVar66 = (byte)((uint)iVar65 >> 8) & ~(byte)((uint)auVar33._12_4_ >> 8);
          bVar67 = (byte)((uint)iVar65 >> 0x10) & ~(byte)((uint)auVar33._12_4_ >> 0x10);
          bVar68 = (byte)((uint)iVar65 >> 0x18) & ~(byte)((uint)auVar33._12_4_ >> 0x18);
          auVar37._8_4_ = 0x80000000;
          auVar37._0_8_ = 0x8000000080000000;
          auVar37._12_4_ = 0x80000000;
          auVar34 = auVar34 ^ (auVar34 ^ auVar37) & auVar33;
          bVar69 = (byte)iVar153 & ~(byte)auVar151._0_4_;
          bVar73 = (byte)((uint)iVar153 >> 8) & ~(byte)((uint)auVar151._0_4_ >> 8);
          bVar74 = (byte)((uint)iVar153 >> 0x10) & ~(byte)((uint)auVar151._0_4_ >> 0x10);
          bVar75 = (byte)((uint)iVar153 >> 0x18) & ~(byte)((uint)auVar151._0_4_ >> 0x18);
          uVar71 = CONCAT13(bVar75,CONCAT12(bVar74,CONCAT11(bVar73,bVar69)));
          bVar76 = (byte)iVar154 & ~(byte)auVar151._4_4_;
          bVar78 = (byte)((uint)iVar154 >> 8) & ~(byte)((uint)auVar151._4_4_ >> 8);
          bVar79 = (byte)((uint)iVar154 >> 0x10) & ~(byte)((uint)auVar151._4_4_ >> 0x10);
          bVar80 = (byte)((uint)iVar154 >> 0x18) & ~(byte)((uint)auVar151._4_4_ >> 0x18);
          bVar81 = (byte)iVar155 & ~(byte)auVar151._8_4_;
          bVar85 = (byte)((uint)iVar155 >> 8) & ~(byte)((uint)auVar151._8_4_ >> 8);
          bVar86 = (byte)((uint)iVar155 >> 0x10) & ~(byte)((uint)auVar151._8_4_ >> 0x10);
          bVar87 = (byte)((uint)iVar155 >> 0x18) & ~(byte)((uint)auVar151._8_4_ >> 0x18);
          uVar83 = CONCAT13(bVar87,CONCAT12(bVar86,CONCAT11(bVar85,bVar81)));
          bVar88 = (byte)iVar156 & ~(byte)auVar151._12_4_;
          bVar90 = (byte)((uint)iVar156 >> 8) & ~(byte)((uint)auVar151._12_4_ >> 8);
          bVar91 = (byte)((uint)iVar156 >> 0x10) & ~(byte)((uint)auVar151._12_4_ >> 0x10);
          bVar92 = (byte)((uint)iVar156 >> 0x18) & ~(byte)((uint)auVar151._12_4_ >> 0x18);
          auVar42._8_4_ = 0x80000000;
          auVar42._0_8_ = 0x8000000080000000;
          auVar42._12_4_ = 0x80000000;
          auVar152 = auVar152 ^ (auVar152 ^ auVar42) & auVar151;
          bVar93 = (byte)iVar159 & ~(byte)auVar157._0_4_;
          bVar99 = (byte)((uint)iVar159 >> 8) & ~(byte)((uint)auVar157._0_4_ >> 8);
          bVar100 = (byte)((uint)iVar159 >> 0x10) & ~(byte)((uint)auVar157._0_4_ >> 0x10);
          bVar101 = (byte)((uint)iVar159 >> 0x18) & ~(byte)((uint)auVar157._0_4_ >> 0x18);
          bVar102 = (byte)iVar160 & ~(byte)auVar157._4_4_;
          bVar104 = (byte)((uint)iVar160 >> 8) & ~(byte)((uint)auVar157._4_4_ >> 8);
          bVar105 = (byte)((uint)iVar160 >> 0x10) & ~(byte)((uint)auVar157._4_4_ >> 0x10);
          bVar106 = (byte)((uint)iVar160 >> 0x18) & ~(byte)((uint)auVar157._4_4_ >> 0x18);
          bVar107 = (byte)iVar161 & ~(byte)auVar157._8_4_;
          bVar109 = (byte)((uint)iVar161 >> 8) & ~(byte)((uint)auVar157._8_4_ >> 8);
          bVar110 = (byte)((uint)iVar161 >> 0x10) & ~(byte)((uint)auVar157._8_4_ >> 0x10);
          bVar111 = (byte)((uint)iVar161 >> 0x18) & ~(byte)((uint)auVar157._8_4_ >> 0x18);
          bVar112 = (byte)iVar162 & ~(byte)auVar157._12_4_;
          bVar114 = (byte)((uint)iVar162 >> 8) & ~(byte)((uint)auVar157._12_4_ >> 8);
          bVar115 = (byte)((uint)iVar162 >> 0x10) & ~(byte)((uint)auVar157._12_4_ >> 0x10);
          bVar116 = (byte)((uint)iVar162 >> 0x18) & ~(byte)((uint)auVar157._12_4_ >> 0x18);
          auVar40._8_4_ = 0x80000000;
          auVar40._0_8_ = 0x8000000080000000;
          auVar40._12_4_ = 0x80000000;
          auVar158 = auVar158 ^ (auVar158 ^ auVar40) & auVar157;
          bVar117 = (byte)iVar10 & ~(byte)auVar35._0_4_;
          bVar121 = (byte)((uint)iVar10 >> 8) & ~(byte)((uint)auVar35._0_4_ >> 8);
          bVar122 = (byte)((uint)iVar10 >> 0x10) & ~(byte)((uint)auVar35._0_4_ >> 0x10);
          bVar123 = (byte)((uint)iVar10 >> 0x18) & ~(byte)((uint)auVar35._0_4_ >> 0x18);
          bVar124 = (byte)iVar11 & ~(byte)auVar35._4_4_;
          bVar126 = (byte)((uint)iVar11 >> 8) & ~(byte)((uint)auVar35._4_4_ >> 8);
          bVar127 = (byte)((uint)iVar11 >> 0x10) & ~(byte)((uint)auVar35._4_4_ >> 0x10);
          bVar128 = (byte)((uint)iVar11 >> 0x18) & ~(byte)((uint)auVar35._4_4_ >> 0x18);
          bVar129 = (byte)iVar12 & ~(byte)auVar35._8_4_;
          bVar131 = (byte)((uint)iVar12 >> 8) & ~(byte)((uint)auVar35._8_4_ >> 8);
          bVar132 = (byte)((uint)iVar12 >> 0x10) & ~(byte)((uint)auVar35._8_4_ >> 0x10);
          bVar133 = (byte)((uint)iVar12 >> 0x18) & ~(byte)((uint)auVar35._8_4_ >> 0x18);
          bVar134 = (byte)iVar13 & ~(byte)auVar35._12_4_;
          bVar136 = (byte)((uint)iVar13 >> 8) & ~(byte)((uint)auVar35._12_4_ >> 8);
          bVar137 = (byte)((uint)iVar13 >> 0x10) & ~(byte)((uint)auVar35._12_4_ >> 0x10);
          bVar138 = (byte)((uint)iVar13 >> 0x18) & ~(byte)((uint)auVar35._12_4_ >> 0x18);
          auVar97._8_4_ = 0x80000000;
          auVar97._0_8_ = 0x8000000080000000;
          auVar97._12_4_ = 0x80000000;
          uVar4 = (undefined4)(long)(auVar44._0_8_ + (double)(fVar27 * 1.3421773e+08));
          auVar44[4] = (char)lVar5;
          auVar44._0_4_ = uVar4;
          auVar44[5] = uVar139;
          auVar44[6] = uVar140;
          auVar44[7] = uVar141;
          auVar44[8] = (char)lVar72;
          auVar44[9] = uVar142;
          auVar44[10] = uVar143;
          auVar44[0xb] = uVar144;
          auVar44[0xc] = (char)lVar84;
          auVar44[0xd] = uVar145;
          auVar44[0xe] = uVar146;
          auVar44[0xf] = uVar147;
          auVar120[4] = (char)lVar5;
          auVar120._0_4_ = uVar4;
          auVar120[5] = uVar139;
          auVar120[6] = uVar140;
          auVar120[7] = uVar141;
          auVar120[8] = (char)lVar72;
          auVar120[9] = uVar142;
          auVar120[10] = uVar143;
          auVar120[0xb] = uVar144;
          auVar120[0xc] = (char)lVar84;
          auVar120[0xd] = uVar145;
          auVar120[0xe] = uVar146;
          auVar120[0xf] = uVar147;
          auVar120 = auVar120 ^ (auVar44 ^ auVar97) & auVar35;
          uVar48 = CONCAT44((int)(CONCAT17(bVar56,CONCAT16(bVar55,CONCAT15(bVar54,CONCAT14(bVar52,
                                                  uVar47)))) >> 0x20),uVar47) & 0x7fffffff7fffffff;
          uVar60 = CONCAT44((int)(CONCAT17(bVar68,CONCAT16(bVar67,CONCAT15(bVar66,CONCAT14(bVar64,
                                                  uVar59)))) >> 0x20),uVar59) & 0x7fffffff7fffffff;
          iVar10 = CONCAT13((byte)(uVar48 >> 0x18) | auVar34[3] & ~bVar51,
                            CONCAT12((byte)(uVar48 >> 0x10) | auVar34[2] & ~bVar50,
                                     CONCAT11((byte)(uVar48 >> 8) | auVar34[1] & ~bVar49,
                                              (byte)uVar48 | auVar34[0] & ~bVar45)));
          auVar32._0_8_ =
               CONCAT17((byte)(uVar48 >> 0x38) | auVar34[7] & ~bVar56,
                        CONCAT16((byte)(uVar48 >> 0x30) | auVar34[6] & ~bVar55,
                                 CONCAT15((byte)(uVar48 >> 0x28) | auVar34[5] & ~bVar54,
                                          CONCAT14((byte)(uVar48 >> 0x20) | auVar34[4] & ~bVar52,
                                                   iVar10))));
          auVar32[8] = (byte)uVar60 | auVar34[8] & ~bVar57;
          auVar32[9] = (byte)(uVar60 >> 8) | auVar34[9] & ~bVar61;
          auVar32[10] = (byte)(uVar60 >> 0x10) | auVar34[10] & ~bVar62;
          auVar32[0xb] = (byte)(uVar60 >> 0x18) | auVar34[0xb] & ~bVar63;
          auVar150[0xc] = (byte)(uVar60 >> 0x20) | auVar34[0xc] & ~bVar64;
          auVar150._0_12_ = auVar32;
          auVar150[0xd] = (byte)(uVar60 >> 0x28) | auVar34[0xd] & ~bVar66;
          auVar150[0xe] = (byte)(uVar60 >> 0x30) | auVar34[0xe] & ~bVar67;
          auVar150[0xf] = (byte)(uVar60 >> 0x38) | auVar34[0xf] & ~bVar68;
          uVar48 = CONCAT44((int)(CONCAT17(bVar80,CONCAT16(bVar79,CONCAT15(bVar78,CONCAT14(bVar76,
                                                  uVar71)))) >> 0x20),uVar71) & 0x7fffffff7fffffff;
          uVar60 = CONCAT44((int)(CONCAT17(bVar92,CONCAT16(bVar91,CONCAT15(bVar90,CONCAT14(bVar88,
                                                  uVar83)))) >> 0x20),uVar83) & 0x7fffffff7fffffff;
          iVar12 = CONCAT13((byte)(uVar48 >> 0x18) | auVar152[3] & ~bVar75,
                            CONCAT12((byte)(uVar48 >> 0x10) | auVar152[2] & ~bVar74,
                                     CONCAT11((byte)(uVar48 >> 8) | auVar152[1] & ~bVar73,
                                              (byte)uVar48 | auVar152[0] & ~bVar69)));
          iVar13 = CONCAT13((byte)(uVar60 >> 0x18) | auVar152[0xb] & ~bVar87,
                            CONCAT12((byte)(uVar60 >> 0x10) | auVar152[10] & ~bVar86,
                                     CONCAT11((byte)(uVar60 >> 8) | auVar152[9] & ~bVar85,
                                              (byte)uVar60 | auVar152[8] & ~bVar81)));
          iVar46 = CONCAT13(bVar101 & 0x7f | auVar158[3] & ~bVar101,
                            CONCAT12(bVar100 | auVar158[2] & ~bVar100,
                                     CONCAT11(bVar99 | auVar158[1] & ~bVar99,
                                              bVar93 | auVar158[0] & ~bVar93)));
          iVar53 = CONCAT13(bVar111 & 0x7f | auVar158[0xb] & ~bVar111,
                            CONCAT12(bVar110 | auVar158[10] & ~bVar110,
                                     CONCAT11(bVar109 | auVar158[9] & ~bVar109,
                                              bVar107 | auVar158[8] & ~bVar107)));
          iVar11 = CONCAT13(bVar123 & 0x7f | auVar120[3] & ~bVar123,
                            CONCAT12(bVar122 | auVar120[2] & ~bVar122,
                                     CONCAT11(bVar121 | auVar120[1] & ~bVar121,
                                              bVar117 | auVar120[0] & ~bVar117)));
          auVar95._0_8_ =
               CONCAT17(bVar128 & 0x7f | auVar120[7] & ~bVar128,
                        CONCAT16(bVar127 | auVar120[6] & ~bVar127,
                                 CONCAT15(bVar126 | auVar120[5] & ~bVar126,
                                          CONCAT14(bVar124 | auVar120[4] & ~bVar124,iVar11))));
          auVar95[8] = bVar129 | auVar120[8] & ~bVar129;
          auVar95[9] = bVar131 | auVar120[9] & ~bVar131;
          auVar95[10] = bVar132 | auVar120[10] & ~bVar132;
          auVar95[0xb] = bVar133 & 0x7f | auVar120[0xb] & ~bVar133;
          auVar98[0xc] = bVar134 | auVar120[0xc] & ~bVar134;
          auVar98._0_12_ = auVar95;
          auVar98[0xd] = bVar136 | auVar120[0xd] & ~bVar136;
          auVar98[0xe] = bVar137 | auVar120[0xe] & ~bVar137;
          auVar98[0xf] = bVar138 & 0x7f | auVar120[0xf] & ~bVar138;
          *param_1 = fVar70 * fVar148 + *param_1;
          param_1[1] = fVar94 * fVar148 + param_1[1];
          param_1[2] = fVar118 * fVar148 + param_1[2];
          param_1[3] = fVar27 * fVar148 + param_1[3];
          param_1[4] = fVar77 * fVar148 + param_1[4];
          param_1[5] = fVar103 * fVar148 + param_1[5];
          param_1[6] = fVar125 * fVar148 + param_1[6];
          param_1[7] = fVar14 * fVar148 + param_1[7];
          param_1[8] = fVar82 * fVar148 + param_1[8];
          param_1[9] = fVar108 * fVar148 + param_1[9];
          param_1[10] = fVar130 * fVar148 + param_1[10];
          param_1[0xb] = fVar15 * fVar148 + param_1[0xb];
          param_1[0xc] = fVar89 * fVar148 + param_1[0xc];
          param_1[0xd] = fVar113 * fVar148 + param_1[0xd];
          param_1[0xe] = fVar135 * fVar148 + param_1[0xe];
          param_1[0xf] = fVar16 * fVar148 + param_1[0xf];
          param_1 = param_1 + 0x10;
          iVar11 = iVar11 + iVar46 + iVar12 + iVar10;
          iVar10 = (int)((ulong)auVar95._0_8_ >> 0x20) +
                   (int)(CONCAT17(bVar106 & 0x7f | auVar158[7] & ~bVar106,
                                  CONCAT16(bVar105 | auVar158[6] & ~bVar105,
                                           CONCAT15(bVar104 | auVar158[5] & ~bVar104,
                                                    CONCAT14(bVar102 | auVar158[4] & ~bVar102,iVar46
                                                            )))) >> 0x20) +
                   (int)(CONCAT17((byte)(uVar48 >> 0x38) | auVar152[7] & ~bVar80,
                                  CONCAT16((byte)(uVar48 >> 0x30) | auVar152[6] & ~bVar79,
                                           CONCAT15((byte)(uVar48 >> 0x28) | auVar152[5] & ~bVar78,
                                                    CONCAT14((byte)(uVar48 >> 0x20) |
                                                             auVar152[4] & ~bVar76,iVar12)))) >>
                        0x20) + (int)((ulong)auVar32._0_8_ >> 0x20);
          iVar12 = auVar95._8_4_ + iVar53 + iVar13 + auVar32._8_4_;
          iVar13 = auVar98._12_4_ +
                   (int)(CONCAT17(bVar116 & 0x7f | auVar158[0xf] & ~bVar116,
                                  CONCAT16(bVar115 | auVar158[0xe] & ~bVar115,
                                           CONCAT15(bVar114 | auVar158[0xd] & ~bVar114,
                                                    CONCAT14(bVar112 | auVar158[0xc] & ~bVar112,
                                                             iVar53)))) >> 0x20) +
                   (int)(CONCAT17((byte)(uVar60 >> 0x38) | auVar152[0xf] & ~bVar92,
                                  CONCAT16((byte)(uVar60 >> 0x30) | auVar152[0xe] & ~bVar91,
                                           CONCAT15((byte)(uVar60 >> 0x28) | auVar152[0xd] & ~bVar90
                                                    ,CONCAT14((byte)(uVar60 >> 0x20) |
                                                              auVar152[0xc] & ~bVar88,iVar13)))) >>
                        0x20) + auVar150._12_4_;
          *(ulong *)(piVar7 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(piVar7 + 2) >> 0x20) +
                        ((int)(iVar13 + ((uint)(iVar13 >> 0x1f) >> 0x1e)) >> 0xe) * iVar3,
                        (int)*(undefined8 *)(piVar7 + 2) +
                        ((int)(iVar12 + ((uint)(iVar12 >> 0x1f) >> 0x1e)) >> 0xe) * iVar3);
          *(ulong *)piVar7 =
               CONCAT44((int)((ulong)*(undefined8 *)piVar7 >> 0x20) +
                        ((int)(iVar10 + ((uint)(iVar10 >> 0x1f) >> 0x1e)) >> 0xe) * iVar3,
                        (int)*(undefined8 *)piVar7 +
                        ((int)(iVar11 + ((uint)(iVar11 >> 0x1f) >> 0x1e)) >> 0xe) * iVar3);
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
      fVar27 = *param_3;
      uVar30 = 0xbfe00000;
      if (fVar27 <= -16.0) {
        iVar10 = -0x80000000;
      }
      else if (16.0 <= fVar27) {
        iVar10 = 0x7fffffff;
      }
      else {
        uVar31 = 0x3fe00000;
        if (fVar27 * 1.3421773e+08 <= 0.0) {
          uVar31 = uVar30;
        }
        iVar10 = (int)((double)((ulong)uVar31 << 0x20) + (double)(fVar27 * 1.3421773e+08));
      }
      *param_1 = fVar27 * *param_5 + *param_1;
      fVar27 = param_3[1];
      if (fVar27 <= -16.0) {
        iVar11 = -0x80000000;
      }
      else if (16.0 <= fVar27) {
        iVar11 = 0x7fffffff;
      }
      else {
        uVar31 = 0x3fe00000;
        if (fVar27 * 1.3421773e+08 <= 0.0) {
          uVar31 = uVar30;
        }
        iVar11 = (int)((double)((ulong)uVar31 << 0x20) + (double)(fVar27 * 1.3421773e+08));
      }
      param_1[1] = fVar27 * *param_5 + param_1[1];
      fVar27 = param_3[2];
      if (fVar27 <= -16.0) {
        iVar12 = -0x80000000;
      }
      else if (16.0 <= fVar27) {
        iVar12 = 0x7fffffff;
      }
      else {
        uVar31 = 0x3fe00000;
        if (fVar27 * 1.3421773e+08 <= 0.0) {
          uVar31 = uVar30;
        }
        iVar12 = (int)((double)((ulong)uVar31 << 0x20) + (double)(fVar27 * 1.3421773e+08));
      }
      param_1[2] = fVar27 * *param_5 + param_1[2];
      fVar27 = param_3[3];
      if (fVar27 <= -16.0) {
        iVar13 = -0x80000000;
      }
      else if (16.0 <= fVar27) {
        iVar13 = 0x7fffffff;
      }
      else {
        uVar31 = 0x3fe00000;
        if (fVar27 * 1.3421773e+08 <= 0.0) {
          uVar31 = uVar30;
        }
        iVar13 = (int)((double)((ulong)uVar31 << 0x20) + (double)(fVar27 * 1.3421773e+08));
      }
      iVar13 = iVar13 + iVar12 + iVar11 + iVar10;
      param_1[3] = fVar27 * *param_5 + param_1[3];
      iVar10 = iVar13 + 3;
      if (-1 < iVar13) {
        iVar10 = iVar13;
      }
      param_2 = param_2 - 1;
      *param_4 = *param_4 + (iVar10 >> 0xe) * iVar3;
      param_3 = param_3 + 4;
      param_4 = param_4 + 1;
      param_1 = param_1 + 4;
    } while (param_2 != 0);
  }
  return;
}

