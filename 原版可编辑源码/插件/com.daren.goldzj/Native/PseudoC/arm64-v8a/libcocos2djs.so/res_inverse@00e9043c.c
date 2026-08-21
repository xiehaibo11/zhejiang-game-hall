
undefined8 res_inverse(long *param_1,int *param_2,undefined8 *param_3,int *param_4,uint param_5)

{
  bool bVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  uint uVar25;
  long lVar26;
  long lStack_e8;
  long alStack_e0 [4];
  int local_bc;
  long local_b8;
  ulong local_b0;
  ulong local_a8;
  long local_a0;
  long local_98;
  long *local_90;
  long *local_88;
  long local_80;
  ulong local_78;
  undefined8 *local_70;
  long local_68;
  
  local_70 = param_3;
  local_98 = tpidr_el0;
  local_68 = *(long *)(local_98 + 0x28);
  iVar21 = param_2[10];
  local_80 = *(long *)(*param_1 + 0x30);
  local_88 = (long *)(long)iVar21;
  local_a0 = *(long *)(local_80 + 0x50) + (ulong)*(byte *)((long)param_2 + 0x2d) * 0x68;
  local_78 = *(ulong *)(local_a0 + 0x20);
  local_a8 = local_78 & 0xffffffff;
  iVar9 = (int)*(undefined8 *)(local_80 + param_1[0xb] * 8);
  iVar20 = (int)local_78;
  if (1 < *param_2) {
    iVar9 = (int)(iVar9 * param_5) >> 1;
    iVar5 = (int)*(long *)(param_2 + 8);
    if ((long)iVar9 <= *(long *)(param_2 + 8)) {
      iVar5 = iVar9;
    }
    iVar5 = iVar5 - (int)*(long *)(param_2 + 6);
    if (0 < iVar5) {
      uVar10 = 0;
      if (iVar21 != 0) {
        uVar10 = iVar5 / iVar21;
      }
      local_b0 = (ulong)uVar10;
      local_bc = iVar20 + -1;
      iVar9 = 0;
      if (iVar20 != 0) {
        iVar9 = (int)(local_bc + uVar10) / iVar20;
      }
      local_b8 = (long)alStack_e0 - ((long)(iVar9 * iVar20) + 0xfU & 0xfffffffffffffff0);
      lVar14 = (long)(int)param_5;
      if ((int)param_5 < 1) {
        if (param_5 == 0) goto LAB_00e90ad0;
      }
      else {
        lVar26 = 0;
        do {
          if (param_4[lVar26] != 0) break;
          lVar26 = lVar26 + 1;
        } while (lVar26 < lVar14);
        if ((uint)lVar26 == param_5) goto LAB_00e90ad0;
      }
      uVar12 = (uint)*(byte *)((long)param_2 + 0x2e);
      if (*(byte *)((long)param_2 + 0x2e) != 0) {
        iVar9 = 0;
        if (lVar14 != 0) {
          iVar9 = (int)(*(long *)(param_2 + 6) / lVar14);
        }
        local_88 = param_1 + 1;
        uVar25 = 0;
        alStack_e0[1] = (long)iVar9;
        uVar4 = 0;
        if (param_5 != 0) {
          uVar4 = iVar21 / (int)param_5;
        }
        local_90 = (long *)(ulong)uVar4;
        alStack_e0[3] = (long)(iVar20 + -2);
        do {
          if (0 < (int)local_b0) {
            uVar23 = 0;
            do {
              iVar9 = (int)uVar23;
              if (uVar25 == 0) {
                *(undefined1 *)(local_b8 + (local_bc + iVar9)) = 1;
                if (-1 < (int)alStack_e0[3]) {
                  iVar21 = param_2[0xb];
                  lVar14 = alStack_e0[3];
                  do {
                    pcVar2 = (char *)(local_b8 + iVar9 + lVar14);
                    *pcVar2 = (char)iVar21 * pcVar2[1];
                    bVar1 = 0 < lVar14;
                    lVar14 = lVar14 + -1;
                  } while (bVar1);
                }
                uVar12 = vorbis_book_decode(local_a0,local_88);
                if (uVar12 == 0xffffffff) goto LAB_00e90ad0;
                if (0 < (int)local_78) {
                  pbVar11 = (byte *)(local_b8 + iVar9);
                  uVar13 = local_a8;
                  do {
                    bVar3 = *pbVar11;
                    uVar13 = uVar13 - 1;
                    uVar6 = 0;
                    if (bVar3 != 0) {
                      uVar6 = uVar12 / bVar3;
                    }
                    *pbVar11 = (byte)uVar6;
                    uVar12 = uVar12 - (uVar6 & 0xff) * (uint)bVar3;
                    pbVar11 = pbVar11 + 1;
                  } while (uVar13 != 0);
                  goto LAB_00e90708;
                }
              }
              else {
LAB_00e90708:
                if ((0 < (int)local_78) && (iVar9 < (int)local_b0)) {
                  lVar8 = (long)iVar9;
                  lVar14 = local_b8 + lVar8;
                  lVar26 = alStack_e0[1] + (int)uVar4 * lVar8;
                  lVar22 = 0;
                  alStack_e0[2] = uVar23;
                  do {
                    uVar23 = (ulong)*(byte *)(lVar14 + lVar22);
                    if (((1 << (ulong)(uVar25 & 0x1f) &
                         (uint)*(byte *)(*(long *)(param_2 + 2) + uVar23)) != 0) &&
                       (lVar7 = vorbis_book_decodevv_add
                                          (*(long *)(local_80 + 0x50) +
                                           (ulong)*(byte *)(*(long *)(param_2 + 4) +
                                                           uVar23 * 8 + (ulong)uVar25) * 0x68,
                                           local_70,lVar26,param_5,local_88,local_90,0xfffffff8),
                       lVar7 == -1)) goto LAB_00e90ad0;
                    iVar9 = (int)(lVar22 + 1);
                  } while ((iVar9 < (int)local_78) &&
                          (lVar7 = lVar8 + 1 + lVar22, lVar26 = lVar26 + (int)uVar4,
                          lVar22 = lVar22 + 1, lVar7 < (int)uVar10));
                  uVar23 = (ulong)(uint)((int)alStack_e0[2] + iVar9);
                }
              }
            } while ((int)uVar23 < (int)local_b0);
            uVar12 = (uint)*(byte *)((long)param_2 + 0x2e);
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 < uVar12);
      }
    }
    goto LAB_00e90ad0;
  }
  iVar9 = iVar9 >> 1;
  iVar5 = (int)*(long *)(param_2 + 8);
  if ((long)iVar9 <= *(long *)(param_2 + 8)) {
    iVar5 = iVar9;
  }
  if ((iVar5 - param_2[6] < 1) || ((int)param_5 < 1)) goto LAB_00e90ad0;
  uVar23 = 0;
  uVar10 = 0;
  if (iVar21 != 0) {
    uVar10 = (iVar5 - param_2[6]) / iVar21;
  }
  local_b0 = (ulong)uVar10;
  local_bc = iVar20 + -1;
  uVar13 = (ulong)param_5;
  puVar15 = param_3;
  do {
    if (*param_4 != 0) {
      param_3[(int)uVar23] = *puVar15;
      uVar23 = (ulong)((int)uVar23 + 1);
    }
    puVar15 = puVar15 + 1;
    uVar13 = uVar13 - 1;
    param_4 = param_4 + 1;
  } while (uVar13 != 0);
  iVar9 = (int)uVar23;
  if (iVar9 == 0) goto LAB_00e90ad0;
  lVar14 = -((-(uVar23 >> 0x1f) & 0xfffffff800000000 | uVar23 << 3) + 0xf & 0xfffffffffffffff0);
  plVar24 = (long *)((long)alStack_e0 + lVar14);
  if (0 < iVar9) {
    iVar21 = 0;
    if (iVar20 != 0) {
      iVar21 = (int)(iVar20 + -1 + uVar10) / iVar20;
    }
    if (iVar9 == 1) {
      uVar16 = 0;
      plVar17 = plVar24;
    }
    else {
      uVar16 = uVar23 & 0xfffffffe;
      puVar15 = (undefined8 *)((long)alStack_e0 + lVar14 + 8);
      plVar17 = plVar24;
      uVar13 = uVar16;
      do {
        uVar19 = (long)(iVar21 * iVar20) + 0xfU & 0xfffffffffffffff0;
        lVar14 = (long)plVar17 - uVar19;
        plVar17 = (long *)(lVar14 - uVar19);
        puVar15[-1] = lVar14;
        *puVar15 = plVar17;
        uVar13 = uVar13 - 2;
        puVar15 = puVar15 + 2;
      } while (uVar13 != 0);
      if (uVar16 == uVar23) goto LAB_00e90868;
    }
    lVar14 = uVar23 - uVar16;
    plVar18 = plVar24 + uVar16;
    do {
      plVar17 = (long *)((long)plVar17 + -((long)(iVar21 * iVar20) + 0xfU & 0xfffffffffffffff0));
      lVar14 = lVar14 + -1;
      *plVar18 = (long)plVar17;
      plVar18 = plVar18 + 1;
    } while (lVar14 != 0);
  }
LAB_00e90868:
  uVar10 = (uint)*(byte *)((long)param_2 + 0x2e);
  if (*(byte *)((long)param_2 + 0x2e) != 0) {
    local_90 = param_1 + 1;
    uVar12 = 0;
    local_b8 = (long)(int)local_b0;
    alStack_e0[2] = uVar23;
    alStack_e0[3] = (long)((int)local_78 + -2);
    alStack_e0[1] = (long)(int)local_78 + -1;
    do {
      if (0 < (int)local_b0) {
        lVar14 = 0;
        do {
          iVar21 = (int)lVar14;
          if (uVar12 == 0) {
            lVar26 = *plVar24;
            *(undefined1 *)(lVar26 + (local_bc + iVar21)) = 1;
            if (-1 < (int)alStack_e0[3]) {
              lVar22 = alStack_e0[3];
              do {
                pcVar2 = (char *)(lVar26 + iVar21 + lVar22);
                *pcVar2 = (char)param_2[0xb] * pcVar2[1];
                bVar1 = 0 < lVar22;
                lVar22 = lVar22 + -1;
              } while (bVar1);
            }
            if (1 < iVar9) {
              uVar23 = 1;
              do {
                if (0 < (int)local_78) {
                  lVar26 = (plVar24 + uVar23)[-1];
                  lVar22 = plVar24[uVar23];
                  lVar8 = alStack_e0[1];
                  do {
                    *(undefined1 *)(lVar22 + iVar21 + lVar8) =
                         *(undefined1 *)(lVar26 + iVar21 + lVar8);
                    bVar1 = 0 < lVar8;
                    lVar8 = lVar8 + -1;
                  } while (bVar1);
                }
                uVar23 = uVar23 + 1;
              } while (uVar23 != alStack_e0[2]);
            }
            if (0 < iVar9) {
              lVar26 = 0;
              do {
                uVar10 = vorbis_book_decode(local_a0,local_90);
                if (uVar10 == 0xffffffff) goto LAB_00e90ad0;
                if (0 < (int)local_78) {
                  pbVar11 = (byte *)(plVar24[lVar26] + (long)iVar21);
                  uVar23 = local_a8;
                  do {
                    bVar3 = *pbVar11;
                    uVar23 = uVar23 - 1;
                    uVar25 = 0;
                    if (bVar3 != 0) {
                      uVar25 = uVar10 / bVar3;
                    }
                    *pbVar11 = (byte)uVar25;
                    uVar10 = uVar10 - (uVar25 & 0xff) * (uint)bVar3;
                    pbVar11 = pbVar11 + 1;
                  } while (uVar23 != 0);
                }
                lVar26 = lVar26 + 1;
              } while (lVar26 < iVar9);
            }
          }
          if ((0 < (int)local_78) && (iVar21 < (int)local_b0)) {
            iVar20 = 0;
            lVar14 = (long)iVar21;
            do {
              if (0 < iVar9) {
                lVar26 = 0;
                lVar22 = lVar14 * (long)local_88;
                do {
                  if ((1 << (ulong)(uVar12 & 0x1f) &
                      (uint)*(byte *)(*(long *)(param_2 + 2) +
                                     (ulong)*(byte *)(plVar24[lVar26] + lVar14))) != 0) {
                    lVar7 = *(long *)(local_80 + 0x50) +
                            (ulong)*(byte *)(*(long *)(param_2 + 4) +
                                            (ulong)*(byte *)(plVar24[lVar26] + lVar14) * 8 +
                                            (ulong)uVar12) * 0x68;
                    lVar8 = local_70[lVar26] + (*(long *)(param_2 + 6) + lVar22) * 4;
                    if (*param_2 == 0) {
                      lVar8 = vorbis_book_decodevs_add(lVar7,lVar8,local_90,local_88,0xfffffff8);
                    }
                    else {
                      lVar8 = vorbis_book_decodev_add(lVar7,lVar8,local_90,local_88);
                    }
                    if (lVar8 == -1) goto LAB_00e90ad0;
                  }
                  lVar26 = lVar26 + 1;
                } while (lVar26 < iVar9);
              }
              iVar20 = iVar20 + 1;
              lVar14 = lVar14 + 1;
            } while ((iVar20 < (int)local_78) && (lVar14 < local_b8));
          }
        } while ((int)lVar14 < (int)local_b0);
        uVar10 = (uint)*(byte *)((long)param_2 + 0x2e);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar10);
  }
LAB_00e90ad0:
  if (*(long *)(local_98 + 0x28) == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

