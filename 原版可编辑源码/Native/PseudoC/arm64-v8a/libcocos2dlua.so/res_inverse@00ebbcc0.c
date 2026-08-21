
undefined8 res_inverse(long *param_1,int *param_2,long *param_3,int *param_4,ulong param_5)

{
  bool bVar1;
  char *pcVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  uint uVar24;
  int iVar25;
  long lVar26;
  int iVar27;
  long local_e0 [2];
  long local_d0;
  ulong local_c8;
  ulong local_c0;
  long *local_b8;
  ulong local_b0;
  ulong local_a8;
  long local_a0;
  long local_98;
  ulong local_90;
  long *local_88;
  ulong local_80;
  long *local_78;
  long local_70;
  long local_68;
  
  local_98 = tpidr_el0;
  local_68 = *(long *)(local_98 + 0x28);
  iVar25 = param_2[10];
  local_80 = (ulong)iVar25;
  local_70 = *(long *)(*param_1 + 0x30);
  local_a0 = *(long *)(local_70 + 0x50) + (ulong)*(byte *)((long)param_2 + 0x2d) * 0x68;
  local_b0 = *(ulong *)(local_a0 + 0x20) & 0xffffffff;
  iVar11 = (int)*(undefined8 *)(local_70 + param_1[0xb] * 8);
  iVar10 = (int)param_5;
  iVar27 = (int)*(ulong *)(local_a0 + 0x20);
  local_78 = param_3;
  if (1 < *param_2) {
    iVar11 = iVar11 * iVar10 >> 1;
    iVar4 = (int)*(long *)(param_2 + 8);
    if ((long)iVar11 <= *(long *)(param_2 + 8)) {
      iVar4 = iVar11;
    }
    iVar4 = iVar4 - (int)*(long *)(param_2 + 6);
    if (0 < iVar4) {
      uVar12 = 0;
      if (iVar25 != 0) {
        uVar12 = iVar4 / iVar25;
      }
      local_a8 = (ulong)uVar12;
      iVar11 = 0;
      if (iVar27 != 0) {
        iVar11 = (int)(iVar27 + -1 + uVar12) / iVar27;
      }
      local_c0 = CONCAT44(local_c0._4_4_,iVar27 + -1);
      local_b8 = (long *)((long)local_e0 - ((long)(iVar11 * iVar27) + 0xfU & 0xfffffffffffffff0));
      if (iVar10 < 1) {
        if (iVar10 == 0) goto LAB_00ebc380;
      }
      else {
        uVar23 = 0;
        do {
          if (param_4[uVar23] != 0) break;
          uVar23 = uVar23 + 1;
        } while ((param_5 & 0xffffffff) != uVar23);
        if ((int)uVar23 == iVar10) goto LAB_00ebc380;
      }
      uVar7 = (uint)*(byte *)((long)param_2 + 0x2e);
      if (*(byte *)((long)param_2 + 0x2e) != 0) {
        local_88 = param_1 + 1;
        iVar11 = 0;
        if ((long)iVar10 != 0) {
          iVar11 = (int)(*(long *)(param_2 + 6) / (long)iVar10);
        }
        uVar6 = 0;
        if (iVar10 != 0) {
          uVar6 = iVar25 / iVar10;
        }
        local_90 = (ulong)uVar6;
        uVar24 = 0;
        local_d0 = (long)(iVar27 + -2);
        local_e0[1] = (long)iVar11;
        local_80 = param_5;
        do {
          if (0 < (int)local_a8) {
            uVar23 = 0;
            do {
              iVar11 = (int)uVar23;
              if (uVar24 == 0) {
                *(undefined1 *)((long)local_b8 + (long)((int)local_c0 + iVar11)) = 1;
                pbVar14 = (byte *)((long)local_b8 + (long)iVar11);
                if (-1 < (int)local_d0) {
                  iVar25 = param_2[0xb];
                  lVar15 = local_d0;
                  do {
                    pbVar14[lVar15] = (char)iVar25 * (pbVar14 + lVar15)[1];
                    bVar1 = 0 < lVar15;
                    lVar15 = lVar15 + -1;
                  } while (bVar1);
                }
                uVar7 = vorbis_book_decode(local_a0,local_88);
                if (uVar7 == 0xffffffff) goto LAB_00ebc380;
                param_5 = local_80;
                uVar13 = local_b0;
                if (0 < iVar27) {
                  do {
                    bVar3 = *pbVar14;
                    uVar13 = uVar13 - 1;
                    uVar5 = 0;
                    if (bVar3 != 0) {
                      uVar5 = uVar7 / bVar3;
                    }
                    *pbVar14 = (byte)uVar5;
                    uVar7 = uVar7 - (uVar5 & 0xff) * (uint)bVar3;
                    pbVar14 = pbVar14 + 1;
                  } while (uVar13 != 0);
                  goto LAB_00ebbf54;
                }
              }
              else {
LAB_00ebbf54:
                plVar22 = local_b8;
                if ((0 < iVar27) && (iVar11 < (int)local_a8)) {
                  lVar9 = (long)iVar11;
                  lVar15 = local_e0[1] + (int)uVar6 * lVar9;
                  lVar26 = 0;
                  local_c8 = uVar23;
                  do {
                    bVar3 = *(byte *)((long)plVar22 + lVar26 + lVar9);
                    if ((((uint)bVar3 < (uint)*(byte *)(param_2 + 0xb)) &&
                        ((1 << (ulong)(uVar24 & 0x1f) &
                         (uint)*(byte *)(*(long *)(param_2 + 2) + (ulong)(uint)bVar3)) != 0)) &&
                       (lVar8 = vorbis_book_decodevv_add
                                          (*(long *)(local_70 + 0x50) +
                                           (ulong)*(byte *)(*(long *)(param_2 + 4) +
                                                           (ulong)bVar3 * 8 + (ulong)uVar24) * 0x68,
                                           local_78,lVar15,param_5 & 0xffffffff,local_88,local_90,
                                           0xfffffff8), param_5 = local_80, lVar8 == -1))
                    goto LAB_00ebc380;
                    iVar11 = (int)(lVar26 + 1);
                  } while ((iVar11 < iVar27) &&
                          (lVar8 = lVar9 + 1 + lVar26, lVar15 = lVar15 + (int)uVar6,
                          lVar26 = lVar26 + 1, lVar8 < (int)uVar12));
                  uVar23 = (ulong)(uint)((int)local_c8 + iVar11);
                }
              }
            } while ((int)uVar23 < (int)local_a8);
            uVar7 = (uint)*(byte *)((long)param_2 + 0x2e);
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 < uVar7);
      }
    }
    goto LAB_00ebc380;
  }
  iVar11 = iVar11 >> 1;
  iVar4 = (int)*(long *)(param_2 + 8);
  if ((long)iVar11 <= *(long *)(param_2 + 8)) {
    iVar4 = iVar11;
  }
  if ((iVar4 - param_2[6] < 1) || (iVar10 < 1)) goto LAB_00ebc380;
  uVar23 = 0;
  uVar12 = 0;
  if (iVar25 != 0) {
    uVar12 = (iVar4 - param_2[6]) / iVar25;
  }
  local_c0 = (ulong)uVar12;
  local_d0 = CONCAT44(local_d0._4_4_,iVar27 + -1);
  param_5 = param_5 & 0xffffffff;
  iVar11 = *param_4;
  plVar22 = param_3;
  while( true ) {
    if (iVar11 != 0) {
      param_3[(int)uVar23] = *plVar22;
      uVar23 = (ulong)((int)uVar23 + 1);
    }
    plVar22 = plVar22 + 1;
    param_5 = param_5 - 1;
    param_4 = param_4 + 1;
    if (param_5 == 0) break;
    iVar11 = *param_4;
  }
  iVar11 = (int)uVar23;
  if (iVar11 == 0) goto LAB_00ebc380;
  lVar15 = -((-(uVar23 >> 0x1f) & 0xfffffff800000000 | uVar23 << 3) + 0xf & 0xfffffffffffffff0);
  plVar22 = (long *)((long)local_e0 + lVar15);
  if (0 < iVar11) {
    iVar25 = 0;
    if (iVar27 != 0) {
      iVar25 = (int)(iVar27 + -1 + uVar12) / iVar27;
    }
    if (iVar11 == 1) {
      uVar16 = 0;
      plVar17 = plVar22;
    }
    else {
      uVar16 = uVar23 & 0xfffffffe;
      puVar18 = (undefined8 *)((long)local_e0 + lVar15 + 8);
      plVar17 = plVar22;
      uVar13 = uVar16;
      do {
        uVar20 = (long)(iVar25 * iVar27) + 0xfU & 0xfffffffffffffff0;
        lVar15 = (long)plVar17 - uVar20;
        plVar17 = (long *)(lVar15 - uVar20);
        puVar18[-1] = lVar15;
        *puVar18 = plVar17;
        uVar13 = uVar13 - 2;
        puVar18 = puVar18 + 2;
      } while (uVar13 != 0);
      if (uVar16 == uVar23) goto LAB_00ebc0ec;
    }
    lVar15 = uVar23 - uVar16;
    plVar19 = plVar22 + uVar16;
    do {
      plVar17 = (long *)((long)plVar17 + -((long)(iVar25 * iVar27) + 0xfU & 0xfffffffffffffff0));
      lVar15 = lVar15 + -1;
      *plVar19 = (long)plVar17;
      plVar19 = plVar19 + 1;
    } while (lVar15 != 0);
  }
LAB_00ebc0ec:
  uVar12 = (uint)*(byte *)((long)param_2 + 0x2e);
  local_b8 = plVar22;
  if (*(byte *)((long)param_2 + 0x2e) != 0) {
    local_88 = param_1 + 1;
    local_e0[1] = (long)(iVar27 + -2);
    local_90 = local_90 & 0xffffffff00000000;
    local_e0[0] = (long)(int)local_b0;
    local_c8 = (ulong)(int)local_c0;
    local_a8 = uVar23;
    do {
      if (0 < (int)local_c0) {
        lVar15 = 0;
        uVar12 = (uint)local_90 & 0x1f;
        do {
          iVar25 = (int)lVar15;
          if ((uint)local_90 == 0) {
            lVar26 = *local_b8;
            *(undefined1 *)(lVar26 + ((int)local_d0 + iVar25)) = 1;
            if (-1 < (int)local_e0[1]) {
              lVar9 = local_e0[1];
              do {
                pcVar2 = (char *)(lVar26 + iVar25 + lVar9);
                *pcVar2 = (char)param_2[0xb] * pcVar2[1];
                bVar1 = 0 < lVar9;
                lVar9 = lVar9 + -1;
              } while (bVar1);
            }
            if (1 < iVar11) {
              uVar23 = 1;
              do {
                if (0 < iVar27) {
                  lVar26 = (local_b8 + uVar23)[-1];
                  lVar9 = local_b8[uVar23];
                  lVar8 = local_e0[0];
                  do {
                    lVar21 = lVar8 + -1;
                    *(undefined1 *)(lVar9 + iVar25 + -1 + lVar8) =
                         *(undefined1 *)(lVar26 + iVar25 + -1 + lVar8);
                    lVar8 = lVar21;
                  } while (0 < lVar21);
                }
                uVar23 = uVar23 + 1;
              } while (uVar23 != local_a8);
            }
            if (0 < iVar11) {
              uVar23 = 0;
              do {
                uVar7 = vorbis_book_decode(local_a0,local_88);
                if (uVar7 == 0xffffffff) goto LAB_00ebc380;
                if (0 < iVar27) {
                  pbVar14 = (byte *)(local_b8[uVar23] + (long)iVar25);
                  uVar13 = local_b0;
                  do {
                    bVar3 = *pbVar14;
                    uVar13 = uVar13 - 1;
                    uVar6 = 0;
                    if (bVar3 != 0) {
                      uVar6 = uVar7 / bVar3;
                    }
                    *pbVar14 = (byte)uVar6;
                    uVar7 = uVar7 - (uVar6 & 0xff) * (uint)bVar3;
                    pbVar14 = pbVar14 + 1;
                  } while (uVar13 != 0);
                }
                uVar23 = uVar23 + 1;
              } while (uVar23 != local_a8);
            }
          }
          if ((0 < iVar27) && (iVar25 < (int)local_c0)) {
            iVar10 = 0;
            lVar15 = (long)iVar25;
            do {
              if (0 < iVar11) {
                lVar26 = lVar15 * local_80;
                uVar23 = local_a8;
                plVar22 = local_78;
                plVar17 = local_b8;
                do {
                  bVar3 = *(byte *)(*plVar17 + lVar15);
                  if (((uint)bVar3 < (uint)*(byte *)(param_2 + 0xb)) &&
                     ((1 << (ulong)uVar12 &
                      (uint)*(byte *)(*(long *)(param_2 + 2) + (ulong)(uint)bVar3)) != 0)) {
                    lVar8 = *(long *)(local_70 + 0x50) +
                            (ulong)*(byte *)(*(long *)(param_2 + 4) +
                                            (ulong)bVar3 * 8 + (local_90 & 0xffffffff)) * 0x68;
                    lVar9 = *plVar22 + (*(long *)(param_2 + 6) + lVar26) * 4;
                    if (*param_2 == 0) {
                      lVar9 = vorbis_book_decodevs_add(lVar8,lVar9,local_88,local_80,0xfffffff8);
                    }
                    else {
                      lVar9 = vorbis_book_decodev_add(lVar8,lVar9,local_88,local_80);
                    }
                    if (lVar9 == -1) goto LAB_00ebc380;
                  }
                  plVar22 = plVar22 + 1;
                  uVar23 = uVar23 - 1;
                  plVar17 = plVar17 + 1;
                } while (uVar23 != 0);
              }
              iVar10 = iVar10 + 1;
              lVar15 = lVar15 + 1;
            } while ((iVar10 < iVar27) && (lVar15 < (long)local_c8));
          }
        } while ((int)lVar15 < (int)local_c0);
        uVar12 = (uint)*(byte *)((long)param_2 + 0x2e);
      }
      uVar7 = (uint)local_90 + 1;
      local_90 = CONCAT44(local_90._4_4_,uVar7);
    } while (uVar7 < uVar12);
  }
LAB_00ebc380:
  if (*(long *)(local_98 + 0x28) == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

