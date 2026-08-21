
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void cocos2d::volumeMulti<4, 7, short, short, short, int, short>(short*, unsigned long, short
   const*, int*, short const*, short) */

void cocos2d::volumeMulti<4,7,short,short,short,int,short>
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
  uint uVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined1 auVar15 [16];
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
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  bool bVar30;
  int *piVar31;
  ulong uVar32;
  ulong uVar33;
  undefined4 uVar34;
  short sVar36;
  short sVar37;
  undefined8 uVar35;
  short sVar38;
  short sVar41;
  short sVar42;
  short sVar43;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  char cVar44;
  uint uVar45;
  undefined8 uVar46;
  char cVar50;
  byte bVar52;
  uint uVar53;
  undefined1 auVar47 [16];
  uint uVar51;
  uint uVar54;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  short sVar61;
  uint uVar55;
  undefined8 uVar56;
  short sVar62;
  byte bVar65;
  uint uVar66;
  undefined1 auVar57 [16];
  short sVar64;
  uint uVar63;
  uint uVar67;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined2 uVar71;
  undefined2 uVar72;
  undefined2 uVar73;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined2 uVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined8 uVar80;
  undefined8 in_register_000050c8;
  undefined2 uVar84;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 uVar89;
  undefined1 uVar90;
  byte bVar91;
  undefined2 uVar96;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  char cVar97;
  uint uVar98;
  char cVar103;
  uint uVar104;
  uint uVar105;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  uint uVar106;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  uint uVar107;
  uint uVar108;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined2 uVar118;
  undefined2 uVar119;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  short sVar120;
  short sVar121;
  undefined2 uVar122;
  uint uVar123;
  uint uVar127;
  undefined2 uVar128;
  uint uVar129;
  undefined2 uVar130;
  undefined1 auVar124 [16];
  uint uVar131;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  short sVar132;
  short sVar133;
  short sVar134;
  short sVar136;
  short sVar137;
  undefined8 uVar135;
  short sVar138;
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar117 [16];
  
  auVar29 = _DAT_0189cf70;
  auVar28 = _DAT_0189cf60;
  auVar27 = _DAT_0189cf50;
  auVar26 = _DAT_0189cf40;
  auVar25 = _DAT_0189cf30;
  auVar24 = _DAT_0189cf20;
  auVar23 = _DAT_0189cf10;
  auVar22 = _DAT_0189ce40;
  auVar21 = _DAT_0189cd80;
  auVar20 = _DAT_0189cd70;
  if (param_4 == (int *)0x0) {
    do {
      uVar8 = (int)*param_5 * (int)*param_3;
      uVar3 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar3 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar3;
      uVar8 = (int)*param_5 * (int)param_3[1];
      uVar3 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar3 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar3;
      uVar8 = (int)*param_5 * (int)param_3[2];
      uVar3 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar3 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar3;
      uVar8 = (int)*param_5 * (int)param_3[3];
      uVar3 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar3 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar3;
      uVar8 = (int)*param_5 * (int)param_3[4];
      uVar3 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar3 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      param_1[4] = uVar3;
      uVar8 = (int)*param_5 * (int)param_3[5];
      uVar3 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar3 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      param_1[5] = uVar3;
      psVar1 = param_3 + 6;
      param_3 = param_3 + 7;
      uVar8 = (int)*param_5 * (int)*psVar1;
      uVar3 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar3 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      param_2 = param_2 - 1;
      param_1[6] = uVar3;
      param_1 = param_1 + 7;
    } while (param_2 != 0);
  }
  else {
    iVar9 = (int)param_6;
    if (3 < param_2) {
      auVar95._8_8_ = 0;
      auVar95._0_8_ = param_2 - 1;
      uVar32 = (param_2 - 1) * 0xe;
      if (((((uVar32 < ~(ulong)(param_1 + 5) || uVar32 - ~(ulong)(param_1 + 5) == 0) &&
            (SUB168(auVar95 * ZEXT816(0xe),8) == 0)) &&
           (uVar32 < ~(ulong)(param_1 + 6) || uVar32 - ~(ulong)(param_1 + 6) == 0)) &&
          ((uVar32 < ~(ulong)(param_1 + 4) || uVar32 - ~(ulong)(param_1 + 4) == 0 &&
           (uVar32 < ~(ulong)(param_1 + 3) || uVar32 - ~(ulong)(param_1 + 3) == 0)))) &&
         ((uVar32 < ~(ulong)(param_1 + 2) || uVar32 - ~(ulong)(param_1 + 2) == 0 &&
          ((uVar32 < ~(ulong)(param_1 + 1) || uVar32 - ~(ulong)(param_1 + 1) == 0 &&
           (uVar32 < ~(ulong)param_1 || uVar32 - ~(ulong)param_1 == 0)))))) {
        if ((param_3 + param_2 * 7 <= param_1 || param_1 + param_2 * 7 <= param_3) &&
           ((short *)((long)param_5 + 1U) <= param_1 || param_1 + param_2 * 7 <= param_5)) {
          uVar33 = param_2 & 0xfffffffffffffffc;
          psVar1 = param_3 + uVar33 * 7;
          puVar2 = (ushort *)(param_1 + uVar33 * 7);
          piVar31 = param_4;
          uVar32 = uVar33;
          do {
            auVar124._0_8_ = *(ulong *)*(undefined1 (*) [16])((long)param_3 + 0x30);
            auVar124._8_8_ = 0;
            auVar95 = *(undefined1 (*) [16])((long)param_3 + 0x10);
            pauVar10 = (undefined1 (*) [16])((long)param_3 + 0x20);
            uVar80 = *(undefined8 *)(*(undefined1 (*) [16])((long)param_3 + 0x20) + 8);
            sVar120 = (short)((ulong)uVar80 >> 0x10);
            sVar121 = (short)((ulong)uVar80 >> 0x20);
            uVar71 = (undefined2)((ulong)uVar80 >> 0x30);
            auVar85._8_8_ = 0xfffefffefffefffe;
            auVar85._0_8_ = 0xfffe1d1c0f0e0100;
            sVar4 = *param_5;
            auVar85 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])param_3,auVar95,auVar85);
            auVar19._8_8_ = 0xfffefffefffefffe;
            auVar19._0_8_ = 0xfffe1f1e11100302;
            auVar92._10_2_ = sVar120;
            auVar92._0_10_ = *(unkbyte10 *)*pauVar10;
            auVar92._12_2_ = sVar121;
            auVar92._14_2_ = uVar71;
            auVar113._10_2_ = sVar120;
            auVar113._0_10_ = *(unkbyte10 *)*pauVar10;
            auVar113._12_2_ = sVar121;
            auVar113._14_2_ = uVar71;
            auVar99 = NEON_ext(auVar92,auVar113,8,1);
            auVar92 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])param_3,auVar95,auVar19);
            auVar18._8_8_ = 0xfffefffefffefffe;
            auVar18._0_8_ = 0xfffefffe15140706;
            auVar12._10_2_ = sVar120;
            auVar12._0_10_ = *(unkbyte10 *)*pauVar10;
            auVar12._12_2_ = sVar121;
            auVar12._14_2_ = uVar71;
            auVar57 = a64_TBL(ZEXT816(0),auVar12,auVar124,auVar20);
            auVar81 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])param_3,auVar95,auVar21);
            auVar109 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])param_3,auVar95,auVar18);
            auVar17._8_8_ = 0xfffefffefffefffe;
            auVar17._0_8_ = 0x11100302fffefffe;
            auVar100._6_10_ = auVar99._6_10_;
            auVar100._0_4_ = auVar99._0_4_;
            auVar100._4_2_ = (short)*(undefined8 *)*pauVar10;
            auVar13._10_2_ = sVar120;
            auVar13._0_10_ = *(unkbyte10 *)*pauVar10;
            auVar13._12_2_ = sVar121;
            auVar13._14_2_ = uVar71;
            auVar113 = a64_TBL(ZEXT816(0),auVar13,auVar124,auVar17);
            auVar15._8_8_ = 0xfffefffefffefffe;
            auVar15._0_8_ = 0xfffefffe19180b0a;
            auVar16._8_8_ = 0xfffefffefffefffe;
            auVar16._0_8_ = 0xfffefffe17160908;
            uVar32 = uVar32 - 4;
            auVar47 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])param_3,auVar95,auVar15);
            auVar99 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])param_3,auVar95,auVar16);
            uVar14 = NEON_ext(auVar113._0_8_,auVar109._0_8_,4,1);
            uVar46 = NEON_ext(auVar57._0_8_,auVar47._0_8_,4,1);
            uVar56 = NEON_ext(auVar100._0_8_,
                              CONCAT26(auVar95._6_2_,
                                       CONCAT24(auVar95._4_2_,
                                                CONCAT22(auVar95._2_2_,
                                                         (short)((ulong)*(undefined8 *)
                                                                         *(undefined1 (*) [16])
                                                                          param_3 >> 0x20)))),4,1);
            uVar135 = NEON_ext(uVar14,uVar14,4,1);
            uVar35 = NEON_ext(CONCAT26((short)(auVar124._0_8_ >> 0x10),
                                       (int6)*(undefined8 *)*pauVar10),auVar99._0_8_,4,1);
            uVar14 = NEON_ext(uVar46,uVar46,4,1);
            sVar132 = (short)((ulong)uVar14 >> 0x10);
            sVar133 = (short)((ulong)uVar14 >> 0x20);
            sVar134 = (short)((ulong)uVar14 >> 0x30);
            uVar46 = NEON_ext(CONCAT26((short)(auVar124._0_8_ >> 0x30),
                                       CONCAT24((short)uVar80,(int)auVar124._0_8_)),auVar81._0_8_,4,
                              1);
            uVar45 = (int)sVar4 * (int)auVar85._0_2_;
            uVar51 = (int)sVar4 * (int)auVar85._2_2_;
            uVar53 = (int)sVar4 * (int)auVar85._4_2_;
            uVar54 = (int)sVar4 * (int)sVar120;
            uVar123 = (int)sVar4 * (int)auVar92._0_2_;
            uVar127 = (int)sVar4 * (int)auVar92._2_2_;
            uVar129 = (int)sVar4 * (int)auVar92._4_2_;
            uVar131 = (int)sVar4 * (int)sVar121;
            uVar56 = NEON_ext(uVar56,uVar56,4,1);
            auVar86._0_4_ = uVar45 >> 0xc;
            auVar86._4_4_ = uVar51 >> 0xc;
            auVar86._8_4_ = uVar53 >> 0xc;
            auVar86._12_4_ = uVar54 >> 0xc;
            bVar65 = (byte)(uVar129 >> 0x18);
            bVar91 = (byte)(uVar131 >> 0x18);
            sVar136 = (short)((ulong)uVar135 >> 0x10);
            sVar137 = (short)((ulong)uVar135 >> 0x20);
            sVar138 = (short)((ulong)uVar135 >> 0x30);
            uVar98 = (int)sVar4 * (int)(short)uVar135;
            uVar104 = (int)sVar4 * (int)sVar136;
            uVar105 = (int)sVar4 * (int)sVar137;
            uVar106 = (int)sVar4 * (int)sVar138;
            uVar35 = NEON_ext(uVar35,uVar35,4,1);
            uVar8 = (int)sVar4 * (int)(short)uVar14;
            uVar11 = (int)sVar4 * (int)sVar132;
            uVar107 = (int)sVar4 * (int)sVar133;
            uVar108 = (int)sVar4 * (int)sVar134;
            auVar82._0_4_ = -(uint)((int)uVar45 >> 0x1b == (int)uVar45 >> 0x1f);
            auVar82._4_4_ = -(uint)((int)uVar51 >> 0x1b == (int)uVar51 >> 0x1f);
            auVar82._8_4_ = -(uint)((int)uVar53 >> 0x1b == (int)uVar53 >> 0x1f);
            auVar82._12_4_ = -(uint)((int)uVar54 >> 0x1b == (int)uVar54 >> 0x1f);
            cVar44 = (char)((int)uVar45 >> 0x1f);
            cVar50 = (char)((int)uVar51 >> 0x1f);
            auVar83._0_6_ =
                 CONCAT15(cVar50,CONCAT14(cVar50,(uint)(ushort)(CONCAT11(cVar44,cVar44) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar83[6] = 0;
            auVar83[7] = cVar50;
            bVar52 = (byte)((int)uVar53 >> 0x1f);
            auVar83[8] = bVar52 ^ 0xff;
            auVar83[9] = bVar52 ^ 0x7f;
            auVar83[10] = bVar52;
            auVar83[0xb] = bVar52;
            bVar52 = (byte)((int)uVar54 >> 0x1f);
            auVar83[0xc] = bVar52 ^ 0xff;
            auVar83[0xd] = bVar52 ^ 0x7f;
            auVar83[0xe] = bVar52;
            auVar83[0xf] = bVar52;
            auVar93._0_4_ = -(uint)((int)uVar123 >> 0x1b == (int)uVar123 >> 0x1f);
            auVar93._4_4_ = -(uint)((int)uVar127 >> 0x1b == (int)uVar127 >> 0x1f);
            auVar93._8_4_ = -(uint)((int)uVar129 >> 0x1b == (int)uVar129 >> 0x1f);
            auVar93._12_4_ = -(uint)((int)uVar131 >> 0x1b == (int)uVar131 >> 0x1f);
            cVar44 = (char)((int)uVar123 >> 0x1f);
            cVar50 = (char)((int)uVar127 >> 0x1f);
            auVar94._0_6_ =
                 CONCAT15(cVar50,CONCAT14(cVar50,(uint)(ushort)(CONCAT11(cVar44,cVar44) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar94[6] = 0;
            auVar94[7] = cVar50;
            bVar52 = (char)bVar65 >> 7;
            auVar94[8] = bVar52 ^ 0xff;
            auVar94[9] = bVar52 ^ 0x7f;
            auVar94[10] = bVar52;
            auVar94[0xb] = bVar52;
            bVar52 = (char)bVar91 >> 7;
            auVar94[0xc] = bVar52 ^ 0xff;
            auVar94[0xd] = bVar52 ^ 0x7f;
            auVar94[0xe] = bVar52;
            auVar94[0xf] = bVar52;
            sVar61 = (short)((ulong)uVar56 >> 0x10);
            sVar62 = (short)((ulong)uVar56 >> 0x20);
            sVar64 = (short)((ulong)uVar56 >> 0x30);
            uVar55 = (int)sVar4 * (int)(short)uVar56;
            uVar63 = (int)sVar4 * (int)sVar61;
            uVar66 = (int)sVar4 * (int)sVar62;
            uVar67 = (int)sVar4 * (int)sVar64;
            auVar110._0_4_ = uVar98 >> 0xc;
            auVar110._4_4_ = uVar104 >> 0xc;
            auVar110._8_4_ = uVar105 >> 0xc;
            auVar110._12_4_ = uVar106 >> 0xc;
            auVar39._0_8_ = NEON_ext(uVar46,uVar46,4,1);
            auVar39._8_8_ = uVar80;
            auVar83 = auVar83 ^ (auVar83 ^ auVar86) & auVar82;
            sVar36 = (short)((ulong)uVar35 >> 0x10);
            sVar37 = (short)((ulong)uVar35 >> 0x20);
            sVar38 = (short)((ulong)uVar35 >> 0x30);
            uVar45 = (int)sVar4 * (int)(short)uVar35;
            uVar51 = (int)sVar4 * (int)sVar36;
            uVar53 = (int)sVar4 * (int)sVar37;
            uVar54 = (int)sVar4 * (int)sVar38;
            auVar87._0_4_ = uVar8 >> 0xc;
            auVar87._4_4_ = uVar11 >> 0xc;
            auVar87._8_4_ = uVar107 >> 0xc;
            auVar87._12_4_ = uVar108 >> 0xc;
            auVar47._6_2_ = 0;
            auVar47._0_6_ =
                 CONCAT15((char)((uVar127 >> 0xc) >> 8),
                          CONCAT14((char)(uVar127 >> 0xc),uVar123 >> 0xc)) & 0xffff0000ffff;
            auVar47[8] = (char)(uVar129 >> 0xc);
            auVar47[9] = (char)((uVar129 >> 0xc) >> 8);
            auVar47[10] = bVar65 >> 4;
            auVar47[0xb] = 0;
            auVar47[0xc] = (char)(uVar131 >> 0xc);
            auVar47[0xd] = (char)((uVar131 >> 0xc) >> 8);
            auVar47[0xe] = bVar91 >> 4;
            auVar47[0xf] = 0;
            auVar94 = auVar94 ^ (auVar94 ^ auVar47) & auVar93;
            cVar44 = (char)((int)uVar8 >> 0x1f);
            cVar50 = (char)((int)uVar11 >> 0x1f);
            bVar65 = (byte)((int)uVar107 >> 0x1f);
            bVar91 = (byte)((int)uVar108 >> 0x1f);
            sVar5 = (short)(uVar55 >> 0x10);
            sVar6 = (short)(uVar63 >> 0x10);
            sVar7 = (short)(uVar66 >> 0x10);
            auVar114._0_4_ = -(uint)((int)uVar98 >> 0x1b == (int)uVar98 >> 0x1f);
            auVar114._4_4_ = -(uint)((int)uVar104 >> 0x1b == (int)uVar104 >> 0x1f);
            auVar114._8_4_ = -(uint)((int)uVar105 >> 0x1b == (int)uVar105 >> 0x1f);
            auVar114._12_4_ = -(uint)((int)uVar106 >> 0x1b == (int)uVar106 >> 0x1f);
            cVar97 = (char)((int)uVar98 >> 0x1f);
            cVar103 = (char)((int)uVar104 >> 0x1f);
            auVar115._0_6_ =
                 CONCAT15(cVar103,CONCAT14(cVar103,(uint)(ushort)(CONCAT11(cVar97,cVar97) ^ 0x7fff))
                         ) ^ 0x7fff00000000;
            auVar115[6] = 0;
            auVar115[7] = cVar103;
            bVar52 = (byte)((int)uVar105 >> 0x1f);
            auVar115[8] = bVar52 ^ 0xff;
            auVar115[9] = bVar52 ^ 0x7f;
            auVar115[10] = bVar52;
            auVar115[0xb] = bVar52;
            bVar52 = (byte)((int)uVar106 >> 0x1f);
            auVar115[0xc] = bVar52 ^ 0xff;
            auVar115[0xd] = bVar52 ^ 0x7f;
            auVar115[0xe] = bVar52;
            auVar115[0xf] = bVar52;
            sVar41 = (short)((ulong)auVar39._0_8_ >> 0x10);
            sVar42 = (short)((ulong)auVar39._0_8_ >> 0x20);
            sVar43 = (short)((ulong)auVar39._0_8_ >> 0x30);
            uVar98 = (int)sVar4 * (int)(short)auVar39._0_8_;
            uVar104 = (int)sVar4 * (int)sVar41;
            uVar105 = (int)sVar4 * (int)sVar42;
            uVar106 = (int)sVar4 * (int)sVar43;
            auVar115 = auVar115 ^ (auVar115 ^ auVar110) & auVar114;
            auVar101._0_4_ = uVar45 >> 0xc;
            auVar101._4_4_ = uVar51 >> 0xc;
            auVar101._8_4_ = uVar53 >> 0xc;
            auVar101._12_4_ = uVar54 >> 0xc;
            auVar111._0_4_ = (int)uVar45 >> 0x1b;
            auVar111._4_4_ = (int)uVar51 >> 0x1b;
            auVar111._8_4_ = (int)uVar53 >> 0x1b;
            auVar111._12_4_ = (int)uVar54 >> 0x1b;
            auVar68._0_4_ =
                 -(uint)((int)uVar8 >> 0x1b ==
                        CONCAT13(cVar44,CONCAT12(cVar44,CONCAT11(cVar44,cVar44))));
            auVar68._4_4_ =
                 -(uint)((int)uVar11 >> 0x1b ==
                        CONCAT13(cVar50,CONCAT12(cVar50,CONCAT11(cVar50,cVar50))));
            auVar68._8_4_ =
                 -(uint)((int)uVar107 >> 0x1b ==
                        CONCAT13(bVar65,CONCAT12(bVar65,CONCAT11(bVar65,bVar65))));
            auVar68._12_4_ =
                 -(uint)((int)uVar108 >> 0x1b ==
                        CONCAT13(bVar91,CONCAT12(bVar91,CONCAT11(bVar91,bVar91))));
            auVar69._0_6_ =
                 CONCAT15(cVar50,CONCAT14(cVar50,(uint)(ushort)(CONCAT11(cVar44,cVar44) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar69[6] = 0;
            auVar69[7] = cVar50;
            auVar69[8] = bVar65 ^ 0xff;
            auVar69[9] = bVar65 ^ 0x7f;
            auVar69[10] = bVar65;
            auVar69[0xb] = bVar65;
            auVar69[0xc] = bVar91 ^ 0xff;
            auVar69[0xd] = bVar91 ^ 0x7f;
            auVar69[0xe] = bVar91;
            auVar69[0xf] = bVar91;
            auVar75._0_4_ = -(uint)(CONCAT22(sVar5 >> 0xf,sVar5 >> 0xb) == (int)uVar55 >> 0x1f);
            auVar75._4_4_ = -(uint)(CONCAT22(sVar6 >> 0xf,sVar6 >> 0xb) == (int)uVar63 >> 0x1f);
            auVar75._8_4_ = -(uint)(CONCAT22(sVar7 >> 0xf,sVar7 >> 0xb) == (int)uVar66 >> 0x1f);
            auVar75._12_4_ = -(uint)((int)uVar67 >> 0x1b == (int)uVar67 >> 0x1f);
            cVar44 = (char)((int)uVar55 >> 0x1f);
            cVar50 = (char)((int)uVar63 >> 0x1f);
            auVar76._0_6_ =
                 CONCAT15(cVar50,CONCAT14(cVar50,(uint)(ushort)(CONCAT11(cVar44,cVar44) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar76[6] = 0;
            auVar76[7] = cVar50;
            bVar65 = (byte)((int)uVar66 >> 0x1f);
            auVar76[8] = bVar65 ^ 0xff;
            auVar76[9] = bVar65 ^ 0x7f;
            auVar76[10] = bVar65;
            auVar76[0xb] = bVar65;
            bVar65 = (byte)((int)uVar67 >> 0x1f);
            auVar76[0xc] = bVar65 ^ 0xff;
            auVar76[0xd] = bVar65 ^ 0x7f;
            auVar76[0xe] = bVar65;
            auVar76[0xf] = bVar65;
            auVar69 = auVar69 ^ (auVar69 ^ auVar87) & auVar68;
            bVar65 = (byte)(uVar105 >> 0x18);
            bVar91 = (byte)(uVar106 >> 0x18);
            auVar139._0_4_ = (int)uVar98 >> 0x1f;
            auVar139._4_4_ = (int)uVar104 >> 0x1f;
            auVar139._8_4_ = (int)uVar105 >> 0x1f;
            auVar139._12_4_ = (int)uVar106 >> 0x1f;
            auVar109._8_4_ = uVar66 >> 0xc;
            auVar109._0_8_ =
                 (ulong)CONCAT24((short)(uVar63 >> 0xc),uVar55 >> 0xc) & 0xffffffff0000ffff;
            auVar109._12_4_ = uVar67 >> 0xc;
            auVar76 = auVar76 ^ (auVar76 ^ auVar109) & auVar75;
            auVar48._2_2_ = auVar83._4_2_;
            auVar48._0_2_ = auVar83._0_2_;
            uVar84 = auVar83._8_2_;
            auVar58._0_4_ = -(uint)(auVar111._0_4_ == (int)uVar45 >> 0x1f);
            auVar58._4_4_ = -(uint)(auVar111._4_4_ == (int)uVar51 >> 0x1f);
            auVar58._8_4_ = -(uint)(auVar111._8_4_ == (int)uVar53 >> 0x1f);
            auVar58._12_4_ = -(uint)(auVar111._12_4_ == (int)uVar54 >> 0x1f);
            cVar44 = (char)((int)uVar45 >> 0x1f);
            cVar50 = (char)((int)uVar51 >> 0x1f);
            auVar59._0_6_ =
                 CONCAT15(cVar50,CONCAT14(cVar50,(uint)(ushort)(CONCAT11(cVar44,cVar44) ^ 0x7fff)))
                 ^ 0x7fff00000000;
            auVar59[6] = 0;
            auVar59[7] = cVar50;
            bVar52 = (byte)((int)uVar53 >> 0x1f);
            auVar59[8] = bVar52 ^ 0xff;
            auVar59[9] = bVar52 ^ 0x7f;
            auVar59[10] = bVar52;
            auVar59[0xb] = bVar52;
            bVar52 = (byte)((int)uVar54 >> 0x1f);
            auVar59[0xc] = bVar52 ^ 0xff;
            auVar59[0xd] = bVar52 ^ 0x7f;
            auVar59[0xe] = bVar52;
            auVar59[0xf] = bVar52;
            auVar125._0_4_ = -(uint)((int)uVar98 >> 0x1b == auVar139._0_4_);
            auVar125._4_4_ = -(uint)((int)uVar104 >> 0x1b == auVar139._4_4_);
            auVar125._8_4_ = -(uint)((int)uVar105 >> 0x1b == auVar139._8_4_);
            auVar125._12_4_ = -(uint)((int)uVar106 >> 0x1b == auVar139._12_4_);
            cVar44 = (char)((int)uVar104 >> 0x1f);
            auVar126._0_6_ =
                 CONCAT15(cVar44,CONCAT14(cVar44,(uint)(ushort)((ushort)((int)uVar98 >> 0x1f) ^
                                                               0x7fff))) ^ 0x7fff00000000;
            auVar126[6] = 0;
            auVar126[7] = cVar44;
            bVar52 = (char)bVar65 >> 7;
            auVar126[8] = bVar52 ^ 0xff;
            auVar126[9] = bVar52 ^ 0x7f;
            auVar126[10] = bVar52;
            auVar126[0xb] = bVar52;
            bVar52 = (char)bVar91 >> 7;
            auVar126[0xc] = bVar52 ^ 0xff;
            auVar126[0xd] = bVar52 ^ 0x7f;
            auVar126[0xe] = bVar52;
            auVar126[0xf] = bVar52;
            auVar59 = auVar59 ^ (auVar59 ^ auVar101) & auVar58;
            auVar48._4_2_ = uVar84;
            auVar48._6_2_ = auVar83._12_2_;
            uVar118 = auVar115._4_2_;
            uVar34 = CONCAT22(uVar118,auVar115._0_2_);
            uVar119 = auVar115._12_2_;
            auVar57._6_2_ = 0;
            auVar57._0_6_ =
                 CONCAT15((char)((uVar104 >> 0xc) >> 8),
                          CONCAT14((char)(uVar104 >> 0xc),uVar98 >> 0xc)) & 0xffff0000ffff;
            auVar57[8] = (char)(uVar105 >> 0xc);
            auVar57[9] = (char)((uVar105 >> 0xc) >> 8);
            auVar57[10] = bVar65 >> 4;
            auVar57[0xb] = 0;
            auVar57[0xc] = (char)(uVar106 >> 0xc);
            auVar57[0xd] = (char)((uVar106 >> 0xc) >> 8);
            auVar57[0xe] = bVar91 >> 4;
            auVar57[0xf] = 0;
            auVar126 = auVar126 ^ (auVar126 ^ auVar57) & auVar125;
            uVar74 = auVar76._0_2_;
            uVar89 = auVar76[4];
            uVar90 = auVar76[5];
            uVar96 = auVar94._12_2_;
            auVar48._8_2_ = auVar94._0_2_;
            auVar48._10_2_ = auVar94._4_2_;
            auVar48._12_2_ = auVar94._8_2_;
            auVar48._14_2_ = uVar96;
            auVar60._0_6_ = CONCAT24(auVar59._8_2_,CONCAT22(auVar59._4_2_,auVar59._0_2_));
            auVar60._6_2_ = auVar59._12_2_;
            auVar99 = a64_TBL(ZEXT816(0),auVar48,auVar24);
            auVar40._6_10_ = auVar39._6_10_;
            auVar40._4_2_ = (short)(CONCAT13(uVar90,CONCAT12(uVar89,uVar74)) >> 0x10);
            auVar40._2_2_ = auVar115._0_2_;
            auVar40._0_2_ = uVar74;
            uVar122 = auVar126._0_2_;
            auVar70._2_2_ = auVar126._4_2_;
            auVar70._0_2_ = uVar122;
            uVar128 = auVar126._8_2_;
            uVar130 = auVar126._12_2_;
            auVar70._4_2_ = uVar128;
            auVar70._6_2_ = uVar130;
            auVar88._2_2_ = auVar94._4_2_;
            auVar88._0_2_ = auVar94._0_2_;
            auVar88._4_2_ = auVar94._8_2_;
            auVar88._6_2_ = uVar96;
            uVar71 = auVar69._4_2_;
            uVar72 = auVar69._8_2_;
            uVar73 = auVar69._12_2_;
            auVar140._8_8_ = auVar139._8_8_;
            auVar140._0_8_ =
                 NEON_ext(CONCAT17(auVar76[0xd],
                                   CONCAT16(auVar76[0xc],
                                            CONCAT15(auVar76[9],
                                                     CONCAT14(auVar76[8],
                                                              CONCAT13(uVar90,CONCAT12(uVar89,uVar74
                                                                                      )))))),
                          CONCAT26(uVar118,auVar40._0_6_),4,1);
            uVar80 = CONCAT26(auVar59._12_2_,
                              (int6)CONCAT44(CONCAT22(uVar118,uVar119),
                                             CONCAT22(auVar59._4_2_,uVar118)));
            auVar60._8_2_ = auVar69._0_2_;
            auVar60._10_2_ = uVar71;
            auVar60._12_2_ = uVar72;
            auVar60._14_2_ = uVar73;
            auVar70._8_2_ = auVar83._0_2_;
            auVar70._10_2_ = auVar83._4_2_;
            auVar70._12_2_ = uVar84;
            auVar70._14_2_ = auVar83._12_2_;
            auVar102._6_2_ = uVar72;
            auVar102._0_6_ = auVar60._0_6_;
            auVar102._8_8_ = 0;
            auVar116._6_10_ = auVar115._6_10_;
            auVar116._4_2_ = uVar73;
            auVar116._2_2_ = uVar128;
            auVar116._0_2_ = uVar72;
            auVar117._0_6_ = auVar116._0_6_;
            auVar117._6_2_ = uVar130;
            auVar117._8_8_ = 0;
            auVar88._8_2_ = uVar74;
            auVar88._10_2_ = auVar76._4_2_;
            auVar88._12_2_ = auVar76._8_2_;
            auVar88._14_2_ = auVar76._12_2_;
            auVar81[2] = uVar89;
            auVar81._0_2_ = uVar74;
            auVar81[3] = uVar90;
            auVar81[4] = auVar76[8];
            auVar81[5] = auVar76[9];
            auVar81[6] = auVar76[0xc];
            auVar81[7] = auVar76[0xd];
            auVar81[8] = auVar115[0];
            auVar81[9] = auVar115[1];
            auVar81[10] = auVar115[4];
            auVar81[0xb] = auVar115[5];
            auVar81[0xc] = auVar115[8];
            auVar81[0xd] = auVar115[9];
            auVar81[0xe] = auVar115[0xc];
            auVar81[0xf] = auVar115[0xd];
            auVar95 = a64_TBL(ZEXT816(0),auVar81,auVar27);
            auVar112._8_8_ = auVar111._8_8_;
            auVar112._0_8_ = NEON_ext(uVar80,CONCAT26(uVar119,CONCAT24(auVar115._8_2_,uVar34)),4,1);
            uVar80 = NEON_ext(CONCAT26(uVar119,CONCAT24(auVar115._8_2_,uVar34)),uVar80,4,1);
            auVar81 = a64_TBL(ZEXT816(0),auVar99,auVar140,auVar25);
            auVar99 = a64_TBL(ZEXT816(0),auVar60,auVar23);
            auVar57 = a64_TBL(ZEXT816(0),auVar88,auVar29);
            auVar141._14_2_ = auVar99._14_2_;
            auVar141._0_12_ = auVar99._0_12_;
            auVar141._12_2_ = uVar122;
            auVar95 = a64_TBL(ZEXT816(0),auVar95,auVar102,auVar25);
            auVar47 = a64_TBL(ZEXT816(0),auVar70,auVar28);
            auVar99._8_8_ = in_register_000050c8;
            auVar99._0_8_ = uVar80;
            auVar57 = a64_TBL(ZEXT816(0),auVar57,auVar99,auVar25);
            uVar80 = CONCAT26(uVar73,CONCAT24(uVar72,CONCAT22(uVar71,auVar69._0_2_)));
            auVar49._14_2_ = auVar47._14_2_;
            auVar49._0_12_ = auVar47._0_12_;
            auVar49._12_2_ = uVar96;
            auVar77._8_2_ = uVar122;
            auVar77._0_8_ = uVar80;
            auVar77._10_2_ = auVar126._4_2_;
            auVar77._12_2_ = uVar128;
            auVar77._14_2_ = uVar130;
            auVar95 = a64_TBL(ZEXT816(0),auVar95,auVar49,auVar26);
            auVar78._10_6_ = auVar77._10_6_;
            auVar78._8_2_ = uVar71;
            auVar78._0_8_ = uVar80;
            auVar79._0_12_ = auVar78._0_12_;
            auVar79._12_2_ = uVar84;
            auVar79._14_2_ = uVar130;
            auVar47 = a64_TBL(ZEXT816(0),auVar112,auVar117,auVar22);
            auVar99 = a64_TBL(ZEXT816(0),auVar81,auVar141,auVar26);
            *(long *)(param_1 + 0x14) = auVar95._8_8_;
            *(long *)(param_1 + 0x10) = auVar95._0_8_;
            auVar95 = a64_TBL(ZEXT816(0),auVar57,auVar79,auVar26);
            *(long *)(param_1 + 0x18) = auVar47._0_8_;
            *(long *)(param_1 + 4) = auVar99._8_8_;
            *(long *)param_1 = auVar99._0_8_;
            *(long *)(param_1 + 0xc) = auVar95._8_8_;
            *(long *)(param_1 + 8) = auVar95._0_8_;
            param_1 = param_1 + 0x1c;
            param_3 = (short *)(*(undefined1 (*) [16])((long)param_3 + 0x30) + 8);
            piVar31[2] = piVar31[2] +
                         ((((int)auVar92._4_2_ + (int)auVar85._4_2_ + (int)sVar62 + (int)sVar137 +
                            (int)sVar37 + (int)sVar133 + (int)sVar42) * 0x1000) / 7 >> 0xc) * iVar9;
            piVar31[3] = piVar31[3] +
                         ((((int)sVar121 + (int)sVar120 + (int)sVar64 + (int)sVar138 + (int)sVar38 +
                            (int)sVar134 + (int)sVar43) * 0x1000) / 7 >> 0xc) * iVar9;
            *piVar31 = *piVar31 +
                       ((((int)auVar92._0_2_ + (int)auVar85._0_2_ + (int)(short)uVar56 +
                          (int)(short)uVar135 + (int)(short)uVar35 + (int)(short)uVar14 +
                         (int)(short)auVar39._0_8_) * 0x1000) / 7 >> 0xc) * iVar9;
            piVar31[1] = piVar31[1] +
                         ((((int)auVar92._2_2_ + (int)auVar85._2_2_ + (int)sVar61 + (int)sVar136 +
                            (int)sVar36 + (int)sVar132 + (int)sVar41) * 0x1000) / 7 >> 0xc) * iVar9;
            piVar31 = piVar31 + 4;
          } while (uVar32 != 0);
          bVar30 = uVar33 == param_2;
          param_3 = psVar1;
          param_4 = param_4 + uVar33;
          param_2 = param_2 - uVar33;
          param_1 = (short *)puVar2;
          if (bVar30) {
            return;
          }
        }
      }
    }
    do {
      sVar4 = *param_3;
      uVar8 = (int)*param_5 * (int)sVar4;
      uVar3 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar3 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar3;
      sVar5 = param_3[1];
      uVar8 = (int)*param_5 * (int)sVar5;
      uVar3 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar3 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar3;
      sVar6 = param_3[2];
      uVar8 = (int)*param_5 * (int)sVar6;
      uVar3 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar3 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar3;
      sVar7 = param_3[3];
      uVar8 = (int)*param_5 * (int)sVar7;
      uVar3 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar3 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar3;
      sVar36 = param_3[4];
      uVar8 = (int)*param_5 * (int)sVar36;
      uVar3 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar3 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      param_1[4] = uVar3;
      sVar37 = param_3[5];
      uVar8 = (int)*param_5 * (int)sVar37;
      uVar3 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar3 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      param_1[5] = uVar3;
      sVar38 = param_3[6];
      uVar8 = (int)*param_5 * (int)sVar38;
      uVar3 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar3 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      param_1[6] = uVar3;
      param_2 = param_2 - 1;
      *param_4 = *param_4 +
                 ((((int)sVar5 + (int)sVar4 + (int)sVar6 + (int)sVar7 + (int)sVar36 + (int)sVar37 +
                   (int)sVar38) * 0x1000) / 7 >> 0xc) * iVar9;
      param_3 = param_3 + 7;
      param_4 = param_4 + 1;
      param_1 = param_1 + 7;
    } while (param_2 != 0);
  }
                    /* WARNING: Read-only address (ram,0x0189cd70) is written */
                    /* WARNING: Read-only address (ram,0x0189cd80) is written */
                    /* WARNING: Read-only address (ram,0x0189ce40) is written */
                    /* WARNING: Read-only address (ram,0x0189cf10) is written */
                    /* WARNING: Read-only address (ram,0x0189cf20) is written */
                    /* WARNING: Read-only address (ram,0x0189cf30) is written */
                    /* WARNING: Read-only address (ram,0x0189cf40) is written */
                    /* WARNING: Read-only address (ram,0x0189cf50) is written */
                    /* WARNING: Read-only address (ram,0x0189cf60) is written */
                    /* WARNING: Read-only address (ram,0x0189cf70) is written */
  return;
}

