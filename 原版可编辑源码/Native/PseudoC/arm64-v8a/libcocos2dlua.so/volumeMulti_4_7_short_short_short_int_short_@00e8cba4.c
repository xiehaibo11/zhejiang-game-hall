
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void cocos2d::experimental::volumeMulti<4, 7, short, short, short, int, short>(short*, unsigned
   long, short const*, int*, short const*, short) */

void cocos2d::experimental::volumeMulti<4,7,short,short,short,int,short>
               (short *param_1,ulong param_2,short *param_3,int *param_4,short *param_5,
               short param_6)

{
  short *psVar1;
  ushort *puVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  short sVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ushort uVar17;
  int iVar18;
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
  short sVar34;
  short sVar35;
  short sVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  short sVar43;
  short sVar44;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  short sVar45;
  undefined1 auVar42 [16];
  char cVar46;
  int iVar47;
  undefined8 uVar48;
  char cVar53;
  short sVar54;
  byte bVar56;
  undefined1 auVar49 [16];
  short sVar52;
  short sVar55;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined2 uVar63;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined2 uVar64;
  short sVar68;
  short sVar69;
  undefined8 uVar65;
  short sVar70;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined2 uVar76;
  undefined2 uVar77;
  undefined2 uVar78;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  byte bVar81;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 uVar82;
  undefined1 uVar83;
  byte bVar84;
  byte bVar85;
  uint uVar86;
  uint uVar91;
  uint uVar92;
  undefined1 auVar87 [16];
  uint uVar93;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  uint uVar94;
  uint uVar97;
  uint uVar98;
  undefined1 auVar95 [16];
  uint uVar99;
  undefined1 auVar96 [16];
  undefined2 uVar104;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  char cVar105;
  char cVar106;
  undefined1 uVar107;
  undefined1 uVar108;
  undefined1 uVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  undefined2 uVar112;
  undefined2 uVar116;
  undefined2 uVar117;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  short sVar118;
  short sVar119;
  short sVar120;
  uint uVar121;
  uint uVar124;
  uint uVar125;
  uint uVar126;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  uint uVar127;
  uint uVar131;
  uint uVar132;
  uint uVar133;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  int iStack_4c;
  
  auVar29 = _DAT_01428270;
  auVar28 = _DAT_01428260;
  auVar27 = _DAT_01428250;
  auVar26 = _DAT_01428240;
  auVar25 = _DAT_01428230;
  auVar24 = _DAT_01428220;
  auVar23 = _DAT_01428210;
  auVar22 = _DAT_01428090;
  auVar21 = _DAT_01428080;
  auVar20 = _DAT_01428070;
  auVar19 = _DAT_01428060;
  if (param_4 == (int *)0x0) {
    do {
      uVar13 = (int)*param_5 * (int)*param_3;
      uVar17 = (ushort)(uVar13 >> 0xc);
      if ((int)uVar13 >> 0x1f != (int)uVar13 >> 0x1b) {
        uVar17 = (ushort)((int)uVar13 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar17;
      uVar13 = (int)*param_5 * (int)param_3[1];
      uVar17 = (ushort)(uVar13 >> 0xc);
      if ((int)uVar13 >> 0x1f != (int)uVar13 >> 0x1b) {
        uVar17 = (ushort)((int)uVar13 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar17;
      uVar13 = (int)*param_5 * (int)param_3[2];
      uVar17 = (ushort)(uVar13 >> 0xc);
      if ((int)uVar13 >> 0x1f != (int)uVar13 >> 0x1b) {
        uVar17 = (ushort)((int)uVar13 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar17;
      uVar13 = (int)*param_5 * (int)param_3[3];
      uVar17 = (ushort)(uVar13 >> 0xc);
      if ((int)uVar13 >> 0x1f != (int)uVar13 >> 0x1b) {
        uVar17 = (ushort)((int)uVar13 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar17;
      uVar13 = (int)*param_5 * (int)param_3[4];
      uVar17 = (ushort)(uVar13 >> 0xc);
      if ((int)uVar13 >> 0x1f != (int)uVar13 >> 0x1b) {
        uVar17 = (ushort)((int)uVar13 >> 0x1f) ^ 0x7fff;
      }
      param_1[4] = uVar17;
      uVar13 = (int)*param_5 * (int)param_3[5];
      uVar17 = (ushort)(uVar13 >> 0xc);
      if ((int)uVar13 >> 0x1f != (int)uVar13 >> 0x1b) {
        uVar17 = (ushort)((int)uVar13 >> 0x1f) ^ 0x7fff;
      }
      param_1[5] = uVar17;
      psVar1 = param_3 + 6;
      param_3 = param_3 + 7;
      uVar13 = (int)*param_5 * (int)*psVar1;
      uVar17 = (ushort)(uVar13 >> 0xc);
      if ((int)uVar13 >> 0x1f != (int)uVar13 >> 0x1b) {
        uVar17 = (ushort)((int)uVar13 >> 0x1f) ^ 0x7fff;
      }
      param_2 = param_2 - 1;
      param_1[6] = uVar17;
      param_1 = param_1 + 7;
    } while (param_2 != 0);
  }
  else {
    iVar5 = (int)param_6;
    if (3 < param_2) {
      if ((param_3 + param_2 * 7 <= param_1 || param_1 + param_2 * 7 <= param_3) &&
         ((short *)((long)param_5 + 1U) <= param_1 || param_1 + param_2 * 7 <= param_5)) {
        uVar32 = param_2 & 0xfffffffffffffffc;
        psVar1 = param_3 + uVar32 * 7;
        puVar2 = (ushort *)(param_1 + uVar32 * 7);
        piVar31 = param_4;
        uVar33 = uVar32;
        do {
          auVar113._0_8_ = *(ulong *)*(undefined1 (*) [16])((long)param_3 + 0x30);
          auVar113._8_8_ = 0;
          auVar8 = *(undefined1 (*) [16])((long)param_3 + 0x10);
          pauVar6 = (undefined1 (*) [16])((long)param_3 + 0x20);
          uVar38 = *(undefined8 *)(*(undefined1 (*) [16])((long)param_3 + 0x20) + 8);
          uVar82 = (undefined1)((ulong)uVar38 >> 8);
          uVar83 = (undefined1)((ulong)uVar38 >> 0x10);
          uVar107 = (undefined1)((ulong)uVar38 >> 0x18);
          uVar108 = (undefined1)((ulong)uVar38 >> 0x20);
          uVar109 = (undefined1)((ulong)uVar38 >> 0x28);
          uVar110 = (undefined1)((ulong)uVar38 >> 0x30);
          uVar111 = (undefined1)((ulong)uVar38 >> 0x38);
          auVar40._8_4_ = 0xfffefffe;
          auVar40._0_8_ = 0xfffe1d1c0f0e0100;
          sVar7 = *param_5;
          sVar3 = (short)((ulong)uVar38 >> 0x10);
          sVar4 = (short)((ulong)uVar38 >> 0x20);
          auVar40._12_4_ = 0xfffefffe;
          auVar60 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])param_3,auVar8,auVar40);
          auVar49._8_4_ = 0xfffefffe;
          auVar49._0_8_ = 0xfffe1f1e11100302;
          auVar71[9] = uVar82;
          auVar71._0_9_ = *(unkbyte9 *)*pauVar6;
          auVar71[10] = uVar83;
          auVar71[0xb] = uVar107;
          auVar71[0xc] = uVar108;
          auVar71[0xd] = uVar109;
          auVar71[0xe] = uVar110;
          auVar71[0xf] = uVar111;
          auVar134[9] = uVar82;
          auVar134._0_9_ = *(unkbyte9 *)*pauVar6;
          auVar134[10] = uVar83;
          auVar134[0xb] = uVar107;
          auVar134[0xc] = uVar108;
          auVar134[0xd] = uVar109;
          auVar134[0xe] = uVar110;
          auVar134[0xf] = uVar111;
          auVar79 = NEON_ext(auVar71,auVar134,8,1);
          auVar40 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])param_3,auVar8,auVar20);
          auVar49._12_4_ = 0xfffefffe;
          auVar71 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])param_3,auVar8,auVar49);
          auVar87._8_4_ = 0xfffefffe;
          auVar87._0_8_ = 0xfffefffe15140706;
          auVar9[9] = uVar82;
          auVar9._0_9_ = *(unkbyte9 *)*pauVar6;
          auVar9[10] = uVar83;
          auVar9[0xb] = uVar107;
          auVar9[0xc] = uVar108;
          auVar9[0xd] = uVar109;
          auVar9[0xe] = uVar110;
          auVar9[0xf] = uVar111;
          auVar49 = a64_TBL(ZEXT816(0),auVar9,auVar113,auVar21);
          auVar100 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])param_3,auVar8,auVar19);
          auVar87._12_4_ = 0xfffefffe;
          auVar87 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])param_3,auVar8,auVar87);
          auVar95._8_4_ = 0xfffefffe;
          auVar95._0_8_ = 0x11100302fffefffe;
          auVar134 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])param_3,auVar8,auVar22);
          auVar80._6_10_ = auVar79._6_10_;
          auVar80._0_4_ = auVar79._0_4_;
          auVar80._4_2_ = (short)*(undefined8 *)*pauVar6;
          auVar95._12_4_ = 0xfffefffe;
          auVar10[9] = uVar82;
          auVar10._0_9_ = *(unkbyte9 *)*pauVar6;
          auVar10[10] = uVar83;
          auVar10[0xb] = uVar107;
          auVar10[0xc] = uVar108;
          auVar10[0xd] = uVar109;
          auVar10[0xe] = uVar110;
          auVar10[0xf] = uVar111;
          auVar95 = a64_TBL(ZEXT816(0),auVar10,auVar113,auVar95);
          uVar39 = NEON_ext(auVar95._0_8_,auVar87._0_8_,4,1);
          auVar41._8_8_ = auVar40._8_8_;
          uVar37 = NEON_ext(auVar49._0_8_,auVar40._0_8_,4,1);
          uVar65 = NEON_ext(uVar39,uVar39,4,1);
          uVar39 = NEON_ext(uVar37,uVar37,4,1);
          sVar118 = (short)((ulong)uVar39 >> 0x10);
          sVar119 = (short)((ulong)uVar39 >> 0x20);
          sVar120 = (short)((ulong)uVar39 >> 0x30);
          uVar37 = NEON_ext(CONCAT26((short)(auVar113._0_8_ >> 0x30),
                                     CONCAT24((short)uVar38,(int)auVar113._0_8_)),auVar134._0_8_,4,1
                           );
          uVar13 = (int)sVar7 * (int)auVar60._0_2_;
          uVar14 = (int)sVar7 * (int)auVar60._2_2_;
          uVar15 = (int)sVar7 * (int)auVar60._4_2_;
          uVar16 = (int)sVar7 * (int)sVar3;
          uVar121 = (int)sVar7 * (int)auVar71._0_2_;
          uVar124 = (int)sVar7 * (int)auVar71._2_2_;
          uVar125 = (int)sVar7 * (int)auVar71._4_2_;
          uVar126 = (int)sVar7 * (int)sVar4;
          uVar48 = NEON_ext(auVar80._0_8_,
                            CONCAT17(auVar8[7],
                                     CONCAT16(auVar8[6],
                                              CONCAT15(auVar8[5],
                                                       CONCAT14(auVar8[4],
                                                                CONCAT13(auVar8[3],
                                                                         CONCAT12(auVar8[2],
                                                                                  (short)((ulong)*(
                                                  undefined8 *)*(undefined1 (*) [16])param_3 >> 0x20
                                                  ))))))),4,1);
          uVar38 = NEON_ext(CONCAT26((short)(auVar113._0_8_ >> 0x10),(int6)*(undefined8 *)*pauVar6),
                            auVar100._0_8_,4,1);
          auVar135._0_4_ = uVar13 >> 0xc;
          auVar135._4_4_ = uVar14 >> 0xc;
          auVar135._8_4_ = uVar15 >> 0xc;
          auVar135._12_4_ = uVar16 >> 0xc;
          cVar105 = (char)((int)uVar13 >> 0x1f);
          cVar106 = (char)((int)uVar14 >> 0x1f);
          bVar56 = (byte)((int)uVar15 >> 0x1f);
          bVar81 = (byte)((int)uVar16 >> 0x1f);
          cVar46 = (char)((int)uVar121 >> 0x1f);
          cVar53 = (char)((int)uVar124 >> 0x1f);
          bVar84 = (byte)((int)uVar125 >> 0x1f);
          bVar85 = (byte)((int)uVar126 >> 0x1f);
          sVar68 = (short)((ulong)uVar65 >> 0x10);
          sVar69 = (short)((ulong)uVar65 >> 0x20);
          sVar70 = (short)((ulong)uVar65 >> 0x30);
          uVar86 = (int)sVar7 * (int)(short)uVar65;
          uVar91 = (int)sVar7 * (int)sVar68;
          uVar92 = (int)sVar7 * (int)sVar69;
          uVar93 = (int)sVar7 * (int)sVar70;
          uVar48 = NEON_ext(uVar48,uVar48,4,1);
          uVar38 = NEON_ext(uVar38,uVar38,4,1);
          sVar34 = (short)((ulong)uVar38 >> 0x10);
          sVar35 = (short)((ulong)uVar38 >> 0x20);
          sVar36 = (short)((ulong)uVar38 >> 0x30);
          auVar72._0_4_ = uVar121 >> 0xc;
          auVar72._4_4_ = uVar124 >> 0xc;
          auVar72._8_4_ = uVar125 >> 0xc;
          auVar72._12_4_ = uVar126 >> 0xc;
          uVar94 = (int)sVar7 * (int)(short)uVar39;
          uVar97 = (int)sVar7 * (int)sVar118;
          uVar98 = (int)sVar7 * (int)sVar119;
          uVar99 = (int)sVar7 * (int)sVar120;
          auVar122._0_4_ =
               -(uint)((int)uVar13 >> 0x1b ==
                      CONCAT13(cVar105,CONCAT12(cVar105,CONCAT11(cVar105,cVar105))));
          auVar122._4_4_ =
               -(uint)((int)uVar14 >> 0x1b ==
                      CONCAT13(cVar106,CONCAT12(cVar106,CONCAT11(cVar106,cVar106))));
          auVar122._8_4_ =
               -(uint)((int)uVar15 >> 0x1b ==
                      CONCAT13(bVar56,CONCAT12(bVar56,CONCAT11(bVar56,bVar56))));
          auVar122._12_4_ =
               -(uint)((int)uVar16 >> 0x1b ==
                      CONCAT13(bVar81,CONCAT12(bVar81,CONCAT11(bVar81,bVar81))));
          auVar61._0_4_ =
               -(uint)((int)uVar121 >> 0x1b ==
                      CONCAT13(cVar46,CONCAT12(cVar46,CONCAT11(cVar46,cVar46))));
          auVar61._4_4_ =
               -(uint)((int)uVar124 >> 0x1b ==
                      CONCAT13(cVar53,CONCAT12(cVar53,CONCAT11(cVar53,cVar53))));
          auVar61._8_4_ =
               -(uint)((int)uVar125 >> 0x1b ==
                      CONCAT13(bVar84,CONCAT12(bVar84,CONCAT11(bVar84,bVar84))));
          auVar61._12_4_ = -(uint)((int)uVar126 >> 0x1b == (int)uVar126 >> 0x1f);
          auVar62._0_6_ =
               CONCAT15(cVar53,CONCAT14(cVar53,(uint)(ushort)(CONCAT11(cVar46,cVar46) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar62[6] = 0;
          auVar62[7] = cVar53;
          auVar62[8] = bVar84 ^ 0xff;
          auVar62[9] = bVar84 ^ 0x7f;
          auVar62[10] = bVar84;
          auVar62[0xb] = bVar84;
          auVar62[0xc] = bVar85 ^ 0xff;
          auVar62[0xd] = bVar85 ^ 0x7f;
          auVar62[0xe] = bVar85;
          auVar62[0xf] = bVar85;
          bVar84 = (byte)(uVar92 >> 0x18);
          bVar85 = (byte)(uVar93 >> 0x18);
          auVar41._0_8_ = NEON_ext(uVar37,uVar37,4,1);
          sVar52 = (short)((ulong)uVar48 >> 0x10);
          sVar54 = (short)((ulong)uVar48 >> 0x20);
          sVar55 = (short)((ulong)uVar48 >> 0x30);
          uVar121 = (int)sVar7 * (int)(short)uVar48;
          uVar124 = (int)sVar7 * (int)sVar52;
          uVar125 = (int)sVar7 * (int)sVar54;
          uVar126 = (int)sVar7 * (int)sVar55;
          auVar11[6] = 0;
          auVar11._0_6_ =
               CONCAT15(cVar106,CONCAT14(cVar106,(uint)(ushort)(CONCAT11(cVar105,cVar105) ^ 0x7fff))
                       ) ^ 0x7fff00000000;
          auVar11[7] = cVar106;
          auVar11[8] = bVar56 ^ 0xff;
          auVar11[9] = bVar56 ^ 0x7f;
          auVar11[10] = bVar56;
          auVar11[0xb] = bVar56;
          auVar11[0xc] = bVar81 ^ 0xff;
          auVar11[0xd] = bVar81 ^ 0x7f;
          auVar11[0xe] = bVar81;
          auVar11[0xf] = bVar81;
          auVar123[6] = 0;
          auVar123._0_6_ =
               CONCAT15(cVar106,CONCAT14(cVar106,(uint)(ushort)(CONCAT11(cVar105,cVar105) ^ 0x7fff))
                       ) ^ 0x7fff00000000;
          auVar123[7] = cVar106;
          auVar123[8] = bVar56 ^ 0xff;
          auVar123[9] = bVar56 ^ 0x7f;
          auVar123[10] = bVar56;
          auVar123[0xb] = bVar56;
          auVar123[0xc] = bVar81 ^ 0xff;
          auVar123[0xd] = bVar81 ^ 0x7f;
          auVar123[0xe] = bVar81;
          auVar123[0xf] = bVar81;
          auVar123 = auVar123 ^ (auVar11 ^ auVar135) & auVar122;
          uVar13 = (int)sVar7 * (int)(short)uVar38;
          uVar14 = (int)sVar7 * (int)sVar34;
          uVar15 = (int)sVar7 * (int)sVar35;
          uVar16 = (int)sVar7 * (int)sVar36;
          auVar62 = auVar62 ^ (auVar62 ^ auVar72) & auVar61;
          auVar101._0_4_ = -(uint)((int)uVar86 >> 0x1b == (int)uVar86 >> 0x1f);
          auVar101._4_4_ = -(uint)((int)uVar91 >> 0x1b == (int)uVar91 >> 0x1f);
          auVar101._8_4_ = -(uint)((int)uVar92 >> 0x1b == (int)uVar92 >> 0x1f);
          auVar101._12_4_ = -(uint)((int)uVar93 >> 0x1b == (int)uVar93 >> 0x1f);
          cVar46 = (char)((int)uVar86 >> 0x1f);
          cVar53 = (char)((int)uVar91 >> 0x1f);
          auVar102._0_6_ =
               CONCAT15(cVar53,CONCAT14(cVar53,(uint)(ushort)(CONCAT11(cVar46,cVar46) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar102[6] = 0;
          auVar102[7] = cVar53;
          bVar56 = (char)bVar84 >> 7;
          auVar102[8] = bVar56 ^ 0xff;
          auVar102[9] = bVar56 ^ 0x7f;
          auVar102[10] = bVar56;
          auVar102[0xb] = bVar56;
          bVar56 = (char)bVar85 >> 7;
          auVar102[0xc] = bVar56 ^ 0xff;
          auVar102[0xd] = bVar56 ^ 0x7f;
          auVar102[0xe] = bVar56;
          auVar102[0xf] = bVar56;
          auVar136._0_4_ = uVar94 >> 0xc;
          auVar136._4_4_ = uVar97 >> 0xc;
          auVar136._8_4_ = uVar98 >> 0xc;
          auVar136._12_4_ = uVar99 >> 0xc;
          sVar43 = (short)((ulong)auVar41._0_8_ >> 0x10);
          sVar44 = (short)((ulong)auVar41._0_8_ >> 0x20);
          sVar45 = (short)((ulong)auVar41._0_8_ >> 0x30);
          uVar127 = (int)sVar7 * (int)(short)auVar41._0_8_;
          uVar131 = (int)sVar7 * (int)sVar43;
          uVar132 = (int)sVar7 * (int)sVar44;
          uVar133 = (int)sVar7 * (int)sVar45;
          auVar96._0_4_ = uVar121 >> 0xc;
          auVar96._4_4_ = uVar124 >> 0xc;
          auVar96._8_4_ = uVar125 >> 0xc;
          auVar96._12_4_ = uVar126 >> 0xc;
          auVar8._6_2_ = 0;
          auVar8._0_6_ = CONCAT15((char)((uVar91 >> 0xc) >> 8),
                                  CONCAT14((char)(uVar91 >> 0xc),uVar86 >> 0xc)) & 0xffff0000ffff;
          auVar8[8] = (char)(uVar92 >> 0xc);
          auVar8[9] = (char)((uVar92 >> 0xc) >> 8);
          auVar8[10] = bVar84 >> 4;
          auVar8[0xb] = 0;
          auVar8[0xc] = (char)(uVar93 >> 0xc);
          auVar8[0xd] = (char)((uVar93 >> 0xc) >> 8);
          auVar8[0xe] = bVar85 >> 4;
          auVar8[0xf] = 0;
          auVar102 = auVar102 ^ (auVar102 ^ auVar8) & auVar101;
          bVar84 = (byte)(uVar15 >> 0x18);
          bVar85 = (byte)(uVar16 >> 0x18);
          auVar73._0_4_ = -(uint)((int)uVar94 >> 0x1b == (int)uVar94 >> 0x1f);
          auVar73._4_4_ = -(uint)((int)uVar97 >> 0x1b == (int)uVar97 >> 0x1f);
          auVar73._8_4_ = -(uint)((int)uVar98 >> 0x1b == (int)uVar98 >> 0x1f);
          auVar73._12_4_ = -(uint)((int)uVar99 >> 0x1b == (int)uVar99 >> 0x1f);
          cVar46 = (char)((int)uVar97 >> 0x1f);
          bVar56 = (byte)((int)uVar98 >> 0x1f);
          bVar81 = (byte)((int)uVar99 >> 0x1f);
          uVar17 = (ushort)((int)uVar94 >> 0x1f);
          auVar12[6] = 0;
          auVar12._0_6_ = CONCAT15(cVar46,CONCAT14(cVar46,(uint)(uVar17 ^ 0x7fff))) ^ 0x7fff00000000
          ;
          auVar12[7] = cVar46;
          auVar12[8] = bVar56 ^ 0xff;
          auVar12[9] = bVar56 ^ 0x7f;
          auVar12[10] = bVar56;
          auVar12[0xb] = bVar56;
          auVar12[0xc] = bVar81 ^ 0xff;
          auVar12[0xd] = bVar81 ^ 0x7f;
          auVar12[0xe] = bVar81;
          auVar12[0xf] = bVar81;
          auVar74[6] = 0;
          auVar74._0_6_ = CONCAT15(cVar46,CONCAT14(cVar46,(uint)(uVar17 ^ 0x7fff))) ^ 0x7fff00000000
          ;
          auVar74[7] = cVar46;
          auVar74[8] = bVar56 ^ 0xff;
          auVar74[9] = bVar56 ^ 0x7f;
          auVar74[10] = bVar56;
          auVar74[0xb] = bVar56;
          auVar74[0xc] = bVar81 ^ 0xff;
          auVar74[0xd] = bVar81 ^ 0x7f;
          auVar74[0xe] = bVar81;
          auVar74[0xf] = bVar81;
          auVar74 = auVar74 ^ (auVar12 ^ auVar136) & auVar73;
          auVar137._0_4_ = uVar127 >> 0xc;
          auVar137._4_4_ = uVar131 >> 0xc;
          auVar137._8_4_ = uVar132 >> 0xc;
          auVar137._12_4_ = uVar133 >> 0xc;
          auVar66._0_4_ = -(uint)((int)uVar121 >> 0x1b == (int)uVar121 >> 0x1f);
          auVar66._4_4_ = -(uint)((int)uVar124 >> 0x1b == (int)uVar124 >> 0x1f);
          auVar66._8_4_ = -(uint)((int)uVar125 >> 0x1b == (int)uVar125 >> 0x1f);
          auVar66._12_4_ = -(uint)((int)uVar126 >> 0x1b == (int)uVar126 >> 0x1f);
          cVar46 = (char)((int)uVar121 >> 0x1f);
          cVar53 = (char)((int)uVar124 >> 0x1f);
          auVar67._0_6_ =
               CONCAT15(cVar53,CONCAT14(cVar53,(uint)(ushort)(CONCAT11(cVar46,cVar46) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar67[6] = 0;
          auVar67[7] = cVar53;
          bVar56 = (byte)((int)uVar125 >> 0x1f);
          auVar67[8] = bVar56 ^ 0xff;
          auVar67[9] = bVar56 ^ 0x7f;
          auVar67[10] = bVar56;
          auVar67[0xb] = bVar56;
          bVar56 = (byte)((int)uVar126 >> 0x1f);
          auVar67[0xc] = bVar56 ^ 0xff;
          auVar67[0xd] = bVar56 ^ 0x7f;
          auVar67[0xe] = bVar56;
          auVar67[0xf] = bVar56;
          auVar88._0_4_ = -(uint)((int)uVar13 >> 0x1b == (int)uVar13 >> 0x1f);
          auVar88._4_4_ = -(uint)((int)uVar14 >> 0x1b == (int)uVar14 >> 0x1f);
          auVar88._8_4_ = -(uint)((int)uVar15 >> 0x1b == (int)uVar15 >> 0x1f);
          auVar88._12_4_ = -(uint)((int)uVar16 >> 0x1b == (int)uVar16 >> 0x1f);
          cVar46 = (char)((int)uVar13 >> 0x1f);
          cVar53 = (char)((int)uVar14 >> 0x1f);
          auVar89._0_6_ =
               CONCAT15(cVar53,CONCAT14(cVar53,(uint)(ushort)(CONCAT11(cVar46,cVar46) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar89[6] = 0;
          auVar89[7] = cVar53;
          bVar56 = (char)bVar84 >> 7;
          auVar89[8] = bVar56 ^ 0xff;
          auVar89[9] = bVar56 ^ 0x7f;
          auVar89[10] = bVar56;
          auVar89[0xb] = bVar56;
          bVar56 = (char)bVar85 >> 7;
          auVar89[0xc] = bVar56 ^ 0xff;
          auVar89[0xd] = bVar56 ^ 0x7f;
          auVar89[0xe] = bVar56;
          auVar89[0xf] = bVar56;
          auVar67 = auVar67 ^ (auVar67 ^ auVar96) & auVar66;
          auVar114._0_4_ = -(uint)((int)uVar127 >> 0x1b == (int)uVar127 >> 0x1f);
          auVar114._4_4_ = -(uint)((int)uVar131 >> 0x1b == (int)uVar131 >> 0x1f);
          auVar114._8_4_ = -(uint)((int)uVar132 >> 0x1b == (int)uVar132 >> 0x1f);
          auVar114._12_4_ = -(uint)((int)uVar133 >> 0x1b == (int)uVar133 >> 0x1f);
          cVar46 = (char)((int)uVar127 >> 0x1f);
          cVar53 = (char)((int)uVar131 >> 0x1f);
          auVar115._0_6_ =
               CONCAT15(cVar53,CONCAT14(cVar53,(uint)(ushort)(CONCAT11(cVar46,cVar46) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar115[6] = 0;
          auVar115[7] = cVar53;
          bVar56 = (byte)((int)uVar132 >> 0x1f);
          auVar115[8] = bVar56 ^ 0xff;
          auVar115[9] = bVar56 ^ 0x7f;
          auVar115[10] = bVar56;
          auVar115[0xb] = bVar56;
          bVar56 = (byte)((int)uVar133 >> 0x1f);
          auVar115[0xc] = bVar56 ^ 0xff;
          auVar115[0xd] = bVar56 ^ 0x7f;
          auVar115[0xe] = bVar56;
          auVar115[0xf] = bVar56;
          auVar79._6_2_ = 0;
          auVar79._0_6_ =
               CONCAT15((char)((uVar14 >> 0xc) >> 8),CONCAT14((char)(uVar14 >> 0xc),uVar13 >> 0xc))
               & 0xffff0000ffff;
          auVar79[8] = (char)(uVar15 >> 0xc);
          auVar79[9] = (char)((uVar15 >> 0xc) >> 8);
          auVar79[10] = bVar84 >> 4;
          auVar79[0xb] = 0;
          auVar79[0xc] = (char)(uVar16 >> 0xc);
          auVar79[0xd] = (char)((uVar16 >> 0xc) >> 8);
          auVar79[0xe] = bVar85 >> 4;
          auVar79[0xf] = 0;
          auVar89 = auVar89 ^ (auVar89 ^ auVar79) & auVar88;
          auVar57[2] = auVar123[4];
          auVar57._0_2_ = auVar123._0_2_;
          auVar57[3] = auVar123[5];
          auVar57[4] = auVar123[8];
          auVar57[5] = auVar123[9];
          auVar57[6] = auVar123[0xc];
          auVar57[7] = auVar123[0xd];
          uVar104 = auVar102._4_2_;
          uVar37 = CONCAT26(auVar102._12_2_,
                            CONCAT24(auVar102._8_2_,CONCAT22(uVar104,auVar102._0_2_)));
          auVar115 = auVar115 ^ (auVar115 ^ auVar137) & auVar114;
          uVar64 = auVar67._0_2_;
          uVar82 = auVar67[4];
          uVar83 = auVar67[5];
          uVar63 = auVar62._12_2_;
          auVar57._8_2_ = auVar62._0_2_;
          auVar57._10_2_ = auVar62._4_2_;
          auVar57._12_2_ = auVar62._8_2_;
          auVar57._14_2_ = uVar63;
          auVar50._2_2_ = auVar62._4_2_;
          auVar50._0_2_ = auVar62._0_2_;
          auVar50._4_2_ = auVar62._8_2_;
          auVar50._6_2_ = uVar63;
          auVar90._0_6_ = CONCAT24(auVar89._8_2_,CONCAT22(auVar89._4_2_,auVar89._0_2_));
          auVar90._6_2_ = auVar89._12_2_;
          uVar13 = (int)auVar71._0_2_ + (int)auVar60._0_2_ + (int)(short)uVar48 + (int)(short)uVar65
                   + (int)(short)uVar38 + (int)(short)uVar39 + (int)(short)auVar41._0_8_;
          auVar40 = a64_TBL(ZEXT816(0),auVar57,auVar24);
          auVar42._6_10_ = auVar41._6_10_;
          auVar42._4_2_ = (short)(CONCAT13(uVar83,CONCAT12(uVar82,uVar64)) >> 0x10);
          auVar42._2_2_ = auVar102._0_2_;
          auVar42._0_2_ = uVar64;
          uVar112 = auVar115._0_2_;
          auVar75._2_2_ = auVar115._4_2_;
          auVar75._0_2_ = uVar112;
          uVar116 = auVar115._8_2_;
          uVar117 = auVar115._12_2_;
          auVar75._4_2_ = uVar116;
          auVar75._6_2_ = uVar117;
          uVar76 = auVar74._4_2_;
          uVar77 = auVar74._8_2_;
          uVar78 = auVar74._12_2_;
          auVar138._8_8_ = auVar137._8_8_;
          auVar138._0_8_ =
               NEON_ext(CONCAT17(auVar67[0xd],
                                 CONCAT16(auVar67[0xc],
                                          CONCAT15(auVar67[9],
                                                   CONCAT14(auVar67[8],
                                                            CONCAT13(uVar83,CONCAT12(uVar82,uVar64))
                                                           )))),CONCAT26(uVar104,auVar42._0_6_),4,1)
          ;
          uVar38 = CONCAT26(auVar89._12_2_,
                            (int6)CONCAT44(CONCAT22(uVar104,auVar102._12_2_),
                                           CONCAT22(auVar89._4_2_,uVar104)));
          auVar90._8_2_ = auVar74._0_2_;
          auVar90._10_2_ = uVar76;
          auVar90._12_2_ = uVar77;
          auVar90._14_2_ = uVar78;
          auVar75._8_2_ = auVar123._0_2_;
          auVar75._10_2_ = auVar123._4_2_;
          auVar75._12_2_ = auVar123._8_2_;
          auVar75._14_2_ = auVar123._12_2_;
          auVar50._8_2_ = uVar64;
          auVar50._10_2_ = auVar67._4_2_;
          auVar50._12_2_ = auVar67._8_2_;
          auVar50._14_2_ = auVar67._12_2_;
          auVar95 = a64_TBL(ZEXT816(0),auVar50,auVar29);
          auVar103._8_8_ = auVar102._8_8_;
          auVar103._0_8_ = NEON_ext(uVar37,uVar38,4,1);
          uVar38 = NEON_ext(uVar38,uVar37,4,1);
          auVar51._6_10_ = auVar50._6_10_;
          auVar51._4_2_ = uVar78;
          auVar51._2_2_ = uVar116;
          auVar51._0_2_ = uVar77;
          iVar47 = uVar13 * 0x1000;
          uVar39 = NEON_ext(CONCAT26(uVar117,auVar51._0_6_),uVar38,4,1);
          auVar59._6_2_ = uVar77;
          auVar59._0_6_ = auVar90._0_6_;
          auVar59._8_8_ = 0;
          auVar87 = a64_TBL(ZEXT816(0),auVar40,auVar138,auVar25);
          auVar100[2] = uVar82;
          auVar100._0_2_ = uVar64;
          auVar100[3] = uVar83;
          auVar100[4] = auVar67[8];
          auVar100[5] = auVar67[9];
          auVar100[6] = auVar67[0xc];
          auVar100[7] = auVar67[0xd];
          auVar100[8] = auVar102[0];
          auVar100[9] = auVar102[1];
          auVar100[10] = auVar102[4];
          auVar100[0xb] = auVar102[5];
          auVar100[0xc] = auVar102[8];
          auVar100[0xd] = auVar102[9];
          auVar100[0xe] = auVar102[0xc];
          auVar100[0xf] = auVar102[0xd];
          auVar40 = a64_TBL(ZEXT816(0),auVar100,auVar27);
          auVar49 = a64_TBL(ZEXT816(0),auVar90,auVar23);
          auVar139._14_2_ = auVar49._14_2_;
          auVar139._0_12_ = auVar49._0_12_;
          auVar139._12_2_ = uVar112;
          auVar40 = a64_TBL(ZEXT816(0),auVar40,auVar59,auVar25);
          auVar49 = a64_TBL(ZEXT816(0),auVar75,auVar28);
          auVar87 = a64_TBL(ZEXT816(0),auVar87,auVar139,auVar26);
          auVar58._14_2_ = auVar49._14_2_;
          auVar58._0_12_ = auVar49._0_12_;
          auVar58._12_2_ = uVar63;
          auVar95 = a64_TBL(ZEXT816(0),auVar95,auVar103,auVar25);
          uVar38 = CONCAT26(uVar78,CONCAT24(uVar77,CONCAT22(uVar76,auVar74._0_2_)));
          auVar128._8_2_ = uVar112;
          auVar128._0_8_ = uVar38;
          auVar128._10_2_ = auVar115._4_2_;
          auVar128._12_2_ = uVar116;
          auVar128._14_2_ = uVar117;
          auVar129._10_6_ = auVar128._10_6_;
          auVar129._8_2_ = uVar76;
          auVar129._0_8_ = uVar38;
          uVar38 = NEON_ext(uVar39,uVar39,4,1);
          auVar130._0_12_ = auVar129._0_12_;
          auVar130._12_2_ = auVar123._8_2_;
          auVar130._14_2_ = uVar117;
          auVar49 = a64_TBL(ZEXT816(0),auVar40,auVar58,auVar26);
          *(undefined8 *)(param_1 + 0x18) = uVar38;
          auVar40 = a64_TBL(ZEXT816(0),auVar95,auVar130,auVar26);
          *(long *)(param_1 + 0xc) = auVar40._8_8_;
          *(long *)(param_1 + 8) = auVar40._0_8_;
          *(long *)(param_1 + 0x14) = auVar49._8_8_;
          *(long *)(param_1 + 0x10) = auVar49._0_8_;
          iVar18 = (((int)auVar71._2_2_ + (int)auVar60._2_2_ + (int)sVar52 + (int)sVar68 +
                     (int)sVar34 + (int)sVar118 + (int)sVar43) * 0x1000) / 7;
          *(long *)(param_1 + 4) = auVar87._8_8_;
          *(long *)param_1 = auVar87._0_8_;
          iVar47 = iVar47 / 7 + (iVar47 >> 0x1f) + ((uVar13 & 0xfffff) >> 0x13);
          iStack_4c = (int)(CONCAT26(param_6 >> 0xf,CONCAT24(param_6,iVar5)) >> 0x20);
          uVar33 = uVar33 - 4;
          param_1 = param_1 + 0x1c;
          param_3 = (short *)(*(undefined1 (*) [16])((long)param_3 + 0x30) + 8);
          piVar31[2] = piVar31[2] +
                       ((((int)auVar71._4_2_ + (int)auVar60._4_2_ + (int)sVar54 + (int)sVar69 +
                          (int)sVar35 + (int)sVar119 + (int)sVar44) * 0x1000) / 7 >> 0xc) * iVar5;
          piVar31[3] = piVar31[3] +
                       ((((int)sVar4 + (int)sVar3 + (int)sVar55 + (int)sVar70 + (int)sVar36 +
                          (int)sVar120 + (int)sVar45) * 0x1000) / 7 >> 0xc) * iVar5;
          *piVar31 = *piVar31 + CONCAT22((short)(iVar47 >> 0x1c),(short)(iVar47 >> 0xc)) * iVar5;
          piVar31[1] = piVar31[1] +
                       CONCAT22((short)(iVar18 >> 0x1c),(short)(iVar18 >> 0xc)) * iStack_4c;
          piVar31 = piVar31 + 4;
        } while (uVar33 != 0);
        bVar30 = uVar32 == param_2;
        param_3 = psVar1;
        param_4 = param_4 + uVar32;
        param_2 = param_2 - uVar32;
        param_1 = (short *)puVar2;
        if (bVar30) {
          return;
        }
      }
    }
    do {
      sVar7 = *param_3;
      uVar13 = (int)*param_5 * (int)sVar7;
      uVar17 = (ushort)(uVar13 >> 0xc);
      if ((int)uVar13 >> 0x1f != (int)uVar13 >> 0x1b) {
        uVar17 = (ushort)((int)uVar13 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar17;
      sVar3 = param_3[1];
      uVar13 = (int)*param_5 * (int)sVar3;
      uVar17 = (ushort)(uVar13 >> 0xc);
      if ((int)uVar13 >> 0x1f != (int)uVar13 >> 0x1b) {
        uVar17 = (ushort)((int)uVar13 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar17;
      sVar4 = param_3[2];
      uVar13 = (int)*param_5 * (int)sVar4;
      uVar17 = (ushort)(uVar13 >> 0xc);
      if ((int)uVar13 >> 0x1f != (int)uVar13 >> 0x1b) {
        uVar17 = (ushort)((int)uVar13 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar17;
      sVar34 = param_3[3];
      uVar13 = (int)*param_5 * (int)sVar34;
      uVar17 = (ushort)(uVar13 >> 0xc);
      if ((int)uVar13 >> 0x1f != (int)uVar13 >> 0x1b) {
        uVar17 = (ushort)((int)uVar13 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar17;
      sVar35 = param_3[4];
      uVar13 = (int)*param_5 * (int)sVar35;
      uVar17 = (ushort)(uVar13 >> 0xc);
      if ((int)uVar13 >> 0x1f != (int)uVar13 >> 0x1b) {
        uVar17 = (ushort)((int)uVar13 >> 0x1f) ^ 0x7fff;
      }
      param_1[4] = uVar17;
      sVar36 = param_3[5];
      uVar13 = (int)*param_5 * (int)sVar36;
      uVar17 = (ushort)(uVar13 >> 0xc);
      if ((int)uVar13 >> 0x1f != (int)uVar13 >> 0x1b) {
        uVar17 = (ushort)((int)uVar13 >> 0x1f) ^ 0x7fff;
      }
      param_1[5] = uVar17;
      sVar43 = param_3[6];
      uVar13 = (int)*param_5 * (int)sVar43;
      uVar17 = (ushort)(uVar13 >> 0xc);
      if ((int)uVar13 >> 0x1f != (int)uVar13 >> 0x1b) {
        uVar17 = (ushort)((int)uVar13 >> 0x1f) ^ 0x7fff;
      }
      param_1[6] = uVar17;
      param_2 = param_2 - 1;
      *param_4 = *param_4 +
                 ((((int)sVar3 + (int)sVar7 + (int)sVar4 + (int)sVar34 + (int)sVar35 + (int)sVar36 +
                   (int)sVar43) * 0x1000) / 7 >> 0xc) * iVar5;
      param_3 = param_3 + 7;
      param_4 = param_4 + 1;
      param_1 = param_1 + 7;
    } while (param_2 != 0);
  }
                    /* WARNING: Read-only address (ram,0x01428060) is written */
                    /* WARNING: Read-only address (ram,0x01428070) is written */
                    /* WARNING: Read-only address (ram,0x01428080) is written */
                    /* WARNING: Read-only address (ram,0x01428090) is written */
                    /* WARNING: Read-only address (ram,0x01428210) is written */
                    /* WARNING: Read-only address (ram,0x01428220) is written */
                    /* WARNING: Read-only address (ram,0x01428230) is written */
                    /* WARNING: Read-only address (ram,0x01428240) is written */
                    /* WARNING: Read-only address (ram,0x01428250) is written */
                    /* WARNING: Read-only address (ram,0x01428260) is written */
                    /* WARNING: Read-only address (ram,0x01428270) is written */
  return;
}

