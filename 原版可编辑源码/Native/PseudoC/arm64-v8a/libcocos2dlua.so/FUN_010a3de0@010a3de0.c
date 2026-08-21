
undefined8 FUN_010a3de0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  byte *pbVar11;
  ulong uVar12;
  ushort *puVar13;
  ulong *puVar14;
  byte *pbVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ushort uVar18;
  byte *pbVar19;
  char *pcVar20;
  uint uVar21;
  char cVar22;
  long lVar23;
  ushort *puVar24;
  ushort *puVar25;
  byte *pbVar26;
  byte *pbVar27;
  ulong uVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  int iVar32;
  undefined8 local_88;
  
  uVar7 = FUN_010a4adc();
  if ((int)uVar7 == 0) {
    uVar21 = *(uint *)(param_1 + 0x98);
    if ((uVar21 & 1) == 0) {
      uVar7 = FUN_010a763c(param_1,0);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      FUN_010a7dfc(param_1,param_3,0);
      uVar21 = *(uint *)(param_1 + 0x98);
    }
    if ((uVar21 >> 1 & 1) == 0) {
      uVar7 = FUN_010a763c(param_1,1);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      FUN_010a7dfc(param_1,param_3,1);
    }
    uVar28 = 0;
    do {
      if ((int)uVar28 == 1) {
        bVar2 = *(byte *)(param_1 + 0x98) >> 1;
joined_r0x010a3f84:
        if ((bVar2 & 1) == 0) {
          lVar9 = param_1 + uVar28 * 0x28;
          piVar10 = (int *)(lVar9 + 0x58);
          iVar4 = *piVar10;
          puVar14 = (ulong *)(lVar9 + 0x60);
          pbVar31 = (byte *)*puVar14;
          pbVar26 = pbVar31 + (long)iVar4 * 0x58;
          if (iVar4 < 1) {
            iVar32 = 0;
          }
          else {
            pbVar11 = pbVar31;
            pbVar30 = (byte *)0x0;
            do {
              bVar2 = pbVar11[0x18];
              pbVar29 = pbVar30;
              if ((bVar2 >> 2 & 1) == 0) {
                lVar9 = *(long *)(pbVar11 + 0x28);
                pbVar27 = *(byte **)(pbVar11 + 0x30);
                pbVar19 = pbVar11;
                if (lVar9 == 0) {
                  if ((pbVar27 == (byte *)0x0) || (lVar9 = *(long *)(pbVar27 + 0x28), lVar9 == 0))
                  goto LAB_010a4040;
                  bVar2 = pbVar27[0x18];
                  pbVar19 = pbVar27;
                  pbVar27 = pbVar11;
                }
                lVar9 = *(long *)(lVar9 + 0x10);
                pbVar19[0x18] = bVar2 | 4;
                *(long *)(pbVar19 + 0x10) = lVar9;
                if ((pbVar27 != (byte *)0x0) && (*(long *)(pbVar27 + 0x28) == 0)) {
                  lVar8 = FUN_010a816c(param_1,uVar28 & 0xffffffff,
                                       *(long *)(pbVar27 + 8) - *(long *)(pbVar19 + 8));
                  *(long *)(pbVar27 + 0x10) = lVar8 + lVar9;
                  pbVar27[0x18] = pbVar27[0x18] | 4;
                }
                pbVar29 = pbVar11;
                if (pbVar30 != (byte *)0x0) {
                  pbVar29 = pbVar30;
                }
              }
LAB_010a4040:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010a4094 with catch @ 010a4040
                        */
              pbVar11 = pbVar11 + 0x58;
              pbVar30 = pbVar29;
            } while (pbVar11 < pbVar26);
            if (uVar28 == 1) {
              lVar9 = 0;
              bVar5 = false;
              iVar32 = 0;
              pbVar11 = pbVar31;
              do {
                bVar2 = pbVar11[0x18];
                if ((bVar2 >> 2 & 1) == 0) {
                  pbVar30 = *(byte **)(pbVar11 + 0x30);
                    /* try { // try from 010a408c to 011a4093 has its CatchHandler @ 010a4208 */
                    /* try { // try from 010a4094 to 011a420b has its CatchHandler @ 010a4040 */
                  if ((pbVar30 == (byte *)0x0) ||
                     ((bVar5 && ((*(long *)(pbVar11 + 0x10) < lVar9 + 0x40 ||
                                 (*(long *)(pbVar30 + 0x10) < lVar9 + 0x40)))))) {
                    iVar32 = iVar32 + 1;
                  }
                  else if (*(long *)(pbVar30 + 0x28) == 0) {
                    if (pbVar30 < pbVar11) {
                      lVar8 = *(long *)(pbVar30 + 0x10);
                      bVar5 = true;
                      lVar9 = FUN_010a816c(param_1,1,*(long *)(pbVar11 + 8) - *(long *)(pbVar30 + 8)
                                          );
                      lVar9 = lVar9 + lVar8;
                      *(long *)(pbVar11 + 0x10) = lVar9;
                      pbVar11[0x18] = bVar2 | 4;
                    }
                    else {
                      bVar5 = true;
                      FUN_010a7fa0(param_1,pbVar11,pbVar30,0,1);
                      pbVar11[0x18] = pbVar11[0x18] | 4;
                      lVar9 = *(long *)(pbVar30 + 0x10);
                      pbVar30[0x18] = pbVar30[0x18] | 4;
                    }
                  }
                  else {
                    lVar8 = *(long *)(pbVar30 + 0x10);
                    lVar23 = FUN_010a816c(param_1,1,*(long *)(pbVar11 + 8) - *(long *)(pbVar30 + 8))
                    ;
                    *(long *)(pbVar11 + 0x10) = lVar23 + lVar8;
                    pbVar11[0x18] = bVar2 | 4;
                  }
                }
                pbVar11 = pbVar11 + 0x58;
              } while (pbVar11 < pbVar26);
            }
            else {
              lVar9 = 0;
              bVar5 = false;
              iVar32 = 0;
              local_88 = 0;
              pbVar11 = pbVar31;
              do {
                bVar2 = pbVar11[0x18];
                if ((bVar2 >> 2 & 1) == 0) {
                  pbVar30 = *(byte **)(pbVar11 + 0x30);
                  if ((pbVar30 == (byte *)0x0) ||
                     ((bVar5 && ((*(long *)(pbVar11 + 0x10) < lVar9 + 0x40 ||
                                 (*(long *)(pbVar30 + 0x10) < lVar9 + 0x40)))))) {
                    iVar32 = iVar32 + 1;
                  }
                  else if (*(long *)(pbVar30 + 0x28) == 0) {
                    if (pbVar30 < pbVar11) {
                      lVar8 = *(long *)(pbVar30 + 0x10);
                      lVar9 = FUN_010a816c(param_1,uVar28 & 0xffffffff,
                                           *(long *)(pbVar11 + 8) - *(long *)(pbVar30 + 8));
                      lVar9 = lVar9 + lVar8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010a408c with catch @ 010a4208
                        */
                      *(long *)(pbVar11 + 0x10) = lVar9;
                      pbVar11[0x18] = bVar2 | 4;
                      bVar5 = true;
                    }
                    else {
                      if (pbVar29 == (byte *)0x0) {
                        local_88 = FUN_010a7fa0(param_1,pbVar11,pbVar30,0,0);
                      }
                      else {
                        FUN_010a7fa0(param_1,pbVar11,pbVar30,local_88,uVar28 & 0xffffffff);
                      }
                      bVar5 = true;
                      pbVar11[0x18] = pbVar11[0x18] | 4;
                      lVar9 = *(long *)(pbVar30 + 0x10);
                      pbVar30[0x18] = pbVar30[0x18] | 4;
                      pbVar29 = pbVar11;
                    }
                  }
                  else {
                    lVar8 = *(long *)(pbVar30 + 0x10);
                    lVar23 = FUN_010a816c(param_1,uVar28 & 0xffffffff,
                                          *(long *)(pbVar11 + 8) - *(long *)(pbVar30 + 8));
                    *(long *)(pbVar11 + 0x10) = lVar23 + lVar8;
                    pbVar11[0x18] = bVar2 | 4;
                  }
                }
                pbVar11 = pbVar11 + 0x58;
              } while (pbVar11 < pbVar26);
            }
          }
          if (uVar28 == 0) {
            if (iVar4 == 6) {
              lVar8 = 2;
              lVar9 = 4;
              pbVar11 = pbVar31;
            }
            else {
              if (iVar4 != 0xc) goto joined_r0x010a3f60;
              lVar8 = 5;
              lVar9 = 9;
              pbVar11 = pbVar31 + 0x58;
            }
            lVar23 = (*(long *)(pbVar31 + lVar8 * 0x58 + 8) * 2 -
                     *(long *)(pbVar31 + lVar9 * 0x58 + 8)) - *(long *)(pbVar11 + 8);
            lVar1 = -lVar23;
            if (-1 < lVar23) {
              lVar1 = lVar23;
            }
            if ((((*(byte **)(pbVar11 + 0x30) == pbVar11 + 0x58) &&
                 (*(byte **)(pbVar31 + lVar8 * 0x58 + 0x30) == pbVar31 + lVar8 * 0x58 + 0x58)) &&
                (lVar1 < 8)) &&
               (pbVar30 = *(byte **)(pbVar31 + lVar9 * 0x58 + 0x30),
               pbVar30 == pbVar31 + lVar9 * 0x58 + 0x58)) {
              lVar23 = *(long *)(pbVar31 + lVar8 * 0x58 + 0x10) * 2 - *(long *)(pbVar11 + 0x10);
              lVar8 = *(long *)(pbVar31 + lVar9 * 0x58 + 0x10) - lVar23;
              *(long *)(pbVar31 + lVar9 * 0x58 + 0x10) = lVar23;
              if (pbVar30 != (byte *)0x0) {
                *(long *)(pbVar30 + 0x10) = *(long *)(pbVar30 + 0x10) - lVar8;
              }
              if (iVar4 == 0xc) {
                *(long *)(pbVar31 + 0x2d0) = *(long *)(pbVar31 + 0x2d0) - lVar8;
                *(long *)(pbVar31 + 0x3d8) = *(long *)(pbVar31 + 0x3d8) - lVar8;
              }
              pbVar31[lVar9 * 0x58 + 0x18] = pbVar31[lVar9 * 0x58 + 0x18] | 4;
              if (pbVar30 != (byte *)0x0) {
                pbVar30[0x18] = pbVar30[0x18] | 4;
              }
            }
          }
joined_r0x010a3f60:
          if ((iVar32 != 0) && (pbVar11 = pbVar31, 0 < iVar4)) {
            do {
              if (((pbVar11[0x18] >> 2 & 1) == 0) && (lVar9 = *(long *)(pbVar11 + 0x38), lVar9 != 0)
                 ) {
                lVar8 = *(long *)(lVar9 + 8);
                lVar9 = *(long *)(lVar9 + 0x10);
                pbVar11[0x18] = pbVar11[0x18] | 4;
                iVar32 = iVar32 + -1;
                *(long *)(pbVar11 + 0x10) = (lVar9 - lVar8) + *(long *)(pbVar11 + 8);
              }
              pbVar11 = pbVar11 + 0x58;
            } while (pbVar11 < pbVar26);
            if ((0 < iVar4) && (iVar32 != 0)) {
              pbVar29 = pbVar31 + -0x58;
              pbVar11 = pbVar31 + 0x70;
              pbVar30 = pbVar31;
              do {
                pbVar27 = pbVar29;
                if ((pbVar30[0x18] >> 2 & 1) == 0) {
                  do {
                    pbVar15 = pbVar27;
                    pbVar19 = pbVar11;
                    if (pbVar15 < pbVar31) {
                      bVar6 = false;
                      bVar5 = true;
                      goto LAB_010a4330;
                    }
                    pbVar27 = pbVar15 + -0x58;
                  } while ((pbVar15[0x18] >> 2 & 1) == 0);
                  bVar5 = false;
                  bVar6 = true;
LAB_010a4330:
                  do {
                    pbVar27 = pbVar19;
                    if (pbVar26 <= pbVar27 + -0x18) {
                      if (!bVar6) goto LAB_010a43cc;
                      bVar6 = false;
                      goto joined_r0x010a436c;
                    }
                    pbVar19 = pbVar27 + 0x58;
                  } while ((*pbVar27 >> 2 & 1) == 0);
                  bVar6 = true;
joined_r0x010a436c:
                  if (bVar5) {
                    lVar8 = *(long *)(pbVar30 + 8);
                    lVar9 = *(long *)(pbVar27 + -8) - *(long *)(pbVar27 + -0x10);
                  }
                  else {
                    if (bVar6) {
                      sVar3 = *(short *)pbVar15;
                      lVar9 = *(long *)(pbVar15 + 0x10);
                      if (*(short *)(pbVar27 + -0x18) != sVar3) {
                        lVar8 = FT_MulDiv((long)*(short *)pbVar30 - (long)(int)sVar3,
                                          *(long *)(pbVar27 + -8) - lVar9,
                                          (long)((int)*(short *)(pbVar27 + -0x18) - (int)sVar3));
                        lVar9 = lVar8 + lVar9;
                      }
                      *(long *)(pbVar30 + 0x10) = lVar9;
                      goto LAB_010a43cc;
                    }
                    lVar8 = *(long *)(pbVar30 + 8);
                    lVar9 = *(long *)(pbVar15 + 0x10) - *(long *)(pbVar15 + 8);
                  }
                  *(long *)(pbVar30 + 0x10) = lVar9 + lVar8;
                }
LAB_010a43cc:
                pbVar30 = pbVar30 + 0x58;
                pbVar29 = pbVar29 + 0x58;
                pbVar11 = pbVar11 + 0x58;
              } while (pbVar30 < pbVar26);
            }
          }
          uVar12 = *puVar14;
          iVar4 = *piVar10;
          if (uVar28 == 0) {
            uVar21 = *(uint *)(param_1 + 0x9c);
joined_r0x010a4440:
            uVar21 = uVar21 & 1;
          }
          else {
            if (uVar28 == 1) {
              uVar21 = *(uint *)(param_1 + 0x9c) >> 1;
              goto joined_r0x010a4440;
            }
            uVar21 = 0;
          }
          if (0 < iVar4) {
            uVar16 = uVar12 + (long)iVar4 * 0x58;
            uVar18 = 4;
            if (uVar28 != 0) {
              uVar18 = 8;
            }
            if (uVar21 == 0) {
              do {
                lVar8 = *(long *)(uVar12 + 0x48);
                lVar23 = *(long *)(uVar12 + 0x10) - *(long *)(uVar12 + 8);
                lVar9 = lVar8;
                if (uVar28 == 0) {
                  do {
                    puVar24 = *(ushort **)(lVar9 + 0x50);
                    puVar13 = (ushort *)(lVar9 + 0x48);
                    do {
                      puVar25 = *(ushort **)puVar13;
                      *(long *)(puVar25 + 0x10) = *(long *)(puVar25 + 0x10) + lVar23;
                      puVar13 = puVar25 + 0x20;
                      *puVar25 = uVar18 | *puVar25;
                    } while (puVar25 != puVar24);
                    lVar9 = *(long *)(lVar9 + 0x18);
                  } while (lVar9 != lVar8);
                }
                else {
                  do {
                    puVar24 = *(ushort **)(lVar9 + 0x50);
                    puVar13 = (ushort *)(lVar9 + 0x48);
                    do {
                      puVar25 = *(ushort **)puVar13;
                      *(long *)(puVar25 + 0x14) = *(long *)(puVar25 + 0x14) + lVar23;
                      puVar13 = puVar25 + 0x20;
                      *puVar25 = uVar18 | *puVar25;
                    } while (puVar25 != puVar24);
                    lVar9 = *(long *)(lVar9 + 0x18);
                  } while (lVar9 != lVar8);
                }
                uVar12 = uVar12 + 0x58;
              } while (uVar12 < uVar16);
            }
            else {
              do {
                lVar8 = *(long *)(uVar12 + 0x48);
                lVar9 = lVar8;
                if (uVar28 == 0) {
                  do {
                    puVar24 = *(ushort **)(lVar9 + 0x50);
                    puVar13 = (ushort *)(lVar9 + 0x48);
                    do {
                      puVar25 = *(ushort **)puVar13;
                      *(undefined8 *)(puVar25 + 0x10) = *(undefined8 *)(uVar12 + 0x10);
                      puVar13 = puVar25 + 0x20;
                      *puVar25 = uVar18 | *puVar25;
                    } while (puVar25 != puVar24);
                    lVar9 = *(long *)(lVar9 + 0x18);
                  } while (lVar9 != lVar8);
                }
                else {
                  do {
                    puVar24 = *(ushort **)(lVar9 + 0x50);
                    puVar13 = (ushort *)(lVar9 + 0x48);
                    do {
                      puVar25 = *(ushort **)puVar13;
                      *(undefined8 *)(puVar25 + 0x14) = *(undefined8 *)(uVar12 + 0x10);
                      puVar13 = puVar25 + 0x20;
                      *puVar25 = uVar18 | *puVar25;
                    } while (puVar25 != puVar24);
                    lVar9 = *(long *)(lVar9 + 0x18);
                  } while (lVar9 != lVar8);
                }
                uVar12 = uVar12 + 0x58;
              } while (uVar12 < uVar16);
            }
          }
          FUN_010a6150(param_1,uVar28 & 0xffffffff);
          FUN_010a6368(param_1,uVar28 & 0xffffffff);
        }
      }
      else if ((int)uVar28 == 0) {
        bVar2 = *(byte *)(param_1 + 0x98);
        goto joined_r0x010a3f84;
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 != 2);
    if (0 < *(int *)(param_1 + 0x2c)) {
      puVar13 = *(ushort **)(param_1 + 0x30);
      puVar17 = *(undefined8 **)(param_2 + 8);
      puVar24 = puVar13 + (long)*(int *)(param_1 + 0x2c) * 0x28;
      pcVar20 = *(char **)(param_2 + 0x10);
      do {
        uVar7 = *(undefined8 *)(puVar13 + 0x10);
        puVar17[1] = *(undefined8 *)(puVar13 + 0x14);
        *puVar17 = uVar7;
        if ((*puVar13 & 1) == 0) {
          cVar22 = ((byte)(*puVar13 >> 1) & 1) + 1;
        }
        else {
          cVar22 = '\0';
        }
        puVar13 = puVar13 + 0x28;
        *pcVar20 = cVar22;
        puVar17 = puVar17 + 2;
        pcVar20 = pcVar20 + 1;
      } while (puVar13 < puVar24);
    }
    uVar7 = 0;
  }
  return uVar7;
}

