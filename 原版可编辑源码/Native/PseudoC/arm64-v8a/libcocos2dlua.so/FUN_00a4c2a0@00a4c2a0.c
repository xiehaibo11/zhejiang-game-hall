
/* WARNING: Removing unreachable block (ram,0x00a4c85c) */
/* WARNING: Removing unreachable block (ram,0x00a4c86c) */

void FUN_00a4c2a0(byte *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  size_t sVar11;
  int *piVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  byte *pbVar18;
  undefined *puVar19;
  int iVar20;
  uint uVar21;
  byte *__s;
  int local_98;
  int local_94;
  undefined8 local_90;
  byte *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
                    /* try { // try from 00a4c2a0 to 00b4c2d3 has its CatchHandler @ 00a4c3a0 */
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar15 = 0xffffffff;
  local_90 = 0xffffffffffffffff;
                    /* try { // try from 00a4c2d4 to 00b4c2e7 has its CatchHandler @ 00a4c36c */
  local_94 = -1;
  uVar14 = (uint)*param_1;
  if (*param_1 == 0) {
    uVar21 = 0xffffffff;
    uVar17 = 0xffffffff;
    iVar10 = -1;
  }
  else {
    iVar20 = 0;
    iVar9 = -1;
                    /* try { // try from 00a4c2ec to 00b4c31f has its CatchHandler @ 00a4c370 */
    uVar15 = 0xffffffff;
    uVar21 = 0xffffffff;
    uVar17 = 0xffffffff;
    iVar10 = -1;
    bVar6 = false;
    __s = param_1;
LAB_00a4c308:
    do {
      pbVar18 = __s + 1;
      iVar8 = isalnum(uVar14);
      if (iVar8 == 0) {
        uVar14 = (uint)*pbVar18;
        __s = pbVar18;
        if (uVar14 != 0) goto LAB_00a4c308;
      }
                    /* try { // try from 00a4c320 to 00b4c3bb has its CatchHandler @ 00a4c188 */
      bVar4 = *__s;
      iVar8 = isalpha((uint)bVar4);
      if (iVar8 == 0) {
        if (bVar4 - 0x30 < 10) {
                    /* catch() { ... } // from try @ 00a4c2a0 with catch @ 00a4c3a0 */
          local_98 = 0;
          if (local_94 != -1) {
LAB_00a4c3b0:
            piVar12 = (int *)__errno();
            iVar8 = *piVar12;
            *piVar12 = 0;
            lVar13 = strtol((char *)__s,(char **)&local_88,10);
            iVar3 = *piVar12;
            if (iVar3 != iVar8) {
              *piVar12 = iVar8;
            }
            if ((iVar3 == 0) && (lVar13 + 0x80000000U >> 0x20 == 0)) {
              uVar14 = FUN_00a2c6e4();
              if ((iVar10 == -1) &&
                 (((iVar10 = -1, param_1 < __s && ((int)uVar14 < 0x579)) &&
                  ((long)local_88 - (long)__s == 4)))) {
                    /* try { // try from 00a4c548 to 00b4c54f has its CatchHandler @ 00a4c58c */
                bVar4 = __s[-1];
                    /* try { // try from 00a4c550 to 00b4c5a7 has its CatchHandler @ 00a4c4ac */
                if ((bVar4 == 0x2d) || (bVar4 == 0x2b)) {
                  iVar8 = uVar14 + ((int)uVar14 / 100) * -0x28;
                    /* catch() { ... } // from try @ 00a4c548 with catch @ 00a4c58c */
                  iVar10 = iVar8 * -0x3c;
                  if (bVar4 != 0x2b) {
                    iVar10 = iVar8 * 0x3c;
                  }
                  bVar7 = true;
                }
                else {
                  bVar7 = false;
                  iVar10 = -1;
                }
              }
              else {
                bVar7 = false;
                if (((uVar21 == 0xffffffff) && ((uVar17 & uVar15) == 0xffffffff)) &&
                   ((long)local_88 - (long)__s == 8)) {
                  uVar15 = ((int)uVar14 % 10000) / 100 - 1;
                  uVar21 = (int)uVar14 % 100;
                  __s = local_88;
                  uVar17 = (int)uVar14 / 10000;
                  goto joined_r0x00a4c88c;
                }
              }
              if (((uVar21 == 0xffffffff) && (!bVar6)) && (!bVar7)) {
                bVar7 = uVar14 - 1 < 0x1f;
                uVar21 = uVar14;
                if (!bVar7) {
                  uVar21 = 0xffffffff;
                }
                    /* try { // try from 00a4c678 to 00b4c6b7 has its CatchHandler @ 00a4c73c */
                bVar6 = true;
              }
              if (((uVar17 != 0xffffffff) || (!bVar6)) || (bVar7)) {
                __s = local_88;
                if (!bVar7) goto LAB_00a4c8f4;
              }
              else {
                if ((int)uVar14 < 0x76c) {
                  if ((int)uVar14 < 0x47) {
                    /* try { // try from 00a4c6b8 to 00b4c6e7 has its CatchHandler @ 00a4c628 */
                    uVar14 = uVar14 + 2000;
                  }
                  else {
                    uVar14 = uVar14 + 0x76c;
                  }
                }
                bVar6 = uVar21 != 0xffffffff;
                __s = local_88;
                uVar17 = uVar14;
              }
              goto joined_r0x00a4c88c;
            }
LAB_00a4c8f4:
            lVar13 = -1;
            goto LAB_00a4c8fc;
          }
          iVar8 = sscanf((char *)__s,"%02d:%02d:%02d%n",(long)&local_90 + 4,&local_90,&local_94,
                         &local_98);
          if (iVar8 == 3) {
            __s = __s + local_98;
          }
          else {
            if ((local_94 != -1) ||
               (iVar8 = sscanf((char *)__s,"%02d:%02d%n",(long)&local_90 + 4,&local_90,&local_98),
               iVar8 != 2)) goto LAB_00a4c3b0;
            local_94 = 0;
            __s = __s + local_98;
          }
        }
      }
      else {
        uStack_70 = 0;
        local_78 = 0;
        uStack_80 = 0;
        local_88 = (byte *)0x0;
        iVar8 = sscanf((char *)__s,"%31[ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz]",
                       &local_88);
        if (iVar8 == 0) {
          sVar11 = 0;
          if (iVar9 == -1) goto LAB_00a4c490;
LAB_00a4c368:
          bVar7 = false;
                    /* catch() { ... } // from try @ 00a4c2d4 with catch @ 00a4c36c */
                    /* catch() { ... } // from try @ 00a4c2ec with catch @ 00a4c370 */
        }
        else {
          sVar11 = strlen((char *)&local_88);
          if (iVar9 != -1) goto LAB_00a4c368;
LAB_00a4c490:
          ppuVar2 = &PTR_s_Monday_016a3fd8;
          if (sVar11 < 4) {
            ppuVar2 = &PTR_DAT_016a3f40;
          }
                    /* try { // try from 00a4c4ac to 00b4c547 has its CatchHandler @ 00a4c4ac
                       catch() { ... } // from try @ 00a4c4ac with catch @ 00a4c4ac
                       catch() { ... } // from try @ 00a4c550 with catch @ 00a4c4ac */
          iVar9 = FUN_00a4a0f8(&local_88,*ppuVar2);
          if (iVar9 == 0) {
            iVar9 = FUN_00a4a0f8(&local_88,ppuVar2[1]);
            if (iVar9 == 0) {
              iVar9 = FUN_00a4a0f8(&local_88,ppuVar2[2]);
              if (iVar9 == 0) {
                    /* try { // try from 00a4c628 to 00b4c677 has its CatchHandler @ 00a4c628
                       catch() { ... } // from try @ 00a4c628 with catch @ 00a4c628
                       catch() { ... } // from try @ 00a4c6b8 with catch @ 00a4c628
                       catch() { ... } // from try @ 00a4c6fc with catch @ 00a4c628 */
                iVar9 = FUN_00a4a0f8(&local_88,ppuVar2[3]);
                if (iVar9 == 0) {
                    /* try { // try from 00a4c6fc to 00b4c757 has its CatchHandler @ 00a4c628 */
                  iVar9 = FUN_00a4a0f8(&local_88,ppuVar2[4]);
                  if (iVar9 == 0) {
                    iVar9 = FUN_00a4a0f8(&local_88,ppuVar2[5]);
                    if (iVar9 == 0) {
                      iVar8 = FUN_00a4a0f8(&local_88,ppuVar2[6]);
                      iVar9 = 6;
                      if (iVar8 == 0) {
                        iVar9 = -1;
                      }
                    }
                    else {
                      iVar9 = 5;
                    /* catch() { ... } // from try @ 00a4c678 with catch @ 00a4c73c
                       catch() { ... } // from try @ 00a4c6e8 with catch @ 00a4c73c */
                    }
                  }
                  else {
                    iVar9 = 4;
                  }
                }
                else {
                  iVar9 = 3;
                }
              }
              else {
                iVar9 = 2;
              }
            }
            else {
              iVar9 = 1;
            }
          }
          else {
            iVar9 = 0;
          }
          bVar7 = iVar9 != -1;
        }
        if ((uVar15 == 0xffffffff) && (!bVar7)) {
          iVar8 = FUN_00a4a0f8(&local_88,&DAT_013c6bf1);
          if (iVar8 == 0) {
            iVar8 = FUN_00a4a0f8(&local_88,&DAT_013c6bf5);
            if (iVar8 == 0) {
              iVar8 = FUN_00a4a0f8(&local_88,&DAT_013c6bf9);
              if (iVar8 == 0) {
                iVar8 = FUN_00a4a0f8(&local_88,&DAT_013c6bfd);
                if (iVar8 == 0) {
                  iVar8 = FUN_00a4a0f8(&local_88,&DAT_013c6c01);
                    /* try { // try from 00a4c6e8 to 00b4c6fb has its CatchHandler @ 00a4c73c */
                  if (iVar8 == 0) {
                    iVar8 = FUN_00a4a0f8(&local_88,&DAT_013c6c05);
                    if (iVar8 == 0) {
                      iVar8 = FUN_00a4a0f8(&local_88,&DAT_013c6c09);
                      if (iVar8 == 0) {
                        iVar8 = FUN_00a4a0f8(&local_88,&DAT_013c6c0d);
                        if (iVar8 == 0) {
                          iVar8 = FUN_00a4a0f8(&local_88,&DAT_013c6c11);
                          if (iVar8 == 0) {
                            iVar8 = FUN_00a4a0f8(&local_88,&DAT_013c6c15);
                            if (iVar8 == 0) {
                              iVar8 = FUN_00a4a0f8(&local_88,&DAT_013c6c19);
                              if (iVar8 == 0) {
                                iVar8 = FUN_00a4a0f8(&local_88,&DAT_013c6c1d);
                                uVar15 = 0xb;
                                if (iVar8 == 0) {
                                  uVar15 = 0xffffffff;
                                }
                              }
                              else {
                                uVar15 = 10;
                              }
                            }
                            else {
                              uVar15 = 9;
                            }
                          }
                          else {
                            uVar15 = 8;
                          }
                        }
                        else {
                          uVar15 = 7;
                        }
                      }
                      else {
                        uVar15 = 6;
                      }
                    }
                    else {
                      uVar15 = 5;
                    }
                  }
                  else {
                    uVar15 = 4;
                  }
                }
                else {
                  uVar15 = 3;
                }
              }
              else {
                uVar15 = 2;
              }
            }
            else {
              uVar15 = 1;
            }
          }
          else {
            uVar15 = 0;
          }
          bVar7 = uVar15 != 0xffffffff;
        }
        if ((iVar10 != -1) || (bVar7)) {
          if (!bVar7) goto LAB_00a4c8f4;
        }
        else {
          uVar14 = 0;
          puVar19 = &DAT_013c6ca8;
          while (iVar10 = FUN_00a4a0f8(&local_88,puVar19), iVar10 == 0) {
            uVar14 = uVar14 + 1;
            puVar19 = puVar19 + 0xc;
            if (0x43 < uVar14) goto LAB_00a4c8f4;
          }
          iVar10 = *(int *)(puVar19 + 8) * 0x3c;
        }
        __s = __s + sVar11;
      }
joined_r0x00a4c88c:
      if (4 < iVar20) break;
      uVar14 = (uint)*__s;
      iVar20 = iVar20 + 1;
    } while (uVar14 != 0);
                    /* try { // try from 00a4c8a4 to 00b4c8a7 has its CatchHandler @ 00a4c8dc */
                    /* try { // try from 00a4c8a8 to 00b4c8ef has its CatchHandler @ 00a4c858 */
    if (local_94 != -1) goto LAB_00a4c8c8;
  }
  local_90 = 0;
  local_94 = 0;
LAB_00a4c8c8:
  lVar13 = -1;
                    /* catch() { ... } // from try @ 00a4c8a4 with catch @ 00a4c8dc */
  if (((uVar17 != 0xffffffff) && (uVar15 != 0xffffffff)) && (uVar21 != 0xffffffff)) {
    if ((int)uVar17 < 0x7b2) {
      lVar13 = 0;
                    /* try { // try from 00a4c8f0 to 00b4ca1f has its CatchHandler @ 00a4c8f0
                       catch() { ... } // from try @ 00a4c8f0 with catch @ 00a4c8f0
                       catch() { ... } // from try @ 00a4caa0 with catch @ 00a4c8f0 */
    }
    else {
      lVar13 = -1;
      if ((((local_94 < 0x3d) && ((int)uVar15 < 0xc)) && ((int)uVar21 < 0x20)) &&
         ((local_90._4_4_ < 0x18 && ((int)local_90 < 0x3c)))) {
        uVar14 = uVar15;
        if ((int)uVar15 < 0) {
          uVar17 = (int)(0xb - uVar15) / 0xc + uVar17;
          uVar14 = 0xb - (int)(0xb - uVar15) % 0xc;
        }
        iVar9 = uVar17 - ((int)uVar15 < 2);
        iVar20 = iVar9 + 3;
        if (-1 < iVar9) {
          iVar20 = iVar9;
        }
        iVar8 = (int)((ulong)((long)iVar9 * -0x51eb851f) >> 0x20);
                    /* try { // try from 00a4ca20 to 00b4ca53 has its CatchHandler @ 00a4cb20 */
        lVar1 = ((long)(int)local_90 +
                ((long)local_90._4_4_ +
                ((long)*(int *)(&DAT_013c6fd8 + (long)(int)uVar14 * 4) + (long)(int)uVar21 +
                 (long)(int)(uVar17 - 0x7b2) * 0x16d +
                (long)(((iVar8 >> 5) - (iVar8 >> 0x1f)) + (iVar20 >> 2) + iVar9 / 400 + -0x1dd)) *
                0x18) * 0x3c) * 0x3c + (long)local_94 + -0x15180;
        lVar13 = lVar1;
        if ((int)lVar1 != -1) {
          lVar16 = (long)iVar10;
          if (iVar10 == -1) {
            lVar16 = 0;
          }
                    /* try { // try from 00a4ca54 to 00b4ca67 has its CatchHandler @ 00a4caec */
          lVar13 = 0x7fffffff;
          if (lVar1 <= 0x7fffffffffffffff - lVar16 || lVar16 < 1) {
            lVar13 = lVar1 + lVar16;
          }
        }
      }
    }
  }
LAB_00a4c8fc:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar13);
}

