
void pvmp3_framedecoder(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  short sVar8;
  long lVar9;
  bool bVar10;
  int iVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  ulong uVar24;
  long lVar25;
  int *piVar26;
  int *local_110;
  int *local_108;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_9c;
  int local_84;
  int *local_80 [2];
  long local_70;
  
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
  puVar2 = (uint *)(param_2 + 0x1ae2);
  local_84 = 0;
  piVar3 = param_2 + 0x1ae0;
  *(undefined8 *)(param_2 + 0x1ae0) = *param_1;
  *puVar2 = *(int *)((long)param_1 + 0xc) << 3;
  param_2[0x1ae3] = *(uint *)(param_1 + 1);
  uVar12 = pvmp3_decode_header(piVar3,&local_b8,&local_84);
  if ((int)uVar12 == 0) {
    iVar11 = 1;
    if (local_9c != 3) {
      iVar11 = 2;
    }
    *param_2 = iVar11;
    *(short *)((long)param_1 + 0x1c) = (short)iVar11;
    iVar11 = 0x480;
    if (local_b8 != 0) {
      iVar11 = 0x240;
    }
    iVar11 = iVar11 << (local_9c != 3);
    if (*(int *)(param_1 + 5) < iVar11) {
      uVar12 = 0xd;
    }
    else {
      *(int *)(param_1 + 5) = iVar11;
      piVar1 = param_2 + 0xc9;
      piVar4 = param_2 + 0x96a;
      local_80[0] = piVar1;
      local_80[1] = piVar4;
      if (local_b0 == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = getUpTo17bits(piVar3,0x10);
      }
      if (local_b4 == 3) {
        lVar25 = param_1[7];
        piVar5 = param_2 + 0x1287;
        uVar12 = pvmp3_get_side_info(piVar3,piVar5,&local_b8,&local_84);
        if ((int)uVar12 == 0) {
          bVar10 = false;
          if ((local_b0 != 0) && (local_84 != iVar11)) {
            bVar10 = *(int *)((long)param_1 + 0x2c) != 0;
          }
          iVar11 = pvmp3_get_main_data_size(&local_b8,param_2);
          if ((uint)param_2[1] <= (uint)param_2[0x1ae3]) {
            fillMainDataBuf(param_2,iVar11);
            uVar13 = param_2[0x12dc];
            uVar15 = uVar13 >> 3;
            if ((uVar13 & 0xfffffff8) < uVar13) {
              uVar15 = uVar15 + 1;
              uVar13 = uVar15 * 8;
              param_2[0x12dc] = uVar13;
            }
            iVar7 = param_2[2];
            iVar16 = iVar7;
            if (0x2000 < uVar15) {
              uVar13 = uVar13 - 0x10000;
              param_2[2] = iVar7 + -0x2000;
              param_2[0x12dc] = uVar13;
              iVar16 = iVar7 + -0x2000;
            }
            param_2[2] = iVar16 + iVar11;
            if ((bVar10) || (iVar11 = (iVar7 - *piVar5) - uVar15, iVar11 < 0)) {
              memset(param_2 + 0xbab,0,0x900);
              memset(param_2 + 0x30a,0,0x900);
              memset(param_2 + 0x78a,0,0x780);
              memset(param_2 + 0x102b,0,0x780);
              param_2[0xc9] = 0x23f;
              param_2[0x96a] = 0x23f;
              bVar10 = true;
            }
            else {
              param_2[0x12dc] = uVar13 + iVar11 * 8;
              bVar10 = false;
            }
            local_108 = param_2 + 0xbab;
            local_110 = param_2 + 0x30a;
            uVar24 = 0;
            piVar3 = param_2 + 3;
            piVar6 = param_2 + 0x128d;
            piVar21 = piVar6;
            do {
              if (bVar10) {
LAB_00e94b18:
                iVar11 = *param_2;
                if (0 < iVar11) {
                  lVar18 = 0;
                  lVar20 = lVar25;
                  piVar22 = piVar21;
                  do {
                    piVar23 = local_80[lVar18];
                    piVar26 = piVar23 + 0x241;
                    pvmp3_reorder(piVar26,piVar22,piVar23,&local_b8,piVar3);
                    pvmp3_alias_reduction(piVar26,piVar22,piVar23,&local_b8);
                    if ((piVar22[6] == 0) || (piVar22[4] == 0)) {
                      uVar14 = 0;
                    }
                    else {
                      uVar14 = 4;
                      if (local_a8 != 2 || local_b8 != 2) {
                        uVar14 = 2;
                      }
                    }
                    pvmp3_imdct_synth(piVar26,piVar23 + 1,piVar22[5],uVar14,*piVar23,piVar3);
                    pvmp3_poly_phase_synthesis
                              (piVar23,*param_2,*(undefined4 *)((long)param_1 + 0x14),lVar20);
                    iVar11 = *param_2;
                    lVar18 = lVar18 + 1;
                    lVar20 = lVar20 + 2;
                    piVar22 = piVar22 + 0x28;
                  } while (lVar18 < iVar11);
                }
              }
              else {
                iVar11 = *param_2;
                if (0 < iVar11) {
                  uVar19 = 0;
                  piVar22 = piVar21;
                  piVar26 = param_2 + 0x120b;
                  do {
                    iVar11 = param_2[0x12dc];
                    if (local_b8 == 0) {
                      pvmp3_get_scale_factors
                                (piVar26,piVar5,uVar24 & 0xffffffff,uVar19 & 0xffffffff,
                                 param_2 + 0x12da);
                    }
                    else {
                      pvmp3_mpeg2_get_scale_factors
                                (piVar26,piVar5,uVar24 & 0xffffffff,uVar19 & 0xffffffff,&local_b8,
                                 piVar3,param_2 + 0x12da);
                    }
                    piVar17 = local_80[uVar19];
                    piVar23 = piVar17 + 0x241;
                    iVar11 = pvmp3_huffman_parsing(piVar23,piVar22,param_2,iVar11,&local_b8);
                    *piVar17 = iVar11;
                    pvmp3_dequantize_sample(piVar23,piVar26,piVar22,iVar11,&local_b8);
                    uVar19 = uVar19 + 1;
                    piVar22 = piVar22 + 0x28;
                    piVar26 = piVar26 + 0x3e;
                  } while ((long)uVar19 < (long)*param_2);
                  if (*param_2 == 2) {
                    iVar11 = *piVar1;
                    if (*piVar1 <= *piVar4) {
                      iVar11 = *piVar4;
                    }
                    *piVar1 = iVar11;
                    *piVar4 = iVar11;
                    if (local_b8 == 0) {
                      pvmp3_stereo_proc(local_110,local_108,param_2 + 0x1249,piVar6 + uVar24 * 0x12,
                                        iVar11,&local_b8);
                    }
                    else {
                      pvmp3_mpeg2_stereo_proc
                                (local_110,local_108,param_2 + 0x1249,piVar6 + uVar24 * 0x12,
                                 param_2 + uVar24 * 0x12 + 0x12b5,piVar3,iVar11,&local_b8);
                    }
                  }
                  goto LAB_00e94b18;
                }
              }
              lVar25 = lVar25 + (long)(iVar11 * 0x240) * 2;
              uVar24 = uVar24 + 1;
              uVar19 = 1;
              if (local_b8 == 0) {
                uVar19 = 2;
              }
              piVar21 = piVar21 + 0x12;
            } while (uVar24 < uVar19);
            if (local_ac < 1) {
              uVar15 = *puVar2;
            }
            else {
              uVar13 = param_2[1] * 8;
              uVar15 = *puVar2;
              if (0 < (int)(uVar13 - *puVar2)) {
                *puVar2 = uVar13;
                uVar15 = uVar13;
              }
            }
            *(short *)((long)param_1 + 0x1e) = (short)local_b8;
            *(uint *)((long)param_1 + 0xc) = uVar15 >> 3;
            *(uint *)(param_1 + 6) = *(int *)(param_1 + 6) + uVar15;
            sVar8 = *(short *)(mp3_bitrate + (long)local_ac * 2 + (long)(short)local_b8 * 0x1e);
            *(undefined4 *)(param_1 + 4) =
                 *(undefined4 *)(mp3_s_freq + (long)local_a8 * 4 + (long)local_b8 * 0x10);
            *(int *)((long)param_1 + 0x24) = (int)sVar8;
            if ((int)(uVar15 >> 3) <= *(int *)(param_1 + 1)) {
              uVar12 = 0;
              goto LAB_00e94cb4;
            }
          }
          uVar12 = 0xb;
        }
      }
      else {
        uVar12 = 1;
      }
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
LAB_00e94cb4:
  if (*(long *)(lVar9 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}

