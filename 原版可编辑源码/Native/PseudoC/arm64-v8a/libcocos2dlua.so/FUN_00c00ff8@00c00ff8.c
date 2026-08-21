
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c00ff8(double param_1,undefined8 *param_2,ulong param_3,char *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  double dVar12;
  ulong uVar13;
  char *pcVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  size_t __n;
  uint *puVar18;
  undefined8 *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  char *pcVar24;
  char *pcVar25;
  char cVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  char *pcVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  char local_1a8;
  uint local_128 [31];
  uint local_ac;
  uint local_a8;
  uint local_a4 [31];
  byte abStack_28 [16];
  byte abStack_18 [16];
  long local_8;
  
  uVar23 = (uint)(param_3 >> 0x18) & 0xff;
  uVar33 = param_3 & 0xffffffff;
  uVar35 = (uint)((ulong)param_1 >> 0x20);
  local_8 = ___stack_chk_guard;
  uVar31 = (uint)(uVar33 >> 0x10) & 0xff;
  uVar11 = uVar23 - 1;
  uVar32 = (uint)param_3;
  uVar38 = SUB84(param_1,0);
  if (0xffdfffff < uVar35 << 1) {
    uVar11 = 0;
    if ((uVar32 >> 0xd & 1) != 0) {
      uVar11 = 0x202020;
    }
    if (((ulong)param_1 & 0xfffff00000000) == 0 && uVar38 == 0) {
      uVar11 = uVar11 ^ 0x696e66;
      if ((long)param_1 < 0) {
        cVar8 = '-';
        uVar23 = 4;
      }
      else {
        if ((uVar32 >> 9 & 1) == 0) goto joined_r0x00c02038;
        cVar8 = '+';
        uVar23 = 4;
      }
    }
    else {
      uVar11 = uVar11 ^ 0x6e616e;
joined_r0x00c02038:
      if ((uVar32 >> 0xb & 1) == 0) {
        cVar8 = '\0';
        uVar23 = 3;
      }
      else {
        cVar8 = ' ';
        uVar23 = 4;
      }
    }
    if (param_4 == (char *)0x0) {
      param_4 = (char *)*param_2;
      uVar35 = uVar23;
      if (uVar23 < uVar31) {
        uVar35 = uVar31;
      }
      if ((uint)((int)param_2[1] - (int)param_4) < uVar35) {
        param_4 = (char *)FUN_00c1a4a8(param_2);
      }
    }
    uVar35 = uVar31;
    if (((uVar32 >> 8 & 1) == 0) && (uVar35 = uVar31 - 1, uVar23 < uVar31)) {
      uVar38 = uVar35 - uVar23;
      uVar32 = ((uVar31 - uVar23) - 0x10 >> 4) + 1;
      pcVar14 = param_4;
      if (uVar38 < 0xf) {
LAB_00c01e6c:
        *pcVar14 = ' ';
        if (uVar23 < uVar35) {
          pcVar14[1] = ' ';
          if (uVar23 < uVar35 - 1) {
            pcVar14[2] = ' ';
            if (uVar23 < uVar35 - 2) {
              pcVar14[3] = ' ';
              if (uVar23 < uVar35 - 3) {
                pcVar14[4] = ' ';
                if (uVar23 < uVar35 - 4) {
                  pcVar14[5] = ' ';
                  if (uVar23 < uVar35 - 5) {
                    pcVar14[6] = ' ';
                    if (uVar23 < uVar35 - 6) {
                      pcVar14[7] = ' ';
                      if (uVar23 < uVar35 - 7) {
                        pcVar14[8] = ' ';
                        if (uVar23 < uVar35 - 8) {
                          pcVar14[9] = ' ';
                          if (uVar23 < uVar35 - 9) {
                            pcVar14[10] = ' ';
                            if (uVar23 < uVar35 - 10) {
                              pcVar14[0xb] = ' ';
                              if (uVar23 < uVar35 - 0xb) {
                                pcVar14[0xc] = ' ';
                                if ((uVar23 < uVar35 - 0xc) &&
                                   (pcVar14[0xd] = ' ', uVar23 < uVar35 - 0xd)) {
                                  pcVar14[0xe] = ' ';
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar22 = 0;
        do {
          builtin_strncpy(pcVar14,"                ",0x10);
          uVar22 = uVar22 + 1;
          pcVar14 = pcVar14 + 0x10;
        } while (uVar22 < uVar32);
        uVar35 = uVar35 + uVar32 * -0x10;
        pcVar14 = param_4 + uVar32 * 0x10;
        if (uVar32 * 0x10 != uVar31 - uVar23) goto LAB_00c01e6c;
      }
      uVar35 = uVar23 - 1;
      param_4 = param_4 + (ulong)uVar38 + 1;
    }
    if (cVar8 != '\0') {
      *param_4 = cVar8;
      param_4 = param_4 + 1;
    }
    *param_4 = (char)(uVar11 >> 0x10);
    pcVar14 = param_4 + 3;
    param_4[1] = (char)(uVar11 >> 8);
    param_4[2] = (char)uVar11;
    goto LAB_00c0178c;
  }
  uVar22 = (uint)(uVar33 >> 4) & 3;
  if ((uVar33 >> 4 & 3) != 0) {
    uVar21 = uVar35 >> 0x14 & 0x7ff;
    if ((long)param_1 < 0) {
      uVar20 = 1;
      bVar6 = true;
      cVar8 = '-';
    }
    else if ((uVar32 >> 9 & 1) == 0) {
      uVar20 = uVar32 & 0x800;
      if ((uVar32 >> 0xb & 1) == 0) {
        bVar6 = false;
        cVar8 = '\0';
      }
      else {
        uVar20 = 1;
        bVar6 = true;
        cVar8 = ' ';
      }
    }
    else {
      cVar8 = '+';
      uVar20 = 1;
      bVar6 = true;
    }
    uVar37 = ((int)uVar11 >> 0x1f & 7U) + uVar11;
    if (uVar22 == 3) {
      uVar37 = uVar37 - 1 ^ (int)(uVar37 - 1) >> 0x1f;
    }
    if ((((uVar32 >> 4 & 1) != 0) && (uVar37 < 0xe)) && (param_1 != 0.0)) {
      iVar28 = (int)*(short *)(&DAT_014100f0 + (long)((int)uVar21 >> 6) * 2);
      if (*(short *)(&DAT_014100f0 + (long)((int)uVar21 >> 6) * 2) != 0) {
        dVar12 = (double)((long)(param_1 * *(double *)(&DAT_01410130 + (long)((int)uVar21 >> 6) * 8)
                                ) + -2);
        uVar21 = (uint)((ulong)dVar12 >> 0x20);
        local_128[0] = uVar21 & 0xfffff | 0x100000;
        iVar10 = (uVar21 >> 0x14 & 0x7ff) - 0x433;
        uVar9 = SUB84(dVar12,0);
        goto LAB_00c01358;
      }
    }
    do {
      local_128[0] = uVar35 & 0xfffff;
      dVar12 = param_1;
      uVar9 = uVar38;
      if (uVar21 == 0) {
        if (uVar38 != 0) {
          iVar10 = -0x432;
          iVar28 = 0;
          goto LAB_00c01358;
        }
        iVar28 = 0;
        iVar10 = -0x412;
        uVar21 = 0x412;
        if (((ulong)param_1 >> 0x20 & 0xfffff) != 0) {
          uVar9 = (uVar35 & 0xaaaaa) >> 1 | (uVar35 & 0x55555) << 1;
          uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
          uVar36 = uVar9 & 0xff00ff;
          uVar9 = (uint)LZCOUNT(uVar36 >> 8 | ((uVar9 & 0xff00ff00) >> 8 | uVar36 << 8) << 0x10);
LAB_00c01400:
          uVar21 = uVar21 - uVar9;
          local_128[0] = local_128[0] >> (ulong)(uVar9 & 0x1f);
          uVar13 = 0;
          goto LAB_00c01410;
        }
LAB_00c02ea0:
        if ((param_3 & 0x10) == 0) {
          uVar13 = 0;
          uVar36 = 0;
LAB_00c02f58:
          iVar28 = (int)uVar13 * 9;
          goto LAB_00c02050;
        }
        uVar13 = 0;
        uVar36 = 0;
        iVar30 = -1;
        uVar21 = local_128[0];
      }
      else {
        local_128[0] = local_128[0] | 0x100000;
        if (uVar38 == 0) {
          iVar10 = uVar21 - 0x413;
          iVar28 = 0;
          uVar13 = 0;
          if (iVar10 < 0) {
            uVar21 = -iVar10;
LAB_00c013f0:
            uVar9 = (local_128[0] & 0xaaaaaaaa) >> 1 | (local_128[0] & 0x55555555) << 1;
            uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
            uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
            uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
            uVar9 = (uint)LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
            if (uVar9 < uVar21) goto LAB_00c01400;
            local_128[0] = local_128[0] >> (ulong)(uVar21 & 0x1f);
            goto LAB_00c02ea0;
          }
        }
        else {
          iVar10 = uVar21 - 0x433;
          iVar28 = 0;
LAB_00c01358:
          local_128[0] = local_128[0] << 3 | uVar9 >> 0x1d;
          uVar9 = FUN_00c00da0(local_128,0,0x1d,SUB84(dVar12,0) & 0x1fffffff,uVar33);
          uVar13 = (ulong)uVar9;
          if (iVar10 < 0) {
            uVar21 = -iVar10;
            if (uVar9 == 0) {
              if (local_128[0] == 0) goto LAB_00c02ea0;
              goto LAB_00c013f0;
            }
LAB_00c01410:
            iVar30 = (int)uVar13;
            uVar16 = uVar13;
            if (uVar21 < 0x13) {
              uVar27 = 0xffffffff;
              uVar36 = 0;
              uVar9 = 0xffffffff;
              if (8 < uVar21) goto LAB_00c01494;
            }
            else {
              if (uVar22 == 2) {
                uVar27 = 0xffffffff;
                uVar9 = 0x3f - (int)uVar11 / 9;
              }
              else {
                uVar9 = uVar23 + 6;
                if (-1 < (int)uVar11) {
                  uVar9 = uVar11;
                }
                uVar27 = (0x3d - ((int)uVar9 >> 3)) + iVar30;
                uVar9 = (int)((1 - uVar23) +
                             (int)((double)(int)((iVar30 * 0x1d - uVar21) +
                                                ((uint)LZCOUNT(local_128[uVar13]) ^ 0x1f)) *
                                  0.30102999566398114)) / 9 + 0x3e;
              }
LAB_00c01494:
              uVar36 = 0;
              do {
                uVar3 = local_128[uVar16];
                uVar29 = (uint)uVar16;
                local_128[uVar16] = uVar3 >> 9;
                puVar18 = local_128 + uVar16;
                uVar17 = uVar16;
                uVar2 = uVar29;
                while (uVar5 = (uVar3 & 0x1ff) * 0x1dcd65, uVar2 != uVar36) {
                  uVar2 = (int)uVar17 - 1U & 0x3f;
                  uVar17 = (ulong)uVar2;
                  uVar3 = local_128[uVar2];
                  local_128[uVar17] = uVar5 + (uVar3 >> 9);
                }
                if ((uVar36 == uVar27) || (uVar36 == uVar9)) {
                  if (*puVar18 == 0) {
                    if (uVar29 != uVar36) goto LAB_00c01518;
                    goto LAB_00c015a4;
                  }
                }
                else {
                  if (uVar5 != 0) {
                    uVar36 = uVar36 - 1 & 0x3f;
                    local_128[uVar36] = uVar5;
                  }
                  if (*puVar18 == 0) {
LAB_00c01518:
                    uVar27 = uVar27 - 1;
                    uVar16 = (ulong)(uVar29 - 1 & 0x3f);
                  }
                }
                uVar21 = uVar21 - 9;
              } while (8 < uVar21);
            }
            if (uVar21 != 0) {
              uVar27 = local_128[uVar16];
              local_128[uVar16] = uVar27 >> (ulong)(uVar21 & 0x1f);
              uVar9 = (uint)uVar16;
              while (uVar2 = (uVar27 & (1 << (ulong)(uVar21 & 0x1f)) - 1U) *
                             (1000000000 >> (uVar21 & 0x1f)), uVar9 != uVar36) {
                uVar9 = (int)uVar16 - 1U & 0x3f;
                uVar16 = (ulong)uVar9;
                uVar27 = local_128[uVar9];
                local_128[uVar16] = uVar2 + (uVar27 >> (ulong)(uVar21 & 0x1f));
              }
              if (uVar2 != 0) {
                uVar36 = uVar36 - 1 & 0x3f;
                local_128[uVar36] = uVar2;
              }
            }
LAB_00c015a4:
            if (iVar30 != 0) {
              uVar13 = (ulong)(iVar30 - (uint)(local_128[uVar13] == 0));
            }
            if ((param_3 & 0x10) != 0) {
              if (uVar36 == 0) {
                iVar30 = (int)uVar13 * 9 + -1;
                uVar21 = local_128[uVar13];
              }
              else {
                uVar21 = local_128[uVar13];
                if (uVar21 == 0) {
                  uVar13 = 0x40;
                  do {
                    uVar9 = (int)uVar13 - 1;
                    uVar13 = (ulong)uVar9;
                    uVar21 = local_128[uVar13];
                  } while (uVar21 == 0);
                  iVar30 = uVar9 * 9 + -0x241;
                }
                else {
                  iVar30 = (int)uVar13 * 9 + -1;
                }
              }
              goto LAB_00c019d0;
            }
            if ((-uVar36 & 0x3f) * 9 <= uVar37) goto LAB_00c02f58;
            uVar11 = FUN_00c00ed4(local_128,uVar13,5,~uVar37);
            uVar13 = (ulong)uVar11;
            iVar28 = uVar11 * 9;
            goto LAB_00c02050;
          }
        }
        uVar9 = FUN_00c00da0(local_128,uVar13,iVar10,0,uVar33);
        uVar13 = (ulong)uVar9;
        if ((param_3 & 0x10) == 0) {
          iVar28 = uVar9 * 9;
          uVar36 = 0;
          goto LAB_00c02050;
        }
        uVar21 = local_128[uVar9];
        iVar30 = uVar9 * 9 + -1;
        uVar36 = 0;
      }
LAB_00c019d0:
      uVar27 = ((uint)LZCOUNT(uVar21 | 1) ^ 0x1f) * 0x4d >> 8;
      uVar9 = uVar27 + 1;
      if (*(uint *)(&DAT_014100c0 + (ulong)uVar9 * 4) < uVar21) {
        uVar9 = uVar27 + 2;
      }
      iVar30 = uVar9 + iVar30;
      if (iVar28 == 0) goto LAB_00c01bfc;
      uVar27 = 0;
      if (0xfffffffd < SUB84(dVar12,0)) {
        uVar27 = (uint)(((uint)((ulong)dVar12 >> 0x20) & 0xfffff) == 0xfffff);
      }
      uVar2 = (int)uVar13 - 1U & 0x3f;
      uVar16 = (ulong)uVar2;
      iVar10 = (iVar10 + 0x46 + uVar27) * 2;
      local_a4[0] = uVar21;
      local_a8 = local_128[uVar16];
      local_ac = local_128[(int)uVar13 - 2U & 0x3f];
      FUN_00c00ed4(local_128,uVar13,(&DAT_01410230)[iVar10],(long)(char)(&DAT_01410231)[iVar10]);
      if (uVar37 + 1 < uVar9) {
        __n = (size_t)((uVar37 + 10) - uVar9);
        puVar18 = local_a4;
        uVar16 = uVar13;
LAB_00c01b30:
        FUN_00c00ca0(abStack_28,local_128[uVar16]);
        FUN_00c00ca0(abStack_18,*puVar18);
        iVar10 = memcmp(abStack_28,abStack_18,__n);
        if ((iVar10 == 0) && (0x34 < abStack_28[__n] != abStack_18[__n] < 0x35)) goto LAB_00c01bfc;
      }
      else if (local_128[uVar13] == local_a4[0]) {
        uVar21 = (uVar37 + 1) - uVar9;
        __n = (size_t)uVar21;
        if (uVar21 < 9) {
          puVar18 = &local_a8;
        }
        else {
          if (local_128[uVar16] != local_a8) goto LAB_00c02bcc;
          __n = (size_t)(uVar21 - 9);
          puVar18 = &local_ac;
          uVar16 = (ulong)(uVar2 - 1 & 0x3f);
        }
        goto LAB_00c01b30;
      }
LAB_00c02bcc:
      uVar21 = uVar35 >> 0x14 & 0x7ff;
    } while( true );
  }
  if ((uVar32 >> 0xd & 1) == 0) {
    uVar38 = uVar35 >> 0x14 & 0x7ff;
    pcVar14 = "0123456789abcdefpx";
    if (-1 < (long)param_1) goto LAB_00c01074;
LAB_00c015e0:
    uVar33 = (ulong)param_1 & 0xffffffff | (ulong)(uVar35 & 0xfffff) << 0x20;
    iVar28 = 6;
    bVar6 = true;
    cVar8 = '-';
    if (uVar38 == 0) goto LAB_00c01600;
LAB_00c010b0:
    uVar38 = uVar38 - 0x3ff;
    uVar33 = uVar33 & 0xffffffff | (ulong)(uVar35 & 0xfffff | 0x100000) << 0x20;
LAB_00c010c0:
    if (-1 < (int)uVar11) goto LAB_00c010c4;
LAB_00c01630:
    uVar11 = (uint)uVar33;
    if (uVar11 == 0) {
      uVar11 = (uint)(uVar33 >> 0x20);
      uVar11 = (uVar11 & 0xaaaaaaaa) >> 1 | (uVar11 & 0x55555555 | 0x100000) << 1;
      uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
      uVar11 = 5 - ((uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10) >> 2);
    }
    else {
      uVar11 = (uVar11 & 0xaaaaaaaa) >> 1 | (uVar11 & 0x55555555) << 1;
      uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
      uVar11 = 0xd - ((uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10) >> 2);
    }
  }
  else {
    uVar38 = uVar35 >> 0x14 & 0x7ff;
    pcVar14 = "0123456789ABCDEFPX";
    if ((long)param_1 < 0) goto LAB_00c015e0;
LAB_00c01074:
    if ((uVar32 >> 9 & 1) == 0) {
      iVar28 = 5;
      if ((param_3 & 0x800) != 0) {
        iVar28 = 6;
      }
      bVar6 = (param_3 & 0x800) != 0;
      cVar8 = '\0';
      if ((param_3 & 0x800) != 0) {
        cVar8 = ' ';
      }
    }
    else {
      iVar28 = 6;
      bVar6 = true;
      cVar8 = '+';
    }
    uVar33 = (ulong)param_1 & 0xffffffff | (ulong)(uVar35 & 0xfffff) << 0x20;
    if (uVar38 != 0) goto LAB_00c010b0;
LAB_00c01600:
    uVar38 = 0;
    if (((ulong)param_1 & 0xfffff00000000) == 0 && (int)uVar33 == 0) goto LAB_00c010c0;
    if (((ulong)param_1 & 0xfffff00000000) == 0) {
      uVar23 = 0x34 - ((uint)LZCOUNT((int)uVar33) ^ 0x1f);
    }
    else {
      uVar23 = 0x14 - ((uint)LZCOUNT(uVar35 & 0xfffff) ^ 0x1f);
    }
    uVar33 = uVar33 << ((ulong)uVar23 & 0x3f);
    uVar38 = -uVar23 - 0x3fe;
    if ((int)uVar11 < 0) goto LAB_00c01630;
LAB_00c010c4:
    if (uVar11 < 0xd) {
      uVar33 = (1L << ((ulong)(uVar11 * -4 + 0x33) & 0x3f)) + uVar33;
    }
  }
  cVar26 = '+';
  if ((int)uVar38 < 0) {
    uVar38 = -uVar38;
    cVar26 = '-';
  }
  bVar7 = uVar11 != 0 || (param_3 & 0x1000) != 0;
  uVar35 = (((uint)LZCOUNT(uVar38 | 1) ^ 0x1f) * 0x4d >> 8) + 1;
  uVar23 = uVar11 + iVar28 + (uint)bVar7 + uVar35;
  if (*(uint *)(&DAT_014100c0 + (ulong)uVar35 * 4) < uVar38) {
    uVar23 = uVar23 + 1;
  }
  if (param_4 == (char *)0x0) {
    param_4 = (char *)*param_2;
    uVar35 = uVar23;
    if (uVar23 < uVar31) {
      uVar35 = uVar31;
    }
    if ((uint)((int)param_2[1] - (int)param_4) < uVar35) {
      param_4 = (char *)FUN_00c1a4a8(param_2);
    }
  }
  if ((param_3 & 0x500) == 0) {
    uVar35 = uVar31 - 1;
    if (uVar23 < uVar31) {
      uVar21 = uVar35 - uVar23;
      uVar22 = ((uVar31 - uVar23) - 0x10 >> 4) + 1;
      pcVar34 = param_4;
      if (uVar21 < 0xf) {
LAB_00c011a4:
        *pcVar34 = ' ';
        if (uVar23 < uVar35) {
          pcVar34[1] = ' ';
          if (uVar23 < uVar35 - 1) {
            pcVar34[2] = ' ';
            if (uVar23 < uVar35 - 2) {
              pcVar34[3] = ' ';
              if (uVar23 < uVar35 - 3) {
                pcVar34[4] = ' ';
                if (uVar23 < uVar35 - 4) {
                  pcVar34[5] = ' ';
                  if (uVar23 < uVar35 - 5) {
                    pcVar34[6] = ' ';
                    if (uVar23 < uVar35 - 6) {
                      pcVar34[7] = ' ';
                      if (uVar23 < uVar35 - 7) {
                        pcVar34[8] = ' ';
                        if (uVar23 < uVar35 - 8) {
                          pcVar34[9] = ' ';
                          if (uVar23 < uVar35 - 9) {
                            pcVar34[10] = ' ';
                            if (uVar23 < uVar35 - 10) {
                              pcVar34[0xb] = ' ';
                              if (uVar23 < uVar35 - 0xb) {
                                pcVar34[0xc] = ' ';
                                if ((uVar23 < uVar35 - 0xc) &&
                                   (pcVar34[0xd] = ' ', uVar23 < uVar35 - 0xd)) {
                                  pcVar34[0xe] = ' ';
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar20 = 0;
        do {
          builtin_strncpy(pcVar34,"                ",0x10);
          uVar20 = uVar20 + 1;
          pcVar34 = pcVar34 + 0x10;
        } while (uVar20 < uVar22);
        uVar35 = uVar35 + uVar22 * -0x10;
        pcVar34 = param_4 + uVar22 * 0x10;
        if (uVar22 * 0x10 != uVar31 - uVar23) goto LAB_00c011a4;
      }
      uVar35 = uVar23 - 1;
      param_4 = param_4 + (ulong)uVar21 + 1;
    }
    uVar31 = uVar35;
    if (bVar6) {
LAB_00c016c8:
      *param_4 = cVar8;
      param_4 = param_4 + 1;
      goto LAB_00c016d0;
    }
    cVar8 = pcVar14[0x11];
    pcVar34 = param_4 + 2;
    *param_4 = '0';
    param_4[1] = cVar8;
  }
  else {
    if (bVar6) goto LAB_00c016c8;
LAB_00c016d0:
    cVar8 = pcVar14[0x11];
    pcVar34 = param_4 + 2;
    *param_4 = '0';
    param_4[1] = cVar8;
    uVar35 = uVar31;
    if (((uVar32 & 0x500) == 0x400) && (uVar35 = uVar31 - 1, uVar23 < uVar31)) {
      uVar32 = ((uVar31 - uVar23) - 0x10 >> 4) + 1;
      pcVar24 = pcVar34;
      if (~uVar23 + uVar31 < 0xf) {
LAB_00c01ca0:
        *pcVar24 = '0';
        if (uVar23 < uVar35) {
          pcVar24[1] = '0';
          if (uVar23 < uVar35 - 1) {
            pcVar24[2] = '0';
            if (uVar23 < uVar35 - 2) {
              pcVar24[3] = '0';
              if (uVar23 < uVar35 - 3) {
                pcVar24[4] = '0';
                if (uVar23 < uVar35 - 4) {
                  pcVar24[5] = '0';
                  if (uVar23 < uVar35 - 5) {
                    pcVar24[6] = '0';
                    if (uVar23 < uVar35 - 6) {
                      pcVar24[7] = '0';
                      if (uVar23 < uVar35 - 7) {
                        pcVar24[8] = '0';
                        if (uVar23 < uVar35 - 8) {
                          pcVar24[9] = '0';
                          if (uVar23 < uVar35 - 9) {
                            pcVar24[10] = '0';
                            if (uVar23 < uVar35 - 10) {
                              pcVar24[0xb] = '0';
                              if (uVar23 < uVar35 - 0xb) {
                                pcVar24[0xc] = '0';
                                if ((uVar23 < uVar35 - 0xc) &&
                                   (pcVar24[0xd] = '0', uVar23 < uVar35 - 0xd)) {
                                  pcVar24[0xe] = '0';
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar22 = 0;
        do {
          builtin_strncpy(pcVar24,"0000000000000000",0x10);
          uVar22 = uVar22 + 1;
          pcVar24 = pcVar24 + 0x10;
        } while (uVar22 < uVar32);
        uVar35 = uVar35 + uVar32 * -0x10;
        pcVar24 = pcVar34 + uVar32 * 0x10;
        if (uVar32 * 0x10 != uVar31 - uVar23) goto LAB_00c01ca0;
      }
      uVar35 = uVar23 - 1;
      pcVar34 = pcVar34 + (ulong)(~uVar23 + uVar31) + 1;
    }
  }
  pcVar24 = pcVar34 + 1;
  *pcVar34 = (char)(uint)(uVar33 >> 0x34) + '0';
  pcVar25 = pcVar24;
  if (bVar7) {
    uVar13 = (ulong)uVar11;
    pcVar34[1] = '.';
    pcVar25 = pcVar24 + uVar13 + 1;
    if (uVar11 < 0xd) {
      uVar33 = uVar33 >> ((ulong)(uVar11 * -4 + 0x34) & 0x3f);
      if (uVar11 == 0) goto LAB_00c01770;
    }
    else {
      if (uVar11 != 0xd) {
        while( true ) {
          uVar11 = uVar11 - 1;
          pcVar24[uVar13] = '0';
          if (uVar11 == 0xd) break;
          uVar13 = (ulong)uVar11;
        }
      }
      uVar11 = 0xd;
      uVar13 = 0xd;
    }
    while( true ) {
      uVar16 = uVar33 & 0xf;
      uVar11 = uVar11 - 1;
      uVar33 = uVar33 >> 4;
      pcVar24[uVar13] = pcVar14[uVar16];
      if (uVar11 == 0) break;
      uVar13 = (ulong)uVar11;
    }
  }
LAB_00c01770:
  *pcVar25 = pcVar14[0x10];
  pcVar25[1] = cVar26;
  pcVar14 = (char *)FUN_00bff3ac(pcVar25 + 2,uVar38);
  goto LAB_00c0178c;
LAB_00c01bfc:
  if ((int)(uVar37 - iVar30) < (int)((-uVar36 & 0x3f) * 9)) {
    uVar13 = FUN_00c00ed4(local_128,uVar13,5,~uVar37 + iVar30);
    uVar23 = local_128[uVar13 & 0xffffffff];
    uVar13 = uVar13 & 0xffffffff;
    uVar35 = ((uint)LZCOUNT(uVar23 | 1) ^ 0x1f) * 0x4d >> 8;
    uVar11 = uVar35 + 1;
    if (*(uint *)(&DAT_014100c0 + (ulong)uVar11 * 4) < uVar23) {
      uVar11 = uVar35 + 2;
    }
    if (uVar9 != uVar11) {
      iVar30 = iVar30 + 1;
    }
  }
  uVar11 = iVar30 + iVar28;
  uVar38 = (uint)uVar13;
  if ((uVar32 >> 5 & 1) == 0) {
LAB_00c0254c:
    local_1a8 = '+';
    if ((int)uVar11 < 0) {
      uVar11 = -uVar11;
      local_1a8 = '-';
    }
    bVar7 = (param_3 & 0x1000) != 0 || uVar37 != 0;
    uVar35 = (((uint)LZCOUNT(uVar11 | 1) ^ 0x1f) * 0x4d >> 8) + 1;
    uVar23 = uVar20 + 3 + uVar37 + (uint)bVar7 + (uint)((int)uVar11 < 10) + uVar35;
    if (*(uint *)(&DAT_014100c0 + (ulong)uVar35 * 4) < uVar11) {
      uVar23 = uVar23 + 1;
    }
    if (param_4 == (char *)0x0) {
      param_4 = (char *)*param_2;
      uVar35 = uVar23;
      if (uVar23 < uVar31) {
        uVar35 = uVar31;
      }
      if ((uint)((int)param_2[1] - (int)param_4) < uVar35 + 5) {
        param_4 = (char *)FUN_00c1a4a8(param_2);
      }
    }
    if ((param_3 & 0x500) == 0) {
      uVar35 = uVar31 - 1;
      if (uVar23 < uVar31) {
        uVar21 = uVar35 - uVar23;
        uVar22 = ((uVar31 - uVar23) - 0x10 >> 4) + 1;
        pcVar14 = param_4;
        if (uVar21 < 0xf) {
LAB_00c02618:
          *pcVar14 = ' ';
          if (uVar23 < uVar35) {
            pcVar14[1] = ' ';
            if (uVar23 < uVar35 - 1) {
              pcVar14[2] = ' ';
              if (uVar23 < uVar35 - 2) {
                pcVar14[3] = ' ';
                if (uVar23 < uVar35 - 3) {
                  pcVar14[4] = ' ';
                  if (uVar23 < uVar35 - 4) {
                    pcVar14[5] = ' ';
                    if (uVar23 < uVar35 - 5) {
                      pcVar14[6] = ' ';
                      if (uVar23 < uVar35 - 6) {
                        pcVar14[7] = ' ';
                        if (uVar23 < uVar35 - 7) {
                          pcVar14[8] = ' ';
                          if (uVar23 < uVar35 - 8) {
                            pcVar14[9] = ' ';
                            if (uVar23 < uVar35 - 9) {
                              pcVar14[10] = ' ';
                              if (uVar23 < uVar35 - 10) {
                                pcVar14[0xb] = ' ';
                                if (uVar23 < uVar35 - 0xb) {
                                  pcVar14[0xc] = ' ';
                                  if ((uVar23 < uVar35 - 0xc) &&
                                     (pcVar14[0xd] = ' ', uVar23 < uVar35 - 0xd)) {
                                    pcVar14[0xe] = ' ';
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          uVar20 = 0;
          do {
            builtin_strncpy(pcVar14,"                ",0x10);
            uVar20 = uVar20 + 1;
            pcVar14 = pcVar14 + 0x10;
          } while (uVar20 < uVar22);
          uVar35 = uVar35 + uVar22 * -0x10;
          pcVar14 = param_4 + uVar22 * 0x10;
          if (uVar22 * 0x10 != uVar31 - uVar23) goto LAB_00c02618;
        }
        uVar35 = uVar23 - 1;
        param_4 = param_4 + (ulong)uVar21 + 1;
      }
      uVar31 = uVar35;
      if (bVar6) {
LAB_00c02710:
        *param_4 = cVar8;
        param_4 = param_4 + 1;
        goto LAB_00c0271c;
      }
    }
    else {
      if (bVar6) goto LAB_00c02710;
LAB_00c0271c:
      uVar35 = uVar31;
      if (((uVar32 & 0x500) == 0x400) && (uVar35 = uVar31 - 1, uVar23 < uVar31)) {
        uVar22 = ((uVar31 - uVar23) - 0x10 >> 4) + 1;
        pcVar14 = param_4;
        if (~uVar23 + uVar31 < 0xf) {
LAB_00c02cf4:
          *pcVar14 = '0';
          if (uVar23 < uVar35) {
            pcVar14[1] = '0';
            if (uVar23 < uVar35 - 1) {
              pcVar14[2] = '0';
              if (uVar23 < uVar35 - 2) {
                pcVar14[3] = '0';
                if (uVar23 < uVar35 - 3) {
                  pcVar14[4] = '0';
                  if (uVar23 < uVar35 - 4) {
                    pcVar14[5] = '0';
                    if (uVar23 < uVar35 - 5) {
                      pcVar14[6] = '0';
                      if (uVar23 < uVar35 - 6) {
                        pcVar14[7] = '0';
                        if (uVar23 < uVar35 - 7) {
                          pcVar14[8] = '0';
                          if (uVar23 < uVar35 - 8) {
                            pcVar14[9] = '0';
                            if (uVar23 < uVar35 - 9) {
                              pcVar14[10] = '0';
                              if (uVar23 < uVar35 - 10) {
                                pcVar14[0xb] = '0';
                                if (uVar23 < uVar35 - 0xb) {
                                  pcVar14[0xc] = '0';
                                  if ((uVar23 < uVar35 - 0xc) &&
                                     (pcVar14[0xd] = '0', uVar23 < uVar35 - 0xd)) {
                                    pcVar14[0xe] = '0';
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          uVar21 = 0;
          do {
            builtin_strncpy(pcVar14,"0000000000000000",0x10);
            uVar21 = uVar21 + 1;
            pcVar14 = pcVar14 + 0x10;
          } while (uVar21 < uVar22);
          uVar35 = uVar35 + uVar22 * -0x10;
          pcVar14 = param_4 + uVar22 * 0x10;
          if (uVar22 * 0x10 != uVar31 - uVar23) goto LAB_00c02cf4;
        }
        uVar35 = uVar23 - 1;
        param_4 = param_4 + (ulong)(~uVar23 + uVar31) + 1;
      }
    }
    pcVar14 = param_4 + 1;
    puVar15 = (undefined8 *)FUN_00bff3ac(pcVar14,local_128[uVar13]);
    *param_4 = param_4[1];
    if (bVar7) {
      param_4[1] = '.';
      uVar37 = uVar37 + (((int)param_4 + 2) - (int)puVar15);
      if ((0 < (int)uVar37) && (uVar38 != uVar36)) {
        do {
          uVar37 = uVar37 - 9;
          uVar31 = (int)uVar13 - 1U & 0x3f;
          uVar13 = (ulong)uVar31;
          puVar15 = (undefined8 *)FUN_00c00ca0(puVar15,local_128[uVar13]);
          if (uVar36 == uVar31) break;
        } while (0 < (int)uVar37);
      }
      if ((uVar32 & 0x1020) == 0x20) {
        puVar1 = (undefined1 *)((long)puVar15 + (long)(int)(uVar37 & (int)uVar37 >> 0x1f));
        cVar8 = puVar1[-1];
        while (cVar8 == '0') {
          cVar8 = puVar1[-2];
          puVar1 = puVar1 + -1;
        }
        pcVar14 = puVar1 + -(ulong)(cVar8 == '.');
      }
      else {
        if (0 < (int)uVar37) {
          uVar32 = uVar37 - 1;
          uVar31 = (uVar37 - 0x10 >> 4) + 1;
          puVar19 = puVar15;
          if (uVar32 < 0xf) {
LAB_00c02804:
            *(undefined1 *)puVar19 = 0x30;
            if (((((0 < (int)(uVar37 - 1)) &&
                  (*(undefined1 *)((long)puVar19 + 1) = 0x30, uVar37 != 2)) &&
                 (*(undefined1 *)((long)puVar19 + 2) = 0x30, uVar37 != 3)) &&
                (((*(undefined1 *)((long)puVar19 + 3) = 0x30, uVar37 != 4 &&
                  (*(undefined1 *)((long)puVar19 + 4) = 0x30, uVar37 != 5)) &&
                 ((*(undefined1 *)((long)puVar19 + 5) = 0x30, uVar37 != 6 &&
                  ((*(undefined1 *)((long)puVar19 + 6) = 0x30, uVar37 != 7 &&
                   (*(undefined1 *)((long)puVar19 + 7) = 0x30, uVar37 != 8)))))))) &&
               ((*(undefined1 *)(puVar19 + 1) = 0x30, uVar37 != 9 &&
                ((((*(undefined1 *)((long)puVar19 + 9) = 0x30, uVar37 != 10 &&
                   (*(undefined1 *)((long)puVar19 + 10) = 0x30, uVar37 != 0xb)) &&
                  (*(undefined1 *)((long)puVar19 + 0xb) = 0x30, uVar37 != 0xc)) &&
                 ((*(undefined1 *)((long)puVar19 + 0xc) = 0x30, uVar37 != 0xd &&
                  (*(undefined1 *)((long)puVar19 + 0xd) = 0x30, uVar37 != 0xe)))))))) {
              *(undefined1 *)((long)puVar19 + 0xe) = 0x30;
            }
          }
          else {
            uVar38 = 0;
            do {
              puVar19[1] = 0x3030303030303030;
              *puVar19 = 0x3030303030303030;
              uVar38 = uVar38 + 1;
              puVar19 = puVar19 + 2;
            } while (uVar38 < uVar31);
            bVar6 = uVar37 != uVar31 * 0x10;
            uVar37 = uVar37 + uVar31 * -0x10;
            puVar19 = (undefined8 *)((long)puVar15 + (ulong)(uVar31 * 0x10));
            if (bVar6) goto LAB_00c02804;
          }
          uVar37 = 0;
          puVar15 = (undefined8 *)((long)puVar15 + (ulong)uVar32 + 1);
        }
        pcVar14 = (char *)((long)puVar15 + (long)(int)uVar37);
      }
    }
    cVar8 = 'E';
    if ((param_3 & 0x2000) == 0) {
      cVar8 = 'e';
    }
    *pcVar14 = cVar8;
    pcVar34 = pcVar14 + 2;
    pcVar14[1] = local_1a8;
    if ((int)uVar11 < 10 != 0) {
      pcVar34 = pcVar14 + 3;
      pcVar14[2] = '0';
    }
    pcVar14 = (char *)FUN_00bff3ac(pcVar34,uVar11);
  }
  else {
    if (((int)uVar11 < -4) || ((int)uVar37 < (int)uVar11)) {
      if (((uVar32 >> 0xc & 1) == 0) && ((uVar37 != 0 && (5 < uVar31)))) {
        iVar28 = (uVar38 - uVar36 & 0x3f) * 9;
        uVar23 = (uVar9 - 1) + iVar28;
        if (uVar37 < uVar23) {
          iVar10 = (uVar37 - uVar9) + 9;
          uVar36 = uVar38 - iVar10 / 9 & 0x3f;
          iVar28 = (uVar38 - uVar36 & 0x3f) * 9;
          FUN_00c00ca0(abStack_18,local_128[uVar36]);
        }
        else {
          iVar10 = (uVar23 - uVar9) + 9;
          FUN_00c00ca0(abStack_18,local_128[uVar36]);
          uVar37 = uVar23;
          if (uVar23 == 0) {
LAB_00c030a8:
            uVar37 = 0;
            goto LAB_00c0254c;
          }
        }
        uVar23 = iVar10 - iVar28;
        bVar4 = abStack_18[uVar23];
        while (bVar4 == 0x30) {
          uVar37 = uVar37 - 1;
          if (uVar23 == 0) {
            if (uVar36 == uVar38) goto LAB_00c030a8;
            uVar36 = uVar36 + 1;
            uVar23 = 9;
            FUN_00c00ca0(abStack_18,local_128[uVar36]);
          }
          if (uVar37 == 0) break;
          uVar23 = uVar23 - 1;
          bVar4 = abStack_18[uVar23];
        }
      }
      goto LAB_00c0254c;
    }
    if ((int)uVar11 < 0) {
      iVar28 = 0;
      uVar13 = 0;
      uVar37 = uVar37 - uVar11;
    }
    else {
      iVar28 = uVar38 * 9;
      uVar37 = uVar37 - uVar11;
    }
LAB_00c02050:
    uVar11 = uVar37;
    if ((((uVar32 & 0x1010) == 0x10) && (uVar37 != 0)) && ((param_3 & 0xff0000) != 0)) {
      if (uVar36 == 0) {
        uVar11 = 0;
      }
      else {
        iVar10 = uVar36 * -9;
        uVar11 = iVar10 + 0x240;
        if (uVar37 < uVar11) {
          iVar30 = uVar37 - 0x238;
          uVar36 = 0x40 - (uVar37 + 8) / 9;
          iVar10 = uVar36 * -9;
          FUN_00c00ca0(abStack_18,local_128[uVar36]);
          uVar11 = uVar37;
        }
        else {
          iVar30 = iVar10 + 8;
          FUN_00c00ca0(abStack_18,local_128[uVar36]);
          if (uVar11 == 0) goto LAB_00c02060;
        }
        uVar23 = iVar30 - iVar10;
        if (abStack_18[uVar23] == 0x30) {
          do {
            uVar11 = uVar11 - 1;
            if (uVar23 == 0) {
              if (uVar36 == 0x3f) {
                uVar11 = 0;
                break;
              }
              uVar36 = uVar36 + 1;
              uVar23 = 9;
              FUN_00c00ca0(abStack_18,local_128[uVar36]);
            }
            if ((uVar11 == 0) || (uVar23 = uVar23 - 1, abStack_18[uVar23] != 0x30)) break;
          } while( true );
        }
      }
    }
LAB_00c02060:
    uVar38 = (uint)(uVar11 != 0 || (param_3 & 0x1000) != 0);
    uVar35 = (((uint)LZCOUNT(local_128[uVar13] | 1) ^ 0x1f) * 0x4d >> 8) + 1;
    uVar23 = iVar28 + uVar20 + uVar11 + uVar38 + uVar35;
    if (*(uint *)(&DAT_014100c0 + (ulong)uVar35 * 4) < local_128[uVar13]) {
      uVar23 = uVar23 + 1;
    }
    if (param_4 == (char *)0x0) {
      param_4 = (char *)*param_2;
      uVar35 = uVar23;
      if (uVar23 < uVar31) {
        uVar35 = uVar31;
      }
      if ((uint)((int)param_2[1] - (int)param_4) < uVar35 + 8) {
        param_4 = (char *)FUN_00c1a4a8(param_2);
      }
    }
    if ((param_3 & 0x500) == 0) {
      uVar35 = uVar31 - 1;
      if (uVar23 < uVar31) {
        uVar21 = uVar35 - uVar23;
        uVar22 = ((uVar31 - uVar23) - 0x10 >> 4) + 1;
        pcVar14 = param_4;
        if (uVar21 < 0xf) {
LAB_00c0211c:
          *pcVar14 = ' ';
          if (uVar23 < uVar35) {
            pcVar14[1] = ' ';
            if (uVar23 < uVar35 - 1) {
              pcVar14[2] = ' ';
              if (uVar23 < uVar35 - 2) {
                pcVar14[3] = ' ';
                if (uVar23 < uVar35 - 3) {
                  pcVar14[4] = ' ';
                  if (uVar23 < uVar35 - 4) {
                    pcVar14[5] = ' ';
                    if (uVar23 < uVar35 - 5) {
                      pcVar14[6] = ' ';
                      if (uVar23 < uVar35 - 6) {
                        pcVar14[7] = ' ';
                        if (uVar23 < uVar35 - 7) {
                          pcVar14[8] = ' ';
                          if (uVar23 < uVar35 - 8) {
                            pcVar14[9] = ' ';
                            if (uVar23 < uVar35 - 9) {
                              pcVar14[10] = ' ';
                              if (uVar23 < uVar35 - 10) {
                                pcVar14[0xb] = ' ';
                                if (uVar23 < uVar35 - 0xb) {
                                  pcVar14[0xc] = ' ';
                                  if ((uVar23 < uVar35 - 0xc) &&
                                     (pcVar14[0xd] = ' ', uVar23 < uVar35 - 0xd)) {
                                    pcVar14[0xe] = ' ';
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          uVar20 = 0;
          do {
            builtin_strncpy(pcVar14,"                ",0x10);
            uVar20 = uVar20 + 1;
            pcVar14 = pcVar14 + 0x10;
          } while (uVar20 < uVar22);
          uVar35 = uVar35 + uVar22 * -0x10;
          pcVar14 = param_4 + uVar22 * 0x10;
          if (uVar22 * 0x10 != uVar31 - uVar23) goto LAB_00c0211c;
        }
        uVar35 = uVar23 - 1;
        param_4 = param_4 + (ulong)uVar21 + 1;
      }
      uVar31 = uVar35;
      if (bVar6) {
LAB_00c02210:
        *param_4 = cVar8;
        param_4 = param_4 + 1;
        goto LAB_00c0221c;
      }
    }
    else {
      if (bVar6) goto LAB_00c02210;
LAB_00c0221c:
      uVar35 = uVar31;
      if (((uVar32 & 0x500) == 0x400) && (uVar35 = uVar31 - 1, uVar23 < uVar31)) {
        uVar22 = ((uVar31 - uVar23) - 0x10 >> 4) + 1;
        pcVar14 = param_4;
        if (~uVar23 + uVar31 < 0xf) {
LAB_00c029d4:
          *pcVar14 = '0';
          if (uVar23 < uVar35) {
            pcVar14[1] = '0';
            if (uVar23 < uVar35 - 1) {
              pcVar14[2] = '0';
              if (uVar23 < uVar35 - 2) {
                pcVar14[3] = '0';
                if (uVar23 < uVar35 - 3) {
                  pcVar14[4] = '0';
                  if (uVar23 < uVar35 - 4) {
                    pcVar14[5] = '0';
                    if (uVar23 < uVar35 - 5) {
                      pcVar14[6] = '0';
                      if (uVar23 < uVar35 - 6) {
                        pcVar14[7] = '0';
                        if (uVar23 < uVar35 - 7) {
                          pcVar14[8] = '0';
                          if (uVar23 < uVar35 - 8) {
                            pcVar14[9] = '0';
                            if (uVar23 < uVar35 - 9) {
                              pcVar14[10] = '0';
                              if (uVar23 < uVar35 - 10) {
                                pcVar14[0xb] = '0';
                                if (uVar23 < uVar35 - 0xb) {
                                  pcVar14[0xc] = '0';
                                  if ((uVar23 < uVar35 - 0xc) &&
                                     (pcVar14[0xd] = '0', uVar23 < uVar35 - 0xd)) {
                                    pcVar14[0xe] = '0';
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          uVar21 = 0;
          do {
            builtin_strncpy(pcVar14,"0000000000000000",0x10);
            uVar21 = uVar21 + 1;
            pcVar14 = pcVar14 + 0x10;
          } while (uVar21 < uVar22);
          uVar35 = uVar35 + uVar22 * -0x10;
          pcVar14 = param_4 + uVar22 * 0x10;
          if (uVar22 * 0x10 != uVar31 - uVar23) goto LAB_00c029d4;
        }
        uVar35 = uVar23 - 1;
        param_4 = param_4 + (ulong)(~uVar23 + uVar31) + 1;
      }
    }
    pcVar14 = (char *)FUN_00bff3ac(param_4,local_128[uVar13]);
    uVar31 = (uint)uVar13;
    while (uVar31 != 0) {
      uVar31 = (int)uVar13 - 1;
      uVar13 = (ulong)uVar31;
      pcVar14 = (char *)FUN_00c00ca0(pcVar14,local_128[uVar13]);
    }
    if (uVar38 != 0) {
      *pcVar14 = '.';
      pcVar14 = pcVar14 + 1;
      if ((0 < (int)uVar11) && (uVar36 != 0)) {
        uVar31 = 0;
        do {
          uVar11 = uVar11 - 9;
          uVar31 = uVar31 - 1 & 0x3f;
          pcVar14 = (char *)FUN_00c00ca0(pcVar14,local_128[uVar31]);
          if (uVar36 == uVar31) break;
        } while (0 < (int)uVar11);
      }
      if ((uVar32 & 0x1010) == 0x10) {
        cVar8 = (pcVar14 + (int)(uVar11 & (int)uVar11 >> 0x1f))[-1];
        pcVar14 = pcVar14 + (int)(uVar11 & (int)uVar11 >> 0x1f);
        while (cVar8 == '0') {
          cVar8 = pcVar14[-2];
          pcVar14 = pcVar14 + -1;
        }
        pcVar14 = pcVar14 + -(ulong)(cVar8 == '.');
      }
      else {
        if (0 < (int)uVar11) {
          uVar32 = uVar11 - 1;
          uVar31 = (uVar11 - 0x10 >> 4) + 1;
          pcVar34 = pcVar14;
          if (uVar32 < 0xf) {
LAB_00c022ec:
            *pcVar34 = '0';
            if (((((0 < (int)(uVar11 - 1)) && (pcVar34[1] = '0', uVar11 != 2)) &&
                 (pcVar34[2] = '0', uVar11 != 3)) &&
                ((pcVar34[3] = '0', uVar11 != 4 && (pcVar34[4] = '0', uVar11 != 5)))) &&
               ((((pcVar34[5] = '0', uVar11 != 6 &&
                  ((pcVar34[6] = '0', uVar11 != 7 && (pcVar34[7] = '0', uVar11 != 8)))) &&
                 (pcVar34[8] = '0', uVar11 != 9)) &&
                ((((pcVar34[9] = '0', uVar11 != 10 && (pcVar34[10] = '0', uVar11 != 0xb)) &&
                  (pcVar34[0xb] = '0', uVar11 != 0xc)) &&
                 ((pcVar34[0xc] = '0', uVar11 != 0xd && (pcVar34[0xd] = '0', uVar11 != 0xe)))))))) {
              pcVar34[0xe] = '0';
            }
          }
          else {
            uVar38 = 0;
            do {
              builtin_strncpy(pcVar34,"0000000000000000",0x10);
              uVar38 = uVar38 + 1;
              pcVar34 = pcVar34 + 0x10;
            } while (uVar38 < uVar31);
            bVar6 = uVar11 != uVar31 * 0x10;
            uVar11 = uVar11 + uVar31 * -0x10;
            pcVar34 = pcVar14 + uVar31 * 0x10;
            if (bVar6) goto LAB_00c022ec;
          }
          uVar11 = 0;
          pcVar14 = pcVar14 + (ulong)uVar32 + 1;
        }
        pcVar14 = pcVar14 + (int)uVar11;
      }
    }
  }
LAB_00c0178c:
  if (((param_3 & 0x100) == 0) || (uVar11 = uVar35 - 1, uVar35 <= uVar23)) goto LAB_00c018e0;
  uVar32 = uVar11 - uVar23;
  uVar31 = ((uVar35 - uVar23) - 0x10 >> 4) + 1;
  pcVar34 = pcVar14;
  if (uVar32 < 0xf) {
LAB_00c017f4:
    *pcVar34 = ' ';
    if (uVar23 < uVar11) {
      pcVar34[1] = ' ';
      if (uVar23 < uVar11 - 1) {
        pcVar34[2] = ' ';
        if (uVar23 < uVar11 - 2) {
          pcVar34[3] = ' ';
          if (uVar23 < uVar11 - 3) {
            pcVar34[4] = ' ';
            if (uVar23 < uVar11 - 4) {
              pcVar34[5] = ' ';
              if (uVar23 < uVar11 - 5) {
                pcVar34[6] = ' ';
                if (uVar23 < uVar11 - 6) {
                  pcVar34[7] = ' ';
                  if (uVar23 < uVar11 - 7) {
                    pcVar34[8] = ' ';
                    if (uVar23 < uVar11 - 8) {
                      pcVar34[9] = ' ';
                      if (uVar23 < uVar11 - 9) {
                        pcVar34[10] = ' ';
                        if (uVar23 < uVar11 - 10) {
                          pcVar34[0xb] = ' ';
                          if (uVar23 < uVar11 - 0xb) {
                            pcVar34[0xc] = ' ';
                            if ((uVar23 < uVar11 - 0xc) &&
                               (pcVar34[0xd] = ' ', uVar23 < uVar11 - 0xd)) {
                              pcVar34[0xe] = ' ';
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar38 = 0;
    do {
      builtin_strncpy(pcVar34,"                ",0x10);
      uVar38 = uVar38 + 1;
      pcVar34 = pcVar34 + 0x10;
    } while (uVar38 < uVar31);
    uVar11 = uVar11 + uVar31 * -0x10;
    pcVar34 = pcVar14 + uVar31 * 0x10;
    if (uVar31 * 0x10 != uVar35 - uVar23) goto LAB_00c017f4;
  }
  pcVar14 = pcVar14 + (ulong)uVar32 + 1;
LAB_00c018e0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pcVar14);
}

