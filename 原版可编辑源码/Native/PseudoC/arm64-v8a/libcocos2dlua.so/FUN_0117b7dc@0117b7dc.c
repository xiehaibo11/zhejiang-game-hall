
undefined8
FUN_0117b7dc(int param_1,ushort *param_2,uint param_3,long *param_4,uint *param_5,char *param_6)

{
  undefined1 *puVar1;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  ushort *puVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  char *pcVar24;
  char *pcVar25;
  ushort uVar26;
  int iVar27;
  char cVar28;
  uint uVar29;
  ulong uVar30;
  ushort auStack_90 [5];
  short local_86;
  short local_84;
  short local_82;
  short local_80;
  short local_7e;
  short local_7c;
  short local_7a;
  short local_78;
  short local_76;
  short local_74;
  short local_72;
  ushort local_70 [16];
  
  local_70[4] = 0;
  local_70[5] = 0;
  local_70[6] = 0;
  local_70[7] = 0;
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[3] = 0;
  local_70[0xc] = 0;
  local_70[0xd] = 0;
  local_70[0xe] = 0;
  local_70[0xf] = 0;
  local_70[8] = 0;
  local_70[9] = 0;
  local_70[10] = 0;
  local_70[0xb] = 0;
  if (param_3 == 0) {
    uVar20 = *param_5;
LAB_0117b840:
    if (local_70[0xe] == 0) {
      if (local_70[0xd] == 0) {
        if (local_70[0xc] == 0) {
          if (local_70[0xb] == 0) {
            if (local_70[10] == 0) {
              if (local_70[9] == 0) {
                if (local_70[8] == 0) {
                  if (local_70[7] == 0) {
                    if (local_70[6] == 0) {
                      if (local_70[5] == 0) {
                        if (local_70[4] == 0) {
                          if (local_70[3] == 0) {
                            if (local_70[2] == 0) {
                              if (local_70[1] == 0) {
                                puVar16 = (undefined4 *)*param_4;
                                *param_4 = (long)(puVar16 + 1);
                                *puVar16 = 0x140;
                                puVar16 = (undefined4 *)*param_4;
                                uVar20 = 1;
                                *param_4 = (long)(puVar16 + 1);
                                *puVar16 = 0x140;
LAB_0117bd8c:
                                *param_5 = uVar20;
                                return 0;
                              }
                              uVar11 = 0;
                              uVar15 = 1;
                              uVar21 = (uint)(uVar20 != 0);
                              uVar12 = 1;
                              goto LAB_0117b964;
                            }
                            uVar11 = 0;
                            uVar15 = 2;
                          }
                          else {
                            uVar11 = 0;
                            uVar15 = 3;
                          }
                        }
                        else {
                          uVar11 = 0;
                          uVar15 = 4;
                        }
                      }
                      else {
                        uVar11 = 0;
                        uVar15 = 5;
                      }
                    }
                    else {
                      uVar11 = 0;
                      uVar15 = 6;
                    }
                  }
                  else {
                    uVar11 = 0;
                    uVar15 = 7;
                  }
                }
                else {
                  uVar11 = 0;
                  uVar15 = 8;
                }
              }
              else {
                uVar11 = 0;
                uVar15 = 9;
              }
            }
            else {
              uVar11 = 0;
              uVar15 = 10;
            }
          }
          else {
            uVar11 = 0;
            uVar15 = 0xb;
          }
        }
        else {
          uVar11 = 0;
          uVar15 = 0xc;
        }
      }
      else {
        uVar11 = 0;
        uVar15 = 0xd;
      }
    }
    else {
      uVar11 = 0;
      uVar15 = 0xe;
    }
  }
  else {
    uVar12 = (ulong)param_3;
    puVar19 = param_2;
    do {
      uVar12 = uVar12 - 1;
      local_70[*puVar19] = local_70[*puVar19] + 1;
      puVar19 = puVar19 + 1;
    } while (uVar12 != 0);
    uVar11 = (uint)local_70[0xf];
    uVar20 = *param_5;
    if (local_70[0xf] == 0) goto LAB_0117b840;
    uVar15 = 0xf;
  }
  uVar12 = 1;
  uVar21 = uVar15;
  if (uVar20 <= uVar15) {
    uVar21 = uVar20;
  }
  do {
    if (local_70[uVar12] != 0) break;
    uVar12 = uVar12 + 1;
  } while ((uint)uVar12 < uVar15);
LAB_0117b964:
  uVar20 = (uint)uVar12;
  if ((uint)uVar12 <= uVar21) {
    uVar20 = uVar21;
  }
  if (-1 < (int)(2 - (uint)local_70[1])) {
    iVar22 = (2 - (uint)local_70[1]) * 2 - (uint)local_70[2];
    if (-1 < iVar22) {
      iVar22 = iVar22 * 2 - (uint)local_70[3];
      if (-1 < iVar22) {
        iVar22 = iVar22 * 2 - (uint)local_70[4];
        if (-1 < iVar22) {
          iVar22 = iVar22 * 2 - (uint)local_70[5];
          if (-1 < iVar22) {
            iVar22 = iVar22 * 2 - (uint)local_70[6];
            if (-1 < iVar22) {
              iVar22 = iVar22 * 2 - (uint)local_70[7];
              if (-1 < iVar22) {
                iVar22 = iVar22 * 2 - (uint)local_70[8];
                if (-1 < iVar22) {
                  iVar22 = iVar22 * 2 - (uint)local_70[9];
                  if (-1 < iVar22) {
                    iVar22 = iVar22 * 2 - (uint)local_70[10];
                    if (-1 < iVar22) {
                      iVar22 = iVar22 * 2 - (uint)local_70[0xb];
                      if (-1 < iVar22) {
                        iVar22 = iVar22 * 2 - (uint)local_70[0xc];
                        if (-1 < iVar22) {
                          iVar22 = iVar22 * 2 - (uint)local_70[0xd];
                          if (-1 < iVar22) {
                            iVar22 = iVar22 * 2 - (uint)local_70[0xe];
                            if ((-1 < iVar22) && (iVar22 = iVar22 * 2 - uVar11, -1 < iVar22)) {
                              if (iVar22 != 0) {
                                if (param_1 == 0) {
                                  return 0xffffffff;
                                }
                                if (uVar15 != 1) {
                                  return 0xffffffff;
                                }
                              }
                              auStack_90[3] = local_70[2] + local_70[1];
                              auStack_90[4] = local_70[2] + local_70[1] + local_70[3];
                              local_86 = auStack_90[4] + local_70[4];
                              local_84 = local_86 + local_70[5];
                              local_82 = local_84 + local_70[6];
                              local_80 = local_82 + local_70[7];
                              local_7e = local_80 + local_70[8];
                              local_7c = local_7e + local_70[9];
                              local_7a = local_7c + local_70[10];
                              local_78 = local_7a + local_70[0xb];
                              local_76 = local_78 + local_70[0xc];
                              local_74 = local_76 + local_70[0xd];
                              auStack_90[1] = 0;
                              auStack_90[2] = local_70[1];
                              local_72 = local_74 + local_70[0xe];
                              if (param_3 != 0) {
                                uVar13 = 0;
                                do {
                                  uVar23 = (ulong)param_2[uVar13];
                                  if (uVar23 != 0) {
                                    uVar26 = auStack_90[uVar23];
                                    auStack_90[uVar23] = uVar26 + 1;
                                    *(short *)(param_6 + (ulong)uVar26 * 2) = (short)uVar13;
                                  }
                                  uVar13 = uVar13 + 1;
                                } while (param_3 != uVar13);
                              }
                              if (param_1 == 0) {
                                bVar7 = false;
                                bVar6 = 0;
                                iVar22 = 0x13;
                                pcVar24 = param_6;
                                pcVar25 = param_6;
                              }
                              else if (param_1 == 1) {
                                if (9 < uVar20) {
                                  return 1;
                                }
                                bVar7 = false;
                                iVar22 = 0x100;
                                bVar6 = 1;
                                pcVar24 = "window size";
                                pcVar25 = "@\x05";
                              }
                              else {
                                bVar7 = param_1 == 2;
                                bVar6 = 0;
                                iVar22 = -1;
                                pcVar24 = "\x10";
                                pcVar25 = "\x01";
                                if ((bVar7) && (9 < uVar20)) {
                                  return 1;
                                }
                              }
                              lVar10 = *param_4;
                              uVar21 = 1 << (ulong)(uVar20 & 0x1f);
                              uVar11 = 0;
                              uVar9 = 0;
                              uVar5 = uVar21 - 1;
                              uVar13 = 0xffffffff;
                              uVar8 = 0;
                              uVar17 = uVar20;
                              do {
                                uVar23 = (ulong)(uint)(1 << (ulong)(uVar17 & 0x1f));
                                do {
                                  uVar26 = *(ushort *)(param_6 + (ulong)uVar11 * 2);
                                  uVar17 = (uint)uVar12;
                                  if ((int)(uint)uVar26 < iVar22) {
                                    cVar28 = '\0';
                                  }
                                  else if (iVar22 < (int)(uint)uVar26) {
                                    cVar28 = pcVar24[(ulong)uVar26 * 2];
                                    uVar26 = *(ushort *)(pcVar25 + (ulong)uVar26 * 2);
                                  }
                                  else {
                                    uVar26 = 0;
                                    cVar28 = '`';
                                  }
                                  iVar27 = 1 << (ulong)(uVar17 - uVar8 & 0x1f);
                                  uVar30 = uVar23;
                                  do {
                                    uVar18 = (int)uVar30 - iVar27;
                                    pcVar2 = (char *)(lVar10 + (ulong)(((uVar9 >> (ulong)(uVar8 & 
                                                  0x1f)) - iVar27) + (int)uVar30) * 4);
                                    *pcVar2 = cVar28;
                                    cVar4 = (char)(uVar17 - uVar8);
                                    pcVar2[1] = cVar4;
                                    *(ushort *)(pcVar2 + 2) = uVar26;
                                    uVar30 = (ulong)uVar18;
                                  } while (uVar18 != 0);
                                  uVar18 = 1 << (ulong)(uVar17 - 1 & 0x1f);
                                  do {
                                    uVar29 = uVar18;
                                    uVar18 = uVar29 >> 1;
                                  } while ((uVar29 & uVar9) != 0);
                                  if (uVar29 == 0) {
                                    uVar9 = 0;
                                  }
                                  else {
                                    uVar9 = (uVar29 - 1 & uVar9) + uVar29;
                                  }
                                  uVar26 = local_70[uVar12 & 0xffffffff];
                                  uVar11 = uVar11 + 1;
                                  local_70[uVar12 & 0xffffffff] = uVar26 - 1;
                                  if ((ushort)(uVar26 - 1) == 0) {
                                    if (uVar17 == uVar15) {
                                      if (uVar9 != 0) {
                                        puVar1 = (undefined1 *)(lVar10 + (ulong)uVar9 * 4);
                                        *puVar1 = 0x40;
                                        puVar1[1] = cVar4;
                                        *(undefined2 *)(puVar1 + 2) = 0;
                                      }
                                      *param_4 = *param_4 + (ulong)uVar21 * 4;
                                      goto LAB_0117bd8c;
                                    }
                                    uVar12 = (ulong)param_2[*(ushort *)(param_6 + (ulong)uVar11 * 2)
                                                           ];
                                  }
                                  uVar18 = (uint)uVar12;
                                } while ((uVar18 <= uVar20) ||
                                        (uVar29 = uVar9 & uVar5, uVar29 == (uint)uVar13));
                                uVar3 = uVar20;
                                if (uVar8 != 0) {
                                  uVar3 = uVar8;
                                }
                                uVar17 = uVar18 - uVar3;
                                if (uVar18 < uVar15) {
                                  iVar27 = 1 << (ulong)(uVar17 & 0x1f);
                                  uVar13 = uVar12 & 0xffffffff;
                                  do {
                                    puVar19 = local_70 + uVar13;
                                    if ((int)(iVar27 - (uint)*puVar19) < 1) break;
                                    uVar13 = uVar13 + 1;
                                    iVar27 = (iVar27 - (uint)*puVar19) * 2;
                                  } while ((uint)uVar13 < uVar15);
                                  uVar17 = (int)uVar13 - uVar3;
                                }
                                uVar21 = (1 << (ulong)(uVar17 & 0x1f)) + uVar21;
                                if ((bool)(bVar6 & 0x354 < uVar21)) {
                                  return 1;
                                }
                                if ((bool)(bVar7 & 0x250 < uVar21)) {
                                  return 1;
                                }
                                lVar14 = *param_4;
                                lVar10 = lVar10 + uVar23 * 4;
                                puVar1 = (undefined1 *)(lVar14 + (ulong)uVar29 * 4);
                                *puVar1 = (char)uVar17;
                                puVar1[1] = (char)uVar20;
                                *(short *)(puVar1 + 2) =
                                     (short)((uint)((int)lVar10 - (int)lVar14) >> 2);
                                uVar13 = (ulong)uVar29;
                                uVar8 = uVar3;
                              } while( true );
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
  return 0xffffffff;
}

