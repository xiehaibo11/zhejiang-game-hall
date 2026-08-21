
/* void cocos2d::AudioMixer::volumeMix<2, false, false, short, short, int>(short*, unsigned long,
   short const*, int*, bool, cocos2d::AudioMixer::track_t*) */

void cocos2d::AudioMixer::volumeMix<2,false,false,short,short,int>
               (short *param_1,ulong param_2,short *param_3,int *param_4,bool param_5,
               track_t *param_6)

{
  track_t *ptVar1;
  track_t *ptVar2;
  track_t *ptVar3;
  ushort *puVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined6 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  short sVar18;
  short sVar19;
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
  short *psVar31;
  short *psVar45;
  short *psVar46;
  int *piVar47;
  int iVar48;
  ulong uVar49;
  int iVar50;
  ulong uVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  undefined8 uVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  undefined1 uVar69;
  char cVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  char cVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  byte bVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  byte bVar85;
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
  uint uVar117;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
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
  uint uVar141;
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  short sVar142;
  uint uVar143;
  uint uVar152;
  uint uVar153;
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  uint uVar154;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  uint uVar155;
  uint uVar158;
  uint uVar159;
  uint uVar160;
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  short *psVar32;
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
  
                    /* try { // try from 00a93fc8 to 00b93fcf has its CatchHandler @ 00a9418c */
  uVar109 = *(int *)(param_6 + 0xbc) - 1;
                    /* try { // try from 00a93fd0 to 00b93ff3 has its CatchHandler @ 00a941b8 */
  if (!param_5) {
    if (uVar109 < 8) {
      sVar142 = *(short *)(param_6 + 0x20);
      iVar48 = (int)sVar142;
      ptVar1 = param_6 + 4;
      switch(uVar109) {
      case 0:
        if (param_4 == (int *)0x0) {
          if (7 < param_2) {
                    /* try { // try from 00a945e8 to 00b945ef has its CatchHandler @ 00a94d68 */
                    /* try { // try from 00a945fc to 00b945ff has its CatchHandler @ 00a94c44 */
                    /* try { // try from 00a94608 to 00b9460f has its CatchHandler @ 00a94c9c */
                    /* try { // try from 00a94614 to 00b9461b has its CatchHandler @ 00a94c40 */
            if ((param_3 + param_2 <= param_1 || (track_t *)(param_1 + param_2) <= param_3) &&
               (param_6 + 5 <= param_1 || (track_t *)(param_1 + param_2) <= ptVar1)) {
              sVar142 = *(short *)ptVar1;
              uVar49 = param_2 & 0xfffffffffffffff8;
                    /* try { // try from 00a9462c to 00b9466f has its CatchHandler @ 00a94cec */
              psVar45 = param_1;
              psVar46 = param_3;
              uVar51 = uVar49;
              do {
                uVar15 = *(undefined8 *)(psVar46 + 4);
                uVar62 = *(undefined8 *)psVar46;
                uVar51 = uVar51 - 8;
                sVar53 = (short)((ulong)uVar62 >> 0x10);
                sVar57 = (short)((ulong)uVar62 >> 0x20);
                sVar54 = (short)((ulong)uVar62 >> 0x30);
                sVar55 = (short)((ulong)uVar15 >> 0x10);
                sVar52 = (short)((ulong)uVar15 >> 0x20);
                sVar56 = (short)((ulong)uVar15 >> 0x30);
                uVar127 = (int)sVar142 * CONCAT13((short)uVar62 >> 0xf,(int3)(short)uVar62);
                uVar139 = (int)sVar142 * CONCAT13(sVar53 >> 0xf,(int3)sVar53);
                uVar140 = (int)sVar142 * CONCAT13(sVar57 >> 0xf,(int3)sVar57);
                uVar141 = (int)sVar142 * CONCAT13(sVar54 >> 0xf,(int3)sVar54);
                uVar109 = (int)sVar142 * CONCAT13((short)uVar15 >> 0xf,(int3)(short)uVar15);
                uVar114 = (int)sVar142 * CONCAT13(sVar55 >> 0xf,(int3)sVar55);
                uVar116 = (int)sVar142 * CONCAT13(sVar52 >> 0xf,(int3)sVar52);
                uVar117 = (int)sVar142 * CONCAT13(sVar56 >> 0xf,(int3)sVar56);
                auVar110._0_4_ = uVar127 >> 0xc;
                auVar110._4_4_ = uVar139 >> 0xc;
                auVar110._8_4_ = uVar140 >> 0xc;
                auVar110._12_4_ = uVar141 >> 0xc;
                cVar107 = (char)((int)uVar127 >> 0x1f);
                cVar108 = (char)((int)uVar139 >> 0x1f);
                bVar80 = (byte)((int)uVar140 >> 0x1f);
                bVar85 = (byte)((int)uVar141 >> 0x1f);
                bVar115 = (byte)(uVar116 >> 0x18);
                bVar118 = (byte)(uVar117 >> 0x18);
                cVar70 = (char)((int)uVar109 >> 0x1f);
                cVar75 = (char)((int)uVar114 >> 0x1f);
                bVar97 = (char)bVar115 >> 7;
                bVar102 = (char)bVar118 >> 7;
                auVar130._0_4_ =
                     -(uint)((int)uVar127 >> 0x1b ==
                            CONCAT13(cVar107,CONCAT12(cVar107,CONCAT11(cVar107,cVar107))));
                auVar130._4_4_ =
                     -(uint)((int)uVar139 >> 0x1b ==
                            CONCAT13(cVar108,CONCAT12(cVar108,CONCAT11(cVar108,cVar108))));
                auVar130._8_4_ =
                     -(uint)((int)uVar140 >> 0x1b ==
                            CONCAT13(bVar80,CONCAT12(bVar80,CONCAT11(bVar80,bVar80))));
                auVar130._12_4_ =
                     -(uint)((int)uVar141 >> 0x1b ==
                            CONCAT13(bVar85,CONCAT12(bVar85,CONCAT11(bVar85,bVar85))));
                auVar122._0_4_ =
                     -(uint)((int)uVar109 >> 0x1b ==
                            CONCAT13(cVar70,CONCAT12(cVar70,CONCAT11(cVar70,cVar70))));
                auVar122._4_4_ =
                     -(uint)((int)uVar114 >> 0x1b ==
                            CONCAT13(cVar75,CONCAT12(cVar75,CONCAT11(cVar75,cVar75))));
                auVar122._8_4_ =
                     -(uint)((int)uVar116 >> 0x1b ==
                            CONCAT13(bVar97,CONCAT12(bVar97,CONCAT11(bVar97,bVar97))));
                auVar122._12_4_ =
                     -(uint)((int)uVar117 >> 0x1b ==
                            CONCAT13(bVar102,CONCAT12(bVar102,CONCAT11(bVar102,bVar102))));
                auVar17[6] = 0;
                auVar17._0_6_ =
                     CONCAT15(cVar108,CONCAT14(cVar108,(uint)(ushort)(CONCAT11(cVar107,cVar107) ^
                                                                     0x7fff))) ^ 0x7fff00000000;
                auVar17[7] = cVar108;
                auVar17[8] = bVar80 ^ 0xff;
                auVar17[9] = bVar80 ^ 0x7f;
                auVar17[10] = bVar80;
                auVar17[0xb] = bVar80;
                auVar17[0xc] = bVar85 ^ 0xff;
                auVar17[0xd] = bVar85 ^ 0x7f;
                auVar17[0xe] = bVar85;
                auVar17[0xf] = bVar85;
                auVar131[6] = 0;
                auVar131._0_6_ =
                     CONCAT15(cVar108,CONCAT14(cVar108,(uint)(ushort)(CONCAT11(cVar107,cVar107) ^
                                                                     0x7fff))) ^ 0x7fff00000000;
                auVar131[7] = cVar108;
                auVar131[8] = bVar80 ^ 0xff;
                auVar131[9] = bVar80 ^ 0x7f;
                auVar131[10] = bVar80;
                auVar131[0xb] = bVar80;
                auVar131[0xc] = bVar85 ^ 0xff;
                auVar131[0xd] = bVar85 ^ 0x7f;
                auVar131[0xe] = bVar85;
                auVar131[0xf] = bVar85;
                auVar131 = auVar131 ^ (auVar17 ^ auVar110) & auVar130;
                auVar13[6] = 0;
                auVar13._0_6_ =
                     CONCAT15(cVar75,CONCAT14(cVar75,(uint)(ushort)(CONCAT11(cVar70,cVar70) ^ 0x7fff
                                                                   ))) ^ 0x7fff00000000;
                auVar13[7] = cVar75;
                auVar13[8] = bVar97 ^ 0xff;
                auVar13[9] = bVar97 ^ 0x7f;
                auVar13[10] = bVar97;
                auVar13[0xb] = bVar97;
                auVar13[0xc] = bVar102 ^ 0xff;
                auVar13[0xd] = bVar102 ^ 0x7f;
                auVar13[0xe] = bVar102;
                auVar13[0xf] = bVar102;
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
                auVar123[6] = 0;
                auVar123._0_6_ =
                     CONCAT15(cVar75,CONCAT14(cVar75,(uint)(ushort)(CONCAT11(cVar70,cVar70) ^ 0x7fff
                                                                   ))) ^ 0x7fff00000000;
                auVar123[7] = cVar75;
                auVar123[8] = bVar97 ^ 0xff;
                auVar123[9] = bVar97 ^ 0x7f;
                auVar123[10] = bVar97;
                auVar123[0xb] = bVar97;
                auVar123[0xc] = bVar102 ^ 0xff;
                auVar123[0xd] = bVar102 ^ 0x7f;
                auVar123[0xe] = bVar102;
                auVar123[0xf] = bVar102;
                auVar123 = auVar123 ^ (auVar13 ^ auVar25) & auVar122;
                *(ulong *)(psVar45 + 4) =
                     CONCAT17(auVar123[0xd],
                              CONCAT16(auVar123[0xc],
                                       CONCAT15(auVar123[9],
                                                CONCAT14(auVar123[8],
                                                         CONCAT13(auVar123[5],
                                                                  CONCAT12(auVar123[4],
                                                                           auVar123._0_2_))))));
                *(ulong *)psVar45 =
                     CONCAT17(auVar131[0xd],
                              CONCAT16(auVar131[0xc],
                                       CONCAT15(auVar131[9],
                                                CONCAT14(auVar131[8],
                                                         CONCAT13(auVar131[5],
                                                                  CONCAT12(auVar131[4],
                                                                           auVar131._0_2_))))));
                psVar45 = psVar45 + 8;
                psVar46 = psVar46 + 8;
              } while (uVar51 != 0);
              bVar30 = uVar49 == param_2;
              param_3 = param_3 + uVar49;
              param_2 = param_2 - uVar49;
              param_1 = param_1 + uVar49;
                    /* try { // try from 00a94698 to 00b9469f has its CatchHandler @ 00a94d68 */
              if (bVar30) {
                return;
              }
            }
          }
          do {
            uVar109 = (int)*(short *)ptVar1 * (int)*param_3;
                    /* try { // try from 00a94390 to 00b9439f has its CatchHandler @ 00a94dfc */
            uVar5 = (ushort)(uVar109 >> 0xc);
                    /* try { // try from 00a943a0 to 00b943a7 has its CatchHandler @ 00a94e24 */
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
                    /* try { // try from 00a940a8 to 00b940c7 has its CatchHandler @ 00a941c8 */
                    /* try { // try from 00a940c8 to 00b941f3 has its CatchHandler @ 00a93f18 */
            if ((param_3 + param_2 <= param_1 || (track_t *)(param_1 + param_2) <= param_3) &&
               (param_6 + 5 <= param_1 || (track_t *)(param_1 + param_2) <= ptVar1)) {
              sVar142 = *(short *)ptVar1;
              uVar69 = (undefined1)sVar142;
              uVar71 = (undefined1)((ushort)sVar142 >> 8);
              uVar49 = param_2 & 0xfffffffffffffffc;
              uVar6 = CONCAT13(uVar71,CONCAT12(uVar69,sVar142));
              uVar7 = CONCAT15(uVar71,CONCAT14(uVar69,uVar6));
              sVar53 = (short)((uint)uVar6 >> 0x10);
              sVar55 = (short)((uint6)uVar7 >> 0x20);
              sVar57 = (short)(CONCAT17(uVar71,CONCAT16(uVar69,uVar7)) >> 0x30);
              psVar45 = param_1;
              psVar46 = param_3;
              piVar47 = param_4;
              uVar51 = uVar49;
              do {
                uVar62 = *(undefined8 *)psVar46;
                uVar51 = uVar51 - 4;
                sVar52 = (short)uVar62;
                sVar54 = (short)((ulong)uVar62 >> 0x10);
                sVar56 = (short)((ulong)uVar62 >> 0x20);
                sVar58 = (short)((ulong)uVar62 >> 0x30);
                uVar109 = CONCAT13(sVar142 >> 0xf,(int3)sVar142) *
                          CONCAT13(sVar52 >> 0xf,(int3)sVar52);
                uVar114 = CONCAT13(sVar53 >> 0xf,(int3)sVar53) *
                          CONCAT13(sVar54 >> 0xf,(int3)sVar54);
                uVar116 = CONCAT13(sVar55 >> 0xf,(int3)sVar55) *
                          CONCAT13(sVar56 >> 0xf,(int3)sVar56);
                uVar117 = CONCAT13(sVar57 >> 0xf,(int3)sVar57) *
                          CONCAT13(sVar58 >> 0xf,(int3)sVar58);
                bVar115 = (byte)(uVar116 >> 0x18);
                bVar118 = (byte)(uVar117 >> 0x18);
                auVar119._0_4_ = -(uint)((int)uVar109 >> 0x1b == (int)uVar109 >> 0x1f);
                auVar119._4_4_ = -(uint)((int)uVar114 >> 0x1b == (int)uVar114 >> 0x1f);
                auVar119._8_4_ = -(uint)((int)uVar116 >> 0x1b == (int)uVar116 >> 0x1f);
                auVar119._12_4_ = -(uint)((int)uVar117 >> 0x1b == (int)uVar117 >> 0x1f);
                cVar70 = (char)((int)uVar109 >> 0x1f);
                cVar75 = (char)((int)uVar114 >> 0x1f);
                auVar120._0_6_ =
                     CONCAT15(cVar75,CONCAT14(cVar75,(uint)(ushort)(CONCAT11(cVar70,cVar70) ^ 0x7fff
                                                                   ))) ^ 0x7fff00000000;
                auVar120[6] = 0;
                auVar120[7] = cVar75;
                bVar97 = (char)bVar115 >> 7;
                auVar120[8] = bVar97 ^ 0xff;
                auVar120[9] = bVar97 ^ 0x7f;
                auVar120[10] = bVar97;
                auVar120[0xb] = bVar97;
                bVar97 = (char)bVar118 >> 7;
                auVar120[0xc] = bVar97 ^ 0xff;
                auVar120[0xd] = bVar97 ^ 0x7f;
                auVar120[0xe] = bVar97;
                auVar120[0xf] = bVar97;
                auVar24._6_2_ = 0;
                auVar24._0_6_ =
                     CONCAT15((char)((uVar114 >> 0xc) >> 8),
                              CONCAT14((char)(uVar114 >> 0xc),uVar109 >> 0xc)) & 0xffff0000ffff;
                auVar24[8] = (char)(uVar116 >> 0xc);
                auVar24[9] = (char)((uVar116 >> 0xc) >> 8);
                auVar24[10] = bVar115 >> 4;
                auVar24[0xb] = 0;
                auVar24[0xc] = (char)(uVar117 >> 0xc);
                auVar24[0xd] = (char)((uVar117 >> 0xc) >> 8);
                auVar24[0xe] = bVar118 >> 4;
                auVar24[0xf] = 0;
                    /* catch() { ... } // from try @ 00a9404c with catch @ 00a94124 */
                auVar120 = auVar120 ^ (auVar120 ^ auVar24) & auVar119;
                *(ulong *)psVar45 =
                     CONCAT26(auVar120._12_2_,
                              CONCAT24(auVar120._8_2_,CONCAT22(auVar120._4_2_,auVar120._0_2_)));
                piVar47[2] = piVar47[2] + iVar48 * CONCAT13(sVar56 >> 0xf,(int3)sVar56);
                piVar47[3] = piVar47[3] + iVar48 * CONCAT13(sVar58 >> 0xf,(int3)sVar58);
                *piVar47 = *piVar47 + iVar48 * CONCAT13(sVar52 >> 0xf,(int3)sVar52);
                piVar47[1] = piVar47[1] + iVar48 * CONCAT13(sVar54 >> 0xf,(int3)sVar54);
                psVar45 = psVar45 + 4;
                psVar46 = psVar46 + 4;
                piVar47 = piVar47 + 4;
                    /* catch() { ... } // from try @ 00a9403c with catch @ 00a9413c */
              } while (uVar51 != 0);
                    /* catch() { ... } // from try @ 00a94060 with catch @ 00a94140 */
              bVar30 = uVar49 == param_2;
              param_3 = param_3 + uVar49;
              param_4 = param_4 + uVar49;
              param_2 = param_2 - uVar49;
              param_1 = param_1 + uVar49;
              if (bVar30) {
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
                    /* catch() { ... } // from try @ 00a94248 with catch @ 00a942e0 */
            param_2 = param_2 - 1;
            *param_4 = *param_4 + sVar142 * iVar48;
            param_3 = param_3 + 1;
            param_4 = param_4 + 1;
            param_1 = param_1 + 1;
          } while (param_2 != 0);
        }
        break;
      case 1:
                    /* try { // try from 00a94204 to 00b94247 has its CatchHandler @ 00a94204
                       catch() { ... } // from try @ 00a94204 with catch @ 00a94204
                       catch() { ... } // from try @ 00a942b0 with catch @ 00a94204 */
        if (param_4 == (int *)0x0) {
          if (7 < param_2) {
            uVar51 = (param_2 - 1) * 4;
                    /* try { // try from 00a94848 to 00b94887 has its CatchHandler @ 00a942f4 */
            if (((uVar51 < ~(ulong)param_1 || uVar51 - ~(ulong)param_1 == 0) &&
                (param_2 - 1 >> 0x3e == 0)) &&
               (uVar51 < ~(ulong)(param_1 + 1) || uVar51 - ~(ulong)(param_1 + 1) == 0)) {
                    /* try { // try from 00a94888 to 00b94897 has its CatchHandler @ 00a94d38 */
              if ((param_3 + param_2 * 2 <= param_1 || (track_t *)(param_1 + param_2 * 2) <= param_3
                  ) && (param_6 + 7 <= param_1 || (track_t *)(param_1 + param_2 * 2) <= param_6 + 6)
                 ) {
                uVar49 = param_2 & 0xfffffffffffffff8;
                    /* try { // try from 00a948a4 to 00b9492b has its CatchHandler @ 00a94d40 */
                psVar45 = param_3 + uVar49 * 2;
                puVar4 = (ushort *)(param_1 + uVar49 * 2);
                uVar51 = uVar49;
                do {
                  sVar53 = *param_3;
                  sVar54 = param_3[1];
                  sVar55 = param_3[2];
                  uVar69 = (undefined1)((ushort)sVar55 >> 8);
                  sVar56 = param_3[3];
                  uVar83 = (undefined1)((ushort)sVar56 >> 8);
                  sVar57 = param_3[4];
                  uVar71 = (undefined1)((ushort)sVar57 >> 8);
                  sVar58 = param_3[5];
                  uVar84 = (undefined1)((ushort)sVar58 >> 8);
                  sVar52 = param_3[6];
                  uVar72 = (undefined1)((ushort)sVar52 >> 8);
                  sVar18 = param_3[7];
                  uVar86 = (undefined1)((ushort)sVar18 >> 8);
                  uVar73 = (undefined1)param_3[8];
                  uVar74 = (undefined1)((ushort)param_3[8] >> 8);
                  uVar87 = (undefined1)param_3[9];
                  uVar88 = (undefined1)((ushort)param_3[9] >> 8);
                  uVar76 = (undefined1)param_3[10];
                  uVar77 = (undefined1)((ushort)param_3[10] >> 8);
                  uVar89 = (undefined1)param_3[0xb];
                  uVar90 = (undefined1)((ushort)param_3[0xb] >> 8);
                  uVar78 = (undefined1)param_3[0xc];
                  uVar79 = (undefined1)((ushort)param_3[0xc] >> 8);
                  uVar91 = (undefined1)param_3[0xd];
                  uVar92 = (undefined1)((ushort)param_3[0xd] >> 8);
                  uVar81 = (undefined1)param_3[0xe];
                  uVar82 = (undefined1)((ushort)param_3[0xe] >> 8);
                  uVar93 = (undefined1)param_3[0xf];
                  uVar94 = (undefined1)((ushort)param_3[0xf] >> 8);
                  param_3 = param_3 + 0x10;
                  sVar142 = *(short *)ptVar1;
                  uVar51 = uVar51 - 8;
                  auVar113[2] = (char)sVar55;
                  auVar113._0_2_ = sVar53;
                  auVar113[3] = uVar69;
                  auVar113[4] = (char)sVar57;
                  auVar113[5] = uVar71;
                  auVar113[6] = (char)sVar52;
                  auVar113[7] = uVar72;
                  auVar113[8] = uVar73;
                  auVar113[9] = uVar74;
                  auVar113[10] = uVar76;
                  auVar113[0xb] = uVar77;
                  auVar113[0xc] = uVar78;
                  auVar113[0xd] = uVar79;
                  auVar113[0xe] = uVar81;
                  auVar113[0xf] = uVar82;
                  auVar8[2] = (char)sVar55;
                  auVar8._0_2_ = sVar53;
                  auVar8[3] = uVar69;
                  auVar8[4] = (char)sVar57;
                  auVar8[5] = uVar71;
                  auVar8[6] = (char)sVar52;
                  auVar8[7] = uVar72;
                  auVar8[8] = uVar73;
                  auVar8[9] = uVar74;
                  auVar8[10] = uVar76;
                  auVar8[0xb] = uVar77;
                  auVar8[0xc] = uVar78;
                  auVar8[0xd] = uVar79;
                  auVar8[0xe] = uVar81;
                  auVar8[0xf] = uVar82;
                  auVar113 = NEON_ext(auVar113,auVar8,8,1);
                  uVar127 = (int)sVar142 * (int)auVar113._0_2_;
                  uVar139 = (int)sVar142 * (int)auVar113._2_2_;
                  uVar140 = (int)sVar142 * (int)auVar113._4_2_;
                  uVar141 = (int)sVar142 * (int)auVar113._6_2_;
                  uVar109 = (int)sVar142 * (int)sVar53;
                  uVar114 = (int)sVar142 * (int)sVar55;
                  uVar116 = (int)sVar142 * (int)sVar57;
                  uVar117 = (int)sVar142 * (int)sVar52;
                  bVar115 = (byte)(uVar116 >> 0x18);
                  bVar118 = (byte)(uVar117 >> 0x18);
                  cVar70 = (char)((int)uVar109 >> 0x1f);
                  cVar75 = (char)((int)uVar114 >> 0x1f);
                  bVar97 = (char)bVar115 >> 7;
                  bVar102 = (char)bVar118 >> 7;
                  auVar124._0_4_ = uVar127 >> 0xc;
                  auVar124._4_4_ = uVar139 >> 0xc;
                  auVar124._8_4_ = uVar140 >> 0xc;
                  auVar124._12_4_ = uVar141 >> 0xc;
                  auVar146._0_4_ =
                       -(uint)((int)uVar109 >> 0x1b ==
                              CONCAT13(cVar70,CONCAT12(cVar70,CONCAT11(cVar70,cVar70))));
                  auVar146._4_4_ =
                       -(uint)((int)uVar114 >> 0x1b ==
                              CONCAT13(cVar75,CONCAT12(cVar75,CONCAT11(cVar75,cVar75))));
                  auVar146._8_4_ =
                       -(uint)((int)uVar116 >> 0x1b ==
                              CONCAT13(bVar97,CONCAT12(bVar97,CONCAT11(bVar97,bVar97))));
                  auVar146._12_4_ =
                       -(uint)((int)uVar117 >> 0x1b ==
                              CONCAT13(bVar102,CONCAT12(bVar102,CONCAT11(bVar102,bVar102))));
                  auVar134._0_4_ = -(uint)((int)uVar127 >> 0x1b == (int)uVar127 >> 0x1f);
                  auVar134._4_4_ = -(uint)((int)uVar139 >> 0x1b == (int)uVar139 >> 0x1f);
                  auVar134._8_4_ = -(uint)((int)uVar140 >> 0x1b == (int)uVar140 >> 0x1f);
                  auVar134._12_4_ = -(uint)((int)uVar141 >> 0x1b == (int)uVar141 >> 0x1f);
                  cVar107 = (char)((int)uVar127 >> 0x1f);
                  cVar108 = (char)((int)uVar139 >> 0x1f);
                  auVar135._0_6_ =
                       CONCAT15(cVar108,CONCAT14(cVar108,(uint)(ushort)(CONCAT11(cVar107,cVar107) ^
                                                                       0x7fff))) ^ 0x7fff00000000;
                  auVar135[6] = 0;
                  auVar135[7] = cVar108;
                  bVar80 = (byte)((int)uVar140 >> 0x1f);
                  auVar135[8] = bVar80 ^ 0xff;
                  auVar135[9] = bVar80 ^ 0x7f;
                  auVar135[10] = bVar80;
                  auVar135[0xb] = bVar80;
                  bVar80 = (byte)((int)uVar141 >> 0x1f);
                  auVar135[0xc] = bVar80 ^ 0xff;
                  auVar135[0xd] = bVar80 ^ 0x7f;
                  auVar135[0xe] = bVar80;
                  auVar135[0xf] = bVar80;
                  auVar16[6] = 0;
                  auVar16._0_6_ =
                       CONCAT15(cVar75,CONCAT14(cVar75,(uint)(ushort)(CONCAT11(cVar70,cVar70) ^
                                                                     0x7fff))) ^ 0x7fff00000000;
                  auVar16[7] = cVar75;
                  auVar16[8] = bVar97 ^ 0xff;
                  auVar16[9] = bVar97 ^ 0x7f;
                  auVar16[10] = bVar97;
                  auVar16[0xb] = bVar97;
                  auVar16[0xc] = bVar102 ^ 0xff;
                  auVar16[0xd] = bVar102 ^ 0x7f;
                  auVar16[0xe] = bVar102;
                  auVar16[0xf] = bVar102;
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
                  auVar147[6] = 0;
                  auVar147._0_6_ =
                       CONCAT15(cVar75,CONCAT14(cVar75,(uint)(ushort)(CONCAT11(cVar70,cVar70) ^
                                                                     0x7fff))) ^ 0x7fff00000000;
                  auVar147[7] = cVar75;
                  auVar147[8] = bVar97 ^ 0xff;
                  auVar147[9] = bVar97 ^ 0x7f;
                  auVar147[10] = bVar97;
                  auVar147[0xb] = bVar97;
                  auVar147[0xc] = bVar102 ^ 0xff;
                  auVar147[0xd] = bVar102 ^ 0x7f;
                  auVar147[0xe] = bVar102;
                  auVar147[0xf] = bVar102;
                  auVar147 = auVar147 ^ (auVar16 ^ auVar22) & auVar146;
                  auVar135 = auVar135 ^ (auVar135 ^ auVar124) & auVar134;
                  sVar142 = *(short *)(param_6 + 6);
                  auVar10[2] = (char)sVar56;
                  auVar10._0_2_ = sVar54;
                  auVar10[3] = uVar83;
                  auVar10[4] = (char)sVar58;
                  auVar10[5] = uVar84;
                  auVar10[6] = (char)sVar18;
                  auVar10[7] = uVar86;
                  auVar10[8] = uVar87;
                  auVar10[9] = uVar88;
                  auVar10[10] = uVar89;
                  auVar10[0xb] = uVar90;
                  auVar10[0xc] = uVar91;
                  auVar10[0xd] = uVar92;
                  auVar10[0xe] = uVar93;
                  auVar10[0xf] = uVar94;
                  auVar11[2] = (char)sVar56;
                  auVar11._0_2_ = sVar54;
                  auVar11[3] = uVar83;
                  auVar11[4] = (char)sVar58;
                  auVar11[5] = uVar84;
                  auVar11[6] = (char)sVar18;
                  auVar11[7] = uVar86;
                  auVar11[8] = uVar87;
                  auVar11[9] = uVar88;
                  auVar11[10] = uVar89;
                  auVar11[0xb] = uVar90;
                  auVar11[0xc] = uVar91;
                  auVar11[0xd] = uVar92;
                  auVar11[0xe] = uVar93;
                  auVar11[0xf] = uVar94;
                  auVar113 = NEON_ext(auVar10,auVar11,8,1);
                  uVar109 = (int)sVar142 * (int)sVar54;
                  uVar114 = (int)sVar142 * (int)sVar56;
                  uVar116 = (int)sVar142 * (int)sVar58;
                  uVar117 = (int)sVar142 * (int)sVar18;
                  uVar127 = (int)sVar142 * (int)auVar113._0_2_;
                  uVar139 = (int)sVar142 * (int)auVar113._2_2_;
                  uVar140 = (int)sVar142 * (int)auVar113._4_2_;
                  uVar141 = (int)sVar142 * (int)auVar113._6_2_;
                  bVar115 = (byte)(uVar116 >> 0x18);
                  bVar118 = (byte)(uVar117 >> 0x18);
                  cVar70 = (char)((int)uVar109 >> 0x1f);
                  cVar75 = (char)((int)uVar114 >> 0x1f);
                  bVar80 = (char)bVar115 >> 7;
                  bVar85 = (char)bVar118 >> 7;
                  bVar97 = (byte)(uVar140 >> 0x18);
                  bVar102 = (byte)(uVar141 >> 0x18);
                  auVar148._0_4_ =
                       -(uint)((int)uVar109 >> 0x1b ==
                              CONCAT13(cVar70,CONCAT12(cVar70,CONCAT11(cVar70,cVar70))));
                  auVar148._4_4_ =
                       -(uint)((int)uVar114 >> 0x1b ==
                              CONCAT13(cVar75,CONCAT12(cVar75,CONCAT11(cVar75,cVar75))));
                  auVar148._8_4_ =
                       -(uint)((int)uVar116 >> 0x1b ==
                              CONCAT13(bVar80,CONCAT12(bVar80,CONCAT11(bVar80,bVar80))));
                  auVar148._12_4_ =
                       -(uint)((int)uVar117 >> 0x1b ==
                              CONCAT13(bVar85,CONCAT12(bVar85,CONCAT11(bVar85,bVar85))));
                  auVar136._0_4_ = -(uint)((int)uVar127 >> 0x1b == (int)uVar127 >> 0x1f);
                  auVar136._4_4_ = -(uint)((int)uVar139 >> 0x1b == (int)uVar139 >> 0x1f);
                  auVar136._8_4_ = -(uint)((int)uVar140 >> 0x1b == (int)uVar140 >> 0x1f);
                  auVar136._12_4_ = -(uint)((int)uVar141 >> 0x1b == (int)uVar141 >> 0x1f);
                  cVar107 = (char)((int)uVar127 >> 0x1f);
                  cVar108 = (char)((int)uVar139 >> 0x1f);
                  auVar137._0_6_ =
                       CONCAT15(cVar108,CONCAT14(cVar108,(uint)(ushort)(CONCAT11(cVar107,cVar107) ^
                                                                       0x7fff))) ^ 0x7fff00000000;
                  auVar137[6] = 0;
                  auVar137[7] = cVar108;
                  bVar126 = (char)bVar97 >> 7;
                  auVar137[8] = bVar126 ^ 0xff;
                  auVar137[9] = bVar126 ^ 0x7f;
                  auVar137[10] = bVar126;
                  auVar137[0xb] = bVar126;
                  bVar126 = (char)bVar102 >> 7;
                  auVar137[0xc] = bVar126 ^ 0xff;
                  auVar137[0xd] = bVar126 ^ 0x7f;
                  auVar137[0xe] = bVar126;
                  auVar137[0xf] = bVar126;
                  auVar9[6] = 0;
                  auVar9._0_6_ = CONCAT15(cVar75,CONCAT14(cVar75,(uint)(ushort)(CONCAT11(cVar70,
                                                  cVar70) ^ 0x7fff))) ^ 0x7fff00000000;
                  auVar9[7] = cVar75;
                  auVar9[8] = bVar80 ^ 0xff;
                  auVar9[9] = bVar80 ^ 0x7f;
                  auVar9[10] = bVar80;
                  auVar9[0xb] = bVar80;
                  auVar9[0xc] = bVar85 ^ 0xff;
                  auVar9[0xd] = bVar85 ^ 0x7f;
                  auVar9[0xe] = bVar85;
                  auVar9[0xf] = bVar85;
                  auVar12._6_2_ = 0;
                  auVar12._0_6_ =
                       CONCAT15((char)((uVar114 >> 0xc) >> 8),
                                CONCAT14((char)(uVar114 >> 0xc),uVar109 >> 0xc)) & 0xffff0000ffff;
                  auVar12[8] = (char)(uVar116 >> 0xc);
                  auVar12[9] = (char)((uVar116 >> 0xc) >> 8);
                  auVar12[10] = bVar115 >> 4;
                  auVar12[0xb] = 0;
                  auVar12[0xc] = (char)(uVar117 >> 0xc);
                  auVar12[0xd] = (char)((uVar117 >> 0xc) >> 8);
                  auVar12[0xe] = bVar118 >> 4;
                  auVar12[0xf] = 0;
                  auVar149[6] = 0;
                  auVar149._0_6_ =
                       CONCAT15(cVar75,CONCAT14(cVar75,(uint)(ushort)(CONCAT11(cVar70,cVar70) ^
                                                                     0x7fff))) ^ 0x7fff00000000;
                  auVar149[7] = cVar75;
                  auVar149[8] = bVar80 ^ 0xff;
                  auVar149[9] = bVar80 ^ 0x7f;
                  auVar149[10] = bVar80;
                  auVar149[0xb] = bVar80;
                  auVar149[0xc] = bVar85 ^ 0xff;
                  auVar149[0xd] = bVar85 ^ 0x7f;
                  auVar149[0xe] = bVar85;
                  auVar149[0xf] = bVar85;
                  auVar149 = auVar149 ^ (auVar9 ^ auVar12) & auVar148;
                  auVar23._6_2_ = 0;
                  auVar23._0_6_ =
                       CONCAT15((char)((uVar139 >> 0xc) >> 8),
                                CONCAT14((char)(uVar139 >> 0xc),uVar127 >> 0xc)) & 0xffff0000ffff;
                  auVar23[8] = (char)(uVar140 >> 0xc);
                  auVar23[9] = (char)((uVar140 >> 0xc) >> 8);
                  auVar23[10] = bVar97 >> 4;
                  auVar23[0xb] = 0;
                  auVar23[0xc] = (char)(uVar141 >> 0xc);
                  auVar23[0xd] = (char)((uVar141 >> 0xc) >> 8);
                  auVar23[0xe] = bVar102 >> 4;
                  auVar23[0xf] = 0;
                  auVar137 = auVar137 ^ (auVar137 ^ auVar23) & auVar136;
                  *param_1 = auVar147._0_2_;
                  param_1[1] = auVar149._0_2_;
                  param_1[2] = auVar147._4_2_;
                  param_1[3] = auVar149._4_2_;
                  param_1[4] = auVar147._8_2_;
                  param_1[5] = auVar149._8_2_;
                  param_1[6] = auVar147._12_2_;
                  param_1[7] = auVar149._12_2_;
                  param_1[8] = auVar135._0_2_;
                  param_1[9] = auVar137._0_2_;
                  param_1[10] = auVar135._4_2_;
                  param_1[0xb] = auVar137._4_2_;
                  param_1[0xc] = auVar135._8_2_;
                  param_1[0xd] = auVar137._8_2_;
                  param_1[0xe] = auVar135._12_2_;
                  param_1[0xf] = auVar137._12_2_;
                  param_1 = param_1 + 0x10;
                } while (uVar51 != 0);
                bVar30 = uVar49 == param_2;
                param_3 = psVar45;
                param_2 = param_2 - uVar49;
                param_1 = (short *)puVar4;
                if (bVar30) {
                  return;
                }
              }
            }
          }
          do {
                    /* try { // try from 00a94468 to 00b94483 has its CatchHandler @ 00a94e24 */
            uVar109 = (int)*(short *)ptVar1 * (int)*param_3;
            uVar5 = (ushort)(uVar109 >> 0xc);
            if ((int)uVar109 >> 0x1f != (int)uVar109 >> 0x1b) {
              uVar5 = (ushort)((int)uVar109 >> 0x1f) ^ 0x7fff;
            }
            *param_1 = uVar5;
                    /* try { // try from 00a94488 to 00b944cb has its CatchHandler @ 00a94de4 */
            uVar109 = (int)*(short *)(param_6 + 6) * (int)param_3[1];
            uVar5 = (ushort)(uVar109 >> 0xc);
            if ((int)uVar109 >> 0x1f != (int)uVar109 >> 0x1b) {
              uVar5 = (ushort)((int)uVar109 >> 0x1f) ^ 0x7fff;
            }
            param_2 = param_2 - 1;
            param_1[1] = uVar5;
            param_3 = param_3 + 2;
            param_1 = param_1 + 2;
          } while (param_2 != 0);
        }
        else {
          if (3 < param_2) {
            uVar51 = (param_2 - 1) * 4;
                    /* try { // try from 00a944e8 to 00b944ef has its CatchHandler @ 00a94ccc */
            if (((uVar51 < ~(ulong)param_1 || uVar51 - ~(ulong)param_1 == 0) &&
                (param_2 - 1 >> 0x3e == 0)) &&
               (uVar51 < ~(ulong)(param_1 + 1) || uVar51 - ~(ulong)(param_1 + 1) == 0)) {
                    /* try { // try from 00a94514 to 00b9451b has its CatchHandler @ 00a94cb8 */
              if ((param_3 + param_2 * 2 <= param_1 || (track_t *)(param_1 + param_2 * 2) <= param_3
                  ) && (param_6 + 7 <= param_1 || (track_t *)(param_1 + param_2 * 2) <= param_6 + 6)
                 ) {
                uVar49 = param_2 & 0xfffffffffffffffc;
                    /* try { // try from 00a9453c to 00b9453f has its CatchHandler @ 00a94ca8 */
                psVar45 = param_3 + uVar49 * 2;
                    /* try { // try from 00a94550 to 00b94567 has its CatchHandler @ 00a94d28 */
                puVar4 = (ushort *)(param_1 + uVar49 * 2);
                piVar47 = param_4;
                uVar51 = uVar49;
                do {
                  sVar55 = *param_3;
                  sVar56 = param_3[1];
                  sVar57 = param_3[2];
                  sVar58 = param_3[3];
                  sVar52 = param_3[4];
                  sVar18 = param_3[5];
                  sVar54 = param_3[6];
                  sVar19 = param_3[7];
                  param_3 = param_3 + 8;
                  sVar142 = *(short *)ptVar1;
                  uVar51 = uVar51 - 4;
                  sVar53 = *(short *)(param_6 + 6);
                  uVar109 = (int)sVar142 * (int)sVar55;
                  uVar114 = (int)sVar142 * (int)sVar57;
                  uVar116 = (int)sVar142 * (int)sVar52;
                  uVar117 = (int)sVar142 * (int)sVar54;
                  auVar121._0_4_ = uVar109 >> 0xc;
                  auVar121._4_4_ = uVar114 >> 0xc;
                  auVar121._8_4_ = uVar116 >> 0xc;
                  auVar121._12_4_ = uVar117 >> 0xc;
                    /* try { // try from 00a94580 to 00b9458f has its CatchHandler @ 00a94ca4 */
                  auVar128._0_4_ = -(uint)((int)uVar109 >> 0x1b == (int)uVar109 >> 0x1f);
                  auVar128._4_4_ = -(uint)((int)uVar114 >> 0x1b == (int)uVar114 >> 0x1f);
                  auVar128._8_4_ = -(uint)((int)uVar116 >> 0x1b == (int)uVar116 >> 0x1f);
                  auVar128._12_4_ = -(uint)((int)uVar117 >> 0x1b == (int)uVar117 >> 0x1f);
                  cVar70 = (char)((int)uVar109 >> 0x1f);
                  cVar75 = (char)((int)uVar114 >> 0x1f);
                  auVar129._0_6_ =
                       CONCAT15(cVar75,CONCAT14(cVar75,(uint)(ushort)(CONCAT11(cVar70,cVar70) ^
                                                                     0x7fff))) ^ 0x7fff00000000;
                  auVar129[6] = 0;
                  auVar129[7] = cVar75;
                  bVar115 = (byte)((int)uVar116 >> 0x1f);
                  auVar129[8] = bVar115 ^ 0xff;
                  auVar129[9] = bVar115 ^ 0x7f;
                  auVar129[10] = bVar115;
                  auVar129[0xb] = bVar115;
                  bVar115 = (byte)((int)uVar117 >> 0x1f);
                  auVar129[0xc] = bVar115 ^ 0xff;
                  auVar129[0xd] = bVar115 ^ 0x7f;
                  auVar129[0xe] = bVar115;
                  auVar129[0xf] = bVar115;
                  auVar129 = auVar129 ^ (auVar129 ^ auVar121) & auVar128;
                  uVar109 = (int)sVar53 * (int)sVar56;
                  uVar114 = (int)sVar53 * (int)sVar58;
                  uVar116 = (int)sVar53 * (int)sVar18;
                  uVar117 = (int)sVar53 * (int)sVar19;
                  bVar115 = (byte)(uVar116 >> 0x18);
                  bVar118 = (byte)(uVar117 >> 0x18);
                    /* try { // try from 00a94594 to 00b9459b has its CatchHandler @ 00a94ca0 */
                  auVar144._0_4_ = -(uint)((int)uVar109 >> 0x1b == (int)uVar109 >> 0x1f);
                  auVar144._4_4_ = -(uint)((int)uVar114 >> 0x1b == (int)uVar114 >> 0x1f);
                  auVar144._8_4_ = -(uint)((int)uVar116 >> 0x1b == (int)uVar116 >> 0x1f);
                  auVar144._12_4_ = -(uint)((int)uVar117 >> 0x1b == (int)uVar117 >> 0x1f);
                  cVar70 = (char)((int)uVar109 >> 0x1f);
                  cVar75 = (char)((int)uVar114 >> 0x1f);
                  auVar145._0_6_ =
                       CONCAT15(cVar75,CONCAT14(cVar75,(uint)(ushort)(CONCAT11(cVar70,cVar70) ^
                                                                     0x7fff))) ^ 0x7fff00000000;
                  auVar145[6] = 0;
                  auVar145[7] = cVar75;
                  bVar97 = (char)bVar115 >> 7;
                  auVar145[8] = bVar97 ^ 0xff;
                  auVar145[9] = bVar97 ^ 0x7f;
                  auVar145[10] = bVar97;
                  auVar145[0xb] = bVar97;
                  bVar97 = (char)bVar118 >> 7;
                  auVar145[0xc] = bVar97 ^ 0xff;
                  auVar145[0xd] = bVar97 ^ 0x7f;
                  auVar145[0xe] = bVar97;
                  auVar145[0xf] = bVar97;
                    /* try { // try from 00a945a4 to 00b945df has its CatchHandler @ 00a94dd8 */
                  auVar21._6_2_ = 0;
                  auVar21._0_6_ =
                       CONCAT15((char)((uVar114 >> 0xc) >> 8),
                                CONCAT14((char)(uVar114 >> 0xc),uVar109 >> 0xc)) & 0xffff0000ffff;
                  auVar21[8] = (char)(uVar116 >> 0xc);
                  auVar21[9] = (char)((uVar116 >> 0xc) >> 8);
                  auVar21[10] = bVar115 >> 4;
                  auVar21[0xb] = 0;
                  auVar21[0xc] = (char)(uVar117 >> 0xc);
                  auVar21[0xd] = (char)((uVar117 >> 0xc) >> 8);
                  auVar21[0xe] = bVar118 >> 4;
                  auVar21[0xf] = 0;
                  auVar145 = auVar145 ^ (auVar145 ^ auVar21) & auVar144;
                  *param_1 = auVar129._0_2_;
                  param_1[1] = auVar145._0_2_;
                  param_1[2] = auVar129._4_2_;
                  param_1[3] = auVar145._4_2_;
                  param_1[4] = auVar129._8_2_;
                  param_1[5] = auVar145._8_2_;
                  param_1[6] = auVar129._12_2_;
                  param_1[7] = auVar145._12_2_;
                  param_1 = param_1 + 8;
                  iVar50 = (int)sVar56 + (int)sVar55;
                  iVar59 = (int)sVar58 + (int)sVar57;
                  iVar63 = (int)sVar18 + (int)sVar52;
                  iVar61 = (int)sVar19 + (int)sVar54;
                  piVar47[2] = piVar47[2] +
                               CONCAT13((char)(iVar63 >> 0x19),(int3)(iVar63 >> 1)) * iVar48;
                  piVar47[3] = piVar47[3] +
                               CONCAT13((char)(iVar61 >> 0x19),(int3)(iVar61 >> 1)) * iVar48;
                  *piVar47 = *piVar47 +
                             CONCAT13((char)(iVar50 >> 0x19),(int3)(iVar50 >> 1)) * iVar48;
                  piVar47[1] = piVar47[1] +
                               CONCAT13((char)(iVar59 >> 0x19),(int3)(iVar59 >> 1)) * iVar48;
                  piVar47 = piVar47 + 4;
                } while (uVar51 != 0);
                bVar30 = uVar49 == param_2;
                param_3 = psVar45;
                param_4 = param_4 + uVar49;
                param_2 = param_2 - uVar49;
                param_1 = (short *)puVar4;
                if (bVar30) {
                  return;
                }
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
            sVar53 = param_3[1];
                    /* try { // try from 00a94248 to 00b942af has its CatchHandler @ 00a942e0 */
            uVar109 = (int)*(short *)(param_6 + 6) * (int)sVar53;
            uVar5 = (ushort)(uVar109 >> 0xc);
            if ((int)uVar109 >> 0x1f != (int)uVar109 >> 0x1b) {
              uVar5 = (ushort)((int)uVar109 >> 0x1f) ^ 0x7fff;
            }
            param_1[1] = uVar5;
            param_2 = param_2 - 1;
            *param_4 = *param_4 + ((int)sVar53 + (int)sVar142 >> 1) * iVar48;
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
  iVar48 = *(int *)(param_6 + 0x18);
  ptVar1 = param_6 + 8;
                    /* try { // try from 00a93ff4 to 00b93ffb has its CatchHandler @ 00a94184 */
  ptVar2 = param_6 + 0x10;
  ptVar3 = param_6 + 0x1c;
  iVar50 = (int)param_2;
  switch(uVar109) {
  case 1:
    if (param_4 != (int *)0x0) {
      iVar50 = *(int *)ptVar3;
      do {
        uVar62 = *(undefined8 *)ptVar1;
        sVar142 = *param_3;
        iVar59 = (int)uVar62;
        uVar109 = (iVar59 >> 0x10) * (int)sVar142;
        uVar5 = (ushort)(uVar109 >> 0xc);
        if ((int)uVar109 >> 0x1f != (int)uVar109 >> 0x1b) {
          uVar5 = (ushort)((int)uVar109 >> 0x1f) ^ 0x7fff;
        }
        *param_1 = uVar5;
                    /* catch() { ... } // from try @ 00a93ff4 with catch @ 00a94184 */
        sVar53 = param_3[1];
        iVar63 = (int)((ulong)uVar62 >> 0x20);
                    /* catch() { ... } // from try @ 00a93fc8 with catch @ 00a9418c */
        param_3 = param_3 + 2;
                    /* catch() { ... } // from try @ 00a93fac with catch @ 00a94194 */
        uVar109 = (iVar63 >> 0x10) * (int)sVar53;
                    /* catch() { ... } // from try @ 00a93f9c with catch @ 00a941a0 */
        uVar5 = (ushort)(uVar109 >> 0xc);
                    /* catch() { ... } // from try @ 00a93f78 with catch @ 00a941a8 */
        if ((int)uVar109 >> 0x1f != (int)uVar109 >> 0x1b) {
          uVar5 = (ushort)((int)uVar109 >> 0x1f) ^ 0x7fff;
        }
        param_1[1] = uVar5;
                    /* catch() { ... } // from try @ 00a93f6c with catch @ 00a941b0 */
                    /* catch() { ... } // from try @ 00a93fd0 with catch @ 00a941b8 */
        param_2 = param_2 - 1;
                    /* catch() { ... } // from try @ 00a93f88 with catch @ 00a941c0 */
        *(ulong *)ptVar1 =
             CONCAT44((int)((ulong)*(undefined8 *)ptVar2 >> 0x20) + iVar63,
                      (int)*(undefined8 *)ptVar2 + iVar59);
                    /* catch() { ... } // from try @ 00a94000 with catch @ 00a941c8
                       catch() { ... } // from try @ 00a940a8 with catch @ 00a941c8 */
        param_1 = param_1 + 2;
        *param_4 = *param_4 + (iVar50 >> 0x10) * ((int)sVar53 + (int)sVar142 >> 1);
        iVar50 = *(int *)ptVar3 + iVar48;
        *(int *)ptVar3 = iVar50;
        param_4 = param_4 + 1;
      } while (param_2 != 0);
      return;
    }
    iVar48 = *(int *)(param_6 + 0x10);
    iVar63 = *(int *)(param_6 + 0x14);
    iVar59 = *(int *)(param_6 + 8);
    iVar61 = *(int *)(param_6 + 0xc);
    iVar65 = iVar61;
    iVar67 = iVar59;
    if (7 < param_2) {
      uVar51 = (param_2 - 1) * 4;
                    /* try { // try from 00a946bc to 00b946c3 has its CatchHandler @ 00a94c7c */
                    /* try { // try from 00a946e8 to 00b946ef has its CatchHandler @ 00a94c68 */
      if ((((uVar51 < ~(ulong)param_1 || uVar51 - ~(ulong)param_1 == 0) &&
           (param_2 - 1 >> 0x3e == 0)) &&
          (uVar51 < ~(ulong)(param_1 + 1) || uVar51 - ~(ulong)(param_1 + 1) == 0)) &&
         ((param_3 + param_2 * 2 <= param_1 || (param_1 + param_2 * 2 <= param_3)))) {
        uVar49 = param_2 & 0xfffffffffffffff8;
        uVar69 = (undefined1)iVar59;
        uVar71 = (undefined1)((uint)iVar59 >> 8);
        uVar72 = (undefined1)((uint)iVar59 >> 0x10);
        uVar73 = (undefined1)((uint)iVar59 >> 0x18);
                    /* try { // try from 00a94710 to 00b94713 has its CatchHandler @ 00a94c58 */
        iVar65 = iVar63 * 8;
                    /* try { // try from 00a9471c to 00b94733 has its CatchHandler @ 00a94d6c */
        iVar67 = iVar48 * 8;
        iVar60 = iVar61 + iVar63 * 4;
        uVar89 = (undefined1)iVar60;
        uVar90 = (undefined1)((uint)iVar60 >> 8);
        uVar91 = (undefined1)((uint)iVar60 >> 0x10);
        uVar92 = (undefined1)((uint)iVar60 >> 0x18);
        iVar60 = iVar61 + iVar63 * 5;
        uVar93 = (undefined1)iVar60;
        uVar94 = (undefined1)((uint)iVar60 >> 8);
        uVar95 = (undefined1)((uint)iVar60 >> 0x10);
        uVar96 = (undefined1)((uint)iVar60 >> 0x18);
        iVar60 = iVar61 + iVar63 * 6;
        uVar98 = (undefined1)iVar60;
        uVar99 = (undefined1)((uint)iVar60 >> 8);
        uVar100 = (undefined1)((uint)iVar60 >> 0x10);
        uVar101 = (undefined1)((uint)iVar60 >> 0x18);
        iVar60 = iVar61 + iVar63 * 7;
        uVar103 = (undefined1)iVar60;
        uVar104 = (undefined1)((uint)iVar60 >> 8);
        uVar105 = (undefined1)((uint)iVar60 >> 0x10);
        uVar106 = (undefined1)((uint)iVar60 >> 0x18);
        iVar64 = iVar61 + iVar63;
        iVar66 = iVar61 + iVar63 * 2;
        iVar68 = iVar61 + iVar63 * 3;
                    /* try { // try from 00a94738 to 00b94747 has its CatchHandler @ 00a94c54 */
        auVar111._0_4_ = iVar59 + iVar48 * 4;
        auVar111._4_4_ =
             (int)(CONCAT17(uVar73,CONCAT16(uVar72,CONCAT15(uVar71,CONCAT14(uVar69,iVar59)))) >>
                  0x20) + iVar48 * 5;
        auVar111._8_4_ = iVar59 + iVar48 * 6;
        auVar111._12_4_ =
             (int)(CONCAT17(uVar73,CONCAT16(uVar72,CONCAT15(uVar71,CONCAT14(uVar69,iVar59)))) >>
                  0x20) + iVar48 * 7;
        psVar45 = param_3 + uVar49 * 2;
                    /* try { // try from 00a9474c to 00b94753 has its CatchHandler @ 00a94c48 */
        puVar4 = (ushort *)(param_1 + uVar49 * 2);
        iVar60 = iVar59 + iVar48;
        uVar74 = (undefined1)iVar60;
        uVar76 = (undefined1)((uint)iVar60 >> 8);
        uVar77 = (undefined1)((uint)iVar60 >> 0x10);
        uVar78 = (undefined1)((uint)iVar60 >> 0x18);
        iVar60 = iVar59 + iVar48 * 2;
        uVar79 = (undefined1)iVar60;
        uVar81 = (undefined1)((uint)iVar60 >> 8);
        uVar82 = (undefined1)((uint)iVar60 >> 0x10);
        uVar83 = (undefined1)((uint)iVar60 >> 0x18);
        iVar60 = iVar59 + iVar48 * 3;
        uVar84 = (undefined1)iVar60;
        uVar86 = (undefined1)((uint)iVar60 >> 8);
        uVar87 = (undefined1)((uint)iVar60 >> 0x10);
        uVar88 = (undefined1)((uint)iVar60 >> 0x18);
        uVar51 = uVar49;
        iVar60 = iVar61;
        do {
                    /* try { // try from 00a9475c to 00b947a3 has its CatchHandler @ 00a94d6c */
          sVar142 = *param_3;
          psVar31 = param_3 + 1;
          psVar32 = param_3 + 2;
          psVar46 = param_3 + 3;
          psVar33 = param_3 + 4;
          psVar34 = param_3 + 5;
          psVar35 = param_3 + 6;
          psVar36 = param_3 + 7;
          psVar37 = param_3 + 8;
          psVar38 = param_3 + 9;
          psVar39 = param_3 + 10;
          psVar40 = param_3 + 0xb;
          psVar41 = param_3 + 0xc;
          psVar42 = param_3 + 0xd;
          psVar43 = param_3 + 0xe;
          psVar44 = param_3 + 0xf;
          param_3 = param_3 + 0x10;
          cVar70 = auVar111[3] >> 7;
          cVar75 = auVar111[7] >> 7;
          cVar107 = auVar111[0xb] >> 7;
          cVar108 = auVar111[0xf] >> 7;
          uVar109 = CONCAT13(cVar70,CONCAT12(cVar70,auVar111._2_2_)) * (int)*psVar37;
          uVar114 = CONCAT13(cVar75,CONCAT12(cVar75,auVar111._6_2_)) * (int)*psVar39;
          uVar116 = CONCAT13(cVar107,CONCAT12(cVar107,auVar111._10_2_)) * (int)*psVar41;
          uVar117 = CONCAT13(cVar108,CONCAT12(cVar108,auVar111._14_2_)) * (int)*psVar43;
          uVar127 = (CONCAT13(uVar73,CONCAT12(uVar72,CONCAT11(uVar71,uVar69))) >> 0x10) *
                    (int)sVar142;
          uVar139 = (CONCAT13(uVar78,CONCAT12(uVar77,CONCAT11(uVar76,uVar74))) >> 0x10) *
                    (int)*psVar32;
          uVar140 = (CONCAT13(uVar83,CONCAT12(uVar82,CONCAT11(uVar81,uVar79))) >> 0x10) *
                    (int)*psVar33;
          uVar141 = (CONCAT13(uVar88,CONCAT12(uVar87,CONCAT11(uVar86,uVar84))) >> 0x10) *
                    (int)*psVar35;
          uVar143 = (CONCAT13(uVar92,CONCAT12(uVar91,CONCAT11(uVar90,uVar89))) >> 0x10) *
                    (int)*psVar38;
          uVar152 = (CONCAT13(uVar96,CONCAT12(uVar95,CONCAT11(uVar94,uVar93))) >> 0x10) *
                    (int)*psVar40;
          uVar153 = (CONCAT13(uVar101,CONCAT12(uVar100,CONCAT11(uVar99,uVar98))) >> 0x10) *
                    (int)*psVar42;
          uVar154 = (CONCAT13(uVar106,CONCAT12(uVar105,CONCAT11(uVar104,uVar103))) >> 0x10) *
                    (int)*psVar44;
          uVar155 = (iVar60 >> 0x10) * (int)*psVar31;
          uVar158 = (iVar64 >> 0x10) * (int)*psVar46;
          uVar159 = (iVar66 >> 0x10) * (int)*psVar34;
          uVar160 = (iVar68 >> 0x10) * (int)*psVar36;
          auVar161._0_4_ = uVar127 >> 0xc;
          auVar161._4_4_ = uVar139 >> 0xc;
          auVar161._8_4_ = uVar140 >> 0xc;
          auVar161._12_4_ = uVar141 >> 0xc;
          cVar107 = (char)((int)uVar109 >> 0x1f);
          cVar108 = (char)((int)uVar114 >> 0x1f);
          bVar118 = (byte)((int)uVar116 >> 0x1f);
          bVar97 = (byte)((int)uVar117 >> 0x1f);
                    /* try { // try from 00a947a8 to 00b947eb has its CatchHandler @ 00a94d68 */
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
          cVar70 = (char)((int)uVar127 >> 0x1f);
          cVar75 = (char)((int)uVar139 >> 0x1f);
          auVar167._0_6_ =
               CONCAT15(cVar75,CONCAT14(cVar75,(uint)(ushort)(CONCAT11(cVar70,cVar70) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar167[6] = 0;
          auVar167[7] = cVar75;
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
          auVar26[6] = 0;
          auVar26._0_6_ =
               CONCAT15(cVar108,CONCAT14(cVar108,(uint)(ushort)(CONCAT11(cVar107,cVar107) ^ 0x7fff))
                       ) ^ 0x7fff00000000;
          auVar26[7] = cVar108;
          auVar26[8] = bVar118 ^ 0xff;
          auVar26[9] = bVar118 ^ 0x7f;
          auVar26[10] = bVar118;
          auVar26[0xb] = bVar118;
          auVar26[0xc] = bVar97 ^ 0xff;
          auVar26[0xd] = bVar97 ^ 0x7f;
          auVar26[0xe] = bVar97;
          auVar26[0xf] = bVar97;
          auVar28._4_4_ = uVar114 >> 0xc;
          auVar28._0_4_ = uVar109 >> 0xc;
          auVar28._8_4_ = uVar116 >> 0xc;
          auVar28._12_4_ = uVar117 >> 0xc;
          auVar165[6] = 0;
          auVar165._0_6_ =
               CONCAT15(cVar108,CONCAT14(cVar108,(uint)(ushort)(CONCAT11(cVar107,cVar107) ^ 0x7fff))
                       ) ^ 0x7fff00000000;
          auVar165[7] = cVar108;
          auVar165[8] = bVar118 ^ 0xff;
          auVar165[9] = bVar118 ^ 0x7f;
          auVar165[10] = bVar118;
          auVar165[0xb] = bVar118;
          auVar165[0xc] = bVar97 ^ 0xff;
          auVar165[0xd] = bVar97 ^ 0x7f;
          auVar165[0xe] = bVar97;
          auVar165[0xf] = bVar97;
          auVar165 = auVar165 ^ (auVar26 ^ auVar28) & auVar164;
          bVar115 = (byte)(uVar159 >> 0x18);
          bVar118 = (byte)(uVar160 >> 0x18);
          auVar167 = auVar167 ^ (auVar167 ^ auVar161) & auVar166;
          auVar162._0_4_ = -(uint)((int)uVar155 >> 0x1b == (int)uVar155 >> 0x1f);
          auVar162._4_4_ = -(uint)((int)uVar158 >> 0x1b == (int)uVar158 >> 0x1f);
          auVar162._8_4_ = -(uint)((int)uVar159 >> 0x1b == (int)uVar159 >> 0x1f);
          auVar162._12_4_ = -(uint)((int)uVar160 >> 0x1b == (int)uVar160 >> 0x1f);
          auVar132._0_4_ = -(uint)((int)uVar143 >> 0x1b == (int)uVar143 >> 0x1f);
          auVar132._4_4_ = -(uint)((int)uVar152 >> 0x1b == (int)uVar152 >> 0x1f);
          auVar132._8_4_ = -(uint)((int)uVar153 >> 0x1b == (int)uVar153 >> 0x1f);
          auVar132._12_4_ = -(uint)((int)uVar154 >> 0x1b == (int)uVar154 >> 0x1f);
          cVar70 = (char)((int)uVar155 >> 0x1f);
          cVar75 = (char)((int)uVar158 >> 0x1f);
          auVar163._0_6_ =
               CONCAT15(cVar75,CONCAT14(cVar75,(uint)(ushort)(CONCAT11(cVar70,cVar70) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar163[6] = 0;
          auVar163[7] = cVar75;
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
          cVar70 = (char)((int)uVar143 >> 0x1f);
          cVar75 = (char)((int)uVar152 >> 0x1f);
          auVar133._0_6_ =
               CONCAT15(cVar75,CONCAT14(cVar75,(uint)(ushort)(CONCAT11(cVar70,cVar70) ^ 0x7fff))) ^
               0x7fff00000000;
          auVar133[6] = 0;
          auVar133[7] = cVar75;
          bVar97 = (byte)((int)uVar153 >> 0x1f);
          auVar133[8] = bVar97 ^ 0xff;
          auVar133[9] = bVar97 ^ 0x7f;
          auVar133[10] = bVar97;
          auVar133[0xb] = bVar97;
          bVar97 = (byte)((int)uVar154 >> 0x1f);
          auVar133[0xc] = bVar97 ^ 0xff;
          auVar133[0xd] = bVar97 ^ 0x7f;
          auVar133[0xe] = bVar97;
          auVar133[0xf] = bVar97;
          auVar29._4_4_ = uVar152 >> 0xc;
          auVar29._0_4_ = uVar143 >> 0xc;
          auVar29._8_4_ = uVar153 >> 0xc;
          auVar29._12_4_ = uVar154 >> 0xc;
          auVar133 = auVar133 ^ (auVar133 ^ auVar29) & auVar132;
          auVar27._6_2_ = 0;
          auVar27._0_6_ =
               CONCAT15((char)((uVar158 >> 0xc) >> 8),
                        CONCAT14((char)(uVar158 >> 0xc),uVar155 >> 0xc)) & 0xffff0000ffff;
          auVar27[8] = (char)(uVar159 >> 0xc);
          auVar27[9] = (char)((uVar159 >> 0xc) >> 8);
          auVar27[10] = bVar115 >> 4;
          auVar27[0xb] = 0;
          auVar27[0xc] = (char)(uVar160 >> 0xc);
          auVar27[0xd] = (char)((uVar160 >> 0xc) >> 8);
          auVar27[0xe] = bVar118 >> 4;
          auVar27[0xf] = 0;
          auVar163 = auVar163 ^ (auVar163 ^ auVar27) & auVar162;
                    /* try { // try from 00a947f0 to 00b94847 has its CatchHandler @ 00a94d40 */
          iVar60 = iVar60 + iVar65;
          iVar64 = iVar64 + iVar65;
          iVar66 = iVar66 + iVar65;
          iVar68 = iVar68 + iVar65;
          iVar14 = CONCAT13(uVar92,CONCAT12(uVar91,CONCAT11(uVar90,uVar89))) + iVar65;
          uVar89 = (undefined1)iVar14;
          uVar90 = (undefined1)((uint)iVar14 >> 8);
          uVar91 = (undefined1)((uint)iVar14 >> 0x10);
          uVar92 = (undefined1)((uint)iVar14 >> 0x18);
          iVar14 = CONCAT13(uVar96,CONCAT12(uVar95,CONCAT11(uVar94,uVar93))) + iVar65;
          uVar93 = (undefined1)iVar14;
          uVar94 = (undefined1)((uint)iVar14 >> 8);
          uVar95 = (undefined1)((uint)iVar14 >> 0x10);
          uVar96 = (undefined1)((uint)iVar14 >> 0x18);
          iVar14 = CONCAT13(uVar101,CONCAT12(uVar100,CONCAT11(uVar99,uVar98))) + iVar65;
          uVar98 = (undefined1)iVar14;
          uVar99 = (undefined1)((uint)iVar14 >> 8);
          uVar100 = (undefined1)((uint)iVar14 >> 0x10);
          uVar101 = (undefined1)((uint)iVar14 >> 0x18);
          iVar14 = CONCAT13(uVar106,CONCAT12(uVar105,CONCAT11(uVar104,uVar103))) + iVar65;
          uVar103 = (undefined1)iVar14;
          uVar104 = (undefined1)((uint)iVar14 >> 8);
          uVar105 = (undefined1)((uint)iVar14 >> 0x10);
          uVar106 = (undefined1)((uint)iVar14 >> 0x18);
          iVar14 = CONCAT13(uVar73,CONCAT12(uVar72,CONCAT11(uVar71,uVar69))) + iVar67;
          uVar69 = (undefined1)iVar14;
          uVar71 = (undefined1)((uint)iVar14 >> 8);
          uVar72 = (undefined1)((uint)iVar14 >> 0x10);
          uVar73 = (undefined1)((uint)iVar14 >> 0x18);
          iVar14 = CONCAT13(uVar78,CONCAT12(uVar77,CONCAT11(uVar76,uVar74))) + iVar67;
          uVar74 = (undefined1)iVar14;
          uVar76 = (undefined1)((uint)iVar14 >> 8);
          uVar77 = (undefined1)((uint)iVar14 >> 0x10);
          uVar78 = (undefined1)((uint)iVar14 >> 0x18);
          iVar14 = CONCAT13(uVar83,CONCAT12(uVar82,CONCAT11(uVar81,uVar79))) + iVar67;
          uVar79 = (undefined1)iVar14;
          uVar81 = (undefined1)((uint)iVar14 >> 8);
          uVar82 = (undefined1)((uint)iVar14 >> 0x10);
          uVar83 = (undefined1)((uint)iVar14 >> 0x18);
          iVar14 = CONCAT13(uVar88,CONCAT12(uVar87,CONCAT11(uVar86,uVar84))) + iVar67;
          uVar84 = (undefined1)iVar14;
          uVar86 = (undefined1)((uint)iVar14 >> 8);
          uVar87 = (undefined1)((uint)iVar14 >> 0x10);
          uVar88 = (undefined1)((uint)iVar14 >> 0x18);
          uVar51 = uVar51 - 8;
          *param_1 = auVar167._0_2_;
          param_1[1] = auVar163._0_2_;
          param_1[2] = auVar167._4_2_;
          param_1[3] = auVar163._4_2_;
          param_1[4] = auVar167._8_2_;
          param_1[5] = auVar163._8_2_;
          param_1[6] = auVar167._12_2_;
          param_1[7] = auVar163._12_2_;
          param_1[8] = auVar165._0_2_;
          param_1[9] = auVar133._0_2_;
          param_1[10] = auVar165._4_2_;
          param_1[0xb] = auVar133._4_2_;
          param_1[0xc] = auVar165._8_2_;
          param_1[0xd] = auVar133._8_2_;
          param_1[0xe] = auVar165._12_2_;
          param_1[0xf] = auVar133._12_2_;
          param_1 = param_1 + 0x10;
          auVar112._0_4_ = auVar111._0_4_ + iVar67;
          auVar112._4_4_ = auVar111._4_4_ + iVar67;
          auVar112._8_4_ = auVar111._8_4_ + iVar67;
          auVar112._12_4_ = auVar111._12_4_ + iVar67;
          auVar111 = auVar112;
        } while (uVar51 != 0);
        bVar30 = uVar49 == param_2;
        param_2 = param_2 - uVar49;
        param_1 = (short *)puVar4;
        param_3 = psVar45;
        iVar65 = iVar61 + iVar63 * (int)uVar49;
        iVar67 = iVar59 + iVar48 * (int)uVar49;
        if (bVar30) goto LAB_00a94440;
      }
    }
    do {
      uVar109 = (iVar67 >> 0x10) * (int)*param_3;
      uVar5 = (ushort)(uVar109 >> 0xc);
      if ((int)uVar109 >> 0x1f != (int)uVar109 >> 0x1b) {
        uVar5 = (ushort)((int)uVar109 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar5;
      uVar109 = (iVar65 >> 0x10) * (int)param_3[1];
      uVar5 = (ushort)(uVar109 >> 0xc);
                    /* try { // try from 00a9442c to 00b94433 has its CatchHandler @ 00a94cec */
      if ((int)uVar109 >> 0x1f != (int)uVar109 >> 0x1b) {
        uVar5 = (ushort)((int)uVar109 >> 0x1f) ^ 0x7fff;
      }
      param_2 = param_2 - 1;
      param_1[1] = uVar5;
      param_1 = param_1 + 2;
      param_3 = param_3 + 2;
      iVar65 = iVar65 + iVar63;
      iVar67 = iVar67 + iVar48;
    } while (param_2 != 0);
LAB_00a94440:
    *(int *)(param_6 + 8) = iVar59 + iVar48 * iVar50;
    *(int *)(param_6 + 0xc) = iVar61 + iVar63 * iVar50;
    return;
  case 2:
    volumeRampMulti<4,3,short,short,int,int,int>
              (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar48);
    return;
  case 3:
    volumeRampMulti<4,4,short,short,int,int,int>
              (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar48);
    return;
  case 4:
    volumeRampMulti<4,5,short,short,int,int,int>
              (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar48);
    return;
  case 5:
    volumeRampMulti<4,6,short,short,int,int,int>
              (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar48);
    return;
  case 6:
    volumeRampMulti<4,7,short,short,int,int,int>
              (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar48);
    return;
  case 7:
    volumeRampMulti<4,8,short,short,int,int,int>
              (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar48);
    return;
  }
                    /* try { // try from 00a94000 to 00b9402f has its CatchHandler @ 00a941c8 */
  if (param_4 != (int *)0x0) {
    iVar50 = *(int *)ptVar3;
    do {
      sVar142 = *param_3;
      iVar59 = *(int *)ptVar1;
      uVar109 = (iVar59 >> 0x10) * (int)sVar142;
      uVar5 = (ushort)(uVar109 >> 0xc);
      if ((int)uVar109 >> 0x1f != (int)uVar109 >> 0x1b) {
        uVar5 = (ushort)((int)uVar109 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar5;
      param_2 = param_2 - 1;
                    /* try { // try from 00a9403c to 00b9404b has its CatchHandler @ 00a9413c */
      *(int *)ptVar1 = *(int *)ptVar2 + iVar59;
                    /* try { // try from 00a9404c to 00b94057 has its CatchHandler @ 00a94124 */
      *param_4 = *param_4 + (iVar50 >> 0x10) * (int)sVar142;
      iVar50 = *(int *)ptVar3 + iVar48;
      *(int *)ptVar3 = iVar50;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
    return;
  }
                    /* try { // try from 00a942f4 to 00b9434f has its CatchHandler @ 00a942f4
                       catch() { ... } // from try @ 00a942f4 with catch @ 00a942f4
                       catch() { ... } // from try @ 00a94848 with catch @ 00a942f4
                       catch() { ... } // from try @ 00a94bdc with catch @ 00a942f4
                       catch() { ... } // from try @ 00a94c3c with catch @ 00a942f4 */
  iVar48 = *(int *)ptVar2;
  iVar59 = *(int *)ptVar1;
  iVar63 = iVar59;
  if ((7 < param_2) && ((param_3 + param_2 <= param_1 || (param_1 + param_2 <= param_3)))) {
    uVar49 = param_2 & 0xfffffffffffffff8;
    iVar63 = iVar48 * 8;
    iVar61 = iVar59 + iVar48 * 4;
    uVar69 = (undefined1)iVar61;
    uVar71 = (undefined1)((uint)iVar61 >> 8);
    uVar72 = (undefined1)((uint)iVar61 >> 0x10);
    uVar73 = (undefined1)((uint)iVar61 >> 0x18);
    iVar61 = iVar59 + iVar48 * 5;
    uVar74 = (undefined1)iVar61;
    uVar76 = (undefined1)((uint)iVar61 >> 8);
    uVar77 = (undefined1)((uint)iVar61 >> 0x10);
    uVar78 = (undefined1)((uint)iVar61 >> 0x18);
    iVar61 = iVar59 + iVar48 * 6;
    uVar79 = (undefined1)iVar61;
    uVar81 = (undefined1)((uint)iVar61 >> 8);
    uVar82 = (undefined1)((uint)iVar61 >> 0x10);
    uVar83 = (undefined1)((uint)iVar61 >> 0x18);
    iVar61 = iVar59 + iVar48 * 7;
    uVar84 = (undefined1)iVar61;
    uVar86 = (undefined1)((uint)iVar61 >> 8);
    uVar87 = (undefined1)((uint)iVar61 >> 0x10);
    uVar88 = (undefined1)((uint)iVar61 >> 0x18);
    psVar45 = param_1;
    psVar46 = param_3;
    uVar51 = uVar49;
    iVar61 = iVar59;
    iVar65 = iVar59 + iVar48;
    iVar67 = iVar59 + iVar48 * 2;
    iVar60 = iVar59 + iVar48 * 3;
    do {
      cVar70 = (char)(iVar61 >> 0x1f);
      cVar75 = (char)(iVar65 >> 0x1f);
      cVar107 = (char)(iVar67 >> 0x1f);
      cVar108 = (char)(iVar60 >> 0x1f);
      uVar109 = CONCAT13(cVar70,CONCAT12(cVar70,(short)((uint)iVar61 >> 0x10))) * (int)*psVar46;
      uVar114 = CONCAT13(cVar75,CONCAT12(cVar75,(short)((uint)iVar65 >> 0x10))) * (int)psVar46[1];
      uVar116 = CONCAT13(cVar107,CONCAT12(cVar107,(short)((uint)iVar67 >> 0x10))) * (int)psVar46[2];
      uVar117 = CONCAT13(cVar108,CONCAT12(cVar108,(short)((uint)iVar60 >> 0x10))) * (int)psVar46[3];
      uVar127 = (CONCAT13(uVar73,CONCAT12(uVar72,CONCAT11(uVar71,uVar69))) >> 0x10) *
                (int)psVar46[4];
      uVar139 = (CONCAT13(uVar78,CONCAT12(uVar77,CONCAT11(uVar76,uVar74))) >> 0x10) *
                (int)psVar46[5];
      uVar140 = (CONCAT13(uVar83,CONCAT12(uVar82,CONCAT11(uVar81,uVar79))) >> 0x10) *
                (int)psVar46[6];
      uVar141 = (CONCAT13(uVar88,CONCAT12(uVar87,CONCAT11(uVar86,uVar84))) >> 0x10) *
                (int)psVar46[7];
      auVar125._0_4_ = uVar109 >> 0xc;
      auVar125._4_4_ = uVar114 >> 0xc;
      auVar125._8_4_ = uVar116 >> 0xc;
      auVar125._12_4_ = uVar117 >> 0xc;
      cVar107 = (char)((int)uVar109 >> 0x1f);
      cVar108 = (char)((int)uVar114 >> 0x1f);
      bVar118 = (byte)((int)uVar116 >> 0x1f);
      bVar97 = (byte)((int)uVar117 >> 0x1f);
      auVar138._0_4_ = uVar127 >> 0xc;
      auVar138._4_4_ = uVar139 >> 0xc;
      auVar138._8_4_ = uVar140 >> 0xc;
      auVar138._12_4_ = uVar141 >> 0xc;
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
      cVar70 = (char)((int)uVar127 >> 0x1f);
      cVar75 = (char)((int)uVar139 >> 0x1f);
      auVar151._0_6_ =
           CONCAT15(cVar75,CONCAT14(cVar75,(uint)(ushort)(CONCAT11(cVar70,cVar70) ^ 0x7fff))) ^
           0x7fff00000000;
      auVar151[6] = 0;
      auVar151[7] = cVar75;
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
      auVar20[6] = 0;
      auVar20._0_6_ =
           CONCAT15(cVar108,CONCAT14(cVar108,(uint)(ushort)(CONCAT11(cVar107,cVar107) ^ 0x7fff))) ^
           0x7fff00000000;
      auVar20[7] = cVar108;
      auVar20[8] = bVar118 ^ 0xff;
      auVar20[9] = bVar118 ^ 0x7f;
      auVar20[10] = bVar118;
      auVar20[0xb] = bVar118;
      auVar20[0xc] = bVar97 ^ 0xff;
      auVar20[0xd] = bVar97 ^ 0x7f;
      auVar20[0xe] = bVar97;
      auVar20[0xf] = bVar97;
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
      auVar157 = auVar157 ^ (auVar20 ^ auVar125) & auVar156;
      auVar151 = auVar151 ^ (auVar151 ^ auVar138) & auVar150;
      uVar51 = uVar51 - 8;
      psVar45[4] = auVar151._0_2_;
      psVar45[5] = auVar151._4_2_;
      psVar45[6] = auVar151._8_2_;
      psVar45[7] = auVar151._12_2_;
      *psVar45 = auVar157._0_2_;
      psVar45[1] = auVar157._4_2_;
      psVar45[2] = auVar157._8_2_;
      psVar45[3] = auVar157._12_2_;
      iVar64 = CONCAT13(uVar73,CONCAT12(uVar72,CONCAT11(uVar71,uVar69))) + iVar63;
      uVar69 = (undefined1)iVar64;
      uVar71 = (undefined1)((uint)iVar64 >> 8);
      uVar72 = (undefined1)((uint)iVar64 >> 0x10);
      uVar73 = (undefined1)((uint)iVar64 >> 0x18);
      iVar64 = CONCAT13(uVar78,CONCAT12(uVar77,CONCAT11(uVar76,uVar74))) + iVar63;
      uVar74 = (undefined1)iVar64;
      uVar76 = (undefined1)((uint)iVar64 >> 8);
      uVar77 = (undefined1)((uint)iVar64 >> 0x10);
      uVar78 = (undefined1)((uint)iVar64 >> 0x18);
      iVar64 = CONCAT13(uVar83,CONCAT12(uVar82,CONCAT11(uVar81,uVar79))) + iVar63;
      uVar79 = (undefined1)iVar64;
      uVar81 = (undefined1)((uint)iVar64 >> 8);
      uVar82 = (undefined1)((uint)iVar64 >> 0x10);
      uVar83 = (undefined1)((uint)iVar64 >> 0x18);
      iVar64 = CONCAT13(uVar88,CONCAT12(uVar87,CONCAT11(uVar86,uVar84))) + iVar63;
      uVar84 = (undefined1)iVar64;
      uVar86 = (undefined1)((uint)iVar64 >> 8);
      uVar87 = (undefined1)((uint)iVar64 >> 0x10);
      uVar88 = (undefined1)((uint)iVar64 >> 0x18);
      psVar45 = psVar45 + 8;
      psVar46 = psVar46 + 8;
      iVar61 = iVar61 + iVar63;
      iVar65 = iVar65 + iVar63;
      iVar67 = iVar67 + iVar63;
      iVar60 = iVar60 + iVar63;
    } while (uVar51 != 0);
    bVar30 = uVar49 == param_2;
    param_2 = param_2 - uVar49;
    param_3 = param_3 + uVar49;
    param_1 = param_1 + uVar49;
    iVar63 = iVar59 + iVar48 * (int)uVar49;
    if (bVar30) goto LAB_00a94364;
  }
  do {
    uVar109 = (iVar63 >> 0x10) * (int)*param_3;
                    /* try { // try from 00a94350 to 00b94367 has its CatchHandler @ 00a94e14 */
    uVar5 = (ushort)(uVar109 >> 0xc);
    if ((int)uVar109 >> 0x1f != (int)uVar109 >> 0x1b) {
      uVar5 = (ushort)((int)uVar109 >> 0x1f) ^ 0x7fff;
    }
    param_2 = param_2 - 1;
    *param_1 = uVar5;
    param_3 = param_3 + 1;
    param_1 = param_1 + 1;
    iVar63 = iVar63 + iVar48;
  } while (param_2 != 0);
LAB_00a94364:
  *(int *)ptVar1 = iVar59 + iVar48 * iVar50;
  return;
}

