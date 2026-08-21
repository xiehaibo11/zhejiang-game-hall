
void pvmp3_mpeg2_stereo_proc
               (undefined8 param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
               uint param_7,int *param_8)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  ulong uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  short *psVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  int iVar23;
  uint uVar24;
  long lVar25;
  int *piVar26;
  long local_98;
  long local_90;
  
  if (param_8[7] != 1) {
    return;
  }
  uVar5 = param_8[8];
  if ((uVar5 & 1) == 0) {
    if ((uVar5 >> 1 & 1) == 0) {
      return;
    }
    uVar7 = (ulong)param_7;
  }
  else {
    uVar4 = ~*(uint *)(param_5 + 0xc) & 1;
    lVar22 = (long)param_8[4] + (long)(*param_8 * 3);
    iVar21 = (int)lVar22;
    if ((*(int *)(param_4 + 0x10) == 0) || (*(int *)(param_4 + 0x14) != 2)) {
      iVar19 = 0x1f;
      iVar20 = 0x11;
LAB_00e9639c:
      iVar23 = iVar20 + iVar19 * 0x12;
      if (*(int *)(param_2 + (long)iVar23 * 4) == 0) goto code_r0x00e963ac;
      if (iVar23 != 0) {
        if (iVar23 < *(short *)(mp3_sfBandIndex + (long)iVar21 * 0x4a + 0x1c)) {
          lVar22 = 0;
          if (*(short *)(mp3_sfBandIndex + (long)iVar21 * 0x4a + 0xe) <= iVar23) {
            lVar22 = 7;
          }
        }
        else {
          lVar22 = 0xe;
        }
        uVar24 = (int)lVar22 - 1;
        psVar16 = (short *)(mp3_sfBandIndex + lVar22 * 2 + (long)iVar21 * 0x4a);
        do {
          sVar6 = *psVar16;
          uVar24 = uVar24 + 1;
          psVar16 = psVar16 + 1;
        } while (sVar6 <= iVar23);
        if (uVar24 < 0x15) goto LAB_00e96640;
        if (uVar24 != 0x15) goto LAB_00e96654;
        uVar24 = 0x15;
        *(undefined4 *)(param_3 + 0x54) = 0;
        uVar9 = 1;
        goto LAB_00e96650;
      }
      uVar24 = 1;
      goto LAB_00e96640;
    }
    if (*(int *)(param_4 + 0x18) == 0) {
      lVar22 = 0;
      local_90 = param_3 + 0x5c;
      iVar20 = 1;
      local_98 = param_6;
      do {
        iVar19 = 0xc;
        iVar23 = -1;
        do {
          lVar11 = (long)iVar19 * 2 + (long)iVar21 * 0x4a;
          sVar6 = *(short *)(mp3_sfBandIndex + lVar11 + 0x2e);
          iVar13 = (int)*(short *)(mp3_sfBandIndex + lVar11 + 0x30);
          iVar18 = iVar13 - sVar6;
          iVar8 = iVar19;
          if (0 < iVar18) {
            piVar15 = (int *)(param_2 + -4 + (long)((int)sVar6 + sVar6 * 2 + iVar20 * iVar18) * 4);
            iVar18 = (iVar13 + -1) - (int)sVar6;
            do {
              if (*piVar15 != 0) {
                iVar8 = -10;
                iVar23 = iVar19;
                break;
              }
              bVar1 = 0 < iVar18;
              piVar15 = piVar15 + -1;
              iVar18 = iVar18 + -1;
            } while (bVar1);
          }
          iVar19 = iVar8 + -1;
        } while (0 < iVar8);
        uVar24 = iVar23 + 1;
        if ((int)uVar24 < 0xc) {
          lVar11 = param_3 + lVar22 * 0x34;
          *(undefined4 *)(lVar11 + 0x8c) = *(undefined4 *)(lVar11 + 0x88);
          lVar11 = param_6 + lVar22 * 4;
          *(undefined4 *)(lVar11 + 0x90) = *(undefined4 *)(lVar11 + 0x84);
          if (-1 < iVar23) goto LAB_00e96518;
LAB_00e96560:
          psVar16 = (short *)((long)(mp3_sfBandIndex + (long)iVar21 * 0x4a + 0x30) +
                             (long)(int)uVar24 * 2);
          piVar15 = (int *)(local_90 + (long)(int)uVar24 * 4);
          piVar26 = (int *)(local_98 + (long)(int)uVar24 * 0xc);
          iVar23 = 0xc - iVar23;
          do {
            sVar6 = psVar16[-1];
            iVar18 = (int)*psVar16 - (int)sVar6;
            iVar19 = (int)sVar6 + sVar6 * 2 + iVar18 * (int)lVar22;
            if (*piVar15 == *piVar26) {
              if ((uVar5 >> 1 & 1) != 0) {
                pvmp3_st_mid_side(param_1,param_2,iVar19,iVar18);
              }
            }
            else {
              pvmp3_st_intensity_ver2(param_1,param_2,uVar4,*piVar15,iVar19);
            }
            psVar16 = psVar16 + 1;
            piVar15 = piVar15 + 1;
            iVar23 = iVar23 + -1;
            piVar26 = piVar26 + 3;
          } while (iVar23 != 0);
        }
        else {
          if (uVar24 == 0xc) {
            *(undefined4 *)(param_3 + lVar22 * 0x34 + 0x8c) = 0;
            *(undefined4 *)(param_6 + lVar22 * 4 + 0x90) = 1;
          }
LAB_00e96518:
          uVar7 = (ulong)uVar24;
          psVar16 = (short *)(mp3_sfBandIndex + (long)iVar21 * 0x4a + 0x30);
          do {
            if ((uVar5 >> 1 & 1) != 0) {
              sVar6 = psVar16[-1];
              pvmp3_st_mid_side(param_1,param_2,
                                (int)sVar6 + sVar6 * 2 + ((int)*psVar16 - (int)sVar6) * (int)lVar22)
              ;
            }
            uVar7 = uVar7 - 1;
            psVar16 = psVar16 + 1;
          } while (uVar7 != 0);
          if ((int)uVar24 < 0xd) goto LAB_00e96560;
        }
        lVar22 = lVar22 + 1;
        local_90 = local_90 + 0x34;
        iVar20 = iVar20 + 1;
        local_98 = local_98 + 4;
        if (lVar22 == 3) {
          return;
        }
      } while( true );
    }
    iVar19 = 0x1f;
    iVar20 = 0x11;
    while (iVar23 = iVar20 + iVar19 * 0x12, *(int *)(param_2 + (long)iVar23 * 4) == 0) {
      iVar23 = iVar20 + -1;
      bVar2 = iVar20 < 1;
      bVar1 = 0 < iVar20;
      iVar20 = 0x11;
      if (bVar1) {
        iVar20 = iVar23;
      }
      iVar19 = iVar19 - (uint)bVar2;
      if (iVar19 < 0) {
        iVar23 = -1;
LAB_00e96724:
        uVar7 = 0;
        if (*(short *)(mp3_sfBandIndex + lVar22 * 0x4a + 8) <= iVar23) {
          uVar7 = 4;
        }
        do {
          uVar12 = uVar7;
          uVar7 = uVar12 + 1;
        } while (*(short *)(mp3_sfBandIndex + uVar12 * 2 + lVar22 * 0x4a) <= iVar23);
        if ((uVar5 >> 1 & 1) != 0) {
          pvmp3_st_mid_side(param_1,param_2,0);
        }
        if ((uint)uVar12 < 6) {
          uVar7 = uVar12 & 0xffffffff;
          psVar16 = (short *)(mp3_sfBandIndex + (ulong)((int)(uVar12 + 1) - 1) * 2 + lVar22 * 0x4a);
          do {
            lVar11 = uVar7 * 4;
            sVar6 = *psVar16;
            uVar7 = uVar7 + 1;
            iVar21 = *(int *)(param_3 + lVar11);
            iVar20 = (int)psVar16[1] - (int)sVar6;
            if (iVar21 == *(int *)(param_6 + lVar11)) {
              if ((uVar5 >> 1 & 1) != 0) {
                pvmp3_st_mid_side(param_1,param_2,(int)sVar6,iVar20);
              }
            }
            else {
              pvmp3_st_intensity_ver2(param_1,param_2,uVar4,iVar21,(long)sVar6,iVar20);
            }
            psVar16 = psVar16 + 1;
          } while (uVar7 != 6);
        }
        lVar11 = 0;
        psVar16 = (short *)(mp3_sfBandIndex + lVar22 * 0x4a + 0x36);
        piVar15 = (int *)(param_6 + 0x24);
        *(undefined4 *)(param_3 + 0x8c) = *(undefined4 *)(param_3 + 0x88);
        *(undefined4 *)(param_6 + 0x90) = *(undefined4 *)(param_6 + 0x84);
        do {
          sVar6 = psVar16[-1];
          iVar20 = *(int *)(param_3 + 0x68 + lVar11);
          iVar19 = (int)*psVar16 - (int)sVar6;
          iVar21 = (int)sVar6 + sVar6 * 2;
          if (iVar20 == *piVar15) {
            if ((uVar5 >> 1 & 1) != 0) {
              pvmp3_st_mid_side(param_1,param_2,iVar21,iVar19);
            }
          }
          else {
            pvmp3_st_intensity_ver2(param_1,param_2,uVar4,iVar20,iVar21,iVar19);
          }
          lVar11 = lVar11 + 4;
          psVar16 = psVar16 + 1;
          piVar15 = piVar15 + 3;
        } while (lVar11 != 0x28);
        lVar11 = 0;
        piVar15 = (int *)(param_6 + 0x28);
        *(undefined4 *)(param_3 + 0xc0) = *(undefined4 *)(param_3 + 0xbc);
        psVar16 = (short *)(mp3_sfBandIndex + lVar22 * 0x4a + 0x36);
        *(undefined4 *)(param_6 + 0x94) = *(undefined4 *)(param_6 + 0x88);
        do {
          sVar6 = psVar16[-1];
          iVar20 = *(int *)(param_3 + 0x9c + lVar11);
          iVar19 = (int)*psVar16 - (int)sVar6;
          iVar21 = iVar19 + (int)sVar6 + sVar6 * 2;
          if (iVar20 == *piVar15) {
            if ((uVar5 >> 1 & 1) != 0) {
              pvmp3_st_mid_side(param_1,param_2,iVar21,iVar19);
            }
          }
          else {
            pvmp3_st_intensity_ver2(param_1,param_2,uVar4,iVar20,iVar21);
          }
          lVar11 = lVar11 + 4;
          piVar15 = piVar15 + 3;
          psVar16 = psVar16 + 1;
        } while (lVar11 != 0x28);
        lVar11 = 0;
        piVar15 = (int *)(param_6 + 0x2c);
        *(undefined4 *)(param_3 + 0xf4) = *(undefined4 *)(param_3 + 0xf0);
        psVar16 = (short *)(mp3_sfBandIndex + lVar22 * 0x4a + 0x36);
        *(undefined4 *)(param_6 + 0x98) = *(undefined4 *)(param_6 + 0x8c);
        do {
          sVar6 = psVar16[-1];
          iVar20 = *(int *)(param_3 + 0xd0 + lVar11);
          iVar19 = (int)*psVar16 - (int)sVar6;
          iVar21 = (int)sVar6 + sVar6 * 2 + iVar19 * 2;
          if (iVar20 == *piVar15) {
            if ((uVar5 >> 1 & 1) != 0) {
              pvmp3_st_mid_side(param_1,param_2,iVar21,iVar19);
            }
          }
          else {
            pvmp3_st_intensity_ver2(param_1,param_2,uVar4,iVar20,iVar21);
          }
          lVar11 = lVar11 + 4;
          piVar15 = piVar15 + 3;
          psVar16 = psVar16 + 1;
        } while (lVar11 != 0x28);
        return;
      }
    }
    lVar22 = (long)iVar21;
    if (iVar23 < 0x24) goto LAB_00e96724;
    lVar11 = 0;
    iVar21 = 1;
    local_98 = 3;
    lVar25 = param_3;
    do {
      uVar24 = 0xc;
      uVar10 = 0xffffffff;
      do {
        lVar17 = (long)(int)uVar24 * 2 + lVar22 * 0x4a;
        sVar6 = *(short *)(mp3_sfBandIndex + lVar17 + 0x2e);
        iVar19 = (int)*(short *)(mp3_sfBandIndex + lVar17 + 0x30);
        iVar20 = iVar19 - sVar6;
        uVar14 = uVar24;
        if (0 < iVar20) {
          piVar15 = (int *)(param_2 + -4 + (long)((int)sVar6 + sVar6 * 2 + iVar21 * iVar20) * 4);
          iVar20 = (iVar19 + -1) - (int)sVar6;
          do {
            if (*piVar15 != 0) {
              uVar14 = 0xfffffff6;
              uVar10 = uVar24;
              break;
            }
            bVar1 = 0 < iVar20;
            piVar15 = piVar15 + -1;
            iVar20 = iVar20 + -1;
          } while (bVar1);
        }
        uVar24 = uVar14 - 1;
      } while (2 < (int)uVar24);
      uVar14 = 3;
      if (2 < (int)uVar10) {
        uVar14 = uVar10 + 1;
      }
      if ((int)uVar14 < 0xc) {
        lVar17 = param_3 + lVar11 * 0x34;
        *(undefined4 *)(lVar17 + 0x8c) = *(undefined4 *)(lVar17 + 0x88);
        uVar9 = *(undefined4 *)(param_6 + lVar11 * 4 + 0x84);
LAB_00e96a90:
        *(undefined4 *)(param_6 + lVar11 * 4 + 0x90) = uVar9;
      }
      else if (uVar14 == uVar24) {
        *(undefined4 *)(param_3 + lVar11 * 0x34 + 0x8c) = 0;
        uVar9 = 1;
        goto LAB_00e96a90;
      }
      if (2 < (int)uVar10) {
        lVar17 = 0;
        do {
          if ((uVar5 >> 1 & 1) != 0) {
            lVar3 = lVar17 * 2 + lVar22 * 0x4a;
            sVar6 = *(short *)(mp3_sfBandIndex + lVar3 + 0x34);
            pvmp3_st_mid_side(param_1,param_2,
                              (int)sVar6 + sVar6 * 2 +
                              ((int)*(short *)(mp3_sfBandIndex + lVar3 + 0x36) - (int)sVar6) *
                              (int)lVar11);
          }
          lVar3 = lVar17 + 4;
          lVar17 = lVar17 + 1;
        } while (lVar3 < (int)uVar14);
      }
      if (uVar14 < 0xd) {
        uVar7 = (ulong)(uVar14 - 1);
        psVar16 = (short *)(lVar22 * 0x4a + 0x1995ca4 + uVar7 * 2);
        lVar17 = uVar7 + 0x18;
        uVar7 = local_98 + uVar7 * 3;
        do {
          sVar6 = psVar16[-1];
          iVar20 = *(int *)(lVar25 + lVar17 * 4);
          iVar23 = (int)*psVar16 - (int)sVar6;
          iVar19 = (int)sVar6 + sVar6 * 2 + iVar23 * (int)lVar11;
          if (iVar20 == *(int *)(param_6 + (uVar7 & 0xffffffff) * 4)) {
            if ((uVar5 >> 1 & 1) != 0) {
              pvmp3_st_mid_side(param_1,param_2,iVar19,iVar23);
            }
          }
          else {
            pvmp3_st_intensity_ver2(param_1,param_2,uVar4,iVar20,iVar19);
          }
          uVar12 = lVar17 - 0x16;
          uVar7 = uVar7 + 3;
          lVar17 = lVar17 + 1;
          psVar16 = psVar16 + 1;
        } while (uVar12 < 0xd);
      }
      lVar11 = lVar11 + 1;
      iVar21 = iVar21 + 1;
      local_98 = local_98 + 1;
      lVar25 = lVar25 + 0x34;
    } while (lVar11 != 3);
    if ((uVar5 >> 1 & 1) == 0) {
      return;
    }
    uVar7 = (ulong)*(short *)(mp3_sfBandIndex + lVar22 * 0x4a + 0xc);
  }
  pvmp3_st_mid_side(param_1,param_2,0,uVar7);
  return;
code_r0x00e963ac:
  iVar23 = iVar20 + -1;
  bVar2 = iVar20 < 1;
  bVar1 = 0 < iVar20;
  iVar20 = 0x11;
  if (bVar1) {
    iVar20 = iVar23;
  }
  iVar19 = iVar19 - (uint)bVar2;
  if (iVar19 < 0) {
    uVar24 = (uint)(iVar19 != -1);
LAB_00e96640:
    *(undefined4 *)(param_3 + 0x54) = *(undefined4 *)(param_3 + 0x50);
    uVar9 = *(undefined4 *)(param_6 + 0x50);
LAB_00e96650:
    *(undefined4 *)(param_6 + 0x54) = uVar9;
LAB_00e96654:
    lVar22 = (long)iVar21;
    if ((uVar5 >> 1 & 1) != 0) {
      pvmp3_st_mid_side(param_1,param_2,(long)*(short *)(mp3_sfBandIndex + lVar22 * 0x4a),
                        (int)*(short *)(mp3_sfBandIndex + (long)(int)uVar24 * 2 + lVar22 * 0x4a) -
                        (int)*(short *)(mp3_sfBandIndex + lVar22 * 0x4a));
    }
    if (0x15 < (int)uVar24) {
      return;
    }
    lVar11 = (long)(int)uVar24;
    psVar16 = (short *)(mp3_sfBandIndex + (long)(int)uVar24 * 2 + lVar22 * 0x4a);
    do {
      lVar22 = lVar11 * 4;
      sVar6 = *psVar16;
      iVar21 = *(int *)(param_3 + lVar22);
      lVar11 = lVar11 + 1;
      iVar20 = (int)psVar16[1] - (int)sVar6;
      if (iVar21 == *(int *)(param_6 + lVar22)) {
        if ((uVar5 >> 1 & 1) != 0) {
          pvmp3_st_mid_side(param_1,param_2,(int)sVar6,iVar20);
        }
      }
      else {
        pvmp3_st_intensity_ver2(param_1,param_2,uVar4,iVar21,(long)sVar6,iVar20);
      }
      psVar16 = psVar16 + 1;
    } while (lVar11 != 0x16);
    return;
  }
  goto LAB_00e9639c;
}

