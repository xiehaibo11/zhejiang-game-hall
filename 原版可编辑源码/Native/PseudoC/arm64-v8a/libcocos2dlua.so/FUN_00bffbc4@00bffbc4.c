
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bffbc4(undefined8 *param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  char *pcVar12;
  int iVar13;
  char *pcVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  char *pcVar18;
  char *pcVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  undefined8 uVar24;
  undefined1 auStack_18 [13];
  char local_b [3];
  long local_8;
  
  uVar22 = 0;
  local_8 = ___stack_chk_guard;
  if ((param_2 & 0xf) == 3) {
    if ((long)param_3 < 0) {
      param_3 = -param_3;
      uVar22 = 0x12d;
    }
    else {
      uVar22 = 299;
      if ((param_2 >> 9 & 1) == 0) {
        uVar21 = 0;
        if ((param_2 & 0x800) != 0) {
          uVar21 = 0x120;
        }
        uVar22 = (ulong)uVar21;
      }
    }
  }
  uVar10 = (uint)uVar22;
  uVar5 = (param_2 >> 0x18) - 1;
  uVar21 = param_2 & 0xfffffbff;
  if ((int)uVar5 < 0) {
    uVar21 = param_2;
  }
  iVar13 = (int)(uVar22 >> 8);
  if (param_3 == 0) {
    if ((uVar5 == 0) && ((uVar21 & 0x1020) != 0x1020)) {
      uVar20 = 0;
      pcVar19 = local_b + 2;
    }
    else {
      uVar20 = 1;
      local_b[1] = 0x30;
      pcVar19 = local_b + 1;
    }
  }
  else if ((uVar21 & 0x30) == 0) {
    if (param_3 >> 0x20 == 0) {
      pcVar19 = local_b + 2;
    }
    else {
      uVar22 = param_3;
      pcVar14 = local_b + 1;
      do {
        pcVar19 = pcVar14;
        param_3 = uVar22 / 10;
        uVar11 = uVar22 / 0xa00000000;
        *pcVar19 = (char)uVar22 + (char)param_3 * -10 + '0';
        uVar22 = param_3;
        pcVar14 = pcVar19 + -1;
      } while (uVar11 != 0);
    }
    do {
      uVar22 = (param_3 & 0xffffffff) / 10;
      cVar7 = (char)param_3;
      param_3 = (param_3 & 0xffffffff) / 10;
      pcVar19 = pcVar19 + -1;
      *pcVar19 = (cVar7 - ((char)uVar22 * '\b' + (char)((int)uVar22 << 1))) + '0';
    } while ((int)param_3 != 0);
    uVar20 = ((int)local_b + 2) - (int)pcVar19;
  }
  else if ((uVar21 >> 4 & 1) == 0) {
    pcVar19 = local_b + 1;
    do {
      pcVar14 = pcVar19;
      bVar8 = (byte)param_3;
      param_3 = param_3 >> 3;
      *pcVar14 = (bVar8 & 7) + 0x30;
      pcVar19 = pcVar14 + -1;
    } while (param_3 != 0);
    pcVar19 = pcVar14;
    if ((uVar21 >> 0xc & 1) == 0) goto LAB_00c005a0;
    pcVar19 = pcVar14 + -1;
    uVar20 = ((int)local_b + 2) - (int)pcVar19;
    pcVar14[-1] = '0';
  }
  else {
    if ((uVar21 >> 0xd & 1) == 0) {
      pcVar14 = "0123456789abcdef";
    }
    else {
      pcVar14 = "0123456789ABCDEF";
    }
    pcVar12 = local_b + 1;
    do {
      pcVar19 = pcVar12;
      uVar22 = param_3 & 0xf;
      param_3 = param_3 >> 4;
      *pcVar19 = pcVar14[uVar22];
      pcVar12 = pcVar19 + -1;
    } while (param_3 != 0);
    if ((uVar21 >> 0xc & 1) == 0) {
LAB_00c005a0:
      uVar20 = ((int)local_b + 2) - (int)pcVar19;
    }
    else {
      iVar13 = 2;
      uVar20 = ((int)local_b + 2) - (int)pcVar19;
      if ((uVar21 & 0x2000) == 0) {
        uVar10 = 0x278;
      }
      else {
        uVar10 = 600;
      }
    }
  }
  uVar23 = uVar21 >> 0x10 & 0xff;
  if ((int)uVar5 <= (int)uVar20) {
    uVar5 = uVar20;
  }
  pcVar14 = (char *)*param_1;
  uVar2 = uVar5 + iVar13;
  uVar3 = uVar2;
  if (uVar2 < uVar23) {
    uVar3 = uVar23;
  }
  if ((uint)((int)param_1[1] - (int)pcVar14) < uVar3) {
    pcVar14 = (char *)FUN_00c1a4a8(param_1);
  }
  uVar3 = uVar21 & 0x500;
  if (uVar3 == 0) {
    uVar9 = uVar23 - 1;
    if (uVar2 < uVar23) {
      uVar4 = uVar9 - uVar2;
      uVar1 = ((uVar23 - uVar2) - 0x10 >> 4) + 1;
      pcVar12 = pcVar14;
      if (uVar4 < 0xf) {
LAB_00bffcd4:
        *pcVar12 = ' ';
        if (uVar2 < uVar9) {
          pcVar12[1] = ' ';
          if (uVar2 < uVar9 - 1) {
            pcVar12[2] = ' ';
            if (uVar2 < uVar9 - 2) {
              pcVar12[3] = ' ';
              if (uVar2 < uVar9 - 3) {
                pcVar12[4] = ' ';
                if (uVar2 < uVar9 - 4) {
                  pcVar12[5] = ' ';
                  if (uVar2 < uVar9 - 5) {
                    pcVar12[6] = ' ';
                    if (uVar2 < uVar9 - 6) {
                      pcVar12[7] = ' ';
                      if (uVar2 < uVar9 - 7) {
                        pcVar12[8] = ' ';
                        if (uVar2 < uVar9 - 8) {
                          pcVar12[9] = ' ';
                          if (uVar2 < uVar9 - 9) {
                            pcVar12[10] = ' ';
                            if (uVar2 < uVar9 - 10) {
                              pcVar12[0xb] = ' ';
                              if (uVar2 < uVar9 - 0xb) {
                                pcVar12[0xc] = ' ';
                                if ((uVar2 < uVar9 - 0xc) &&
                                   (pcVar12[0xd] = ' ', uVar2 < uVar9 - 0xd)) {
                                  pcVar12[0xe] = ' ';
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
        uVar17 = 0;
        do {
          builtin_strncpy(pcVar12,"                ",0x10);
          uVar17 = uVar17 + 1;
          pcVar12 = pcVar12 + 0x10;
        } while (uVar17 < uVar1);
        uVar9 = uVar9 + uVar1 * -0x10;
        pcVar12 = pcVar14 + uVar1 * 0x10;
        if (uVar23 - uVar2 != uVar1 * 0x10) goto LAB_00bffcd4;
      }
      uVar9 = uVar2 - 1;
      pcVar14 = pcVar14 + (ulong)uVar4 + 1;
    }
    uVar23 = uVar9;
    if (uVar10 != 0) {
LAB_00bffdc8:
      pcVar12 = pcVar14;
      if (0x57 < (uVar10 & 0xff)) {
        pcVar12 = pcVar14 + 1;
        *pcVar14 = '0';
      }
      *pcVar12 = (char)uVar10;
      pcVar14 = pcVar12 + 1;
      uVar10 = uVar23;
      if (uVar3 == 0x400) goto LAB_00c003a0;
    }
  }
  else {
    if (uVar10 != 0) goto LAB_00bffdc8;
    uVar10 = uVar23;
    if (uVar3 != 0x400) goto LAB_00bffdf0;
LAB_00c003a0:
    uVar23 = uVar10 - 1;
    if (uVar2 < uVar10) {
      uVar3 = ((uVar10 - uVar2) - 0x10 >> 4) + 1;
      pcVar12 = pcVar14;
      if (~uVar2 + uVar10 < 0xf) {
LAB_00c00478:
        *pcVar12 = '0';
        if (uVar2 < uVar23) {
          pcVar12[1] = '0';
          if (uVar2 < uVar23 - 1) {
            pcVar12[2] = '0';
            if (uVar2 < uVar23 - 2) {
              pcVar12[3] = '0';
              if (uVar2 < uVar23 - 3) {
                pcVar12[4] = '0';
                if (uVar2 < uVar23 - 4) {
                  pcVar12[5] = '0';
                  if (uVar2 < uVar23 - 5) {
                    pcVar12[6] = '0';
                    if (uVar2 < uVar23 - 6) {
                      pcVar12[7] = '0';
                      if (uVar2 < uVar23 - 7) {
                        pcVar12[8] = '0';
                        if (uVar2 < uVar23 - 8) {
                          pcVar12[9] = '0';
                          if (uVar2 < uVar23 - 9) {
                            pcVar12[10] = '0';
                            if (uVar2 < uVar23 - 10) {
                              pcVar12[0xb] = '0';
                              if (uVar2 < uVar23 - 0xb) {
                                pcVar12[0xc] = '0';
                                if ((uVar2 < uVar23 - 0xc) &&
                                   (pcVar12[0xd] = '0', uVar2 < uVar23 - 0xd)) {
                                  pcVar12[0xe] = '0';
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
        uVar9 = 0;
        do {
          builtin_strncpy(pcVar12,"0000000000000000",0x10);
          uVar9 = uVar9 + 1;
          pcVar12 = pcVar12 + 0x10;
        } while (uVar9 < uVar3);
        uVar23 = uVar23 + uVar3 * -0x10;
        pcVar12 = pcVar14 + uVar3 * 0x10;
        if (uVar10 - uVar2 != uVar3 * 0x10) goto LAB_00c00478;
      }
      uVar23 = uVar2 - 1;
      pcVar14 = pcVar14 + (ulong)(~uVar2 + uVar10) + 1;
    }
  }
LAB_00bffdf0:
  uVar10 = uVar5 - 1;
  if (uVar20 < uVar5) {
    uVar3 = ((uVar5 - uVar20) - 0x10 >> 4) + 1;
    pcVar12 = pcVar14;
    if (~uVar20 + uVar5 < 0xf) {
LAB_00bffe50:
      *pcVar12 = '0';
      if (uVar20 < uVar10) {
        pcVar12[1] = '0';
        if (uVar20 < uVar10 - 1) {
          pcVar12[2] = '0';
          if (uVar20 < uVar10 - 2) {
            pcVar12[3] = '0';
            if (uVar20 < uVar10 - 3) {
              pcVar12[4] = '0';
              if (uVar20 < uVar10 - 4) {
                pcVar12[5] = '0';
                if (uVar20 < uVar10 - 5) {
                  pcVar12[6] = '0';
                  if (uVar20 < uVar10 - 6) {
                    pcVar12[7] = '0';
                    if (uVar20 < uVar10 - 7) {
                      pcVar12[8] = '0';
                      if (uVar20 < uVar10 - 8) {
                        pcVar12[9] = '0';
                        if (uVar20 < uVar10 - 9) {
                          pcVar12[10] = '0';
                          if (uVar20 < uVar10 - 10) {
                            pcVar12[0xb] = '0';
                            if (uVar20 < uVar10 - 0xb) {
                              pcVar12[0xc] = '0';
                              if ((uVar20 < uVar10 - 0xc) &&
                                 (pcVar12[0xd] = '0', uVar20 < uVar10 - 0xd)) {
                                pcVar12[0xe] = '0';
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
      uVar9 = 0;
      do {
        builtin_strncpy(pcVar12,"0000000000000000",0x10);
        uVar9 = uVar9 + 1;
        pcVar12 = pcVar12 + 0x10;
      } while (uVar9 < uVar3);
      uVar10 = uVar10 + uVar3 * -0x10;
      pcVar12 = pcVar14 + uVar3 * 0x10;
      if (uVar5 - uVar20 != uVar3 * 0x10) goto LAB_00bffe50;
    }
    pcVar14 = pcVar14 + (ulong)(~uVar20 + uVar5) + 1;
  }
  if (pcVar19 < local_b + 2) {
    lVar6 = -(long)(pcVar19 + 1);
    uVar22 = (long)&local_8 + lVar6;
    if ((pcVar19 < pcVar14 + 0x10 && pcVar14 < pcVar19 + 0x10) || (uVar22 < 0x10)) {
      pcVar12 = (char *)0x0;
      do {
        pcVar14[(long)pcVar12] = pcVar19[(long)pcVar12];
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 != local_b + (2 - (long)pcVar19));
    }
    else {
      uVar11 = ((ulong)(auStack_18 + lVar6) >> 4) + 1;
      uVar15 = 0;
      uVar16 = uVar11 * 0x10;
      pcVar12 = pcVar14;
      pcVar18 = pcVar19;
      do {
        uVar24 = *(undefined8 *)pcVar18;
        uVar15 = uVar15 + 1;
        *(undefined8 *)(pcVar12 + 8) = *(undefined8 *)(pcVar18 + 8);
        *(undefined8 *)pcVar12 = uVar24;
        pcVar12 = pcVar12 + 0x10;
        pcVar18 = pcVar18 + 0x10;
      } while (uVar15 < uVar11);
      if (uVar22 != uVar16) {
        pcVar12 = local_b + 2;
        pcVar14[uVar16] = pcVar19[uVar16];
        if ((((((pcVar19 + uVar16 + 1 < pcVar12) &&
               (pcVar14[uVar16 + 1] = pcVar19[uVar16 + 1], pcVar19 + uVar16 + 2 < pcVar12)) &&
              (pcVar14[uVar16 + 2] = pcVar19[uVar16 + 2], pcVar19 + uVar16 + 3 < pcVar12)) &&
             ((pcVar14[uVar16 + 3] = pcVar19[uVar16 + 3], pcVar19 + uVar16 + 4 < pcVar12 &&
              (pcVar14[uVar16 + 4] = pcVar19[uVar16 + 4], pcVar19 + uVar16 + 5 < pcVar12)))) &&
            ((pcVar14[uVar16 + 5] = pcVar19[uVar16 + 5], pcVar19 + uVar16 + 6 < pcVar12 &&
             ((pcVar14[uVar16 + 6] = pcVar19[uVar16 + 6], pcVar19 + uVar16 + 7 < pcVar12 &&
              (pcVar14[uVar16 + 7] = pcVar19[uVar16 + 7], pcVar19 + uVar16 + 8 < pcVar12)))))) &&
           ((pcVar14[uVar16 + 8] = pcVar19[uVar16 + 8], pcVar19 + uVar16 + 9 < pcVar12 &&
            ((((pcVar14[uVar16 + 9] = pcVar19[uVar16 + 9], pcVar19 + uVar16 + 10 < pcVar12 &&
               (pcVar14[uVar16 + 10] = pcVar19[uVar16 + 10], pcVar19 + uVar16 + 0xb < pcVar12)) &&
              (pcVar14[uVar16 + 0xb] = pcVar19[uVar16 + 0xb], pcVar19 + uVar16 + 0xc < pcVar12)) &&
             ((pcVar14[uVar16 + 0xc] = pcVar19[uVar16 + 0xc], pcVar19 + uVar16 + 0xd < pcVar12 &&
              (pcVar14[uVar16 + 0xd] = pcVar19[uVar16 + 0xd], pcVar19 + uVar16 + 0xe < pcVar12))))))
           )) {
          pcVar14[uVar16 + 0xe] = pcVar19[uVar16 + 0xe];
        }
      }
    }
    pcVar14 = pcVar14 + ((long)&local_8 - (long)(pcVar19 + 1));
  }
  if (((uVar21 >> 8 & 1) == 0) || (uVar21 = uVar23 - 1, uVar23 <= uVar2)) goto LAB_00c0023c;
  uVar5 = ((uVar23 - uVar2) - 0x10 >> 4) + 1;
  pcVar19 = pcVar14;
  if (~uVar2 + uVar23 < 0xf) {
LAB_00c00150:
    *pcVar19 = ' ';
    if (uVar2 < uVar21) {
      pcVar19[1] = ' ';
      if (uVar2 < uVar21 - 1) {
        pcVar19[2] = ' ';
        if (uVar2 < uVar21 - 2) {
          pcVar19[3] = ' ';
          if (uVar2 < uVar21 - 3) {
            pcVar19[4] = ' ';
            if (uVar2 < uVar21 - 4) {
              pcVar19[5] = ' ';
              if (uVar2 < uVar21 - 5) {
                pcVar19[6] = ' ';
                if (uVar2 < uVar21 - 6) {
                  pcVar19[7] = ' ';
                  if (uVar2 < uVar21 - 7) {
                    pcVar19[8] = ' ';
                    if (uVar2 < uVar21 - 8) {
                      pcVar19[9] = ' ';
                      if (uVar2 < uVar21 - 9) {
                        pcVar19[10] = ' ';
                        if (uVar2 < uVar21 - 10) {
                          pcVar19[0xb] = ' ';
                          if (uVar2 < uVar21 - 0xb) {
                            pcVar19[0xc] = ' ';
                            if ((uVar2 < uVar21 - 0xc) && (pcVar19[0xd] = ' ', uVar2 < uVar21 - 0xd)
                               ) {
                              pcVar19[0xe] = ' ';
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
    uVar10 = 0;
    do {
      builtin_strncpy(pcVar19,"                ",0x10);
      uVar10 = uVar10 + 1;
      pcVar19 = pcVar19 + 0x10;
    } while (uVar10 < uVar5);
    uVar21 = uVar21 + uVar5 * -0x10;
    pcVar19 = pcVar14 + uVar5 * 0x10;
    if (uVar5 * 0x10 != uVar23 - uVar2) goto LAB_00c00150;
  }
  pcVar14 = pcVar14 + (ulong)(~uVar2 + uVar23) + 1;
LAB_00c0023c:
  *param_1 = pcVar14;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}

