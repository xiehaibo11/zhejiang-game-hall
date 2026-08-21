
/* WARNING: Type propagation algorithm not settling */

int ps_hints_apply(long param_1,short *param_2,undefined8 *param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  ulong uVar18;
  uint *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  uint *puVar24;
  byte *pbVar25;
  byte *pbVar26;
  uint uVar27;
  long lVar28;
  undefined8 *puVar29;
  ulong *puVar30;
  uint uVar31;
  uint uVar32;
  int *piVar33;
  int iVar34;
  long lVar35;
  ulong uVar36;
  long *plVar37;
  int *piVar38;
  long *plVar39;
  long *plVar40;
  ulong uVar41;
  ulong *puVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  undefined4 *puVar46;
  ulong uVar47;
  long lVar48;
  ulong *puVar49;
  ulong *puVar50;
  undefined8 uVar51;
  ulong *puVar52;
  ulong local_1d8;
  uint local_1c0;
  uint local_1bc;
  ulong local_1b8;
  ulong *local_1b0;
  undefined8 local_1a8;
  short *local_1a0;
  undefined8 *local_198;
  uint local_190 [2];
  long local_188 [3];
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  long alStack_158 [4];
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined2 local_f4;
  bool local_f2;
  bool local_f1;
  bool local_f0;
  int iStack_e4;
  ulong local_e0 [16];
  
                    /* try { // try from 010a9120 to 011a9137 has its CatchHandler @ 010a9238 */
                    /* try { // try from 010a9138 to 011a928b has its CatchHandler @ 010a90b0 */
  sVar6 = param_2[1];
  if (((long)sVar6 == 0) || (*param_2 == 0)) {
    return 0;
  }
  memset(&local_1c0,0,0xd8);
  uVar51 = *param_3;
  local_1a8 = uVar51;
  local_1b8 = ft_mem_realloc(uVar51,0x48,0,(long)sVar6,0,local_e0);
  if (((int)local_e0[0] == 0) &&
     (local_1b0 = (ulong *)ft_mem_realloc(uVar51,0x10,0,(long)*param_2,0,local_e0),
     uVar18 = local_1b8, (int)local_e0[0] == 0)) {
    sVar6 = param_2[1];
    sVar5 = *param_2;
    local_1c0 = (uint)sVar6;
    local_1bc = (uint)sVar5;
    if (local_1bc != 0) {
      lVar28 = *(long *)(param_2 + 0xc);
      uVar22 = 0;
      puVar50 = local_1b0;
      uVar10 = 0;
      do {
        sVar7 = *(short *)(lVar28 + uVar22 * 2);
        plVar37 = (long *)(local_1b8 + (ulong)uVar10 * 0x48);
        *puVar50 = (ulong)plVar37;
        iVar34 = (int)sVar7;
        uVar11 = iVar34 + 1;
        iVar9 = uVar11 - uVar10;
        *(int *)(puVar50 + 1) = iVar9;
        if (0 < iVar9) {
                    /* catch() { ... } // from try @ 010a9120 with catch @ 010a9238 */
          *plVar37 = local_1b8 + (ulong)uVar11 * 0x48 + -0x48;
          *(ulong **)(local_1b8 + (ulong)uVar10 * 0x48 + 0x10) = puVar50;
          plVar39 = plVar37;
          if (iVar9 != 1) {
            iVar9 = (iVar34 + 2) - uVar10;
            plVar40 = (long *)(local_1b8 + 0x48 + (ulong)uVar10 * 0x48);
            do {
              plVar39 = plVar40;
              iVar9 = iVar9 + -1;
              plVar39[-8] = (long)plVar39;
              plVar39[2] = (long)puVar50;
                    /* catch() { ... } // from try @ 010a90f0 with catch @ 010a9270 */
              *plVar39 = (long)(plVar39 + -9);
              plVar40 = plVar39 + 9;
            } while (2 < iVar9);
          }
          plVar39[1] = (long)plVar37;
        }
        uVar22 = uVar22 + 1;
        puVar50 = puVar50 + 2;
        uVar10 = uVar11;
      } while (uVar22 < (ulong)(long)sVar5);
    }
    if (sVar6 != 0) {
      lVar28 = *(long *)(param_2 + 4);
      uVar10 = 0;
      puVar24 = (uint *)(local_1b8 + 0x18);
      do {
        if ((*(byte *)(*(long *)(param_2 + 8) + (ulong)uVar10) & 1) == 0) {
          *puVar24 = 1;
        }
        plVar37 = (long *)(lVar28 + (ulong)uVar10 * 0x10);
        plVar39 = (long *)(lVar28 + ((((long)(*(long *)(puVar24 + -6) - uVar18) >> 3) * 0x38e38e39
                                     << 0x20) >> 0x1c));
        lVar43 = *plVar37;
        lVar45 = plVar37[1];
        lVar35 = lVar43 - *plVar39;
        lVar44 = -lVar35;
        if (-1 < lVar35) {
          lVar44 = lVar35;
        }
        lVar14 = lVar45 - plVar39[1];
        lVar48 = -lVar14;
        if (-1 < lVar14) {
          lVar48 = lVar14;
        }
        if (lVar48 * 0xc < lVar44) {
          iVar9 = -2;
          if (-1 < lVar35) {
            iVar9 = 2;
          }
        }
        else if (lVar44 * 0xc < lVar48) {
          iVar9 = 1;
          if (-1 < lVar14) {
            iVar9 = -1;
          }
        }
        else {
          iVar9 = 4;
        }
        *(char *)(puVar24 + 2) = (char)iVar9;
        plVar37 = (long *)(lVar28 + ((((long)(*(long *)(puVar24 + -4) - uVar18) >> 3) * 0x38e38e39
                                     << 0x20) >> 0x1c));
        lVar43 = *plVar37 - lVar43;
        lVar44 = -lVar43;
        if (-1 < lVar43) {
          lVar44 = lVar43;
        }
        lVar45 = plVar37[1] - lVar45;
        lVar35 = -lVar45;
        if (-1 < lVar45) {
          lVar35 = lVar45;
        }
        if (lVar35 * 0xc < lVar44) {
          iVar34 = -2;
          if (-1 < lVar43) {
            iVar34 = 2;
          }
        }
        else if (lVar44 * 0xc < lVar35) {
                    /* catch() { ... } // from try @ 010a9434 with catch @ 010a93b0 */
          iVar34 = 1;
          if (-1 < lVar45) {
            iVar34 = -1;
          }
        }
        else {
          iVar34 = 4;
        }
        uVar11 = *puVar24;
        *(char *)((long)puVar24 + 9) = (char)iVar34;
        if ((uVar11 & 1) == 0) {
          if (iVar34 == iVar9) {
            if (iVar9 == 4) {
              iVar9 = ft_corner_is_flat();
              if (iVar9 == 0) goto LAB_010a93ec;
              uVar11 = *puVar24;
            }
            goto LAB_010a93e4;
          }
        }
        else {
LAB_010a93e4:
                    /* try { // try from 010a93e8 to 011a93ef has its CatchHandler @ 010a94e8 */
          *puVar24 = uVar11 | 2;
        }
LAB_010a93ec:
        uVar10 = uVar10 + 1;
        puVar24 = puVar24 + 0x12;
      } while (uVar10 < local_1c0);
      puVar20 = *(undefined8 **)(param_2 + 4);
      if (local_1c0 != 0) {
        puVar23 = (undefined8 *)(local_1b8 + 0x38);
        uVar10 = local_1c0;
        do {
          *(undefined4 *)((long)puVar23 + -0x1c) = 0;
                    /* try { // try from 010a941c to 011a9433 has its CatchHandler @ 010a94b0 */
          puVar23[-2] = 0;
          uVar10 = uVar10 - 1;
          puVar23[-1] = *puVar20;
          puVar29 = puVar20 + 1;
          puVar20 = puVar20 + 2;
                    /* try { // try from 010a9434 to 011a9503 has its CatchHandler @ 010a93b0 */
          *puVar23 = *puVar29;
          puVar23 = puVar23 + 9;
        } while (uVar10 != 0);
      }
    }
    local_1a0 = param_2;
    local_198 = param_3;
    if (local_1bc != 0) {
      uVar18 = 0;
      do {
        if (3 < (uint)local_1b0[uVar18 * 2 + 1]) {
          puVar42 = (ulong *)local_1b0[uVar18 * 2];
          puVar50 = puVar42;
          do {
            puVar50 = (ulong *)puVar50[1];
            if (puVar50 == puVar42) goto LAB_010a9578;
            uVar22 = puVar50[6];
            uVar47 = puVar50[7];
            uVar41 = puVar42[6];
            uVar36 = puVar42[7];
            puVar49 = puVar42;
          } while (uVar47 - uVar36 == 0 && uVar22 - uVar41 == 0);
          do {
            puVar30 = puVar49;
            puVar49 = (ulong *)*puVar30;
            if (puVar49 == puVar42) goto LAB_010a9578;
                    /* catch() { ... } // from try @ 010a941c with catch @ 010a94b0 */
            lVar28 = puVar30[6] - puVar49[6];
            lVar44 = puVar30[7] - puVar49[7];
          } while ((lVar44 == 0 && lVar28 == 0) ||
                  (uVar10 = ft_corner_orientation(uVar22 - uVar41,uVar47 - uVar36,lVar28,lVar44),
                  puVar52 = puVar30, uVar10 == 0));
          do {
                    /* catch() { ... } // from try @ 010a93e8 with catch @ 010a94e8 */
            bVar8 = false;
            do {
              uVar22 = puVar50[7];
              uVar41 = puVar50[6];
              do {
                puVar42 = puVar50;
                puVar50 = (ulong *)puVar42[1];
                    /* catch() { ... } // from try @ 010a954c with catch @ 010a9504 */
                if (puVar50 == puVar30) {
                  bVar8 = true;
                }
                lVar43 = puVar50[6] - uVar41;
                lVar45 = puVar50[7] - uVar22;
                uVar22 = puVar50[7];
                uVar41 = puVar50[6];
              } while (lVar45 == 0 && lVar43 == 0);
                    /* try { // try from 010a9538 to 011a954b has its CatchHandler @ 010a95a4 */
              uVar11 = ft_corner_orientation(lVar28,lVar44,lVar43,lVar45);
            } while (uVar11 == 0);
            if ((int)(uVar11 ^ uVar10) < 0) {
              do {
                    /* try { // try from 010a954c to 011a95db has its CatchHandler @ 010a9504 */
                *(uint *)(puVar52 + 3) = (uint)puVar52[3] | 4;
                puVar52 = (ulong *)puVar52[1];
              } while (puVar52 != puVar42);
              *(uint *)(puVar42 + 3) = (uint)puVar42[3] | 4;
            }
            lVar28 = lVar43;
            lVar44 = lVar45;
            puVar52 = puVar42;
            uVar10 = uVar11;
          } while (!bVar8);
        }
LAB_010a9578:
        uVar10 = (int)uVar18 + 1;
        uVar18 = (ulong)uVar10;
      } while (uVar10 < local_1bc);
    }
                    /* catch() { ... } // from try @ 010a9538 with catch @ 010a95a4 */
    local_e0[0]._0_4_ = FUN_010aac3c(local_190,param_1 + 0x18,param_1 + 0x28,uVar51);
    if ((int)local_e0[0] == 0) {
      puVar46 = (undefined4 *)((ulong)&local_1c0 | 4);
      iVar9 = FUN_010aac3c(alStack_158 + 2,param_1 + 0x48,param_1 + 0x58,uVar51);
      if (iVar9 == 0) {
        lVar28 = local_198[0x32];
        uVar51 = local_198[0x65];
        uVar18 = FT_MulFix((long)*(int *)(param_3 + 0x68));
        uVar22 = uVar18 + 0x20 & 0xffffffffffffffc0;
        if (uVar22 == 0) {
          bVar8 = true;
        }
        else {
          bVar8 = true;
          if (uVar18 != uVar22) {
            uVar12 = FT_MulDiv(uVar51,uVar22,uVar18);
            lVar44 = lVar28;
            if ((long)uVar22 < (long)uVar18) {
              lVar44 = lVar28 - lVar28 / 0x32;
            }
            FUN_010aa678(local_198,lVar44,uVar12,0,0);
            bVar8 = false;
          }
        }
        local_f4 = 0x101;
        local_f2 = (param_4 | 1) == 3;
        local_1d8 = 0;
        local_f1 = param_4 == 2 || param_4 == 4;
        local_f0 = param_4 != 1;
        do {
          puVar20 = local_198;
          if (local_1c0 != 0) {
            puVar23 = *(undefined8 **)(local_1a0 + 4);
            if (local_1d8 == 0) {
              puVar29 = (undefined8 *)(local_1b8 + 0x38);
              uVar10 = local_1c0;
              do {
                *(undefined4 *)((long)puVar29 + -0x1c) = 0;
                puVar29[-2] = 0;
                uVar10 = uVar10 - 1;
                    /* catch() { ... } // from try @ 010a961c with catch @ 010a9820 */
                puVar29[-1] = *puVar23;
                puVar1 = puVar23 + 1;
                puVar23 = puVar23 + 2;
                *puVar29 = *puVar1;
                puVar29 = puVar29 + 9;
              } while (uVar10 != 0);
            }
            else {
              puVar23 = puVar23 + 1;
              puVar29 = (undefined8 *)(local_1b8 + 0x38);
              uVar10 = local_1c0;
              do {
                *(undefined4 *)((long)puVar29 + -0x1c) = 0;
                puVar29[-2] = 0;
                    /* catch() { ... } // from try @ 010a9650 with catch @ 010a97e8 */
                uVar10 = uVar10 - 1;
                puVar29[-1] = *puVar23;
                puVar1 = puVar23 + -1;
                puVar23 = puVar23 + 2;
                *puVar29 = *puVar1;
                puVar29 = puVar29 + 9;
              } while (uVar10 != 0);
            }
          }
          if (local_1bc != 0) {
            uVar18 = 0;
            do {
              if ((int)(local_1b0 + uVar18 * 2)[1] != 0) {
                puVar42 = (ulong *)local_1b0[uVar18 * 2];
                puVar50 = puVar42;
                do {
                  puVar50 = (ulong *)*puVar50;
                  if (puVar50 == puVar42) {
                    uVar10 = (uint)uVar18;
                    goto joined_r0x010a991c;
                  }
                } while (puVar50[6] == puVar42[6]);
                puVar30 = (ulong *)puVar50[1];
                puVar42 = puVar30;
                puVar49 = puVar30;
                while (puVar42 = (ulong *)puVar42[1], puVar42 != puVar30) {
                  uVar22 = puVar42[6];
                  uVar41 = puVar49[6];
                  if (uVar22 != uVar41) {
                    if ((long)puVar50[6] < (long)uVar41) {
                      if ((long)uVar22 < (long)uVar41) {
LAB_010a98c4:
                        do {
                          *(uint *)((long)puVar49 + 0x1c) = *(uint *)((long)puVar49 + 0x1c) | 0x40;
                          puVar49 = (ulong *)puVar49[1];
                        } while (puVar49 != puVar42);
                      }
                    }
                    else if ((long)uVar41 < (long)uVar22) goto LAB_010a98c4;
                    puVar50 = (ulong *)*puVar42;
                    puVar49 = puVar42;
                  }
                }
              }
              uVar18 = uVar18 + 1;
              uVar10 = 0;
              if (local_1bc <= uVar18) goto LAB_010a9950;
            } while( true );
          }
          uVar10 = 0;
          if (local_1c0 != 0) {
            do {
              while( true ) {
                plVar37 = (long *)(local_1b8 + (ulong)uVar10 * 0x48);
                puVar24 = (uint *)((long)plVar37 + 0x1c);
                uVar11 = *puVar24;
                if ((uVar11 >> 6 & 1) != 0) break;
joined_r0x010a991c:
                uVar10 = uVar10 + 1;
                if (local_1c0 <= uVar10) goto LAB_010a99c0;
              }
              plVar39 = plVar37;
              do {
                plVar39 = (long *)*plVar39;
                if (plVar39 == plVar37) goto joined_r0x010a991c;
                lVar43 = plVar39[7];
                lVar44 = *(long *)(local_1b8 + (ulong)uVar10 * 0x48 + 0x38);
                plVar40 = plVar37;
              } while (lVar43 == lVar44);
              do {
                plVar40 = (long *)plVar40[1];
                if (plVar40 == plVar37) goto joined_r0x010a991c;
                lVar45 = plVar40[7];
              } while (lVar45 == lVar44);
              if ((lVar43 < lVar44) && (lVar44 < lVar45)) {
                *puVar24 = uVar11 | 0x80;
                goto joined_r0x010a991c;
              }
              if ((lVar43 <= lVar44) || (lVar44 <= lVar45)) goto joined_r0x010a991c;
              *puVar24 = uVar11 | 0x100;
              uVar10 = uVar10 + 1;
LAB_010a9950:
            } while (uVar10 < local_1c0);
          }
LAB_010a99c0:
          puVar24 = local_190 + local_1d8 * 0x12;
          uVar10 = *puVar24;
          plVar37 = local_188 + local_1d8 * 9;
          if (uVar10 != 0) {
            lVar44 = *plVar37;
            do {
              FUN_010aaf40(lVar44,puVar20,local_1d8 & 0xffffffff,&local_1c0);
              uVar10 = uVar10 - 1;
              lVar44 = lVar44 + 0x30;
            } while (uVar10 != 0);
          }
          puVar19 = (uint *)alStack_158[local_1d8 * 9];
          lVar44 = *(long *)(puVar19 + 2);
          uVar10 = *puVar19;
          uVar17 = 1;
          if (local_1d8 != 0) {
            uVar17 = 2;
          }
          iVar9 = FT_DivFix(1,0x20,local_198[local_1d8 * 0x33 + 0x32]);
          if (0x1d < iVar9) {
            iVar9 = 0x1e;
          }
          if (uVar10 < 2) {
            if (uVar10 == 1) {
LAB_010a9c6c:
              puVar19 = *(uint **)(alStack_158[local_1d8 * 9] + 8);
              uVar10 = *puVar24;
              uVar11 = *puVar19;
              uVar18 = (ulong)uVar11;
              pbVar25 = *(byte **)(puVar19 + 2);
              if (uVar10 != 0) {
                lVar44 = *plVar37;
                    /* catch() { ... } // from try @ 010a9c2c with catch @ 010a9c98 */
                uVar22 = (ulong)(uVar10 - 1) + 1;
                uVar32 = uVar10;
                if (1 < uVar22) {
                  uVar31 = ~(uVar10 - 1) & 1;
                  lVar43 = uVar22 - uVar31;
                    /* catch() { ... } // from try @ 010a9d64 with catch @ 010a9cd0 */
                  if (lVar43 != 0) {
                    lVar45 = lVar43 * 0x30;
                    iVar34 = (int)lVar43;
                    puVar24 = (uint *)(lVar44 + 0x48);
                    do {
                      puVar24[-8] = 0xffffffff;
                      puVar24[4] = 0xffffffff;
                      lVar43 = lVar43 + -2;
                      puVar24[-0xc] = puVar24[-0xc] & 0xfffffffb;
                      *puVar24 = *puVar24 & 0xfffffffb;
                      puVar24 = puVar24 + 0x18;
                    } while (lVar43 != 0);
                    /* try { // try from 010a9d10 to 011a9d17 has its CatchHandler @ 010aa01c */
                    lVar44 = lVar44 + lVar45;
                    uVar32 = uVar10 - iVar34;
                    if (uVar31 == 0) goto LAB_010a9d34;
                  }
                }
                puVar24 = (uint *)(lVar44 + 0x18);
                do {
                  puVar24[4] = 0xffffffff;
                  uVar32 = uVar32 - 1;
                  *puVar24 = *puVar24 & 0xfffffffb;
                  puVar24 = puVar24 + 0xc;
                } while (uVar32 != 0);
              }
LAB_010a9d34:
              if (uVar11 == 0) {
                uVar22 = 0;
                local_190[local_1d8 * 0x12 + 1] = 0;
                plVar39 = local_188 + local_1d8 * 9 + 1;
              }
              else {
                uVar11 = 0;
                uVar32 = 0;
                uVar22 = 0;
                    /* try { // try from 010a9d4c to 011a9d63 has its CatchHandler @ 010a9fe4 */
                plVar39 = local_188 + local_1d8 * 9 + 1;
                lVar44 = 0x18;
                do {
                  if (uVar11 == 0) {
                    /* try { // try from 010a9d64 to 011aa037 has its CatchHandler @ 010a9cd0 */
                    pbVar26 = pbVar25 + 1;
                    bVar4 = *pbVar25;
                    uVar32 = (uint)bVar4;
                    uVar11 = 0x80;
                    pbVar25 = pbVar26;
                    if ((bVar4 & 0x80) != 0) goto LAB_010a9d74;
                  }
                  else {
                    pbVar26 = pbVar25;
                    if ((uVar11 & uVar32) != 0) {
LAB_010a9d74:
                      puVar24 = (uint *)(*plVar37 + lVar44);
                      uVar31 = *puVar24;
                      pbVar25 = pbVar26;
                      if ((uVar31 >> 2 & 1) == 0) {
                        *(uint *)(*plVar37 + lVar44) = uVar31 | 4;
                        if ((uint)uVar22 < uVar10) {
                          *(uint **)(*plVar39 + uVar22 * 8) = puVar24 + -6;
                          uVar22 = (ulong)((uint)uVar22 + 1);
                        }
                      }
                    }
                  }
                  uVar11 = (int)uVar11 >> 1;
                  uVar18 = uVar18 - 1;
                  lVar44 = lVar44 + 0x30;
                } while (uVar18 != 0);
                local_190[local_1d8 * 0x12 + 1] = (uint)uVar22;
                if (1 < (int)(uint)uVar22) {
                  lVar43 = *plVar39;
                  lVar44 = 0;
                  uVar18 = 1;
                  do {
                    piVar33 = *(int **)(lVar43 + uVar18 * 8);
                    iVar34 = *piVar33;
                    lVar45 = lVar44;
                    do {
                      piVar38 = *(int **)(lVar43 + lVar45 * 8);
                      if (*piVar38 < iVar34) break;
                      lVar35 = lVar45 + 1;
                      puVar20 = (undefined8 *)(lVar43 + lVar45 * 8);
                      lVar45 = lVar45 + -1;
                      *puVar20 = piVar33;
                      puVar20[1] = piVar38;
                    } while (1 < lVar35);
                    uVar18 = uVar18 + 1;
                    lVar44 = lVar44 + 1;
                  } while (uVar18 != uVar22);
                }
              }
              FUN_010ab380(uVar22,*plVar39,local_1b8,local_1c0,iVar9,uVar17);
            }
            uVar10 = local_1c0;
            if (local_1c0 == 0) goto joined_r0x010aa078;
            puVar24 = (uint *)(local_1b8 + 0x1c);
            uVar11 = local_1c0;
            do {
              if ((*(long *)(puVar24 + 3) != 0) && ((*puVar24 >> 4 & 1) == 0)) {
                *puVar24 = *puVar24 | 0x10;
              }
              uVar11 = uVar11 - 1;
              puVar24 = puVar24 + 0x12;
            } while (uVar11 != 0);
            if (local_1d8 == 1) goto LAB_010a9e90;
joined_r0x010aa080:
            if (uVar10 != 0) {
              puVar20 = (undefined8 *)(local_1b8 + 0x28);
              uVar12 = local_198[local_1d8 * 0x33 + 0x32];
              do {
                piVar33 = (int *)*puVar20;
                if (piVar33 != (int *)0x0) {
                  if ((*(uint *)((long)puVar20 + -0xc) >> 9 & 1) == 0) {
                    if ((*(uint *)((long)puVar20 + -0xc) >> 10 & 1) == 0) {
                    /* catch() { ... } // from try @ 010a9d4c with catch @ 010a9fe4 */
                      lVar44 = puVar20[1] - (long)*piVar33;
                      if (lVar44 < 1) {
                        lVar43 = *(long *)(piVar33 + 2);
                        lVar44 = FT_MulFix(lVar44,uVar12);
                      }
                      else {
                        lVar43 = *(long *)(piVar33 + 2);
                        lVar45 = *(long *)(piVar33 + 4);
                        if (piVar33[1] <= lVar44) {
                          lVar44 = FT_MulFix(lVar44 - piVar33[1],uVar12);
                          lVar44 = lVar45 + lVar43 + lVar44;
                          goto LAB_010aa048;
                        }
                        lVar44 = FT_MulDiv();
                      }
                      lVar44 = lVar44 + lVar43;
                    }
                    else {
                      lVar44 = *(long *)(piVar33 + 4) + *(long *)(piVar33 + 2);
                    /* catch() { ... } // from try @ 010a9d10 with catch @ 010aa01c */
                    }
                  }
                  else {
                    lVar44 = *(long *)(piVar33 + 2);
                  }
LAB_010aa048:
                  puVar20[3] = lVar44;
                  *(uint *)((long)puVar20 + -0xc) = *(uint *)((long)puVar20 + -0xc) | 0x20;
                }
                uVar13 = local_1a8;
                uVar18 = local_1b8;
                uVar10 = uVar10 - 1;
                puVar20 = puVar20 + 9;
              } while (uVar10 != 0);
              if (local_1c0 != 0) {
                uVar41 = local_1b8 + (ulong)local_1c0 * 0x48;
                uVar12 = local_198[local_1d8 * 0x33 + 0x32];
                uVar22 = uVar41;
                if (uVar41 <= local_1b8 + 0x48) {
                  uVar22 = local_1b8 + 0x48;
                }
                uVar22 = ((uVar22 - local_1b8) - 1) / 0x48 + 1;
                if ((uVar22 < 2) || (uVar47 = uVar22 & 0x7fffffffffffffe, uVar47 == 0)) {
                  uVar10 = 0;
                  uVar36 = local_1b8;
LAB_010aa13c:
                  do {
                    uVar22 = uVar36 + 0x48;
                    uVar10 = (*(uint *)(uVar36 + 0x1c) >> 4 & 1) + uVar10;
                    uVar36 = uVar22;
                  } while (uVar22 < uVar41);
                }
                else {
                  iVar9 = 0;
                  iVar34 = 0;
                  puVar24 = (uint *)(local_1b8 + 100);
                  uVar36 = uVar47;
                  do {
                    uVar36 = uVar36 - 2;
                    iVar9 = (puVar24[-0x12] >> 4 & 1) + iVar9;
                    iVar34 = (*puVar24 >> 4 & 1) + iVar34;
                    puVar24 = puVar24 + 0x24;
                  } while (uVar36 != 0);
                  uVar10 = iVar34 + iVar9;
                  uVar36 = local_1b8 + uVar47 * 0x48;
                  if (uVar22 != uVar47) goto LAB_010aa13c;
                }
                if (uVar10 != 0) {
                  if (uVar10 < 0x11) {
                    puVar50 = local_e0;
                  }
                  else {
                    puVar50 = (ulong *)ft_mem_realloc(local_1a8,8,0,uVar10,0,&iStack_e4);
                    if (iStack_e4 != 0) goto LAB_010aa3c0;
                  }
                  uVar10 = 0;
                  uVar22 = uVar18;
                  do {
                    if ((*(byte *)(uVar22 + 0x1c) >> 4 & 1) != 0) {
                      puVar42 = puVar50 + uVar10;
                      if (uVar10 != 0) {
                        lVar44 = *(long *)(uVar22 + 0x30);
                        do {
                          puVar49 = puVar42 + -1;
                          if (*(long *)(*puVar49 + 0x30) <= lVar44) break;
                          *puVar42 = *puVar49;
                          puVar42 = puVar49;
                        } while (puVar50 < puVar49);
                      }
                      uVar10 = uVar10 + 1;
                      *puVar42 = uVar22;
                    }
                    uVar22 = uVar22 + 0x48;
                  } while (uVar22 < uVar41);
                  if (uVar10 == 0) {
                    do {
                      if ((*(uint *)(uVar18 + 0x1c) >> 4 & 1) == 0) {
                        uVar10 = *(uint *)(uVar18 + 0x18);
                        if ((uVar10 >> 1 & 1) != 0) {
                          if (((*(char *)(uVar18 + 0x20) == '\x04') ||
                              (*(char *)(uVar18 + 0x20) != *(char *)(uVar18 + 0x21))) ||
                             ((uVar10 & 4) == 0 && (*(uint *)(uVar18 + 0x1c) & 0x40) == 0))
                          goto LAB_010aa274;
                          *(uint *)(uVar18 + 0x18) = uVar10 & 0xfffffffd;
                        }
                        lVar43 = *(long *)(*puVar50 + 0x40);
                        lVar44 = FT_MulFix(*(long *)(uVar18 + 0x30) - *(long *)(*puVar50 + 0x30),
                                           uVar12);
                        *(long *)(uVar18 + 0x40) = lVar44 + lVar43;
                        *(uint *)(uVar18 + 0x1c) = *(uint *)(uVar18 + 0x1c) | 0x20;
                      }
LAB_010aa274:
                      uVar18 = uVar18 + 0x48;
                    } while (uVar18 < uVar41);
                  }
                  else {
                    do {
                      if ((*(uint *)(uVar18 + 0x1c) >> 4 & 1) == 0) {
                        uVar11 = *(uint *)(uVar18 + 0x18);
                        if ((uVar11 >> 1 & 1) != 0) {
                          if (((*(char *)(uVar18 + 0x20) == '\x04') ||
                              (*(char *)(uVar18 + 0x20) != *(char *)(uVar18 + 0x21))) ||
                             ((uVar11 & 4) == 0 && (*(uint *)(uVar18 + 0x1c) & 0x40) == 0))
                          goto LAB_010aa39c;
                          *(uint *)(uVar18 + 0x18) = uVar11 & 0xfffffffd;
                        }
                        lVar44 = *(long *)(uVar18 + 0x30);
                        uVar11 = 0;
                        do {
                          if (lVar44 < *(long *)(puVar50[uVar11] + 0x30)) break;
                          uVar11 = uVar11 + 1;
                        } while (uVar11 < uVar10);
                        if (uVar11 == 0) {
                          uVar22 = *puVar50;
LAB_010aa374:
                          lVar43 = *(long *)(uVar22 + 0x40);
                          lVar44 = FT_MulFix(lVar44 - *(long *)(uVar22 + 0x30),uVar12);
LAB_010aa388:
                          lVar44 = lVar44 + lVar43;
                        }
                        else {
                          uVar47 = puVar50[uVar11 - 1];
                          uVar22 = (ulong)uVar10;
                          do {
                            uVar36 = uVar22;
                            if (uVar36 == 0) break;
                            uVar22 = uVar36 - 1;
                          } while (lVar44 <= *(long *)(puVar50[(uint)uVar36 - 1] + 0x30));
                          if (uVar10 == (uint)uVar36) {
                            uVar22 = puVar50[uVar10 - 1];
                            goto LAB_010aa374;
                          }
                          lVar45 = lVar44 - *(long *)(uVar47 + 0x30);
                          if (lVar45 != 0) {
                            uVar22 = puVar50[uVar36 & 0xffffffff];
                            if (lVar44 == *(long *)(uVar22 + 0x30)) {
                              lVar44 = *(long *)(uVar22 + 0x40);
                              goto LAB_010aa38c;
                            }
                            lVar43 = *(long *)(uVar47 + 0x40);
                            lVar44 = FT_MulDiv(lVar45,*(long *)(uVar22 + 0x40) - lVar43,
                                               *(long *)(uVar22 + 0x30) - *(long *)(uVar47 + 0x30));
                            goto LAB_010aa388;
                          }
                          lVar44 = *(long *)(uVar47 + 0x40);
                        }
LAB_010aa38c:
                        *(long *)(uVar18 + 0x40) = lVar44;
                        *(uint *)(uVar18 + 0x1c) = *(uint *)(uVar18 + 0x1c) | 0x20;
                      }
LAB_010aa39c:
                      uVar18 = uVar18 + 0x48;
                    } while (uVar18 < uVar41);
                  }
                  if (puVar50 != local_e0) {
                    ft_mem_free(uVar13,puVar50);
                  }
                }
              }
            }
          }
          else {
            if (local_1c0 != 0) {
              uVar11 = local_1c0;
              if (*(uint *)(lVar44 + 0x10) <= local_1c0) {
                uVar11 = *(uint *)(lVar44 + 0x10);
              }
              plVar39 = local_188 + local_1d8 * 9 + 1;
              do {
                uVar32 = local_1c0;
                if (*(uint *)(lVar44 + 0x28) <= local_1c0) {
                  uVar32 = *(uint *)(lVar44 + 0x28);
                }
                    /* try { // try from 010a9ad4 to 011a9adb has its CatchHandler @ 010a9bdc */
                if (0 < (int)(uVar32 - uVar11)) {
                  uVar31 = *(uint *)(lVar44 + 0x18);
                  uVar18 = (ulong)uVar31;
                  uVar2 = *puVar24;
                  pbVar25 = *(byte **)(lVar44 + 0x20);
                  if (uVar2 != 0) {
                    lVar43 = *plVar37;
                    uVar22 = (ulong)(uVar2 - 1) + 1;
                    uVar27 = uVar2;
                    if (1 < uVar22) {
                      uVar3 = ~(uVar2 - 1) & 1;
                      lVar45 = uVar22 - uVar3;
                      if (lVar45 != 0) {
                    /* try { // try from 010a9b28 to 011a9bf7 has its CatchHandler @ 010a9a9c */
                        lVar35 = lVar45 * 0x30;
                        iVar34 = (int)lVar45;
                        puVar19 = (uint *)(lVar43 + 0x48);
                        do {
                          puVar19[-8] = 0xffffffff;
                          puVar19[4] = 0xffffffff;
                          lVar45 = lVar45 + -2;
                          puVar19[-0xc] = puVar19[-0xc] & 0xfffffffb;
                          *puVar19 = *puVar19 & 0xfffffffb;
                          puVar19 = puVar19 + 0x18;
                        } while (lVar45 != 0);
                        lVar43 = lVar43 + lVar35;
                        uVar27 = uVar2 - iVar34;
                        if (uVar3 == 0) goto LAB_010a9b84;
                      }
                    }
                    puVar19 = (uint *)(lVar43 + 0x18);
                    do {
                      puVar19[4] = 0xffffffff;
                      uVar27 = uVar27 - 1;
                      *puVar19 = *puVar19 & 0xfffffffb;
                      puVar19 = puVar19 + 0xc;
                    } while (uVar27 != 0);
                  }
LAB_010a9b84:
                  if (uVar31 == 0) {
                    uVar22 = 0;
                    *(int *)((ulong)(local_190 + local_1d8 * 0x12) | 4) = 0;
                  }
                  else {
                    uVar31 = 0;
                    uVar27 = 0;
                    uVar22 = 0;
                    lVar43 = 0x18;
                    do {
                      if (uVar31 == 0) {
                        pbVar26 = pbVar25 + 1;
                        bVar4 = *pbVar25;
                        uVar27 = (uint)bVar4;
                        uVar31 = 0x80;
                        pbVar25 = pbVar26;
                        if ((bVar4 & 0x80) != 0) goto LAB_010a9bb8;
                      }
                      else {
                        pbVar26 = pbVar25;
                        if ((uVar31 & uVar27) != 0) {
LAB_010a9bb8:
                          puVar19 = (uint *)(*plVar37 + lVar43);
                          uVar3 = *puVar19;
                          pbVar25 = pbVar26;
                          if ((uVar3 >> 2 & 1) == 0) {
                            *(uint *)(*plVar37 + lVar43) = uVar3 | 4;
                            if ((uint)uVar22 < uVar2) {
                    /* catch() { ... } // from try @ 010a9ad4 with catch @ 010a9bdc */
                              *(uint **)(*plVar39 + uVar22 * 8) = puVar19 + -6;
                              uVar22 = (ulong)((uint)uVar22 + 1);
                            }
                          }
                        }
                      }
                      uVar31 = (int)uVar31 >> 1;
                      uVar18 = uVar18 - 1;
                      lVar43 = lVar43 + 0x30;
                    } while (uVar18 != 0);
                    /* catch() { ... } // from try @ 010a9c40 with catch @ 010a9bf8 */
                    *(int *)((ulong)(local_190 + local_1d8 * 0x12) | 4) = (int)uVar22;
                    if (1 < (int)uVar22) {
                      lVar45 = *plVar39;
                      lVar43 = 0;
                      uVar18 = 1;
                      do {
                        piVar33 = *(int **)(lVar45 + uVar18 * 8);
                        iVar34 = *piVar33;
                        lVar35 = lVar43;
                        do {
                          piVar38 = *(int **)(lVar45 + lVar35 * 8);
                    /* try { // try from 010a9c2c to 011a9c3f has its CatchHandler @ 010a9c98 */
                          if (*piVar38 < iVar34) break;
                          lVar48 = lVar35 + 1;
                          puVar20 = (undefined8 *)(lVar45 + lVar35 * 8);
                          lVar35 = lVar35 + -1;
                    /* try { // try from 010a9c40 to 011a9ccf has its CatchHandler @ 010a9bf8 */
                          *puVar20 = piVar33;
                          puVar20[1] = piVar38;
                        } while (1 < lVar48);
                        uVar18 = uVar18 + 1;
                        lVar43 = lVar43 + 1;
                      } while (uVar18 != uVar22);
                    }
                  }
                    /* catch() { ... } // from try @ 010a9b28 with catch @ 010a9a9c */
                  FUN_010ab380(uVar22,*plVar39,local_1b8 + (ulong)uVar11 * 0x48,uVar32 - uVar11,
                               iVar9,uVar17);
                }
                uVar10 = uVar10 - 1;
                if (uVar10 < 2) goto LAB_010a9c6c;
                lVar44 = lVar44 + 0x18;
                uVar11 = uVar32;
              } while( true );
            }
            uVar10 = 0;
joined_r0x010aa078:
            if (local_1d8 != 1) goto joined_r0x010aa080;
LAB_010a9e90:
            uVar18 = local_1b8;
            uVar11 = uVar10;
            if (uVar10 != 0) {
              do {
                if (((((*(char *)(uVar18 + 0x20) == '\x02') || (*(char *)(uVar18 + 0x20) == -2)) ||
                     (*(char *)(uVar18 + 0x21) == -2)) || (*(char *)(uVar18 + 0x21) == '\x02')) &&
                   (uVar32 = *(uint *)(uVar18 + 0x1c), (uVar32 >> 4 & 1) == 0)) {
                  iVar9 = *(int *)(param_3 + 0x67);
                  lVar44 = *(long *)(uVar18 + 0x30);
                  if (iVar9 != 0) {
                    iVar34 = *(int *)(param_3 + 0x1ed);
                    piVar33 = (int *)(param_3 + 0x69);
                    do {
                      if (lVar44 - piVar33[1] < -(long)iVar34) break;
                      if ((lVar44 <= (long)*piVar33 + (long)iVar34) &&
                         ((*(char *)((long)param_3 + 0xf6c) != '\0' ||
                          (lVar44 - piVar33[1] <= (long)*(int *)((long)param_3 + 0xf64))))) {
                        uVar12 = *(undefined8 *)(piVar33 + 6);
                        uVar32 = uVar32 | 0x30;
                        *(uint *)(uVar18 + 0x1c) = uVar32;
                        *(undefined8 *)(uVar18 + 0x40) = uVar12;
                      }
                      iVar9 = iVar9 + -1;
                      piVar33 = piVar33 + 0xc;
                    } while (iVar9 != 0);
                  }
                  uVar22 = (ulong)*(uint *)(param_3 + 200);
                  if (*(uint *)(param_3 + 200) != 0) {
                    iVar9 = *(int *)(param_3 + 0x1ed);
                    piVar33 = (int *)(param_3 + uVar22 * 6 + 0xc4);
                    do {
                      if (*piVar33 - lVar44 < -(long)iVar9) break;
                      if (((long)piVar33[1] - (long)iVar9 <= lVar44) &&
                         ((*(char *)((long)param_3 + 0xf6c) != '\0' ||
                          (*piVar33 - lVar44 < (long)*(int *)((long)param_3 + 0xf64))))) {
                        uVar12 = *(undefined8 *)(piVar33 + 8);
                        uVar32 = uVar32 | 0x30;
                        *(uint *)(uVar18 + 0x1c) = uVar32;
                        *(undefined8 *)(uVar18 + 0x40) = uVar12;
                      }
                      uVar31 = (int)uVar22 - 1;
                      uVar22 = (ulong)uVar31;
                      piVar33 = piVar33 + -0xc;
                    } while (uVar31 != 0);
                  }
                }
                uVar11 = uVar11 - 1;
                uVar18 = uVar18 + 0x48;
              } while (uVar11 != 0);
              goto joined_r0x010aa080;
            }
          }
LAB_010aa3c0:
          if (local_1bc != 0) {
            uVar12 = local_198[local_1d8 * 0x33 + 0x32];
            lVar44 = local_198[local_1d8 * 0x33 + 0x33];
            puVar50 = local_1b0;
            uVar10 = local_1bc;
            do {
              if ((uint)puVar50[1] != 0) {
                uVar22 = *puVar50;
                uVar11 = 0;
                uVar47 = uVar22 + (ulong)(uint)puVar50[1] * 0x48;
                uVar18 = uVar22;
                uVar41 = 0;
                do {
                  uVar36 = uVar41;
                  if ((*(byte *)(uVar18 + 0x1c) >> 5 & 1) != 0) {
                    uVar36 = uVar18;
                    if (uVar41 != 0) {
                      uVar36 = uVar41;
                    }
                    uVar11 = uVar11 + 1;
                  }
                  uVar18 = uVar18 + 0x48;
                  uVar41 = uVar36;
                } while (uVar18 < uVar47);
                uVar18 = uVar36;
                if (uVar11 < 2) {
                  if (uVar11 == 1) {
                    lVar44 = *(long *)(uVar36 + 0x40);
                    lVar43 = FT_MulFix(*(undefined8 *)(uVar36 + 0x30),uVar12);
                    lVar44 = lVar44 - lVar43;
                  }
                  do {
                    if (uVar36 != uVar22) {
                      lVar43 = FT_MulFix(*(undefined8 *)(uVar22 + 0x30),uVar12);
                      *(long *)(uVar22 + 0x40) = lVar43 + lVar44;
                    }
                    uVar22 = uVar22 + 0x48;
                  } while (uVar22 < uVar47);
                }
                else {
                  do {
                    do {
                      uVar22 = uVar18;
                      uVar18 = *(ulong *)(uVar22 + 8);
                      if (uVar18 == uVar36) goto LAB_010aa57c;
                      uVar41 = uVar18;
                    } while ((*(byte *)(uVar18 + 0x1c) >> 5 & 1) != 0);
                    do {
                      uVar41 = *(ulong *)(uVar41 + 8);
                    } while ((*(byte *)(uVar41 + 0x1c) >> 5 & 1) == 0);
                    lVar35 = *(long *)(uVar22 + 0x30);
                    lVar45 = *(long *)(uVar41 + 0x30);
                    lVar43 = lVar35 - lVar45;
                    uVar47 = uVar22;
                    uVar21 = uVar41;
                    if (lVar43 == 0 || lVar35 < lVar45) {
                      lVar43 = lVar45 - lVar35;
                      uVar47 = uVar41;
                      uVar21 = uVar22;
                      lVar45 = lVar35;
                    }
                    lVar48 = *(long *)(uVar21 + 0x40);
                    lVar35 = *(long *)(uVar47 + 0x40);
                    if (lVar43 < 1) {
                    /* try { // try from 010aa510 to 011aa59f has its CatchHandler @ 010aa4d4 */
                      uVar13 = 0x10000;
                    }
                    else {
                    /* try { // try from 010aa4f8 to 011aa50f has its CatchHandler @ 010aa568 */
                      uVar13 = FT_DivFix(lVar35 - lVar48,lVar43);
                      uVar18 = *(ulong *)(uVar22 + 8);
                    }
                    do {
                      lVar14 = *(long *)(uVar18 + 0x30) - lVar45;
                      uVar16 = uVar12;
                      if ((lVar14 < 1) || (uVar16 = uVar13, lVar14 < lVar43)) {
                        lVar15 = FT_MulFix(lVar14,uVar16);
                        lVar14 = lVar48;
                      }
                      else {
                        lVar15 = FT_MulFix(lVar14 - lVar43,uVar12);
                        lVar14 = lVar35;
                      }
                      *(long *)(uVar18 + 0x40) = lVar14 + lVar15;
                      uVar18 = *(ulong *)(uVar18 + 8);
                    } while (uVar18 != uVar41);
                    /* catch() { ... } // from try @ 010aa4f8 with catch @ 010aa568 */
                    uVar18 = uVar41;
                  } while (uVar41 != uVar36);
                }
              }
LAB_010aa57c:
              uVar10 = uVar10 - 1;
              puVar50 = puVar50 + 2;
            } while (uVar10 != 0);
          }
          if (local_1c0 != 0) {
            lVar44 = *(long *)(local_1a0 + 4);
            lVar43 = *(long *)(local_1a0 + 8);
                    /* catch() { ... } // from try @ 010aa640 with catch @ 010aa5b4 */
            if (local_1d8 == 0) {
              puVar20 = (undefined8 *)(local_1b8 + 0x40);
              uVar18 = 0;
              do {
                *(undefined8 *)(lVar44 + uVar18 * 0x10) = *puVar20;
                if ((*(byte *)((long)puVar20 + -0x24) >> 4 & 1) != 0) {
                    /* try { // try from 010aa624 to 011aa63f has its CatchHandler @ 010aa6bc */
                  *(byte *)(lVar43 + uVar18) = *(byte *)(lVar43 + uVar18) | 0x20;
                }
                uVar10 = (int)uVar18 + 1;
                uVar18 = (ulong)uVar10;
                puVar20 = puVar20 + 9;
              } while (uVar10 < local_1c0);
            }
            else {
              uVar10 = 0;
              puVar20 = (undefined8 *)(local_1b8 + 0x40);
              do {
                *(undefined8 *)(lVar44 + (ulong)uVar10 * 0x10 + 8) = *puVar20;
                if ((*(byte *)((long)puVar20 + -0x24) >> 4 & 1) != 0) {
                  *(byte *)(lVar43 + (ulong)uVar10) = *(byte *)(lVar43 + (ulong)uVar10) | 0x40;
                    /* try { // try from 010aa5ec to 011aa5f3 has its CatchHandler @ 010aa6f4 */
                }
                uVar10 = uVar10 + 1;
                puVar20 = puVar20 + 9;
              } while (uVar10 < local_1c0);
            }
          }
                    /* try { // try from 010aa640 to 011aa70f has its CatchHandler @ 010aa5b4 */
          if (!bVar8) {
            FUN_010aa678(local_198,lVar28,uVar51,0,0);
          }
          local_1d8 = local_1d8 + 1;
        } while (local_1d8 != 2);
        iVar9 = 0;
      }
      goto LAB_010a95c8;
    }
  }
  puVar46 = (undefined4 *)((ulong)&local_1c0 | 4);
  iVar9 = (int)local_e0[0];
LAB_010a95c8:
  uVar51 = local_1a8;
  ft_mem_free(local_1a8,local_120);
                    /* catch() { ... } // from try @ 010a9668 with catch @ 010a95dc */
  local_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  ft_mem_free(uVar51,local_138);
  local_138 = 0;
  ft_mem_free(uVar51,alStack_158[3]);
  local_130 = 0;
  alStack_158[2] = 0;
  ft_mem_free(uVar51,local_168);
  local_170 = 0;
                    /* try { // try from 010a961c to 011a9623 has its CatchHandler @ 010a9820 */
  local_168 = 0;
  uStack_160 = 0;
  ft_mem_free(uVar51,local_188[1]);
  local_188[1] = 0;
  ft_mem_free(uVar51,local_188[0]);
  local_188[2] = 0;
  local_190[0] = 0;
  local_190[1] = 0;
  ft_mem_free(uVar51,local_1b8);
                    /* try { // try from 010a9650 to 011a9667 has its CatchHandler @ 010a97e8 */
  local_1b8 = 0;
  ft_mem_free(uVar51,local_1b0);
  *puVar46 = 0;
                    /* try { // try from 010a9668 to 011a983b has its CatchHandler @ 010a95dc */
  return iVar9;
}

