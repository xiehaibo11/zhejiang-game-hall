
/* void cocos2d::experimental::AudioMixer::volumeMix<2, false, false, short, short, int>(short*,
   unsigned long, short const*, int*, bool, cocos2d::experimental::AudioMixer::track_t*) */

void cocos2d::experimental::AudioMixer::volumeMix<2,false,false,short,short,int>
               (short *param_1,ulong param_2,short *param_3,int *param_4,bool param_5,
               track_t *param_6)

{
  track_t *ptVar1;
  track_t *ptVar2;
  track_t *ptVar3;
  ushort *puVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined6 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  short sVar19;
  short sVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  bool bVar31;
  short *psVar32;
  short *psVar46;
  short *psVar47;
  int *piVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  ulong uVar53;
  ulong uVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  int iVar62;
  undefined8 uVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  char cVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  char cVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  byte bVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  byte bVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  byte bVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  byte bVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  undefined1 uVar106;
  char cVar107;
  char cVar108;
  uint uVar109;
  uint uVar114;
  byte bVar115;
  uint uVar116;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  uint uVar117;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  byte bVar118;
  byte bVar126;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  uint uVar127;
  uint uVar139;
  uint uVar140;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  uint uVar141;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  short sVar142;
  uint uVar143;
  uint uVar152;
  uint uVar153;
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  uint uVar154;
  uint uVar155;
  uint uVar158;
  uint uVar159;
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  uint uVar160;
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  short *psVar33;
  short *psVar34;
  short *psVar35;
  short *psVar36;
  short *psVar37;
  short *psVar38;
  short *psVar39;
  short *psVar40;
  short *psVar41;
  short *psVar42;
  short *psVar43;
  short *psVar44;
  short *psVar45;
  
  uVar109 = *(int *)(param_6 + 0xbc) - 1;
  if (!param_5) {
    if (uVar109 < 8) {
      sVar142 = *(short *)(param_6 + 0x20);
      iVar49 = (int)sVar142;
      ptVar1 = param_6 + 4;
      switch(uVar109) {
      case 0:
        if (param_4 == (int *)0x0) {
          if (7 < param_2) {
            if ((param_3 + param_2 <= param_1 || (track_t *)(param_1 + param_2) <= param_3) &&
               (param_6 + 5 <= param_1 || (track_t *)(param_1 + param_2) <= ptVar1)) {
              sVar142 = *(short *)ptVar1;
              uVar54 = param_2 & 0xfffffffffffffff8;
              psVar46 = param_1;
              psVar47 = param_3;
              uVar53 = uVar54;
              do {
                uVar16 = *(undefined8 *)(psVar47 + 4);
                uVar63 = *(undefined8 *)psVar47;
                uVar53 = uVar53 - 8;
                sVar57 = (short)((ulong)uVar63 >> 0x10);
                sVar59 = (short)((ulong)uVar63 >> 0x20);
                sVar58 = (short)((ulong)uVar63 >> 0x30);
                sVar56 = (short)((ulong)uVar16 >> 0x10);
                sVar55 = (short)((ulong)uVar16 >> 0x20);
                sVar60 = (short)((ulong)uVar16 >> 0x30);
                uVar127 = (int)sVar142 * CONCAT13((short)uVar63 >> 0xf,(int3)(short)uVar63);
                uVar139 = (int)sVar142 * CONCAT13(sVar57 >> 0xf,(int3)sVar57);
                uVar140 = (int)sVar142 * CONCAT13(sVar59 >> 0xf,(int3)sVar59);
                uVar141 = (int)sVar142 * CONCAT13(sVar58 >> 0xf,(int3)sVar58);
                uVar109 = (int)sVar142 * CONCAT13((short)uVar16 >> 0xf,(int3)(short)uVar16);
                uVar114 = (int)sVar142 * CONCAT13(sVar56 >> 0xf,(int3)sVar56);
                uVar116 = (int)sVar142 * CONCAT13(sVar55 >> 0xf,(int3)sVar55);
                uVar117 = (int)sVar142 * CONCAT13(sVar60 >> 0xf,(int3)sVar60);
                auVar110._0_4_ = uVar127 >> 0xc;
                auVar110._4_4_ = uVar139 >> 0xc;
                auVar110._8_4_ = uVar140 >> 0xc;
                auVar110._12_4_ = uVar141 >> 0xc;
                cVar107 = (char)((int)uVar127 >> 0x1f);
                cVar108 = (char)((int)uVar139 >> 0x1f);
                bVar79 = (byte)((int)uVar140 >> 0x1f);
                bVar84 = (byte)((int)uVar141 >> 0x1f);
                bVar115 = (byte)(uVar116 >> 0x18);
                bVar118 = (byte)(uVar117 >> 0x18);
                cVar69 = (char)((int)uVar109 >> 0x1f);
                cVar74 = (char)((int)uVar114 >> 0x1f);
                bVar97 = (char)bVar115 >> 7;
                bVar102 = (char)bVar118 >> 7;
                auVar128._0_4_ =
                     -(uint)((int)uVar127 >> 0x1b ==
                            CONCAT13(cVar107,CONCAT12(cVar107,CONCAT11(cVar107,cVar107))));
                auVar128._4_4_ =
                     -(uint)((int)uVar139 >> 0x1b ==
                            CONCAT13(cVar108,CONCAT12(cVar108,CONCAT11(cVar108,cVar108))));
                auVar128._8_4_ =
                     -(uint)((int)uVar140 >> 0x1b ==
                            CONCAT13(bVar79,CONCAT12(bVar79,CONCAT11(bVar79,bVar79))));
                auVar128._12_4_ =
                     -(uint)((int)uVar141 >> 0x1b ==
                            CONCAT13(bVar84,CONCAT12(bVar84,CONCAT11(bVar84,bVar84))));
                auVar119._0_4_ =
                     -(uint)((int)uVar109 >> 0x1b ==
                            CONCAT13(cVar69,CONCAT12(cVar69,CONCAT11(cVar69,cVar69))));
                auVar119._4_4_ =
                     -(uint)((int)uVar114 >> 0x1b ==
                            CONCAT13(cVar74,CONCAT12(cVar74,CONCAT11(cVar74,cVar74))));
                auVar119._8_4_ =
                     -(uint)((int)uVar116 >> 0x1b ==
                            CONCAT13(bVar97,CONCAT12(bVar97,CONCAT11(bVar97,bVar97))));
                auVar119._12_4_ =
                     -(uint)((int)uVar117 >> 0x1b ==
                            CONCAT13(bVar102,CONCAT12(bVar102,CONCAT11(bVar102,bVar102))));
                auVar18[6] = 0;
                auVar18._0_6_ =
                     CONCAT15(cVar108,CONCAT14(cVar108,(uint)(ushort)(CONCAT11(cVar107,cVar107) ^
                                                                     0x7fff))) ^ 0x7fff00000000;
                auVar18[7] = cVar108;
                auVar18[8] = bVar79 ^ 0xff;
                auVar18[9] = bVar79 ^ 0x7f;
                auVar18[10] = bVar79;
                auVar18[0xb] = bVar79;
                auVar18[0xc] = bVar84 ^ 0xff;
                auVar18[0xd] = bVar84 ^ 0x7f;
                auVar18[0xe] = bVar84;
                auVar18[0xf] = bVar84;
                auVar129[6] = 0;
                auVar129._0_6_ =
                     CONCAT15(cVar108,CONCAT14(cVar108,(uint)(ushort)(CONCAT11(cVar107,cVar107) ^
                                                                     0x7fff))) ^ 0x7fff00000000;
                auVar129[7] = cVar108;
                auVar129[8] = bVar79 ^ 0xff;
                auVar129[9] = bVar79 ^ 0x7f;
                auVar129[10] = bVar79;
                auVar129[0xb] = bVar79;
                auVar129[0xc] = bVar84 ^ 0xff;
                auVar129[0xd] = bVar84 ^ 0x7f;
                auVar129[0xe] = bVar84;
                auVar129[0xf] = bVar84;
                auVar129 = auVar129 ^ (auVar18 ^ auVar110) & auVar128;
                auVar15[6] = 0;
                auVar15._0_6_ =
                     CONCAT15(cVar74,CONCAT14(cVar74,(uint)(ushort)(CONCAT11(cVar69,cVar69) ^ 0x7fff
                                                                   ))) ^ 0x7fff00000000;
                auVar15[7] = cVar74;
                auVar15[8] = bVar97 ^ 0xff;
                auVar15[9] = bVar97 ^ 0x7f;
                auVar15[10] = bVar97;
                auVar15[0xb] = bVar97;
                auVar15[0xc] = bVar102 ^ 0xff;
                auVar15[0xd] = bVar102 ^ 0x7f;
                auVar15[0xe] = bVar102;
                auVar15[0xf] = bVar102;
                auVar26._6_2_ = 0;
                auVar26._0_6_ =
                     CONCAT15((char)((uVar114 >> 0xc) >> 8),
                              CONCAT14((char)(uVar114 >> 0xc),uVar109 >> 0xc)) & 0xffff0000ffff;
                auVar26[8] = (char)(uVar116 >> 0xc);
                auVar26[9] = (char)((uVar116 >> 0xc) >> 8);
                auVar26[10] = bVar115 >> 4;
                auVar26[0xb] = 0;
                auVar26[0xc] = (char)(uVar117 >> 0xc);
                auVar26[0xd] = (char)((uVar117 >> 0xc) >> 8);
                auVar26[0xe] = bVar118 >> 4;
                auVar26[0xf] = 0;
                auVar120[6] = 0;
                auVar120._0_6_ =
                     CONCAT15(cVar74,CONCAT14(cVar74,(uint)(ushort)(CONCAT11(cVar69,cVar69) ^ 0x7fff
                                                                   ))) ^ 0x7fff00000000;
                auVar120[7] = cVar74;
                auVar120[8] = bVar97 ^ 0xff;
                auVar120[9] = bVar97 ^ 0x7f;
                auVar120[10] = bVar97;
                auVar120[0xb] = bVar97;
                auVar120[0xc] = bVar102 ^ 0xff;
                auVar120[0xd] = bVar102 ^ 0x7f;
                auVar120[0xe] = bVar102;
                auVar120[0xf] = bVar102;
                auVar120 = auVar120 ^ (auVar15 ^ auVar26) & auVar119;
                *(ulong *)(psVar46 + 4) =
                     CONCAT17(auVar120[0xd],
                              CONCAT16(auVar120[0xc],
                                       CONCAT15(auVar120[9],
                                                CONCAT14(auVar120[8],
                                                         CONCAT13(auVar120[5],
                                                                  CONCAT12(auVar120[4],
                                                                           auVar120._0_2_))))));
                *(ulong *)psVar46 =
                     CONCAT17(auVar129[0xd],
                              CONCAT16(auVar129[0xc],
                                       CONCAT15(auVar129[9],
                                                CONCAT14(auVar129[8],
                                                         CONCAT13(auVar129[5],
                                                                  CONCAT12(auVar129[4],
                                                                           auVar129._0_2_))))));
                psVar46 = psVar46 + 8;
                psVar47 = psVar47 + 8;
              } while (uVar53 != 0);
              bVar31 = uVar54 == param_2;
              param_3 = param_3 + uVar54;
              param_2 = param_2 - uVar54;
              param_1 = param_1 + uVar54;
              if (bVar31) {
                return;
              }
            }
          }
          do {
            uVar109 = (int)*(short *)ptVar1 * (int)*param_3;
            uVar5 = (ushort)(uVar109 >> 0xc);
            if ((int)uVar109 >> 0x1f != (int)uVar109 >> 0x1b) {
              uVar5 = (ushort)((int)uVar109 >> 0x1f) ^ 0x7fff;
            }
            param_2 = param_2 - 1;
            *param_1 = uVar5;
            param_3 = param_3 + 1;
            param_1 = param_1 + 1;
          } while (param_2 != 0);
        }
        else {
          if (3 < param_2) {
            if ((param_3 + param_2 <= param_1 || (track_t *)(param_1 + param_2) <= param_3) &&
               (param_6 + 5 <= param_1 || (track_t *)(param_1 + param_2) <= ptVar1)) {
              sVar142 = *(short *)ptVar1;
              uVar70 = (undefined1)sVar142;
              uVar71 = (undefined1)((ushort)sVar142 >> 8);
              uVar54 = param_2 & 0xfffffffffffffffc;
              uVar7 = CONCAT13(uVar71,CONCAT12(uVar70,sVar142));
              uVar8 = CONCAT15(uVar71,CONCAT14(uVar70,uVar7));
              sVar57 = (short)((uint)uVar7 >> 0x10);
              sVar56 = (short)((uint6)uVar8 >> 0x20);
              sVar59 = (short)(CONCAT17(uVar71,CONCAT16(uVar70,uVar8)) >> 0x30);
              psVar46 = param_1;
              psVar47 = param_3;
              piVar48 = param_4;
              uVar53 = uVar54;
              do {
                uVar63 = *(undefined8 *)psVar47;
                uVar53 = uVar53 - 4;
                sVar55 = (short)uVar63;
                sVar58 = (short)((ulong)uVar63 >> 0x10);
                sVar60 = (short)((ulong)uVar63 >> 0x20);
                sVar61 = (short)((ulong)uVar63 >> 0x30);
                uVar109 = CONCAT13(sVar142 >> 0xf,(int3)sVar142) *
                          CONCAT13(sVar55 >> 0xf,(int3)sVar55);
                uVar114 = CONCAT13(sVar57 >> 0xf,(int3)sVar57) *
                          CONCAT13(sVar58 >> 0xf,(int3)sVar58);
                uVar116 = CONCAT13(sVar56 >> 0xf,(int3)sVar56) *
                          CONCAT13(sVar60 >> 0xf,(int3)sVar60);
                uVar117 = CONCAT13(sVar59 >> 0xf,(int3)sVar59) *
                          CONCAT13(sVar61 >> 0xf,(int3)sVar61);
                bVar115 = (byte)(uVar116 >> 0x18);
                bVar118 = (byte)(uVar117 >> 0x18);
                auVar122._0_4_ = -(uint)((int)uVar109 >> 0x1b == (int)uVar109 >> 0x1f);
                auVar122._4_4_ = -(uint)((int)uVar114 >> 0x1b == (int)uVar114 >> 0x1f);
                auVar122._8_4_ = -(uint)((int)uVar116 >> 0x1b == (int)uVar116 >> 0x1f);
                auVar122._12_4_ = -(uint)((int)uVar117 >> 0x1b == (int)uVar117 >> 0x1f);
                cVar69 = (char)((int)uVar109 >> 0x1f);
                cVar74 = (char)((int)uVar114 >> 0x1f);
                auVar123._0_6_ =
                     CONCAT15(cVar74,CONCAT14(cVar74,(uint)(ushort)(CONCAT11(cVar69,cVar69) ^ 0x7fff
                                                                   ))) ^ 0x7fff00000000;
                auVar123[6] = 0;
                auVar123[7] = cVar74;
                bVar97 = (char)bVar115 >> 7;
                auVar123[8] = bVar97 ^ 0xff;
                auVar123[9] = bVar97 ^ 0x7f;
                auVar123[10] = bVar97;
                auVar123[0xb] = bVar97;
                bVar97 = (char)bVar118 >> 7;
                auVar123[0xc] = bVar97 ^ 0xff;
                auVar123[0xd] = bVar97 ^ 0x7f;
                auVar123[0xe] = bVar97;
                auVar123[0xf] = bVar97;
                auVar25._6_2_ = 0;
                auVar25._0_6_ =
                     CONCAT15((char)((uVar114 >> 0xc) >> 8),
                              CONCAT14((char)(uVar114 >> 0xc),uVar109 >> 0xc)) & 0xffff0000ffff;
                auVar25[8] = (char)(uVar116 >> 0xc);
                auVar25[9] = (char)((uVar116 >> 0xc) >> 8);
                auVar25[10] = bVar115 >> 4;
                auVar25[0xb] = 0;
                auVar25[0xc] = (char)(uVar117 >> 0xc);
                auVar25[0xd] = (char)((uVar117 >> 0xc) >> 8);
                auVar25[0xe] = bVar118 >> 4;
                auVar25[0xf] = 0;
                auVar123 = auVar123 ^ (auVar123 ^ auVar25) & auVar122;
                *(ulong *)psVar46 =
                     CONCAT26(auVar123._12_2_,
                              CONCAT24(auVar123._8_2_,CONCAT22(auVar123._4_2_,auVar123._0_2_)));
                piVar48[2] = piVar48[2] + iVar49 * CONCAT13(sVar60 >> 0xf,(int3)sVar60);
                piVar48[3] = piVar48[3] + iVar49 * CONCAT13(sVar61 >> 0xf,(int3)sVar61);
                *piVar48 = *piVar48 + iVar49 * CONCAT13(sVar55 >> 0xf,(int3)sVar55);
                piVar48[1] = piVar48[1] + iVar49 * CONCAT13(sVar58 >> 0xf,(int3)sVar58);
                psVar46 = psVar46 + 4;
                psVar47 = psVar47 + 4;
                piVar48 = piVar48 + 4;
              } while (uVar53 != 0);
              bVar31 = uVar54 == param_2;
              param_3 = param_3 + uVar54;
              param_4 = param_4 + uVar54;
              param_2 = param_2 - uVar54;
              param_1 = param_1 + uVar54;
              if (bVar31) {
                return;
              }
            }
          }
          do {
            sVar142 = *param_3;
            uVar109 = (int)*(short *)ptVar1 * (int)sVar142;
            uVar5 = (ushort)(uVar109 >> 0xc);
            if ((int)uVar109 >> 0x1f != (int)uVar109 >> 0x1b) {
              uVar5 = (ushort)((int)uVar109 >> 0x1f) ^ 0x7fff;
            }
            *param_1 = uVar5;
            param_2 = param_2 - 1;
            *param_4 = *param_4 + sVar142 * iVar49;
            param_3 = param_3 + 1;
            param_4 = param_4 + 1;
            param_1 = param_1 + 1;
          } while (param_2 != 0);
        }
        break;
      case 1:
        if (param_4 == (int *)0x0) {
          if (7 < param_2) {
            if ((param_3 + param_2 * 2 <= param_1 || (track_t *)(param_1 + param_2 * 2) <= param_3)
               && (param_6 + 7 <= param_1 || (track_t *)(param_1 + param_2 * 2) <= param_6 + 6)) {
              uVar54 = param_2 & 0xfffffffffffffff8;
              psVar46 = param_3 + uVar54 * 2;
              puVar4 = (ushort *)(param_1 + uVar54 * 2);
              uVar53 = uVar54;
              do {
                sVar57 = *param_3;
                sVar58 = param_3[1];
                sVar56 = param_3[2];
                uVar70 = (undefined1)((ushort)sVar56 >> 8);
                sVar60 = param_3[3];
                uVar83 = (undefined1)((ushort)sVar60 >> 8);
                sVar59 = param_3[4];
                uVar71 = (undefined1)((ushort)sVar59 >> 8);
                sVar61 = param_3[5];
                uVar85 = (undefined1)((ushort)sVar61 >> 8);
                sVar55 = param_3[6];
                uVar72 = (undefined1)((ushort)sVar55 >> 8);
                sVar19 = param_3[7];
                uVar86 = (undefined1)((ushort)sVar19 >> 8);
                uVar73 = (undefined1)param_3[8];
                uVar75 = (undefined1)((ushort)param_3[8] >> 8);
                uVar87 = (undefined1)param_3[9];
                uVar88 = (undefined1)((ushort)param_3[9] >> 8);
                uVar76 = (undefined1)param_3[10];
                uVar77 = (undefined1)((ushort)param_3[10] >> 8);
                uVar89 = (undefined1)param_3[0xb];
                uVar90 = (undefined1)((ushort)param_3[0xb] >> 8);
                uVar78 = (undefined1)param_3[0xc];
                uVar80 = (undefined1)((ushort)param_3[0xc] >> 8);
                uVar91 = (undefined1)param_3[0xd];
                uVar92 = (undefined1)((ushort)param_3[0xd] >> 8);
                uVar81 = (undefined1)param_3[0xe];
                uVar82 = (undefined1)((ushort)param_3[0xe] >> 8);
                uVar93 = (undefined1)param_3[0xf];
                uVar94 = (undefined1)((ushort)param_3[0xf] >> 8);
                param_3 = param_3 + 0x10;
                sVar142 = *(short *)ptVar1;
                uVar53 = uVar53 - 8;
                auVar111[2] = (char)sVar56;
                auVar111._0_2_ = sVar57;
                auVar111[3] = uVar70;
                auVar111[4] = (char)sVar59;
                auVar111[5] = uVar71;
                auVar111[6] = (char)sVar55;
                auVar111[7] = uVar72;
                auVar111[8] = uVar73;
                auVar111[9] = uVar75;
                auVar111[10] = uVar76;
                auVar111[0xb] = uVar77;
                auVar111[0xc] = uVar78;
                auVar111[0xd] = uVar80;
                auVar111[0xe] = uVar81;
                auVar111[0xf] = uVar82;
                auVar9[2] = (char)sVar56;
                auVar9._0_2_ = sVar57;
                auVar9[3] = uVar70;
                auVar9[4] = (char)sVar59;
                auVar9[5] = uVar71;
                auVar9[6] = (char)sVar55;
                auVar9[7] = uVar72;
                auVar9[8] = uVar73;
                auVar9[9] = uVar75;
                auVar9[10] = uVar76;
                auVar9[0xb] = uVar77;
                auVar9[0xc] = uVar78;
                auVar9[0xd] = uVar80;
                auVar9[0xe] = uVar81;
                auVar9[0xf] = uVar82;
                auVar111 = NEON_ext(auVar111,auVar9,8,1);
                uVar127 = (int)sVar142 * (int)auVar111._0_2_;
                uVar139 = (int)sVar142 * (int)auVar111._2_2_;
                uVar140 = (int)sVar142 * (int)auVar111._4_2_;
                uVar141 = (int)sVar142 * (int)auVar111._6_2_;
                uVar109 = (int)sVar142 * (int)sVar57;
                uVar114 = (int)sVar142 * (int)sVar56;
                uVar116 = (int)sVar142 * (int)sVar59;
                uVar117 = (int)sVar142 * (int)sVar55;
                bVar115 = (byte)(uVar116 >> 0x18);
                bVar118 = (byte)(uVar117 >> 0x18);
                cVar69 = (char)((int)uVar109 >> 0x1f);
                cVar74 = (char)((int)uVar114 >> 0x1f);
                bVar97 = (char)bVar115 >> 7;
                bVar102 = (char)bVar118 >> 7;
                auVar121._0_4_ = uVar127 >> 0xc;
                auVar121._4_4_ = uVar139 >> 0xc;
                auVar121._8_4_ = uVar140 >> 0xc;
                auVar121._12_4_ = uVar141 >> 0xc;
                auVar144._0_4_ =
                     -(uint)((int)uVar109 >> 0x1b ==
                            CONCAT13(cVar69,CONCAT12(cVar69,CONCAT11(cVar69,cVar69))));
                auVar144._4_4_ =
                     -(uint)((int)uVar114 >> 0x1b ==
                            CONCAT13(cVar74,CONCAT12(cVar74,CONCAT11(cVar74,cVar74))));
                auVar144._8_4_ =
                     -(uint)((int)uVar116 >> 0x1b ==
                            CONCAT13(bVar97,CONCAT12(bVar97,CONCAT11(bVar97,bVar97))));
                auVar144._12_4_ =
                     -(uint)((int)uVar117 >> 0x1b ==
                            CONCAT13(bVar102,CONCAT12(bVar102,CONCAT11(bVar102,bVar102))));
                auVar130._0_4_ = -(uint)((int)uVar127 >> 0x1b == (int)uVar127 >> 0x1f);
                auVar130._4_4_ = -(uint)((int)uVar139 >> 0x1b == (int)uVar139 >> 0x1f);
                auVar130._8_4_ = -(uint)((int)uVar140 >> 0x1b == (int)uVar140 >> 0x1f);
                auVar130._12_4_ = -(uint)((int)uVar141 >> 0x1b == (int)uVar141 >> 0x1f);
                cVar107 = (char)((int)uVar127 >> 0x1f);
                cVar108 = (char)((int)uVar139 >> 0x1f);
                auVar131._0_6_ =
                     CONCAT15(cVar108,CONCAT14(cVar108,(uint)(ushort)(CONCAT11(cVar107,cVar107) ^
                                                                     0x7fff))) ^ 0x7fff00000000;
                auVar131[6] = 0;
                auVar131[7] = cVar108;
                bVar79 = (byte)((int)uVar140 >> 0x1f);
                auVar131[8] = bVar79 ^ 0xff;
                auVar131[9] = bVar79 ^ 0x7f;
                auVar131[10] = bVar79;
                auVar131[0xb] = bVar79;
                bVar79 = (byte)((int)uVar141 >> 0x1f);
                auVar131[0xc] = bVar79 ^ 0xff;
                auVar131[0xd] = bVar79 ^ 0x7f;
                auVar131[0xe] = bVar79;
                auVar131[0xf] = bVar79;
                auVar17[6] = 0;
                auVar17._0_6_ =
                     CONCAT15(cVar74,CONCAT14(cVar74,(uint)(ushort)(CONCAT11(cVar69,cVar69) ^ 0x7fff
                                                                   ))) ^ 0x7fff00000000;
                auVar17[7] = cVar74;
                auVar17[8] = bVar97 ^ 0xff;
                auVar17[9] = bVar97 ^ 0x7f;
                auVar17[10] = bVar97;
                auVar17[0xb] = bVar97;
                auVar17[0xc] = bVar102 ^ 0xff;
                auVar17[0xd] = bVar102 ^ 0x7f;
                auVar17[0xe] = bVar102;
                auVar17[0xf] = bVar102;
                auVar23._6_2_ = 0;
                auVar23._0_6_ =
                     CONCAT15((char)((uVar114 >> 0xc) >> 8),
                              CONCAT14((char)(uVar114 >> 0xc),uVar109 >> 0xc)) & 0xffff0000ffff;
                auVar23[8] = (char)(uVar116 >> 0xc);
                auVar23[9] = (char)((uVar116 >> 0xc) >> 8);
                auVar23[10] = bVar115 >> 4;
                auVar23[0xb] = 0;
                auVar23[0xc] = (char)(uVar117 >> 0xc);
                auVar23[0xd] = (char)((uVar117 >> 0xc) >> 8);
                auVar23[0xe] = bVar118 >> 4;
                auVar23[0xf] = 0;
                auVar145[6] = 0;
                auVar145._0_6_ =
                     CONCAT15(cVar74,CONCAT14(cVar74,(uint)(ushort)(CONCAT11(cVar69,cVar69) ^ 0x7fff
                                                                   ))) ^ 0x7fff00000000;
                auVar145[7] = cVar74;
                auVar145[8] = bVar97 ^ 0xff;
                auVar145[9] = bVar97 ^ 0x7f;
                auVar145[10] = bVar97;
                auVar145[0xb] = bVar97;
                auVar145[0xc] = bVar102 ^ 0xff;
                auVar145[0xd] = bVar102 ^ 0x7f;
                auVar145[0xe] = bVar102;
                auVar145[0xf] = bVar102;
                auVar145 = auVar145 ^ (auVar17 ^ auVar23) & auVar144;
                auVar131 = auVar131 ^ (auVar131 ^ auVar121) & auVar130;
                sVar142 = *(short *)(param_6 + 6);
                auVar12[2] = (char)sVar60;
                auVar12._0_2_ = sVar58;
                auVar12[3] = uVar83;
                auVar12[4] = (char)sVar61;
                auVar12[5] = uVar85;
                auVar12[6] = (char)sVar19;
                auVar12[7] = uVar86;
                auVar12[8] = uVar87;
                auVar12[9] = uVar88;
                auVar12[10] = uVar89;
                auVar12[0xb] = uVar90;
                auVar12[0xc] = uVar91;
                auVar12[0xd] = uVar92;
                auVar12[0xe] = uVar93;
                auVar12[0xf] = uVar94;
                auVar13[2] = (char)sVar60;
                auVar13._0_2_ = sVar58;
                auVar13[3] = uVar83;
                auVar13[4] = (char)sVar61;
                auVar13[5] = uVar85;
                auVar13[6] = (char)sVar19;
                auVar13[7] = uVar86;
                auVar13[8] = uVar87;
                auVar13[9] = uVar88;
                auVar13[10] = uVar89;
                auVar13[0xb] = uVar90;
                auVar13[0xc] = uVar91;
                auVar13[0xd] = uVar92;
                auVar13[0xe] = uVar93;
                auVar13[0xf] = uVar94;
                auVar111 = NEON_ext(auVar12,auVar13,8,1);
                uVar109 = (int)sVar142 * (int)sVar58;
                uVar114 = (int)sVar142 * (int)sVar60;
                uVar116 = (int)sVar142 * (int)sVar61;
                uVar117 = (int)sVar142 * (int)sVar19;
                uVar127 = (int)sVar142 * (int)auVar111._0_2_;
                uVar139 = (int)sVar142 * (int)auVar111._2_2_;
                uVar140 = (int)sVar142 * (int)auVar111._4_2_;
                uVar141 = (int)sVar142 * (int)auVar111._6_2_;
                bVar115 = (byte)(uVar116 >> 0x18);
                bVar118 = (byte)(uVar117 >> 0x18);
                cVar69 = (char)((int)uVar109 >> 0x1f);
                cVar74 = (char)((int)uVar114 >> 0x1f);
                bVar79 = (char)bVar115 >> 7;
                bVar84 = (char)bVar118 >> 7;
                bVar97 = (byte)(uVar140 >> 0x18);
                bVar102 = (byte)(uVar141 >> 0x18);
                auVar146._0_4_ =
                     -(uint)((int)uVar109 >> 0x1b ==
                            CONCAT13(cVar69,CONCAT12(cVar69,CONCAT11(cVar69,cVar69))));
                auVar146._4_4_ =
                     -(uint)((int)uVar114 >> 0x1b ==
                            CONCAT13(cVar74,CONCAT12(cVar74,CONCAT11(cVar74,cVar74))));
                auVar146._8_4_ =
                     -(uint)((int)uVar116 >> 0x1b ==
                            CONCAT13(bVar79,CONCAT12(bVar79,CONCAT11(bVar79,bVar79))));
                auVar146._12_4_ =
                     -(uint)((int)uVar117 >> 0x1b ==
                            CONCAT13(bVar84,CONCAT12(bVar84,CONCAT11(bVar84,bVar84))));
                auVar132._0_4_ = -(uint)((int)uVar127 >> 0x1b == (int)uVar127 >> 0x1f);
                auVar132._4_4_ = -(uint)((int)uVar139 >> 0x1b == (int)uVar139 >> 0x1f);
                auVar132._8_4_ = -(uint)((int)uVar140 >> 0x1b == (int)uVar140 >> 0x1f);
                auVar132._12_4_ = -(uint)((int)uVar141 >> 0x1b == (int)uVar141 >> 0x1f);
                cVar107 = (char)((int)uVar127 >> 0x1f);
                cVar108 = (char)((int)uVar139 >> 0x1f);
                auVar133._0_6_ =
                     CONCAT15(cVar108,CONCAT14(cVar108,(uint)(ushort)(CONCAT11(cVar107,cVar107) ^
                                                                     0x7fff))) ^ 0x7fff00000000;
                auVar133[6] = 0;
                auVar133[7] = cVar108;
                bVar126 = (char)bVar97 >> 7;
                auVar133[8] = bVar126 ^ 0xff;
                auVar133[9] = bVar126 ^ 0x7f;
                auVar133[10] = bVar126;
                auVar133[0xb] = bVar126;
                bVar126 = (char)bVar102 >> 7;
                auVar133[0xc] = bVar126 ^ 0xff;
                auVar133[0xd] = bVar126 ^ 0x7f;
                auVar133[0xe] = bVar126;
                auVar133[0xf] = bVar126;
                auVar10[6] = 0;
                auVar10._0_6_ =
                     CONCAT15(cVar74,CONCAT14(cVar74,(uint)(ushort)(CONCAT11(cVar69,cVar69) ^ 0x7fff
                                                                   ))) ^ 0x7fff00000000;
                auVar10[7] = cVar74;
                auVar10[8] = bVar79 ^ 0xff;
                auVar10[9] = bVar79 ^ 0x7f;
                auVar10[10] = bVar79;
                auVar10[0xb] = bVar79;
                auVar10[0xc] = bVar84 ^ 0xff;
                auVar10[0xd] = bVar84 ^ 0x7f;
                auVar10[0xe] = bVar84;
                auVar10[0xf] = bVar84;
                auVar14._6_2_ = 0;
                auVar14._0_6_ =
                     CONCAT15((char)((uVar114 >> 0xc) >> 8),
                              CONCAT14((char)(uVar114 >> 0xc),uVar109 >> 0xc)) & 0xffff0000ffff;
                auVar14[8] = (char)(uVar116 >> 0xc);
                auVar14[9] = (char)((uVar116 >> 0xc) >> 8);
                auVar14[10] = bVar115 >> 4;
                auVar14[0xb] = 0;
                auVar14[0xc] = (char)(uVar117 >> 0xc);
                auVar14[0xd] = (char)((uVar117 >> 0xc) >> 8);
                auVar14[0xe] = bVar118 >> 4;
                auVar14[0xf] = 0;
                auVar147[6] = 0;
                auVar147._0_6_ =
                     CONCAT15(cVar74,CONCAT14(cVar74,(uint)(ushort)(CONCAT11(cVar69,cVar69) ^ 0x7fff
                                                                   ))) ^ 0x7fff00000000;
                auVar147[7] = cVar74;
                auVar147[8] = bVar79 ^ 0xff;
                auVar147[9] = bVar79 ^ 0x7f;
                auVar147[10] = bVar79;
                auVar147[0xb] = bVar79;
                auVar147[0xc] = bVar84 ^ 0xff;
                auVar147[0xd] = bVar84 ^ 0x7f;
                auVar147[0xe] = bVar84;
                auVar147[0xf] = bVar84;
                auVar147 = auVar147 ^ (auVar10 ^ auVar14) & auVar146;
                auVar24._6_2_ = 0;
                auVar24._0_6_ =
                     CONCAT15((char)((uVar139 >> 0xc) >> 8),
                              CONCAT14((char)(uVar139 >> 0xc),uVar127 >> 0xc)) & 0xffff0000ffff;
                auVar24[8] = (char)(uVar140 >> 0xc);
                auVar24[9] = (char)((uVar140 >> 0xc) >> 8);
                auVar24[10] = bVar97 >> 4;
                auVar24[0xb] = 0;
                auVar24[0xc] = (char)(uVar141 >> 0xc);
                auVar24[0xd] = (char)((uVar141 >> 0xc) >> 8);
                auVar24[0xe] = bVar102 >> 4;
                auVar24[0xf] = 0;
                auVar133 = auVar133 ^ (auVar133 ^ auVar24) & auVar132;
                *param_1 = auVar145._0_2_;
                param_1[1] = auVar147._0_2_;
                param_1[2] = auVar145._4_2_;
                param_1[3] = auVar147._4_2_;
                param_1[4] = auVar145._8_2_;
                param_1[5] = auVar147._8_2_;
                param_1[6] = auVar145._12_2_;
                param_1[7] = auVar147._12_2_;
                param_1[8] = auVar131._0_2_;
                param_1[9] = auVar133._0_2_;
                param_1[10] = auVar131._4_2_;
                param_1[0xb] = auVar133._4_2_;
                param_1[0xc] = auVar131._8_2_;
                param_1[0xd] = auVar133._8_2_;
                param_1[0xe] = auVar131._12_2_;
                param_1[0xf] = auVar133._12_2_;
                param_1 = param_1 + 0x10;
              } while (uVar53 != 0);
              bVar31 = uVar54 == param_2;
              param_3 = psVar46;
              param_2 = param_2 - uVar54;
              param_1 = (short *)puVar4;
              if (bVar31) {
                return;
              }
            }
          }
          do {
            uVar109 = (int)*(short *)ptVar1 * (int)*param_3;
            uVar5 = (ushort)(uVar109 >> 0xc);
            if ((int)uVar109 >> 0x1f != (int)uVar109 >> 0x1b) {
              uVar5 = (ushort)((int)uVar109 >> 0x1f) ^ 0x7fff;
            }
            *param_1 = uVar5;
            psVar46 = param_3 + 1;
            param_3 = param_3 + 2;
            uVar109 = (int)*(short *)(param_6 + 6) * (int)*psVar46;
            uVar5 = (ushort)(uVar109 >> 0xc);
            if ((int)uVar109 >> 0x1f != (int)uVar109 >> 0x1b) {
              uVar5 = (ushort)((int)uVar109 >> 0x1f) ^ 0x7fff;
            }
            param_2 = param_2 - 1;
            param_1[1] = uVar5;
            param_1 = param_1 + 2;
          } while (param_2 != 0);
        }
        else {
          if (3 < param_2) {
            if ((param_3 + param_2 * 2 <= param_1 || (track_t *)(param_1 + param_2 * 2) <= param_3)
               && (param_6 + 7 <= param_1 || (track_t *)(param_1 + param_2 * 2) <= param_6 + 6)) {
              uVar54 = param_2 & 0xfffffffffffffffc;
              psVar46 = param_3 + uVar54 * 2;
              puVar4 = (ushort *)(param_1 + uVar54 * 2);
              piVar48 = param_4;
              uVar53 = uVar54;
              do {
                sVar56 = *param_3;
                sVar60 = param_3[1];
                sVar59 = param_3[2];
                sVar61 = param_3[3];
                sVar55 = param_3[4];
                sVar19 = param_3[5];
                sVar58 = param_3[6];
                sVar20 = param_3[7];
                param_3 = param_3 + 8;
                sVar142 = *(short *)ptVar1;
                uVar53 = uVar53 - 4;
                sVar57 = *(short *)(param_6 + 6);
                uVar109 = (int)sVar142 * (int)sVar56;
                uVar114 = (int)sVar142 * (int)sVar59;
                uVar116 = (int)sVar142 * (int)sVar55;
                uVar117 = (int)sVar142 * (int)sVar58;
                auVar124._0_4_ = uVar109 >> 0xc;
                auVar124._4_4_ = uVar114 >> 0xc;
                auVar124._8_4_ = uVar116 >> 0xc;
                auVar124._12_4_ = uVar117 >> 0xc;
                auVar134._0_4_ = -(uint)((int)uVar109 >> 0x1b == (int)uVar109 >> 0x1f);
                auVar134._4_4_ = -(uint)((int)uVar114 >> 0x1b == (int)uVar114 >> 0x1f);
                auVar134._8_4_ = -(uint)((int)uVar116 >> 0x1b == (int)uVar116 >> 0x1f);
                auVar134._12_4_ = -(uint)((int)uVar117 >> 0x1b == (int)uVar117 >> 0x1f);
                cVar69 = (char)((int)uVar109 >> 0x1f);
                cVar74 = (char)((int)uVar114 >> 0x1f);
                auVar135._0_6_ =
                     CONCAT15(cVar74,CONCAT14(cVar74,(uint)(ushort)(CONCAT11(cVar69,cVar69) ^ 0x7fff
                                                                   ))) ^ 0x7fff00000000;
                auVar135[6] = 0;
                auVar135[7] = cVar74;
                bVar115 = (byte)((int)uVar116 >> 0x1f);
                auVar135[8] = bVar115 ^ 0xff;
                auVar135[9] = bVar115 ^ 0x7f;
                auVar135[10] = bVar115;
                auVar135[0xb] = bVar115;
                bVar115 = (byte)((int)uVar117 >> 0x1f);
                auVar135[0xc] = bVar115 ^ 0xff;
                auVar135[0xd] = bVar115 ^ 0x7f;
                auVar135[0xe] = bVar115;
                auVar135[0xf] = bVar115;
                auVar135 = auVar135 ^ (auVar135 ^ auVar124) & auVar134;
                uVar109 = (int)sVar57 * (int)sVar60;
                uVar114 = (int)sVar57 * (int)sVar61;
                uVar116 = (int)sVar57 * (int)sVar19;
                uVar117 = (int)sVar57 * (int)sVar20;
                bVar115 = (byte)(uVar116 >> 0x18);
                bVar118 = (byte)(uVar117 >> 0x18);
                auVar148._0_4_ = -(uint)((int)uVar109 >> 0x1b == (int)uVar109 >> 0x1f);
                auVar148._4_4_ = -(uint)((int)uVar114 >> 0x1b == (int)uVar114 >> 0x1f);
                auVar148._8_4_ = -(uint)((int)uVar116 >> 0x1b == (int)uVar116 >> 0x1f);
                auVar148._12_4_ = -(uint)((int)uVar117 >> 0x1b == (int)uVar117 >> 0x1f);
                cVar69 = (char)((int)uVar109 >> 0x1f);
                cVar74 = (char)((int)uVar114 >> 0x1f);
                auVar149._0_6_ =
                     CONCAT15(cVar74,CONCAT14(cVar74,(uint)(ushort)(CONCAT11(cVar69,cVar69) ^ 0x7fff
                                                                   ))) ^ 0x7fff00000000;
                auVar149[6] = 0;
                auVar149[7] = cVar74;
                bVar97 = (char)bVar115 >> 7;
                auVar149[8] = bVar97 ^ 0xff;
                auVar149[9] = bVar97 ^ 0x7f;
                auVar149[10] = bVar97;
                auVar149[0xb] = bVar97;
                bVar97 = (char)bVar118 >> 7;
                auVar149[0xc] = bVar97 ^ 0xff;
                auVar149[0xd] = bVar97 ^ 0x7f;
                auVar149[0xe] = bVar97;
                auVar149[0xf] = bVar97;
                auVar22._6_2_ = 0;
                auVar22._0_6_ =
                     CONCAT15((char)((uVar114 >> 0xc) >> 8),
                              CONCAT14((char)(uVar114 >> 0xc),uVar109 >> 0xc)) & 0xffff0000ffff;
                auVar22[8] = (char)(uVar116 >> 0xc);
                auVar22[9] = (char)((uVar116 >> 0xc) >> 8);
                auVar22[10] = bVar115 >> 4;
                auVar22[0xb] = 0;
                auVar22[0xc] = (char)(uVar117 >> 0xc);
                auVar22[0xd] = (char)((uVar117 >> 0xc) >> 8);
                auVar22[0xe] = bVar118 >> 4;
                auVar22[0xf] = 0;
                auVar149 = auVar149 ^ (auVar149 ^ auVar22) & auVar148;
                *param_1 = auVar135._0_2_;
                param_1[1] = auVar149._0_2_;
                param_1[2] = auVar135._4_2_;
                param_1[3] = auVar149._4_2_;
                param_1[4] = auVar135._8_2_;
                param_1[5] = auVar149._8_2_;
                param_1[6] = auVar135._12_2_;
                param_1[7] = auVar149._12_2_;
                param_1 = param_1 + 8;
                iVar50 = (int)sVar60 + (int)sVar56;
                iVar62 = (int)sVar61 + (int)sVar59;
                iVar64 = (int)sVar19 + (int)sVar55;
                iVar51 = (int)sVar20 + (int)sVar58;
                piVar48[2] = piVar48[2] +
                             CONCAT13((char)(iVar64 >> 0x19),(int3)(iVar64 >> 1)) * iVar49;
                piVar48[3] = piVar48[3] +
                             CONCAT13((char)(iVar51 >> 0x19),(int3)(iVar51 >> 1)) * iVar49;
                *piVar48 = *piVar48 + CONCAT13((char)(iVar50 >> 0x19),(int3)(iVar50 >> 1)) * iVar49;
                piVar48[1] = piVar48[1] +
                             CONCAT13((char)(iVar62 >> 0x19),(int3)(iVar62 >> 1)) * iVar49;
                piVar48 = piVar48 + 4;
              } while (uVar53 != 0);
              bVar31 = uVar54 == param_2;
              param_3 = psVar46;
              param_4 = param_4 + uVar54;
              param_2 = param_2 - uVar54;
              param_1 = (short *)puVar4;
              if (bVar31) {
                return;
              }
            }
          }
          do {
            sVar142 = *param_3;
            uVar109 = (int)*(short *)ptVar1 * (int)sVar142;
            uVar5 = (ushort)(uVar109 >> 0xc);
            if ((int)uVar109 >> 0x1f != (int)uVar109 >> 0x1b) {
              uVar5 = (ushort)((int)uVar109 >> 0x1f) ^ 0x7fff;
            }
            *param_1 = uVar5;
            sVar57 = param_3[1];
            uVar109 = (int)*(short *)(param_6 + 6) * (int)sVar57;
            uVar5 = (ushort)(uVar109 >> 0xc);
            if ((int)uVar109 >> 0x1f != (int)uVar109 >> 0x1b) {
              uVar5 = (ushort)((int)uVar109 >> 0x1f) ^ 0x7fff;
            }
            param_1[1] = uVar5;
            param_2 = param_2 - 1;
            *param_4 = *param_4 + ((int)sVar57 + (int)sVar142 >> 1) * iVar49;
            param_3 = param_3 + 2;
            param_4 = param_4 + 1;
            param_1 = param_1 + 2;
          } while (param_2 != 0);
        }
        break;
      case 2:
        volumeMulti<4,3,short,short,short,int,short>
                  (param_1,param_2,param_3,param_4,(short *)ptVar1,sVar142);
        return;
      case 3:
        volumeMulti<4,4,short,short,short,int,short>
                  (param_1,param_2,param_3,param_4,(short *)ptVar1,sVar142);
        return;
      case 4:
        volumeMulti<4,5,short,short,short,int,short>
                  (param_1,param_2,param_3,param_4,(short *)ptVar1,sVar142);
        return;
      case 5:
        volumeMulti<4,6,short,short,short,int,short>
                  (param_1,param_2,param_3,param_4,(short *)ptVar1,sVar142);
        return;
      case 6:
        volumeMulti<4,7,short,short,short,int,short>
                  (param_1,param_2,param_3,param_4,(short *)ptVar1,sVar142);
        return;
      case 7:
        volumeMulti<4,8,short,short,short,int,short>
                  (param_1,param_2,param_3,param_4,(short *)ptVar1,sVar142);
        return;
      }
    }
    return;
  }
  if (7 < uVar109) {
    return;
  }
  iVar49 = *(int *)(param_6 + 0x18);
  ptVar1 = param_6 + 8;
  ptVar2 = param_6 + 0x10;
  ptVar3 = param_6 + 0x1c;
  switch(uVar109) {
  case 1:
    if (param_4 != (int *)0x0) {
      iVar50 = *(int *)ptVar3;
      do {
        uVar63 = *(undefined8 *)ptVar1;
        sVar142 = *param_3;
        iVar62 = (int)uVar63;
        uVar109 = (iVar62 >> 0x10) * (int)sVar142;
        uVar5 = (ushort)(uVar109 >> 0xc);
        if ((int)uVar109 >> 0x1f != (int)uVar109 >> 0x1b) {
          uVar5 = (ushort)((int)uVar109 >> 0x1f) ^ 0x7fff;
        }
        *param_1 = uVar5;
        sVar57 = param_3[1];
        iVar64 = (int)((ulong)uVar63 >> 0x20);
        param_3 = param_3 + 2;
        uVar109 = (iVar64 >> 0x10) * (int)sVar57;
        uVar5 = (ushort)(uVar109 >> 0xc);
        if ((int)uVar109 >> 0x1f != (int)uVar109 >> 0x1b) {
          uVar5 = (ushort)((int)uVar109 >> 0x1f) ^ 0x7fff;
        }
        param_1[1] = uVar5;
        param_2 = param_2 - 1;
        *(ulong *)ptVar1 =
             CONCAT44((int)((ulong)*(undefined8 *)ptVar2 >> 0x20) + iVar64,
                      (int)*(undefined8 *)ptVar2 + iVar62);
        param_1 = param_1 + 2;
        *param_4 = *param_4 + (iVar50 >> 0x10) * ((int)sVar57 + (int)sVar142 >> 1);
        iVar50 = *(int *)ptVar3 + iVar49;
        *(int *)ptVar3 = iVar50;
        param_4 = param_4 + 1;
      } while (param_2 != 0);
      return;
    }
    iVar49 = *(int *)(param_6 + 8);
    iVar62 = *(int *)(param_6 + 0xc);
    iVar50 = *(int *)(param_6 + 0x10);
    iVar64 = *(int *)(param_6 + 0x14);
    if ((7 < param_2) && ((param_3 + param_2 * 2 <= param_1 || (param_1 + param_2 * 2 <= param_3))))
    {
      uVar54 = param_2 & 0xfffffffffffffff8;
      uVar70 = (undefined1)iVar49;
      uVar71 = (undefined1)((uint)iVar49 >> 8);
      uVar72 = (undefined1)((uint)iVar49 >> 0x10);
      uVar73 = (undefined1)((uint)iVar49 >> 0x18);
      iVar67 = iVar64 * 8;
      iVar6 = iVar50 * 8;
      iVar51 = iVar62 + iVar64 * 4;
      uVar89 = (undefined1)iVar51;
      uVar90 = (undefined1)((uint)iVar51 >> 8);
      uVar91 = (undefined1)((uint)iVar51 >> 0x10);
      uVar92 = (undefined1)((uint)iVar51 >> 0x18);
      iVar51 = iVar62 + iVar64 * 5;
      uVar93 = (undefined1)iVar51;
      uVar94 = (undefined1)((uint)iVar51 >> 8);
      uVar95 = (undefined1)((uint)iVar51 >> 0x10);
      uVar96 = (undefined1)((uint)iVar51 >> 0x18);
      iVar51 = iVar62 + iVar64 * 6;
      uVar98 = (undefined1)iVar51;
      uVar99 = (undefined1)((uint)iVar51 >> 8);
      uVar100 = (undefined1)((uint)iVar51 >> 0x10);
      uVar101 = (undefined1)((uint)iVar51 >> 0x18);
      iVar51 = iVar62 + iVar64 * 7;
      uVar103 = (undefined1)iVar51;
      uVar104 = (undefined1)((uint)iVar51 >> 8);
      uVar105 = (undefined1)((uint)iVar51 >> 0x10);
      uVar106 = (undefined1)((uint)iVar51 >> 0x18);
      iVar65 = iVar62 + iVar64;
      iVar66 = iVar62 + iVar64 * 2;
      iVar68 = iVar62 + iVar64 * 3;
      iVar51 = iVar62 + iVar64 * (int)uVar54;
      iVar52 = iVar49 + iVar50 * (int)uVar54;
      auVar112._0_4_ = iVar49 + iVar50 * 4;
      auVar112._4_4_ =
           (int)(CONCAT17(uVar73,CONCAT16(uVar72,CONCAT15(uVar71,CONCAT14(uVar70,iVar49)))) >> 0x20)
           + iVar50 * 5;
      auVar112._8_4_ = iVar49 + iVar50 * 6;
      auVar112._12_4_ =
           (int)(CONCAT17(uVar73,CONCAT16(uVar72,CONCAT15(uVar71,CONCAT14(uVar70,iVar49)))) >> 0x20)
           + iVar50 * 7;
      psVar46 = param_3 + uVar54 * 2;
      puVar4 = (ushort *)(param_1 + uVar54 * 2);
      iVar11 = iVar49 + iVar50;
      uVar75 = (undefined1)iVar11;
      uVar76 = (undefined1)((uint)iVar11 >> 8);
      uVar77 = (undefined1)((uint)iVar11 >> 0x10);
      uVar78 = (undefined1)((uint)iVar11 >> 0x18);
      iVar11 = iVar49 + iVar50 * 2;
      uVar80 = (undefined1)iVar11;
      uVar81 = (undefined1)((uint)iVar11 >> 8);
      uVar82 = (undefined1)((uint)iVar11 >> 0x10);
      uVar83 = (undefined1)((uint)iVar11 >> 0x18);
      iVar49 = iVar49 + iVar50 * 3;
      uVar85 = (undefined1)iVar49;
      uVar86 = (undefined1)((uint)iVar49 >> 8);
      uVar87 = (undefined1)((uint)iVar49 >> 0x10);
      uVar88 = (undefined1)((uint)iVar49 >> 0x18);
      uVar53 = uVar54;
      do {
        sVar142 = *param_3;
        psVar32 = param_3 + 1;
        psVar47 = param_3 + 2;
        psVar33 = param_3 + 3;
        psVar34 = param_3 + 4;
        psVar35 = param_3 + 5;
        psVar36 = param_3 + 6;
        psVar37 = param_3 + 7;
        psVar38 = param_3 + 8;
        psVar39 = param_3 + 9;
        psVar40 = param_3 + 10;
        psVar41 = param_3 + 0xb;
        psVar42 = param_3 + 0xc;
        psVar43 = param_3 + 0xd;
        psVar44 = param_3 + 0xe;
        psVar45 = param_3 + 0xf;
        param_3 = param_3 + 0x10;
        cVar69 = auVar112[3] >> 7;
        cVar74 = auVar112[7] >> 7;
        cVar107 = auVar112[0xb] >> 7;
        cVar108 = auVar112[0xf] >> 7;
        uVar109 = CONCAT13(cVar69,CONCAT12(cVar69,auVar112._2_2_)) * (int)*psVar38;
        uVar114 = CONCAT13(cVar74,CONCAT12(cVar74,auVar112._6_2_)) * (int)*psVar40;
        uVar116 = CONCAT13(cVar107,CONCAT12(cVar107,auVar112._10_2_)) * (int)*psVar42;
        uVar117 = CONCAT13(cVar108,CONCAT12(cVar108,auVar112._14_2_)) * (int)*psVar44;
        uVar127 = (CONCAT13(uVar73,CONCAT12(uVar72,CONCAT11(uVar71,uVar70))) >> 0x10) * (int)sVar142
        ;
        uVar139 = (CONCAT13(uVar78,CONCAT12(uVar77,CONCAT11(uVar76,uVar75))) >> 0x10) *
                  (int)*psVar47;
        uVar140 = (CONCAT13(uVar83,CONCAT12(uVar82,CONCAT11(uVar81,uVar80))) >> 0x10) *
                  (int)*psVar34;
        uVar141 = (CONCAT13(uVar88,CONCAT12(uVar87,CONCAT11(uVar86,uVar85))) >> 0x10) *
                  (int)*psVar36;
        uVar143 = (CONCAT13(uVar92,CONCAT12(uVar91,CONCAT11(uVar90,uVar89))) >> 0x10) *
                  (int)*psVar39;
        uVar152 = (CONCAT13(uVar96,CONCAT12(uVar95,CONCAT11(uVar94,uVar93))) >> 0x10) *
                  (int)*psVar41;
        uVar153 = (CONCAT13(uVar101,CONCAT12(uVar100,CONCAT11(uVar99,uVar98))) >> 0x10) *
                  (int)*psVar43;
        uVar154 = (CONCAT13(uVar106,CONCAT12(uVar105,CONCAT11(uVar104,uVar103))) >> 0x10) *
                  (int)*psVar45;
        uVar155 = (iVar62 >> 0x10) * (int)*psVar32;
        uVar158 = (iVar65 >> 0x10) * (int)*psVar33;
        uVar159 = (iVar66 >> 0x10) * (int)*psVar35;
        uVar160 = (iVar68 >> 0x10) * (int)*psVar37;
        auVar161._0_4_ = uVar127 >> 0xc;
        auVar161._4_4_ = uVar139 >> 0xc;
        auVar161._8_4_ = uVar140 >> 0xc;
        auVar161._12_4_ = uVar141 >> 0xc;
        cVar107 = (char)((int)uVar109 >> 0x1f);
        cVar108 = (char)((int)uVar114 >> 0x1f);
        bVar118 = (byte)((int)uVar116 >> 0x1f);
        bVar97 = (byte)((int)uVar117 >> 0x1f);
        auVar164._0_4_ =
             -(uint)((int)uVar109 >> 0x1b ==
                    CONCAT13(cVar107,CONCAT12(cVar107,CONCAT11(cVar107,cVar107))));
        auVar164._4_4_ =
             -(uint)((int)uVar114 >> 0x1b ==
                    CONCAT13(cVar108,CONCAT12(cVar108,CONCAT11(cVar108,cVar108))));
        auVar164._8_4_ =
             -(uint)((int)uVar116 >> 0x1b ==
                    CONCAT13(bVar118,CONCAT12(bVar118,CONCAT11(bVar118,bVar118))));
        auVar164._12_4_ =
             -(uint)((int)uVar117 >> 0x1b ==
                    CONCAT13(bVar97,CONCAT12(bVar97,CONCAT11(bVar97,bVar97))));
        auVar166._0_4_ = -(uint)((int)uVar127 >> 0x1b == (int)uVar127 >> 0x1f);
        auVar166._4_4_ = -(uint)((int)uVar139 >> 0x1b == (int)uVar139 >> 0x1f);
        auVar166._8_4_ = -(uint)((int)uVar140 >> 0x1b == (int)uVar140 >> 0x1f);
        auVar166._12_4_ = -(uint)((int)uVar141 >> 0x1b == (int)uVar141 >> 0x1f);
        cVar69 = (char)((int)uVar127 >> 0x1f);
        cVar74 = (char)((int)uVar139 >> 0x1f);
        auVar167._0_6_ =
             CONCAT15(cVar74,CONCAT14(cVar74,(uint)(ushort)(CONCAT11(cVar69,cVar69) ^ 0x7fff))) ^
             0x7fff00000000;
        auVar167[6] = 0;
        auVar167[7] = cVar74;
        bVar115 = (byte)((int)uVar140 >> 0x1f);
        auVar167[8] = bVar115 ^ 0xff;
        auVar167[9] = bVar115 ^ 0x7f;
        auVar167[10] = bVar115;
        auVar167[0xb] = bVar115;
        bVar115 = (byte)((int)uVar141 >> 0x1f);
        auVar167[0xc] = bVar115 ^ 0xff;
        auVar167[0xd] = bVar115 ^ 0x7f;
        auVar167[0xe] = bVar115;
        auVar167[0xf] = bVar115;
        auVar27[6] = 0;
        auVar27._0_6_ =
             CONCAT15(cVar108,CONCAT14(cVar108,(uint)(ushort)(CONCAT11(cVar107,cVar107) ^ 0x7fff)))
             ^ 0x7fff00000000;
        auVar27[7] = cVar108;
        auVar27[8] = bVar118 ^ 0xff;
        auVar27[9] = bVar118 ^ 0x7f;
        auVar27[10] = bVar118;
        auVar27[0xb] = bVar118;
        auVar27[0xc] = bVar97 ^ 0xff;
        auVar27[0xd] = bVar97 ^ 0x7f;
        auVar27[0xe] = bVar97;
        auVar27[0xf] = bVar97;
        auVar29._4_4_ = uVar114 >> 0xc;
        auVar29._0_4_ = uVar109 >> 0xc;
        auVar29._8_4_ = uVar116 >> 0xc;
        auVar29._12_4_ = uVar117 >> 0xc;
        auVar165[6] = 0;
        auVar165._0_6_ =
             CONCAT15(cVar108,CONCAT14(cVar108,(uint)(ushort)(CONCAT11(cVar107,cVar107) ^ 0x7fff)))
             ^ 0x7fff00000000;
        auVar165[7] = cVar108;
        auVar165[8] = bVar118 ^ 0xff;
        auVar165[9] = bVar118 ^ 0x7f;
        auVar165[10] = bVar118;
        auVar165[0xb] = bVar118;
        auVar165[0xc] = bVar97 ^ 0xff;
        auVar165[0xd] = bVar97 ^ 0x7f;
        auVar165[0xe] = bVar97;
        auVar165[0xf] = bVar97;
        auVar165 = auVar165 ^ (auVar27 ^ auVar29) & auVar164;
        bVar115 = (byte)(uVar159 >> 0x18);
        bVar118 = (byte)(uVar160 >> 0x18);
        auVar167 = auVar167 ^ (auVar167 ^ auVar161) & auVar166;
        auVar162._0_4_ = -(uint)((int)uVar155 >> 0x1b == (int)uVar155 >> 0x1f);
        auVar162._4_4_ = -(uint)((int)uVar158 >> 0x1b == (int)uVar158 >> 0x1f);
        auVar162._8_4_ = -(uint)((int)uVar159 >> 0x1b == (int)uVar159 >> 0x1f);
        auVar162._12_4_ = -(uint)((int)uVar160 >> 0x1b == (int)uVar160 >> 0x1f);
        auVar137._0_4_ = -(uint)((int)uVar143 >> 0x1b == (int)uVar143 >> 0x1f);
        auVar137._4_4_ = -(uint)((int)uVar152 >> 0x1b == (int)uVar152 >> 0x1f);
        auVar137._8_4_ = -(uint)((int)uVar153 >> 0x1b == (int)uVar153 >> 0x1f);
        auVar137._12_4_ = -(uint)((int)uVar154 >> 0x1b == (int)uVar154 >> 0x1f);
        cVar69 = (char)((int)uVar155 >> 0x1f);
        cVar74 = (char)((int)uVar158 >> 0x1f);
        auVar163._0_6_ =
             CONCAT15(cVar74,CONCAT14(cVar74,(uint)(ushort)(CONCAT11(cVar69,cVar69) ^ 0x7fff))) ^
             0x7fff00000000;
        auVar163[6] = 0;
        auVar163[7] = cVar74;
        bVar97 = (char)bVar115 >> 7;
        auVar163[8] = bVar97 ^ 0xff;
        auVar163[9] = bVar97 ^ 0x7f;
        auVar163[10] = bVar97;
        auVar163[0xb] = bVar97;
        bVar97 = (char)bVar118 >> 7;
        auVar163[0xc] = bVar97 ^ 0xff;
        auVar163[0xd] = bVar97 ^ 0x7f;
        auVar163[0xe] = bVar97;
        auVar163[0xf] = bVar97;
        cVar69 = (char)((int)uVar143 >> 0x1f);
        cVar74 = (char)((int)uVar152 >> 0x1f);
        auVar138._0_6_ =
             CONCAT15(cVar74,CONCAT14(cVar74,(uint)(ushort)(CONCAT11(cVar69,cVar69) ^ 0x7fff))) ^
             0x7fff00000000;
        auVar138[6] = 0;
        auVar138[7] = cVar74;
        bVar97 = (byte)((int)uVar153 >> 0x1f);
        auVar138[8] = bVar97 ^ 0xff;
        auVar138[9] = bVar97 ^ 0x7f;
        auVar138[10] = bVar97;
        auVar138[0xb] = bVar97;
        bVar97 = (byte)((int)uVar154 >> 0x1f);
        auVar138[0xc] = bVar97 ^ 0xff;
        auVar138[0xd] = bVar97 ^ 0x7f;
        auVar138[0xe] = bVar97;
        auVar138[0xf] = bVar97;
        auVar30._4_4_ = uVar152 >> 0xc;
        auVar30._0_4_ = uVar143 >> 0xc;
        auVar30._8_4_ = uVar153 >> 0xc;
        auVar30._12_4_ = uVar154 >> 0xc;
        auVar138 = auVar138 ^ (auVar138 ^ auVar30) & auVar137;
        auVar28._6_2_ = 0;
        auVar28._0_6_ =
             CONCAT15((char)((uVar158 >> 0xc) >> 8),CONCAT14((char)(uVar158 >> 0xc),uVar155 >> 0xc))
             & 0xffff0000ffff;
        auVar28[8] = (char)(uVar159 >> 0xc);
        auVar28[9] = (char)((uVar159 >> 0xc) >> 8);
        auVar28[10] = bVar115 >> 4;
        auVar28[0xb] = 0;
        auVar28[0xc] = (char)(uVar160 >> 0xc);
        auVar28[0xd] = (char)((uVar160 >> 0xc) >> 8);
        auVar28[0xe] = bVar118 >> 4;
        auVar28[0xf] = 0;
        auVar163 = auVar163 ^ (auVar163 ^ auVar28) & auVar162;
        iVar62 = iVar62 + iVar67;
        iVar65 = iVar65 + iVar67;
        iVar66 = iVar66 + iVar67;
        iVar68 = iVar68 + iVar67;
        iVar49 = CONCAT13(uVar92,CONCAT12(uVar91,CONCAT11(uVar90,uVar89))) + iVar67;
        uVar89 = (undefined1)iVar49;
        uVar90 = (undefined1)((uint)iVar49 >> 8);
        uVar91 = (undefined1)((uint)iVar49 >> 0x10);
        uVar92 = (undefined1)((uint)iVar49 >> 0x18);
        iVar49 = CONCAT13(uVar96,CONCAT12(uVar95,CONCAT11(uVar94,uVar93))) + iVar67;
        uVar93 = (undefined1)iVar49;
        uVar94 = (undefined1)((uint)iVar49 >> 8);
        uVar95 = (undefined1)((uint)iVar49 >> 0x10);
        uVar96 = (undefined1)((uint)iVar49 >> 0x18);
        iVar49 = CONCAT13(uVar101,CONCAT12(uVar100,CONCAT11(uVar99,uVar98))) + iVar67;
        uVar98 = (undefined1)iVar49;
        uVar99 = (undefined1)((uint)iVar49 >> 8);
        uVar100 = (undefined1)((uint)iVar49 >> 0x10);
        uVar101 = (undefined1)((uint)iVar49 >> 0x18);
        iVar49 = CONCAT13(uVar106,CONCAT12(uVar105,CONCAT11(uVar104,uVar103))) + iVar67;
        uVar103 = (undefined1)iVar49;
        uVar104 = (undefined1)((uint)iVar49 >> 8);
        uVar105 = (undefined1)((uint)iVar49 >> 0x10);
        uVar106 = (undefined1)((uint)iVar49 >> 0x18);
        iVar49 = CONCAT13(uVar73,CONCAT12(uVar72,CONCAT11(uVar71,uVar70))) + iVar6;
        uVar70 = (undefined1)iVar49;
        uVar71 = (undefined1)((uint)iVar49 >> 8);
        uVar72 = (undefined1)((uint)iVar49 >> 0x10);
        uVar73 = (undefined1)((uint)iVar49 >> 0x18);
        iVar49 = CONCAT13(uVar78,CONCAT12(uVar77,CONCAT11(uVar76,uVar75))) + iVar6;
        uVar75 = (undefined1)iVar49;
        uVar76 = (undefined1)((uint)iVar49 >> 8);
        uVar77 = (undefined1)((uint)iVar49 >> 0x10);
        uVar78 = (undefined1)((uint)iVar49 >> 0x18);
        iVar49 = CONCAT13(uVar83,CONCAT12(uVar82,CONCAT11(uVar81,uVar80))) + iVar6;
        uVar80 = (undefined1)iVar49;
        uVar81 = (undefined1)((uint)iVar49 >> 8);
        uVar82 = (undefined1)((uint)iVar49 >> 0x10);
        uVar83 = (undefined1)((uint)iVar49 >> 0x18);
        iVar49 = CONCAT13(uVar88,CONCAT12(uVar87,CONCAT11(uVar86,uVar85))) + iVar6;
        uVar85 = (undefined1)iVar49;
        uVar86 = (undefined1)((uint)iVar49 >> 8);
        uVar87 = (undefined1)((uint)iVar49 >> 0x10);
        uVar88 = (undefined1)((uint)iVar49 >> 0x18);
        uVar53 = uVar53 - 8;
        *param_1 = auVar167._0_2_;
        param_1[1] = auVar163._0_2_;
        param_1[2] = auVar167._4_2_;
        param_1[3] = auVar163._4_2_;
        param_1[4] = auVar167._8_2_;
        param_1[5] = auVar163._8_2_;
        param_1[6] = auVar167._12_2_;
        param_1[7] = auVar163._12_2_;
        param_1[8] = auVar165._0_2_;
        param_1[9] = auVar138._0_2_;
        param_1[10] = auVar165._4_2_;
        param_1[0xb] = auVar138._4_2_;
        param_1[0xc] = auVar165._8_2_;
        param_1[0xd] = auVar138._8_2_;
        param_1[0xe] = auVar165._12_2_;
        param_1[0xf] = auVar138._12_2_;
        param_1 = param_1 + 0x10;
        auVar113._0_4_ = auVar112._0_4_ + iVar6;
        auVar113._4_4_ = auVar112._4_4_ + iVar6;
        auVar113._8_4_ = auVar112._8_4_ + iVar6;
        auVar113._12_4_ = auVar112._12_4_ + iVar6;
        auVar112 = auVar113;
      } while (uVar53 != 0);
      bVar31 = uVar54 == param_2;
      param_2 = param_2 - uVar54;
      param_3 = psVar46;
      param_1 = (short *)puVar4;
      iVar49 = iVar52;
      iVar62 = iVar51;
      if (bVar31) goto LAB_00e8a8d4;
    }
    do {
      iVar51 = iVar62 + iVar64;
      uVar109 = (iVar49 >> 0x10) * (int)*param_3;
      uVar5 = (ushort)(uVar109 >> 0xc);
      if ((int)uVar109 >> 0x1f != (int)uVar109 >> 0x1b) {
        uVar5 = (ushort)((int)uVar109 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar5;
      iVar52 = iVar49 + iVar50;
      uVar109 = (iVar62 >> 0x10) * (int)param_3[1];
      uVar5 = (ushort)(uVar109 >> 0xc);
      if ((int)uVar109 >> 0x1f != (int)uVar109 >> 0x1b) {
        uVar5 = (ushort)((int)uVar109 >> 0x1f) ^ 0x7fff;
      }
      param_2 = param_2 - 1;
      param_1[1] = uVar5;
      param_3 = param_3 + 2;
      param_1 = param_1 + 2;
      iVar49 = iVar52;
      iVar62 = iVar51;
    } while (param_2 != 0);
LAB_00e8a8d4:
    *(int *)(param_6 + 8) = iVar52;
    *(int *)(param_6 + 0xc) = iVar51;
    return;
  case 2:
    volumeRampMulti<4,3,short,short,int,int,int>
              (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar49);
    return;
  case 3:
    volumeRampMulti<4,4,short,short,int,int,int>
              (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar49);
    return;
  case 4:
    volumeRampMulti<4,5,short,short,int,int,int>
              (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar49);
    return;
  case 5:
    volumeRampMulti<4,6,short,short,int,int,int>
              (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar49);
    return;
  case 6:
    volumeRampMulti<4,7,short,short,int,int,int>
              (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar49);
    return;
  case 7:
    volumeRampMulti<4,8,short,short,int,int,int>
              (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar49);
    return;
  }
  if (param_4 != (int *)0x0) {
    iVar50 = *(int *)ptVar3;
    do {
      sVar142 = *param_3;
      iVar62 = *(int *)ptVar1;
      uVar109 = (iVar62 >> 0x10) * (int)sVar142;
      uVar5 = (ushort)(uVar109 >> 0xc);
      if ((int)uVar109 >> 0x1f != (int)uVar109 >> 0x1b) {
        uVar5 = (ushort)((int)uVar109 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar5;
      param_2 = param_2 - 1;
      *(int *)ptVar1 = *(int *)ptVar2 + iVar62;
      *param_4 = *param_4 + (iVar50 >> 0x10) * (int)sVar142;
      iVar50 = *(int *)ptVar3 + iVar49;
      *(int *)ptVar3 = iVar50;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
    return;
  }
  iVar49 = *(int *)ptVar1;
  iVar50 = *(int *)ptVar2;
  if ((7 < param_2) && ((param_3 + param_2 <= param_1 || (param_1 + param_2 <= param_3)))) {
    uVar54 = param_2 & 0xfffffffffffffff8;
    iVar64 = iVar50 * 8;
    iVar62 = iVar49 + iVar50 * (int)uVar54;
    iVar51 = iVar49 + iVar50 * 4;
    uVar70 = (undefined1)iVar51;
    uVar71 = (undefined1)((uint)iVar51 >> 8);
    uVar72 = (undefined1)((uint)iVar51 >> 0x10);
    uVar73 = (undefined1)((uint)iVar51 >> 0x18);
    iVar51 = iVar49 + iVar50 * 5;
    uVar75 = (undefined1)iVar51;
    uVar76 = (undefined1)((uint)iVar51 >> 8);
    uVar77 = (undefined1)((uint)iVar51 >> 0x10);
    uVar78 = (undefined1)((uint)iVar51 >> 0x18);
    iVar51 = iVar49 + iVar50 * 6;
    uVar80 = (undefined1)iVar51;
    uVar81 = (undefined1)((uint)iVar51 >> 8);
    uVar82 = (undefined1)((uint)iVar51 >> 0x10);
    uVar83 = (undefined1)((uint)iVar51 >> 0x18);
    iVar51 = iVar49 + iVar50 * 7;
    uVar85 = (undefined1)iVar51;
    uVar86 = (undefined1)((uint)iVar51 >> 8);
    uVar87 = (undefined1)((uint)iVar51 >> 0x10);
    uVar88 = (undefined1)((uint)iVar51 >> 0x18);
    psVar46 = param_1;
    psVar47 = param_3;
    uVar53 = uVar54;
    iVar51 = iVar49 + iVar50;
    iVar52 = iVar49 + iVar50 * 2;
    iVar67 = iVar49 + iVar50 * 3;
    do {
      cVar69 = (char)(iVar49 >> 0x1f);
      cVar74 = (char)(iVar51 >> 0x1f);
      cVar107 = (char)(iVar52 >> 0x1f);
      cVar108 = (char)(iVar67 >> 0x1f);
      uVar109 = CONCAT13(cVar69,CONCAT12(cVar69,(short)((uint)iVar49 >> 0x10))) * (int)*psVar47;
      uVar114 = CONCAT13(cVar74,CONCAT12(cVar74,(short)((uint)iVar51 >> 0x10))) * (int)psVar47[1];
      uVar116 = CONCAT13(cVar107,CONCAT12(cVar107,(short)((uint)iVar52 >> 0x10))) * (int)psVar47[2];
      uVar117 = CONCAT13(cVar108,CONCAT12(cVar108,(short)((uint)iVar67 >> 0x10))) * (int)psVar47[3];
      uVar127 = (CONCAT13(uVar73,CONCAT12(uVar72,CONCAT11(uVar71,uVar70))) >> 0x10) *
                (int)psVar47[4];
      uVar139 = (CONCAT13(uVar78,CONCAT12(uVar77,CONCAT11(uVar76,uVar75))) >> 0x10) *
                (int)psVar47[5];
      uVar140 = (CONCAT13(uVar83,CONCAT12(uVar82,CONCAT11(uVar81,uVar80))) >> 0x10) *
                (int)psVar47[6];
      uVar141 = (CONCAT13(uVar88,CONCAT12(uVar87,CONCAT11(uVar86,uVar85))) >> 0x10) *
                (int)psVar47[7];
      auVar125._0_4_ = uVar109 >> 0xc;
      auVar125._4_4_ = uVar114 >> 0xc;
      auVar125._8_4_ = uVar116 >> 0xc;
      auVar125._12_4_ = uVar117 >> 0xc;
      cVar107 = (char)((int)uVar109 >> 0x1f);
      cVar108 = (char)((int)uVar114 >> 0x1f);
      bVar118 = (byte)((int)uVar116 >> 0x1f);
      bVar97 = (byte)((int)uVar117 >> 0x1f);
      auVar136._0_4_ = uVar127 >> 0xc;
      auVar136._4_4_ = uVar139 >> 0xc;
      auVar136._8_4_ = uVar140 >> 0xc;
      auVar136._12_4_ = uVar141 >> 0xc;
      auVar156._0_4_ =
           -(uint)((int)uVar109 >> 0x1b ==
                  CONCAT13(cVar107,CONCAT12(cVar107,CONCAT11(cVar107,cVar107))));
      auVar156._4_4_ =
           -(uint)((int)uVar114 >> 0x1b ==
                  CONCAT13(cVar108,CONCAT12(cVar108,CONCAT11(cVar108,cVar108))));
      auVar156._8_4_ =
           -(uint)((int)uVar116 >> 0x1b ==
                  CONCAT13(bVar118,CONCAT12(bVar118,CONCAT11(bVar118,bVar118))));
      auVar156._12_4_ =
           -(uint)((int)uVar117 >> 0x1b == CONCAT13(bVar97,CONCAT12(bVar97,CONCAT11(bVar97,bVar97)))
                  );
      auVar150._0_4_ = -(uint)((int)uVar127 >> 0x1b == (int)uVar127 >> 0x1f);
      auVar150._4_4_ = -(uint)((int)uVar139 >> 0x1b == (int)uVar139 >> 0x1f);
      auVar150._8_4_ = -(uint)((int)uVar140 >> 0x1b == (int)uVar140 >> 0x1f);
      auVar150._12_4_ = -(uint)((int)uVar141 >> 0x1b == (int)uVar141 >> 0x1f);
      cVar69 = (char)((int)uVar127 >> 0x1f);
      cVar74 = (char)((int)uVar139 >> 0x1f);
      auVar151._0_6_ =
           CONCAT15(cVar74,CONCAT14(cVar74,(uint)(ushort)(CONCAT11(cVar69,cVar69) ^ 0x7fff))) ^
           0x7fff00000000;
      auVar151[6] = 0;
      auVar151[7] = cVar74;
      bVar115 = (byte)((int)uVar140 >> 0x1f);
      auVar151[8] = bVar115 ^ 0xff;
      auVar151[9] = bVar115 ^ 0x7f;
      auVar151[10] = bVar115;
      auVar151[0xb] = bVar115;
      bVar115 = (byte)((int)uVar141 >> 0x1f);
      auVar151[0xc] = bVar115 ^ 0xff;
      auVar151[0xd] = bVar115 ^ 0x7f;
      auVar151[0xe] = bVar115;
      auVar151[0xf] = bVar115;
      auVar21[6] = 0;
      auVar21._0_6_ =
           CONCAT15(cVar108,CONCAT14(cVar108,(uint)(ushort)(CONCAT11(cVar107,cVar107) ^ 0x7fff))) ^
           0x7fff00000000;
      auVar21[7] = cVar108;
      auVar21[8] = bVar118 ^ 0xff;
      auVar21[9] = bVar118 ^ 0x7f;
      auVar21[10] = bVar118;
      auVar21[0xb] = bVar118;
      auVar21[0xc] = bVar97 ^ 0xff;
      auVar21[0xd] = bVar97 ^ 0x7f;
      auVar21[0xe] = bVar97;
      auVar21[0xf] = bVar97;
      auVar157[6] = 0;
      auVar157._0_6_ =
           CONCAT15(cVar108,CONCAT14(cVar108,(uint)(ushort)(CONCAT11(cVar107,cVar107) ^ 0x7fff))) ^
           0x7fff00000000;
      auVar157[7] = cVar108;
      auVar157[8] = bVar118 ^ 0xff;
      auVar157[9] = bVar118 ^ 0x7f;
      auVar157[10] = bVar118;
      auVar157[0xb] = bVar118;
      auVar157[0xc] = bVar97 ^ 0xff;
      auVar157[0xd] = bVar97 ^ 0x7f;
      auVar157[0xe] = bVar97;
      auVar157[0xf] = bVar97;
      auVar157 = auVar157 ^ (auVar21 ^ auVar125) & auVar156;
      auVar151 = auVar151 ^ (auVar151 ^ auVar136) & auVar150;
      uVar53 = uVar53 - 8;
      psVar46[4] = auVar151._0_2_;
      psVar46[5] = auVar151._4_2_;
      psVar46[6] = auVar151._8_2_;
      psVar46[7] = auVar151._12_2_;
      *psVar46 = auVar157._0_2_;
      psVar46[1] = auVar157._4_2_;
      psVar46[2] = auVar157._8_2_;
      psVar46[3] = auVar157._12_2_;
      iVar6 = CONCAT13(uVar73,CONCAT12(uVar72,CONCAT11(uVar71,uVar70))) + iVar64;
      uVar70 = (undefined1)iVar6;
      uVar71 = (undefined1)((uint)iVar6 >> 8);
      uVar72 = (undefined1)((uint)iVar6 >> 0x10);
      uVar73 = (undefined1)((uint)iVar6 >> 0x18);
      iVar6 = CONCAT13(uVar78,CONCAT12(uVar77,CONCAT11(uVar76,uVar75))) + iVar64;
      uVar75 = (undefined1)iVar6;
      uVar76 = (undefined1)((uint)iVar6 >> 8);
      uVar77 = (undefined1)((uint)iVar6 >> 0x10);
      uVar78 = (undefined1)((uint)iVar6 >> 0x18);
      iVar6 = CONCAT13(uVar83,CONCAT12(uVar82,CONCAT11(uVar81,uVar80))) + iVar64;
      uVar80 = (undefined1)iVar6;
      uVar81 = (undefined1)((uint)iVar6 >> 8);
      uVar82 = (undefined1)((uint)iVar6 >> 0x10);
      uVar83 = (undefined1)((uint)iVar6 >> 0x18);
      iVar6 = CONCAT13(uVar88,CONCAT12(uVar87,CONCAT11(uVar86,uVar85))) + iVar64;
      uVar85 = (undefined1)iVar6;
      uVar86 = (undefined1)((uint)iVar6 >> 8);
      uVar87 = (undefined1)((uint)iVar6 >> 0x10);
      uVar88 = (undefined1)((uint)iVar6 >> 0x18);
      psVar46 = psVar46 + 8;
      psVar47 = psVar47 + 8;
      iVar49 = iVar49 + iVar64;
      iVar51 = iVar51 + iVar64;
      iVar52 = iVar52 + iVar64;
      iVar67 = iVar67 + iVar64;
    } while (uVar53 != 0);
    bVar31 = uVar54 == param_2;
    param_2 = param_2 - uVar54;
    param_3 = param_3 + uVar54;
    param_1 = param_1 + uVar54;
    iVar49 = iVar62;
    if (bVar31) goto LAB_00e8a764;
  }
  do {
    iVar62 = iVar49 + iVar50;
    uVar109 = (iVar49 >> 0x10) * (int)*param_3;
    uVar5 = (ushort)(uVar109 >> 0xc);
    if ((int)uVar109 >> 0x1f != (int)uVar109 >> 0x1b) {
      uVar5 = (ushort)((int)uVar109 >> 0x1f) ^ 0x7fff;
    }
    param_2 = param_2 - 1;
    *param_1 = uVar5;
    param_3 = param_3 + 1;
    param_1 = param_1 + 1;
    iVar49 = iVar62;
  } while (param_2 != 0);
LAB_00e8a764:
  *(int *)ptVar1 = iVar62;
  return;
}

