
void pvmp3_framedecoder(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  short sVar9;
  long lVar10;
  bool bVar11;
  int iVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  int *piVar24;
  int *piVar25;
  int *piVar26;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_9c;
  int local_84;
  int *local_80 [2];
  long local_70;
  
  lVar10 = tpidr_el0;
  local_70 = *(long *)(lVar10 + 0x28);
  puVar3 = (uint *)(param_2 + 0x1ae2);
  local_84 = 0;
  piVar4 = param_2 + 0x1ae0;
  *(undefined8 *)(param_2 + 0x1ae0) = *param_1;
  *puVar3 = *(int *)((long)param_1 + 0xc) << 3;
  param_2[0x1ae3] = *(int *)(param_1 + 1);
  uVar13 = pvmp3_decode_header(piVar4,&local_b8,&local_84);
  if ((int)uVar13 == 0) {
    iVar12 = 1;
    if (local_9c != 3) {
      iVar12 = 2;
    }
    *param_2 = iVar12;
    *(short *)((long)param_1 + 0x1c) = (short)iVar12;
    iVar12 = 0x480;
    if (local_b8 != 0) {
      iVar12 = 0x240;
    }
    iVar12 = iVar12 << (local_9c != 3);
    if (*(int *)(param_1 + 5) < iVar12) {
      uVar13 = 0xd;
    }
    else {
      *(int *)(param_1 + 5) = iVar12;
      piVar1 = param_2 + 0xc9;
      piVar5 = param_2 + 0x96a;
      local_80[0] = piVar1;
      local_80[1] = piVar5;
      if (local_b0 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = getUpTo17bits(piVar4,0x10);
      }
      if (local_b4 == 3) {
        lVar21 = param_1[7];
        piVar6 = param_2 + 0x1287;
        uVar13 = pvmp3_get_side_info(piVar4,piVar6,&local_b8,&local_84);
        if ((int)uVar13 == 0) {
          bVar11 = false;
          if ((local_b0 != 0) && (local_84 != iVar12)) {
            bVar11 = *(int *)((long)param_1 + 0x2c) != 0;
          }
          iVar12 = pvmp3_get_main_data_size(&local_b8,param_2);
          if ((uint)param_2[1] <= (uint)param_2[0x1ae3]) {
            fillMainDataBuf(param_2,iVar12);
            uVar14 = param_2[0x12dc];
            uVar16 = uVar14 >> 3;
            if ((uVar14 & 0xfffffff8) < uVar14) {
              uVar16 = uVar16 + 1;
              uVar14 = uVar16 * 8;
              param_2[0x12dc] = uVar14;
            }
            iVar8 = param_2[2];
            iVar17 = iVar8;
            if (0x2000 < uVar16) {
              uVar14 = uVar14 - 0x10000;
              param_2[2] = iVar8 + -0x2000;
              param_2[0x12dc] = uVar14;
              iVar17 = iVar8 + -0x2000;
            }
            param_2[2] = iVar17 + iVar12;
            if ((bVar11) || (iVar12 = (iVar8 - *piVar6) - uVar16, iVar12 < 0)) {
              memset(param_2 + 0xbab,0,0x900);
              memset(param_2 + 0x30a,0,0x900);
              memset(param_2 + 0x78a,0,0x780);
              memset(param_2 + 0x102b,0,0x780);
              *piVar1 = 0x23f;
              *piVar5 = 0x23f;
              bVar11 = true;
            }
            else {
              bVar11 = false;
              param_2[0x12dc] = uVar14 + iVar12 * 8;
            }
            uVar20 = 0;
            piVar4 = param_2 + 3;
            piVar7 = param_2 + 0x128d;
            piVar2 = piVar7;
            do {
              if (bVar11) {
LAB_00ec1100:
                iVar12 = *param_2;
                if (0 < iVar12) {
                  lVar19 = 0;
                  lVar23 = lVar21;
                  piVar24 = piVar2;
                  do {
                    piVar25 = local_80[lVar19];
                    piVar26 = piVar25 + 0x241;
                    pvmp3_reorder(piVar26,piVar24,piVar25,&local_b8,piVar4);
                    pvmp3_alias_reduction(piVar26,piVar24,piVar25,&local_b8);
                    if ((piVar24[6] == 0) || (piVar24[4] == 0)) {
                      uVar15 = 0;
                    }
                    else {
                      uVar15 = 4;
                      if (local_a8 != 2 || local_b8 != 2) {
                        uVar15 = 2;
                      }
                    }
                    pvmp3_imdct_synth(piVar26,piVar25 + 1,piVar24[5],uVar15,*piVar25,piVar4);
                    pvmp3_poly_phase_synthesis
                              (piVar25,*param_2,*(undefined4 *)((long)param_1 + 0x14),lVar23);
                    iVar12 = *param_2;
                    lVar19 = lVar19 + 1;
                    lVar23 = lVar23 + 2;
                    piVar24 = piVar24 + 0x28;
                  } while (lVar19 < iVar12);
                }
              }
              else {
                iVar12 = *param_2;
                if (0 < iVar12) {
                  uVar22 = 0;
                  piVar24 = param_2 + 0x120b;
                  piVar26 = piVar2;
                  do {
                    iVar12 = param_2[0x12dc];
                    if (local_b8 == 0) {
                      pvmp3_get_scale_factors
                                (piVar24,piVar6,uVar20 & 0xffffffff,uVar22 & 0xffffffff,
                                 param_2 + 0x12da);
                    }
                    else {
                      pvmp3_mpeg2_get_scale_factors
                                (piVar24,piVar6,uVar20 & 0xffffffff,uVar22 & 0xffffffff,&local_b8,
                                 piVar4,param_2 + 0x12da);
                    }
                    piVar18 = local_80[uVar22];
                    piVar25 = piVar18 + 0x241;
                    iVar12 = pvmp3_huffman_parsing(piVar25,piVar26,param_2,iVar12,&local_b8);
                    *piVar18 = iVar12;
                    pvmp3_dequantize_sample(piVar25,piVar24,piVar26,iVar12,&local_b8);
                    uVar22 = uVar22 + 1;
                    piVar24 = piVar24 + 0x3e;
                    piVar26 = piVar26 + 0x28;
                  } while ((long)uVar22 < (long)*param_2);
                  if (*param_2 == 2) {
                    iVar12 = *piVar1;
                    if (*piVar1 <= *piVar5) {
                      iVar12 = *piVar5;
                    }
                    *piVar1 = iVar12;
                    *piVar5 = iVar12;
                    if (local_b8 == 0) {
                      pvmp3_stereo_proc(param_2 + 0x30a,param_2 + 0xbab,param_2 + 0x1249,
                                        piVar7 + uVar20 * 0x12,iVar12,&local_b8);
                    }
                    else {
                      pvmp3_mpeg2_stereo_proc
                                (param_2 + 0x30a,param_2 + 0xbab,param_2 + 0x1249,
                                 piVar7 + uVar20 * 0x12,param_2 + uVar20 * 0x12 + 0x12b5,piVar4,
                                 iVar12,&local_b8);
                    }
                  }
                  goto LAB_00ec1100;
                }
              }
              lVar21 = lVar21 + (long)(iVar12 * 0x240) * 2;
              uVar20 = uVar20 + 1;
              uVar22 = 1;
              if (local_b8 == 0) {
                uVar22 = 2;
              }
              piVar2 = piVar2 + 0x12;
            } while (uVar20 < uVar22);
            if (local_ac < 1) {
              uVar16 = *puVar3;
            }
            else {
              uVar14 = param_2[1] * 8;
              uVar16 = *puVar3;
              if (0 < (int)(uVar14 - *puVar3)) {
                *puVar3 = uVar14;
                uVar16 = uVar14;
              }
            }
            *(short *)((long)param_1 + 0x1e) = (short)local_b8;
            *(uint *)((long)param_1 + 0xc) = uVar16 >> 3;
            *(uint *)(param_1 + 6) = *(int *)(param_1 + 6) + uVar16;
            sVar9 = *(short *)(mp3_bitrate + (long)local_ac * 2 + (long)(short)local_b8 * 0x1e);
            *(undefined4 *)(param_1 + 4) =
                 *(undefined4 *)(mp3_s_freq + (long)local_a8 * 4 + (long)local_b8 * 0x10);
            *(int *)((long)param_1 + 0x24) = (int)sVar9;
            if ((int)(uVar16 >> 3) <= *(int *)(param_1 + 1)) {
              uVar13 = 0;
              goto LAB_00ec1268;
            }
          }
          uVar13 = 0xb;
        }
      }
      else {
        uVar13 = 1;
      }
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
LAB_00ec1268:
  if (*(long *)(lVar10 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar13);
  }
  return;
}

