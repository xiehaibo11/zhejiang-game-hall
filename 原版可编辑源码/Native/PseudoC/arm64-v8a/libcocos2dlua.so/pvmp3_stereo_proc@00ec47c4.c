
void pvmp3_stereo_proc(int *param_1,int *param_2,long param_3,long param_4,uint param_5,int *param_6
                      )

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  short sVar4;
  ushort uVar5;
  short sVar6;
  ushort uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
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
  undefined1 auVar30 [16];
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
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  bool bVar99;
  int *piVar100;
  int *piVar101;
  long lVar102;
  int *piVar103;
  int *piVar104;
  int *piVar105;
  int *piVar106;
  uint uVar107;
  uint uVar108;
  int iVar109;
  uint uVar110;
  ulong uVar111;
  short *psVar112;
  long lVar113;
  long lVar114;
  ulong uVar115;
  long lVar116;
  ulong uVar117;
  ulong uVar118;
  int iVar119;
  int iVar120;
  int iVar121;
  int iVar122;
  undefined1 auVar123 [16];
  int iVar124;
  int iVar125;
  int iVar126;
  int iVar127;
  int iVar128;
  int iVar129;
  int iVar130;
  int iVar131;
  int iVar132;
  int iVar133;
  int iVar134;
  int iVar135;
  int iVar136;
  int iVar137;
  int iVar138;
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  
                    /* catch() { ... } // from try @ 00ec475c with catch @ 00ec47cc */
  if (param_6[7] != 1) {
    return;
  }
  uVar3 = param_6[8];
  piVar101 = param_2;
  piVar106 = param_1;
  if ((uVar3 & 1) == 0) {
    if ((uVar3 >> 1 & 1) == 0) {
      return;
    }
    iVar109 = (int)param_5 >> 1;
    if (iVar109 != 0) {
      uVar111 = (ulong)(iVar109 - 1);
      uVar117 = uVar111 + 1;
      if ((3 < uVar117) &&
         ((param_2 + uVar111 * 2 + 2 <= param_1 || (param_1 + uVar111 * 2 + 2 <= param_2)))) {
        uVar115 = uVar117 & 0x1fffffffc;
        iVar109 = iVar109 - (int)uVar115;
        piVar106 = param_1 + uVar115 * 2;
        piVar101 = param_2 + uVar115 * 2;
        uVar111 = uVar115;
        do {
          uVar111 = uVar111 - 4;
          iVar124 = *param_2 * 2 + *param_1 * 2;
          iVar125 = param_2[2] * 2 + param_1[2] * 2;
          iVar126 = param_2[4] * 2 + param_1[4] * 2;
          iVar127 = param_2[6] * 2 + param_1[6] * 2;
          iVar128 = param_2[1] * 2 + param_1[1] * 2;
          iVar129 = param_2[3] * 2 + param_1[3] * 2;
          iVar130 = param_2[5] * 2 + param_1[5] * 2;
          iVar131 = param_2[7] * 2 + param_1[7] * 2;
          iVar132 = *param_1 * 2 + *param_2 * -2;
          iVar133 = param_1[2] * 2 + param_2[2] * -2;
          iVar134 = param_1[4] * 2 + param_2[4] * -2;
          iVar137 = param_1[6] * 2 + param_2[6] * -2;
          iVar119 = param_1[1] * 2 + param_2[1] * -2;
          iVar120 = param_1[3] * 2 + param_2[3] * -2;
          iVar121 = param_1[5] * 2 + param_2[5] * -2;
          iVar122 = param_1[7] * 2 + param_2[7] * -2;
          auVar30._4_4_ = iVar125;
          auVar30._0_4_ = iVar124;
          auVar30._8_4_ = iVar126;
          auVar30._12_4_ = iVar127;
          auVar31._4_4_ = iVar125;
          auVar31._0_4_ = iVar124;
          auVar31._8_4_ = iVar126;
          auVar31._12_4_ = iVar127;
          auVar123 = NEON_ext(auVar30,auVar31,8,1);
          auVar52._4_4_ = iVar129;
          auVar52._0_4_ = iVar128;
          auVar52._8_4_ = iVar130;
          auVar52._12_4_ = iVar131;
          auVar53._4_4_ = iVar129;
          auVar53._0_4_ = iVar128;
          auVar53._8_4_ = iVar130;
          auVar53._12_4_ = iVar131;
          auVar139 = NEON_ext(auVar52,auVar53,8,1);
          auVar75._4_4_ = iVar133;
          auVar75._0_4_ = iVar132;
          auVar75._8_4_ = iVar134;
          auVar75._12_4_ = iVar137;
          auVar76._4_4_ = iVar133;
          auVar76._0_4_ = iVar132;
          auVar76._8_4_ = iVar134;
          auVar76._12_4_ = iVar137;
          auVar140 = NEON_ext(auVar75,auVar76,8,1);
          auVar8._4_4_ = iVar120;
          auVar8._0_4_ = iVar119;
          auVar8._8_4_ = iVar121;
          auVar8._12_4_ = iVar122;
          auVar9._4_4_ = iVar120;
          auVar9._0_4_ = iVar119;
          auVar9._8_4_ = iVar121;
          auVar9._12_4_ = iVar122;
          auVar142 = NEON_ext(auVar8,auVar9,8,1);
          *param_1 = (int)((ulong)((long)iVar124 * 0x5a827999) >> 0x20);
          param_1[1] = (int)((ulong)((long)iVar128 * 0x5a827999) >> 0x20);
          param_1[2] = (int)((ulong)((long)iVar125 * 0x5a827999) >> 0x20);
          param_1[3] = (int)((ulong)((long)iVar129 * 0x5a827999) >> 0x20);
          param_1[4] = (int)((ulong)((long)auVar123._0_4_ * 0x5a827999) >> 0x20);
          param_1[5] = (int)((ulong)((long)auVar139._0_4_ * 0x5a827999) >> 0x20);
          param_1[6] = (int)((ulong)((long)auVar123._4_4_ * 0x5a827999) >> 0x20);
          param_1[7] = (int)((ulong)((long)auVar139._4_4_ * 0x5a827999) >> 0x20);
          param_1 = param_1 + 8;
          *param_2 = (int)((ulong)((long)iVar132 * 0x5a827999) >> 0x20);
          param_2[1] = (int)((ulong)((long)iVar119 * 0x5a827999) >> 0x20);
          param_2[2] = (int)((ulong)((long)iVar133 * 0x5a827999) >> 0x20);
          param_2[3] = (int)((ulong)((long)iVar120 * 0x5a827999) >> 0x20);
          param_2[4] = (int)((ulong)((long)auVar140._0_4_ * 0x5a827999) >> 0x20);
          param_2[5] = (int)((ulong)((long)auVar142._0_4_ * 0x5a827999) >> 0x20);
          param_2[6] = (int)((ulong)((long)auVar140._4_4_ * 0x5a827999) >> 0x20);
          param_2[7] = (int)((ulong)((long)auVar142._4_4_ * 0x5a827999) >> 0x20);
          param_2 = param_2 + 8;
        } while (uVar111 != 0);
        param_2 = piVar101;
        param_1 = piVar106;
        if (uVar117 == uVar115) goto joined_r0x00ec49d4;
      }
      do {
        iVar119 = *param_1;
        iVar120 = *param_2;
        iVar109 = iVar109 + -1;
        *param_1 = (int)((ulong)((long)(iVar120 * 2 + iVar119 * 2) * 0x5a827999) >> 0x20);
        *param_2 = (int)((ulong)((long)(iVar119 * 2 + iVar120 * -2) * 0x5a827999) >> 0x20);
        iVar119 = param_1[1];
        iVar120 = param_2[1];
        piVar106 = param_1 + 2;
        piVar101 = param_2 + 2;
        param_1[1] = (int)((ulong)((long)(iVar120 * 2 + iVar119 * 2) * 0x5a827999) >> 0x20);
        param_2[1] = (int)((ulong)((long)(iVar119 * 2 + iVar120 * -2) * 0x5a827999) >> 0x20);
        param_2 = piVar101;
        param_1 = piVar106;
      } while (iVar109 != 0);
    }
joined_r0x00ec49d4:
    if ((param_5 & 1) == 0) {
      return;
    }
    iVar109 = (int)((ulong)((long)(*piVar101 * 2 + *piVar106 * 2) * 0x5a827999) >> 0x20);
    iVar119 = (int)((ulong)((long)(*piVar106 * 2 + *piVar101 * -2) * 0x5a827999) >> 0x20);
                    /* catch() { ... } // from try @ 00ec4a50 with catch @ 00ec4a00 */
LAB_00ec4a04:
    *piVar106 = iVar109;
    *piVar101 = iVar119;
    return;
  }
  lVar113 = (long)param_6[4] + (long)(*param_6 * 3);
  iVar109 = (int)lVar113;
  if ((*(int *)(param_4 + 0x10) != 0) && (*(int *)(param_4 + 0x14) == 2)) {
    if (*(int *)(param_4 + 0x18) == 0) {
      lVar116 = (long)iVar109;
      lVar113 = 0;
      iVar119 = 1;
                    /* try { // try from 00ec4a48 to 00fc4a4f has its CatchHandler @ 00ec4adc */
                    /* try { // try from 00ec4a50 to 00fc4af7 has its CatchHandler @ 00ec4a00 */
      do {
        iVar120 = 0xc;
        iVar121 = -1;
        do {
          lVar114 = (long)iVar120 * 2 + lVar116 * 0x4a;
          sVar6 = *(short *)(mp3_sfBandIndex + lVar114 + 0x2e);
          iVar122 = (int)*(short *)(mp3_sfBandIndex + lVar114 + 0x30) - (int)sVar6;
          iVar124 = iVar120;
          if (0 < iVar122) {
            piVar106 = param_2 + (long)((int)sVar6 + sVar6 * 2 + iVar119 * iVar122) + -1;
            do {
              iVar122 = iVar122 + -1;
              if (*piVar106 != 0) {
                iVar124 = -10;
                iVar121 = iVar120;
                break;
              }
              piVar106 = piVar106 + -1;
            } while (0 < iVar122);
          }
          iVar120 = iVar124 + -1;
        } while (0 < iVar124);
                    /* catch() { ... } // from try @ 00ec4a48 with catch @ 00ec4adc */
        uVar110 = iVar121 + 1;
        iVar120 = (int)lVar113;
        if (-1 < iVar121) {
          uVar117 = 0;
          sVar6 = *(short *)(mp3_sfBandIndex + (long)iVar109 * 0x4a + 0x2e);
          do {
            uVar117 = uVar117 + 1;
            sVar4 = *(short *)(mp3_sfBandIndex + lVar116 * 0x4a + uVar117 * 2 + 0x2e);
            if ((uVar3 >> 1 & 1) != 0) {
              uVar107 = (int)sVar4 - (int)sVar6;
              iVar122 = sVar6 * 3;
              uVar108 = iVar122 + uVar107 * iVar120;
              uVar111 = -(ulong)(uVar108 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar108 << 2;
              iVar121 = (int)uVar107 >> 1;
              piVar101 = (int *)((long)param_1 + uVar111);
              piVar106 = (int *)((long)param_2 + uVar111);
              if (iVar121 != 0) {
                    /* try { // try from 00ec4b40 to 00fc4b47 has its CatchHandler @ 00ec4cd4 */
                uVar111 = (ulong)(iVar121 - 1) + 1;
                    /* try { // try from 00ec4b48 to 00fc4b83 has its CatchHandler @ 00ec4af8 */
                piVar100 = piVar106;
                piVar105 = piVar101;
                if ((3 < uVar111) &&
                   ((lVar114 = (long)(int)uVar108 + (ulong)(iVar121 - 1) * 2,
                    param_2 + lVar114 + 2 <= piVar101 || (param_1 + lVar114 + 2 <= piVar106)))) {
                  uVar118 = uVar111 & 0x1fffffffc;
                    /* try { // try from 00ec4b84 to 00fc4b8f has its CatchHandler @ 00ec4cb8 */
                  uVar108 = iVar122 + iVar120 * uVar107;
                  uVar115 = -(ulong)(uVar108 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar108 << 2;
                    /* try { // try from 00ec4b90 to 00fc4b9f has its CatchHandler @ 00ec4c98 */
                  iVar121 = iVar121 - (int)uVar118;
                  piVar101 = piVar101 + uVar118 * 2;
                  piVar106 = piVar106 + uVar118 * 2;
                  piVar100 = (int *)((long)param_2 + uVar115);
                  piVar105 = (int *)((long)param_1 + uVar115);
                  uVar115 = uVar118;
                  do {
                    /* try { // try from 00ec4ba8 to 00fc4bc7 has its CatchHandler @ 00ec4c64 */
                    uVar115 = uVar115 - 4;
                    iVar127 = *piVar100 * 2 + *piVar105 * 2;
                    iVar128 = piVar100[2] * 2 + piVar105[2] * 2;
                    iVar129 = piVar100[4] * 2 + piVar105[4] * 2;
                    iVar130 = piVar100[6] * 2 + piVar105[6] * 2;
                    /* try { // try from 00ec4bc8 to 00fc4cef has its CatchHandler @ 00ec4af8 */
                    iVar131 = piVar100[1] * 2 + piVar105[1] * 2;
                    iVar132 = piVar100[3] * 2 + piVar105[3] * 2;
                    iVar133 = piVar100[5] * 2 + piVar105[5] * 2;
                    iVar134 = piVar100[7] * 2 + piVar105[7] * 2;
                    iVar137 = *piVar105 * 2 + *piVar100 * -2;
                    iVar135 = piVar105[2] * 2 + piVar100[2] * -2;
                    iVar138 = piVar105[4] * 2 + piVar100[4] * -2;
                    iVar136 = piVar105[6] * 2 + piVar100[6] * -2;
                    iVar122 = piVar105[1] * 2 + piVar100[1] * -2;
                    iVar124 = piVar105[3] * 2 + piVar100[3] * -2;
                    iVar125 = piVar105[5] * 2 + piVar100[5] * -2;
                    iVar126 = piVar105[7] * 2 + piVar100[7] * -2;
                    auVar44._4_4_ = iVar128;
                    auVar44._0_4_ = iVar127;
                    auVar44._8_4_ = iVar129;
                    auVar44._12_4_ = iVar130;
                    auVar45._4_4_ = iVar128;
                    auVar45._0_4_ = iVar127;
                    auVar45._8_4_ = iVar129;
                    auVar45._12_4_ = iVar130;
                    auVar123 = NEON_ext(auVar44,auVar45,8,1);
                    auVar67._4_4_ = iVar132;
                    auVar67._0_4_ = iVar131;
                    auVar67._8_4_ = iVar133;
                    auVar67._12_4_ = iVar134;
                    auVar68._4_4_ = iVar132;
                    auVar68._0_4_ = iVar131;
                    auVar68._8_4_ = iVar133;
                    auVar68._12_4_ = iVar134;
                    auVar139 = NEON_ext(auVar67,auVar68,8,1);
                    auVar91._4_4_ = iVar135;
                    auVar91._0_4_ = iVar137;
                    auVar91._8_4_ = iVar138;
                    auVar91._12_4_ = iVar136;
                    auVar92._4_4_ = iVar135;
                    auVar92._0_4_ = iVar137;
                    auVar92._8_4_ = iVar138;
                    auVar92._12_4_ = iVar136;
                    auVar140 = NEON_ext(auVar91,auVar92,8,1);
                    auVar22._4_4_ = iVar124;
                    auVar22._0_4_ = iVar122;
                    auVar22._8_4_ = iVar125;
                    auVar22._12_4_ = iVar126;
                    auVar23._4_4_ = iVar124;
                    auVar23._0_4_ = iVar122;
                    auVar23._8_4_ = iVar125;
                    auVar23._12_4_ = iVar126;
                    auVar142 = NEON_ext(auVar22,auVar23,8,1);
                    *piVar105 = (int)((ulong)((long)iVar127 * 0x5a827999) >> 0x20);
                    piVar105[1] = (int)((ulong)((long)iVar131 * 0x5a827999) >> 0x20);
                    piVar105[2] = (int)((ulong)((long)iVar128 * 0x5a827999) >> 0x20);
                    piVar105[3] = (int)((ulong)((long)iVar132 * 0x5a827999) >> 0x20);
                    piVar105[4] = (int)((ulong)((long)auVar123._0_4_ * 0x5a827999) >> 0x20);
                    piVar105[5] = (int)((ulong)((long)auVar139._0_4_ * 0x5a827999) >> 0x20);
                    piVar105[6] = (int)((ulong)((long)auVar123._4_4_ * 0x5a827999) >> 0x20);
                    piVar105[7] = (int)((ulong)((long)auVar139._4_4_ * 0x5a827999) >> 0x20);
                    piVar105 = piVar105 + 8;
                    *piVar100 = (int)((ulong)((long)iVar137 * 0x5a827999) >> 0x20);
                    piVar100[1] = (int)((ulong)((long)iVar122 * 0x5a827999) >> 0x20);
                    piVar100[2] = (int)((ulong)((long)iVar135 * 0x5a827999) >> 0x20);
                    piVar100[3] = (int)((ulong)((long)iVar124 * 0x5a827999) >> 0x20);
                    piVar100[4] = (int)((ulong)((long)auVar140._0_4_ * 0x5a827999) >> 0x20);
                    piVar100[5] = (int)((ulong)((long)auVar142._0_4_ * 0x5a827999) >> 0x20);
                    piVar100[6] = (int)((ulong)((long)auVar140._4_4_ * 0x5a827999) >> 0x20);
                    piVar100[7] = (int)((ulong)((long)auVar142._4_4_ * 0x5a827999) >> 0x20);
                    piVar100 = piVar100 + 8;
                  } while (uVar115 != 0);
                  piVar100 = piVar106;
                  piVar105 = piVar101;
                  if (uVar111 == uVar118) goto LAB_00ec4cdc;
                }
                do {
                  iVar122 = *piVar105;
                  iVar124 = *piVar100;
                  piVar106 = piVar100 + 2;
                  iVar121 = iVar121 + -1;
                    /* catch() { ... } // from try @ 00ec4ba8 with catch @ 00ec4c64 */
                  *piVar105 = (int)((ulong)((long)(iVar124 * 2 + iVar122 * 2) * 0x5a827999) >> 0x20)
                  ;
                  *piVar100 = (int)((ulong)((long)(iVar122 * 2 + iVar124 * -2) * 0x5a827999) >> 0x20
                                   );
                  iVar122 = piVar105[1];
                  iVar124 = piVar100[1];
                  piVar101 = piVar105 + 2;
                    /* catch() { ... } // from try @ 00ec4b90 with catch @ 00ec4c98 */
                    /* catch() { ... } // from try @ 00ec4b84 with catch @ 00ec4cb8 */
                  piVar105[1] = (int)((ulong)((long)(iVar124 * 2 + iVar122 * 2) * 0x5a827999) >>
                                     0x20);
                  piVar100[1] = (int)((ulong)((long)(iVar122 * 2 + iVar124 * -2) * 0x5a827999) >>
                                     0x20);
                  piVar100 = piVar106;
                  piVar105 = piVar101;
                } while (iVar121 != 0);
              }
LAB_00ec4cdc:
              if ((uVar107 & 1) != 0) {
                iVar121 = *piVar101;
                iVar122 = *piVar106;
                *piVar101 = (int)((ulong)((long)(iVar122 * 2 + iVar121 * 2) * 0x5a827999) >> 0x20);
                *piVar106 = (int)((ulong)((long)(iVar121 * 2 + iVar122 * -2) * 0x5a827999) >> 0x20);
              }
            }
                    /* catch() { ... } // from try @ 00ec4b48 with catch @ 00ec4af8
                       catch() { ... } // from try @ 00ec4bc8 with catch @ 00ec4af8 */
            sVar6 = sVar4;
          } while (uVar117 != uVar110);
        }
        if ((int)uVar110 < 0xd) {
          lVar114 = (long)(int)uVar110;
          sVar6 = *(short *)(mp3_sfBandIndex + lVar116 * 0x4a + (long)(int)uVar110 * 2 + 0x2e);
          do {
            lVar102 = lVar114 * 4;
            lVar114 = lVar114 + 1;
            sVar4 = *(short *)(mp3_sfBandIndex + lVar116 * 0x4a + lVar114 * 2 + 0x2e);
            uVar110 = *(uint *)(param_3 + lVar113 * 0x34 + lVar102 + 0x5c);
            lVar102 = (long)sVar6 + (long)sVar6 * 2;
            uVar108 = (int)sVar4 - (int)sVar6;
            uVar117 = lVar102 + (int)(uVar108 * iVar120);
            iVar121 = (int)uVar108 >> 1;
            iVar122 = (int)lVar102;
            if (uVar110 == 7) {
              if ((uVar3 >> 1 & 1) != 0) {
                piVar106 = param_1 + uVar117;
                piVar101 = param_2 + uVar117;
                if (iVar121 != 0) {
                  uVar111 = (ulong)(iVar121 - 1) + 1;
                  piVar100 = piVar101;
                  piVar105 = piVar106;
                  if ((3 < uVar111) &&
                     ((lVar102 = uVar117 + (ulong)(iVar121 - 1) * 2,
                      param_2 + lVar102 + 2 <= piVar106 || (param_1 + lVar102 + 2 <= piVar101)))) {
                    uVar115 = uVar111 & 0x1fffffffc;
                    uVar110 = iVar122 + iVar120 * uVar108;
                    uVar117 = -(ulong)(uVar110 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar110 << 2;
                    iVar121 = iVar121 - (int)uVar115;
                    piVar106 = piVar106 + uVar115 * 2;
                    piVar101 = piVar101 + uVar115 * 2;
                    piVar100 = (int *)((long)param_2 + uVar117);
                    piVar105 = (int *)((long)param_1 + uVar117);
                    uVar117 = uVar115;
                    do {
                      uVar117 = uVar117 - 4;
                      iVar127 = *piVar100 * 2 + *piVar105 * 2;
                      iVar128 = piVar100[2] * 2 + piVar105[2] * 2;
                      iVar129 = piVar100[4] * 2 + piVar105[4] * 2;
                      iVar130 = piVar100[6] * 2 + piVar105[6] * 2;
                      iVar131 = piVar100[1] * 2 + piVar105[1] * 2;
                      iVar132 = piVar100[3] * 2 + piVar105[3] * 2;
                      iVar133 = piVar100[5] * 2 + piVar105[5] * 2;
                      iVar134 = piVar100[7] * 2 + piVar105[7] * 2;
                      iVar137 = *piVar105 * 2 + *piVar100 * -2;
                      iVar135 = piVar105[2] * 2 + piVar100[2] * -2;
                      iVar138 = piVar105[4] * 2 + piVar100[4] * -2;
                      iVar136 = piVar105[6] * 2 + piVar100[6] * -2;
                      iVar122 = piVar105[1] * 2 + piVar100[1] * -2;
                      iVar124 = piVar105[3] * 2 + piVar100[3] * -2;
                      iVar125 = piVar105[5] * 2 + piVar100[5] * -2;
                      iVar126 = piVar105[7] * 2 + piVar100[7] * -2;
                      auVar42._4_4_ = iVar128;
                      auVar42._0_4_ = iVar127;
                      auVar42._8_4_ = iVar129;
                      auVar42._12_4_ = iVar130;
                      auVar43._4_4_ = iVar128;
                      auVar43._0_4_ = iVar127;
                      auVar43._8_4_ = iVar129;
                      auVar43._12_4_ = iVar130;
                      auVar123 = NEON_ext(auVar42,auVar43,8,1);
                      auVar65._4_4_ = iVar132;
                      auVar65._0_4_ = iVar131;
                      auVar65._8_4_ = iVar133;
                      auVar65._12_4_ = iVar134;
                      auVar66._4_4_ = iVar132;
                      auVar66._0_4_ = iVar131;
                      auVar66._8_4_ = iVar133;
                      auVar66._12_4_ = iVar134;
                      auVar139 = NEON_ext(auVar65,auVar66,8,1);
                      auVar89._4_4_ = iVar135;
                      auVar89._0_4_ = iVar137;
                      auVar89._8_4_ = iVar138;
                      auVar89._12_4_ = iVar136;
                      auVar90._4_4_ = iVar135;
                      auVar90._0_4_ = iVar137;
                      auVar90._8_4_ = iVar138;
                      auVar90._12_4_ = iVar136;
                      auVar140 = NEON_ext(auVar89,auVar90,8,1);
                      auVar20._4_4_ = iVar124;
                      auVar20._0_4_ = iVar122;
                      auVar20._8_4_ = iVar125;
                      auVar20._12_4_ = iVar126;
                      auVar21._4_4_ = iVar124;
                      auVar21._0_4_ = iVar122;
                      auVar21._8_4_ = iVar125;
                      auVar21._12_4_ = iVar126;
                      auVar142 = NEON_ext(auVar20,auVar21,8,1);
                      *piVar105 = (int)((ulong)((long)iVar127 * 0x5a827999) >> 0x20);
                      piVar105[1] = (int)((ulong)((long)iVar131 * 0x5a827999) >> 0x20);
                      piVar105[2] = (int)((ulong)((long)iVar128 * 0x5a827999) >> 0x20);
                      piVar105[3] = (int)((ulong)((long)iVar132 * 0x5a827999) >> 0x20);
                      piVar105[4] = (int)((ulong)((long)auVar123._0_4_ * 0x5a827999) >> 0x20);
                      piVar105[5] = (int)((ulong)((long)auVar139._0_4_ * 0x5a827999) >> 0x20);
                      piVar105[6] = (int)((ulong)((long)auVar123._4_4_ * 0x5a827999) >> 0x20);
                      piVar105[7] = (int)((ulong)((long)auVar139._4_4_ * 0x5a827999) >> 0x20);
                      piVar105 = piVar105 + 8;
                      *piVar100 = (int)((ulong)((long)iVar137 * 0x5a827999) >> 0x20);
                      piVar100[1] = (int)((ulong)((long)iVar122 * 0x5a827999) >> 0x20);
                      piVar100[2] = (int)((ulong)((long)iVar135 * 0x5a827999) >> 0x20);
                      piVar100[3] = (int)((ulong)((long)iVar124 * 0x5a827999) >> 0x20);
                      piVar100[4] = (int)((ulong)((long)auVar140._0_4_ * 0x5a827999) >> 0x20);
                      piVar100[5] = (int)((ulong)((long)auVar142._0_4_ * 0x5a827999) >> 0x20);
                      piVar100[6] = (int)((ulong)((long)auVar140._4_4_ * 0x5a827999) >> 0x20);
                      piVar100[7] = (int)((ulong)((long)auVar142._4_4_ * 0x5a827999) >> 0x20);
                      piVar100 = piVar100 + 8;
                    } while (uVar117 != 0);
                    piVar100 = piVar101;
                    piVar105 = piVar106;
                    if (uVar111 == uVar115) goto LAB_00ec4f14;
                  }
                  do {
                    iVar122 = *piVar105;
                    iVar124 = *piVar100;
                    piVar106 = piVar105 + 2;
                    piVar101 = piVar100 + 2;
                    *piVar105 = (int)((ulong)((long)(iVar124 * 2 + iVar122 * 2) * 0x5a827999) >>
                                     0x20);
                    *piVar100 = (int)((ulong)((long)(iVar122 * 2 + iVar124 * -2) * 0x5a827999) >>
                                     0x20);
                    iVar122 = piVar105[1];
                    iVar124 = piVar100[1];
                    iVar121 = iVar121 + -1;
                    piVar105[1] = (int)((ulong)((long)(iVar124 * 2 + iVar122 * 2) * 0x5a827999) >>
                                       0x20);
                    piVar100[1] = (int)((ulong)((long)(iVar122 * 2 + iVar124 * -2) * 0x5a827999) >>
                                       0x20);
                    piVar100 = piVar101;
                    piVar105 = piVar106;
                  } while (iVar121 != 0);
                }
LAB_00ec4f14:
                if ((uVar108 & 1) != 0) {
                  iVar121 = *piVar106;
                  iVar122 = *piVar101;
                  *piVar106 = (int)((ulong)((long)(iVar122 * 2 + iVar121 * 2) * 0x5a827999) >> 0x20)
                  ;
                    /* catch() { ... } // from try @ 00ec4f78 with catch @ 00ec4f4c */
                  *piVar101 = (int)((ulong)((long)(iVar121 * 2 + iVar122 * -2) * 0x5a827999) >> 0x20
                                   );
                }
              }
            }
            else {
              iVar124 = (&DAT_01438708)[(ulong)uVar110 & 7];
              lVar102 = (long)iVar124;
              uVar111 = -(uVar117 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar117 & 0xffffffff) << 2;
              piVar101 = (int *)((long)param_1 + uVar111);
              piVar106 = (int *)((long)param_2 + uVar111);
              if (iVar121 != 0) {
                    /* try { // try from 00ec4f70 to 00fc4f77 has its CatchHandler @ 00ec4fdc */
                uVar111 = (ulong)(iVar121 - 1) + 1;
                    /* try { // try from 00ec4f78 to 00fc4ff7 has its CatchHandler @ 00ec4f4c */
                piVar100 = piVar101;
                piVar105 = piVar106;
                if ((3 < uVar111) &&
                   ((lVar2 = (long)(int)uVar117 + (ulong)(iVar121 - 1) * 2,
                    param_1 + lVar2 + 2 <= piVar106 || (param_2 + lVar2 + 2 <= piVar101)))) {
                  uVar115 = uVar111 & 0x1fffffffc;
                  uVar110 = iVar122 + iVar120 * uVar108;
                  uVar117 = -(ulong)(uVar110 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar110 << 2;
                  iVar121 = iVar121 - (int)uVar115;
                  piVar101 = piVar101 + uVar115 * 2;
                  piVar106 = piVar106 + uVar115 * 2;
                  piVar100 = (int *)((long)param_2 + uVar117);
                  piVar105 = (int *)((long)param_1 + uVar117);
                  uVar117 = uVar115;
                  do {
                    iVar137 = piVar105[1];
                    iVar132 = piVar105[2];
                    iVar135 = piVar105[3];
                    iVar133 = piVar105[4];
                    iVar138 = piVar105[5];
                    iVar134 = piVar105[6];
                    iVar136 = piVar105[7];
                    uVar117 = uVar117 - 4;
                    /* catch() { ... } // from try @ 00ec4f70 with catch @ 00ec4fdc */
                    lVar2 = (long)iVar124;
                    iVar122 = (int)((ulong)((long)iVar124 * (long)(*piVar105 << 1)) >> 0x20);
                    iVar128 = (int)((ulong)(lVar2 * (iVar132 << 1)) >> 0x20);
                    iVar125 = (int)((ulong)((long)iVar124 * (long)(iVar133 << 1)) >> 0x20);
                    iVar129 = (int)((ulong)(lVar2 * (iVar134 << 1)) >> 0x20);
                    iVar126 = (int)((ulong)((long)iVar124 * (long)(iVar137 << 1)) >> 0x20);
                    iVar130 = (int)((ulong)(lVar2 * (iVar135 << 1)) >> 0x20);
                    iVar127 = (int)((ulong)((long)iVar124 * (long)(iVar138 << 1)) >> 0x20);
                    iVar131 = (int)((ulong)(lVar2 * (iVar136 << 1)) >> 0x20);
                    *piVar100 = *piVar105 - iVar122;
                    piVar100[1] = iVar137 - iVar126;
                    piVar100[2] = iVar132 - iVar128;
                    piVar100[3] = iVar135 - iVar130;
                    piVar100[4] = iVar133 - iVar125;
                    piVar100[5] = iVar138 - iVar127;
                    piVar100[6] = iVar134 - iVar129;
                    piVar100[7] = iVar136 - iVar131;
                    piVar100 = piVar100 + 8;
                    *piVar105 = iVar122;
                    piVar105[1] = iVar126;
                    piVar105[2] = iVar128;
                    piVar105[3] = iVar130;
                    piVar105[4] = iVar125;
                    piVar105[5] = iVar127;
                    piVar105[6] = iVar129;
                    piVar105[7] = iVar131;
                    piVar105 = piVar105 + 8;
                  } while (uVar117 != 0);
                  piVar100 = piVar101;
                  piVar105 = piVar106;
                  if (uVar111 == uVar115) goto LAB_00ec5108;
                }
                do {
                  piVar106 = piVar105 + 2;
                  piVar101 = piVar100 + 2;
                  iVar121 = iVar121 + -1;
                  iVar122 = (int)((ulong)((*piVar100 << 1) * lVar102) >> 0x20);
                  *piVar105 = *piVar100 - iVar122;
                  *piVar100 = iVar122;
                  iVar122 = (int)((ulong)((piVar100[1] << 1) * lVar102) >> 0x20);
                  piVar105[1] = piVar100[1] - iVar122;
                  piVar100[1] = iVar122;
                  piVar100 = piVar101;
                  piVar105 = piVar106;
                } while (iVar121 != 0);
              }
LAB_00ec5108:
              if ((uVar108 & 1) != 0) {
                iVar121 = (int)((ulong)((*piVar101 << 1) * lVar102) >> 0x20);
                *piVar106 = *piVar101 - iVar121;
                *piVar101 = iVar121;
              }
            }
            sVar6 = sVar4;
          } while ((int)lVar114 != 0xd);
        }
        lVar113 = lVar113 + 1;
        iVar119 = iVar119 + 1;
        if (lVar113 == 3) {
          return;
        }
      } while( true );
    }
    iVar120 = 0x1f;
    iVar119 = 0x11;
    do {
      iVar121 = iVar119 + iVar120 * 0x12;
      if (param_2[iVar121] != 0) {
        lVar113 = (long)iVar109;
        if (0x23 < iVar121) {
          lVar116 = 0;
          iVar109 = 1;
          do {
            uVar108 = 0xc;
            uVar110 = 0xffffffff;
            do {
              lVar114 = (long)(int)uVar108 * 2 + lVar113 * 0x4a;
              sVar6 = *(short *)(mp3_sfBandIndex + lVar114 + 0x2e);
              iVar119 = (int)*(short *)(mp3_sfBandIndex + lVar114 + 0x30) - (int)sVar6;
              uVar107 = uVar108;
              if (0 < iVar119) {
                piVar100 = param_2 + (long)((int)sVar6 + sVar6 * 2 + iVar109 * iVar119) + -1;
                do {
                  iVar119 = iVar119 + -1;
                  if (*piVar100 != 0) {
                    uVar107 = 0xfffffff6;
                    uVar110 = uVar108;
                    break;
                  }
                  piVar100 = piVar100 + -1;
                } while (0 < iVar119);
              }
              uVar108 = uVar107 - 1;
            } while (2 < (int)uVar108);
            if ((int)uVar110 < 3) {
              uVar110 = 2;
            }
            iVar119 = (int)lVar116;
            if (2 < (int)uVar110) {
              uVar117 = 3;
              sVar6 = *(short *)(mp3_sfBandIndex + lVar113 * 0x4a + 0x34);
              do {
                sVar4 = *(short *)(mp3_sfBandIndex + lVar113 * 0x4a + (uVar117 + 1) * 2 + 0x2e);
                if ((uVar3 >> 1 & 1) != 0) {
                  uVar107 = (int)sVar4 - (int)sVar6;
                  iVar121 = sVar6 * 3;
                  uVar108 = iVar121 + uVar107 * iVar119;
                  uVar111 = -(ulong)(uVar108 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar108 << 2;
                  iVar120 = (int)uVar107 >> 1;
                  piVar100 = (int *)((long)param_1 + uVar111);
                  piVar105 = (int *)((long)param_2 + uVar111);
                  if (iVar120 != 0) {
                    uVar111 = (ulong)(iVar120 - 1) + 1;
                    piVar104 = piVar105;
                    piVar103 = piVar100;
                    /* catch() { ... } // from try @ 00ec5d4c with catch @ 00ec5d20 */
                    if ((3 < uVar111) &&
                       ((lVar114 = (long)(int)uVar108 + (ulong)(iVar120 - 1) * 2,
                        param_2 + lVar114 + 2 <= piVar100 || (param_1 + lVar114 + 2 <= piVar105))))
                    {
                      uVar118 = uVar111 & 0x1fffffffc;
                      uVar108 = iVar121 + iVar119 * uVar107;
                      uVar115 = -(ulong)(uVar108 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar108 << 2
                      ;
                      iVar120 = iVar120 - (int)uVar118;
                      piVar100 = piVar100 + uVar118 * 2;
                      piVar105 = piVar105 + uVar118 * 2;
                    /* try { // try from 00ec5d44 to 00fc5d4b has its CatchHandler @ 00ec5da8 */
                      piVar104 = (int *)((long)param_2 + uVar115);
                      piVar103 = (int *)((long)param_1 + uVar115);
                    /* try { // try from 00ec5d4c to 00fc5dc3 has its CatchHandler @ 00ec5d20 */
                      uVar115 = uVar118;
                      do {
                        uVar115 = uVar115 - 4;
                        iVar126 = *piVar104 * 2 + *piVar103 * 2;
                        iVar127 = piVar104[2] * 2 + piVar103[2] * 2;
                        iVar128 = piVar104[4] * 2 + piVar103[4] * 2;
                        iVar129 = piVar104[6] * 2 + piVar103[6] * 2;
                        iVar130 = piVar104[1] * 2 + piVar103[1] * 2;
                        iVar131 = piVar104[3] * 2 + piVar103[3] * 2;
                        iVar132 = piVar104[5] * 2 + piVar103[5] * 2;
                        iVar133 = piVar104[7] * 2 + piVar103[7] * 2;
                        iVar134 = *piVar103 * 2 + *piVar104 * -2;
                        iVar137 = piVar103[2] * 2 + piVar104[2] * -2;
                        iVar135 = piVar103[4] * 2 + piVar104[4] * -2;
                        iVar138 = piVar103[6] * 2 + piVar104[6] * -2;
                        iVar121 = piVar103[1] * 2 + piVar104[1] * -2;
                        iVar122 = piVar103[3] * 2 + piVar104[3] * -2;
                        iVar124 = piVar103[5] * 2 + piVar104[5] * -2;
                        iVar125 = piVar103[7] * 2 + piVar104[7] * -2;
                        auVar140._4_4_ = iVar127;
                        auVar140._0_4_ = iVar126;
                        auVar140._8_4_ = iVar128;
                        auVar140._12_4_ = iVar129;
                        auVar142._4_4_ = iVar127;
                        auVar142._0_4_ = iVar126;
                        auVar142._8_4_ = iVar128;
                        auVar142._12_4_ = iVar129;
                        auVar140 = NEON_ext(auVar140,auVar142,8,1);
                        auVar141._4_4_ = iVar131;
                        auVar141._0_4_ = iVar130;
                        auVar141._8_4_ = iVar132;
                        auVar141._12_4_ = iVar133;
                        auVar64._4_4_ = iVar131;
                        auVar64._0_4_ = iVar130;
                        auVar64._8_4_ = iVar132;
                        auVar64._12_4_ = iVar133;
                        auVar142 = NEON_ext(auVar141,auVar64,8,1);
                        auVar87._4_4_ = iVar137;
                        auVar87._0_4_ = iVar134;
                        auVar87._8_4_ = iVar135;
                        auVar87._12_4_ = iVar138;
                        auVar88._4_4_ = iVar137;
                        auVar88._0_4_ = iVar134;
                        auVar88._8_4_ = iVar135;
                        auVar88._12_4_ = iVar138;
                        auVar141 = NEON_ext(auVar87,auVar88,8,1);
                        auVar123._4_4_ = iVar122;
                        auVar123._0_4_ = iVar121;
                        auVar123._8_4_ = iVar124;
                        auVar123._12_4_ = iVar125;
                        auVar139._4_4_ = iVar122;
                        auVar139._0_4_ = iVar121;
                        auVar139._8_4_ = iVar124;
                        auVar139._12_4_ = iVar125;
                    /* catch() { ... } // from try @ 00ec5d44 with catch @ 00ec5da8 */
                        auVar123 = NEON_ext(auVar123,auVar139,8,1);
                        *piVar103 = (int)((ulong)((long)iVar126 * 0x5a827999) >> 0x20);
                        piVar103[1] = (int)((ulong)((long)iVar130 * 0x5a827999) >> 0x20);
                        piVar103[2] = (int)((ulong)((long)iVar127 * 0x5a827999) >> 0x20);
                        piVar103[3] = (int)((ulong)((long)iVar131 * 0x5a827999) >> 0x20);
                        piVar103[4] = (int)((ulong)((long)auVar140._0_4_ * 0x5a827999) >> 0x20);
                        piVar103[5] = (int)((ulong)((long)auVar142._0_4_ * 0x5a827999) >> 0x20);
                        piVar103[6] = (int)((ulong)((long)auVar140._4_4_ * 0x5a827999) >> 0x20);
                        piVar103[7] = (int)((ulong)((long)auVar142._4_4_ * 0x5a827999) >> 0x20);
                        piVar103 = piVar103 + 8;
                        *piVar104 = (int)((ulong)((long)iVar134 * 0x5a827999) >> 0x20);
                        piVar104[1] = (int)((ulong)((long)iVar121 * 0x5a827999) >> 0x20);
                        piVar104[2] = (int)((ulong)((long)iVar137 * 0x5a827999) >> 0x20);
                        piVar104[3] = (int)((ulong)((long)iVar122 * 0x5a827999) >> 0x20);
                        piVar104[4] = (int)((ulong)((long)auVar141._0_4_ * 0x5a827999) >> 0x20);
                        piVar104[5] = (int)((ulong)((long)auVar123._0_4_ * 0x5a827999) >> 0x20);
                        piVar104[6] = (int)((ulong)((long)auVar141._4_4_ * 0x5a827999) >> 0x20);
                        piVar104[7] = (int)((ulong)((long)auVar123._4_4_ * 0x5a827999) >> 0x20);
                        piVar104 = piVar104 + 8;
                      } while (uVar115 != 0);
                      piVar104 = piVar105;
                      piVar103 = piVar100;
                      if (uVar111 == uVar118) goto LAB_00ec5e84;
                    }
                    do {
                      iVar121 = *piVar103;
                      iVar122 = *piVar104;
                      iVar120 = iVar120 + -1;
                      *piVar103 = (int)((ulong)((long)(iVar122 * 2 + iVar121 * 2) * 0x5a827999) >>
                                       0x20);
                      *piVar104 = (int)((ulong)((long)(iVar121 * 2 + iVar122 * -2) * 0x5a827999) >>
                                       0x20);
                      iVar121 = piVar103[1];
                      iVar122 = piVar104[1];
                      piVar100 = piVar103 + 2;
                      piVar105 = piVar104 + 2;
                      piVar103[1] = (int)((ulong)((long)(iVar122 * 2 + iVar121 * 2) * 0x5a827999) >>
                                         0x20);
                      piVar104[1] = (int)((ulong)((long)(iVar121 * 2 + iVar122 * -2) * 0x5a827999)
                                         >> 0x20);
                      piVar104 = piVar105;
                      piVar103 = piVar100;
                    } while (iVar120 != 0);
                  }
LAB_00ec5e84:
                  if ((uVar107 & 1) != 0) {
                    iVar120 = *piVar100;
                    iVar121 = *piVar105;
                    *piVar100 = (int)((ulong)((long)(iVar121 * 2 + iVar120 * 2) * 0x5a827999) >>
                                     0x20);
                    *piVar105 = (int)((ulong)((long)(iVar120 * 2 + iVar121 * -2) * 0x5a827999) >>
                                     0x20);
                  }
                }
                bVar99 = uVar117 < uVar110;
                uVar117 = uVar117 + 1;
                sVar6 = sVar4;
              } while (bVar99);
            }
            if (uVar110 < 0xc) {
              uVar117 = (ulong)(uVar110 + 1);
              sVar6 = *(short *)(mp3_sfBandIndex + lVar113 * 0x4a + uVar117 * 2 + 0x2e);
              do {
                lVar114 = uVar117 * 4;
                uVar117 = uVar117 + 1;
                sVar4 = *(short *)(mp3_sfBandIndex + lVar113 * 0x4a + uVar117 * 2 + 0x2e);
                uVar110 = *(uint *)(param_3 + lVar116 * 0x34 + lVar114 + 0x5c);
                uVar108 = (int)sVar4 - (int)sVar6;
                lVar114 = (long)sVar6 + (long)sVar6 * 2;
                uVar111 = lVar114 + (int)(uVar108 * iVar119);
                iVar120 = (int)uVar108 >> 1;
                iVar121 = (int)lVar114;
                if (uVar110 == 7) {
                  if ((uVar3 >> 1 & 1) != 0) {
                    piVar100 = param_1 + uVar111;
                    piVar105 = param_2 + uVar111;
                    if (iVar120 != 0) {
                      uVar115 = (ulong)(iVar120 - 1) + 1;
                      piVar104 = piVar105;
                      piVar103 = piVar100;
                      if ((3 < uVar115) &&
                         ((lVar114 = uVar111 + (ulong)(iVar120 - 1) * 2,
                          param_2 + lVar114 + 2 <= piVar100 || (param_1 + lVar114 + 2 <= piVar105)))
                         ) {
                        uVar118 = uVar115 & 0x1fffffffc;
                        uVar110 = iVar121 + iVar119 * uVar108;
                        uVar111 = -(ulong)(uVar110 >> 0x1f) & 0xfffffffc00000000 |
                                  (ulong)uVar110 << 2;
                        iVar120 = iVar120 - (int)uVar118;
                        piVar100 = piVar100 + uVar118 * 2;
                        piVar105 = piVar105 + uVar118 * 2;
                        piVar104 = (int *)((long)param_2 + uVar111);
                        piVar103 = (int *)((long)param_1 + uVar111);
                        uVar111 = uVar118;
                        do {
                    /* try { // try from 00ec5fa0 to 00fc601b has its CatchHandler @ 00ec5fa0
                       catch(type#1 @ 00000000) { ... } // from try @ 00ec5fa0 with catch @ 00ec5fa0
                       catch(type#1 @ 00000000) { ... } // from try @ 00ec6020 with catch @ 00ec5fa0
                        */
                          uVar111 = uVar111 - 4;
                          iVar126 = *piVar104 * 2 + *piVar103 * 2;
                          iVar127 = piVar104[2] * 2 + piVar103[2] * 2;
                          iVar128 = piVar104[4] * 2 + piVar103[4] * 2;
                          iVar129 = piVar104[6] * 2 + piVar103[6] * 2;
                          iVar130 = piVar104[1] * 2 + piVar103[1] * 2;
                          iVar131 = piVar104[3] * 2 + piVar103[3] * 2;
                          iVar132 = piVar104[5] * 2 + piVar103[5] * 2;
                          iVar133 = piVar104[7] * 2 + piVar103[7] * 2;
                          iVar134 = *piVar103 * 2 + *piVar104 * -2;
                          iVar137 = piVar103[2] * 2 + piVar104[2] * -2;
                          iVar135 = piVar103[4] * 2 + piVar104[4] * -2;
                          iVar138 = piVar103[6] * 2 + piVar104[6] * -2;
                          iVar121 = piVar103[1] * 2 + piVar104[1] * -2;
                          iVar122 = piVar103[3] * 2 + piVar104[3] * -2;
                          iVar124 = piVar103[5] * 2 + piVar104[5] * -2;
                          iVar125 = piVar103[7] * 2 + piVar104[7] * -2;
                          auVar38._4_4_ = iVar127;
                          auVar38._0_4_ = iVar126;
                          auVar38._8_4_ = iVar128;
                          auVar38._12_4_ = iVar129;
                          auVar39._4_4_ = iVar127;
                          auVar39._0_4_ = iVar126;
                          auVar39._8_4_ = iVar128;
                          auVar39._12_4_ = iVar129;
                          auVar123 = NEON_ext(auVar38,auVar39,8,1);
                          auVar60._4_4_ = iVar131;
                          auVar60._0_4_ = iVar130;
                          auVar60._8_4_ = iVar132;
                          auVar60._12_4_ = iVar133;
                          auVar61._4_4_ = iVar131;
                          auVar61._0_4_ = iVar130;
                          auVar61._8_4_ = iVar132;
                          auVar61._12_4_ = iVar133;
                          auVar139 = NEON_ext(auVar60,auVar61,8,1);
                          auVar83._4_4_ = iVar137;
                          auVar83._0_4_ = iVar134;
                          auVar83._8_4_ = iVar135;
                          auVar83._12_4_ = iVar138;
                          auVar84._4_4_ = iVar137;
                          auVar84._0_4_ = iVar134;
                          auVar84._8_4_ = iVar135;
                          auVar84._12_4_ = iVar138;
                          auVar140 = NEON_ext(auVar83,auVar84,8,1);
                          auVar16._4_4_ = iVar122;
                          auVar16._0_4_ = iVar121;
                          auVar16._8_4_ = iVar124;
                          auVar16._12_4_ = iVar125;
                          auVar17._4_4_ = iVar122;
                          auVar17._0_4_ = iVar121;
                          auVar17._8_4_ = iVar124;
                          auVar17._12_4_ = iVar125;
                          auVar142 = NEON_ext(auVar16,auVar17,8,1);
                          *piVar103 = (int)((ulong)((long)iVar126 * 0x5a827999) >> 0x20);
                          piVar103[1] = (int)((ulong)((long)iVar130 * 0x5a827999) >> 0x20);
                          piVar103[2] = (int)((ulong)((long)iVar127 * 0x5a827999) >> 0x20);
                          piVar103[3] = (int)((ulong)((long)iVar131 * 0x5a827999) >> 0x20);
                          piVar103[4] = (int)((ulong)((long)auVar123._0_4_ * 0x5a827999) >> 0x20);
                          piVar103[5] = (int)((ulong)((long)auVar139._0_4_ * 0x5a827999) >> 0x20);
                          piVar103[6] = (int)((ulong)((long)auVar123._4_4_ * 0x5a827999) >> 0x20);
                          piVar103[7] = (int)((ulong)((long)auVar139._4_4_ * 0x5a827999) >> 0x20);
                          piVar103 = piVar103 + 8;
                    /* try { // try from 00ec601c to 00fc601f has its CatchHandler @ 00ec60c4 */
                          *piVar104 = (int)((ulong)((long)iVar134 * 0x5a827999) >> 0x20);
                          piVar104[1] = (int)((ulong)((long)iVar121 * 0x5a827999) >> 0x20);
                          piVar104[2] = (int)((ulong)((long)iVar137 * 0x5a827999) >> 0x20);
                          piVar104[3] = (int)((ulong)((long)iVar122 * 0x5a827999) >> 0x20);
                          piVar104[4] = (int)((ulong)((long)auVar140._0_4_ * 0x5a827999) >> 0x20);
                          piVar104[5] = (int)((ulong)((long)auVar142._0_4_ * 0x5a827999) >> 0x20);
                          piVar104[6] = (int)((ulong)((long)auVar140._4_4_ * 0x5a827999) >> 0x20);
                          piVar104[7] = (int)((ulong)((long)auVar142._4_4_ * 0x5a827999) >> 0x20);
                          piVar104 = piVar104 + 8;
                    /* try { // try from 00ec6020 to 00fc606f has its CatchHandler @ 00ec5fa0 */
                        } while (uVar111 != 0);
                        piVar104 = piVar105;
                        piVar103 = piVar100;
                        if (uVar115 == uVar118) goto LAB_00ec60bc;
                      }
                      do {
                        iVar121 = *piVar103;
                        iVar122 = *piVar104;
                        piVar100 = piVar103 + 2;
                        piVar105 = piVar104 + 2;
                        *piVar103 = (int)((ulong)((long)(iVar122 * 2 + iVar121 * 2) * 0x5a827999) >>
                                         0x20);
                        *piVar104 = (int)((ulong)((long)(iVar121 * 2 + iVar122 * -2) * 0x5a827999)
                                         >> 0x20);
                        iVar121 = piVar103[1];
                    /* try { // try from 00ec6070 to 00fc6073 has its CatchHandler @ 00ec60b0 */
                        iVar122 = piVar104[1];
                        iVar120 = iVar120 + -1;
                        piVar103[1] = (int)((ulong)((long)(iVar122 * 2 + iVar121 * 2) * 0x5a827999)
                                           >> 0x20);
                        piVar104[1] = (int)((ulong)((long)(iVar121 * 2 + iVar122 * -2) * 0x5a827999)
                                           >> 0x20);
                        piVar104 = piVar105;
                        piVar103 = piVar100;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ec6070 with catch @ 00ec60b0
                        */
                      } while (iVar120 != 0);
                    }
LAB_00ec60bc:
                    if ((uVar108 & 1) != 0) {
                      iVar120 = *piVar100;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ec601c with catch @ 00ec60c4
                        */
                      iVar121 = *piVar105;
                      *piVar100 = (int)((ulong)((long)(iVar121 * 2 + iVar120 * 2) * 0x5a827999) >>
                                       0x20);
                      *piVar105 = (int)((ulong)((long)(iVar120 * 2 + iVar121 * -2) * 0x5a827999) >>
                                       0x20);
                    }
                  }
                }
                else {
                  iVar122 = (&DAT_01438708)[(ulong)uVar110 & 7];
                  lVar114 = (long)iVar122;
                  uVar115 = -(uVar111 >> 0x1f & 1) & 0xfffffffc00000000 |
                            (uVar111 & 0xffffffff) << 2;
                  piVar105 = (int *)((long)param_1 + uVar115);
                  piVar100 = (int *)((long)param_2 + uVar115);
                  if (iVar120 != 0) {
                    uVar115 = (ulong)(iVar120 - 1) + 1;
                    piVar104 = piVar105;
                    piVar103 = piVar100;
                    /* try { // try from 00ec613c to 00fc613f has its CatchHandler @ 00ec6180 */
                    if ((3 < uVar115) &&
                       ((lVar102 = (long)(int)uVar111 + (ulong)(iVar120 - 1) * 2,
                        param_1 + lVar102 + 2 <= piVar100 || (param_2 + lVar102 + 2 <= piVar105))))
                    {
                      uVar118 = uVar115 & 0x1fffffffc;
                      uVar110 = iVar121 + iVar119 * uVar108;
                      uVar111 = -(ulong)(uVar110 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar110 << 2
                      ;
                      iVar120 = iVar120 - (int)uVar118;
                      piVar105 = piVar105 + uVar118 * 2;
                      piVar100 = piVar100 + uVar118 * 2;
                      piVar104 = (int *)((long)param_2 + uVar111);
                      piVar103 = (int *)((long)param_1 + uVar111);
                      uVar111 = uVar118;
                      do {
                        iVar134 = piVar103[1];
                        iVar131 = piVar103[2];
                        iVar137 = piVar103[3];
                        iVar132 = piVar103[4];
                        iVar135 = piVar103[5];
                        iVar133 = piVar103[6];
                        iVar138 = piVar103[7];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ec613c with catch @ 00ec6180
                        */
                        uVar111 = uVar111 - 4;
                        lVar102 = (long)iVar122;
                    /* catch() { ... } // from try @ 00ec6214 with catch @ 00ec61e8 */
                        iVar121 = (int)((ulong)((long)iVar122 * (long)(*piVar103 << 1)) >> 0x20);
                        iVar127 = (int)((ulong)(lVar102 * (iVar131 << 1)) >> 0x20);
                        iVar124 = (int)((ulong)((long)iVar122 * (long)(iVar132 << 1)) >> 0x20);
                        iVar128 = (int)((ulong)(lVar102 * (iVar133 << 1)) >> 0x20);
                    /* try { // try from 00ec620c to 00fc6213 has its CatchHandler @ 00ec6284 */
                        iVar125 = (int)((ulong)((long)iVar122 * (long)(iVar134 << 1)) >> 0x20);
                        iVar129 = (int)((ulong)(lVar102 * (iVar137 << 1)) >> 0x20);
                        iVar126 = (int)((ulong)((long)iVar122 * (long)(iVar135 << 1)) >> 0x20);
                        iVar130 = (int)((ulong)(lVar102 * (iVar138 << 1)) >> 0x20);
                    /* try { // try from 00ec6214 to 00fc629f has its CatchHandler @ 00ec61e8 */
                        *piVar104 = *piVar103 - iVar121;
                        piVar104[1] = iVar134 - iVar125;
                        piVar104[2] = iVar131 - iVar127;
                        piVar104[3] = iVar137 - iVar129;
                        piVar104[4] = iVar132 - iVar124;
                        piVar104[5] = iVar135 - iVar126;
                        piVar104[6] = iVar133 - iVar128;
                        piVar104[7] = iVar138 - iVar130;
                        piVar104 = piVar104 + 8;
                        *piVar103 = iVar121;
                        piVar103[1] = iVar125;
                        piVar103[2] = iVar127;
                        piVar103[3] = iVar129;
                        piVar103[4] = iVar124;
                        piVar103[5] = iVar126;
                        piVar103[6] = iVar128;
                        piVar103[7] = iVar130;
                        piVar103 = piVar103 + 8;
                      } while (uVar111 != 0);
                      piVar104 = piVar105;
                      piVar103 = piVar100;
                      if (uVar115 == uVar118) goto LAB_00ec62b8;
                    }
                    do {
                      piVar100 = piVar103 + 2;
                      piVar105 = piVar104 + 2;
                      iVar120 = iVar120 + -1;
                      iVar121 = (int)((ulong)((*piVar104 << 1) * lVar114) >> 0x20);
                      *piVar103 = *piVar104 - iVar121;
                    /* catch() { ... } // from try @ 00ec620c with catch @ 00ec6284 */
                      *piVar104 = iVar121;
                      iVar121 = (int)((ulong)((piVar104[1] << 1) * lVar114) >> 0x20);
                      piVar103[1] = piVar104[1] - iVar121;
                      piVar104[1] = iVar121;
                      piVar104 = piVar105;
                      piVar103 = piVar100;
                    } while (iVar120 != 0);
                  }
LAB_00ec62b8:
                  if ((uVar108 & 1) != 0) {
                    iVar120 = (int)((ulong)((*piVar105 << 1) * lVar114) >> 0x20);
                    *piVar100 = *piVar105 - iVar120;
                    *piVar105 = iVar120;
                  }
                }
                sVar6 = sVar4;
              } while (uVar117 < 0xd);
            }
            lVar116 = lVar116 + 1;
            iVar109 = iVar109 + 1;
          } while (lVar116 != 3);
          if ((uVar3 >> 1 & 1) == 0) {
            return;
          }
          uVar5 = *(ushort *)(mp3_sfBandIndex + lVar113 * 0x4a + 0x10);
          iVar109 = (int)(short)uVar5 >> 1;
          if (iVar109 == 0) {
LAB_00ec6e6c:
            if ((uVar5 & 1) == 0) {
              return;
            }
          }
          else {
            uVar111 = (ulong)(iVar109 - 1);
            uVar117 = uVar111 + 1;
            if ((3 < uVar117) &&
               ((param_2 + uVar111 * 2 + 2 <= param_1 || (param_1 + uVar111 * 2 + 2 <= param_2)))) {
              uVar115 = uVar117 & 0x1fffffffc;
              iVar109 = iVar109 - (int)uVar115;
              piVar106 = param_1 + uVar115 * 2;
              piVar101 = param_2 + uVar115 * 2;
              uVar111 = uVar115;
              do {
                uVar111 = uVar111 - 4;
                iVar124 = *param_2 * 2 + *param_1 * 2;
                iVar125 = param_2[2] * 2 + param_1[2] * 2;
                iVar126 = param_2[4] * 2 + param_1[4] * 2;
                iVar127 = param_2[6] * 2 + param_1[6] * 2;
                iVar128 = param_2[1] * 2 + param_1[1] * 2;
                iVar129 = param_2[3] * 2 + param_1[3] * 2;
                iVar130 = param_2[5] * 2 + param_1[5] * 2;
                iVar131 = param_2[7] * 2 + param_1[7] * 2;
                iVar132 = *param_1 * 2 + *param_2 * -2;
                iVar133 = param_1[2] * 2 + param_2[2] * -2;
                iVar134 = param_1[4] * 2 + param_2[4] * -2;
                iVar137 = param_1[6] * 2 + param_2[6] * -2;
                iVar119 = param_1[1] * 2 + param_2[1] * -2;
                iVar120 = param_1[3] * 2 + param_2[3] * -2;
                iVar121 = param_1[5] * 2 + param_2[5] * -2;
                iVar122 = param_1[7] * 2 + param_2[7] * -2;
                auVar40._4_4_ = iVar125;
                auVar40._0_4_ = iVar124;
                auVar40._8_4_ = iVar126;
                auVar40._12_4_ = iVar127;
                auVar41._4_4_ = iVar125;
                auVar41._0_4_ = iVar124;
                auVar41._8_4_ = iVar126;
                auVar41._12_4_ = iVar127;
                auVar123 = NEON_ext(auVar40,auVar41,8,1);
                auVar62._4_4_ = iVar129;
                auVar62._0_4_ = iVar128;
                auVar62._8_4_ = iVar130;
                auVar62._12_4_ = iVar131;
                auVar63._4_4_ = iVar129;
                auVar63._0_4_ = iVar128;
                auVar63._8_4_ = iVar130;
                auVar63._12_4_ = iVar131;
                auVar139 = NEON_ext(auVar62,auVar63,8,1);
                auVar85._4_4_ = iVar133;
                auVar85._0_4_ = iVar132;
                auVar85._8_4_ = iVar134;
                auVar85._12_4_ = iVar137;
                auVar86._4_4_ = iVar133;
                auVar86._0_4_ = iVar132;
                auVar86._8_4_ = iVar134;
                auVar86._12_4_ = iVar137;
                auVar140 = NEON_ext(auVar85,auVar86,8,1);
                    /* catch() { ... } // from try @ 00ec6fb4 with catch @ 00ec6f24 */
                auVar18._4_4_ = iVar120;
                auVar18._0_4_ = iVar119;
                auVar18._8_4_ = iVar121;
                auVar18._12_4_ = iVar122;
                auVar19._4_4_ = iVar120;
                auVar19._0_4_ = iVar119;
                auVar19._8_4_ = iVar121;
                auVar19._12_4_ = iVar122;
                auVar142 = NEON_ext(auVar18,auVar19,8,1);
                    /* try { // try from 00ec6f48 to 00fc6f4f has its CatchHandler @ 00ec6ff8 */
                *param_1 = (int)((ulong)((long)iVar124 * 0x5a827999) >> 0x20);
                param_1[1] = (int)((ulong)((long)iVar128 * 0x5a827999) >> 0x20);
                param_1[2] = (int)((ulong)((long)iVar125 * 0x5a827999) >> 0x20);
                param_1[3] = (int)((ulong)((long)iVar129 * 0x5a827999) >> 0x20);
                param_1[4] = (int)((ulong)((long)auVar123._0_4_ * 0x5a827999) >> 0x20);
                param_1[5] = (int)((ulong)((long)auVar139._0_4_ * 0x5a827999) >> 0x20);
                param_1[6] = (int)((ulong)((long)auVar123._4_4_ * 0x5a827999) >> 0x20);
                param_1[7] = (int)((ulong)((long)auVar139._4_4_ * 0x5a827999) >> 0x20);
                param_1 = param_1 + 8;
                *param_2 = (int)((ulong)((long)iVar132 * 0x5a827999) >> 0x20);
                param_2[1] = (int)((ulong)((long)iVar119 * 0x5a827999) >> 0x20);
                param_2[2] = (int)((ulong)((long)iVar133 * 0x5a827999) >> 0x20);
                param_2[3] = (int)((ulong)((long)iVar120 * 0x5a827999) >> 0x20);
                param_2[4] = (int)((ulong)((long)auVar140._0_4_ * 0x5a827999) >> 0x20);
                param_2[5] = (int)((ulong)((long)auVar142._0_4_ * 0x5a827999) >> 0x20);
                param_2[6] = (int)((ulong)((long)auVar140._4_4_ * 0x5a827999) >> 0x20);
                param_2[7] = (int)((ulong)((long)auVar142._4_4_ * 0x5a827999) >> 0x20);
                param_2 = param_2 + 8;
              } while (uVar111 != 0);
              param_2 = piVar101;
              param_1 = piVar106;
              if (uVar117 == uVar115) goto LAB_00ec6e6c;
            }
            do {
              iVar119 = *param_1;
              iVar120 = *param_2;
              iVar109 = iVar109 + -1;
              *param_1 = (int)((ulong)((long)(iVar120 * 2 + iVar119 * 2) * 0x5a827999) >> 0x20);
              *param_2 = (int)((ulong)((long)(iVar119 * 2 + iVar120 * -2) * 0x5a827999) >> 0x20);
              iVar119 = param_1[1];
              iVar120 = param_2[1];
              piVar106 = param_1 + 2;
              piVar101 = param_2 + 2;
              param_1[1] = (int)((ulong)((long)(iVar120 * 2 + iVar119 * 2) * 0x5a827999) >> 0x20);
              param_2[1] = (int)((ulong)((long)(iVar119 * 2 + iVar120 * -2) * 0x5a827999) >> 0x20);
              param_2 = piVar101;
              param_1 = piVar106;
            } while (iVar109 != 0);
            if (((int)(short)uVar5 & 1U) == 0) {
              return;
            }
          }
          iVar109 = (int)((ulong)((long)(*piVar101 * 2 + *piVar106 * 2) * 0x5a827999) >> 0x20);
          iVar119 = (int)((ulong)((long)(*piVar106 * 2 + *piVar101 * -2) * 0x5a827999) >> 0x20);
          goto LAB_00ec4a04;
        }
        goto LAB_00ec5978;
      }
      iVar121 = iVar119 + -1;
      bVar1 = iVar119 < 1;
      bVar99 = 0 < iVar119;
      iVar119 = 0x11;
      if (bVar99) {
        iVar119 = iVar121;
      }
      iVar120 = iVar120 - (uint)bVar1;
    } while (-1 < iVar120);
    iVar121 = 0;
LAB_00ec5978:
                    /* catch() { ... } // from try @ 00ec5878 with catch @ 00ec5980 */
    uVar117 = (ulong)(*(short *)(mp3_sfBandIndex + lVar113 * 0x4a + 8) <= iVar121) << 2;
    do {
      uVar111 = uVar117;
      sVar6 = *(short *)(mp3_sfBandIndex + uVar111 * 2 + lVar113 * 0x4a);
      uVar117 = uVar111 + 1;
    } while (sVar6 < iVar121);
                    /* catch() { ... } // from try @ 00ec586c with catch @ 00ec59a0 */
    if ((uVar3 >> 1 & 1) == 0) goto LAB_00ec6630;
    iVar109 = (int)sVar6 >> 1;
                    /* catch() { ... } // from try @ 00ec5830 with catch @ 00ec59bc */
    if (iVar109 != 0) {
      uVar115 = (ulong)(iVar109 - 1);
      uVar117 = uVar115 + 1;
      piVar100 = param_2;
      piVar105 = param_1;
      if ((3 < uVar117) &&
         ((param_2 + uVar115 * 2 + 2 <= param_1 || (param_1 + uVar115 * 2 + 2 <= param_2)))) {
        uVar118 = uVar117 & 0x1fffffffc;
        iVar109 = iVar109 - (int)uVar118;
        piVar106 = param_1 + uVar118 * 2;
        piVar101 = param_2 + uVar118 * 2;
        uVar115 = uVar118;
        piVar100 = param_1;
        piVar105 = param_2;
        do {
          uVar115 = uVar115 - 4;
          iVar124 = *piVar105 * 2 + *piVar100 * 2;
          iVar125 = piVar105[2] * 2 + piVar100[2] * 2;
          iVar126 = piVar105[4] * 2 + piVar100[4] * 2;
          iVar127 = piVar105[6] * 2 + piVar100[6] * 2;
          iVar128 = piVar105[1] * 2 + piVar100[1] * 2;
          iVar129 = piVar105[3] * 2 + piVar100[3] * 2;
          iVar130 = piVar105[5] * 2 + piVar100[5] * 2;
          iVar131 = piVar105[7] * 2 + piVar100[7] * 2;
          iVar132 = *piVar100 * 2 + *piVar105 * -2;
          iVar133 = piVar100[2] * 2 + piVar105[2] * -2;
          iVar134 = piVar100[4] * 2 + piVar105[4] * -2;
          iVar137 = piVar100[6] * 2 + piVar105[6] * -2;
          iVar119 = piVar100[1] * 2 + piVar105[1] * -2;
          iVar120 = piVar100[3] * 2 + piVar105[3] * -2;
          iVar121 = piVar100[5] * 2 + piVar105[5] * -2;
          iVar122 = piVar100[7] * 2 + piVar105[7] * -2;
          auVar36._4_4_ = iVar125;
          auVar36._0_4_ = iVar124;
          auVar36._8_4_ = iVar126;
          auVar36._12_4_ = iVar127;
          auVar37._4_4_ = iVar125;
          auVar37._0_4_ = iVar124;
          auVar37._8_4_ = iVar126;
          auVar37._12_4_ = iVar127;
          auVar123 = NEON_ext(auVar36,auVar37,8,1);
          auVar58._4_4_ = iVar129;
          auVar58._0_4_ = iVar128;
          auVar58._8_4_ = iVar130;
          auVar58._12_4_ = iVar131;
          auVar59._4_4_ = iVar129;
          auVar59._0_4_ = iVar128;
          auVar59._8_4_ = iVar130;
          auVar59._12_4_ = iVar131;
          auVar139 = NEON_ext(auVar58,auVar59,8,1);
          auVar81._4_4_ = iVar133;
          auVar81._0_4_ = iVar132;
          auVar81._8_4_ = iVar134;
          auVar81._12_4_ = iVar137;
          auVar82._4_4_ = iVar133;
          auVar82._0_4_ = iVar132;
          auVar82._8_4_ = iVar134;
          auVar82._12_4_ = iVar137;
          auVar140 = NEON_ext(auVar81,auVar82,8,1);
          auVar14._4_4_ = iVar120;
          auVar14._0_4_ = iVar119;
          auVar14._8_4_ = iVar121;
          auVar14._12_4_ = iVar122;
          auVar15._4_4_ = iVar120;
          auVar15._0_4_ = iVar119;
          auVar15._8_4_ = iVar121;
          auVar15._12_4_ = iVar122;
          auVar142 = NEON_ext(auVar14,auVar15,8,1);
          *piVar100 = (int)((ulong)((long)iVar124 * 0x5a827999) >> 0x20);
          piVar100[1] = (int)((ulong)((long)iVar128 * 0x5a827999) >> 0x20);
          piVar100[2] = (int)((ulong)((long)iVar125 * 0x5a827999) >> 0x20);
          piVar100[3] = (int)((ulong)((long)iVar129 * 0x5a827999) >> 0x20);
          piVar100[4] = (int)((ulong)((long)auVar123._0_4_ * 0x5a827999) >> 0x20);
          piVar100[5] = (int)((ulong)((long)auVar139._0_4_ * 0x5a827999) >> 0x20);
          piVar100[6] = (int)((ulong)((long)auVar123._4_4_ * 0x5a827999) >> 0x20);
          piVar100[7] = (int)((ulong)((long)auVar139._4_4_ * 0x5a827999) >> 0x20);
          piVar100 = piVar100 + 8;
          *piVar105 = (int)((ulong)((long)iVar132 * 0x5a827999) >> 0x20);
          piVar105[1] = (int)((ulong)((long)iVar119 * 0x5a827999) >> 0x20);
          piVar105[2] = (int)((ulong)((long)iVar133 * 0x5a827999) >> 0x20);
          piVar105[3] = (int)((ulong)((long)iVar120 * 0x5a827999) >> 0x20);
          piVar105[4] = (int)((ulong)((long)auVar140._0_4_ * 0x5a827999) >> 0x20);
          piVar105[5] = (int)((ulong)((long)auVar142._0_4_ * 0x5a827999) >> 0x20);
          piVar105[6] = (int)((ulong)((long)auVar140._4_4_ * 0x5a827999) >> 0x20);
          piVar105[7] = (int)((ulong)((long)auVar142._4_4_ * 0x5a827999) >> 0x20);
          piVar105 = piVar105 + 8;
        } while (uVar115 != 0);
        piVar100 = piVar101;
        piVar105 = piVar106;
        if (uVar117 == uVar118) goto LAB_00ec65f4;
      }
      do {
        iVar119 = *piVar105;
        iVar120 = *piVar100;
        iVar109 = iVar109 + -1;
        *piVar105 = (int)((ulong)((long)(iVar120 * 2 + iVar119 * 2) * 0x5a827999) >> 0x20);
        *piVar100 = (int)((ulong)((long)(iVar119 * 2 + iVar120 * -2) * 0x5a827999) >> 0x20);
        iVar119 = piVar105[1];
        iVar120 = piVar100[1];
        piVar106 = piVar105 + 2;
        piVar101 = piVar100 + 2;
        piVar105[1] = (int)((ulong)((long)(iVar120 * 2 + iVar119 * 2) * 0x5a827999) >> 0x20);
        piVar100[1] = (int)((ulong)((long)(iVar119 * 2 + iVar120 * -2) * 0x5a827999) >> 0x20);
        piVar100 = piVar101;
        piVar105 = piVar106;
      } while (iVar109 != 0);
    }
LAB_00ec65f4:
    if (((int)sVar6 & 1U) != 0) {
      iVar109 = *piVar106;
      iVar119 = *piVar101;
      *piVar106 = (int)((ulong)((long)(iVar119 * 2 + iVar109 * 2) * 0x5a827999) >> 0x20);
      *piVar101 = (int)((ulong)((long)(iVar109 * 2 + iVar119 * -2) * 0x5a827999) >> 0x20);
    }
LAB_00ec6630:
    if ((uint)uVar111 < 8) {
      uVar117 = uVar111 & 0xffffffff;
      uVar5 = *(ushort *)(mp3_sfBandIndex + (uVar111 & 0xffffffff) * 2 + lVar113 * 0x4a);
      do {
        uVar111 = uVar117 + 1;
        uVar7 = *(ushort *)(mp3_sfBandIndex + uVar111 * 2 + lVar113 * 0x4a);
        uVar110 = *(uint *)(param_3 + uVar117 * 4);
        uVar108 = (int)(short)uVar7 - (int)(short)uVar5;
        iVar109 = (int)uVar108 >> 1;
        if (uVar110 == 7) {
          if ((uVar3 >> 1 & 1) != 0) {
            uVar117 = -(ulong)(uVar5 >> 0xf) & 0xfffffffffffc0000 | (ulong)uVar5 << 2;
            piVar100 = (int *)((long)param_1 + uVar117);
            piVar105 = (int *)((long)param_2 + uVar117);
            piVar101 = piVar100;
            piVar106 = piVar105;
            if (iVar109 != 0) {
              uVar117 = (ulong)(iVar109 - 1) + 1;
              if ((3 < uVar117) &&
                 ((lVar116 = (long)(short)uVar5 + (ulong)(iVar109 - 1) * 2,
                  param_2 + lVar116 + 2 <= piVar100 || (param_1 + lVar116 + 2 <= piVar105)))) {
                uVar118 = uVar117 & 0x1fffffffc;
                piVar101 = piVar100 + uVar118 * 2;
                piVar106 = piVar105 + uVar118 * 2;
                iVar109 = iVar109 - (int)uVar118;
                uVar115 = uVar118;
                do {
                  uVar115 = uVar115 - 4;
                  iVar124 = *piVar105 * 2 + *piVar100 * 2;
                  iVar125 = piVar105[2] * 2 + piVar100[2] * 2;
                  iVar126 = piVar105[4] * 2 + piVar100[4] * 2;
                  iVar127 = piVar105[6] * 2 + piVar100[6] * 2;
                  iVar128 = piVar105[1] * 2 + piVar100[1] * 2;
                  iVar129 = piVar105[3] * 2 + piVar100[3] * 2;
                  iVar130 = piVar105[5] * 2 + piVar100[5] * 2;
                  iVar131 = piVar105[7] * 2 + piVar100[7] * 2;
                  iVar132 = *piVar100 * 2 + *piVar105 * -2;
                  iVar133 = piVar100[2] * 2 + piVar105[2] * -2;
                  iVar134 = piVar100[4] * 2 + piVar105[4] * -2;
                  iVar137 = piVar100[6] * 2 + piVar105[6] * -2;
                  iVar119 = piVar100[1] * 2 + piVar105[1] * -2;
                  iVar120 = piVar100[3] * 2 + piVar105[3] * -2;
                  iVar121 = piVar100[5] * 2 + piVar105[5] * -2;
                  iVar122 = piVar100[7] * 2 + piVar105[7] * -2;
                  auVar34._4_4_ = iVar125;
                  auVar34._0_4_ = iVar124;
                  auVar34._8_4_ = iVar126;
                  auVar34._12_4_ = iVar127;
                  auVar35._4_4_ = iVar125;
                  auVar35._0_4_ = iVar124;
                  auVar35._8_4_ = iVar126;
                  auVar35._12_4_ = iVar127;
                  auVar123 = NEON_ext(auVar34,auVar35,8,1);
                  auVar56._4_4_ = iVar129;
                  auVar56._0_4_ = iVar128;
                  auVar56._8_4_ = iVar130;
                  auVar56._12_4_ = iVar131;
                  auVar57._4_4_ = iVar129;
                  auVar57._0_4_ = iVar128;
                  auVar57._8_4_ = iVar130;
                  auVar57._12_4_ = iVar131;
                  auVar139 = NEON_ext(auVar56,auVar57,8,1);
                  auVar79._4_4_ = iVar133;
                  auVar79._0_4_ = iVar132;
                  auVar79._8_4_ = iVar134;
                  auVar79._12_4_ = iVar137;
                  auVar80._4_4_ = iVar133;
                  auVar80._0_4_ = iVar132;
                  auVar80._8_4_ = iVar134;
                  auVar80._12_4_ = iVar137;
                  auVar140 = NEON_ext(auVar79,auVar80,8,1);
                  auVar12._4_4_ = iVar120;
                  auVar12._0_4_ = iVar119;
                  auVar12._8_4_ = iVar121;
                  auVar12._12_4_ = iVar122;
                  auVar13._4_4_ = iVar120;
                  auVar13._0_4_ = iVar119;
                  auVar13._8_4_ = iVar121;
                  auVar13._12_4_ = iVar122;
                  auVar142 = NEON_ext(auVar12,auVar13,8,1);
                  *piVar100 = (int)((ulong)((long)iVar124 * 0x5a827999) >> 0x20);
                  piVar100[1] = (int)((ulong)((long)iVar128 * 0x5a827999) >> 0x20);
                  piVar100[2] = (int)((ulong)((long)iVar125 * 0x5a827999) >> 0x20);
                  piVar100[3] = (int)((ulong)((long)iVar129 * 0x5a827999) >> 0x20);
                  piVar100[4] = (int)((ulong)((long)auVar123._0_4_ * 0x5a827999) >> 0x20);
                  piVar100[5] = (int)((ulong)((long)auVar139._0_4_ * 0x5a827999) >> 0x20);
                  piVar100[6] = (int)((ulong)((long)auVar123._4_4_ * 0x5a827999) >> 0x20);
                  piVar100[7] = (int)((ulong)((long)auVar139._4_4_ * 0x5a827999) >> 0x20);
                  piVar100 = piVar100 + 8;
                  *piVar105 = (int)((ulong)((long)iVar132 * 0x5a827999) >> 0x20);
                  piVar105[1] = (int)((ulong)((long)iVar119 * 0x5a827999) >> 0x20);
                  piVar105[2] = (int)((ulong)((long)iVar133 * 0x5a827999) >> 0x20);
                  piVar105[3] = (int)((ulong)((long)iVar120 * 0x5a827999) >> 0x20);
                  piVar105[4] = (int)((ulong)((long)auVar140._0_4_ * 0x5a827999) >> 0x20);
                  piVar105[5] = (int)((ulong)((long)auVar142._0_4_ * 0x5a827999) >> 0x20);
                  piVar105[6] = (int)((ulong)((long)auVar140._4_4_ * 0x5a827999) >> 0x20);
                  piVar105[7] = (int)((ulong)((long)auVar142._4_4_ * 0x5a827999) >> 0x20);
                  piVar105 = piVar105 + 8;
                } while (uVar115 != 0);
                piVar100 = piVar101;
                piVar105 = piVar106;
                if (uVar117 == uVar118) goto LAB_00ec6784;
              }
              do {
                iVar119 = *piVar100;
                iVar120 = *piVar105;
                piVar106 = piVar105 + 2;
                iVar109 = iVar109 + -1;
                *piVar100 = (int)((ulong)((long)(iVar120 * 2 + iVar119 * 2) * 0x5a827999) >> 0x20);
                *piVar105 = (int)((ulong)((long)(iVar119 * 2 + iVar120 * -2) * 0x5a827999) >> 0x20);
                iVar119 = piVar100[1];
                iVar120 = piVar105[1];
                piVar101 = piVar100 + 2;
                piVar100[1] = (int)((ulong)((long)(iVar120 * 2 + iVar119 * 2) * 0x5a827999) >> 0x20)
                ;
                piVar105[1] = (int)((ulong)((long)(iVar119 * 2 + iVar120 * -2) * 0x5a827999) >> 0x20
                                   );
                piVar100 = piVar101;
                piVar105 = piVar106;
              } while (iVar109 != 0);
            }
LAB_00ec6784:
            if ((uVar108 & 1) != 0) {
              iVar109 = *piVar101;
              iVar119 = *piVar106;
              *piVar101 = (int)((ulong)((long)(iVar119 * 2 + iVar109 * 2) * 0x5a827999) >> 0x20);
              *piVar106 = (int)((ulong)((long)(iVar109 * 2 + iVar119 * -2) * 0x5a827999) >> 0x20);
            }
          }
        }
        else {
          iVar119 = (&DAT_01438708)[(ulong)uVar110 & 7];
          lVar116 = (long)iVar119;
          uVar117 = -(ulong)(uVar5 >> 0xf) & 0xfffffffffffc0000 | (ulong)uVar5 << 2;
          piVar100 = (int *)((long)param_1 + uVar117);
          piVar105 = (int *)((long)param_2 + uVar117);
          piVar101 = piVar100;
          piVar106 = piVar105;
          if (iVar109 != 0) {
            uVar117 = (ulong)(iVar109 - 1) + 1;
            if ((3 < uVar117) &&
               ((lVar114 = (long)(short)uVar5 + (ulong)(iVar109 - 1) * 2,
                param_1 + lVar114 + 2 <= piVar105 || (param_2 + lVar114 + 2 <= piVar100)))) {
              uVar118 = uVar117 & 0x1fffffffc;
              iVar109 = iVar109 - (int)uVar118;
              piVar101 = piVar100 + uVar118 * 2;
              piVar106 = piVar105 + uVar118 * 2;
              uVar115 = uVar118;
              do {
                iVar132 = piVar100[1];
                iVar129 = piVar100[2];
                iVar133 = piVar100[3];
                iVar130 = piVar100[4];
                iVar134 = piVar100[5];
                iVar131 = piVar100[6];
                iVar137 = piVar100[7];
                uVar115 = uVar115 - 4;
                    /* catch() { ... } // from try @ 00ec6898 with catch @ 00ec690c */
                lVar114 = (long)iVar119;
                iVar120 = (int)((ulong)((long)iVar119 * (long)(*piVar100 << 1)) >> 0x20);
                iVar125 = (int)((ulong)(lVar114 * (iVar129 << 1)) >> 0x20);
                iVar121 = (int)((ulong)((long)iVar119 * (long)(iVar130 << 1)) >> 0x20);
                iVar126 = (int)((ulong)(lVar114 * (iVar131 << 1)) >> 0x20);
                iVar122 = (int)((ulong)((long)iVar119 * (long)(iVar132 << 1)) >> 0x20);
                iVar127 = (int)((ulong)(lVar114 * (iVar133 << 1)) >> 0x20);
                iVar124 = (int)((ulong)((long)iVar119 * (long)(iVar134 << 1)) >> 0x20);
                iVar128 = (int)((ulong)(lVar114 * (iVar137 << 1)) >> 0x20);
                *piVar105 = *piVar100 - iVar120;
                piVar105[1] = iVar132 - iVar122;
                piVar105[2] = iVar129 - iVar125;
                piVar105[3] = iVar133 - iVar127;
                piVar105[4] = iVar130 - iVar121;
                piVar105[5] = iVar134 - iVar124;
                piVar105[6] = iVar131 - iVar126;
                piVar105[7] = iVar137 - iVar128;
                piVar105 = piVar105 + 8;
                *piVar100 = iVar120;
                piVar100[1] = iVar122;
                piVar100[2] = iVar125;
                piVar100[3] = iVar127;
                piVar100[4] = iVar121;
                piVar100[5] = iVar124;
                piVar100[6] = iVar126;
                piVar100[7] = iVar128;
                piVar100 = piVar100 + 8;
              } while (uVar115 != 0);
              piVar100 = piVar101;
              piVar105 = piVar106;
              if (uVar117 == uVar118) goto joined_r0x00ec6888;
            }
            do {
              piVar106 = piVar105 + 2;
              piVar101 = piVar100 + 2;
              iVar109 = iVar109 + -1;
              iVar119 = (int)((ulong)((*piVar100 << 1) * lVar116) >> 0x20);
              *piVar105 = *piVar100 - iVar119;
              *piVar100 = iVar119;
              iVar119 = (int)((ulong)((piVar100[1] << 1) * lVar116) >> 0x20);
              piVar105[1] = piVar100[1] - iVar119;
              piVar100[1] = iVar119;
              piVar100 = piVar101;
              piVar105 = piVar106;
            } while (iVar109 != 0);
          }
joined_r0x00ec6888:
          if ((uVar108 & 1) != 0) {
                    /* try { // try from 00ec6898 to 00fc689f has its CatchHandler @ 00ec690c */
            iVar109 = (int)((ulong)((*piVar101 << 1) * lVar116) >> 0x20);
                    /* try { // try from 00ec68a0 to 00fc6927 has its CatchHandler @ 00ec6874 */
            *piVar106 = *piVar101 - iVar109;
            *piVar101 = iVar109;
          }
        }
        uVar117 = uVar111;
        uVar5 = uVar7;
      } while (uVar111 != 8);
    }
    lVar116 = 0;
    lVar113 = lVar113 * 0x4a + 0x1435d30;
    do {
      lVar114 = 3;
      do {
        sVar6 = *(short *)(lVar113 + lVar114 * 2);
        lVar102 = lVar114 * 4;
        lVar114 = lVar114 + 1;
        uVar110 = *(uint *)(param_3 + lVar116 * 0x34 + lVar102 + 0x5c);
        lVar102 = (long)sVar6 * 3;
        uVar108 = (int)*(short *)(lVar113 + lVar114 * 2) - (int)sVar6;
        iVar119 = (int)lVar116;
        uVar117 = lVar102 + (int)(uVar108 * iVar119);
        iVar109 = (int)uVar108 >> 1;
        iVar120 = (int)lVar102;
        if (uVar110 == 7) {
          if ((uVar3 >> 1 & 1) != 0) {
            piVar106 = param_1 + uVar117;
            piVar101 = param_2 + uVar117;
            if (iVar109 != 0) {
              uVar111 = (ulong)(iVar109 - 1) + 1;
              piVar100 = piVar101;
              piVar105 = piVar106;
              if ((3 < uVar111) &&
                 ((lVar102 = uVar117 + (ulong)(iVar109 - 1) * 2, param_2 + lVar102 + 2 <= piVar106
                  || (param_1 + lVar102 + 2 <= piVar101)))) {
                uVar115 = uVar111 & 0x1fffffffc;
                uVar110 = iVar120 + iVar119 * uVar108;
                uVar117 = -(ulong)(uVar110 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar110 << 2;
                iVar109 = iVar109 - (int)uVar115;
                piVar106 = piVar106 + uVar115 * 2;
                piVar101 = piVar101 + uVar115 * 2;
                piVar100 = (int *)((long)param_2 + uVar117);
                piVar105 = (int *)((long)param_1 + uVar117);
                uVar117 = uVar115;
                do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ec6bb0 with catch @ 00ec6b40
                       catch(type#1 @ 00000000) { ... } // from try @ 00ec6be0 with catch @ 00ec6b40
                       catch(type#1 @ 00000000) { ... } // from try @ 00ec6c10 with catch @ 00ec6b40
                       catch(type#1 @ 00000000) { ... } // from try @ 00ec6c38 with catch @ 00ec6b40
                       catch(type#1 @ 00000000) { ... } // from try @ 00ec6c64 with catch @ 00ec6b40
                        */
                  uVar117 = uVar117 - 4;
                  iVar124 = *piVar100 * 2 + *piVar105 * 2;
                  iVar125 = piVar100[2] * 2 + piVar105[2] * 2;
                  iVar126 = piVar100[4] * 2 + piVar105[4] * 2;
                  iVar127 = piVar100[6] * 2 + piVar105[6] * 2;
                  iVar128 = piVar100[1] * 2 + piVar105[1] * 2;
                  iVar129 = piVar100[3] * 2 + piVar105[3] * 2;
                  iVar130 = piVar100[5] * 2 + piVar105[5] * 2;
                  iVar131 = piVar100[7] * 2 + piVar105[7] * 2;
                  iVar132 = *piVar105 * 2 + *piVar100 * -2;
                  iVar133 = piVar105[2] * 2 + piVar100[2] * -2;
                  iVar134 = piVar105[4] * 2 + piVar100[4] * -2;
                  iVar137 = piVar105[6] * 2 + piVar100[6] * -2;
                  iVar119 = piVar105[1] * 2 + piVar100[1] * -2;
                  iVar120 = piVar105[3] * 2 + piVar100[3] * -2;
                  iVar121 = piVar105[5] * 2 + piVar100[5] * -2;
                  iVar122 = piVar105[7] * 2 + piVar100[7] * -2;
                  auVar32._4_4_ = iVar125;
                  auVar32._0_4_ = iVar124;
                  auVar32._8_4_ = iVar126;
                  auVar32._12_4_ = iVar127;
                  auVar33._4_4_ = iVar125;
                  auVar33._0_4_ = iVar124;
                  auVar33._8_4_ = iVar126;
                  auVar33._12_4_ = iVar127;
                  auVar123 = NEON_ext(auVar32,auVar33,8,1);
                  auVar54._4_4_ = iVar129;
                  auVar54._0_4_ = iVar128;
                  auVar54._8_4_ = iVar130;
                  auVar54._12_4_ = iVar131;
                  auVar55._4_4_ = iVar129;
                  auVar55._0_4_ = iVar128;
                  auVar55._8_4_ = iVar130;
                  auVar55._12_4_ = iVar131;
                  auVar139 = NEON_ext(auVar54,auVar55,8,1);
                  auVar77._4_4_ = iVar133;
                  auVar77._0_4_ = iVar132;
                  auVar77._8_4_ = iVar134;
                  auVar77._12_4_ = iVar137;
                  auVar78._4_4_ = iVar133;
                  auVar78._0_4_ = iVar132;
                  auVar78._8_4_ = iVar134;
                  auVar78._12_4_ = iVar137;
                  auVar140 = NEON_ext(auVar77,auVar78,8,1);
                  auVar10._4_4_ = iVar120;
                  auVar10._0_4_ = iVar119;
                  auVar10._8_4_ = iVar121;
                  auVar10._12_4_ = iVar122;
                  auVar11._4_4_ = iVar120;
                  auVar11._0_4_ = iVar119;
                  auVar11._8_4_ = iVar121;
                  auVar11._12_4_ = iVar122;
                  auVar142 = NEON_ext(auVar10,auVar11,8,1);
                    /* try { // try from 00ec6ba8 to 00fc6baf has its CatchHandler @ 00ec6ca4 */
                    /* try { // try from 00ec6bb0 to 00fc6bd3 has its CatchHandler @ 00ec6b40 */
                  *piVar105 = (int)((ulong)((long)iVar124 * 0x5a827999) >> 0x20);
                  piVar105[1] = (int)((ulong)((long)iVar128 * 0x5a827999) >> 0x20);
                  piVar105[2] = (int)((ulong)((long)iVar125 * 0x5a827999) >> 0x20);
                  piVar105[3] = (int)((ulong)((long)iVar129 * 0x5a827999) >> 0x20);
                  piVar105[4] = (int)((ulong)((long)auVar123._0_4_ * 0x5a827999) >> 0x20);
                  piVar105[5] = (int)((ulong)((long)auVar139._0_4_ * 0x5a827999) >> 0x20);
                  piVar105[6] = (int)((ulong)((long)auVar123._4_4_ * 0x5a827999) >> 0x20);
                  piVar105[7] = (int)((ulong)((long)auVar139._4_4_ * 0x5a827999) >> 0x20);
                  piVar105 = piVar105 + 8;
                  *piVar100 = (int)((ulong)((long)iVar132 * 0x5a827999) >> 0x20);
                  piVar100[1] = (int)((ulong)((long)iVar119 * 0x5a827999) >> 0x20);
                  piVar100[2] = (int)((ulong)((long)iVar133 * 0x5a827999) >> 0x20);
                  piVar100[3] = (int)((ulong)((long)iVar120 * 0x5a827999) >> 0x20);
                  piVar100[4] = (int)((ulong)((long)auVar140._0_4_ * 0x5a827999) >> 0x20);
                  piVar100[5] = (int)((ulong)((long)auVar142._0_4_ * 0x5a827999) >> 0x20);
                  piVar100[6] = (int)((ulong)((long)auVar140._4_4_ * 0x5a827999) >> 0x20);
                  piVar100[7] = (int)((ulong)((long)auVar142._4_4_ * 0x5a827999) >> 0x20);
                  piVar100 = piVar100 + 8;
                } while (uVar117 != 0);
                piVar100 = piVar101;
                piVar105 = piVar106;
                if (uVar111 == uVar115) goto LAB_00ec6c58;
              }
              do {
                iVar119 = *piVar105;
                iVar120 = *piVar100;
                iVar109 = iVar109 + -1;
                    /* try { // try from 00ec6bd4 to 00fc6bdf has its CatchHandler @ 00ec6ca4 */
                    /* try { // try from 00ec6be0 to 00fc6c07 has its CatchHandler @ 00ec6b40 */
                *piVar105 = (int)((ulong)((long)(iVar120 * 2 + iVar119 * 2) * 0x5a827999) >> 0x20);
                *piVar100 = (int)((ulong)((long)(iVar119 * 2 + iVar120 * -2) * 0x5a827999) >> 0x20);
                iVar119 = piVar105[1];
                    /* try { // try from 00ec6c08 to 00fc6c0f has its CatchHandler @ 00ec6ca0 */
                iVar120 = piVar100[1];
                piVar106 = piVar105 + 2;
                    /* try { // try from 00ec6c10 to 00fc6c2f has its CatchHandler @ 00ec6b40 */
                    /* try { // try from 00ec6c30 to 00fc6c37 has its CatchHandler @ 00ec6ca0 */
                piVar101 = piVar100 + 2;
                    /* try { // try from 00ec6c38 to 00fc6c57 has its CatchHandler @ 00ec6b40 */
                piVar105[1] = (int)((ulong)((long)(iVar120 * 2 + iVar119 * 2) * 0x5a827999) >> 0x20)
                ;
                piVar100[1] = (int)((ulong)((long)(iVar119 * 2 + iVar120 * -2) * 0x5a827999) >> 0x20
                                   );
                piVar100 = piVar101;
                piVar105 = piVar106;
              } while (iVar109 != 0);
            }
LAB_00ec6c58:
                    /* try { // try from 00ec6c58 to 00fc6c63 has its CatchHandler @ 00ec6ca0 */
            if ((uVar108 & 1) != 0) {
              iVar109 = *piVar106;
              iVar119 = *piVar101;
                    /* try { // try from 00ec6c64 to 00fc6ca7 has its CatchHandler @ 00ec6b40 */
              *piVar106 = (int)((ulong)((long)(iVar119 * 2 + iVar109 * 2) * 0x5a827999) >> 0x20);
              *piVar101 = (int)((ulong)((long)(iVar109 * 2 + iVar119 * -2) * 0x5a827999) >> 0x20);
            }
          }
        }
        else {
          iVar121 = (&DAT_01438708)[(ulong)uVar110 & 7];
          lVar102 = (long)iVar121;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ec6c08 with catch @ 00ec6ca0
                       catch(type#1 @ 00000000) { ... } // from try @ 00ec6c30 with catch @ 00ec6ca0
                       catch(type#1 @ 00000000) { ... } // from try @ 00ec6c58 with catch @ 00ec6ca0
                        */
          uVar111 = -(uVar117 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar117 & 0xffffffff) << 2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ec6ba8 with catch @ 00ec6ca4
                       catch(type#1 @ 00000000) { ... } // from try @ 00ec6bd4 with catch @ 00ec6ca4
                        */
          piVar101 = (int *)((long)param_1 + uVar111);
          piVar106 = (int *)((long)param_2 + uVar111);
          if (iVar109 != 0) {
            uVar111 = (ulong)(iVar109 - 1) + 1;
            piVar100 = piVar101;
            piVar105 = piVar106;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ec6d30 with catch @ 00ec6cc0
                       catch(type#1 @ 00000000) { ... } // from try @ 00ec6d60 with catch @ 00ec6cc0
                       catch(type#1 @ 00000000) { ... } // from try @ 00ec6d90 with catch @ 00ec6cc0
                       catch(type#1 @ 00000000) { ... } // from try @ 00ec6db8 with catch @ 00ec6cc0
                       catch(type#1 @ 00000000) { ... } // from try @ 00ec6de4 with catch @ 00ec6cc0
                        */
            if ((3 < uVar111) &&
               ((lVar2 = (long)(int)uVar117 + (ulong)(iVar109 - 1) * 2,
                param_1 + lVar2 + 2 <= piVar106 || (param_2 + lVar2 + 2 <= piVar101)))) {
              uVar115 = uVar111 & 0x1fffffffc;
              uVar110 = iVar120 + iVar119 * uVar108;
              uVar117 = -(ulong)(uVar110 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar110 << 2;
              iVar109 = iVar109 - (int)uVar115;
              piVar101 = piVar101 + uVar115 * 2;
              piVar106 = piVar106 + uVar115 * 2;
              piVar100 = (int *)((long)param_2 + uVar117);
              piVar105 = (int *)((long)param_1 + uVar117);
              uVar117 = uVar115;
              do {
                iVar132 = piVar105[1];
                iVar129 = piVar105[2];
                iVar133 = piVar105[3];
                iVar130 = piVar105[4];
                iVar134 = piVar105[5];
                iVar131 = piVar105[6];
                iVar137 = piVar105[7];
                uVar117 = uVar117 - 4;
                    /* try { // try from 00ec6d28 to 00fc6d2f has its CatchHandler @ 00ec6e24 */
                    /* try { // try from 00ec6d30 to 00fc6d53 has its CatchHandler @ 00ec6cc0 */
                    /* try { // try from 00ec6d54 to 00fc6d5f has its CatchHandler @ 00ec6e24 */
                    /* try { // try from 00ec6d60 to 00fc6d87 has its CatchHandler @ 00ec6cc0 */
                lVar2 = (long)iVar121;
                    /* try { // try from 00ec6d88 to 00fc6d8f has its CatchHandler @ 00ec6e20 */
                iVar119 = (int)((ulong)((long)iVar121 * (long)(*piVar105 << 1)) >> 0x20);
                iVar125 = (int)((ulong)(lVar2 * (iVar129 << 1)) >> 0x20);
                    /* try { // try from 00ec6d90 to 00fc6daf has its CatchHandler @ 00ec6cc0 */
                iVar120 = (int)((ulong)((long)iVar121 * (long)(iVar130 << 1)) >> 0x20);
                iVar126 = (int)((ulong)(lVar2 * (iVar131 << 1)) >> 0x20);
                iVar122 = (int)((ulong)((long)iVar121 * (long)(iVar132 << 1)) >> 0x20);
                iVar127 = (int)((ulong)(lVar2 * (iVar133 << 1)) >> 0x20);
                iVar124 = (int)((ulong)((long)iVar121 * (long)(iVar134 << 1)) >> 0x20);
                iVar128 = (int)((ulong)(lVar2 * (iVar137 << 1)) >> 0x20);
                    /* try { // try from 00ec6db0 to 00fc6db7 has its CatchHandler @ 00ec6e20 */
                *piVar100 = *piVar105 - iVar119;
                piVar100[1] = iVar132 - iVar122;
                piVar100[2] = iVar129 - iVar125;
                piVar100[3] = iVar133 - iVar127;
                piVar100[4] = iVar130 - iVar120;
                piVar100[5] = iVar134 - iVar124;
                piVar100[6] = iVar131 - iVar126;
                piVar100[7] = iVar137 - iVar128;
                piVar100 = piVar100 + 8;
                    /* try { // try from 00ec6db8 to 00fc6dd7 has its CatchHandler @ 00ec6cc0 */
                *piVar105 = iVar119;
                piVar105[1] = iVar122;
                piVar105[2] = iVar125;
                piVar105[3] = iVar127;
                piVar105[4] = iVar120;
                piVar105[5] = iVar124;
                piVar105[6] = iVar126;
                piVar105[7] = iVar128;
                piVar105 = piVar105 + 8;
              } while (uVar117 != 0);
              piVar100 = piVar101;
              piVar105 = piVar106;
                    /* try { // try from 00ec6dd8 to 00fc6de3 has its CatchHandler @ 00ec6e20 */
              if (uVar111 == uVar115) goto LAB_00ec6e3c;
            }
            do {
              iVar109 = iVar109 + -1;
                    /* try { // try from 00ec6de4 to 00fc6e27 has its CatchHandler @ 00ec6cc0 */
              iVar119 = (int)((ulong)((*piVar100 << 1) * lVar102) >> 0x20);
              *piVar105 = *piVar100 - iVar119;
              *piVar100 = iVar119;
              piVar106 = piVar105 + 2;
              iVar119 = (int)((ulong)((piVar100[1] << 1) * lVar102) >> 0x20);
              piVar101 = piVar100 + 2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ec6d88 with catch @ 00ec6e20
                       catch(type#1 @ 00000000) { ... } // from try @ 00ec6db0 with catch @ 00ec6e20
                       catch(type#1 @ 00000000) { ... } // from try @ 00ec6dd8 with catch @ 00ec6e20
                        */
              piVar105[1] = piVar100[1] - iVar119;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ec6d28 with catch @ 00ec6e24
                       catch(type#1 @ 00000000) { ... } // from try @ 00ec6d54 with catch @ 00ec6e24
                        */
              piVar100[1] = iVar119;
              piVar100 = piVar101;
              piVar105 = piVar106;
            } while (iVar109 != 0);
          }
LAB_00ec6e3c:
          if ((uVar108 & 1) != 0) {
            iVar109 = (int)((ulong)((*piVar101 << 1) * lVar102) >> 0x20);
            *piVar106 = *piVar101 - iVar109;
            *piVar101 = iVar109;
          }
        }
      } while (lVar114 != 0xd);
      lVar116 = lVar116 + 1;
      if (lVar116 == 3) {
        return;
      }
    } while( true );
  }
  iVar120 = 0x1f;
  iVar119 = 0x11;
  do {
    iVar121 = iVar119 + iVar120 * 0x12;
    if (param_2[iVar121] != 0) {
      if (iVar121 == 0) {
        iVar119 = 1;
      }
      else {
        if (iVar121 < *(short *)(mp3_sfBandIndex + (long)iVar109 * 0x4a + 0x1c)) {
          lVar113 = 0;
          if (*(short *)(mp3_sfBandIndex + (long)iVar109 * 0x4a + 0xe) <= iVar121) {
            lVar113 = 7;
          }
        }
        else {
          lVar113 = 0xe;
        }
        iVar119 = (int)lVar113 + -1;
        psVar112 = (short *)(mp3_sfBandIndex + lVar113 * 2 + (long)iVar109 * 0x4a);
        do {
          sVar6 = *psVar112;
          iVar119 = iVar119 + 1;
          psVar112 = psVar112 + 1;
        } while (sVar6 <= iVar121);
      }
      goto LAB_00ec5154;
    }
    iVar121 = iVar119 + -1;
    bVar1 = iVar119 < 1;
    bVar99 = 0 < iVar119;
    iVar119 = 0x11;
    if (bVar99) {
      iVar119 = iVar121;
    }
    iVar120 = iVar120 - (uint)bVar1;
  } while (-1 < iVar120);
  iVar119 = 0;
LAB_00ec5154:
  lVar113 = (long)iVar109;
  if ((uVar3 >> 1 & 1) != 0) {
    sVar6 = *(short *)(mp3_sfBandIndex + (long)iVar119 * 2 + lVar113 * 0x4a);
    iVar109 = (int)sVar6 >> 1;
    if (iVar109 != 0) {
      uVar111 = (ulong)(iVar109 - 1);
      uVar117 = uVar111 + 1;
      piVar100 = param_2;
      piVar105 = param_1;
      if ((3 < uVar117) &&
         ((param_2 + uVar111 * 2 + 2 <= param_1 || (param_1 + uVar111 * 2 + 2 <= param_2)))) {
        uVar115 = uVar117 & 0x1fffffffc;
        iVar109 = iVar109 - (int)uVar115;
        piVar106 = param_1 + uVar115 * 2;
        piVar101 = param_2 + uVar115 * 2;
        uVar111 = uVar115;
        piVar100 = param_1;
        piVar105 = param_2;
        do {
                    /* try { // try from 00ec51f4 to 00fc51fb has its CatchHandler @ 00ec52f0 */
          uVar111 = uVar111 - 4;
                    /* try { // try from 00ec51fc to 00fc521f has its CatchHandler @ 00ec518c */
          iVar125 = *piVar105 * 2 + *piVar100 * 2;
          iVar126 = piVar105[2] * 2 + piVar100[2] * 2;
          iVar127 = piVar105[4] * 2 + piVar100[4] * 2;
          iVar128 = piVar105[6] * 2 + piVar100[6] * 2;
          iVar129 = piVar105[1] * 2 + piVar100[1] * 2;
          iVar130 = piVar105[3] * 2 + piVar100[3] * 2;
          iVar131 = piVar105[5] * 2 + piVar100[5] * 2;
          iVar132 = piVar105[7] * 2 + piVar100[7] * 2;
          iVar133 = *piVar100 * 2 + *piVar105 * -2;
          iVar134 = piVar100[2] * 2 + piVar105[2] * -2;
          iVar137 = piVar100[4] * 2 + piVar105[4] * -2;
          iVar135 = piVar100[6] * 2 + piVar105[6] * -2;
          iVar120 = piVar100[1] * 2 + piVar105[1] * -2;
          iVar121 = piVar100[3] * 2 + piVar105[3] * -2;
          iVar122 = piVar100[5] * 2 + piVar105[5] * -2;
          iVar124 = piVar100[7] * 2 + piVar105[7] * -2;
          auVar50._4_4_ = iVar126;
          auVar50._0_4_ = iVar125;
          auVar50._8_4_ = iVar127;
          auVar50._12_4_ = iVar128;
          auVar51._4_4_ = iVar126;
          auVar51._0_4_ = iVar125;
          auVar51._8_4_ = iVar127;
          auVar51._12_4_ = iVar128;
          auVar123 = NEON_ext(auVar50,auVar51,8,1);
          auVar73._4_4_ = iVar130;
          auVar73._0_4_ = iVar129;
          auVar73._8_4_ = iVar131;
          auVar73._12_4_ = iVar132;
          auVar74._4_4_ = iVar130;
          auVar74._0_4_ = iVar129;
          auVar74._8_4_ = iVar131;
          auVar74._12_4_ = iVar132;
                    /* try { // try from 00ec5220 to 00fc522b has its CatchHandler @ 00ec52f0 */
          auVar139 = NEON_ext(auVar73,auVar74,8,1);
          auVar97._4_4_ = iVar134;
          auVar97._0_4_ = iVar133;
          auVar97._8_4_ = iVar137;
          auVar97._12_4_ = iVar135;
          auVar98._4_4_ = iVar134;
          auVar98._0_4_ = iVar133;
          auVar98._8_4_ = iVar137;
          auVar98._12_4_ = iVar135;
          auVar140 = NEON_ext(auVar97,auVar98,8,1);
                    /* try { // try from 00ec522c to 00fc5253 has its CatchHandler @ 00ec518c */
          auVar28._4_4_ = iVar121;
          auVar28._0_4_ = iVar120;
          auVar28._8_4_ = iVar122;
          auVar28._12_4_ = iVar124;
          auVar29._4_4_ = iVar121;
          auVar29._0_4_ = iVar120;
          auVar29._8_4_ = iVar122;
          auVar29._12_4_ = iVar124;
          auVar142 = NEON_ext(auVar28,auVar29,8,1);
                    /* try { // try from 00ec5254 to 00fc525b has its CatchHandler @ 00ec52ec */
                    /* try { // try from 00ec525c to 00fc527b has its CatchHandler @ 00ec518c */
          *piVar100 = (int)((ulong)((long)iVar125 * 0x5a827999) >> 0x20);
          piVar100[1] = (int)((ulong)((long)iVar129 * 0x5a827999) >> 0x20);
          piVar100[2] = (int)((ulong)((long)iVar126 * 0x5a827999) >> 0x20);
          piVar100[3] = (int)((ulong)((long)iVar130 * 0x5a827999) >> 0x20);
          piVar100[4] = (int)((ulong)((long)auVar123._0_4_ * 0x5a827999) >> 0x20);
          piVar100[5] = (int)((ulong)((long)auVar139._0_4_ * 0x5a827999) >> 0x20);
          piVar100[6] = (int)((ulong)((long)auVar123._4_4_ * 0x5a827999) >> 0x20);
          piVar100[7] = (int)((ulong)((long)auVar139._4_4_ * 0x5a827999) >> 0x20);
          piVar100 = piVar100 + 8;
          *piVar105 = (int)((ulong)((long)iVar133 * 0x5a827999) >> 0x20);
          piVar105[1] = (int)((ulong)((long)iVar120 * 0x5a827999) >> 0x20);
          piVar105[2] = (int)((ulong)((long)iVar134 * 0x5a827999) >> 0x20);
          piVar105[3] = (int)((ulong)((long)iVar121 * 0x5a827999) >> 0x20);
          piVar105[4] = (int)((ulong)((long)auVar140._0_4_ * 0x5a827999) >> 0x20);
          piVar105[5] = (int)((ulong)((long)auVar142._0_4_ * 0x5a827999) >> 0x20);
          piVar105[6] = (int)((ulong)((long)auVar140._4_4_ * 0x5a827999) >> 0x20);
          piVar105[7] = (int)((ulong)((long)auVar142._4_4_ * 0x5a827999) >> 0x20);
          piVar105 = piVar105 + 8;
        } while (uVar111 != 0);
                    /* try { // try from 00ec527c to 00fc5283 has its CatchHandler @ 00ec52ec */
        piVar100 = piVar101;
        piVar105 = piVar106;
        if (uVar117 == uVar115) goto LAB_00ec5314;
      }
      do {
                    /* try { // try from 00ec5284 to 00fc52a3 has its CatchHandler @ 00ec518c */
        iVar120 = *piVar105;
        iVar121 = *piVar100;
        piVar106 = piVar105 + 2;
        piVar101 = piVar100 + 2;
                    /* try { // try from 00ec52a4 to 00fc52af has its CatchHandler @ 00ec52ec */
                    /* try { // try from 00ec52b0 to 00fc52f3 has its CatchHandler @ 00ec518c */
        *piVar105 = (int)((ulong)((long)(iVar121 * 2 + iVar120 * 2) * 0x5a827999) >> 0x20);
        *piVar100 = (int)((ulong)((long)(iVar120 * 2 + iVar121 * -2) * 0x5a827999) >> 0x20);
        iVar120 = piVar105[1];
        iVar121 = piVar100[1];
        iVar109 = iVar109 + -1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ec5254 with catch @ 00ec52ec
                       catch(type#1 @ 00000000) { ... } // from try @ 00ec527c with catch @ 00ec52ec
                       catch(type#1 @ 00000000) { ... } // from try @ 00ec52a4 with catch @ 00ec52ec
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ec51f4 with catch @ 00ec52f0
                       catch(type#1 @ 00000000) { ... } // from try @ 00ec5220 with catch @ 00ec52f0
                        */
                    /* catch() { ... } // from try @ 00ec5320 with catch @ 00ec52f4 */
        piVar105[1] = (int)((ulong)((long)(iVar121 * 2 + iVar120 * 2) * 0x5a827999) >> 0x20);
        piVar100[1] = (int)((ulong)((long)(iVar120 * 2 + iVar121 * -2) * 0x5a827999) >> 0x20);
        piVar100 = piVar101;
        piVar105 = piVar106;
      } while (iVar109 != 0);
    }
LAB_00ec5314:
    if (((int)sVar6 & 1U) != 0) {
                    /* try { // try from 00ec5318 to 00fc531f has its CatchHandler @ 00ec537c */
      iVar109 = *piVar106;
      iVar120 = *piVar101;
                    /* try { // try from 00ec5320 to 00fc5397 has its CatchHandler @ 00ec52f4 */
      *piVar106 = (int)((ulong)((long)(iVar120 * 2 + iVar109 * 2) * 0x5a827999) >> 0x20);
      *piVar101 = (int)((ulong)((long)(iVar109 * 2 + iVar120 * -2) * 0x5a827999) >> 0x20);
    }
  }
  if (iVar119 < 0x15) {
    lVar116 = (long)iVar119;
    uVar5 = *(ushort *)(mp3_sfBandIndex + (long)iVar119 * 2 + lVar113 * 0x4a);
                    /* catch() { ... } // from try @ 00ec5318 with catch @ 00ec537c */
    do {
                    /* catch() { ... } // from try @ 00ec53c4 with catch @ 00ec5398 */
      lVar114 = lVar116 + 1;
      uVar7 = *(ushort *)(mp3_sfBandIndex + lVar114 * 2 + lVar113 * 0x4a);
      uVar110 = *(uint *)(param_3 + lVar116 * 4);
      uVar108 = (int)(short)uVar7 - (int)(short)uVar5;
      iVar109 = (int)uVar108 >> 1;
      if (uVar110 == 7) {
                    /* try { // try from 00ec53bc to 00fc53c3 has its CatchHandler @ 00ec5424 */
        if ((uVar3 >> 1 & 1) != 0) {
          uVar117 = -(ulong)(uVar5 >> 0xf) & 0xfffffffffffc0000 | (ulong)uVar5 << 2;
                    /* try { // try from 00ec53c4 to 00fc543f has its CatchHandler @ 00ec5398 */
          piVar100 = (int *)((long)param_1 + uVar117);
          piVar105 = (int *)((long)param_2 + uVar117);
          piVar106 = piVar100;
          piVar101 = piVar105;
          if (iVar109 != 0) {
            uVar117 = (ulong)(iVar109 - 1) + 1;
            if ((3 < uVar117) &&
               ((lVar116 = (long)(short)uVar5 + (ulong)(iVar109 - 1) * 2,
                param_2 + lVar116 + 2 <= piVar100 || (param_1 + lVar116 + 2 <= piVar105)))) {
              uVar115 = uVar117 & 0x1fffffffc;
              piVar106 = piVar100 + uVar115 * 2;
              piVar101 = piVar105 + uVar115 * 2;
              iVar109 = iVar109 - (int)uVar115;
              uVar111 = uVar115;
              do {
                uVar111 = uVar111 - 4;
                iVar125 = *piVar105 * 2 + *piVar100 * 2;
                iVar126 = piVar105[2] * 2 + piVar100[2] * 2;
                iVar127 = piVar105[4] * 2 + piVar100[4] * 2;
                iVar128 = piVar105[6] * 2 + piVar100[6] * 2;
                iVar129 = piVar105[1] * 2 + piVar100[1] * 2;
                iVar130 = piVar105[3] * 2 + piVar100[3] * 2;
                iVar131 = piVar105[5] * 2 + piVar100[5] * 2;
                iVar132 = piVar105[7] * 2 + piVar100[7] * 2;
                iVar133 = *piVar100 * 2 + *piVar105 * -2;
                iVar134 = piVar100[2] * 2 + piVar105[2] * -2;
                iVar137 = piVar100[4] * 2 + piVar105[4] * -2;
                iVar135 = piVar100[6] * 2 + piVar105[6] * -2;
                iVar120 = piVar100[1] * 2 + piVar105[1] * -2;
                iVar121 = piVar100[3] * 2 + piVar105[3] * -2;
                iVar122 = piVar100[5] * 2 + piVar105[5] * -2;
                iVar124 = piVar100[7] * 2 + piVar105[7] * -2;
                auVar48._4_4_ = iVar126;
                auVar48._0_4_ = iVar125;
                auVar48._8_4_ = iVar127;
                auVar48._12_4_ = iVar128;
                auVar49._4_4_ = iVar126;
                auVar49._0_4_ = iVar125;
                auVar49._8_4_ = iVar127;
                auVar49._12_4_ = iVar128;
                auVar123 = NEON_ext(auVar48,auVar49,8,1);
                auVar71._4_4_ = iVar130;
                auVar71._0_4_ = iVar129;
                auVar71._8_4_ = iVar131;
                auVar71._12_4_ = iVar132;
                auVar72._4_4_ = iVar130;
                auVar72._0_4_ = iVar129;
                auVar72._8_4_ = iVar131;
                auVar72._12_4_ = iVar132;
                    /* catch() { ... } // from try @ 00ec5748 with catch @ 00ec56f8 */
                auVar139 = NEON_ext(auVar71,auVar72,8,1);
                auVar95._4_4_ = iVar134;
                auVar95._0_4_ = iVar133;
                auVar95._8_4_ = iVar137;
                auVar95._12_4_ = iVar135;
                auVar96._4_4_ = iVar134;
                auVar96._0_4_ = iVar133;
                auVar96._8_4_ = iVar137;
                auVar96._12_4_ = iVar135;
                auVar140 = NEON_ext(auVar95,auVar96,8,1);
                auVar26._4_4_ = iVar121;
                auVar26._0_4_ = iVar120;
                auVar26._8_4_ = iVar122;
                auVar26._12_4_ = iVar124;
                auVar27._4_4_ = iVar121;
                auVar27._0_4_ = iVar120;
                auVar27._8_4_ = iVar122;
                auVar27._12_4_ = iVar124;
                auVar142 = NEON_ext(auVar26,auVar27,8,1);
                    /* try { // try from 00ec5740 to 00fc5747 has its CatchHandler @ 00ec57cc */
                *piVar100 = (int)((ulong)((long)iVar125 * 0x5a827999) >> 0x20);
                piVar100[1] = (int)((ulong)((long)iVar129 * 0x5a827999) >> 0x20);
                piVar100[2] = (int)((ulong)((long)iVar126 * 0x5a827999) >> 0x20);
                piVar100[3] = (int)((ulong)((long)iVar130 * 0x5a827999) >> 0x20);
                piVar100[4] = (int)((ulong)((long)auVar123._0_4_ * 0x5a827999) >> 0x20);
                piVar100[5] = (int)((ulong)((long)auVar139._0_4_ * 0x5a827999) >> 0x20);
                piVar100[6] = (int)((ulong)((long)auVar123._4_4_ * 0x5a827999) >> 0x20);
                piVar100[7] = (int)((ulong)((long)auVar139._4_4_ * 0x5a827999) >> 0x20);
                piVar100 = piVar100 + 8;
                *piVar105 = (int)((ulong)((long)iVar133 * 0x5a827999) >> 0x20);
                piVar105[1] = (int)((ulong)((long)iVar120 * 0x5a827999) >> 0x20);
                piVar105[2] = (int)((ulong)((long)iVar134 * 0x5a827999) >> 0x20);
                piVar105[3] = (int)((ulong)((long)iVar121 * 0x5a827999) >> 0x20);
                piVar105[4] = (int)((ulong)((long)auVar140._0_4_ * 0x5a827999) >> 0x20);
                piVar105[5] = (int)((ulong)((long)auVar142._0_4_ * 0x5a827999) >> 0x20);
                piVar105[6] = (int)((ulong)((long)auVar140._4_4_ * 0x5a827999) >> 0x20);
                piVar105[7] = (int)((ulong)((long)auVar142._4_4_ * 0x5a827999) >> 0x20);
                piVar105 = piVar105 + 8;
                    /* try { // try from 00ec5748 to 00fc57e7 has its CatchHandler @ 00ec56f8 */
              } while (uVar111 != 0);
              piVar100 = piVar106;
              piVar105 = piVar101;
              if (uVar117 == uVar115) goto LAB_00ec549c;
            }
            do {
              iVar120 = *piVar100;
              iVar121 = *piVar105;
              piVar106 = piVar100 + 2;
              piVar101 = piVar105 + 2;
                    /* catch() { ... } // from try @ 00ec53bc with catch @ 00ec5424 */
              *piVar100 = (int)((ulong)((long)(iVar121 * 2 + iVar120 * 2) * 0x5a827999) >> 0x20);
              *piVar105 = (int)((ulong)((long)(iVar120 * 2 + iVar121 * -2) * 0x5a827999) >> 0x20);
              iVar120 = piVar100[1];
              iVar121 = piVar105[1];
              iVar109 = iVar109 + -1;
              piVar100[1] = (int)((ulong)((long)(iVar121 * 2 + iVar120 * 2) * 0x5a827999) >> 0x20);
              piVar105[1] = (int)((ulong)((long)(iVar120 * 2 + iVar121 * -2) * 0x5a827999) >> 0x20);
              piVar100 = piVar106;
              piVar105 = piVar101;
            } while (iVar109 != 0);
          }
LAB_00ec549c:
          if ((uVar108 & 1) != 0) {
            iVar109 = *piVar106;
            iVar120 = *piVar101;
            *piVar106 = (int)((ulong)((long)(iVar120 * 2 + iVar109 * 2) * 0x5a827999) >> 0x20);
            *piVar101 = (int)((ulong)((long)(iVar109 * 2 + iVar120 * -2) * 0x5a827999) >> 0x20);
          }
        }
      }
      else {
        iVar120 = (&DAT_01438708)[(ulong)uVar110 & 7];
        lVar116 = (long)iVar120;
        uVar117 = -(ulong)(uVar5 >> 0xf) & 0xfffffffffffc0000 | (ulong)uVar5 << 2;
        piVar100 = (int *)((long)param_1 + uVar117);
        piVar105 = (int *)((long)param_2 + uVar117);
        piVar101 = piVar100;
        piVar106 = piVar105;
        if (iVar109 != 0) {
          uVar117 = (ulong)(iVar109 - 1) + 1;
          if ((3 < uVar117) &&
             ((lVar102 = (long)(short)uVar5 + (ulong)(iVar109 - 1) * 2,
              param_1 + lVar102 + 2 <= piVar105 || (param_2 + lVar102 + 2 <= piVar100)))) {
            uVar115 = uVar117 & 0x1fffffffc;
            iVar109 = iVar109 - (int)uVar115;
            piVar101 = piVar100 + uVar115 * 2;
            piVar106 = piVar105 + uVar115 * 2;
            uVar111 = uVar115;
            do {
              iVar133 = piVar100[1];
              iVar130 = piVar100[2];
              iVar134 = piVar100[3];
              iVar131 = piVar100[4];
              iVar137 = piVar100[5];
              iVar132 = piVar100[6];
              iVar135 = piVar100[7];
              uVar111 = uVar111 - 4;
              lVar102 = (long)iVar120;
              iVar121 = (int)((ulong)((long)iVar120 * (long)(*piVar100 << 1)) >> 0x20);
              iVar126 = (int)((ulong)(lVar102 * (iVar130 << 1)) >> 0x20);
              iVar122 = (int)((ulong)((long)iVar120 * (long)(iVar131 << 1)) >> 0x20);
              iVar127 = (int)((ulong)(lVar102 * (iVar132 << 1)) >> 0x20);
              iVar124 = (int)((ulong)((long)iVar120 * (long)(iVar133 << 1)) >> 0x20);
              iVar128 = (int)((ulong)(lVar102 * (iVar134 << 1)) >> 0x20);
              iVar125 = (int)((ulong)((long)iVar120 * (long)(iVar137 << 1)) >> 0x20);
              iVar129 = (int)((ulong)(lVar102 * (iVar135 << 1)) >> 0x20);
              *piVar105 = *piVar100 - iVar121;
              piVar105[1] = iVar133 - iVar124;
              piVar105[2] = iVar130 - iVar126;
              piVar105[3] = iVar134 - iVar128;
              piVar105[4] = iVar131 - iVar122;
              piVar105[5] = iVar137 - iVar125;
              piVar105[6] = iVar132 - iVar127;
              piVar105[7] = iVar135 - iVar129;
              piVar105 = piVar105 + 8;
              *piVar100 = iVar121;
              piVar100[1] = iVar124;
              piVar100[2] = iVar126;
              piVar100[3] = iVar128;
              piVar100[4] = iVar122;
              piVar100[5] = iVar125;
              piVar100[6] = iVar127;
              piVar100[7] = iVar129;
              piVar100 = piVar100 + 8;
            } while (uVar111 != 0);
            piVar100 = piVar101;
            piVar105 = piVar106;
            if (uVar117 == uVar115) goto joined_r0x00ec55a0;
          }
          do {
            piVar106 = piVar105 + 2;
            piVar101 = piVar100 + 2;
            iVar109 = iVar109 + -1;
            iVar120 = (int)((ulong)((*piVar100 << 1) * lVar116) >> 0x20);
            *piVar105 = *piVar100 - iVar120;
            *piVar100 = iVar120;
            iVar120 = (int)((ulong)((piVar100[1] << 1) * lVar116) >> 0x20);
            piVar105[1] = piVar100[1] - iVar120;
            piVar100[1] = iVar120;
            piVar100 = piVar101;
            piVar105 = piVar106;
          } while (iVar109 != 0);
        }
joined_r0x00ec55a0:
        if ((uVar108 & 1) != 0) {
          iVar109 = (int)((ulong)((*piVar101 << 1) * lVar116) >> 0x20);
          *piVar106 = *piVar101 - iVar109;
          *piVar101 = iVar109;
        }
      }
      lVar116 = lVar114;
      uVar5 = uVar7;
    } while (lVar114 != 0x15);
  }
  lVar116 = (long)(int)*(short *)(mp3_sfBandIndex + lVar113 * 0x4a + 0x2a);
  uVar110 = (int)*(short *)(mp3_sfBandIndex + lVar113 * 0x4a + 0x2c) -
            (int)*(short *)(mp3_sfBandIndex + lVar113 * 0x4a + 0x2a);
  iVar109 = (int)uVar110 >> 1;
  if (*(int *)(param_3 + 0x54) == 7) {
    if ((uVar3 >> 1 & 1) == 0) {
      return;
    }
    piVar100 = param_1 + lVar116;
    piVar105 = param_2 + lVar116;
    piVar101 = piVar105;
    piVar106 = piVar100;
    if (iVar109 != 0) {
      uVar117 = (ulong)(iVar109 - 1) + 1;
      if ((3 < uVar117) &&
         ((lVar116 = lVar116 + (ulong)(iVar109 - 1) * 2, param_2 + lVar116 + 2 <= piVar100 ||
          (param_1 + lVar116 + 2 <= piVar105)))) {
        uVar115 = uVar117 & 0x1fffffffc;
        iVar109 = iVar109 - (int)uVar115;
        piVar106 = piVar100 + uVar115 * 2;
        piVar101 = piVar105 + uVar115 * 2;
        uVar111 = uVar115;
        do {
          uVar111 = uVar111 - 4;
          iVar124 = *piVar105 * 2 + *piVar100 * 2;
          iVar125 = piVar105[2] * 2 + piVar100[2] * 2;
          iVar126 = piVar105[4] * 2 + piVar100[4] * 2;
          iVar127 = piVar105[6] * 2 + piVar100[6] * 2;
          iVar128 = piVar105[1] * 2 + piVar100[1] * 2;
          iVar129 = piVar105[3] * 2 + piVar100[3] * 2;
          iVar130 = piVar105[5] * 2 + piVar100[5] * 2;
          iVar131 = piVar105[7] * 2 + piVar100[7] * 2;
          iVar132 = *piVar100 * 2 + *piVar105 * -2;
          iVar133 = piVar100[2] * 2 + piVar105[2] * -2;
          iVar134 = piVar100[4] * 2 + piVar105[4] * -2;
          iVar137 = piVar100[6] * 2 + piVar105[6] * -2;
          iVar119 = piVar100[1] * 2 + piVar105[1] * -2;
          iVar120 = piVar100[3] * 2 + piVar105[3] * -2;
          iVar121 = piVar100[5] * 2 + piVar105[5] * -2;
          iVar122 = piVar100[7] * 2 + piVar105[7] * -2;
          auVar46._4_4_ = iVar125;
          auVar46._0_4_ = iVar124;
          auVar46._8_4_ = iVar126;
          auVar46._12_4_ = iVar127;
          auVar47._4_4_ = iVar125;
          auVar47._0_4_ = iVar124;
          auVar47._8_4_ = iVar126;
          auVar47._12_4_ = iVar127;
          auVar123 = NEON_ext(auVar46,auVar47,8,1);
          auVar69._4_4_ = iVar129;
          auVar69._0_4_ = iVar128;
          auVar69._8_4_ = iVar130;
          auVar69._12_4_ = iVar131;
          auVar70._4_4_ = iVar129;
          auVar70._0_4_ = iVar128;
          auVar70._8_4_ = iVar130;
          auVar70._12_4_ = iVar131;
          auVar139 = NEON_ext(auVar69,auVar70,8,1);
          auVar93._4_4_ = iVar133;
          auVar93._0_4_ = iVar132;
          auVar93._8_4_ = iVar134;
          auVar93._12_4_ = iVar137;
          auVar94._4_4_ = iVar133;
          auVar94._0_4_ = iVar132;
          auVar94._8_4_ = iVar134;
          auVar94._12_4_ = iVar137;
          auVar140 = NEON_ext(auVar93,auVar94,8,1);
          auVar24._4_4_ = iVar120;
          auVar24._0_4_ = iVar119;
          auVar24._8_4_ = iVar121;
          auVar24._12_4_ = iVar122;
          auVar25._4_4_ = iVar120;
          auVar25._0_4_ = iVar119;
          auVar25._8_4_ = iVar121;
          auVar25._12_4_ = iVar122;
          auVar142 = NEON_ext(auVar24,auVar25,8,1);
          *piVar100 = (int)((ulong)((long)iVar124 * 0x5a827999) >> 0x20);
          piVar100[1] = (int)((ulong)((long)iVar128 * 0x5a827999) >> 0x20);
          piVar100[2] = (int)((ulong)((long)iVar125 * 0x5a827999) >> 0x20);
          piVar100[3] = (int)((ulong)((long)iVar129 * 0x5a827999) >> 0x20);
          piVar100[4] = (int)((ulong)((long)auVar123._0_4_ * 0x5a827999) >> 0x20);
          piVar100[5] = (int)((ulong)((long)auVar139._0_4_ * 0x5a827999) >> 0x20);
          piVar100[6] = (int)((ulong)((long)auVar123._4_4_ * 0x5a827999) >> 0x20);
          piVar100[7] = (int)((ulong)((long)auVar139._4_4_ * 0x5a827999) >> 0x20);
          piVar100 = piVar100 + 8;
          *piVar105 = (int)((ulong)((long)iVar132 * 0x5a827999) >> 0x20);
          piVar105[1] = (int)((ulong)((long)iVar119 * 0x5a827999) >> 0x20);
          piVar105[2] = (int)((ulong)((long)iVar133 * 0x5a827999) >> 0x20);
          piVar105[3] = (int)((ulong)((long)iVar120 * 0x5a827999) >> 0x20);
          piVar105[4] = (int)((ulong)((long)auVar140._0_4_ * 0x5a827999) >> 0x20);
          piVar105[5] = (int)((ulong)((long)auVar142._0_4_ * 0x5a827999) >> 0x20);
          piVar105[6] = (int)((ulong)((long)auVar140._4_4_ * 0x5a827999) >> 0x20);
          piVar105[7] = (int)((ulong)((long)auVar142._4_4_ * 0x5a827999) >> 0x20);
          piVar105 = piVar105 + 8;
        } while (uVar111 != 0);
        piVar105 = piVar101;
        piVar100 = piVar106;
        if (uVar117 == uVar115) goto joined_r0x00ec5a9c;
      }
      do {
        iVar119 = *piVar100;
        iVar120 = *piVar105;
        iVar109 = iVar109 + -1;
                    /* catch() { ... } // from try @ 00ec5838 with catch @ 00ec57e8
                       catch() { ... } // from try @ 00ec58b0 with catch @ 00ec57e8 */
        *piVar100 = (int)((ulong)((long)(iVar120 * 2 + iVar119 * 2) * 0x5a827999) >> 0x20);
        *piVar105 = (int)((ulong)((long)(iVar119 * 2 + iVar120 * -2) * 0x5a827999) >> 0x20);
        iVar119 = piVar100[1];
        iVar120 = piVar105[1];
        piVar106 = piVar100 + 2;
                    /* try { // try from 00ec5830 to 00fc5837 has its CatchHandler @ 00ec59bc */
                    /* try { // try from 00ec5838 to 00fc586b has its CatchHandler @ 00ec57e8 */
        piVar101 = piVar105 + 2;
        piVar100[1] = (int)((ulong)((long)(iVar120 * 2 + iVar119 * 2) * 0x5a827999) >> 0x20);
        piVar105[1] = (int)((ulong)((long)(iVar119 * 2 + iVar120 * -2) * 0x5a827999) >> 0x20);
        piVar105 = piVar101;
        piVar100 = piVar106;
      } while (iVar109 != 0);
    }
joined_r0x00ec5a9c:
    if ((uVar110 & 1) == 0) {
      return;
    }
    iVar109 = *piVar106;
    iVar119 = *piVar101;
    *piVar106 = (int)((ulong)((long)(iVar119 * 2 + iVar109 * 2) * 0x5a827999) >> 0x20);
    *piVar101 = (int)((ulong)((long)(iVar109 * 2 + iVar119 * -2) * 0x5a827999) >> 0x20);
    return;
  }
                    /* try { // try from 00ec586c to 00fc5877 has its CatchHandler @ 00ec59a0 */
  if (iVar119 < 0x15) {
    uVar117 = (ulong)*(uint *)(param_3 + 0x50) & 7;
                    /* try { // try from 00ec5878 to 00fc5887 has its CatchHandler @ 00ec5980 */
  }
  else {
    uVar117 = 0;
  }
  lVar113 = (long)(int)(&DAT_01438708)[uVar117];
  piVar100 = param_1 + lVar116;
                    /* try { // try from 00ec5890 to 00fc58af has its CatchHandler @ 00ec594c */
  piVar105 = param_2 + lVar116;
  piVar101 = piVar100;
  piVar106 = piVar105;
  if (iVar109 != 0) {
    uVar117 = (ulong)(iVar109 - 1) + 1;
                    /* try { // try from 00ec58b0 to 00fc59d7 has its CatchHandler @ 00ec57e8 */
    if ((3 < uVar117) &&
       ((lVar116 = lVar116 + (ulong)(iVar109 - 1) * 2, param_1 + lVar116 + 2 <= piVar105 ||
        (param_2 + lVar116 + 2 <= piVar100)))) {
      uVar115 = uVar117 & 0x1fffffffc;
      iVar109 = iVar109 - (int)uVar115;
      piVar101 = piVar100 + uVar115 * 2;
      piVar106 = piVar105 + uVar115 * 2;
      uVar111 = uVar115;
      do {
        iVar131 = piVar100[1];
        iVar128 = piVar100[2];
        iVar132 = piVar100[3];
        iVar129 = piVar100[4];
        iVar133 = piVar100[5];
        iVar130 = piVar100[6];
        iVar134 = piVar100[7];
        uVar111 = uVar111 - 4;
        iVar119 = (int)((ulong)(lVar113 * (*piVar100 << 1)) >> 0x20);
        iVar124 = (int)((ulong)(lVar113 * (iVar128 << 1)) >> 0x20);
        iVar120 = (int)((ulong)(lVar113 * (iVar129 << 1)) >> 0x20);
        iVar125 = (int)((ulong)(lVar113 * (iVar130 << 1)) >> 0x20);
        iVar121 = (int)((ulong)(lVar113 * (iVar131 << 1)) >> 0x20);
        iVar126 = (int)((ulong)(lVar113 * (iVar132 << 1)) >> 0x20);
        iVar122 = (int)((ulong)(lVar113 * (iVar133 << 1)) >> 0x20);
        iVar127 = (int)((ulong)(lVar113 * (iVar134 << 1)) >> 0x20);
        *piVar105 = *piVar100 - iVar119;
        piVar105[1] = iVar131 - iVar121;
        piVar105[2] = iVar128 - iVar124;
        piVar105[3] = iVar132 - iVar126;
        piVar105[4] = iVar129 - iVar120;
        piVar105[5] = iVar133 - iVar122;
        piVar105[6] = iVar130 - iVar125;
        piVar105[7] = iVar134 - iVar127;
        piVar105 = piVar105 + 8;
        *piVar100 = iVar119;
        piVar100[1] = iVar121;
        piVar100[2] = iVar124;
        piVar100[3] = iVar126;
        piVar100[4] = iVar120;
        piVar100[5] = iVar122;
        piVar100[6] = iVar125;
        piVar100[7] = iVar127;
        piVar100 = piVar100 + 8;
      } while (uVar111 != 0);
      piVar100 = piVar101;
      piVar105 = piVar106;
      if (uVar117 == uVar115) goto joined_r0x00ec5944;
    }
    do {
      iVar109 = iVar109 + -1;
      iVar119 = (int)((ulong)((*piVar100 << 1) * lVar113) >> 0x20);
      *piVar105 = *piVar100 - iVar119;
      *piVar100 = iVar119;
      piVar106 = piVar105 + 2;
      iVar119 = (int)((ulong)((piVar100[1] << 1) * lVar113) >> 0x20);
      piVar105[1] = piVar100[1] - iVar119;
      piVar101 = piVar100 + 2;
      piVar100[1] = iVar119;
      piVar100 = piVar101;
      piVar105 = piVar106;
    } while (iVar109 != 0);
  }
joined_r0x00ec5944:
  if ((uVar110 & 1) == 0) {
    return;
  }
                    /* catch() { ... } // from try @ 00ec5890 with catch @ 00ec594c */
  iVar109 = (int)((ulong)((*piVar101 << 1) * lVar113) >> 0x20);
  *piVar106 = *piVar101 - iVar109;
  *piVar101 = iVar109;
  return;
}

