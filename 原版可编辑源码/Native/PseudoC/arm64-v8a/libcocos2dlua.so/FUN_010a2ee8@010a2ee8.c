
undefined8 FUN_010a2ee8(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  uint uVar12;
  short *psVar13;
  ulong uVar14;
  ushort *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ushort *puVar22;
  char *pcVar23;
  ulong uVar24;
  char cVar25;
  long lVar26;
  ushort *puVar27;
  short *psVar28;
  long *plVar29;
  ulong uVar30;
  ulong uVar31;
  int iVar32;
  ulong uVar33;
  ulong uVar34;
  uint uVar35;
  ulong uVar36;
  ulong uVar37;
  
  uVar8 = FUN_010a4adc();
  if ((int)uVar8 == 0) {
    uVar12 = *(uint *)(param_1 + 0x98);
    if ((uVar12 & 1) == 0) {
      uVar8 = FUN_010a5c80(param_1,*(undefined4 *)(param_3 + 0x60),param_3 + 0x68,0);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      uVar12 = *(uint *)(param_1 + 0x98);
    }
    if ((uVar12 >> 1 & 1) == 0) {
      uVar8 = FUN_010a5c80(param_1,*(undefined4 *)(param_3 + 0xa38),param_3 + 0xa40,1);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      if (0 < *(int *)(param_1 + 0x80)) {
        uVar8 = *(undefined8 *)(param_3 + 0xa28);
        psVar28 = *(short **)(param_1 + 0x88);
        psVar13 = psVar28 + (long)*(int *)(param_1 + 0x80) * 0x2c;
        do {
          lVar9 = FT_MulFix((ulong)*(uint *)(param_3 + 0x48) / 0x28,uVar8);
          if (*(int *)(param_3 + 0xbd4) != 0) {
            uVar12 = 0;
            plVar29 = (long *)0x0;
            uVar35 = 0;
            if (0x1f < lVar9) {
              lVar9 = 0x20;
            }
            do {
              lVar16 = param_3 + (ulong)uVar12 * 0x38;
              uVar3 = *(uint *)(lVar16 + 0xc08);
              if (((uVar3 & 1) != 0) &&
                 (((uVar3 >> 2 & 1) != 0 ||
                  ((uint)(*(int *)(param_1 + 0x90) == (int)*(char *)((long)psVar28 + 0x19)) !=
                   (uVar3 & 2) >> 1)))) {
                plVar1 = (long *)(lVar16 + 0xbd8);
                uVar6 = uVar3 >> 2 & 1;
                lVar10 = (long)*psVar28 - *plVar1;
                lVar16 = -lVar10;
                if (-1 < lVar10) {
                  lVar16 = lVar10;
                }
                lVar10 = FT_MulFix(lVar16,uVar8);
                plVar2 = plVar1;
                uVar7 = uVar6;
                lVar16 = lVar10;
                if (lVar9 <= lVar10) {
                  plVar2 = plVar29;
                  uVar7 = uVar35;
                  lVar16 = lVar9;
                }
                plVar29 = plVar2;
                lVar9 = lVar16;
                uVar35 = uVar7;
                if ((((uVar6 == 0) && (lVar10 != 0)) && ((*(byte *)(psVar28 + 0xc) & 1) != 0)) &&
                   ((uVar3 >> 1 & 1) != (uint)((long)*psVar28 < *plVar1))) {
                  lVar17 = param_3 + (ulong)uVar12 * 0x38;
                  lVar10 = (long)*psVar28 - *(long *)(lVar17 + 0xbf0);
                  lVar9 = -lVar10;
                  if (-1 < lVar10) {
                    lVar9 = lVar10;
                  }
                  lVar10 = FT_MulFix(lVar9,uVar8);
                  lVar9 = lVar10;
                  if (lVar16 <= lVar10) {
                    lVar9 = lVar16;
                  }
                  plVar29 = (long *)(lVar17 + 0xbf0);
                  uVar35 = 0;
                  if (lVar16 <= lVar10) {
                    plVar29 = plVar2;
                    uVar35 = uVar7;
                  }
                }
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < *(uint *)(param_3 + 0xbd4));
            if ((plVar29 != (long *)0x0) && (*(long **)(psVar28 + 0x14) = plVar29, uVar35 != 0)) {
              *(byte *)(psVar28 + 0xc) = *(byte *)(psVar28 + 0xc) | 8;
            }
          }
          psVar28 = psVar28 + 0x2c;
        } while (psVar28 < psVar13);
      }
    }
    uVar33 = 0;
    do {
      if ((int)uVar33 == 1) {
        bVar11 = *(byte *)(param_1 + 0x98) >> 1;
joined_r0x010a30ec:
        if ((bVar11 & 1) == 0) {
          lVar9 = param_1 + uVar33 * 0x28;
          uVar36 = *(ulong *)(lVar9 + 0x60);
          iVar5 = *(int *)(lVar9 + 0x58);
          uVar34 = 0;
          uVar37 = uVar36 + (long)iVar5 * 0x58;
          if ((uVar33 == 1) && (0 < iVar5)) {
            uVar14 = uVar36;
            uVar31 = 0;
            do {
              uVar34 = uVar31;
              if ((*(byte *)(uVar14 + 0x18) >> 2 & 1) == 0) {
                lVar9 = *(long *)(uVar14 + 0x28);
                uVar30 = *(ulong *)(uVar14 + 0x30);
                uVar24 = uVar14;
                if ((uVar30 == 0) || (lVar9 == 0)) {
LAB_010a3184:
                  uVar18 = uVar30;
                  if ((lVar9 == 0) && (uVar30 != 0)) {
                    lVar9 = *(long *)(uVar30 + 0x28);
                    uVar18 = uVar14;
                    uVar24 = uVar30;
                  }
                  uVar30 = uVar18;
                  if (lVar9 == 0) goto LAB_010a3204;
                }
                else if ((*(long *)(uVar30 + 0x28) != 0) &&
                        (((*(byte *)(uVar14 + 0x18) >> 3 & 1) != 0 ||
                         ((*(byte *)(uVar30 + 0x18) >> 3 & 1) != 0)))) {
                  uVar18 = uVar30;
                  plVar29 = (long *)(uVar30 + 0x28);
                  if ((*(byte *)(uVar30 + 0x18) & 8) == 0) {
                    uVar18 = uVar14;
                    plVar29 = (long *)(uVar14 + 0x28);
                  }
                  *plVar29 = 0;
                  *(byte *)(uVar18 + 0x18) = *(byte *)(uVar18 + 0x18) & 0xf7;
                  lVar9 = *(long *)(uVar14 + 0x28);
                  goto LAB_010a3184;
                }
                lVar9 = *(long *)(lVar9 + 0x10);
                *(long *)(uVar24 + 0x10) = lVar9;
                bVar11 = *(byte *)(uVar24 + 0x18) | 4;
                *(byte *)(uVar24 + 0x18) = bVar11;
                if ((uVar30 != 0) && (*(long *)(uVar30 + 0x28) == 0)) {
                    /* try { // try from 010a31cc to 011a3347 has its CatchHandler @ 010a31cc
                       catch() { ... } // from try @ 010a31cc with catch @ 010a31cc
                       catch() { ... } // from try @ 010a3350 with catch @ 010a31cc */
                  bVar4 = *(byte *)(uVar30 + 0x18);
                  lVar16 = FUN_010a6814(param_1,1,*(long *)(uVar30 + 8) - *(long *)(uVar24 + 8),
                                        bVar11,bVar4);
                  *(long *)(uVar30 + 0x10) = lVar16 + lVar9;
                  *(byte *)(uVar30 + 0x18) = bVar4 | 4;
                }
                uVar34 = uVar14;
                if (uVar31 != 0) {
                  uVar34 = uVar31;
                }
              }
LAB_010a3204:
              uVar14 = uVar14 + 0x58;
              uVar31 = uVar34;
            } while (uVar14 < uVar37);
          }
          if (iVar5 < 1) {
            iVar32 = 0;
          }
          else {
            iVar32 = 0;
            uVar14 = uVar36;
            do {
              bVar11 = *(byte *)(uVar14 + 0x18);
              if ((bVar11 >> 2 & 1) == 0) {
                uVar31 = *(ulong *)(uVar14 + 0x30);
                if (uVar31 == 0) {
                  iVar32 = iVar32 + 1;
                }
                else if (*(long *)(uVar31 + 0x28) == 0) {
                  if (uVar34 == 0) {
                    lVar9 = *(long *)(uVar14 + 8);
                    lVar10 = *(long *)(uVar31 + 8) - lVar9;
                    lVar16 = FUN_010a6814(param_1,uVar33,lVar10,bVar11,
                                          *(undefined1 *)(uVar31 + 0x18));
                    if (lVar16 < 0x60) {
                      lVar9 = lVar9 + (lVar10 >> 1);
                      uVar34 = 0x20;
                      if (0x40 < lVar16) {
                        uVar34 = 0x1a;
                      }
                      lVar17 = 0x20;
                      if (0x40 < lVar16) {
                        lVar17 = 0x26;
                      }
                      uVar24 = lVar9 + 0x20U & 0xffffffffffffffc0;
                      uVar30 = uVar24 - lVar17;
                      uVar24 = uVar24 | uVar34;
                      lVar26 = lVar9 - uVar30;
                      lVar17 = -lVar26;
                      if (-1 < lVar26) {
                        lVar17 = lVar26;
                      }
                      lVar9 = lVar9 - uVar24;
                      lVar26 = -lVar9;
                      if (-1 < lVar9) {
                        lVar26 = lVar9;
                      }
                    /* try { // try from 010a3348 to 011a334f has its CatchHandler @ 010a341c */
                      if (lVar26 <= lVar17) {
                        uVar30 = uVar24;
                      }
                      lVar9 = lVar16;
                    /* try { // try from 010a3350 to 011a342f has its CatchHandler @ 010a31cc */
                      if (lVar16 < 0) {
                        lVar9 = lVar16 + 1;
                      }
                      lVar9 = uVar30 - (lVar9 >> 1);
                      *(long *)(uVar14 + 0x10) = lVar9;
                      uVar34 = lVar9 + lVar16;
                      uVar30 = uVar31;
                    }
                    else {
                      uVar34 = lVar9 + 0x20U & 0xffffffffffffffc0;
                      uVar30 = uVar14;
                    }
                    *(ulong *)(uVar30 + 0x10) = uVar34;
                    *(byte *)(uVar14 + 0x18) = bVar11 | 4;
                    lVar16 = *(long *)(uVar14 + 0x10);
                    lVar9 = FUN_010a6814(param_1,uVar33 & 0xffffffff,lVar10,bVar11 | 4,
                                         *(undefined1 *)(uVar31 + 0x18));
                    *(long *)(uVar31 + 0x10) = lVar9 + lVar16;
                    uVar34 = uVar14;
                  }
                  else {
                    lVar16 = *(long *)(uVar34 + 8);
                    lVar9 = *(long *)(uVar34 + 0x10);
                    lVar17 = *(long *)(uVar14 + 8);
                    bVar4 = *(byte *)(uVar31 + 0x18);
                    lVar10 = *(long *)(uVar31 + 8) - lVar17;
                    uVar30 = FUN_010a6814(param_1,uVar33,lVar10,bVar11,bVar4);
                    if ((bVar4 >> 2 & 1) == 0) {
                      lVar9 = (lVar17 - lVar16) + lVar9;
                      lVar16 = lVar9 + (lVar10 >> 1);
                      uVar24 = uVar31;
                      if ((long)uVar30 < 0x60) {
                        uVar18 = lVar16 + 0x20U & 0xffffffffffffffc0;
                        lVar9 = 0x20;
                        if (0x40 < (long)uVar30) {
                          lVar9 = 0x26;
                        }
                        uVar19 = 0x20;
                        if (0x40 < (long)uVar30) {
                          uVar19 = 0x1a;
                        }
                        uVar21 = uVar18 - lVar9;
                        uVar18 = uVar18 | uVar19;
                        lVar10 = lVar16 - uVar21;
                        lVar9 = -lVar10;
                        if (-1 < lVar10) {
                          lVar9 = lVar10;
                        }
                        lVar16 = lVar16 - uVar18;
                        lVar10 = -lVar16;
                        if (-1 < lVar16) {
                          lVar10 = lVar16;
                        }
                        if (lVar10 <= lVar9) {
                          uVar21 = uVar18;
                        }
                        if ((long)uVar30 < 0) {
                          uVar30 = uVar30 + 1;
                        }
                        *(ulong *)(uVar14 + 0x10) = uVar21 - ((long)uVar30 >> 1);
                        lVar9 = uVar21 + ((long)uVar30 >> 1);
                      }
                      else {
                        uVar18 = lVar9 + 0x20U & 0xffffffffffffffc0;
                        lVar17 = (uVar18 + (uVar30 >> 1)) - lVar16;
                        uVar19 = (lVar10 + lVar9 + 0x20U & 0xffffffffffffffc0) - uVar30;
                        lVar9 = -lVar17;
                        if (-1 < lVar17) {
                          lVar9 = lVar17;
                        }
                        lVar16 = uVar19 + ((uVar30 >> 1) - lVar16);
                        lVar10 = -lVar16;
                        if (-1 < lVar16) {
                          lVar10 = lVar16;
                        }
                        if (lVar10 <= lVar9) {
                          uVar18 = uVar19;
                        }
                        *(ulong *)(uVar14 + 0x10) = uVar18;
                        lVar9 = uVar18 + uVar30;
                      }
                    }
                    else {
                      lVar9 = *(long *)(uVar31 + 0x10) - uVar30;
                      uVar24 = uVar14;
                    }
                    *(long *)(uVar24 + 0x10) = lVar9;
                    *(byte *)(uVar14 + 0x18) = bVar11 | 4;
                    /* catch() { ... } // from try @ 010a3348 with catch @ 010a341c */
                    *(byte *)(uVar31 + 0x18) = *(byte *)(uVar31 + 0x18) | 4;
                    if ((uVar36 < uVar14) && (*(long *)(uVar14 + 0x10) < *(long *)(uVar14 - 0x48)))
                    {
                      *(long *)(uVar14 + 0x10) = *(long *)(uVar14 - 0x48);
                    }
                  }
                }
                else {
                  lVar9 = *(long *)(uVar31 + 0x10);
                  lVar16 = FUN_010a6814(param_1,uVar33 & 0xffffffff,
                                        *(long *)(uVar14 + 8) - *(long *)(uVar31 + 8),
                                        *(undefined1 *)(uVar31 + 0x18),bVar11);
                  *(long *)(uVar14 + 0x10) = lVar16 + lVar9;
                  *(byte *)(uVar14 + 0x18) = bVar11 | 4;
                }
              }
              uVar14 = uVar14 + 0x58;
            } while (uVar14 < uVar37);
          }
          if (uVar33 == 0) {
            if (iVar5 == 6) {
              lVar16 = 2;
              lVar9 = 4;
              uVar14 = uVar36;
            }
            else {
              if (iVar5 != 0xc) goto LAB_010a359c;
              lVar16 = 5;
              lVar9 = 9;
              uVar14 = uVar36 + 0x58;
            }
            lVar10 = (*(long *)(uVar36 + lVar16 * 0x58 + 8) * 2 -
                     *(long *)(uVar36 + lVar9 * 0x58 + 8)) - *(long *)(uVar14 + 8);
            lVar17 = -lVar10;
            if (-1 < lVar10) {
              lVar17 = lVar10;
            }
            if (lVar17 < 8) {
              lVar17 = uVar36 + lVar9 * 0x58;
              lVar10 = *(long *)(lVar17 + 0x30);
              lVar26 = *(long *)(uVar36 + lVar16 * 0x58 + 0x10) * 2 - *(long *)(uVar14 + 0x10);
              lVar16 = *(long *)(lVar17 + 0x10) - lVar26;
              *(long *)(lVar17 + 0x10) = lVar26;
              if (lVar10 != 0) {
                *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) - lVar16;
              }
              if (iVar5 == 0xc) {
                *(long *)(uVar36 + 0x2d0) = *(long *)(uVar36 + 0x2d0) - lVar16;
                *(long *)(uVar36 + 0x3d8) = *(long *)(uVar36 + 0x3d8) - lVar16;
              }
              lVar9 = uVar36 + lVar9 * 0x58;
              *(byte *)(lVar9 + 0x18) = *(byte *)(lVar9 + 0x18) | 4;
              if (lVar10 != 0) {
                *(byte *)(lVar10 + 0x18) = *(byte *)(lVar10 + 0x18) | 4;
              }
            }
          }
LAB_010a359c:
          if ((0 < iVar5) && (uVar14 = uVar36, iVar32 != 0 || uVar34 == 0)) {
            do {
              bVar11 = *(byte *)(uVar14 + 0x18);
              if ((bVar11 >> 2 & 1) == 0) {
                lVar9 = *(long *)(uVar14 + 0x38);
                if (lVar9 == 0) {
LAB_010a3600:
                  uVar31 = uVar14;
                  if (uVar34 == 0) {
                    uVar31 = *(long *)(uVar14 + 8) + 0x20U & 0xffffffffffffffc0;
                    uVar34 = uVar14;
                  }
                  else {
                    do {
                      uVar30 = uVar31;
                      uVar31 = uVar30 - 0x58;
                      if (uVar31 < uVar36) {
                        bVar4 = 0;
                        uVar24 = uVar14;
                        goto LAB_010a3644;
                      }
                    } while ((*(byte *)(uVar30 - 0x40) >> 2 & 1) == 0);
                    bVar4 = 1;
                    uVar24 = uVar14;
LAB_010a3644:
                    do {
                      uVar18 = uVar24;
                      uVar24 = uVar18 + 0x58;
                      if (uVar37 <= uVar24) goto LAB_010a36a8;
                    } while ((*(byte *)(uVar18 + 0x70) >> 2 & 1) == 0);
                    if (((bool)(uVar31 < uVar14 & bVar4)) && (uVar14 < uVar24)) {
                      uVar31 = *(ulong *)(uVar30 - 0x48);
                      lVar9 = *(long *)(uVar18 + 0x60) - *(long *)(uVar30 - 0x50);
                      if (lVar9 != 0) {
                        lVar9 = FT_MulDiv(*(long *)(uVar14 + 8) - *(long *)(uVar30 - 0x50),
                                          *(long *)(uVar18 + 0x68) - uVar31,lVar9);
                        bVar11 = *(byte *)(uVar14 + 0x18);
                        uVar31 = lVar9 + uVar31;
                      }
                    }
                    else {
LAB_010a36a8:
                      uVar31 = ((*(long *)(uVar14 + 8) + 0x10) - *(long *)(uVar34 + 8) &
                               0xffffffffffffffe0U) + *(long *)(uVar34 + 0x10);
                    }
                  }
                }
                else {
                  lVar10 = *(long *)(lVar9 + 8) - *(long *)(uVar14 + 8);
                  lVar16 = -lVar10;
                  if (-1 < lVar10) {
                    lVar16 = lVar10;
                  }
                  if (0x4f < lVar16) goto LAB_010a3600;
                  uVar31 = (*(long *)(uVar14 + 8) - *(long *)(lVar9 + 8)) + *(long *)(lVar9 + 0x10);
                }
                *(ulong *)(uVar14 + 0x10) = uVar31;
                *(byte *)(uVar14 + 0x18) = bVar11 | 4;
                if ((uVar36 < uVar14) &&
                   (uVar30 = *(ulong *)(uVar14 - 0x48), (long)uVar31 < (long)uVar30)) {
                  *(ulong *)(uVar14 + 0x10) = uVar30;
                  uVar31 = uVar30;
                }
                if (((uVar14 + 0x58 < uVar37) && ((*(byte *)(uVar14 + 0x70) >> 2 & 1) != 0)) &&
                   (*(long *)(uVar14 + 0x68) < (long)uVar31)) {
                  *(long *)(uVar14 + 0x10) = *(long *)(uVar14 + 0x68);
                }
              }
              uVar14 = uVar14 + 0x58;
            } while (uVar14 < uVar37);
          }
          lVar9 = param_1 + uVar33 * 0x28;
          uVar34 = *(ulong *)(lVar9 + 0x50);
          iVar5 = *(int *)(lVar9 + 0x48);
          uVar36 = uVar34 + (long)iVar5 * 0x58;
          if (uVar33 == 0) {
            if (0 < iVar5) {
              do {
                if (*(long *)(uVar34 + 0x10) != 0) {
                  puVar22 = *(ushort **)(uVar34 + 0x50);
                  uVar8 = *(undefined8 *)(*(long *)(uVar34 + 0x10) + 0x10);
                  puVar15 = (ushort *)(uVar34 + 0x48);
                  do {
                    puVar27 = *(ushort **)puVar15;
                    *(undefined8 *)(puVar27 + 0x10) = uVar8;
                    puVar15 = puVar27 + 0x20;
                    *puVar27 = *puVar27 | 4;
                  } while (puVar27 != puVar22);
                }
                uVar34 = uVar34 + 0x58;
              } while (uVar34 < uVar36);
            }
          }
          else if (0 < iVar5) {
            do {
              if (*(long *)(uVar34 + 0x10) != 0) {
                puVar22 = *(ushort **)(uVar34 + 0x50);
                uVar8 = *(undefined8 *)(*(long *)(uVar34 + 0x10) + 0x10);
                puVar15 = (ushort *)(uVar34 + 0x48);
                do {
                  puVar27 = *(ushort **)puVar15;
                  *(undefined8 *)(puVar27 + 0x14) = uVar8;
                  puVar15 = puVar27 + 0x20;
                  *puVar27 = *puVar27 | 8;
                } while (puVar27 != puVar22);
              }
              uVar34 = uVar34 + 0x58;
            } while (uVar34 < uVar36);
          }
          FUN_010a6150(param_1,uVar33 & 0xffffffff);
          FUN_010a6368(param_1,uVar33 & 0xffffffff);
        }
      }
      else if ((int)uVar33 == 0) {
        bVar11 = *(byte *)(param_1 + 0x98);
        goto joined_r0x010a30ec;
      }
      uVar33 = uVar33 + 1;
    } while (uVar33 != 2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010a383c with catch @ 010a37e8
                        */
    if (0 < *(int *)(param_1 + 0x2c)) {
      puVar15 = *(ushort **)(param_1 + 0x30);
      puVar20 = *(undefined8 **)(param_2 + 8);
      puVar22 = puVar15 + (long)*(int *)(param_1 + 0x2c) * 0x28;
      pcVar23 = *(char **)(param_2 + 0x10);
      do {
        uVar8 = *(undefined8 *)(puVar15 + 0x10);
        puVar20[1] = *(undefined8 *)(puVar15 + 0x14);
        *puVar20 = uVar8;
        if ((*puVar15 & 1) == 0) {
          cVar25 = ((byte)(*puVar15 >> 1) & 1) + 1;
        }
        else {
          cVar25 = '\0';
        }
        puVar15 = puVar15 + 0x28;
        *pcVar23 = cVar25;
        puVar20 = puVar20 + 2;
        pcVar23 = pcVar23 + 1;
                    /* try { // try from 010a3834 to 011a383b has its CatchHandler @ 010a39b0 */
      } while (puVar15 < puVar22);
    }
    uVar8 = 0;
  }
                    /* try { // try from 010a383c to 011a39b3 has its CatchHandler @ 010a37e8 */
  return uVar8;
}

