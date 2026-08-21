
void vorbis_book_unpack(undefined8 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  long lVar11;
  void *pvVar12;
  ulong uVar13;
  size_t __size;
  undefined8 uVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined1 *puVar30;
  size_t sVar31;
  ulong uVar32;
  long lVar33;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  pcVar10 = (char *)oggpack_read(param_1,0x18);
  if (pcVar10 == "deE") {
    lVar11 = oggpack_read(param_1,0x10);
    *(long *)(param_2 + 8) = lVar11;
    pvVar12 = malloc(lVar11 << 2);
    *(void **)(param_2 + 0x14) = pvVar12;
    if (pvVar12 != (void *)0x0) {
      uVar13 = oggpack_read(param_1,0x18);
      *(ulong *)(param_2 + 0x18) = uVar13;
      if ((0 < (long)uVar13) && (lVar11 = *(long *)(param_2 + 8), 0 < lVar11)) {
        iVar7 = 0;
        if ((int)lVar11 != 0) {
          iVar7 = 0x20 - (int)LZCOUNT((int)lVar11);
        }
        iVar9 = 0;
        if ((int)uVar13 != 0) {
          iVar9 = 0x20 - (int)LZCOUNT((int)uVar13);
        }
        if ((uint)(iVar7 + iVar9) < 0x19) {
          uVar32 = 0;
          if (uVar13 != 0) {
            uVar32 = 0x7fffffff / uVar13;
          }
          if (lVar11 <= (long)uVar32) {
            iVar7 = oggpack_read(param_1,1);
            if (iVar7 == 1) {
              iVar7 = oggpack_read(param_1,5);
              lVar11 = *(long *)(param_2 + 0x18);
              puVar30 = auStack_60 + -(lVar11 + 0xfU & 0xfffffffffffffff0);
              *(long *)(param_2 + 0x12) = lVar11;
              if (0 < lVar11) {
                lVar18 = 0;
                do {
                  iVar17 = (int)lVar11 - (int)lVar18;
                  iVar9 = 0;
                  if (iVar17 != 0) {
                    iVar9 = 0x20 - (int)LZCOUNT(iVar17);
                  }
                  lVar25 = oggpack_read(param_1,iVar9);
                  if (lVar25 < 0) goto LAB_00e91bc8;
                  lVar11 = *(long *)(param_2 + 0x18);
                  iVar7 = iVar7 + 1;
                  lVar22 = lVar18;
                  if (lVar25 != 0) {
                    lVar23 = 0;
                    do {
                      lVar22 = lVar18 + lVar23;
                      if (lVar11 <= lVar22) goto LAB_00e913f0;
                      puVar30[lVar23 + lVar18] = (char)iVar7;
                      lVar23 = lVar23 + 1;
                    } while (lVar23 < lVar25);
                    lVar22 = lVar18 + lVar23;
                  }
LAB_00e913f0:
                  *param_2 = iVar7;
                  lVar18 = lVar22;
                } while (lVar22 < lVar11);
              }
            }
            else {
              if (iVar7 != 0) goto LAB_00e91bc8;
              puVar30 = auStack_60 + -(*(long *)(param_2 + 0x18) + 0xfU & 0xfffffffffffffff0);
              lVar11 = oggpack_read(param_1,1);
              lVar18 = *(long *)(param_2 + 0x18);
              if (lVar11 == 0) {
                *(long *)(param_2 + 0x12) = lVar18;
                if (0 < lVar18) {
                  lVar11 = 0;
                  do {
                    lVar18 = oggpack_read(param_1,5);
                    if (lVar18 == -1) goto LAB_00e91bc8;
                    puVar30[lVar11] = (char)(lVar18 + 1);
                    if (*param_2 <= lVar18) {
                      *param_2 = (int)(lVar18 + 1);
                    }
                    lVar11 = lVar11 + 1;
                  } while (lVar11 < *(long *)(param_2 + 0x18));
                }
              }
              else if (0 < lVar18) {
                lVar11 = 0;
                do {
                  lVar18 = oggpack_read(param_1,1);
                  if (lVar18 == 0) {
                    puVar30[lVar11] = 0;
                  }
                  else {
                    lVar18 = oggpack_read(param_1,5);
                    if (lVar18 == -1) goto LAB_00e91bc8;
                    puVar30[lVar11] = (char)(lVar18 + 1);
                    *(long *)(param_2 + 0x12) = *(long *)(param_2 + 0x12) + 1;
                    if (*param_2 <= lVar18) {
                      *param_2 = (int)(lVar18 + 1);
                    }
                  }
                  lVar11 = lVar11 + 1;
                } while (lVar11 < *(long *)(param_2 + 0x18));
              }
            }
            iVar7 = oggpack_read(param_1,4);
            if (0 < iVar7) {
              uVar8 = oggpack_read(param_1,0x20);
              iVar9 = (uVar8 >> 0x15 & 0x3ff) - 0x314;
              param_2[0xb] = iVar9;
              uVar16 = uVar8 & 0x1fffff;
              if ((uVar8 & 0x1fffff) == 0) {
                param_2[0xb] = -9999;
                uVar16 = 0;
              }
              else {
                do {
                  uVar19 = uVar16;
                  iVar9 = iVar9 + -1;
                  uVar16 = uVar19 * 2;
                } while ((uVar19 >> 0x1d & 1) == 0);
                param_2[0xb] = iVar9;
                uVar16 = uVar19 * -2;
                if (-1 < (int)uVar8) {
                  uVar16 = uVar19 * 2;
                }
              }
              param_2[0xd] = uVar16;
              uVar8 = oggpack_read(param_1,0x20);
              iVar9 = (uVar8 >> 0x15 & 0x3ff) - 0x314;
              param_2[10] = iVar9;
              uVar16 = uVar8 & 0x1fffff;
              if ((uVar8 & 0x1fffff) == 0) {
                param_2[10] = -9999;
                uVar16 = 0;
              }
              else {
                do {
                  uVar19 = uVar16;
                  iVar9 = iVar9 + -1;
                  uVar16 = uVar19 * 2;
                } while ((uVar19 >> 0x1d & 1) == 0);
                param_2[10] = iVar9;
                uVar16 = uVar19 * -2;
                if (-1 < (int)uVar8) {
                  uVar16 = uVar19 * 2;
                }
              }
              param_2[0xc] = uVar16;
              iVar9 = oggpack_read(param_1,4);
              param_2[6] = iVar9 + 1;
              iVar9 = oggpack_read(param_1,1);
              param_2[0xe] = iVar9;
              param_2[0xc] = param_2[0xc] >> (param_2[6] & 0x1fU);
              param_2[10] = param_2[10] + param_2[6];
            }
            if (iVar7 == 2) {
              lVar11 = *(long *)(param_2 + 8) * (long)param_2[6];
              iVar7 = (int)*(long *)(param_2 + 8) * (int)*(undefined8 *)(param_2 + 0x18);
              if (lVar11 < 0x20) {
                uVar13 = lVar11 + 0xf;
                if (-1 < (long)(lVar11 + 8U)) {
                  uVar13 = lVar11 + 8U;
                }
                iVar9 = 4;
                iVar17 = 1;
                param_2[5] = 1;
                iVar20 = (int)(uVar13 >> 3);
                if (1 < *(long *)(param_2 + 0x12)) {
                  iVar9 = 4;
                  if (iVar20 != 3) {
                    iVar9 = iVar20;
                  }
                  iVar2 = (int)*(long *)(param_2 + 0x12) * 3 + -6;
                  iVar3 = 0;
                  if (iVar2 != 0) {
                    iVar3 = 0x20 - (int)LZCOUNT(iVar2);
                  }
                  if (iVar3 < iVar9 * 4) {
                    uVar16 = iVar9 + 1;
                    if (iVar9 < 0) {
                      iVar9 = iVar9 + 1;
                    }
                    iVar9 = iVar9 >> 1;
                    if (uVar16 < 3) {
                      iVar9 = 1;
                    }
                  }
                }
                param_2[0x16] = iVar9;
                if (iVar9 < iVar20) {
                  iVar17 = 2;
                }
                __size = (size_t)iVar7;
                uVar14 = 2;
                param_2[0x17] = iVar17;
                goto LAB_00e91690;
              }
              param_2[5] = 3;
              iVar17 = (int)*(long *)(param_2 + 0x12);
              iVar9 = iVar17 + -1;
              uVar16 = 1;
              uVar8 = uVar16;
              if (iVar9 != 0) {
                uVar8 = (0x20U - (int)LZCOUNT(iVar9) >> 3) + 1;
              }
              uVar19 = 4;
              if (1 < *(long *)(param_2 + 0x12)) {
                uVar1 = 4;
                if (uVar8 != 3) {
                  uVar1 = uVar8;
                }
                iVar17 = iVar17 * 3 + -6;
                iVar9 = 0;
                if (iVar17 != 0) {
                  iVar9 = 0x20 - (int)LZCOUNT(iVar17);
                }
                uVar19 = uVar1;
                if ((iVar9 < (int)(uVar1 * 4)) && (uVar19 = uVar1 >> 1, uVar1 < 2)) {
                  uVar19 = 1;
                }
              }
              if (uVar19 < uVar8) {
                uVar16 = 2;
              }
              param_2[0x16] = uVar19;
              param_2[0x17] = uVar16;
              iVar7 = FUN_00e91dc8(param_2,puVar30,(long)iVar7,param_1,2);
              if (iVar7 != 0) goto LAB_00e91bc8;
              iVar9 = param_2[6];
              lVar11 = *(long *)(param_2 + 8);
              lVar18 = *(long *)(param_2 + 0x12);
              iVar7 = iVar9 + 0xe;
              if (-1 < iVar9 + 7) {
                iVar7 = iVar9 + 7;
              }
              iVar7 = (iVar7 >> 3) * (int)lVar11;
              param_2[0xf] = iVar7;
              pvVar12 = malloc(lVar18 * iVar7);
              lVar11 = lVar11 * lVar18;
              *(void **)(param_2 + 0x10) = pvVar12;
              if (iVar9 < 9) {
                if (0 < lVar11) {
                  uVar5 = oggpack_read(param_1,iVar9);
                  **(undefined1 **)(param_2 + 0x10) = uVar5;
                  if (1 < *(long *)(param_2 + 8) * *(long *)(param_2 + 0x12)) {
                    lVar11 = 1;
                    do {
                      uVar5 = oggpack_read(param_1,param_2[6]);
                      *(undefined1 *)(*(long *)(param_2 + 0x10) + lVar11) = uVar5;
                      lVar11 = lVar11 + 1;
                    } while (lVar11 < *(long *)(param_2 + 8) * *(long *)(param_2 + 0x12));
                  }
                }
              }
              else if (0 < lVar11) {
                uVar6 = oggpack_read(param_1,iVar9);
                **(undefined2 **)(param_2 + 0x10) = uVar6;
                if (1 < *(long *)(param_2 + 8) * *(long *)(param_2 + 0x12)) {
                  lVar11 = 1;
                  do {
                    uVar6 = oggpack_read(param_1,param_2[6]);
                    *(undefined2 *)(*(long *)(param_2 + 0x10) + lVar11 * 2) = uVar6;
                    lVar11 = lVar11 + 1;
                  } while (lVar11 < *(long *)(param_2 + 8) * *(long *)(param_2 + 0x12));
                }
              }
LAB_00e91698:
              if (param_2[0x16] == 2) {
                if (param_2[0x17] == 1) {
                  iVar7 = 2;
                }
                else {
                  iVar7 = 3;
                }
LAB_00e91bb8:
                param_2[4] = iVar7;
              }
              else {
                if (param_2[0x16] != 1) {
                  iVar7 = 4;
                  goto LAB_00e91bb8;
                }
                if (param_2[0x17] != 1) {
                  iVar7 = 1;
                  goto LAB_00e91bb8;
                }
                param_2[4] = 0;
              }
              uVar14 = oggpack_eop(param_1);
              if ((int)uVar14 == 0) goto LAB_00e91c04;
            }
            else if (iVar7 == 1) {
              lVar11 = *(long *)(param_2 + 0x18);
              uVar13 = *(ulong *)(param_2 + 8);
              uVar16 = (uint)LZCOUNT((int)lVar11) ^ 0x1f;
              if ((int)lVar11 == 0) {
                uVar16 = 0xffffffff;
              }
              uVar32 = 0;
              if (uVar13 != 0) {
                uVar32 = (long)((uVar13 - 1) * (long)(int)uVar16) / (long)uVar13;
              }
              uVar21 = uVar13 & 0xfffffffffffffffc;
              uVar32 = lVar11 >> (uVar32 & 0x3f);
              if (0 < (long)uVar13) goto LAB_00e91718;
LAB_00e9173c:
              lVar18 = 1;
              lVar25 = 1;
              if (0 < lVar11) goto LAB_00e9184c;
LAB_00e91704:
              do {
                iVar7 = 1;
                if (lVar11 < lVar18) {
                  iVar7 = -1;
                }
                uVar32 = (ulong)(uint)(iVar7 + (int)uVar32);
                if ((long)uVar13 < 1) goto LAB_00e9173c;
LAB_00e91718:
                lVar22 = (long)(int)uVar32;
                lVar23 = (long)((int)uVar32 + 1);
                if (uVar13 < 4) {
                  lVar25 = 1;
                  lVar18 = 1;
                  uVar24 = 0;
LAB_00e91830:
                  lVar29 = uVar13 - uVar24;
                  do {
                    lVar18 = lVar18 * lVar22;
                    lVar29 = lVar29 + -1;
                    lVar25 = lVar25 * lVar23;
                  } while (lVar29 != 0);
                }
                else {
                  lVar33 = 1;
                  lVar29 = 1;
                  lVar25 = 1;
                  lVar15 = 1;
                  lVar26 = 1;
                  lVar27 = 1;
                  lVar28 = 1;
                  lVar18 = 1;
                  uVar24 = uVar21;
                  do {
                    lVar27 = lVar27 * lVar22;
                    lVar18 = lVar18 * lVar22;
                    lVar33 = lVar33 * lVar23;
                    lVar15 = lVar15 * lVar23;
                    lVar26 = lVar26 * lVar22;
                    lVar28 = lVar28 * lVar22;
                    lVar29 = lVar29 * lVar23;
                    lVar25 = lVar25 * lVar23;
                    uVar24 = uVar24 - 4;
                  } while (uVar24 != 0);
                  lVar18 = lVar18 * lVar27 * lVar28 * lVar26;
                  lVar25 = lVar15 * lVar33 * lVar25 * lVar29;
                  uVar24 = uVar21;
                  if (uVar13 != uVar21) goto LAB_00e91830;
                }
              } while (lVar11 < lVar18);
LAB_00e9184c:
              if (lVar25 <= lVar11) goto LAB_00e91704;
              iVar7 = param_2[6];
              lVar11 = uVar13 * (long)iVar7 + 8;
              iVar9 = 0;
              if (iVar7 != 0) {
                iVar9 = 0x7ffffff7 / iVar7;
              }
              lVar18 = uVar13 * (long)iVar7 + 0xf;
              if (-1 < lVar11) {
                lVar18 = lVar11;
              }
              if ((long)iVar9 < (long)uVar13) goto LAB_00e91bc8;
              iVar9 = (int)uVar32;
              uVar16 = 0;
              if (iVar9 + -1 != 0) {
                uVar16 = 0x20 - (int)LZCOUNT(iVar9 + -1);
              }
              __size = (size_t)iVar9;
              if (lVar11 < 0x28) {
                lVar11 = uVar13 * uVar16 + 8;
                lVar25 = uVar13 * uVar16 + 0xf;
                if (-1 < lVar11) {
                  lVar25 = lVar11;
                }
                iVar17 = iVar7 + 0xe;
                if (-1 < iVar7 + 7) {
                  iVar17 = iVar7 + 7;
                }
                if ((lVar25 >> 3) + (long)(iVar17 >> 3) < lVar18 >> 3) goto LAB_00e918e0;
                *(size_t *)(param_2 + 0x10) =
                     (long)puVar30 - (__size * 2 + 0xf & 0xfffffffffffffff0);
                if (0 < iVar9) {
                  uVar6 = oggpack_read(param_1,iVar7);
                  **(undefined2 **)(param_2 + 0x10) = uVar6;
                  if (iVar9 != 1) {
                    sVar31 = 1;
                    do {
                      uVar6 = oggpack_read(param_1,param_2[6]);
                      *(undefined2 *)(*(long *)(param_2 + 0x10) + sVar31 * 2) = uVar6;
                      sVar31 = sVar31 + 1;
                    } while (__size != sVar31);
                  }
                }
                iVar7 = oggpack_eop(param_1);
                if (iVar7 == 0) {
                  iVar7 = 1;
                  param_2[5] = 1;
                  uVar13 = *(long *)(param_2 + 8) * (long)param_2[6] + 8;
                  uVar32 = *(long *)(param_2 + 8) * (long)param_2[6] + 0xf;
                  if (-1 < (long)uVar13) {
                    uVar32 = uVar13;
                  }
                  iVar9 = 4;
                  iVar17 = (int)(uVar32 >> 3);
                  if (1 < *(long *)(param_2 + 0x12)) {
                    iVar9 = 4;
                    if (iVar17 != 3) {
                      iVar9 = iVar17;
                    }
                    iVar3 = (int)*(long *)(param_2 + 0x12) * 3 + -6;
                    iVar20 = 0;
                    if (iVar3 != 0) {
                      iVar20 = 0x20 - (int)LZCOUNT(iVar3);
                    }
                    if (iVar20 < iVar9 * 4) {
                      uVar16 = iVar9 + 1;
                      if (iVar9 < 0) {
                        iVar9 = iVar9 + 1;
                      }
                      iVar9 = iVar9 >> 1;
                      if (uVar16 < 3) {
                        iVar9 = 1;
                      }
                    }
                  }
                  if (iVar9 < iVar17) {
                    iVar7 = 2;
                  }
                  param_2[0x16] = iVar9;
                  param_2[0x17] = iVar7;
                  iVar7 = FUN_00e91dc8(param_2,puVar30,__size,param_1,1);
                  param_2[0x10] = 0;
                  param_2[0x11] = 0;
                  goto joined_r0x00e91dbc;
                }
                param_2[0x10] = 0;
                param_2[0x11] = 0;
                pvVar12 = *(void **)(param_2 + 0x10);
                goto joined_r0x00e91ca8;
              }
LAB_00e918e0:
              if (iVar7 < 9) {
                pvVar12 = malloc(__size);
                *(void **)(param_2 + 0x10) = pvVar12;
                if (pvVar12 == (void *)0x0) goto LAB_00e91bc8;
                if (0 < iVar9) {
                  uVar5 = oggpack_read(param_1,iVar7);
                  **(undefined1 **)(param_2 + 0x10) = uVar5;
                  if (iVar9 != 1) {
                    lVar11 = 1;
                    do {
                      uVar5 = oggpack_read(param_1,param_2[6]);
                      *(undefined1 *)(*(long *)(param_2 + 0x10) + lVar11) = uVar5;
                      lVar11 = lVar11 + 1;
                    } while (lVar11 < (long)__size);
                  }
                }
              }
              else {
                pvVar12 = malloc((long)(iVar9 << 1));
                *(void **)(param_2 + 0x10) = pvVar12;
                if (pvVar12 == (void *)0x0) goto LAB_00e91bc8;
                if (0 < iVar9) {
                  uVar6 = oggpack_read(param_1,iVar7);
                  **(undefined2 **)(param_2 + 0x10) = uVar6;
                  if (iVar9 != 1) {
                    lVar11 = 1;
                    do {
                      uVar6 = oggpack_read(param_1,param_2[6]);
                      *(undefined2 *)(*(long *)(param_2 + 0x10) + lVar11 * 2) = uVar6;
                      lVar11 = lVar11 + 1;
                    } while (lVar11 < (long)__size);
                  }
                }
              }
              iVar7 = oggpack_eop(param_1);
              if (iVar7 == 0) {
                param_2[5] = 2;
                uVar13 = *(long *)(param_2 + 8) * (ulong)uVar16 + 8;
                uVar32 = *(long *)(param_2 + 8) * (ulong)uVar16 + 0xf;
                if (-1 < (long)uVar13) {
                  uVar32 = uVar13;
                }
                iVar7 = 4;
                param_2[0xf] = uVar16;
                iVar9 = (int)(uVar32 >> 3);
                if (1 < *(long *)(param_2 + 0x12)) {
                  iVar7 = 4;
                  if (iVar9 != 3) {
                    iVar7 = iVar9;
                  }
                  iVar20 = (int)*(long *)(param_2 + 0x12) * 3 + -6;
                  iVar17 = 0;
                  if (iVar20 != 0) {
                    iVar17 = 0x20 - (int)LZCOUNT(iVar20);
                  }
                  if (iVar17 < iVar7 * 4) {
                    uVar16 = iVar7 + 1;
                    if (iVar7 < 0) {
                      iVar7 = iVar7 + 1;
                    }
                    iVar7 = iVar7 >> 1;
                    if (uVar16 < 3) {
                      iVar7 = 1;
                    }
                  }
                }
                iVar17 = 1;
                if (iVar7 < iVar9) {
                  iVar17 = 2;
                }
                param_2[0x16] = iVar7;
                param_2[0x17] = iVar17;
                uVar14 = 1;
                goto LAB_00e91690;
              }
            }
            else if (iVar7 == 0) {
              uVar16 = 1;
              uVar8 = uVar16;
              if (param_2[0x18] != 0) {
                uVar8 = (0x20U - (int)LZCOUNT(param_2[0x18]) >> 3) + 1;
              }
              uVar19 = 4;
              if (1 < *(long *)(param_2 + 0x12)) {
                uVar1 = 4;
                if (uVar8 != 3) {
                  uVar1 = uVar8;
                }
                iVar9 = (int)*(long *)(param_2 + 0x12) * 3 + -6;
                iVar7 = 0;
                if (iVar9 != 0) {
                  iVar7 = 0x20 - (int)LZCOUNT(iVar9);
                }
                uVar19 = uVar1;
                if ((iVar7 < (int)(uVar1 * 4)) && (uVar19 = uVar1 >> 1, uVar1 < 2)) {
                  uVar19 = 1;
                }
              }
              if (uVar19 < uVar8) {
                uVar16 = 2;
              }
              param_2[0x16] = uVar19;
              param_2[0x17] = uVar16;
              param_2[5] = 0;
              __size = 0;
              uVar14 = 0;
LAB_00e91690:
              iVar7 = FUN_00e91dc8(param_2,puVar30,__size,param_1,uVar14);
joined_r0x00e91dbc:
              if (iVar7 == 0) goto LAB_00e91698;
            }
          }
        }
      }
    }
  }
LAB_00e91bc8:
  pvVar12 = *(void **)(param_2 + 0x10);
joined_r0x00e91ca8:
  if (pvVar12 != (void *)0x0) {
    free(pvVar12);
  }
  if (*(void **)(param_2 + 2) != (void *)0x0) {
    free(*(void **)(param_2 + 2));
  }
  if (*(void **)(param_2 + 0x14) != (void *)0x0) {
    free(*(void **)(param_2 + 0x14));
  }
  uVar14 = 0xffffffff;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
LAB_00e91c04:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar14);
}

