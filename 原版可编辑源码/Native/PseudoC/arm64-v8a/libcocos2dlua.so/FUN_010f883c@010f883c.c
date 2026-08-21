
undefined8 FUN_010f883c(long *param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  short sVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  uint uVar13;
  int *piVar14;
  short *psVar15;
  long lVar16;
  undefined8 *puVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  long *plVar22;
  ulong uVar23;
  int iVar24;
  long lVar25;
  int iVar26;
  ulong uVar27;
  long lVar28;
  char *pcVar29;
  char *local_a0;
  long lStack_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  
                    /* catch() { ... } // from try @ 010f8818 with catch @ 010f885c */
  lVar28 = param_1[0x46];
  local_a0 = *(char **)param_1[5];
  lStack_98 = ((undefined8 *)param_1[5])[1];
  uStack_78 = *(undefined8 *)(lVar28 + 0x30);
  local_80 = *(undefined8 *)(lVar28 + 0x28);
  uStack_88 = *(ulong *)(lVar28 + 0x20);
  local_90 = *(ulong *)(lVar28 + 0x18);
  local_70 = param_1;
  plVar22 = param_1;
  if ((*(int *)((long)param_1 + 0x13c) != 0) && (*(int *)(lVar28 + 0x38) == 0)) {
    uVar3 = *(undefined4 *)(lVar28 + 0x3c);
                    /* try { // try from 010f88a8 to 011f88ff has its CatchHandler @ 010f88a8
                       catch() { ... } // from try @ 010f88a8 with catch @ 010f88a8
                       catch() { ... } // from try @ 010f8978 with catch @ 010f88a8 */
    if (0 < (int)(uint)uStack_88) {
      iVar21 = (uint)uStack_88 + 7;
      local_90 = local_90 | 0x7fL << ((ulong)(0x11 - (uint)uStack_88) & 0x3f);
      while( true ) {
        *local_a0 = (char)(local_90 >> 0x10);
        lStack_98 = lStack_98 + -1;
        local_a0 = local_a0 + 1;
        if (lStack_98 == 0) {
                    /* try { // try from 010f8900 to 011f8907 has its CatchHandler @ 010f89f4 */
          puVar17 = (undefined8 *)local_70[5];
          uVar7 = (*(code *)puVar17[3])();
          if ((int)uVar7 == 0) {
            return uVar7;
          }
          lStack_98 = puVar17[1];
          local_a0 = (char *)*puVar17;
        }
        if ((((uint)local_90 >> 0x10 ^ 0xffffffff) & 0xff) == 0) {
                    /* try { // try from 010f8928 to 011f8937 has its CatchHandler @ 010f8a14 */
          *local_a0 = '\0';
          lStack_98 = lStack_98 + -1;
          local_a0 = local_a0 + 1;
          if (lStack_98 == 0) {
            puVar17 = (undefined8 *)local_70[5];
                    /* try { // try from 010f8958 to 011f8963 has its CatchHandler @ 010f8a18 */
            uVar7 = (*(code *)puVar17[3])();
            if ((int)uVar7 == 0) {
              return uVar7;
            }
                    /* try { // try from 010f8964 to 011f8977 has its CatchHandler @ 010f8a28 */
            lStack_98 = puVar17[1];
            local_a0 = (char *)*puVar17;
          }
        }
        if (iVar21 < 0x10) break;
        iVar21 = iVar21 + -8;
        local_90 = local_90 << 8;
      }
    }
                    /* try { // try from 010f8978 to 011f8a7f has its CatchHandler @ 010f88a8 */
    pcVar29 = local_a0 + 1;
    local_90 = 0;
    uStack_88 = uStack_88 & 0xffffffff00000000;
    *local_a0 = -1;
    lStack_98 = lStack_98 + -1;
    if (lStack_98 == 0) {
      puVar17 = (undefined8 *)local_70[5];
      uVar7 = (*(code *)puVar17[3])();
      if ((int)uVar7 == 0) {
        return uVar7;
      }
      lStack_98 = puVar17[1];
      pcVar29 = (char *)*puVar17;
    }
    plVar22 = local_70;
                    /* catch() { ... } // from try @ 010f8900 with catch @ 010f89f4 */
    local_a0 = pcVar29 + 1;
    *pcVar29 = (char)uVar3 + -0x30;
    lStack_98 = lStack_98 + -1;
    if (lStack_98 == 0) {
                    /* catch() { ... } // from try @ 010f8928 with catch @ 010f8a14 */
      puVar17 = (undefined8 *)local_70[5];
                    /* catch() { ... } // from try @ 010f8958 with catch @ 010f8a18 */
      uVar7 = (*(code *)puVar17[3])(local_70);
      if ((int)uVar7 == 0) {
        return uVar7;
      }
                    /* catch() { ... } // from try @ 010f8964 with catch @ 010f8a28 */
      local_a0 = (char *)*puVar17;
      lStack_98 = puVar17[1];
    }
    if (0 < *(int *)((long)plVar22 + 0x174)) {
      lVar10 = 0;
      do {
        *(undefined4 *)((long)&uStack_88 + lVar10 * 4 + 4) = 0;
        lVar10 = lVar10 + 1;
        plVar22 = local_70;
      } while (lVar10 < *(int *)((long)local_70 + 0x174));
    }
  }
  lVar10 = lStack_98;
  if (0 < (int)param_1[0x34]) {
    lVar25 = 0;
    do {
      lVar11 = (long)*(int *)((long)param_1 + lVar25 * 4 + 0x1a4);
      psVar15 = *(short **)(param_2 + lVar25 * 8);
      piVar14 = (int *)((long)&uStack_88 + lVar11 * 4 + 4);
      lVar6 = plVar22[0x3d];
      lVar16 = plVar22[0x3c];
      iVar21 = (int)*psVar15 - *piVar14;
      puVar12 = *(uint **)(lVar28 + (long)*(int *)(param_1[lVar11 + 0x2f] + 0x18) * 8 + 0x60);
      lVar11 = *(long *)(lVar28 + (long)*(int *)(param_1[lVar11 + 0x2f] + 0x14) * 8 + 0x40);
      uVar13 = iVar21 >> 0x1f;
      uVar9 = uVar13 + iVar21;
      uVar13 = uVar9 ^ uVar13;
      if (uVar13 == 0) {
        uVar13 = 0;
      }
      else {
        iVar21 = -1;
        do {
          iVar18 = iVar21;
          uVar13 = (int)uVar13 >> 1;
          iVar21 = iVar18 + 1;
        } while (uVar13 != 0);
        uVar13 = iVar18 + 2;
        if (10 < iVar21) {
          puVar17 = (undefined8 *)*plVar22;
          *(undefined4 *)(puVar17 + 5) = 6;
          (*(code *)*puVar17)(plVar22);
        }
      }
      bVar4 = *(byte *)(lVar11 + (int)uVar13 + 0x400);
      uVar8 = *(uint *)(lVar11 + (long)(int)uVar13 * 4);
      if (bVar4 == 0) {
        puVar17 = (undefined8 *)*plVar22;
        *(undefined4 *)(puVar17 + 5) = 0x29;
        (*(code *)*puVar17)(plVar22);
      }
      uVar2 = (uint)uStack_88 + bVar4;
      uVar23 = (ulong)((int)(1L << ((ulong)bVar4 & 0x3f)) - 1U & uVar8) <<
               ((ulong)(0x18 - uVar2) & 0x3f) | local_90;
      if (7 < (int)uVar2) {
        iVar21 = uVar2 + 8;
        do {
          iVar18 = iVar21;
          *local_a0 = (char)(uVar23 >> 0x10);
          lStack_98 = lStack_98 + -1;
          local_a0 = local_a0 + 1;
          if (lStack_98 == 0) {
            puVar17 = (undefined8 *)local_70[5];
            uVar7 = (*(code *)puVar17[3])();
            if ((int)uVar7 == 0) {
              return uVar7;
            }
            local_a0 = (char *)*puVar17;
            lStack_98 = puVar17[1];
          }
          if ((((uint)uVar23 >> 0x10 ^ 0xffffffff) & 0xff) == 0) {
            *local_a0 = '\0';
            lStack_98 = lStack_98 + -1;
            local_a0 = local_a0 + 1;
            if (lStack_98 == 0) {
              puVar17 = (undefined8 *)local_70[5];
              uVar7 = (*(code *)puVar17[3])();
              if ((int)uVar7 == 0) {
                return uVar7;
              }
              local_a0 = (char *)*puVar17;
              lStack_98 = puVar17[1];
            }
          }
          iVar21 = iVar18 + -8;
          uVar23 = uVar23 << 8;
        } while (0xf < iVar21);
        uVar2 = iVar18 - 0x10;
        lVar10 = lStack_98;
      }
      uStack_88 = CONCAT44(uStack_88._4_4_,uVar2);
      if (uVar13 != 0) {
        uVar8 = uVar2 + uVar13;
        uVar23 = (ulong)((int)(1L << ((ulong)uVar13 & 0x3f)) - 1U & uVar9) <<
                 ((ulong)(0x18 - uVar8) & 0x3f) | uVar23;
        if (7 < (int)uVar8) {
          iVar21 = uVar13 + uVar2 + 8;
          do {
            iVar18 = iVar21;
            *local_a0 = (char)(uVar23 >> 0x10);
            lStack_98 = lStack_98 + -1;
            local_a0 = local_a0 + 1;
            if (lStack_98 == 0) {
              puVar17 = (undefined8 *)local_70[5];
              uVar7 = (*(code *)puVar17[3])();
              if ((int)uVar7 == 0) {
                return uVar7;
              }
              local_a0 = (char *)*puVar17;
              lStack_98 = puVar17[1];
            }
            if ((((uint)uVar23 >> 0x10 ^ 0xffffffff) & 0xff) == 0) {
              *local_a0 = '\0';
              lStack_98 = lStack_98 + -1;
              local_a0 = local_a0 + 1;
              if (lStack_98 == 0) {
                puVar17 = (undefined8 *)local_70[5];
                uVar7 = (*(code *)puVar17[3])();
                if ((int)uVar7 == 0) {
                  return uVar7;
                }
                local_a0 = (char *)*puVar17;
                lStack_98 = puVar17[1];
              }
            }
            iVar21 = iVar18 + -8;
            uVar23 = uVar23 << 8;
          } while (0xf < iVar21);
          uVar8 = iVar18 - 0x10;
          lVar10 = lStack_98;
        }
        uStack_88 = CONCAT44(uStack_88._4_4_,uVar8);
        uVar2 = uVar8;
      }
      uVar27 = (ulong)uVar2;
      local_90 = uVar23;
      if (0 < (int)lVar6) {
        iVar21 = 0;
        lVar11 = 1;
        do {
          uVar9 = (uint)uVar27;
          sVar5 = psVar15[*(int *)(lVar16 + lVar11 * 4)];
          if (sVar5 == 0) {
            iVar21 = iVar21 + 1;
          }
          else {
            iVar18 = iVar21;
            if (0xf < iVar21) {
              do {
                bVar4 = (byte)puVar12[0x13c];
                uVar13 = puVar12[0xf0];
                if (bVar4 == 0) {
                  puVar17 = (undefined8 *)*local_70;
                  *(undefined4 *)(puVar17 + 5) = 0x29;
                  (*(code *)*puVar17)();
                }
                uVar9 = (int)uVar27 + (uint)bVar4;
                uVar23 = (ulong)((int)(1L << ((ulong)bVar4 & 0x3f)) - 1U & uVar13) <<
                         ((ulong)(0x18 - uVar9) & 0x3f) | uVar23;
                if (7 < (int)uVar9) {
                  iVar21 = uVar9 + 8;
                  do {
                    iVar26 = iVar21;
                    *local_a0 = (char)(uVar23 >> 0x10);
                    lStack_98 = lStack_98 + -1;
                    local_a0 = local_a0 + 1;
                    if (lStack_98 == 0) {
                      puVar17 = (undefined8 *)local_70[5];
                      uVar7 = (*(code *)puVar17[3])();
                      if ((int)uVar7 == 0) {
                        return uVar7;
                      }
                      local_a0 = (char *)*puVar17;
                      lStack_98 = puVar17[1];
                    }
                    if ((((uint)uVar23 >> 0x10 ^ 0xffffffff) & 0xff) == 0) {
                      *local_a0 = '\0';
                      lStack_98 = lStack_98 + -1;
                      local_a0 = local_a0 + 1;
                      if (lStack_98 == 0) {
                        puVar17 = (undefined8 *)local_70[5];
                        uVar7 = (*(code *)puVar17[3])();
                        if ((int)uVar7 == 0) {
                          return uVar7;
                        }
                        local_a0 = (char *)*puVar17;
                        lStack_98 = puVar17[1];
                      }
                    }
                    iVar21 = iVar26 + -8;
                    uVar23 = uVar23 << 8;
                  } while (0xf < iVar21);
                  uVar9 = iVar26 - 0x10;
                  lVar10 = lStack_98;
                }
                uVar27 = (ulong)uVar9;
                iVar21 = iVar18 + -0x10;
                uStack_88 = CONCAT44(uStack_88._4_4_,uVar9);
                bVar1 = 0x1f < iVar18;
                iVar18 = iVar21;
              } while (bVar1);
            }
            iVar26 = (int)sVar5;
            iVar18 = -iVar26;
            if (-1 < sVar5) {
              iVar18 = iVar26;
            }
            lVar20 = 0;
            do {
              lVar19 = lVar20;
              iVar18 = iVar18 >> 1;
              lVar20 = lVar19 + -1;
            } while (iVar18 != 0);
            iVar18 = (int)lVar20;
            if (10 < -iVar18) {
              puVar17 = (undefined8 *)*local_70;
              *(undefined4 *)(puVar17 + 5) = 6;
              (*(code *)*puVar17)();
            }
            iVar21 = iVar21 * 0x10 - iVar18;
            bVar4 = *(byte *)((long)puVar12 + (long)iVar21 + 0x400);
            uVar13 = puVar12[iVar21];
            if (bVar4 == 0) {
              puVar17 = (undefined8 *)*local_70;
              *(undefined4 *)(puVar17 + 5) = 0x29;
                    /* try { // try from 010f8f04 to 011f8f07 has its CatchHandler @ 010f8f18 */
              (*(code *)*puVar17)();
            }
            uVar9 = uVar9 + bVar4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010f8f04 with catch @ 010f8f18
                        */
            uVar23 = (ulong)((int)(1L << ((ulong)bVar4 & 0x3f)) - 1U & uVar13) <<
                     ((ulong)(0x18 - uVar9) & 0x3f) | uVar23;
            if (7 < (int)uVar9) {
              iVar21 = uVar9 + 8;
              do {
                iVar24 = iVar21;
                *local_a0 = (char)(uVar23 >> 0x10);
                lStack_98 = lStack_98 + -1;
                    /* try { // try from 010f8f54 to 011f8f57 has its CatchHandler @ 010f8f68 */
                local_a0 = local_a0 + 1;
                if (lStack_98 == 0) {
                  puVar17 = (undefined8 *)local_70[5];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010f8f54 with catch @ 010f8f68
                        */
                  uVar7 = (*(code *)puVar17[3])();
                  if ((int)uVar7 == 0) {
                    return uVar7;
                  }
                  local_a0 = (char *)*puVar17;
                  lStack_98 = puVar17[1];
                }
                if ((((uint)uVar23 >> 0x10 ^ 0xffffffff) & 0xff) == 0) {
                  *local_a0 = '\0';
                  lStack_98 = lStack_98 + -1;
                  local_a0 = local_a0 + 1;
                  if (lStack_98 == 0) {
                    /* try { // try from 010f8fa8 to 011f8fab has its CatchHandler @ 010f8fc4 */
                    puVar17 = (undefined8 *)local_70[5];
                    uVar7 = (*(code *)puVar17[3])();
                    if ((int)uVar7 == 0) {
                      return uVar7;
                    }
                    local_a0 = (char *)*puVar17;
                    lStack_98 = puVar17[1];
                  }
                }
                iVar21 = iVar24 + -8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010f8fa8 with catch @ 010f8fc4
                        */
                uVar23 = uVar23 << 8;
              } while (0xf < iVar21);
              uVar9 = iVar24 - 0x10;
              lVar10 = lStack_98;
            }
            uVar27 = (ulong)uVar9 - lVar20;
                    /* try { // try from 010f9000 to 011f9003 has its CatchHandler @ 010f901c */
            uVar23 = (ulong)((int)(1L << (-lVar20 & 0x3fU)) - 1U & (iVar26 >> 0xf) + iVar26) <<
                     ((ulong)((iVar18 - uVar9) + 0x18) & 0x3f) | uVar23;
            if (7 < (int)uVar27) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010f9000 with catch @ 010f901c
                        */
              iVar21 = (uVar9 - (int)lVar19) + 9;
              uStack_88._0_4_ = uVar9;
              do {
                iVar18 = iVar21;
                    /* catch() { ... } // from try @ 010f9068 with catch @ 010f9030 */
                *local_a0 = (char)(uVar23 >> 0x10);
                lStack_98 = lStack_98 + -1;
                local_a0 = local_a0 + 1;
                if (lStack_98 == 0) {
                  puVar17 = (undefined8 *)local_70[5];
                  uVar7 = (*(code *)puVar17[3])();
                  if ((int)uVar7 == 0) {
                    return uVar7;
                  }
                  local_a0 = (char *)*puVar17;
                  lStack_98 = puVar17[1];
                    /* try { // try from 010f9060 to 011f9067 has its CatchHandler @ 010f9154 */
                }
                    /* try { // try from 010f9068 to 011f916f has its CatchHandler @ 010f9030 */
                if ((((uint)uVar23 >> 0x10 ^ 0xffffffff) & 0xff) == 0) {
                  *local_a0 = '\0';
                  lStack_98 = lStack_98 + -1;
                  local_a0 = local_a0 + 1;
                  if (lStack_98 == 0) {
                    puVar17 = (undefined8 *)local_70[5];
                    uVar7 = (*(code *)puVar17[3])();
                    if ((int)uVar7 == 0) {
                      return uVar7;
                    }
                    local_a0 = (char *)*puVar17;
                    lStack_98 = puVar17[1];
                  }
                }
                iVar21 = iVar18 + -8;
                uVar23 = uVar23 << 8;
              } while (0xf < iVar21);
              uVar27 = (ulong)(iVar18 - 0x10);
              lVar10 = lStack_98;
            }
            iVar21 = 0;
            uStack_88 = CONCAT44(uStack_88._4_4_,(int)uVar27);
            local_90 = uVar23;
          }
          bVar1 = lVar11 < (int)lVar6;
          lVar11 = lVar11 + 1;
        } while (bVar1);
        if (0 < iVar21) {
          bVar4 = (byte)puVar12[0x100];
          uVar9 = *puVar12;
          if (bVar4 == 0) {
            puVar17 = (undefined8 *)*local_70;
            *(undefined4 *)(puVar17 + 5) = 0x29;
            (*(code *)*puVar17)();
          }
          iVar21 = (int)uVar27 + (uint)bVar4;
          local_90 = (ulong)((int)(1L << ((ulong)bVar4 & 0x3f)) - 1U & uVar9) <<
                     ((ulong)(0x18 - iVar21) & 0x3f) | uVar23;
          if (7 < iVar21) {
                    /* catch() { ... } // from try @ 010f9060 with catch @ 010f9154 */
            iVar18 = (uint)bVar4 + (int)uVar27 + 8;
            do {
              iVar21 = iVar18;
              *local_a0 = (char)(local_90 >> 0x10);
              lStack_98 = lStack_98 + -1;
              local_a0 = local_a0 + 1;
              if (lStack_98 == 0) {
                puVar17 = (undefined8 *)local_70[5];
                uVar7 = (*(code *)puVar17[3])();
                if ((int)uVar7 == 0) {
                  return uVar7;
                }
                local_a0 = (char *)*puVar17;
                lStack_98 = puVar17[1];
              }
              if ((((uint)local_90 >> 0x10 ^ 0xffffffff) & 0xff) == 0) {
                *local_a0 = '\0';
                lStack_98 = lStack_98 + -1;
                local_a0 = local_a0 + 1;
                if (lStack_98 == 0) {
                  puVar17 = (undefined8 *)local_70[5];
                  uVar7 = (*(code *)puVar17[3])();
                  if ((int)uVar7 == 0) {
                    return uVar7;
                  }
                  local_a0 = (char *)*puVar17;
                  lStack_98 = puVar17[1];
                }
              }
              iVar18 = iVar21 + -8;
              local_90 = local_90 << 8;
            } while (0xf < iVar18);
            iVar21 = iVar21 + -0x10;
            lVar10 = lStack_98;
          }
          uStack_88 = CONCAT44(uStack_88._4_4_,iVar21);
        }
      }
      lVar6 = lVar25 * 8;
      lVar25 = lVar25 + 1;
      *piVar14 = (int)**(short **)(param_2 + lVar6);
      plVar22 = local_70;
    } while (lVar25 < (int)param_1[0x34]);
  }
  puVar17 = (undefined8 *)param_1[5];
  *puVar17 = local_a0;
  puVar17[1] = lVar10;
  *(undefined8 *)(lVar28 + 0x30) = uStack_78;
  *(undefined8 *)(lVar28 + 0x28) = local_80;
  *(ulong *)(lVar28 + 0x20) = uStack_88;
  *(ulong *)(lVar28 + 0x18) = local_90;
  iVar21 = *(int *)((long)param_1 + 0x13c);
  if (iVar21 != 0) {
    iVar18 = *(int *)(lVar28 + 0x38);
    if (*(int *)(lVar28 + 0x38) == 0) {
      *(int *)(lVar28 + 0x38) = iVar21;
      *(uint *)(lVar28 + 0x3c) = *(int *)(lVar28 + 0x3c) + 1U & 7;
      iVar18 = iVar21;
    }
    *(int *)(lVar28 + 0x38) = iVar18 + -1;
  }
  return 1;
}

