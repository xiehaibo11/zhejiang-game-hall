
void pvmp3_mpeg2_stereo_proc
               (undefined8 param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
               uint param_7,int *param_8)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  short *psVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int *piVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  long lVar25;
  long local_98;
  long local_90;
  
  if (param_8[7] != 1) {
    return;
  }
  uVar3 = param_8[8];
  if ((uVar3 & 1) == 0) {
    if ((uVar3 >> 1 & 1) == 0) {
      return;
    }
    uVar7 = (ulong)param_7;
  }
  else {
    uVar2 = ~*(uint *)(param_5 + 0xc) & 1;
    lVar22 = (long)param_8[4] + (long)(*param_8 * 3);
    iVar21 = (int)lVar22;
    if ((*(int *)(param_4 + 0x10) == 0) || (*(int *)(param_4 + 0x14) != 2)) {
      iVar17 = 0x1f;
      iVar18 = 0x11;
LAB_00ec2920:
      iVar9 = iVar18 + iVar17 * 0x12;
      if (*(int *)(param_2 + (long)iVar9 * 4) == 0) goto code_r0x00ec2930;
      if (iVar9 != 0) {
        if (iVar9 < *(short *)(mp3_sfBandIndex + (long)iVar21 * 0x4a + 0x1c)) {
          lVar22 = 0;
          if (*(short *)(mp3_sfBandIndex + (long)iVar21 * 0x4a + 0xe) <= iVar9) {
            lVar22 = 7;
          }
        }
        else {
          lVar22 = 0xe;
        }
        uVar19 = (int)lVar22 - 1;
        psVar16 = (short *)(mp3_sfBandIndex + lVar22 * 2 + (long)iVar21 * 0x4a);
        do {
          sVar4 = *psVar16;
                    /* catch() { ... } // from try @ 00ec2c20 with catch @ 00ec2bb8 */
          uVar19 = uVar19 + 1;
          psVar16 = psVar16 + 1;
        } while (sVar4 <= iVar9);
        if (uVar19 < 0x15) goto LAB_00ec2bcc;
        if (uVar19 != 0x15) goto LAB_00ec2be0;
        uVar19 = 0x15;
        *(undefined4 *)(param_3 + 0x54) = 0;
        uVar10 = 1;
        goto LAB_00ec2bdc;
      }
      uVar19 = 1;
      goto LAB_00ec2bcc;
    }
    if (*(int *)(param_4 + 0x18) == 0) {
      lVar22 = 0;
      local_90 = param_3 + 0x5c;
      iVar18 = 1;
      local_98 = param_6;
      do {
        iVar9 = 0xc;
        iVar17 = -1;
        do {
          lVar13 = (long)iVar9 * 2 + (long)iVar21 * 0x4a;
          sVar4 = *(short *)(mp3_sfBandIndex + lVar13 + 0x2e);
          iVar15 = (int)*(short *)(mp3_sfBandIndex + lVar13 + 0x30) - (int)sVar4;
          iVar8 = iVar9;
          if (0 < iVar15) {
                    /* catch() { ... } // from try @ 00ec2ab8 with catch @ 00ec2a50 */
            piVar20 = (int *)(param_2 + -4 + (long)((int)sVar4 + sVar4 * 2 + iVar18 * iVar15) * 4);
            do {
              iVar15 = iVar15 + -1;
              if (*piVar20 != 0) {
                iVar8 = -10;
                iVar17 = iVar9;
                break;
              }
              piVar20 = piVar20 + -1;
            } while (0 < iVar15);
          }
          iVar9 = iVar8 + -1;
        } while (0 < iVar8);
        uVar19 = iVar17 + 1;
        if ((int)uVar19 < 0xc) {
          lVar13 = param_3 + lVar22 * 0x34;
          *(undefined4 *)(lVar13 + 0x8c) = *(undefined4 *)(lVar13 + 0x88);
          lVar13 = param_6 + lVar22 * 4;
          *(undefined4 *)(lVar13 + 0x90) = *(undefined4 *)(lVar13 + 0x84);
          if (-1 < iVar17) goto LAB_00ec2ad0;
LAB_00ec2b20:
          iVar17 = iVar17 + -0xc;
          psVar16 = (short *)((long)(mp3_sfBandIndex + (long)iVar21 * 0x4a + 0x30) +
                             (long)(int)uVar19 * 2);
          piVar20 = (int *)(local_90 + (long)(int)uVar19 * 4);
          piVar24 = (int *)(local_98 + (long)(int)uVar19 * 0xc);
          do {
                    /* try { // try from 00ec2b64 to 00fc2b6b has its CatchHandler @ 00ec2b7c */
            sVar4 = psVar16[-1];
                    /* try { // try from 00ec2b6c to 00fc2bb7 has its CatchHandler @ 00ec2b04 */
            iVar15 = (int)*psVar16 - (int)sVar4;
                    /* catch() { ... } // from try @ 00ec2b64 with catch @ 00ec2b7c */
            iVar9 = (int)sVar4 + sVar4 * 2 + iVar15 * (int)lVar22;
            if (*piVar20 == *piVar24) {
              if ((uVar3 >> 1 & 1) != 0) {
                pvmp3_st_mid_side(param_1,param_2,iVar9,iVar15);
              }
            }
            else {
              pvmp3_st_intensity_ver2(param_1,param_2,uVar2,*piVar20,iVar9);
            }
            psVar16 = psVar16 + 1;
            piVar20 = piVar20 + 1;
            bVar6 = iVar17 != -1;
            iVar17 = iVar17 + 1;
            piVar24 = piVar24 + 3;
          } while (bVar6);
        }
        else {
          if (uVar19 == 0xc) {
                    /* try { // try from 00ec2ab0 to 00fc2ab7 has its CatchHandler @ 00ec2ac8 */
                    /* try { // try from 00ec2ab8 to 00fc2b03 has its CatchHandler @ 00ec2a50 */
            *(undefined4 *)(param_3 + lVar22 * 0x34 + 0x8c) = 0;
                    /* catch() { ... } // from try @ 00ec2ab0 with catch @ 00ec2ac8 */
            *(undefined4 *)(param_6 + lVar22 * 4 + 0x90) = 1;
          }
LAB_00ec2ad0:
          uVar7 = (ulong)uVar19;
          psVar16 = (short *)(mp3_sfBandIndex + (long)iVar21 * 0x4a + 0x30);
          do {
            if ((uVar3 >> 1 & 1) != 0) {
              sVar4 = psVar16[-1];
                    /* catch() { ... } // from try @ 00ec2b6c with catch @ 00ec2b04 */
              pvmp3_st_mid_side(param_1,param_2,
                                (int)sVar4 + sVar4 * 2 + ((int)*psVar16 - (int)sVar4) * (int)lVar22)
              ;
            }
            uVar7 = uVar7 - 1;
            psVar16 = psVar16 + 1;
          } while (uVar7 != 0);
          if ((int)uVar19 < 0xd) goto LAB_00ec2b20;
        }
        lVar22 = lVar22 + 1;
        local_90 = local_90 + 0x34;
        iVar18 = iVar18 + 1;
        local_98 = local_98 + 4;
        if (lVar22 == 3) {
          return;
        }
      } while( true );
    }
    iVar17 = 0x1f;
    iVar18 = 0x11;
    while (iVar9 = iVar18 + iVar17 * 0x12, *(int *)(param_2 + (long)iVar9 * 4) == 0) {
      iVar9 = iVar18 + -1;
      bVar1 = iVar18 < 1;
      bVar6 = 0 < iVar18;
      iVar18 = 0x11;
      if (bVar6) {
        iVar18 = iVar9;
      }
      iVar17 = iVar17 - (uint)bVar1;
      if (iVar17 < 0) {
        iVar9 = -1;
LAB_00ec2cb0:
        uVar7 = (ulong)(*(short *)(mp3_sfBandIndex + lVar22 * 0x4a + 8) <= iVar9) << 2;
        do {
          uVar23 = uVar7;
          uVar7 = uVar23 + 1;
        } while (*(short *)(mp3_sfBandIndex + uVar23 * 2 + lVar22 * 0x4a) <= iVar9);
        if ((uVar3 >> 1 & 1) != 0) {
                    /* try { // try from 00ec2cec to 00fc2cfb has its CatchHandler @ 00ec2e30 */
          pvmp3_st_mid_side(param_1,param_2,0);
        }
        if ((uint)uVar23 < 6) {
                    /* try { // try from 00ec2d00 to 00fc2d0f has its CatchHandler @ 00ec2e18 */
          uVar7 = uVar23 & 0xffffffff;
          psVar16 = (short *)(mp3_sfBandIndex + (ulong)((int)(uVar23 + 1) - 1) * 2 + lVar22 * 0x4a);
                    /* try { // try from 00ec2d14 to 00fc2d23 has its CatchHandler @ 00ec2df8 */
          do {
            lVar13 = uVar7 * 4;
                    /* try { // try from 00ec2d3c to 00fc2d4b has its CatchHandler @ 00ec2db8 */
            sVar4 = *psVar16;
            uVar7 = uVar7 + 1;
            iVar21 = *(int *)(param_3 + lVar13);
                    /* try { // try from 00ec2d54 to 00fc2d5f has its CatchHandler @ 00ec2d74 */
            iVar18 = (int)psVar16[1] - (int)sVar4;
            if (iVar21 == *(int *)(param_6 + lVar13)) {
              if ((uVar3 >> 1 & 1) != 0) {
                    /* try { // try from 00ec2d60 to 00fc2e43 has its CatchHandler @ 00ec2c6c */
                pvmp3_st_mid_side(param_1,param_2,(int)sVar4,iVar18);
              }
            }
            else {
              pvmp3_st_intensity_ver2(param_1,param_2,uVar2,iVar21,(long)sVar4,iVar18);
            }
                    /* try { // try from 00ec2d28 to 00fc2d37 has its CatchHandler @ 00ec2dd8 */
            psVar16 = psVar16 + 1;
          } while (uVar7 != 6);
        }
                    /* catch() { ... } // from try @ 00ec2d54 with catch @ 00ec2d74 */
        lVar13 = 0;
        psVar16 = (short *)(mp3_sfBandIndex + lVar22 * 0x4a + 0x36);
        piVar20 = (int *)(param_6 + 0x24);
        *(undefined4 *)(param_3 + 0x8c) = *(undefined4 *)(param_3 + 0x88);
        *(undefined4 *)(param_6 + 0x90) = *(undefined4 *)(param_6 + 0x84);
        do {
          sVar4 = psVar16[-1];
          iVar18 = *(int *)(param_3 + 0x68 + lVar13);
          iVar17 = (int)*psVar16 - (int)sVar4;
                    /* catch() { ... } // from try @ 00ec2d28 with catch @ 00ec2dd8 */
          iVar21 = (int)sVar4 + sVar4 * 2;
          if (iVar18 == *piVar20) {
            if ((uVar3 >> 1 & 1) != 0) {
              pvmp3_st_mid_side(param_1,param_2,iVar21,iVar17);
                    /* catch() { ... } // from try @ 00ec2d14 with catch @ 00ec2df8 */
            }
          }
          else {
            pvmp3_st_intensity_ver2(param_1,param_2,uVar2,iVar18,iVar21,iVar17);
          }
          lVar13 = lVar13 + 4;
          psVar16 = psVar16 + 1;
                    /* catch() { ... } // from try @ 00ec2d3c with catch @ 00ec2db8 */
          piVar20 = piVar20 + 3;
        } while (lVar13 != 0x28);
        lVar13 = 0;
        piVar20 = (int *)(param_6 + 0x28);
        *(undefined4 *)(param_3 + 0xc0) = *(undefined4 *)(param_3 + 0xbc);
                    /* catch() { ... } // from try @ 00ec2d00 with catch @ 00ec2e18 */
        psVar16 = (short *)(mp3_sfBandIndex + lVar22 * 0x4a + 0x36);
        *(undefined4 *)(param_6 + 0x94) = *(undefined4 *)(param_6 + 0x88);
        do {
          sVar4 = psVar16[-1];
          iVar18 = *(int *)(param_3 + 0x9c + lVar13);
          iVar17 = (int)*psVar16 - (int)sVar4;
          iVar21 = iVar17 + (int)sVar4 + sVar4 * 2;
          if (iVar18 == *piVar20) {
            if ((uVar3 >> 1 & 1) != 0) {
              pvmp3_st_mid_side(param_1,param_2,iVar21,iVar17);
            }
          }
          else {
                    /* catch() { ... } // from try @ 00ec2cec with catch @ 00ec2e30 */
            pvmp3_st_intensity_ver2(param_1,param_2,uVar2,iVar18,iVar21);
          }
          lVar13 = lVar13 + 4;
          piVar20 = piVar20 + 3;
          psVar16 = psVar16 + 1;
        } while (lVar13 != 0x28);
        lVar13 = 0;
        piVar20 = (int *)(param_6 + 0x2c);
        *(undefined4 *)(param_3 + 0xf4) = *(undefined4 *)(param_3 + 0xf0);
        psVar16 = (short *)(mp3_sfBandIndex + lVar22 * 0x4a + 0x36);
        *(undefined4 *)(param_6 + 0x98) = *(undefined4 *)(param_6 + 0x8c);
        do {
          sVar4 = psVar16[-1];
          iVar18 = *(int *)(param_3 + 0xd0 + lVar13);
          iVar17 = (int)*psVar16 - (int)sVar4;
          iVar21 = (int)sVar4 + sVar4 * 2 + iVar17 * 2;
          if (iVar18 == *piVar20) {
            if ((uVar3 >> 1 & 1) != 0) {
              pvmp3_st_mid_side(param_1,param_2,iVar21,iVar17);
            }
          }
          else {
            pvmp3_st_intensity_ver2(param_1,param_2,uVar2,iVar18,iVar21);
          }
          lVar13 = lVar13 + 4;
          piVar20 = piVar20 + 3;
          psVar16 = psVar16 + 1;
        } while (lVar13 != 0x28);
        return;
      }
    }
    lVar22 = (long)iVar21;
    if (iVar9 < 0x24) goto LAB_00ec2cb0;
    lVar25 = 0;
    iVar21 = 1;
    lVar13 = param_3 + 0x60;
    local_98 = 3;
    do {
      uVar12 = 0xc;
      uVar19 = 0xffffffff;
      do {
        lVar14 = (long)(int)uVar12 * 2 + lVar22 * 0x4a;
        sVar4 = *(short *)(mp3_sfBandIndex + lVar14 + 0x2e);
        iVar18 = (int)*(short *)(mp3_sfBandIndex + lVar14 + 0x30) - (int)sVar4;
        uVar11 = uVar12;
        if (0 < iVar18) {
          piVar20 = (int *)(param_2 + -4 + (long)((int)sVar4 + sVar4 * 2 + iVar21 * iVar18) * 4);
          do {
            iVar18 = iVar18 + -1;
            if (*piVar20 != 0) {
              uVar11 = 0xfffffff6;
              uVar19 = uVar12;
              break;
            }
            piVar20 = piVar20 + -1;
          } while (0 < iVar18);
        }
        uVar12 = uVar11 - 1;
      } while (2 < (int)uVar12);
      if ((int)uVar19 < 3) {
        uVar19 = 2;
      }
      uVar11 = uVar19 + 1;
      if (uVar11 < 0xc) {
        lVar14 = param_3 + lVar25 * 0x34;
        *(undefined4 *)(lVar14 + 0x8c) = *(undefined4 *)(lVar14 + 0x88);
        uVar10 = *(undefined4 *)(param_6 + lVar25 * 4 + 0x84);
LAB_00ec3040:
        *(undefined4 *)(param_6 + lVar25 * 4 + 0x90) = uVar10;
      }
      else if (uVar11 == uVar12) {
        *(undefined4 *)(param_3 + lVar25 * 0x34 + 0x8c) = 0;
        uVar10 = 1;
        goto LAB_00ec3040;
      }
      if (2 < (int)uVar19) {
        lVar14 = 0;
        do {
          if ((uVar3 >> 1 & 1) != 0) {
            lVar5 = lVar14 * 2 + lVar22 * 0x4a;
            sVar4 = *(short *)(mp3_sfBandIndex + lVar5 + 0x34);
            pvmp3_st_mid_side(param_1,param_2,
                              (int)sVar4 + sVar4 * 2 +
                              ((int)*(short *)(mp3_sfBandIndex + lVar5 + 0x36) - (int)sVar4) *
                              (int)lVar25);
          }
          uVar7 = lVar14 + 3;
          lVar14 = lVar14 + 1;
        } while (uVar7 < uVar19);
      }
      if (uVar11 < 0xd) {
        lVar14 = (ulong)(uVar19 + 1) - 1;
        uVar7 = local_98 + lVar14 * 3;
        psVar16 = (short *)(lVar22 * 0x4a + 0x1435d34 + lVar14 * 2);
        do {
          sVar4 = psVar16[-1];
          iVar18 = *(int *)(lVar13 + lVar14 * 4);
          iVar9 = (int)*psVar16 - (int)sVar4;
          iVar17 = (int)sVar4 + sVar4 * 2 + iVar9 * (int)lVar25;
          if (iVar18 == *(int *)(param_6 + (uVar7 & 0xffffffff) * 4)) {
            if ((uVar3 >> 1 & 1) != 0) {
              pvmp3_st_mid_side(param_1,param_2,iVar17,iVar9);
            }
          }
          else {
            pvmp3_st_intensity_ver2(param_1,param_2,uVar2,iVar18,iVar17);
          }
          uVar23 = lVar14 + 2;
          uVar7 = uVar7 + 3;
          lVar14 = lVar14 + 1;
          psVar16 = psVar16 + 1;
        } while (uVar23 < 0xd);
      }
      lVar25 = lVar25 + 1;
      iVar21 = iVar21 + 1;
      local_98 = local_98 + 1;
      lVar13 = lVar13 + 0x34;
    } while (lVar25 != 3);
    if ((uVar3 >> 1 & 1) == 0) {
      return;
    }
    uVar7 = (ulong)*(short *)(mp3_sfBandIndex + lVar22 * 0x4a + 0xc);
  }
  pvmp3_st_mid_side(param_1,param_2,0,uVar7);
  return;
code_r0x00ec2930:
  iVar9 = iVar18 + -1;
  bVar1 = iVar18 < 1;
  bVar6 = 0 < iVar18;
  iVar18 = 0x11;
  if (bVar6) {
    iVar18 = iVar9;
  }
  iVar17 = iVar17 - (uint)bVar1;
  if (iVar17 < 0) {
    uVar19 = 0;
LAB_00ec2bcc:
    *(undefined4 *)(param_3 + 0x54) = *(undefined4 *)(param_3 + 0x50);
    uVar10 = *(undefined4 *)(param_6 + 0x50);
LAB_00ec2bdc:
    *(undefined4 *)(param_6 + 0x54) = uVar10;
LAB_00ec2be0:
    lVar22 = (long)iVar21;
    if ((uVar3 >> 1 & 1) != 0) {
      pvmp3_st_mid_side(param_1,param_2,(long)*(short *)(mp3_sfBandIndex + lVar22 * 0x4a),
                        (int)*(short *)(mp3_sfBandIndex + (long)(int)uVar19 * 2 + lVar22 * 0x4a) -
                        (int)*(short *)(mp3_sfBandIndex + lVar22 * 0x4a));
    }
    if (0x15 < (int)uVar19) {
      return;
    }
                    /* try { // try from 00ec2c18 to 00fc2c1f has its CatchHandler @ 00ec2c30 */
                    /* try { // try from 00ec2c20 to 00fc2c6b has its CatchHandler @ 00ec2bb8 */
    lVar13 = (long)(int)uVar19;
    psVar16 = (short *)(mp3_sfBandIndex + (long)(int)uVar19 * 2 + lVar22 * 0x4a);
    do {
      lVar22 = lVar13 * 4;
      sVar4 = *psVar16;
      iVar21 = *(int *)(param_3 + lVar22);
      lVar13 = lVar13 + 1;
      iVar18 = (int)psVar16[1] - (int)sVar4;
                    /* try { // try from 00ec2c6c to 00fc2ceb has its CatchHandler @ 00ec2c6c
                       catch() { ... } // from try @ 00ec2c6c with catch @ 00ec2c6c
                       catch() { ... } // from try @ 00ec2d60 with catch @ 00ec2c6c */
      if (iVar21 == *(int *)(param_6 + lVar22)) {
        if ((uVar3 >> 1 & 1) != 0) {
          pvmp3_st_mid_side(param_1,param_2,(int)sVar4,iVar18);
        }
      }
      else {
                    /* catch() { ... } // from try @ 00ec2c18 with catch @ 00ec2c30 */
        pvmp3_st_intensity_ver2(param_1,param_2,uVar2,iVar21,(long)sVar4,iVar18);
      }
      psVar16 = psVar16 + 1;
    } while (lVar13 != 0x16);
    return;
  }
  goto LAB_00ec2920;
}

