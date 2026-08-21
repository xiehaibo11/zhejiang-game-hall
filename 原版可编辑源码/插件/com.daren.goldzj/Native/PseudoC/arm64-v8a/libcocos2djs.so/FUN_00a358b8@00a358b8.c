
/* WARNING: Removing unreachable block (ram,0x00a35e74) */
/* WARNING: Removing unreachable block (ram,0x00a35e84) */

void FUN_00a358b8(byte *param_1)

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
  
                    /* try { // try from 00a358bc to 00b358f7 has its CatchHandler @ 00a35a14 */
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar15 = 0xffffffff;
  local_90 = 0xffffffffffffffff;
  local_94 = -1;
  uVar14 = (uint)*param_1;
  if (*param_1 == 0) {
                    /* try { // try from 00a35ec8 to 00b35f0b has its CatchHandler @ 00a35e34 */
    uVar21 = 0xffffffff;
    uVar17 = 0xffffffff;
    iVar10 = -1;
  }
  else {
                    /* try { // try from 00a358f8 to 00b35a6b has its CatchHandler @ 00a35620 */
    iVar20 = 0;
    iVar9 = -1;
    uVar15 = 0xffffffff;
    uVar21 = 0xffffffff;
    uVar17 = 0xffffffff;
    iVar10 = -1;
    bVar6 = false;
    __s = param_1;
LAB_00a35920:
    do {
      pbVar18 = __s + 1;
      iVar8 = isalnum(uVar14);
      if (iVar8 == 0) {
        uVar14 = (uint)*pbVar18;
        __s = pbVar18;
        if (uVar14 != 0) goto LAB_00a35920;
      }
      bVar4 = *__s;
      iVar8 = isalpha((uint)bVar4);
      if (iVar8 == 0) {
        if (bVar4 - 0x30 < 10) {
          local_98 = 0;
          if (local_94 != -1) {
LAB_00a359c8:
            piVar12 = (int *)__errno();
            iVar8 = *piVar12;
            *piVar12 = 0;
            lVar13 = strtol((char *)__s,(char **)&local_88,10);
            iVar3 = *piVar12;
            if (iVar3 != iVar8) {
              *piVar12 = iVar8;
            }
                    /* catch() { ... } // from try @ 00a3567c with catch @ 00a35a04 */
            if ((iVar3 == 0) && (lVar13 + 0x80000000U >> 0x20 == 0)) {
              uVar14 = FUN_00a16cfc();
                    /* catch() { ... } // from try @ 00a356b4 with catch @ 00a35a14
                       catch() { ... } // from try @ 00a35780 with catch @ 00a35a14
                       catch() { ... } // from try @ 00a358bc with catch @ 00a35a14 */
              if ((iVar10 == -1) &&
                 (((iVar10 = -1, param_1 < __s && ((int)uVar14 < 0x579)) &&
                  ((long)local_88 - (long)__s == 4)))) {
                bVar4 = __s[-1];
                if ((bVar4 == 0x2d) || (bVar4 == 0x2b)) {
                    /* try { // try from 00a35b88 to 00b35b97 has its CatchHandler @ 00a35d3c */
                  iVar8 = uVar14 + ((int)uVar14 / 100) * -0x28;
                    /* try { // try from 00a35b98 to 00b35baf has its CatchHandler @ 00a35d64 */
                  iVar10 = iVar8 * -0x3c;
                  if (bVar4 != 0x2b) {
                    iVar10 = iVar8 * 0x3c;
                  }
                  bVar7 = true;
                }
                else {
                    /* try { // try from 00a35c58 to 00b35c83 has its CatchHandler @ 00a35d68 */
                  bVar7 = false;
                  iVar10 = -1;
                }
              }
              else {
                bVar7 = false;
                if (((uVar21 == 0xffffffff) && ((uVar17 & uVar15) == 0xffffffff)) &&
                   ((long)local_88 - (long)__s == 8)) {
                    /* try { // try from 00a35a6c to 00b35abf has its CatchHandler @ 00a35a6c
                       catch() { ... } // from try @ 00a35a6c with catch @ 00a35a6c
                       catch() { ... } // from try @ 00a35cbc with catch @ 00a35a6c */
                  uVar15 = ((int)uVar14 % 10000) / 100 - 1;
                  uVar21 = (int)uVar14 % 100;
                  __s = local_88;
                  uVar17 = (int)uVar14 / 10000;
                  goto joined_r0x00a35ea4;
                }
              }
              if (((uVar21 == 0xffffffff) && (!bVar6)) && (!bVar7)) {
                bVar7 = uVar14 - 1 < 0x1f;
                uVar21 = uVar14;
                    /* try { // try from 00a35c84 to 00b35c8b has its CatchHandler @ 00a35d5c */
                if (!bVar7) {
                  uVar21 = 0xffffffff;
                }
                    /* try { // try from 00a35c8c to 00b35cbb has its CatchHandler @ 00a35d70 */
                bVar6 = true;
              }
              if (((uVar17 != 0xffffffff) || (!bVar6)) || (bVar7)) {
                __s = local_88;
                if (!bVar7) goto LAB_00a35f0c;
              }
              else {
                if ((int)uVar14 < 0x76c) {
                    /* try { // try from 00a35cbc to 00b35e33 has its CatchHandler @ 00a35a6c */
                  if ((int)uVar14 < 0x47) {
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
              goto joined_r0x00a35ea4;
            }
LAB_00a35f0c:
                    /* catch() { ... } // from try @ 00a35f6c with catch @ 00a35f0c */
            lVar13 = -1;
            goto LAB_00a35f14;
          }
                    /* try { // try from 00a35b10 to 00b35b17 has its CatchHandler @ 00a35d68 */
          iVar8 = sscanf((char *)__s,"%02d:%02d:%02d%n",(long)&local_90 + 4,&local_90,&local_94,
                         &local_98);
          if (iVar8 == 3) {
                    /* try { // try from 00a35b34 to 00b35b67 has its CatchHandler @ 00a35d94 */
            __s = __s + local_98;
          }
          else {
            if ((local_94 != -1) ||
               (iVar8 = sscanf((char *)__s,"%02d:%02d%n",(long)&local_90 + 4,&local_90,&local_98),
               iVar8 != 2)) goto LAB_00a359c8;
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
          if (iVar9 == -1) goto LAB_00a35aa8;
LAB_00a35980:
          bVar7 = false;
        }
        else {
          sVar11 = strlen((char *)&local_88);
                    /* catch() { ... } // from try @ 00a356a8 with catch @ 00a35974 */
                    /* catch() { ... } // from try @ 00a3569c with catch @ 00a35978 */
                    /* catch() { ... } // from try @ 00a35704 with catch @ 00a3597c
                       catch() { ... } // from try @ 00a357ec with catch @ 00a3597c */
          if (iVar9 != -1) goto LAB_00a35980;
LAB_00a35aa8:
          ppuVar2 = &PTR_s_Monday_01c6d808;
          if (sVar11 < 4) {
            ppuVar2 = &PTR_DAT_01c6d770;
          }
                    /* try { // try from 00a35ac0 to 00b35ad7 has its CatchHandler @ 00a35d84 */
          iVar9 = FUN_00a33710(&local_88,*ppuVar2);
          if (iVar9 == 0) {
            iVar9 = FUN_00a33710(&local_88,ppuVar2[1]);
                    /* try { // try from 00a35b00 to 00b35b0f has its CatchHandler @ 00a35d60 */
            if (iVar9 == 0) {
              iVar9 = FUN_00a33710(&local_88,ppuVar2[2]);
              if (iVar9 == 0) {
                iVar9 = FUN_00a33710(&local_88,ppuVar2[3]);
                if (iVar9 == 0) {
                  iVar9 = FUN_00a33710(&local_88,ppuVar2[4]);
                  if (iVar9 == 0) {
                    iVar9 = FUN_00a33710(&local_88,ppuVar2[5]);
                    if (iVar9 == 0) {
                      iVar8 = FUN_00a33710(&local_88,ppuVar2[6]);
                    /* catch() { ... } // from try @ 00a35aec with catch @ 00a35d80 */
                    /* catch() { ... } // from try @ 00a35ac0 with catch @ 00a35d84 */
                      iVar9 = 6;
                      if (iVar8 == 0) {
                        iVar9 = -1;
                      }
                    }
                    else {
                      iVar9 = 5;
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
                    /* catch() { ... } // from try @ 00a35b34 with catch @ 00a35d94
                       catch() { ... } // from try @ 00a35bc4 with catch @ 00a35d94 */
        }
        if ((uVar15 == 0xffffffff) && (!bVar7)) {
          iVar8 = FUN_00a33710(&local_88,&DAT_018942c1);
          if (iVar8 == 0) {
            iVar8 = FUN_00a33710(&local_88,&DAT_018942c5);
            if (iVar8 == 0) {
              iVar8 = FUN_00a33710(&local_88,&DAT_018942c9);
              if (iVar8 == 0) {
                iVar8 = FUN_00a33710(&local_88,&DAT_018942cd);
                if (iVar8 == 0) {
                  iVar8 = FUN_00a33710(&local_88,&DAT_018942d1);
                  if (iVar8 == 0) {
                    iVar8 = FUN_00a33710(&local_88,&DAT_018942d5);
                    if (iVar8 == 0) {
                    /* catch() { ... } // from try @ 00a35c84 with catch @ 00a35d5c */
                    /* catch() { ... } // from try @ 00a35b00 with catch @ 00a35d60 */
                    /* catch() { ... } // from try @ 00a35b98 with catch @ 00a35d64 */
                      iVar8 = FUN_00a33710(&local_88,&DAT_018942d9);
                    /* catch() { ... } // from try @ 00a35b10 with catch @ 00a35d68
                       catch() { ... } // from try @ 00a35c58 with catch @ 00a35d68 */
                      if (iVar8 == 0) {
                        iVar8 = FUN_00a33710(&local_88,&DAT_018942dd);
                        if (iVar8 == 0) {
                          iVar8 = FUN_00a33710(&local_88,"Sep");
                          if (iVar8 == 0) {
                            iVar8 = FUN_00a33710(&local_88,&DAT_018942e1);
                            if (iVar8 == 0) {
                              iVar8 = FUN_00a33710(&local_88,&DAT_018942e5);
                              if (iVar8 == 0) {
                                iVar8 = FUN_00a33710(&local_88,&DAT_018942e9);
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
                    /* catch() { ... } // from try @ 00a35c8c with catch @ 00a35d70 */
                      }
                    }
                    else {
                      uVar15 = 5;
                    /* catch() { ... } // from try @ 00a35b88 with catch @ 00a35d3c */
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
                    /* try { // try from 00a35bc4 to 00b35c07 has its CatchHandler @ 00a35d94 */
                uVar15 = 2;
              }
            }
            else {
                    /* try { // try from 00a35aec to 00b35aff has its CatchHandler @ 00a35d80 */
              uVar15 = 1;
            }
          }
          else {
            uVar15 = 0;
          }
          bVar7 = uVar15 != 0xffffffff;
                    /* try { // try from 00a35e34 to 00b35e77 has its CatchHandler @ 00a35e34
                       catch() { ... } // from try @ 00a35e34 with catch @ 00a35e34
                       catch() { ... } // from try @ 00a35ec8 with catch @ 00a35e34 */
        }
        if ((iVar10 != -1) || (bVar7)) {
          if (!bVar7) goto LAB_00a35f0c;
        }
        else {
          uVar14 = 0;
          puVar19 = &DAT_01894374;
          while (iVar10 = FUN_00a33710(&local_88,puVar19), iVar10 == 0) {
            uVar14 = uVar14 + 1;
            puVar19 = puVar19 + 0xc;
            if (0x43 < uVar14) goto LAB_00a35f0c;
          }
          iVar10 = *(int *)(puVar19 + 8) * 0x3c;
        }
        __s = __s + sVar11;
      }
joined_r0x00a35ea4:
      if (4 < iVar20) break;
      uVar14 = (uint)*__s;
      iVar20 = iVar20 + 1;
    } while (uVar14 != 0);
    if (local_94 != -1) goto LAB_00a35ee0;
  }
  local_90 = 0;
  local_94 = 0;
LAB_00a35ee0:
  lVar13 = -1;
                    /* catch() { ... } // from try @ 00a35e78 with catch @ 00a35ef8 */
  if (((uVar17 != 0xffffffff) && (uVar15 != 0xffffffff)) && (uVar21 != 0xffffffff)) {
    if ((int)uVar17 < 0x7b2) {
      lVar13 = 0;
    }
    else {
      lVar13 = -1;
                    /* try { // try from 00a35f58 to 00b35f6b has its CatchHandler @ 00a36028 */
                    /* try { // try from 00a35f6c to 00b36043 has its CatchHandler @ 00a35f0c */
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
                    /* catch() { ... } // from try @ 00a35f58 with catch @ 00a36028 */
                    /* try { // try from 00a36044 to 00b3609b has its CatchHandler @ 00a36044
                       catch() { ... } // from try @ 00a36044 with catch @ 00a36044
                       catch() { ... } // from try @ 00a363a4 with catch @ 00a36044 */
        lVar1 = ((long)(int)local_90 +
                ((long)local_90._4_4_ +
                ((long)*(int *)(&DAT_018946a4 + (long)(int)uVar14 * 4) + (long)(int)uVar21 +
                 (long)(int)(uVar17 - 0x7b2) * 0x16d +
                (long)(((iVar8 >> 5) - (iVar8 >> 0x1f)) + (iVar20 >> 2) + iVar9 / 400 + -0x1dd)) *
                0x18) * 0x3c) * 0x3c + (long)local_94 + -0x15180;
        lVar13 = lVar1;
        if ((int)lVar1 != -1) {
          lVar16 = (long)iVar10;
          if (iVar10 == -1) {
            lVar16 = 0;
          }
          lVar13 = 0x7fffffff;
          if (lVar1 <= 0x7fffffffffffffff - lVar16 || lVar16 < 1) {
            lVar13 = lVar1 + lVar16;
          }
        }
      }
    }
  }
LAB_00a35f14:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar13);
}

