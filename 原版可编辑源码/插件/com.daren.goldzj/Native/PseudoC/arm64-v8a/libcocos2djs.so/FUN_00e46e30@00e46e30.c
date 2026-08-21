
/* WARNING: Removing unreachable block (ram,0x00e471f0) */
/* WARNING: Removing unreachable block (ram,0x00e4723c) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00e46e30(long param_1,long param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined1 *puVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  byte *pbVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  byte bVar28;
  undefined1 uVar29;
  uint uVar30;
  undefined1 *puVar31;
  uint uVar32;
  byte *pbVar33;
  byte bVar34;
  long lVar35;
  undefined8 uVar36;
  uint *puVar37;
  undefined8 *puVar38;
  int *piVar39;
  byte *pbVar40;
  long lVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  ulong local_90;
  long local_80;
  long local_78;
  long lStack_70;
  long local_68;
  
  lVar41 = *(long *)(param_1 + 8);
  uVar21 = 0;
  if (param_3 != 0) {
    uVar21 = param_3 - 1;
  }
  if ((lVar41 != 0) && (uVar21 < *(uint *)(lVar41 + 0x248))) {
    if (((param_4 & 9) == 0) && (*(uint *)(lVar41 + 0x220) != 0)) {
      lVar16 = *(long *)(lVar41 + 0xc0);
      lVar35 = *(long *)(lVar41 + 600);
      uVar20 = 0;
      puVar37 = (uint *)(*(long *)(lVar41 + 0x228) + 0x18);
      do {
        if ((puVar37[-6] == (uint)*(ushort *)(param_2 + 0x18)) &&
           (puVar37[-5] == (uint)*(ushort *)(param_2 + 0x1a))) {
          uVar20 = puVar37[-4];
          iVar9 = FUN_00e1bb5c(lVar16,*(long *)(lVar41 + 0x278) + (ulong)*puVar37);
          if ((iVar9 == 0) &&
             (iVar9 = FUN_00e1d718(lVar16,puVar37[1] *
                                          ((uVar20 & 1 | 4) + (uVar20 >> 1 & 1) + (uVar20 >> 2 & 1))
                                  ), iVar9 == 0)) {
            uVar15 = puVar37[-4];
            pbVar24 = *(byte **)(lVar16 + 0x40);
            uVar20 = puVar37[1];
            uVar30 = *(uint *)(lVar35 + (ulong)uVar21 * 0x10);
            uVar26 = (ulong)uVar15 & 1;
            lVar17 = ((ulong)uVar15 & 1 | 4) + ((ulong)(uVar15 >> 1) & 1) +
                     ((ulong)(uVar15 >> 2) & 1);
            iVar9 = (int)lVar17;
            if ((uVar15 >> 6 & 1) != 0) goto LAB_00e471a4;
            pbVar33 = *(byte **)(lVar16 + 0x48);
            pbVar40 = pbVar24 + iVar9 * uVar20;
            uVar10 = uVar15 | 0x80;
            puVar37[-4] = uVar10;
            if (pbVar33 < pbVar40) goto LAB_00e47134;
            if (iVar9 * uVar20 == 0) goto LAB_00e4719c;
            if ((int)uVar26 != 0) {
              pbVar33 = pbVar24;
              uVar12 = 0xffffffffffffffff;
              goto LAB_00e47150;
            }
            uVar12 = 0xffffffffffffffff;
            pbVar33 = pbVar24;
            goto LAB_00e47180;
          }
          break;
        }
        uVar20 = uVar20 + 1;
        puVar37 = puVar37 + 10;
      } while (uVar20 < *(uint *)(lVar41 + 0x220));
    }
    goto joined_r0x00e47354;
  }
  goto LAB_00e47358;
  while (pbVar33 = pbVar33 + lVar17, uVar12 = (ulong)bVar28, pbVar33 < pbVar40) {
LAB_00e47180:
    bVar28 = *pbVar33;
    if ((long)(ulong)bVar28 <= (long)uVar12) goto LAB_00e47134;
  }
  goto LAB_00e4719c;
LAB_00e47134:
  uVar10 = uVar15 & 0xffffff7f;
  puVar37[-4] = uVar10;
  goto LAB_00e4719c;
  while (pbVar33 = pbVar33 + lVar17, uVar12 = (ulong)CONCAT11(bVar28,*pbVar1), pbVar33 < pbVar40) {
LAB_00e47150:
    bVar28 = *pbVar33;
    pbVar1 = pbVar33 + 1;
    if ((long)(ulong)CONCAT11(bVar28,*pbVar1) <= (long)uVar12) goto LAB_00e47134;
  }
LAB_00e4719c:
  uVar15 = uVar10 | 0x40;
  puVar37[-4] = uVar15;
LAB_00e471a4:
  if ((uVar15 >> 7 & 1) == 0) {
LAB_00e47348:
    FUN_00e1d90c(lVar16);
  }
  else {
    if ((int)uVar26 == 0) {
      do {
        do {
          uVar14 = uVar20;
          uVar10 = (uint)uVar26;
          if (uVar14 <= uVar10) goto LAB_00e47348;
          uVar2 = uVar10 + uVar14 >> 1;
          uVar32 = (uint)pbVar24[uVar2 * iVar9];
          uVar20 = uVar2;
        } while (uVar30 < uVar32);
        if (uVar30 != uVar32) {
          uVar10 = uVar2 + 1;
        }
        uVar26 = (ulong)uVar10;
        iVar6 = 0;
        if (uVar30 == uVar32) {
          iVar6 = 0xc;
        }
        uVar20 = uVar14;
      } while (iVar6 == 0);
      if (iVar6 == 0xc) {
        pbVar40 = pbVar24 + (ulong)(uVar2 * iVar9) + 1;
        goto LAB_00e4725c;
      }
      goto LAB_00e47348;
    }
    uVar10 = 0;
    do {
      do {
        uVar14 = uVar20;
        if (uVar14 <= uVar10) goto LAB_00e47348;
        uVar20 = uVar10 + uVar14 >> 1;
        pbVar40 = pbVar24 + (ulong)(uVar20 * iVar9) + 2;
        uVar2 = (uint)CONCAT11(pbVar40[-2],pbVar40[-1]);
      } while (uVar30 < uVar2);
      if (uVar2 < uVar30) {
        uVar10 = uVar20 + 1;
      }
      iVar6 = 0;
      if (uVar2 >= uVar30) {
        iVar6 = 0xc;
      }
      uVar20 = uVar14;
    } while (iVar6 == 0);
    if (iVar6 != 0xc) goto LAB_00e47348;
LAB_00e4725c:
    if ((uVar15 >> 1 & 1) == 0) {
      pbVar24 = pbVar40 + 1;
      local_90 = (ulong)*pbVar40;
      uVar26 = (ulong)*pbVar24;
      if ((uVar15 >> 2 & 1) == 0) goto LAB_00e47270;
LAB_00e47298:
      uVar26 = uVar26 << 0x10 | (ulong)pbVar24[1] << 8;
      lVar17 = 2;
    }
    else {
      pbVar24 = pbVar40 + 2;
      local_90 = (ulong)CONCAT11(*pbVar40,pbVar40[1]);
      uVar26 = (ulong)*pbVar24;
      if ((uVar15 >> 2 & 1) != 0) goto LAB_00e47298;
LAB_00e47270:
      uVar26 = uVar26 << 8;
      lVar17 = 1;
    }
    bVar28 = pbVar24[lVar17];
    FUN_00e1d90c(lVar16);
    if (local_90 != 0) {
      piVar39 = (int *)(lVar35 + (ulong)uVar21 * 0x10 + 4);
      lVar17 = (long)*piVar39;
      iVar9 = *(int *)(lVar41 + 0x1ac);
      lVar35 = lVar17;
      if (iVar9 != *(int *)(lVar41 + 0x1a8)) {
        lVar17 = FT_MulDiv(lVar17,*(int *)(lVar41 + 0x1a8));
        iVar9 = *(int *)(lVar41 + 0x1ac);
        lVar35 = (long)*piVar39;
      }
      *(long *)(param_1 + 0x70) = lVar17;
      uVar12 = FT_MulDiv((ulong)*(ushort *)(param_2 + 0x18) << 8,lVar35,iVar9);
      iVar9 = FUN_00e1bb5c(lVar16,(uVar26 | bVar28) + (ulong)*(uint *)(lVar41 + 0x130));
      if ((iVar9 == 0) && (iVar9 = FUN_00e1d718(lVar16,local_90), iVar9 == 0)) {
        pbVar24 = *(byte **)(lVar16 + 0x40);
        pbVar40 = *(byte **)(lVar16 + 0x48);
        if (pbVar24 + 1 <= pbVar40) {
          bVar34 = *pbVar24;
          bVar28 = bVar34 & 3;
          if (bVar28 == 1) {
            pbVar33 = pbVar24 + 3;
            if (pbVar33 <= pbVar40) {
              uVar26 = (ulong)(char)pbVar24[1];
              uVar18 = (ulong)(char)pbVar24[2];
              goto joined_r0x00e474d4;
            }
          }
          else if (bVar28 == 2) {
            pbVar33 = pbVar24 + 5;
            if (pbVar33 <= pbVar40) {
              uVar26 = (long)(short)((ushort)pbVar24[1] << 8) | (ulong)pbVar24[2];
              uVar18 = (long)(short)((ushort)pbVar24[3] << 8) | (ulong)pbVar24[4];
              goto joined_r0x00e474d4;
            }
          }
          else if (bVar28 == 3) {
            pbVar33 = pbVar24 + 7;
            if (pbVar33 <= pbVar40) {
              uVar26 = (ulong)pbVar24[1] << 0x10 | (ulong)pbVar24[2] << 8 | (ulong)pbVar24[3];
              uVar18 = (ulong)pbVar24[4] << 0x10 | (ulong)pbVar24[5] << 8 | (ulong)pbVar24[6];
joined_r0x00e474d4:
              uVar3 = bVar34 >> 2 & 3;
              if (uVar3 == 3) {
                pbVar24 = (byte *)((long)pbVar33 + 4);
                if (pbVar24 <= pbVar40) {
                  uVar27 = (ulong)CONCAT11(*pbVar33,*(byte *)((long)pbVar33 + 1));
                  uVar25 = (ulong)CONCAT11(*(byte *)((long)pbVar33 + 2),*(byte *)((long)pbVar33 + 3)
                                          );
                  goto joined_r0x00e47534;
                }
              }
              else {
                uVar25 = (ulong)(uint)uVar3;
                if (uVar3 == 2) {
                  pbVar24 = (byte *)((long)pbVar33 + 2);
                  if (pbVar40 < pbVar24) goto LAB_00e47348;
                  uVar27 = (ulong)*pbVar33;
                  uVar25 = (ulong)*(byte *)((long)pbVar33 + 1);
joined_r0x00e47534:
                  bVar28 = bVar34 >> 4 & 3;
                  if (bVar28 == 3) goto LAB_00e47500;
LAB_00e47538:
                  if (bVar28 == 2) {
                    pbVar33 = pbVar24 + 2;
                    if (pbVar40 < pbVar33) goto LAB_00e47348;
                    uVar12 = (long)(short)((ushort)*pbVar24 << 8) | (ulong)pbVar24[1];
                    goto LAB_00e475b8;
                  }
                  pbVar33 = pbVar24;
                  if (bVar28 != 1) goto LAB_00e475b8;
                  pbVar33 = pbVar24 + 1;
                  if (pbVar40 < pbVar33) goto LAB_00e47348;
                  uVar12 = (long)(char)*pbVar24 << 8;
                  if (bVar34 >> 6 == 2) goto LAB_00e47570;
LAB_00e475c8:
                  if (bVar34 >> 6 == 1) {
                    if (uVar25 * uVar27 < local_90 * 0xf || uVar25 * uVar27 + local_90 * -0xf == 0)
                    goto LAB_00e47604;
                  }
                  else if ((bVar34 >> 6 == 0) && (uVar25 * uVar27 + 7 >> 3 <= local_90)) {
LAB_00e47604:
                    bVar34 = bVar34 >> 6;
                    if (((long)uVar18 <= (long)(0x7fffffff - uVar25)) &&
                       (-0x80000001 < (long)(uVar18 + uVar25))) {
                      *(int *)(param_1 + 0x98) = (int)uVar25;
                      *(int *)(param_1 + 0x9c) = (int)uVar27;
                      *(undefined4 *)(param_1 + 0x90) = 0x62697473;
                      *(ulong *)(param_1 + 0x30) = uVar27 * 0x40;
                      *(ulong *)(param_1 + 0x38) = uVar25 << 6;
                      uVar20 = (int)uVar27 + 7U >> 3;
                      *(undefined1 *)(param_1 + 0xb2) = 1;
                      *(ulong *)(param_1 + 0x40) = uVar26 << 6;
                      *(ulong *)(param_1 + 0x48) = uVar18 << 6;
                      *(uint *)(param_1 + 0xa0) = uVar20;
                      *(ulong *)(param_1 + 0x50) = ((long)uVar12 >> 2) + 0x20U & 0xffffffffffffffc0;
                      *(long *)(param_1 + 0x58) = (long)(uVar27 * -0x40) >> 1;
                      *(undefined8 *)(param_1 + 0x60) = 0;
                      uVar36 = *(undefined8 *)(param_2 + 0x40);
                      *(int *)(param_1 + 0xc0) = (int)uVar26;
                      *(int *)(param_1 + 0xc4) = (int)uVar25 + (int)uVar18;
                      *(undefined8 *)(param_1 + 0x68) = uVar36;
                      if ((param_4 >> 0x16 & 1) != 0) goto LAB_00e47924;
                      iVar9 = FUN_00e15340(param_1,uVar20 * uVar25);
                      if (iVar9 == 0) {
                        iVar9 = *(int *)(param_1 + 0x98);
                        if ((iVar9 == 0) || (iVar6 = *(int *)(param_1 + 0x9c), iVar6 == 0))
                        goto LAB_00e47924;
                        pbVar24 = *(byte **)(lVar16 + 0x48);
                        puVar19 = *(undefined1 **)(param_1 + 0xa8);
                        iVar23 = *(int *)(param_1 + 0xa0);
                        uVar21 = iVar6 * iVar9;
                        if ((*(uint *)(lVar41 + 0x144) >> 1 & 1) == 0) {
                          puVar19 = puVar19 + iVar23 * (iVar9 + -1);
                          iVar23 = -iVar23;
                        }
                        puVar31 = puVar19;
                        if (bVar34 == 2) {
                          if (uVar21 == 0) goto LAB_00e47924;
                          uVar15 = 0;
                          uVar30 = 0;
                          bVar13 = true;
                          uVar20 = 0x80;
                          bVar7 = true;
                          iVar9 = iVar6;
                          do {
                            uVar10 = uVar30;
                            if ((bVar13) && (pbVar33 < pbVar24)) {
                              do {
                                pbVar40 = pbVar33;
                                uVar10 = (uint)*pbVar40;
                                bVar7 = (bool)(bVar7 ^ 1);
                                if (uVar10 != 0) goto LAB_00e477dc;
                                pbVar33 = pbVar40 + 1;
                              } while (pbVar40 + 1 < pbVar24);
                              uVar10 = 0;
LAB_00e477dc:
                              pbVar33 = pbVar40 + 1;
                            }
                            uVar30 = 0;
                            if (bVar7) {
                              uVar30 = uVar20;
                            }
                            iVar9 = iVar9 + -1;
                            uVar15 = uVar30 | uVar15;
                            if (iVar9 == 0) {
                              puVar19 = puVar19 + iVar23;
                              *puVar31 = (char)uVar15;
                              puVar31 = puVar19;
                              iVar9 = iVar6;
LAB_00e4781c:
                              uVar20 = 0x80;
                              uVar15 = 0;
                            }
                            else {
                              uVar20 = uVar20 >> 1;
                              if (uVar20 == 0) {
                                *puVar31 = (char)uVar15;
                                puVar31 = puVar31 + 1;
                                goto LAB_00e4781c;
                              }
                            }
                            uVar29 = (undefined1)uVar15;
                            uVar30 = uVar10 - 1;
                            bVar13 = (int)uVar10 < 2;
                            uVar21 = uVar21 - 1;
                          } while (uVar21 != 0);
                        }
                        else {
                          if (bVar34 != 1) {
                            if (bVar34 == 0) {
                              uVar20 = ((int)pbVar24 - (int)pbVar33) * 8;
                              if (uVar20 <= uVar21) {
                                uVar21 = uVar20;
                              }
                              if (uVar21 != 0) {
                                uVar30 = 0;
                                uVar20 = 0;
                                uVar15 = 0x80;
                                uVar10 = uVar21;
                                iVar9 = iVar6;
                                do {
                                  pbVar24 = pbVar33;
                                  if (((uVar10 ^ uVar21) & 7) == 0) {
                                    pbVar24 = pbVar33 + 1;
                                    uVar20 = (uint)*pbVar33;
                                  }
                                  iVar9 = iVar9 + -1;
                                  uVar30 = uVar15 & (int)(uVar20 << 0x18) >> 0x1f | uVar30;
                                  uVar20 = uVar20 << 1;
                                  if (iVar9 == 0) {
                                    puVar19 = puVar19 + iVar23;
                                    *puVar31 = (char)uVar30;
                                    puVar31 = puVar19;
                                    iVar9 = iVar6;
LAB_00e47774:
                                    uVar15 = 0x80;
                                    uVar30 = 0;
                                  }
                                  else {
                                    uVar15 = uVar15 >> 1;
                                    if (uVar15 == 0) {
                                      *puVar31 = (char)uVar30;
                                      puVar31 = puVar31 + 1;
                                      goto LAB_00e47774;
                                    }
                                  }
                                  uVar10 = uVar10 - 1;
                                  pbVar33 = pbVar24;
                                } while (uVar10 != 0);
                                if (uVar15 != 0x80) {
                                  *puVar31 = (char)uVar30;
                                }
                              }
                            }
                            goto LAB_00e47924;
                          }
                          if (uVar21 == 0) goto LAB_00e47924;
                          uVar10 = 0;
                          uVar30 = 0;
                          uVar15 = 0;
                          bVar13 = true;
                          uVar20 = 0x80;
                          iVar9 = iVar6;
                          bVar7 = true;
                          do {
                            pbVar40 = pbVar33;
                            uVar14 = uVar15;
                            bVar8 = bVar7;
                            if (bVar13) {
                              do {
                                while (pbVar40 = pbVar33, bVar7) {
                                  uVar14 = uVar15;
                                  bVar8 = bVar7;
                                  if (pbVar24 <= pbVar33) goto LAB_00e478c4;
                                  pbVar40 = pbVar33 + 1;
                                  bVar7 = false;
                                  bVar8 = false;
                                  bVar28 = *pbVar33 >> 4;
                                  uVar14 = (uint)bVar28;
                                  uVar30 = *pbVar33 & 0xf;
                                  uVar15 = 0;
                                  pbVar33 = pbVar40;
                                  if (bVar28 != 0) goto LAB_00e478c4;
                                }
                                bVar7 = true;
                                uVar15 = 0;
                                uVar14 = uVar30;
                                bVar8 = bVar7;
                              } while (uVar30 == 0);
                            }
LAB_00e478c4:
                            uVar15 = 0;
                            if (bVar8) {
                              uVar15 = uVar20;
                            }
                            iVar9 = iVar9 + -1;
                            uVar10 = uVar15 | uVar10;
                            if (iVar9 == 0) {
                              puVar19 = puVar19 + iVar23;
                              *puVar31 = (char)uVar10;
                              puVar31 = puVar19;
                              iVar9 = iVar6;
LAB_00e47900:
                              uVar20 = 0x80;
                              uVar10 = 0;
                            }
                            else {
                              uVar20 = uVar20 >> 1;
                              if (uVar20 == 0) {
                                *puVar31 = (char)uVar10;
                                puVar31 = puVar31 + 1;
                                goto LAB_00e47900;
                              }
                            }
                            uVar29 = (undefined1)uVar10;
                            bVar13 = (int)uVar14 < 2;
                            uVar21 = uVar21 - 1;
                            uVar15 = uVar14 - 1;
                            pbVar33 = pbVar40;
                            bVar7 = bVar8;
                          } while (uVar21 != 0);
                        }
                        if (uVar20 != 0x80) {
                          *puVar31 = uVar29;
                        }
LAB_00e47924:
                        FUN_00e1d90c(lVar16);
                        return 0;
                      }
                    }
                  }
                }
                else {
                  uVar27 = uVar25;
                  pbVar24 = pbVar33;
                  if (uVar3 != 1) goto joined_r0x00e47534;
                  pbVar24 = (byte *)((long)pbVar33 + 1);
                  if (pbVar40 < pbVar24) goto LAB_00e47348;
                  uVar27 = (ulong)(*pbVar33 >> 4);
                  uVar25 = (ulong)(*pbVar33 & 0xf);
                  bVar28 = bVar34 >> 4 & 3;
                  if (bVar28 != 3) goto LAB_00e47538;
LAB_00e47500:
                  pbVar33 = pbVar24 + 3;
                  if (pbVar33 <= pbVar40) {
                    uVar12 = (ulong)*pbVar24 << 0x10 | (ulong)pbVar24[1] << 8 | (ulong)pbVar24[2];
LAB_00e475b8:
                    if (bVar34 >> 6 != 2) goto LAB_00e475c8;
LAB_00e47570:
                    uVar22 = local_90 + 1 >> 1;
                    if (uVar22 * 0xff <= uVar25 * uVar27 && uVar25 * uVar27 + uVar22 * -0xff != 0)
                    goto LAB_00e47348;
                    goto LAB_00e47604;
                  }
                }
              }
            }
          }
          else {
            pbVar33 = pbVar24 + 2;
            if (pbVar33 <= pbVar40) {
              bVar28 = pbVar24[1];
              uVar26 = (ulong)(char)((ulong)(long)(char)bVar28 >> 4);
              uVar18 = (ulong)(char)(((int)(char)bVar28 << 0x1c) >> 0x1c);
              goto joined_r0x00e474d4;
            }
          }
        }
        goto LAB_00e47348;
      }
    }
  }
joined_r0x00e47354:
  if ((param_4 >> 0xe & 1) == 0) {
    lVar35 = *(long *)(lVar41 + 600);
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0x6f75746c;
    lVar16 = lVar35 + (ulong)uVar21 * 0x10;
    uVar5 = *(undefined4 *)(lVar41 + 0x130);
    uVar36 = *(undefined8 *)(lVar41 + 0xc0);
    uVar3 = *(undefined4 *)(lVar16 + 8);
    uVar4 = *(undefined4 *)(lVar16 + 0xc);
    FUN_00e13908(*(undefined8 *)(param_1 + 0x158));
    *(undefined4 *)(param_1 + 0x148) = 0;
    uVar36 = FUN_00e48354(param_1 + 0x130,uVar36,uVar5,uVar4,uVar3);
    if ((int)uVar36 == 0) {
      lVar16 = *(long *)(param_1 + 0x158);
      uVar42 = *(undefined8 *)(lVar16 + 0x20);
      uVar36 = *(undefined8 *)(lVar16 + 0x18);
      uVar43 = *(undefined8 *)(lVar16 + 0x30);
      uVar11 = *(undefined8 *)(lVar16 + 0x28);
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(lVar16 + 0x38);
      *(undefined8 *)(param_1 + 0xd0) = uVar42;
      *(undefined8 *)(param_1 + 200) = uVar36;
      *(undefined8 *)(param_1 + 0xe0) = uVar43;
      *(undefined8 *)(param_1 + 0xd8) = uVar11;
      uVar20 = *(uint *)(param_1 + 0xe8) & 0xfffffffa;
      *(uint *)(param_1 + 0xe8) = uVar20 | 4;
      if ((param_2 != 0) && (*(ushort *)(param_2 + 0x1a) < 0x18)) {
        *(uint *)(param_1 + 0xe8) = uVar20 | 0x104;
      }
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      lVar16 = (long)*(int *)(lVar35 + (ulong)uVar21 * 0x10 + 4);
      if (*(int *)(lVar41 + 0x1ac) != *(int *)(lVar41 + 0x1a8)) {
        lVar16 = FT_MulDiv();
      }
      if ((*(byte *)(lVar41 + 0x1d0) & 1) == 0) {
        *(long *)(param_1 + 0x50) = lVar16;
        *(long *)(param_1 + 0x70) = lVar16;
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
      }
      else {
        *(long *)(param_1 + 0x68) = lVar16;
        *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x50);
        *(long *)(param_1 + 0x78) = lVar16;
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
        lVar16 = *(long *)(param_1 + 0x50);
      }
      if ((param_4 & 1) == 0) {
        uVar36 = *(undefined8 *)(param_2 + 0x20);
        uVar42 = *(undefined8 *)(param_2 + 0x28);
        if (0 < *(short *)(param_1 + 0xca)) {
          puVar38 = *(undefined8 **)(param_1 + 0xd0);
          iVar9 = 0;
          do {
            uVar11 = FT_MulFix(*puVar38,uVar36);
            *puVar38 = uVar11;
            uVar11 = FT_MulFix(puVar38[1],uVar42);
            puVar38[1] = uVar11;
            iVar9 = iVar9 + 1;
            puVar38 = puVar38 + 2;
          } while (iVar9 < *(short *)(param_1 + 0xca));
          lVar16 = *(long *)(param_1 + 0x50);
        }
        uVar36 = FT_MulFix(lVar16,uVar36);
        *(undefined8 *)(param_1 + 0x50) = uVar36;
        uVar36 = FT_MulFix(*(undefined8 *)(param_1 + 0x68),uVar42);
        *(undefined8 *)(param_1 + 0x68) = uVar36;
      }
      FT_Outline_Get_CBox((undefined8 *)(param_1 + 200),&local_80);
      uVar36 = 0;
      *(long *)(param_1 + 0x30) = lStack_70 - local_80;
      *(long *)(param_1 + 0x48) = local_78;
      *(long *)(param_1 + 0x38) = local_68 - local_78;
      *(long *)(param_1 + 0x40) = local_80;
    }
  }
  else {
LAB_00e47358:
    uVar36 = 6;
  }
  return uVar36;
}

