
undefined8 FUN_00de9a44(uint param_1,int param_2,int param_3,undefined4 *param_4,long *param_5)

{
  char *pcVar1;
  undefined1 (*pauVar2) [16];
  undefined4 *puVar3;
  undefined4 *__s;
  undefined8 *puVar4;
  char *pcVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 *puVar16;
  byte *__ptr;
  int *__s_00;
  long lVar17;
  byte *pbVar18;
  ulong uVar19;
  uint *puVar20;
  long *plVar21;
  ulong uVar22;
  undefined1 (*pauVar23) [16];
  uint uVar24;
  uint uVar25;
  long lVar26;
  undefined4 *puVar27;
  int *piVar28;
  long lVar29;
  uint uVar30;
  long lVar31;
  ulong uVar32;
  void *__ptr_00;
  uint uVar33;
  byte *pbVar34;
  long lVar35;
  ulong uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  uint *local_340;
  uint local_300;
  int local_2ec;
  int iStack_2e8;
  uint local_2e4;
  uint *local_2b8;
  undefined4 auStack_2ac [19];
  byte abStack_260 [2];
  ushort auStack_25e [255];
  
  puVar3 = param_4 + 10;
  __s = param_4 + 0x26;
  if (param_3 == 0) {
LAB_00de9c8c:
    iVar9 = FUN_00e02e9c(puVar3,1);
    if (iVar9 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = FUN_00e02e9c(puVar3,4);
      if (10 < uVar12 - 1) goto LAB_00dea4d8;
    }
    local_2b8 = (uint *)0x0;
    if (param_3 == 0) {
LAB_00de9d7c:
      uVar10 = 1;
      iVar9 = param_4[0x13];
joined_r0x00de9d68:
      if (iVar9 != 0) goto LAB_00de9d6c;
      iVar9 = 1 << (ulong)(uVar12 & 0x1f);
      if ((int)uVar12 < 1) {
        iVar13 = 0x118;
      }
      else {
        iVar13 = iVar9 + 0x118;
        if (iVar9 < -0x17) {
          iVar13 = 0x100;
        }
        if (iVar13 < 0x29) {
          iVar13 = 0x28;
        }
      }
      __ptr = (byte *)WebPSafeMalloc((long)(int)uVar10 * (long)(int)(&DAT_0196fca4)[(int)uVar12],4);
      lVar35 = FUN_00e02ff8(uVar10);
      __s_00 = (int *)WebPSafeCalloc(iVar13,4);
      if (((__ptr != (byte *)0x0) && (lVar35 != 0)) && (__s_00 != (int *)0x0)) {
        if (uVar10 != 0) {
          lVar17 = 0;
          local_340 = (uint *)(lVar35 + 0x3c);
          pbVar18 = __ptr;
LAB_00de9e48:
          plVar21 = (long *)(lVar35 + lVar17 * 0x238);
          lVar31 = 0;
          local_2ec = 0;
          iStack_2e8 = 0;
          local_300 = 1;
          do {
            uVar8 = (&DAT_0196fcd4)[lVar31];
            *(byte **)(lVar35 + lVar17 * 0x238 + lVar31 * 8) = pbVar18;
            iVar13 = iVar9;
            if (lVar31 != 0 || (int)uVar12 < 1) {
              iVar13 = 0;
            }
            uVar30 = iVar13 + (uint)uVar8;
            uVar19 = (ulong)uVar30;
            iVar13 = FUN_00e02e9c(puVar3,1);
            memset(__s_00,0,-(ulong)(uVar30 >> 0x1f) & 0xfffffffc00000000 | uVar19 << 2);
            if (iVar13 == 0) {
              memset(auStack_2ac,0,0x4c);
              iVar13 = FUN_00e02e9c(puVar3,4);
              uVar33 = iVar13 + 4;
              if ((int)uVar33 < 0x14) {
                if (0 < (int)uVar33) {
                  uVar32 = (ulong)uVar33;
                  pbVar34 = &DAT_0196fcde;
                  do {
                    uVar14 = FUN_00e02e9c(puVar3,3);
                    uVar32 = uVar32 - 1;
                    auStack_2ac[*pbVar34] = uVar14;
                    pbVar34 = pbVar34 + 1;
                  } while (uVar32 != 0);
                }
                iVar13 = FUN_00e03010(abStack_260,7,auStack_2ac,0x13);
                if (iVar13 != 0) {
                  iVar13 = FUN_00e02e9c(puVar3,1);
                  uVar32 = uVar19;
                  if (iVar13 != 0) {
                    iVar13 = FUN_00e02e9c(puVar3,3);
                    iVar13 = FUN_00e02e9c(puVar3,iVar13 * 2 + 2);
                    uVar32 = (ulong)(iVar13 + 2U);
                    if ((int)uVar30 < (int)(iVar13 + 2U)) goto LAB_00dea4a4;
                  }
                  if (0 < (int)uVar30) {
                    local_2e4 = 8;
                    uVar36 = 0;
                    uVar33 = (uint)uVar32;
                    do {
                      while( true ) {
                        if (uVar33 == 0) goto LAB_00dea1c0;
                        uVar24 = param_4[0x12];
                        if (0x1f < (int)uVar24) {
                          FUN_00e02de8(puVar3);
                          uVar24 = param_4[0x12];
                        }
                        uVar33 = (int)uVar32 - 1;
                        uVar32 = (ulong)uVar33;
                        uVar22 = *(ulong *)(param_4 + 10) >> (uVar24 & 0x3f) & 0x7f;
                        bVar7 = abStack_260[uVar22 * 4];
                        param_4[0x12] = uVar24 + bVar7;
                        if (param_4[0x13] == 0) {
                          if (*(long *)(param_4 + 0x10) == *(long *)(param_4 + 0xe)) {
                            uVar24 = (uint)(0x40 < (int)(uVar24 + bVar7));
                          }
                          else {
                            uVar24 = 0;
                          }
                        }
                        else {
                          uVar24 = 1;
                        }
                        param_4[0x13] = uVar24;
                        uVar8 = *(ushort *)(abStack_260 + uVar22 * 4 + 2);
                        uVar24 = (uint)uVar8;
                        iVar13 = (int)uVar36;
                        if (0xf < uVar8) break;
                        uVar36 = (ulong)(iVar13 + 1U);
                        if (uVar24 != 0) {
                          local_2e4 = uVar24;
                        }
                        __s_00[iVar13] = (uint)uVar8;
                        if ((int)uVar30 <= (int)(iVar13 + 1U)) goto LAB_00dea1c0;
                      }
                      uVar25 = uVar8 - 0x10;
                      uVar22 = -(ulong)(uVar25 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar25 << 2;
                      iVar11 = *(int *)(&DAT_0196fd00 + uVar22);
                      iVar15 = FUN_00e02e9c(puVar3,*(undefined4 *)(&DAT_0196fcf4 + uVar22));
                      uVar25 = iVar15 + iVar11;
                      if ((int)uVar30 < (int)(uVar25 + iVar13)) goto LAB_00dea4a4;
                      uVar6 = local_2e4;
                      if (uVar24 != 0x10) {
                        uVar6 = 0;
                      }
                      if (0 < (int)uVar25) {
                        uVar24 = 0xfffffffe;
                        if (-2 < (int)~uVar25) {
                          uVar24 = ~uVar25;
                        }
                        iVar11 = iVar15 + iVar11 + uVar24;
                        uVar36 = (ulong)(iVar11 + 1) + 1;
                        uVar22 = (ulong)iVar13;
                        if (uVar36 < 8) {
LAB_00dea160:
                          iVar13 = uVar25 + 1;
                          do {
                            uVar36 = uVar22 + 1;
                            iVar13 = iVar13 + -1;
                            __s_00[uVar22] = uVar6;
                            uVar22 = uVar36;
                          } while (1 < iVar13);
                        }
                        else {
                          uVar24 = iVar11 + 2U & 7;
                          lVar26 = uVar36 - uVar24;
                          if (lVar26 == 0) goto LAB_00dea160;
                          uVar36 = lVar26 + uVar22;
                          uVar25 = uVar25 - (int)lVar26;
                          auVar38._0_8_ = CONCAT44(uVar6,uVar6);
                          auVar38._8_4_ = uVar6;
                          auVar38._12_4_ = uVar6;
                          piVar28 = __s_00 + uVar22 + 4;
                          do {
                            *(long *)(piVar28 + -2) = auVar38._8_8_;
                            *(undefined8 *)(piVar28 + -4) = auVar38._0_8_;
                            *(long *)(piVar28 + 2) = auVar38._8_8_;
                            *(undefined8 *)piVar28 = auVar38._0_8_;
                            lVar26 = lVar26 + -8;
                            piVar28 = piVar28 + 8;
                          } while (lVar26 != 0);
                          uVar22 = uVar36;
                          if (uVar24 != 0) goto LAB_00dea160;
                        }
                        iVar13 = (int)uVar36;
                      }
                    } while (iVar13 < (int)uVar30);
                  }
                  goto LAB_00dea1c0;
                }
LAB_00dea4a4:
                *param_4 = 3;
              }
LAB_00dea4b0:
              uVar14 = 3;
              goto LAB_00dea4b4;
            }
            iVar13 = FUN_00e02e9c(puVar3,1);
            iVar11 = FUN_00e02e9c(puVar3,1);
            uVar14 = 8;
            if (iVar11 == 0) {
              uVar14 = 1;
            }
            iVar11 = FUN_00e02e9c(puVar3,uVar14);
            __s_00[iVar11] = 1;
            if (iVar13 == 1) {
              iVar13 = FUN_00e02e9c(puVar3,8);
              __s_00[iVar13] = 1;
              iVar13 = param_4[0x13];
            }
            else {
LAB_00dea1c0:
              iVar13 = param_4[0x13];
            }
            if ((iVar13 != 0) || (iVar13 = FUN_00e03010(pbVar18,8,__s_00,uVar19), iVar13 == 0))
            goto LAB_00dea4b0;
            if (local_300 == 0) {
              local_300 = 0;
            }
            else if (((uint)lVar31 | 4) != 4) {
              local_300 = (uint)(*pbVar18 == 0);
            }
            bVar7 = *pbVar18;
            pbVar18 = pbVar18 + (long)iVar13 * 4;
            local_2ec = local_2ec + (uint)bVar7;
            if (3 < lVar31) goto LAB_00dea2f8;
            iVar13 = *__s_00;
            if ((int)uVar30 < 2) {
              iStack_2e8 = iVar13 + iStack_2e8;
            }
            else {
              if (uVar19 - 1 < 8) {
LAB_00dea2c0:
                lVar29 = 1;
LAB_00dea2c4:
                lVar26 = uVar19 - lVar29;
                piVar28 = __s_00 + lVar29;
                iVar11 = iVar13;
                do {
                  lVar26 = lVar26 + -1;
                  iVar13 = *piVar28;
                  if (*piVar28 <= iVar11) {
                    iVar13 = iVar11;
                  }
                  piVar28 = piVar28 + 1;
                  iVar11 = iVar13;
                } while (lVar26 != 0);
              }
              else {
                uVar30 = uVar30 + 7 & 7;
                lVar26 = (uVar19 - 1) - (ulong)uVar30;
                if (lVar26 == 0) goto LAB_00dea2c0;
                auVar37._0_8_ = CONCAT44(iVar13,iVar13);
                auVar37._8_4_ = iVar13;
                auVar37._12_4_ = iVar13;
                lVar29 = lVar26 + 1;
                auVar39._8_8_ = auVar37._8_8_;
                auVar39._0_8_ = auVar37._0_8_;
                pauVar23 = (undefined1 (*) [16])(__s_00 + 5);
                do {
                  pauVar2 = pauVar23 + -1;
                  auVar38 = *pauVar23;
                  lVar26 = lVar26 + -8;
                  pauVar23 = pauVar23 + 2;
                  auVar37 = NEON_smax(*pauVar2,auVar37,4);
                  auVar39 = NEON_smax(auVar38,auVar39,4);
                } while (lVar26 != 0);
                auVar38 = NEON_smax(auVar37,auVar39,4);
                iVar13 = NEON_smaxv(auVar38,4);
                if (uVar30 != 0) goto LAB_00dea2c4;
              }
              iStack_2e8 = iVar13 + iStack_2e8;
              if (3 < lVar31) goto LAB_00dea2f8;
            }
            lVar31 = lVar31 + 1;
          } while( true );
        }
LAB_00dea45c:
        WebPSafeFree(__s_00);
        param_4[0x36] = uVar10;
        *(long *)(param_4 + 0x38) = lVar35;
        *(byte **)(param_4 + 0x3a) = __ptr;
        *(uint **)(param_4 + 0x34) = local_2b8;
        if ((int)uVar12 < 1) {
          *__s = 0;
LAB_00dea554:
          uVar12 = param_4[0x31];
          param_4[0x21] = param_1;
          param_4[0x22] = param_2;
          iVar13 = 1 << (ulong)(uVar12 & 0x1f);
          iVar9 = iVar13 + -1;
          if (uVar12 == 0) {
            iVar9 = -1;
          }
          param_4[0x32] = (param_1 + iVar13) - 1 >> (ulong)(uVar12 & 0x1f);
          param_4[0x30] = iVar9;
          if (param_3 != 0) {
            __ptr_00 = (void *)0x0;
            param_4[1] = 1;
LAB_00dea594:
            if (param_5 != (long *)0x0) {
              *param_5 = (long)__ptr_00;
            }
            param_4[0x24] = 0;
            if (param_3 == 0) {
              WebPSafeFree(*(void **)(param_4 + 0x34));
              WebPSafeFree(*(void **)(param_4 + 0x3a));
              FUN_00e03004(*(undefined8 *)(param_4 + 0x38));
              FUN_00e02fb0(param_4 + 0x28);
              FUN_00e02fb0(param_4 + 0x2c);
              memset(__s,0,0x58);
            }
            return 1;
          }
          __ptr_00 = (void *)WebPSafeMalloc((long)(int)param_1 * (long)param_2,4);
          if (__ptr_00 != (void *)0x0) {
            iVar9 = FUN_00deaf2c(param_4,__ptr_00,param_1,param_2,param_2,0);
            if ((iVar9 != 0) && (param_4[0x13] == 0)) goto LAB_00dea594;
            goto LAB_00dea4e8;
          }
        }
        else {
          param_4[0x26] = iVar9;
          iVar9 = FUN_00e02f64(param_4 + 0x28);
          if (iVar9 != 0) goto LAB_00dea554;
          __ptr_00 = (void *)0x0;
        }
        *param_4 = 1;
        goto LAB_00dea4e8;
      }
      uVar14 = 1;
LAB_00dea4b4:
      *param_4 = uVar14;
    }
    else {
      local_2b8 = (uint *)0x0;
      uVar10 = 1;
      iVar9 = FUN_00e02e9c(puVar3,1);
      if (iVar9 == 0) {
LAB_00de9d64:
        iVar9 = param_4[0x13];
        goto joined_r0x00de9d68;
      }
      iVar9 = FUN_00e02e9c(puVar3,3);
      uVar10 = iVar9 + 2;
      iVar9 = 1 << (ulong)(uVar10 & 0x1f);
      uVar30 = (param_1 + iVar9) - 1 >> (ulong)(uVar10 & 0x1f);
      uVar33 = (param_2 + iVar9) - 1U >> (ulong)(uVar10 & 0x1f);
      iVar9 = FUN_00de9a44(uVar30,uVar33,0,param_4,&local_2b8);
      if (iVar9 != 0) {
        uVar30 = uVar30 * uVar33;
        param_4[0x31] = uVar10;
        if ((int)uVar30 < 1) goto LAB_00de9d7c;
        uVar19 = (ulong)uVar30;
        uVar10 = 1;
        puVar20 = local_2b8;
        do {
          uVar19 = uVar19 - 1;
          uVar30 = *puVar20 >> 8 & 0xffff;
          *puVar20 = uVar30;
          if (uVar10 <= uVar30) {
            uVar10 = uVar30 + 1;
          }
          puVar20 = puVar20 + 1;
        } while (uVar19 != 0);
        goto LAB_00de9d64;
      }
LAB_00de9d6c:
      __s_00 = (int *)0x0;
      __ptr = (byte *)0x0;
      lVar35 = 0;
    }
    WebPSafeFree(__s_00);
    WebPSafeFree(local_2b8);
    WebPSafeFree(__ptr);
    FUN_00e03004(lVar35);
  }
  else {
    do {
      while( true ) {
        iVar9 = FUN_00e02e9c(puVar3,1);
        if (iVar9 == 0) goto LAB_00de9c8c;
        lVar35 = (long)(int)param_4[0x3c];
        uVar10 = FUN_00e02e9c(puVar3,2);
        uVar12 = 1 << (ulong)(uVar10 & 0x1f);
        if ((param_4[0x56] & uVar12) != 0) goto LAB_00dea4d8;
        param_4[0x56] = param_4[0x56] | uVar12;
        param_4[lVar35 * 6 + 0x3e] = uVar10;
        param_4[lVar35 * 6 + 0x40] = param_1;
        param_4[lVar35 * 6 + 0x41] = param_2;
        *(undefined8 *)(param_4 + lVar35 * 6 + 0x42) = 0;
        puVar4 = (undefined8 *)(param_4 + lVar35 * 6 + 0x42);
        param_4[0x3c] = param_4[0x3c] + 1;
        if (uVar10 < 2) break;
        if (uVar10 == 3) {
          iVar9 = FUN_00e02e9c(puVar3,8);
          iVar9 = iVar9 + 1;
          if (iVar9 < 0x11) {
            if (iVar9 < 5) {
              uVar12 = 2;
              if (iVar9 < 3) {
                uVar12 = 3;
              }
              uVar19 = (ulong)uVar12;
            }
            else {
              uVar19 = 1;
            }
          }
          else {
            uVar19 = 0;
          }
          iVar13 = param_4[lVar35 * 6 + 0x40];
          param_4[lVar35 * 6 + 0x3f] = (uint)uVar19;
          iVar11 = FUN_00de9a44(iVar9,1,0,param_4,puVar4);
          if (iVar11 == 0) goto LAB_00dea4d8;
          iVar11 = 1 << (ulong)(8U >> (ulong)(param_4[lVar35 * 6 + 0x3f] & 0x1f) & 0x1f);
          puVar16 = (undefined4 *)WebPSafeMalloc((long)iVar11,4);
          if (puVar16 == (undefined4 *)0x0) goto LAB_00dea4d8;
          puVar27 = (undefined4 *)*puVar4;
          *puVar16 = *puVar27;
          if (iVar9 < 2) {
            lVar35 = 4;
          }
          else {
            lVar35 = 4;
            do {
              pcVar5 = (char *)((long)puVar16 + lVar35);
              pcVar1 = (char *)((long)puVar27 + lVar35);
              lVar35 = lVar35 + 1;
              *pcVar5 = pcVar5[-4] + *pcVar1;
            } while (lVar35 < iVar9 * 4);
          }
          iVar11 = iVar11 * 4;
          iVar9 = (int)lVar35;
          param_1 = (iVar13 + (1 << uVar19)) - 1U >> uVar19;
          if (iVar9 < iVar11) {
            memset((void *)((long)puVar16 + (long)iVar9),0,(ulong)(uint)((iVar11 + -1) - iVar9) + 1)
            ;
          }
          WebPSafeFree((void *)*puVar4);
          *puVar4 = puVar16;
        }
      }
      iVar9 = FUN_00e02e9c(puVar3,3);
      uVar12 = iVar9 + 2;
      param_4[lVar35 * 6 + 0x3f] = uVar12;
      iVar9 = 1 << (ulong)(uVar12 & 0x1f);
      iVar9 = FUN_00de9a44((param_4[lVar35 * 6 + 0x40] + iVar9) - 1U >> (ulong)(uVar12 & 0x1f),
                           (iVar9 + param_4[lVar35 * 6 + 0x41]) - 1U >> (ulong)(uVar12 & 0x1f),0,
                           param_4,puVar4);
    } while (iVar9 != 0);
  }
LAB_00dea4d8:
  *param_4 = 3;
  __ptr_00 = (void *)0x0;
LAB_00dea4e8:
  WebPSafeFree(__ptr_00);
  WebPSafeFree(*(void **)(param_4 + 0x34));
  WebPSafeFree(*(void **)(param_4 + 0x3a));
  FUN_00e03004(*(undefined8 *)(param_4 + 0x38));
  FUN_00e02fb0(param_4 + 0x28);
  FUN_00e02fb0(param_4 + 0x2c);
  memset(__s,0,0x58);
  return 0;
LAB_00dea2f8:
  lVar31 = lVar35 + lVar17 * 0x238;
  puVar16 = (undefined4 *)(lVar31 + 0x30);
  *puVar16 = 0;
  *(uint *)(lVar31 + 0x28) = local_300;
  if (local_300 != 0) {
    lVar31 = lVar35 + lVar17 * 0x238;
    uVar30 = CONCAT22(*(undefined2 *)(*(long *)(lVar31 + 8) + 2),
                      *(undefined2 *)(*(long *)(lVar31 + 0x10) + 2)) |
             (uint)*(ushort *)(*(long *)(lVar31 + 0x18) + 2) << 0x18;
    *(uint *)(lVar31 + 0x2c) = uVar30;
    if ((local_2ec == 0) && (uVar8 = *(ushort *)(*plVar21 + 2), uVar8 < 0x100)) {
      *puVar16 = 1;
      *(uint *)(lVar31 + 0x2c) = uVar30 | (uint)uVar8 << 8;
      *(undefined4 *)(lVar35 + lVar17 * 0x238 + 0x34) = 0;
      goto LAB_00dea440;
    }
  }
  *(uint *)(lVar35 + lVar17 * 0x238 + 0x34) = (uint)(iStack_2e8 < 6);
  if (iStack_2e8 < 6) {
    lVar29 = lVar35 + lVar17 * 0x238;
    lVar26 = 0;
    lVar31 = 0;
    puVar20 = local_340;
    do {
      pbVar34 = (byte *)(*plVar21 + lVar26);
      uVar8 = *(ushort *)(pbVar34 + 2);
      uVar30 = (uint)*pbVar34;
      if (uVar8 < 0x100) {
        puVar20[-1] = uVar30;
        *puVar20 = (uint)uVar8 << 8;
        uVar24 = (uint)lVar31 >> (ulong)(uVar30 & 0x1f);
        uVar33 = *(uint *)(*(long *)(lVar29 + 8) + (ulong)uVar24 * 4);
        uVar30 = (uVar33 & 0xff) + uVar30;
        uVar25 = uVar33 & 0xffff0000 | (uint)uVar8 << 8;
        puVar20[-1] = uVar30;
        *puVar20 = uVar25;
        uVar24 = uVar24 >> (ulong)(uVar33 & 0x1f);
        uVar33 = *(uint *)(*(long *)(lVar29 + 0x10) + (ulong)uVar24 * 4);
        uVar25 = uVar25 | uVar33 >> 0x10;
        uVar30 = (uVar33 & 0xff) + uVar30;
        puVar20[-1] = uVar30;
        *puVar20 = uVar25;
        uVar33 = *(uint *)(*(long *)(lVar29 + 0x18) + (ulong)(uVar24 >> (ulong)(uVar33 & 0x1f)) * 4)
        ;
        puVar20[-1] = uVar30 + (uVar33 & 0xff);
        *puVar20 = (uVar33 & 0xff0000) << 8 | uVar25;
      }
      else {
        puVar20[-1] = uVar30 | 0x100;
        *puVar20 = (uint)uVar8;
      }
      lVar31 = lVar31 + 1;
      puVar20 = puVar20 + 2;
      lVar26 = lVar26 + 4;
    } while (lVar31 != 0x40);
  }
LAB_00dea440:
  lVar17 = lVar17 + 1;
  local_340 = local_340 + 0x8e;
  if ((int)uVar10 <= lVar17) goto LAB_00dea45c;
  goto LAB_00de9e48;
}

