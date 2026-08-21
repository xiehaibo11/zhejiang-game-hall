
undefined8 FUN_00e5f850(undefined8 param_1,long param_2,long param_3,long param_4)

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
  ulong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  long lVar18;
  byte *pbVar19;
  ushort *puVar20;
  undefined1 *puVar21;
  byte *pbVar22;
  undefined1 uVar23;
  ushort *puVar24;
  ushort *puVar25;
  byte *pbVar26;
  byte *pbVar27;
  ulong uVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *pbVar32;
  int iVar33;
  undefined8 local_118;
  long local_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [120];
  
  uVar7 = FUN_00e6266c(param_2,param_3);
  if ((int)uVar7 == 0) {
    uVar17 = *(uint *)(param_2 + 0x1418);
    if ((uVar17 & 1) == 0) {
      uVar7 = FUN_00e63c70(param_2,0);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      FUN_00e64440(param_2,param_4,0);
      uVar17 = *(uint *)(param_2 + 0x1418);
    }
    if ((uVar17 >> 1 & 1) == 0) {
      uVar7 = FUN_00e63c70(param_2,1);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      FUN_00e64440(param_2,param_4,1);
    }
    uVar28 = 0;
    do {
      uVar17 = *(uint *)(param_2 + 0x1418);
      if (uVar28 == 0) {
        if ((uVar17 & 1) == 0) {
          if (*(int *)(param_4 + 0x30) != 0 || (uVar17 & 8) != 0) goto LAB_00e5fa68;
          FUN_00e645bc(auStack_d8,param_2,&uStack_e0,&local_e8);
          uVar7 = uStack_e0;
          lVar9 = local_e8;
          if (0 < *(int *)(param_2 + 0x2c)) {
            uVar12 = *(ulong *)(param_2 + 0x30);
            uVar15 = uVar12 + (long)*(int *)(param_2 + 0x2c) * 0x50;
            do {
              lVar8 = FT_MulFix((long)*(short *)(uVar12 + 0x18),uVar7);
              *(long *)(uVar12 + 0x20) = lVar8 + lVar9;
              uVar12 = uVar12 + 0x50;
            } while (uVar12 < uVar15);
          }
        }
      }
      else if ((uVar17 >> 1 & 1) == 0) {
LAB_00e5fa68:
        lVar9 = param_2 + uVar28 * 0x9e8;
        piVar10 = (int *)(lVar9 + 0x58);
        iVar4 = *piVar10;
        puVar14 = (ulong *)(lVar9 + 0x60);
        pbVar27 = (byte *)*puVar14;
        pbVar26 = pbVar27 + (long)iVar4 * 0x58;
        if (iVar4 < 1) {
          iVar33 = 0;
        }
        else {
          pbVar11 = pbVar27 + 0x18;
          pbVar30 = (byte *)0x0;
          do {
            pbVar31 = pbVar11 + -0x18;
            bVar2 = *pbVar11;
            pbVar29 = pbVar30;
            if ((bVar2 >> 2 & 1) == 0) {
              lVar9 = *(long *)(pbVar11 + 0x10);
              pbVar32 = *(byte **)(pbVar11 + 0x18);
              pbVar19 = pbVar11;
              pbVar22 = pbVar31;
              if (lVar9 == 0) {
                if ((pbVar32 == (byte *)0x0) || (lVar9 = *(long *)(pbVar32 + 0x28), lVar9 == 0))
                goto LAB_00e5fb2c;
                bVar2 = pbVar32[0x18];
                pbVar19 = pbVar32 + 0x18;
                pbVar22 = pbVar32;
                pbVar32 = pbVar31;
              }
              lVar9 = *(long *)(lVar9 + 0x10);
              *(long *)(pbVar22 + 0x10) = lVar9;
              *pbVar19 = bVar2 | 4;
              if ((pbVar32 != (byte *)0x0) && (*(long *)(pbVar32 + 0x28) == 0)) {
                lVar8 = FUN_00e65a74(param_2,uVar28 & 0xffffffff,
                                     *(long *)(pbVar32 + 8) - *(long *)(pbVar22 + 8));
                *(long *)(pbVar32 + 0x10) = lVar8 + lVar9;
                pbVar32[0x18] = pbVar32[0x18] | 4;
              }
              pbVar29 = pbVar31;
              if (pbVar30 != (byte *)0x0) {
                pbVar29 = pbVar30;
              }
            }
LAB_00e5fb2c:
            pbVar31 = pbVar11 + 0x40;
            pbVar11 = pbVar11 + 0x58;
            pbVar30 = pbVar29;
          } while (pbVar31 < pbVar26);
          if (uVar28 == 1) {
            lVar9 = 0;
            bVar5 = false;
            iVar33 = 0;
            pbVar11 = pbVar27;
LAB_00e5fb54:
            do {
              bVar2 = pbVar11[0x18];
              if ((bVar2 >> 2 & 1) == 0) {
                pbVar30 = *(byte **)(pbVar11 + 0x30);
                if ((pbVar30 == (byte *)0x0) ||
                   ((bVar5 && ((*(long *)(pbVar11 + 0x10) < lVar9 + 0x40 ||
                               (*(long *)(pbVar30 + 0x10) < lVar9 + 0x40)))))) {
                  iVar33 = iVar33 + 1;
                }
                else {
                  if (*(long *)(pbVar30 + 0x28) == 0) {
                    if (pbVar30 < pbVar11) {
                      lVar8 = *(long *)(pbVar30 + 0x10);
                      lVar9 = FUN_00e65a74(param_2,1,*(long *)(pbVar11 + 8) - *(long *)(pbVar30 + 8)
                                          );
                      lVar9 = lVar9 + lVar8;
                      *(long *)(pbVar11 + 0x10) = lVar9;
                      pbVar11[0x18] = bVar2 | 4;
                    }
                    else {
                      FUN_00e658a8(param_2,pbVar11,pbVar30,0,1);
                      pbVar11[0x18] = pbVar11[0x18] | 4;
                      lVar9 = *(long *)(pbVar30 + 0x10);
                      pbVar30[0x18] = pbVar30[0x18] | 4;
                    }
                    bVar5 = true;
                    pbVar11 = pbVar11 + 0x58;
                    if (pbVar26 <= pbVar11) break;
                    goto LAB_00e5fb54;
                  }
                  lVar8 = *(long *)(pbVar30 + 0x10);
                  lVar18 = FUN_00e65a74(param_2,1,*(long *)(pbVar11 + 8) - *(long *)(pbVar30 + 8));
                  *(long *)(pbVar11 + 0x10) = lVar18 + lVar8;
                  pbVar11[0x18] = bVar2 | 4;
                }
              }
              pbVar11 = pbVar11 + 0x58;
            } while (pbVar11 < pbVar26);
          }
          else {
            lVar9 = 0;
            bVar5 = false;
            iVar33 = 0;
            local_118 = 0;
            pbVar11 = pbVar27;
LAB_00e5fc90:
            do {
              bVar2 = pbVar11[0x18];
              if ((bVar2 >> 2 & 1) == 0) {
                pbVar30 = *(byte **)(pbVar11 + 0x30);
                if (pbVar30 == (byte *)0x0) {
                  iVar33 = iVar33 + 1;
                  pbVar11 = pbVar11 + 0x58;
                  if (pbVar26 <= pbVar11) break;
                  goto LAB_00e5fc90;
                }
                if ((bVar5) &&
                   ((*(long *)(pbVar11 + 0x10) < lVar9 + 0x40 ||
                    (*(long *)(pbVar30 + 0x10) < lVar9 + 0x40)))) {
                  iVar33 = iVar33 + 1;
                }
                else if (*(long *)(pbVar30 + 0x28) == 0) {
                  if (pbVar30 < pbVar11) {
                    lVar8 = *(long *)(pbVar30 + 0x10);
                    lVar9 = FUN_00e65a74(param_2,uVar28 & 0xffffffff,
                                         *(long *)(pbVar11 + 8) - *(long *)(pbVar30 + 8));
                    lVar9 = lVar9 + lVar8;
                    *(long *)(pbVar11 + 0x10) = lVar9;
                    pbVar11[0x18] = bVar2 | 4;
                    bVar5 = true;
                  }
                  else {
                    if (pbVar29 == (byte *)0x0) {
                      local_118 = FUN_00e658a8(param_2,pbVar11,pbVar30,0,0);
                    }
                    else {
                      FUN_00e658a8(param_2,pbVar11,pbVar30,local_118,uVar28 & 0xffffffff);
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
                  lVar18 = FUN_00e65a74(param_2,uVar28 & 0xffffffff,
                                        *(long *)(pbVar11 + 8) - *(long *)(pbVar30 + 8));
                  *(long *)(pbVar11 + 0x10) = lVar18 + lVar8;
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
            pbVar11 = pbVar27;
          }
          else {
            if (iVar4 != 0xc) goto joined_r0x00e5fde8;
            lVar8 = 5;
            lVar9 = 9;
            pbVar11 = pbVar27 + 0x58;
          }
          lVar18 = (*(long *)(pbVar27 + lVar8 * 0x58 + 8) * 2 -
                   *(long *)(pbVar27 + lVar9 * 0x58 + 8)) - *(long *)(pbVar11 + 8);
          lVar1 = -lVar18;
          if (-1 < lVar18) {
            lVar1 = lVar18;
          }
          if ((((*(byte **)(pbVar11 + 0x30) == pbVar11 + 0x58) &&
               (*(byte **)(pbVar27 + lVar8 * 0x58 + 0x30) == pbVar27 + lVar8 * 0x58 + 0x58)) &&
              (lVar1 < 8)) &&
             (pbVar30 = *(byte **)(pbVar27 + lVar9 * 0x58 + 0x30),
             pbVar30 == pbVar27 + lVar9 * 0x58 + 0x58)) {
            lVar18 = *(long *)(pbVar27 + lVar8 * 0x58 + 0x10) * 2 - *(long *)(pbVar11 + 0x10);
            lVar8 = *(long *)(pbVar27 + lVar9 * 0x58 + 0x10) - lVar18;
            *(long *)(pbVar27 + lVar9 * 0x58 + 0x10) = lVar18;
            if (pbVar30 != (byte *)0x0) {
              *(long *)(pbVar30 + 0x10) = *(long *)(pbVar30 + 0x10) - lVar8;
            }
            if (iVar4 == 0xc) {
              *(long *)(pbVar27 + 0x2d0) = *(long *)(pbVar27 + 0x2d0) - lVar8;
              *(long *)(pbVar27 + 0x3d8) = *(long *)(pbVar27 + 0x3d8) - lVar8;
            }
            pbVar27[lVar9 * 0x58 + 0x18] = pbVar27[lVar9 * 0x58 + 0x18] | 4;
            if (pbVar30 != (byte *)0x0) {
              pbVar30[0x18] = pbVar30[0x18] | 4;
            }
          }
        }
joined_r0x00e5fde8:
        if ((iVar33 != 0) && (pbVar11 = pbVar27, 0 < iVar4)) {
          do {
            if (((pbVar11[0x18] >> 2 & 1) == 0) && (lVar9 = *(long *)(pbVar11 + 0x38), lVar9 != 0))
            {
              lVar8 = *(long *)(lVar9 + 8);
              lVar9 = *(long *)(lVar9 + 0x10);
              pbVar11[0x18] = pbVar11[0x18] | 4;
              iVar33 = iVar33 + -1;
              *(long *)(pbVar11 + 0x10) = (lVar9 - lVar8) + *(long *)(pbVar11 + 8);
            }
            pbVar11 = pbVar11 + 0x58;
          } while (pbVar11 < pbVar26);
          if ((0 < iVar4) && (iVar33 != 0)) {
            pbVar29 = pbVar27 + -0x58;
            pbVar11 = pbVar27 + 0x70;
            pbVar30 = pbVar27;
            do {
              pbVar31 = pbVar29;
              if ((pbVar30[0x18] >> 2 & 1) == 0) {
                do {
                  pbVar19 = pbVar31;
                  pbVar32 = pbVar11;
                  if (pbVar19 < pbVar27) {
                    bVar6 = false;
                    bVar5 = true;
                    goto LAB_00e5fe88;
                  }
                  pbVar31 = pbVar19 + -0x58;
                } while ((pbVar19[0x18] >> 2 & 1) == 0);
                bVar5 = false;
                bVar6 = true;
LAB_00e5fe88:
                do {
                  pbVar31 = pbVar32;
                  if (pbVar26 <= pbVar31 + -0x18) {
                    if (!bVar6) goto LAB_00e5ff2c;
                    bVar6 = false;
                    goto joined_r0x00e5fec8;
                  }
                  pbVar32 = pbVar31 + 0x58;
                } while ((*pbVar31 >> 2 & 1) == 0);
                bVar6 = true;
joined_r0x00e5fec8:
                if (bVar5) {
                  lVar9 = (*(long *)(pbVar31 + -8) - *(long *)(pbVar31 + -0x10)) +
                          *(long *)(pbVar30 + 8);
                }
                else if (bVar6) {
                  sVar3 = *(short *)pbVar19;
                  lVar8 = *(long *)(pbVar19 + 0x10);
                  if (*(short *)(pbVar31 + -0x18) == sVar3) {
                    *(long *)(pbVar30 + 0x10) = lVar8;
                    goto LAB_00e5ff2c;
                  }
                  lVar9 = FT_MulDiv((long)*(short *)pbVar30 - (long)(int)sVar3,
                                    *(long *)(pbVar31 + -8) - lVar8,
                                    (long)((int)*(short *)(pbVar31 + -0x18) - (int)sVar3));
                  lVar9 = lVar9 + lVar8;
                }
                else {
                  lVar9 = (*(long *)(pbVar19 + 0x10) - *(long *)(pbVar19 + 8)) +
                          *(long *)(pbVar30 + 8);
                }
                *(long *)(pbVar30 + 0x10) = lVar9;
              }
LAB_00e5ff2c:
              pbVar30 = pbVar30 + 0x58;
              pbVar29 = pbVar29 + 0x58;
              pbVar11 = pbVar11 + 0x58;
            } while (pbVar30 < pbVar26);
          }
        }
        uVar12 = *puVar14;
        iVar4 = *piVar10;
        if (uVar28 == 0) {
          uVar17 = *(byte *)(param_2 + 0x141c) & 1;
        }
        else if (uVar28 == 1) {
          uVar17 = *(uint *)(param_2 + 0x141c) >> 1 & 1;
        }
        else {
          uVar17 = 0;
        }
        if (0 < iVar4) {
          uVar15 = uVar12 + (long)iVar4 * 0x58;
          if (uVar17 == 0) {
            do {
              puVar20 = *(ushort **)(uVar12 + 0x48);
              lVar9 = *(long *)(uVar12 + 0x10) - *(long *)(uVar12 + 8);
              puVar13 = puVar20;
              if (uVar28 == 0) {
                do {
                  puVar24 = *(ushort **)(puVar13 + 0x24);
                  puVar25 = puVar13;
                  do {
                    puVar25 = *(ushort **)(puVar25 + 0x20);
                    *(long *)(puVar25 + 0x10) = *(long *)(puVar25 + 0x10) + lVar9;
                    *puVar25 = *puVar25 | 4;
                  } while (puVar25 != puVar24);
                  puVar13 = *(ushort **)(puVar13 + 0xc);
                } while (puVar13 != puVar20);
              }
              else {
                do {
                  puVar24 = *(ushort **)(puVar13 + 0x24);
                  puVar25 = puVar13;
                  do {
                    puVar25 = *(ushort **)(puVar25 + 0x20);
                    *(long *)(puVar25 + 0x14) = *(long *)(puVar25 + 0x14) + lVar9;
                    *puVar25 = *puVar25 | 8;
                  } while (puVar25 != puVar24);
                  puVar13 = *(ushort **)(puVar13 + 0xc);
                } while (puVar13 != puVar20);
              }
              uVar12 = uVar12 + 0x58;
            } while (uVar12 < uVar15);
          }
          else {
            do {
              puVar20 = *(ushort **)(uVar12 + 0x48);
              uVar7 = *(undefined8 *)(uVar12 + 0x10);
              puVar13 = puVar20;
              if (uVar28 == 0) {
                do {
                  puVar24 = *(ushort **)(puVar13 + 0x24);
                  puVar25 = puVar13;
                  do {
                    puVar25 = *(ushort **)(puVar25 + 0x20);
                    *(undefined8 *)(puVar25 + 0x10) = uVar7;
                    *puVar25 = *puVar25 | 4;
                  } while (puVar25 != puVar24);
                  puVar13 = *(ushort **)(puVar13 + 0xc);
                } while (puVar13 != puVar20);
              }
              else {
                do {
                  puVar24 = *(ushort **)(puVar13 + 0x24);
                  puVar25 = puVar13;
                  do {
                    puVar25 = *(ushort **)(puVar25 + 0x20);
                    *(undefined8 *)(puVar25 + 0x14) = uVar7;
                    *puVar25 = *puVar25 | 8;
                  } while (puVar25 != puVar24);
                  puVar13 = *(ushort **)(puVar13 + 0xc);
                } while (puVar13 != puVar20);
              }
              uVar12 = uVar12 + 0x58;
            } while (uVar12 < uVar15);
          }
        }
        FUN_00e64b98(param_2,uVar28 & 0xffffffff);
        FUN_00e64f40(param_2,uVar28 & 0xffffffff);
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 != 2);
    if (0 < *(int *)(param_2 + 0x2c)) {
      puVar13 = *(ushort **)(param_2 + 0x30);
      puVar16 = *(undefined8 **)(param_3 + 8);
      puVar20 = puVar13 + (long)*(int *)(param_2 + 0x2c) * 0x28;
      puVar21 = *(undefined1 **)(param_3 + 0x10);
      do {
        uVar7 = *(undefined8 *)(puVar13 + 0x10);
        puVar16[1] = *(undefined8 *)(puVar13 + 0x14);
        *puVar16 = uVar7;
        if ((*puVar13 & 1) == 0) {
          uVar23 = 1;
          if ((*puVar13 & 2) != 0) {
            uVar23 = 2;
          }
        }
        else {
          uVar23 = 0;
        }
        puVar13 = puVar13 + 0x28;
        *puVar21 = uVar23;
        puVar16 = puVar16 + 2;
        puVar21 = puVar21 + 1;
      } while (puVar13 < puVar20);
    }
    uVar7 = 0;
  }
  return uVar7;
}

