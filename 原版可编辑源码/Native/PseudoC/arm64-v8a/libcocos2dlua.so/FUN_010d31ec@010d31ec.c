
void FUN_010d31ec(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  byte *pbVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  byte *pbVar35;
  long lVar36;
  long lVar37;
  byte *pbVar38;
  ulong uVar39;
  byte bVar41;
  byte bVar42;
  ushort uVar40;
  ushort uVar43;
  byte bVar45;
  ushort uVar44;
  byte bVar46;
  ushort uVar47;
  ushort uVar48;
  ushort uVar49;
  ushort uVar50;
  ushort uVar51;
  ushort uVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  uint uVar76;
  ushort uVar79;
  ushort uVar80;
  ushort uVar81;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  uint uVar82;
  ushort uVar85;
  ushort uVar86;
  ushort uVar87;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  uint uVar88;
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar92;
  uint uVar93;
  ushort uVar96;
  ushort uVar97;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  uint uVar98;
  int iVar99;
  int iVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  int iVar105;
  undefined1 auVar100 [16];
  int iVar106;
  ushort uVar107;
  ushort uVar108;
  ushort uVar109;
  ushort uVar110;
  ushort uVar111;
  int iVar112;
  int iVar113;
  int iVar114;
  int iVar115;
  undefined1 auVar116 [16];
  int iVar117;
  int iVar118;
  int iVar119;
  int iVar120;
  int iVar121;
  int iVar122;
  int iVar123;
  int iVar124;
  int iVar125;
  int iVar126;
  int iVar127;
  int iVar128;
  
  uVar34 = (ulong)*(byte *)(param_1 + 0x13) + 7 >> 3;
  pbVar26 = param_3;
  pbVar29 = param_2;
  if (uVar34 != 0) {
    pbVar1 = param_2 + uVar34;
    pbVar29 = pbVar1;
    if (pbVar1 <= param_2 + 1) {
      pbVar29 = param_2 + 1;
    }
    uVar31 = (long)pbVar29 - (long)param_2;
    pbVar28 = param_2;
    if ((0x1f < uVar31) && (uVar33 = uVar31 & 0xffffffffffffffe0, uVar33 != 0)) {
      pbVar29 = pbVar1;
      if (pbVar1 <= param_2 + 1) {
        pbVar29 = param_2 + 1;
      }
      if ((param_3 + ((long)pbVar29 - (long)param_2) <= param_2) || (pbVar29 <= param_3)) {
        pbVar29 = param_2 + uVar33;
        pbVar26 = param_3 + uVar33;
                    /* try { // try from 010d3488 to 011d348f has its CatchHandler @ 010d3508 */
        param_3 = param_3 + 0x10;
        pbVar28 = param_2 + 0x10;
                    /* try { // try from 010d3490 to 011d35bb has its CatchHandler @ 010d27c8 */
        uVar39 = uVar33;
        do {
          uVar6 = *(undefined8 *)(pbVar28 + -8);
          uVar5 = *(undefined8 *)(pbVar28 + -0x10);
          uVar8 = *(undefined8 *)(pbVar28 + 8);
          uVar7 = *(undefined8 *)pbVar28;
          uVar10 = *(undefined8 *)(param_3 + -8);
          uVar9 = *(undefined8 *)(param_3 + -0x10);
          bVar2 = *param_3;
          bVar19 = param_3[1];
          bVar20 = param_3[2];
          bVar21 = param_3[3];
          bVar22 = param_3[4];
          bVar23 = param_3[5];
          bVar24 = param_3[6];
          bVar25 = param_3[7];
          bVar41 = param_3[8];
          bVar42 = param_3[9];
          bVar45 = param_3[10];
          bVar46 = param_3[0xb];
          bVar53 = param_3[0xc];
          bVar54 = param_3[0xd];
          bVar55 = param_3[0xe];
          bVar56 = param_3[0xf];
          param_3 = param_3 + 0x20;
          uVar39 = uVar39 - 0x20;
          *(ulong *)(pbVar28 + -8) =
               CONCAT17((char)((ulong)uVar10 >> 0x38) + (char)((ulong)uVar6 >> 0x38),
                        CONCAT16((char)((ulong)uVar10 >> 0x30) + (char)((ulong)uVar6 >> 0x30),
                                 CONCAT15((char)((ulong)uVar10 >> 0x28) +
                                          (char)((ulong)uVar6 >> 0x28),
                                          CONCAT14((char)((ulong)uVar10 >> 0x20) +
                                                   (char)((ulong)uVar6 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar10 >> 0x18) +
                                                            (char)((ulong)uVar6 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar10 >> 0x10) +
                                                                     (char)((ulong)uVar6 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar10
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar6 >>
                                                                                    8),(char)uVar10
                                                                                       + (char)uVar6
                                                                             )))))));
          *(ulong *)(pbVar28 + -0x10) =
               CONCAT17((char)((ulong)uVar9 >> 0x38) + (char)((ulong)uVar5 >> 0x38),
                        CONCAT16((char)((ulong)uVar9 >> 0x30) + (char)((ulong)uVar5 >> 0x30),
                                 CONCAT15((char)((ulong)uVar9 >> 0x28) +
                                          (char)((ulong)uVar5 >> 0x28),
                                          CONCAT14((char)((ulong)uVar9 >> 0x20) +
                                                   (char)((ulong)uVar5 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar9 >> 0x18) +
                                                            (char)((ulong)uVar5 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar9 >> 0x10) +
                                                                     (char)((ulong)uVar5 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar9 >>
                                                                                    8) +
                                                                              (char)((ulong)uVar5 >>
                                                                                    8),(char)uVar9 +
                                                                                       (char)uVar5))
                                                           )))));
          *(ulong *)(pbVar28 + 8) =
               CONCAT17(bVar56 + (char)((ulong)uVar8 >> 0x38),
                        CONCAT16(bVar55 + (char)((ulong)uVar8 >> 0x30),
                                 CONCAT15(bVar54 + (char)((ulong)uVar8 >> 0x28),
                                          CONCAT14(bVar53 + (char)((ulong)uVar8 >> 0x20),
                                                   CONCAT13(bVar46 + (char)((ulong)uVar8 >> 0x18),
                                                            CONCAT12(bVar45 + (char)((ulong)uVar8 >>
                                                                                    0x10),
                                                                     CONCAT11(bVar42 + (char)((ulong
                                                  )uVar8 >> 8),bVar41 + (char)uVar8)))))));
          *(ulong *)pbVar28 =
               CONCAT17(bVar25 + (char)((ulong)uVar7 >> 0x38),
                        CONCAT16(bVar24 + (char)((ulong)uVar7 >> 0x30),
                                 CONCAT15(bVar23 + (char)((ulong)uVar7 >> 0x28),
                                          CONCAT14(bVar22 + (char)((ulong)uVar7 >> 0x20),
                                                   CONCAT13(bVar21 + (char)((ulong)uVar7 >> 0x18),
                                                            CONCAT12(bVar20 + (char)((ulong)uVar7 >>
                                                                                    0x10),
                                                                     CONCAT11(bVar19 + (char)((ulong
                                                  )uVar7 >> 8),bVar2 + (char)uVar7)))))));
          pbVar28 = pbVar28 + 0x20;
        } while (uVar39 != 0);
        param_3 = pbVar26;
        pbVar28 = pbVar29;
        if (uVar31 == uVar33) goto LAB_010d3270;
      }
    }
    do {
                    /* try { // try from 010d3250 to 011d32af has its CatchHandler @ 010d27c8 */
      pbVar26 = param_3 + 1;
      pbVar29 = pbVar28 + 1;
      *pbVar28 = *param_3 + *pbVar28;
      param_3 = pbVar26;
      pbVar28 = pbVar29;
    } while (pbVar29 < pbVar1);
  }
LAB_010d3270:
  lVar36 = *(long *)(param_1 + 8);
  pbVar1 = param_2 + lVar36;
  if (pbVar29 < pbVar1) {
    lVar37 = lVar36 - (long)pbVar29;
    pbVar28 = param_2 + lVar37;
    lVar32 = -uVar34;
    if ((&DAT_00000010 <= pbVar28) &&
       (pbVar35 = (byte *)((ulong)pbVar28 & 0xfffffffffffffff0), pbVar35 != (byte *)0x0)) {
                    /* try { // try from 010d32b0 to 011d32b7 has its CatchHandler @ 010d351c */
                    /* try { // try from 010d32b8 to 011d3317 has its CatchHandler @ 010d27c8 */
      if ((pbVar26 + (long)(param_2 + (lVar37 - uVar34)) <= pbVar29 || pbVar1 <= pbVar26 + lVar32)
         && ((param_2 + (lVar36 - uVar34) <= pbVar29 || pbVar1 <= pbVar29 + lVar32 &&
             (pbVar26 + (long)(param_2 + lVar37) <= pbVar29 || pbVar1 <= pbVar26)))) {
        pbVar27 = pbVar26;
        pbVar30 = pbVar29;
        pbVar38 = pbVar35;
        do {
          pbVar3 = pbVar27 + lVar32;
          uVar6 = *(undefined8 *)(pbVar3 + 8);
          bVar54 = (byte)((ulong)uVar6 >> 8);
          bVar55 = (byte)((ulong)uVar6 >> 0x10);
          bVar56 = (byte)((ulong)uVar6 >> 0x18);
          bVar57 = (byte)((ulong)uVar6 >> 0x20);
          bVar58 = (byte)((ulong)uVar6 >> 0x28);
          bVar59 = (byte)((ulong)uVar6 >> 0x30);
          bVar60 = (byte)((ulong)uVar6 >> 0x38);
          uVar5 = *(undefined8 *)pbVar3;
          bVar2 = *pbVar3;
          bVar19 = pbVar3[1];
          bVar20 = pbVar3[2];
          bVar21 = pbVar3[3];
          bVar22 = pbVar3[4];
          bVar23 = pbVar3[5];
          bVar24 = pbVar3[6];
          bVar25 = pbVar3[7];
          bVar53 = (byte)((ulong)uVar5 >> 0x38);
                    /* try { // try from 010d3318 to 011d331f has its CatchHandler @ 010d3518 */
          pbVar4 = pbVar30 + lVar32;
          uVar8 = *(undefined8 *)(pbVar4 + 8);
          bVar62 = (byte)((ulong)uVar8 >> 8);
          bVar63 = (byte)((ulong)uVar8 >> 0x10);
          bVar64 = (byte)((ulong)uVar8 >> 0x18);
          bVar65 = (byte)((ulong)uVar8 >> 0x20);
          bVar66 = (byte)((ulong)uVar8 >> 0x28);
          bVar67 = (byte)((ulong)uVar8 >> 0x30);
          bVar68 = (byte)((ulong)uVar8 >> 0x38);
          uVar7 = *(undefined8 *)pbVar4;
          bVar61 = (byte)((ulong)uVar7 >> 0x38);
          uVar10 = *(undefined8 *)(pbVar27 + 8);
          bVar69 = (byte)((ulong)uVar10 >> 8);
          bVar70 = (byte)((ulong)uVar10 >> 0x10);
          bVar71 = (byte)((ulong)uVar10 >> 0x18);
          bVar72 = (byte)((ulong)uVar10 >> 0x20);
          bVar73 = (byte)((ulong)uVar10 >> 0x28);
          bVar74 = (byte)((ulong)uVar10 >> 0x30);
          bVar75 = (byte)((ulong)uVar10 >> 0x38);
          uVar9 = *(undefined8 *)pbVar27;
                    /* try { // try from 010d3320 to 011d3377 has its CatchHandler @ 010d27c8 */
          pbVar38 = pbVar38 + -0x10;
          uVar76 = (uint)CONCAT12(bVar54,(ushort)(byte)uVar6);
          bVar41 = (byte)((ulong)uVar5 >> 8);
          uVar82 = (uint)CONCAT12(bVar41,(ushort)(byte)uVar5);
          uVar88 = (uint)CONCAT12(bVar62,(ushort)(byte)uVar8);
          bVar42 = (byte)((ulong)uVar7 >> 8);
          uVar93 = (uint)CONCAT12(bVar42,(ushort)(byte)uVar7);
          uVar98 = (uint)CONCAT12(bVar69,(ushort)(byte)uVar10);
          uVar107 = (ushort)(byte)((ulong)uVar9 >> 8);
          uVar108 = (ushort)(byte)((ulong)uVar9 >> 0x10);
          uVar109 = (ushort)(byte)((ulong)uVar9 >> 0x18);
          uVar110 = (ushort)(byte)((ulong)uVar9 >> 0x20);
          bVar45 = (byte)((ulong)uVar9 >> 0x28);
          bVar46 = (byte)((ulong)uVar9 >> 0x30);
          uVar111 = (ushort)(byte)((ulong)uVar9 >> 0x38);
          uVar85 = (ushort)bVar41;
          uVar86 = (ushort)(byte)((ulong)uVar5 >> 0x10);
          uVar87 = (ushort)(byte)((ulong)uVar5 >> 0x18);
          uVar47 = (ushort)(byte)((ulong)uVar5 >> 0x20);
          uVar49 = (ushort)(byte)((ulong)uVar5 >> 0x28);
          uVar51 = (ushort)(byte)((ulong)uVar5 >> 0x30);
          uVar79 = (ushort)bVar54;
          uVar80 = (ushort)bVar55;
          uVar81 = (ushort)bVar56;
          uVar48 = (ushort)bVar57;
          uVar50 = (ushort)bVar58;
          uVar52 = (ushort)bVar59;
          uVar96 = (ushort)(byte)((ulong)uVar7 >> 0x10);
          uVar97 = (ushort)(byte)((ulong)uVar7 >> 0x18);
          uVar40 = (ushort)(byte)((ulong)uVar7 >> 0x20);
          uVar43 = (ushort)(byte)((ulong)uVar7 >> 0x28);
          uVar44 = (ushort)(byte)((ulong)uVar7 >> 0x30);
          iVar117 = MP_INT_ABS((uint)(ushort)(byte)uVar9 - (uVar82 & 0xffff));
          iVar118 = MP_INT_ABS((uint)uVar107 - (uint)uVar85);
          iVar119 = MP_INT_ABS((uint)uVar108 - (uint)uVar86);
          iVar120 = MP_INT_ABS((uint)uVar109 - (uint)uVar87);
          iVar11 = MP_INT_ABS((CONCAT12(bVar45,uVar110) & 0xffff) - (uint)uVar47);
          iVar13 = MP_INT_ABS((uint)bVar45 - (uint)uVar49);
          iVar15 = MP_INT_ABS((uint)bVar46 - (uint)uVar51);
          iVar17 = MP_INT_ABS((uint)uVar111 - (uint)bVar53);
          iVar121 = MP_INT_ABS((uVar98 & 0xffff) - (uVar76 & 0xffff));
          iVar122 = MP_INT_ABS((uint)(ushort)bVar69 - (uint)uVar79);
          iVar123 = MP_INT_ABS((uint)(ushort)bVar70 - (uint)uVar80);
          iVar124 = MP_INT_ABS((uint)(ushort)bVar71 - (uint)uVar81);
          iVar125 = MP_INT_ABS((uVar93 & 0xffff) - (uVar82 & 0xffff));
          iVar126 = MP_INT_ABS((uint)(ushort)bVar42 - (uint)uVar85);
          iVar127 = MP_INT_ABS((uint)uVar96 - (uint)uVar86);
          iVar128 = MP_INT_ABS((uint)uVar97 - (uint)uVar87);
          auVar83._0_4_ = MP_INT_ABS((uint)uVar40 - (uint)uVar47);
          auVar83._4_4_ = MP_INT_ABS((uint)uVar43 - (uint)uVar49);
          auVar83._8_4_ = MP_INT_ABS((uint)uVar44 - (uint)uVar51);
          auVar83._12_4_ = MP_INT_ABS((uint)bVar61 - (uint)bVar53);
          auVar94._0_4_ = MP_INT_ABS((uVar88 & 0xffff) - (uVar76 & 0xffff));
          auVar94._4_4_ = MP_INT_ABS((uint)bVar62 - (uint)uVar79);
          auVar94._8_4_ = MP_INT_ABS((CONCAT12(bVar64,(ushort)bVar63) & 0xffff) - (uint)uVar80);
          auVar94._12_4_ = MP_INT_ABS((uint)bVar64 - (uint)uVar81);
          auVar100._0_4_ = MP_INT_ABS((uint)(ushort)bVar72 - (uint)uVar48);
          auVar100._4_4_ = MP_INT_ABS((uint)(ushort)bVar73 - (uint)uVar50);
          auVar100._8_4_ = MP_INT_ABS((uint)(ushort)bVar74 - (uint)uVar52);
          auVar100._12_4_ = MP_INT_ABS((uint)bVar75 - (uint)bVar60);
                    /* try { // try from 010d3378 to 011d337f has its CatchHandler @ 010d3514 */
          auVar77._0_4_ = MP_INT_ABS((CONCAT12(bVar66,(ushort)bVar65) & 0xffff) - (uint)uVar48);
          auVar77._4_4_ = MP_INT_ABS((uint)(ushort)bVar66 - (uint)uVar50);
          auVar77._8_4_ = MP_INT_ABS((uint)(ushort)bVar67 - (uint)uVar52);
          auVar77._12_4_ = MP_INT_ABS((uint)bVar68 - (uint)bVar60);
                    /* try { // try from 010d3380 to 011d33cf has its CatchHandler @ 010d27c8 */
          auVar84._4_4_ = iVar118;
          auVar84._0_4_ = iVar117;
          auVar84._8_4_ = iVar119;
          auVar84._12_4_ = iVar120;
          auVar116._4_4_ = iVar126;
          auVar116._0_4_ = iVar125;
          auVar116._8_4_ = iVar127;
          auVar116._12_4_ = iVar128;
          auVar116 = NEON_smin(auVar116,auVar84,4);
          auVar78._4_2_ = (short)iVar13;
          auVar78._0_4_ = iVar11;
          auVar78._6_2_ = (short)((uint)iVar13 >> 0x10);
          auVar78._8_2_ = (short)iVar15;
          auVar78._10_2_ = (short)((uint)iVar15 >> 0x10);
          auVar78._12_2_ = (short)iVar17;
          auVar78._14_2_ = (short)((uint)iVar17 >> 0x10);
          auVar84 = NEON_smin(auVar83,auVar78,4);
          auVar95._4_4_ = iVar122;
          auVar95._0_4_ = iVar121;
          auVar95._8_4_ = iVar123;
          auVar95._12_4_ = iVar124;
          auVar95 = NEON_smin(auVar94,auVar95,4);
          auVar78 = NEON_smin(auVar77,auVar100,4);
          iVar99 = MP_INT_ABS(((uint)(ushort)(byte)uVar9 - (uVar82 & 0xffff)) +
                              ((uVar93 & 0xffff) - (uVar82 & 0xffff)));
          iVar101 = MP_INT_ABS(((uint)uVar107 - (uint)uVar85) +
                               ((uint)(ushort)bVar42 - (uint)uVar85));
          iVar105 = MP_INT_ABS(((uint)uVar108 - (uint)uVar86) + ((uint)uVar96 - (uint)uVar86));
          iVar106 = MP_INT_ABS(((uint)uVar109 - (uint)uVar87) + ((uint)uVar97 - (uint)uVar87));
          iVar12 = MP_INT_ABS(((CONCAT12(bVar45,uVar110) & 0xffff) - (uint)uVar47) +
                              ((uint)uVar40 - (uint)uVar47));
          iVar14 = MP_INT_ABS(((uint)bVar45 - (uint)uVar49) + ((uint)uVar43 - (uint)uVar49));
          iVar16 = MP_INT_ABS(((uint)bVar46 - (uint)uVar51) + ((uint)uVar44 - (uint)uVar51));
          iVar18 = MP_INT_ABS(((uint)uVar111 - (uint)bVar53) + ((uint)bVar61 - (uint)bVar53));
          iVar112 = MP_INT_ABS(((uVar98 & 0xffff) - (uVar76 & 0xffff)) +
                               ((uVar88 & 0xffff) - (uVar76 & 0xffff)));
          iVar113 = MP_INT_ABS(((uint)(ushort)bVar69 - (uint)uVar79) + ((uint)bVar62 - (uint)uVar79)
                              );
          iVar114 = MP_INT_ABS(((uint)(ushort)bVar70 - (uint)uVar80) +
                               ((CONCAT12(bVar64,(ushort)bVar63) & 0xffff) - (uint)uVar80));
          iVar115 = MP_INT_ABS(((uint)(ushort)bVar71 - (uint)uVar81) + ((uint)bVar64 - (uint)uVar81)
                              );
          iVar89 = MP_INT_ABS(((uint)(ushort)bVar72 - (uint)uVar48) +
                              ((CONCAT12(bVar66,(ushort)bVar65) & 0xffff) - (uint)uVar48));
          iVar90 = MP_INT_ABS(((uint)(ushort)bVar73 - (uint)uVar50) +
                              ((uint)(ushort)bVar66 - (uint)uVar50));
          iVar91 = MP_INT_ABS(((uint)(ushort)bVar74 - (uint)uVar52) +
                              ((uint)(ushort)bVar67 - (uint)uVar52));
          iVar92 = MP_INT_ABS(((uint)bVar75 - (uint)bVar60) + ((uint)bVar68 - (uint)bVar60));
                    /* try { // try from 010d33d0 to 011d33d7 has its CatchHandler @ 010d3510 */
                    /* try { // try from 010d33d8 to 011d342f has its CatchHandler @ 010d27c8 */
          bVar41 = *pbVar4 ^ (*pbVar4 ^ *pbVar27) & -(iVar125 < iVar117);
          bVar42 = pbVar4[1] ^ (pbVar4[1] ^ pbVar27[1]) & -(iVar126 < iVar118);
          bVar45 = pbVar4[2] ^ (pbVar4[2] ^ pbVar27[2]) & -(iVar127 < iVar119);
          bVar46 = pbVar4[3] ^ (pbVar4[3] ^ pbVar27[3]) & -(iVar128 < iVar120);
          bVar53 = pbVar4[4] ^ (pbVar4[4] ^ pbVar27[4]) & -(auVar83._0_4_ < iVar11);
          bVar61 = pbVar4[5] ^ (pbVar4[5] ^ pbVar27[5]) & -(auVar83._4_4_ < iVar13);
          bVar102 = pbVar4[6] ^ (pbVar4[6] ^ pbVar27[6]) & -(auVar83._8_4_ < iVar15);
          bVar103 = pbVar4[7] ^ (pbVar4[7] ^ pbVar27[7]) & -(auVar83._12_4_ < iVar17);
          bVar104 = pbVar4[8] ^ (pbVar4[8] ^ pbVar27[8]) & -(auVar94._0_4_ < iVar121);
          bVar62 = bVar62 ^ (bVar62 ^ bVar69) & -(auVar94._4_4_ < iVar122);
          bVar63 = bVar63 ^ (bVar63 ^ bVar70) & -(auVar94._8_4_ < iVar123);
          bVar64 = bVar64 ^ (bVar64 ^ bVar71) & -(auVar94._12_4_ < iVar124);
          bVar65 = bVar65 ^ (bVar65 ^ bVar72) & -(auVar77._0_4_ < auVar100._0_4_);
          bVar66 = bVar66 ^ (bVar66 ^ bVar73) & -(auVar77._4_4_ < auVar100._4_4_);
          bVar67 = bVar67 ^ (bVar67 ^ bVar74) & -(auVar77._8_4_ < auVar100._8_4_);
          bVar68 = bVar68 ^ (bVar68 ^ bVar75) & -(auVar77._12_4_ < auVar100._12_4_);
          *(ulong *)(pbVar30 + 8) =
               CONCAT17((bVar68 ^ (bVar68 ^ bVar60) & -(iVar92 < auVar78._12_4_)) + pbVar30[0xf],
                        CONCAT16((bVar67 ^ (bVar67 ^ bVar59) & -(iVar91 < auVar78._8_4_)) +
                                 pbVar30[0xe],
                                 CONCAT15((bVar66 ^ (bVar66 ^ bVar58) & -(iVar90 < auVar78._4_4_)) +
                                          pbVar30[0xd],
                                          CONCAT14((bVar65 ^ (bVar65 ^ bVar57) &
                                                             -(iVar89 < auVar78._0_4_)) +
                                                   pbVar30[0xc],
                                                   CONCAT13((bVar64 ^ (bVar64 ^ bVar56) &
                                                                      -(iVar115 < auVar95._12_4_)) +
                                                            pbVar30[0xb],
                                                            CONCAT12((bVar63 ^ (bVar63 ^ bVar55) &
                                                                               -(iVar114 <
                                                                                auVar95._8_4_)) +
                                                                     pbVar30[10],
                                                                     CONCAT11((bVar62 ^ (bVar62 ^ 
                                                  bVar54) & -(iVar113 < auVar95._4_4_)) + pbVar30[9]
                                                  ,(bVar104 ^
                                                   (bVar104 ^ pbVar3[8]) &
                                                   -(iVar112 < auVar95._0_4_)) + pbVar30[8])))))));
          *(ulong *)pbVar30 =
               CONCAT17((bVar103 ^ (bVar103 ^ bVar25) & -(iVar18 < auVar84._12_4_)) + pbVar30[7],
                        CONCAT16((bVar102 ^ (bVar102 ^ bVar24) & -(iVar16 < auVar84._8_4_)) +
                                 pbVar30[6],
                                 CONCAT15((bVar61 ^ (bVar61 ^ bVar23) & -(iVar14 < auVar84._4_4_)) +
                                          pbVar30[5],
                                          CONCAT14((bVar53 ^ (bVar53 ^ bVar22) &
                                                             -(iVar12 < auVar84._0_4_)) + pbVar30[4]
                                                   ,CONCAT13((bVar46 ^ (bVar46 ^ bVar21) &
                                                                       -(iVar106 < auVar116._12_4_))
                                                             + pbVar30[3],
                                                             CONCAT12((bVar45 ^ (bVar45 ^ bVar20) &
                                                                                -(iVar105 <
                                                                                 auVar116._8_4_)) +
                                                                      pbVar30[2],
                                                                      CONCAT11((bVar42 ^ (bVar42 ^ 
                                                  bVar19) & -(iVar101 < auVar116._4_4_)) +
                                                  pbVar30[1],
                                                  (bVar41 ^ (bVar41 ^ bVar2) &
                                                            -(iVar99 < auVar116._0_4_)) + *pbVar30))
                                                  )))));
          pbVar27 = pbVar27 + 0x10;
          pbVar30 = pbVar30 + 0x10;
        } while (pbVar38 != (byte *)0x0);
        pbVar29 = pbVar29 + (long)pbVar35;
        pbVar26 = pbVar26 + (long)pbVar35;
        if (pbVar35 == pbVar28) {
          return;
        }
      }
    }
    do {
      bVar2 = pbVar26[lVar32];
                    /* try { // try from 010d3430 to 011d3437 has its CatchHandler @ 010d350c */
      iVar11 = (uint)*pbVar26 - (uint)bVar2;
                    /* try { // try from 010d3438 to 011d3487 has its CatchHandler @ 010d27c8 */
      iVar12 = -iVar11;
      if (-1 < iVar11) {
        iVar12 = iVar11;
      }
      iVar14 = (uint)pbVar29[lVar32] - (uint)bVar2;
      iVar13 = -iVar14;
      if (-1 < iVar14) {
        iVar13 = iVar14;
      }
      iVar11 = iVar11 + iVar14;
      iVar14 = -iVar11;
      if (-1 < iVar11) {
        iVar14 = iVar11;
      }
      bVar19 = *pbVar26;
      if (iVar12 <= iVar13) {
        iVar13 = iVar12;
        bVar19 = pbVar29[lVar32];
      }
      if (iVar13 <= iVar14) {
        bVar2 = bVar19;
      }
      pbVar28 = pbVar29 + 1;
      *pbVar29 = bVar2 + *pbVar29;
      pbVar29 = pbVar28;
      pbVar26 = pbVar26 + 1;
    } while (pbVar1 != pbVar28);
  }
  return;
}

