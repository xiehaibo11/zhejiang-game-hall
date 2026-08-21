
undefined8 vorbis_book_unpack(undefined8 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  void *pvVar11;
  size_t sVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  void *pvVar29;
  size_t sVar30;
  ulong uVar31;
  long lVar32;
  
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
  lVar9 = oggpack_read(param_1,0x18);
  pvVar29 = (void *)0x0;
  if (lVar9 != 0x564342) goto LAB_00ebd8a0;
  lVar9 = oggpack_read(param_1,0x10);
  *(long *)(param_2 + 8) = lVar9;
  pvVar29 = malloc(lVar9 << 2);
  *(void **)(param_2 + 0x14) = pvVar29;
  if (pvVar29 == (void *)0x0) {
LAB_00ebd89c:
    pvVar29 = (void *)0x0;
  }
  else {
    uVar10 = oggpack_read(param_1,0x18);
    *(ulong *)(param_2 + 0x18) = uVar10;
    if (((long)uVar10 < 1) || (lVar9 = *(long *)(param_2 + 8), lVar9 < 1)) goto LAB_00ebd89c;
    iVar6 = 0;
    if ((int)lVar9 != 0) {
      iVar6 = 0x20 - (int)LZCOUNT((int)lVar9);
    }
    iVar8 = 0;
    if ((int)uVar10 != 0) {
      iVar8 = 0x20 - (int)LZCOUNT((int)uVar10);
    }
    if (0x18 < (uint)(iVar6 + iVar8)) goto LAB_00ebd89c;
    uVar31 = 0;
    if (uVar10 != 0) {
      uVar31 = 0x7fffffff / uVar10;
    }
    if ((long)uVar31 < lVar9) goto LAB_00ebd89c;
    iVar6 = oggpack_read(param_1,1);
    if (iVar6 == 1) {
      iVar6 = oggpack_read(param_1,5);
      sVar12 = *(size_t *)(param_2 + 0x18);
      *(size_t *)(param_2 + 0x12) = sVar12;
      pvVar29 = calloc(sVar12,1);
      if (pvVar29 != (void *)0x0) {
        if (0 < (long)sVar12) {
          lVar9 = 0;
          do {
            iVar16 = (int)sVar12 - (int)lVar9;
            iVar8 = 0;
            if (iVar16 != 0) {
              iVar8 = 0x20 - (int)LZCOUNT(iVar16);
            }
            lVar17 = oggpack_read(param_1,iVar8);
            if (lVar17 < 0) goto LAB_00ebd8a0;
            sVar12 = *(size_t *)(param_2 + 0x18);
            iVar6 = iVar6 + 1;
            lVar24 = lVar9;
            if (lVar17 != 0) {
              lVar21 = lVar17 + lVar9;
              do {
                lVar24 = lVar9;
                if ((long)sVar12 <= lVar9) break;
                *(char *)((long)pvVar29 + lVar9) = (char)iVar6;
                lVar17 = lVar17 + -1;
                lVar9 = lVar9 + 1;
                lVar24 = lVar21;
              } while (lVar17 != 0);
            }
            *param_2 = iVar6;
            lVar9 = lVar24;
          } while (lVar24 < (long)sVar12);
        }
LAB_00ebda58:
        iVar6 = oggpack_read(param_1,4);
        if (0 < iVar6) {
          uVar7 = oggpack_read(param_1,0x20);
          iVar8 = (uVar7 >> 0x15 & 0x3ff) - 0x314;
          param_2[0xb] = iVar8;
          uVar15 = uVar7 & 0x1fffff;
          if ((uVar7 & 0x1fffff) == 0) {
            param_2[0xb] = -9999;
            uVar15 = 0;
          }
          else {
            do {
              uVar18 = uVar15;
              iVar8 = iVar8 + -1;
              uVar15 = uVar18 * 2;
            } while ((uVar18 >> 0x1d & 1) == 0);
            param_2[0xb] = iVar8;
            uVar15 = uVar18 * -2;
            if (-1 < (int)uVar7) {
              uVar15 = uVar18 * 2;
            }
          }
          param_2[0xd] = uVar15;
          uVar7 = oggpack_read(param_1,0x20);
          iVar8 = (uVar7 >> 0x15 & 0x3ff) - 0x314;
          param_2[10] = iVar8;
          uVar15 = uVar7 & 0x1fffff;
          if ((uVar7 & 0x1fffff) == 0) {
            param_2[10] = -9999;
            uVar15 = 0;
          }
          else {
            do {
              uVar18 = uVar15;
              iVar8 = iVar8 + -1;
              uVar15 = uVar18 * 2;
            } while ((uVar18 >> 0x1d & 1) == 0);
            param_2[10] = iVar8;
            uVar15 = uVar18 * -2;
            if (-1 < (int)uVar7) {
              uVar15 = uVar18 * 2;
            }
          }
          param_2[0xc] = uVar15;
          iVar8 = oggpack_read(param_1,4);
          param_2[6] = iVar8 + 1;
          iVar8 = oggpack_read(param_1,1);
          param_2[0xe] = iVar8;
          param_2[0xc] = param_2[0xc] >> (param_2[6] & 0x1fU);
          param_2[10] = param_2[10] + param_2[6];
        }
        if (iVar6 == 2) {
          lVar9 = *(long *)(param_2 + 8) * (long)param_2[6];
          iVar6 = (int)*(long *)(param_2 + 8) * (int)*(undefined8 *)(param_2 + 0x18);
          if (lVar9 < 0x20) {
            uVar10 = lVar9 + 0xf;
            if (-1 < (long)(lVar9 + 8U)) {
              uVar10 = lVar9 + 8U;
            }
            iVar8 = 4;
            iVar16 = 1;
            param_2[5] = 1;
            iVar19 = (int)(uVar10 >> 3);
            if (1 < *(long *)(param_2 + 0x12)) {
              iVar8 = 4;
              if (iVar19 != 3) {
                iVar8 = iVar19;
              }
              iVar2 = (int)*(long *)(param_2 + 0x12) * 3 + -6;
              iVar3 = 0;
              if (iVar2 != 0) {
                iVar3 = 0x20 - (int)LZCOUNT(iVar2);
              }
              if (iVar3 < iVar8 * 4) {
                uVar15 = iVar8 + 1;
                if (iVar8 < 0) {
                  iVar8 = iVar8 + 1;
                }
                iVar8 = iVar8 >> 1;
                if (uVar15 < 3) {
                  iVar8 = 1;
                }
              }
            }
            if (iVar8 < iVar19) {
              iVar16 = 2;
            }
            sVar12 = (size_t)iVar6;
            uVar13 = 2;
            param_2[0x16] = iVar8;
            param_2[0x17] = iVar16;
            goto LAB_00ebdc8c;
          }
          param_2[5] = 3;
          iVar16 = (int)*(long *)(param_2 + 0x12);
          iVar8 = iVar16 + -1;
          uVar15 = 1;
          uVar7 = uVar15;
          if (iVar8 != 0) {
            uVar7 = (0x20U - (int)LZCOUNT(iVar8) >> 3) + 1;
          }
          uVar18 = 4;
          if (1 < *(long *)(param_2 + 0x12)) {
            uVar1 = 4;
            if (uVar7 != 3) {
              uVar1 = uVar7;
            }
            iVar16 = iVar16 * 3 + -6;
            iVar8 = 0;
            if (iVar16 != 0) {
              iVar8 = 0x20 - (int)LZCOUNT(iVar16);
            }
            uVar18 = uVar1;
            if ((iVar8 < (int)(uVar1 * 4)) && (uVar18 = uVar1 >> 1, uVar1 < 2)) {
              uVar18 = 1;
            }
          }
          if (uVar18 < uVar7) {
            uVar15 = 2;
          }
          param_2[0x16] = uVar18;
          param_2[0x17] = uVar15;
          iVar6 = FUN_00ebe338(param_2,pvVar29,(long)iVar6,param_1,2);
          if (iVar6 != 0) goto LAB_00ebd8a0;
          iVar8 = param_2[6];
          lVar9 = *(long *)(param_2 + 8);
          lVar17 = *(long *)(param_2 + 0x12);
          iVar6 = iVar8 + 0xe;
          if (-1 < iVar8 + 7) {
            iVar6 = iVar8 + 7;
          }
          iVar6 = (iVar6 >> 3) * (int)lVar9;
          param_2[0xf] = iVar6;
          pvVar11 = malloc(lVar17 * iVar6);
          lVar9 = lVar9 * lVar17;
          *(void **)(param_2 + 0x10) = pvVar11;
          if (iVar8 < 9) {
            if (0 < lVar9) {
              uVar4 = oggpack_read(param_1,iVar8);
              **(undefined1 **)(param_2 + 0x10) = uVar4;
              if (1 < *(long *)(param_2 + 8) * *(long *)(param_2 + 0x12)) {
                lVar9 = 1;
                do {
                  uVar4 = oggpack_read(param_1,param_2[6]);
                  *(undefined1 *)(*(long *)(param_2 + 0x10) + lVar9) = uVar4;
                  lVar9 = lVar9 + 1;
                } while (lVar9 < *(long *)(param_2 + 8) * *(long *)(param_2 + 0x12));
              }
            }
          }
          else if (0 < lVar9) {
            uVar5 = oggpack_read(param_1,iVar8);
            **(undefined2 **)(param_2 + 0x10) = uVar5;
            if (1 < *(long *)(param_2 + 8) * *(long *)(param_2 + 0x12)) {
              lVar9 = 1;
              do {
                uVar5 = oggpack_read(param_1,param_2[6]);
                *(undefined2 *)(*(long *)(param_2 + 0x10) + lVar9 * 2) = uVar5;
                lVar9 = lVar9 + 1;
              } while (lVar9 < *(long *)(param_2 + 8) * *(long *)(param_2 + 0x12));
            }
          }
LAB_00ebdc94:
          if (param_2[0x16] == 2) {
            if (param_2[0x17] == 1) {
              iVar6 = 2;
            }
            else {
              iVar6 = 3;
            }
LAB_00ebe1a4:
            param_2[4] = iVar6;
          }
          else {
            if (param_2[0x16] != 1) {
              iVar6 = 4;
              goto LAB_00ebe1a4;
            }
            if (param_2[0x17] != 1) {
              iVar6 = 1;
              goto LAB_00ebe1a4;
            }
            param_2[4] = 0;
          }
          iVar6 = oggpack_eop(param_1);
          if (iVar6 == 0) {
            uVar13 = 0;
            goto LAB_00ebd8e8;
          }
        }
        else if (iVar6 == 1) {
          lVar9 = *(long *)(param_2 + 0x18);
          uVar10 = *(ulong *)(param_2 + 8);
          uVar15 = (uint)LZCOUNT((int)lVar9) ^ 0x1f;
          if ((int)lVar9 == 0) {
            uVar15 = 0xffffffff;
          }
          uVar31 = 0;
          if (uVar10 != 0) {
            uVar31 = (long)((uVar10 - 1) * (long)(int)uVar15) / (long)uVar10;
          }
          uVar20 = uVar10 & 0xfffffffffffffffc;
          uVar31 = lVar9 >> (uVar31 & 0x3f);
          if (0 < (long)uVar10) goto LAB_00ebdd14;
LAB_00ebdd38:
          lVar17 = 1;
          lVar24 = 1;
          if (0 < lVar9) goto LAB_00ebde48;
LAB_00ebdd00:
          do {
            iVar6 = 1;
            if (lVar9 < lVar17) {
              iVar6 = -1;
            }
            uVar31 = (ulong)(uint)(iVar6 + (int)uVar31);
            if ((long)uVar10 < 1) goto LAB_00ebdd38;
LAB_00ebdd14:
            lVar21 = (long)(int)uVar31;
            lVar22 = (long)((int)uVar31 + 1);
            if (uVar10 < 4) {
              lVar24 = 1;
              lVar17 = 1;
              uVar23 = 0;
LAB_00ebde2c:
              lVar28 = uVar10 - uVar23;
              do {
                lVar17 = lVar17 * lVar21;
                lVar28 = lVar28 + -1;
                lVar24 = lVar24 * lVar22;
              } while (lVar28 != 0);
            }
            else {
              lVar32 = 1;
              lVar28 = 1;
              lVar24 = 1;
              lVar14 = 1;
              lVar25 = 1;
              lVar26 = 1;
              lVar27 = 1;
              lVar17 = 1;
              uVar23 = uVar20;
              do {
                lVar26 = lVar26 * lVar21;
                lVar17 = lVar17 * lVar21;
                lVar32 = lVar32 * lVar22;
                lVar14 = lVar14 * lVar22;
                lVar25 = lVar25 * lVar21;
                lVar27 = lVar27 * lVar21;
                lVar28 = lVar28 * lVar22;
                lVar24 = lVar24 * lVar22;
                uVar23 = uVar23 - 4;
              } while (uVar23 != 0);
              lVar17 = lVar17 * lVar26 * lVar27 * lVar25;
              lVar24 = lVar14 * lVar32 * lVar24 * lVar28;
              uVar23 = uVar20;
              if (uVar10 != uVar20) goto LAB_00ebde2c;
            }
          } while (lVar9 < lVar17);
LAB_00ebde48:
          if (lVar24 <= lVar9) goto LAB_00ebdd00;
          iVar6 = param_2[6];
          lVar9 = uVar10 * (long)iVar6 + 8;
          iVar8 = 0;
          if (iVar6 != 0) {
            iVar8 = 0x7ffffff7 / iVar6;
          }
          lVar17 = uVar10 * (long)iVar6 + 0xf;
          if (-1 < lVar9) {
            lVar17 = lVar9;
          }
          if ((long)iVar8 < (long)uVar10) goto LAB_00ebd8a0;
          iVar8 = (int)uVar31;
          uVar15 = 0;
          if (iVar8 + -1 != 0) {
            uVar15 = 0x20 - (int)LZCOUNT(iVar8 + -1);
          }
          sVar12 = (size_t)iVar8;
          if (lVar9 < 0x28) {
            lVar9 = uVar10 * uVar15 + 8;
            lVar24 = uVar10 * uVar15 + 0xf;
            if (-1 < lVar9) {
              lVar24 = lVar9;
            }
            iVar16 = iVar6 + 0xe;
            if (-1 < iVar6 + 7) {
              iVar16 = iVar6 + 7;
            }
            if ((lVar24 >> 3) + (long)(iVar16 >> 3) < lVar17 >> 3) goto LAB_00ebdedc;
            pvVar11 = calloc(2,sVar12);
            *(void **)(param_2 + 0x10) = pvVar11;
            if (pvVar11 != (void *)0x0) {
              if (0 < iVar8) {
                uVar5 = oggpack_read(param_1,iVar6);
                **(undefined2 **)(param_2 + 0x10) = uVar5;
                if (iVar8 != 1) {
                  sVar30 = 1;
                  do {
                    uVar5 = oggpack_read(param_1,param_2[6]);
                    *(undefined2 *)(*(long *)(param_2 + 0x10) + sVar30 * 2) = uVar5;
                    sVar30 = sVar30 + 1;
                  } while (sVar12 != sVar30);
                }
              }
              iVar6 = oggpack_eop(param_1);
              if (iVar6 == 0) {
                iVar6 = 1;
                param_2[5] = 1;
                uVar10 = *(long *)(param_2 + 8) * (long)param_2[6] + 8;
                uVar31 = *(long *)(param_2 + 8) * (long)param_2[6] + 0xf;
                if (-1 < (long)uVar10) {
                  uVar31 = uVar10;
                }
                iVar8 = 4;
                iVar16 = (int)(uVar31 >> 3);
                if (1 < *(long *)(param_2 + 0x12)) {
                  iVar8 = 4;
                  if (iVar16 != 3) {
                    iVar8 = iVar16;
                  }
                  iVar3 = (int)*(long *)(param_2 + 0x12) * 3 + -6;
                  iVar19 = 0;
                  if (iVar3 != 0) {
                    iVar19 = 0x20 - (int)LZCOUNT(iVar3);
                  }
                  if (iVar19 < iVar8 * 4) {
                    uVar15 = iVar8 + 1;
                    if (iVar8 < 0) {
                      iVar8 = iVar8 + 1;
                    }
                    iVar8 = iVar8 >> 1;
                    if (uVar15 < 3) {
                      iVar8 = 1;
                    }
                  }
                }
                if (iVar8 < iVar16) {
                  iVar6 = 2;
                }
                param_2[0x16] = iVar8;
                param_2[0x17] = iVar6;
                iVar6 = FUN_00ebe338(param_2,pvVar29,sVar12,param_1,1);
                if (iVar6 != 0) goto LAB_00ebd8a0;
                free(*(void **)(param_2 + 0x10));
                param_2[0x10] = 0;
                param_2[0x11] = 0;
                goto LAB_00ebdc94;
              }
            }
            goto LAB_00ebd8a0;
          }
LAB_00ebdedc:
          if (iVar6 < 9) {
            pvVar11 = malloc(sVar12);
            *(void **)(param_2 + 0x10) = pvVar11;
            if (pvVar11 == (void *)0x0) goto LAB_00ebd8a0;
            if (0 < iVar8) {
              uVar4 = oggpack_read(param_1,iVar6);
              **(undefined1 **)(param_2 + 0x10) = uVar4;
              if (iVar8 != 1) {
                sVar30 = 1;
                do {
                  uVar4 = oggpack_read(param_1,param_2[6]);
                  *(undefined1 *)(*(long *)(param_2 + 0x10) + sVar30) = uVar4;
                  sVar30 = sVar30 + 1;
                } while (sVar12 != sVar30);
              }
            }
          }
          else {
            pvVar11 = malloc((long)(iVar8 << 1));
            *(void **)(param_2 + 0x10) = pvVar11;
            if (pvVar11 == (void *)0x0) goto LAB_00ebd8a0;
            if (0 < iVar8) {
              uVar5 = oggpack_read(param_1,iVar6);
              **(undefined2 **)(param_2 + 0x10) = uVar5;
              if (iVar8 != 1) {
                sVar30 = 1;
                do {
                  uVar5 = oggpack_read(param_1,param_2[6]);
                  *(undefined2 *)(*(long *)(param_2 + 0x10) + sVar30 * 2) = uVar5;
                  sVar30 = sVar30 + 1;
                } while (sVar12 != sVar30);
              }
            }
          }
          iVar6 = oggpack_eop(param_1);
          if (iVar6 == 0) {
            param_2[5] = 2;
            uVar10 = *(long *)(param_2 + 8) * (ulong)uVar15 + 8;
            uVar31 = *(long *)(param_2 + 8) * (ulong)uVar15 + 0xf;
            if (-1 < (long)uVar10) {
              uVar31 = uVar10;
            }
            iVar6 = 4;
            param_2[0xf] = uVar15;
            iVar8 = (int)(uVar31 >> 3);
            if (1 < *(long *)(param_2 + 0x12)) {
              iVar6 = 4;
              if (iVar8 != 3) {
                iVar6 = iVar8;
              }
              iVar19 = (int)*(long *)(param_2 + 0x12) * 3 + -6;
              iVar16 = 0;
              if (iVar19 != 0) {
                iVar16 = 0x20 - (int)LZCOUNT(iVar19);
              }
              if (iVar16 < iVar6 * 4) {
                uVar15 = iVar6 + 1;
                if (iVar6 < 0) {
                  iVar6 = iVar6 + 1;
                }
                iVar6 = iVar6 >> 1;
                if (uVar15 < 3) {
                  iVar6 = 1;
                }
              }
            }
            iVar16 = 1;
            if (iVar6 < iVar8) {
              iVar16 = 2;
            }
            param_2[0x16] = iVar6;
            param_2[0x17] = iVar16;
            uVar13 = 1;
            goto LAB_00ebdc8c;
          }
        }
        else if (iVar6 == 0) {
          uVar15 = 1;
          uVar7 = uVar15;
          if (param_2[0x18] != 0) {
            uVar7 = (0x20U - (int)LZCOUNT(param_2[0x18]) >> 3) + 1;
          }
          uVar18 = 4;
          if (1 < *(long *)(param_2 + 0x12)) {
            uVar1 = 4;
            if (uVar7 != 3) {
              uVar1 = uVar7;
            }
            iVar8 = (int)*(long *)(param_2 + 0x12) * 3 + -6;
            iVar6 = 0;
            if (iVar8 != 0) {
              iVar6 = 0x20 - (int)LZCOUNT(iVar8);
            }
            uVar18 = uVar1;
            if ((iVar6 < (int)(uVar1 * 4)) && (uVar18 = uVar1 >> 1, uVar1 < 2)) {
              uVar18 = 1;
            }
          }
          if (uVar18 < uVar7) {
            uVar15 = 2;
          }
          param_2[0x16] = uVar18;
          param_2[0x17] = uVar15;
          param_2[5] = 0;
          sVar12 = 0;
          uVar13 = 0;
LAB_00ebdc8c:
          iVar6 = FUN_00ebe338(param_2,pvVar29,sVar12,param_1,uVar13);
          if (iVar6 == 0) goto LAB_00ebdc94;
        }
      }
    }
    else {
      if (iVar6 != 0) goto LAB_00ebd89c;
      pvVar29 = calloc(*(size_t *)(param_2 + 0x18),1);
      if (pvVar29 != (void *)0x0) {
        lVar9 = oggpack_read(param_1,1);
        lVar17 = *(long *)(param_2 + 0x18);
        if (lVar9 == 0) {
          *(long *)(param_2 + 0x12) = lVar17;
          if (0 < lVar17) {
            lVar9 = 0;
            do {
              lVar17 = oggpack_read(param_1,5);
              if (lVar17 == -1) goto LAB_00ebd8a0;
              *(char *)((long)pvVar29 + lVar9) = (char)(lVar17 + 1);
              if (*param_2 <= lVar17) {
                *param_2 = (int)(lVar17 + 1);
              }
              lVar9 = lVar9 + 1;
            } while (lVar9 < *(long *)(param_2 + 0x18));
          }
        }
        else if (0 < lVar17) {
          lVar9 = 0;
          do {
            lVar17 = oggpack_read(param_1,1);
            if (lVar17 == 0) {
              *(undefined1 *)((long)pvVar29 + lVar9) = 0;
            }
            else {
              lVar17 = oggpack_read(param_1,5);
              if (lVar17 == -1) goto LAB_00ebd8a0;
              *(char *)((long)pvVar29 + lVar9) = (char)(lVar17 + 1);
              *(long *)(param_2 + 0x12) = *(long *)(param_2 + 0x12) + 1;
              if (*param_2 <= lVar17) {
                *param_2 = (int)(lVar17 + 1);
              }
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(long *)(param_2 + 0x18));
        }
        goto LAB_00ebda58;
      }
    }
  }
LAB_00ebd8a0:
  if (*(void **)(param_2 + 0x10) != (void *)0x0) {
    free(*(void **)(param_2 + 0x10));
  }
  if (*(void **)(param_2 + 2) != (void *)0x0) {
    free(*(void **)(param_2 + 2));
  }
  if (*(void **)(param_2 + 0x14) != (void *)0x0) {
    free(*(void **)(param_2 + 0x14));
  }
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
  free(pvVar29);
  pvVar29 = *(void **)(param_2 + 0x10);
  uVar13 = 0xffffffff;
LAB_00ebd8e8:
  free(pvVar29);
  return uVar13;
}

