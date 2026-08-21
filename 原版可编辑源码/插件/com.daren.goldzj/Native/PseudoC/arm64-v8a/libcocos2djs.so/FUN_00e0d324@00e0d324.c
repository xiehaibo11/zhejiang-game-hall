
void FUN_00e0d324(long *param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  undefined *puVar10;
  long *plVar11;
  int iVar12;
  ushort *puVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  ulong uVar17;
  byte *pbVar18;
  short *psVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  long *plVar23;
  
  if (0 < *(int *)((long)param_1 + 0xb4)) {
    if (*(int *)(*param_1 + 0x58) == 2) {
      if (((((((*(short *)((long)param_1 + 0xc4) == 0) && ((short)param_1[0x19] == 0)) &&
             (*(short *)((long)param_1 + 0xcc) == 0)) &&
            (((short)param_1[0x1a] == 0 && (*(short *)((long)param_1 + 0xd4) == 0)))) &&
           ((short)param_1[0x1b] == 0)) &&
          (((*(short *)((long)param_1 + 0xdc) == 0 && (*(short *)((long)param_1 + 0xfc) == 0)) &&
           (((short)param_1[0x20] == 0 &&
            (((*(short *)((long)param_1 + 0x104) == 0 && ((short)param_1[0x21] == 0)) &&
             (*(short *)((long)param_1 + 0x10c) == 0)))))))) &&
         ((((short)param_1[0x22] == 0 && (*(short *)((long)param_1 + 0x114) == 0)) &&
          (((short)param_1[0x23] == 0 &&
           ((((*(short *)((long)param_1 + 0x11c) == 0 && ((short)param_1[0x24] == 0)) &&
             ((*(short *)((long)param_1 + 0x124) == 0 &&
              ((((short)param_1[0x25] == 0 && (*(short *)((long)param_1 + 0x134) == 0)) &&
               ((short)param_1[0x27] == 0)))))) &&
            ((*(short *)((long)param_1 + 0x13c) == 0 && ((short)param_1[0x28] == 0)))))))))) {
        if ((((short)param_1[0x1d] == 0) && (*(short *)((long)param_1 + 0xec) == 0)) &&
           ((short)param_1[0x1f] == 0)) {
          psVar19 = (short *)((long)param_1 + 0x144);
          lVar20 = 0x1f;
          do {
            if (*psVar19 != 0) goto LAB_00e0dbbc;
            lVar20 = lVar20 + 1;
            psVar19 = psVar19 + 2;
          } while (lVar20 < 0xff);
          uVar16 = 0;
        }
        else {
LAB_00e0dbbc:
          uVar16 = 1;
        }
      }
      else {
        uVar16 = 0;
      }
      *(undefined4 *)(*param_1 + 0x58) = uVar16;
    }
    FUN_00e0dbc4(param_1,param_1 + 0x169);
    FUN_00e0dbc4(param_1,param_1 + 0x16c);
    lVar6 = param_1[0x16a];
    uVar4 = *(ushort *)((long)param_1 + 0xc6);
    lVar20 = 0;
    plVar11 = (long *)((long)param_1 + 0xaec);
    iVar14 = 0x8a;
    if (uVar4 != 0) {
      iVar14 = 7;
    }
    *(undefined2 *)((long)param_1 + (long)(int)lVar6 * 4 + 0xca) = 0xffff;
    iVar9 = 3;
    if (uVar4 != 0) {
      iVar9 = 4;
    }
    uVar17 = 0xffffffff;
    do {
      uVar22 = (ulong)uVar4;
      lVar8 = lVar20 << 0x20;
      lVar20 = (long)(int)lVar20;
      puVar13 = (ushort *)((long)param_1 + (lVar8 >> 0x1e) + 0xca);
      iVar1 = 0;
      do {
        iVar12 = iVar1;
        if ((int)lVar6 < lVar20) {
          uVar4 = *(ushort *)((long)param_1 + 0x9ba);
          lVar6 = param_1[0x16d];
          lVar20 = 0;
          iVar14 = 3;
          iVar9 = 0x8a;
          if (uVar4 != 0) {
            iVar9 = 7;
            iVar14 = 4;
          }
          *(undefined2 *)((long)param_1 + (long)(int)lVar6 * 4 + 0x9be) = 0xffff;
          uVar17 = 0xffffffff;
          goto LAB_00e0d5f8;
        }
        uVar5 = *puVar13;
        iVar1 = iVar12 + 1;
        lVar20 = lVar20 + 1;
        uVar21 = (uint)uVar4;
        uVar7 = (uint)uVar5;
      } while ((iVar1 < iVar14) && (puVar13 = puVar13 + 2, uVar21 == uVar7));
      if (iVar1 < iVar9) {
        *(short *)((long)param_1 + uVar22 * 4 + 0xaac) =
             *(short *)((long)param_1 + uVar22 * 4 + 0xaac) + (short)iVar1;
      }
      else {
        if (uVar21 == 0) {
          plVar23 = param_1 + 0x15e;
          if (9 < iVar12) {
            plVar23 = (long *)((long)param_1 + 0xaf4);
          }
        }
        else {
          plVar23 = plVar11;
          if (uVar21 != (uint)uVar17) {
            *(short *)((long)param_1 + uVar22 * 4 + 0xaac) =
                 *(short *)((long)param_1 + uVar22 * 4 + 0xaac) + 1;
          }
        }
        *(short *)plVar23 = (short)*plVar23 + 1;
      }
      iVar1 = 6;
      if (uVar21 != uVar7) {
        iVar1 = 7;
      }
      iVar9 = 3;
      if (uVar21 != uVar7 && uVar7 != 0) {
        iVar9 = 4;
      }
      uVar17 = uVar22;
      iVar14 = 0x8a;
      uVar4 = uVar5;
      if (uVar7 != 0) {
        iVar14 = iVar1;
      }
    } while( true );
  }
  uVar17 = param_3 + 5;
  iVar14 = 0;
  uVar22 = uVar17;
joined_r0x00e0d780:
  if ((param_2 == 0) || (uVar22 < param_3 + 4U)) {
    uVar7 = *(uint *)((long)param_1 + 0x1724);
    if ((uVar17 == uVar22) || ((int)param_1[0x17] == 4)) {
      uVar21 = param_4 + 2U & 0xffff;
      uVar15 = uVar21 << (ulong)(uVar7 & 0x1f) | (uint)*(ushort *)(param_1 + 0x2e4);
      *(short *)(param_1 + 0x2e4) = (short)uVar15;
      if ((int)uVar7 < 0xe) {
        iVar14 = uVar7 + 3;
      }
      else {
        uVar7 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar7 + 1;
        *(char *)(param_1[2] + (ulong)uVar7) = (char)uVar15;
        uVar7 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar7 + 1;
        *(undefined1 *)(param_1[2] + (ulong)uVar7) = *(undefined1 *)((long)param_1 + 0x1721);
        *(short *)(param_1 + 0x2e4) =
             (short)(uVar21 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1724) & 0x1f));
        iVar14 = *(int *)((long)param_1 + 0x1724) + -0xd;
      }
      *(int *)((long)param_1 + 0x1724) = iVar14;
      puVar10 = &DAT_01974c80;
      plVar11 = (long *)&DAT_01975100;
    }
    else {
      uVar21 = param_4 + 4U & 0xffff;
      uVar15 = uVar21 << (ulong)(uVar7 & 0x1f) | (uint)*(ushort *)(param_1 + 0x2e4);
      *(short *)(param_1 + 0x2e4) = (short)uVar15;
      if ((int)uVar7 < 0xe) {
        uVar7 = uVar7 + 3;
      }
      else {
        uVar7 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar7 + 1;
        *(char *)(param_1[2] + (ulong)uVar7) = (char)uVar15;
        uVar7 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar7 + 1;
        *(undefined1 *)(param_1[2] + (ulong)uVar7) = *(undefined1 *)((long)param_1 + 0x1721);
        uVar15 = uVar21 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1724) & 0x1f);
        *(short *)(param_1 + 0x2e4) = (short)uVar15;
        uVar7 = *(int *)((long)param_1 + 0x1724) - 0xd;
      }
      uVar2 = *(uint *)(param_1 + 0x16d);
      uVar21 = (int)param_1[0x16a] + 0xff00U & 0xffff;
      uVar15 = uVar21 << (ulong)(uVar7 & 0x1f) | uVar15 & 0xffff;
      *(uint *)((long)param_1 + 0x1724) = uVar7;
      *(short *)(param_1 + 0x2e4) = (short)uVar15;
      if ((int)uVar7 < 0xc) {
        uVar7 = uVar7 + 5;
      }
      else {
        uVar7 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar7 + 1;
        *(char *)(param_1[2] + (ulong)uVar7) = (char)uVar15;
        uVar7 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar7 + 1;
        *(undefined1 *)(param_1[2] + (ulong)uVar7) = *(undefined1 *)((long)param_1 + 0x1721);
        uVar15 = uVar21 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1724) & 0x1f);
        *(short *)(param_1 + 0x2e4) = (short)uVar15;
        uVar7 = *(int *)((long)param_1 + 0x1724) - 0xb;
      }
      uVar21 = uVar2 & 0xffff;
      uVar15 = uVar21 << (ulong)(uVar7 & 0x1f) | uVar15 & 0xffff;
      *(uint *)((long)param_1 + 0x1724) = uVar7;
      *(short *)(param_1 + 0x2e4) = (short)uVar15;
      if ((int)uVar7 < 0xc) {
        uVar7 = uVar7 + 5;
      }
      else {
        uVar7 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar7 + 1;
        *(char *)(param_1[2] + (ulong)uVar7) = (char)uVar15;
        uVar7 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar7 + 1;
        *(undefined1 *)(param_1[2] + (ulong)uVar7) = *(undefined1 *)((long)param_1 + 0x1721);
        uVar15 = uVar21 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1724) & 0x1f);
        *(short *)(param_1 + 0x2e4) = (short)uVar15;
        uVar7 = *(int *)((long)param_1 + 0x1724) - 0xb;
      }
      uVar21 = iVar14 + 0xfffdU & 0xffff;
      uVar15 = uVar21 << (ulong)(uVar7 & 0x1f) | uVar15 & 0xffff;
      *(uint *)((long)param_1 + 0x1724) = uVar7;
      *(short *)(param_1 + 0x2e4) = (short)uVar15;
      if ((int)uVar7 < 0xd) {
        uVar7 = uVar7 + 4;
      }
      else {
        uVar7 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar7 + 1;
        *(char *)(param_1[2] + (ulong)uVar7) = (char)uVar15;
        uVar7 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar7 + 1;
        *(undefined1 *)(param_1[2] + (ulong)uVar7) = *(undefined1 *)((long)param_1 + 0x1721);
        uVar15 = uVar21 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1724) & 0x1f);
        *(short *)(param_1 + 0x2e4) = (short)uVar15;
        uVar7 = *(int *)((long)param_1 + 0x1724) - 0xc;
      }
      uVar17 = (ulong)(iVar14 + 1);
      pbVar18 = &DAT_019752b0;
      *(uint *)((long)param_1 + 0x1724) = uVar7;
      do {
        uVar4 = *(ushort *)((long)param_1 + (ulong)*pbVar18 * 4 + 0xaae);
        uVar15 = (uint)uVar4 << (ulong)(uVar7 & 0x1f) | uVar15 & 0xffff;
        *(short *)(param_1 + 0x2e4) = (short)uVar15;
        if ((int)uVar7 < 0xe) {
          uVar7 = uVar7 + 3;
        }
        else {
          uVar7 = *(uint *)(param_1 + 5);
          *(uint *)(param_1 + 5) = uVar7 + 1;
          *(char *)(param_1[2] + (ulong)uVar7) = (char)uVar15;
          uVar7 = *(uint *)(param_1 + 5);
          *(uint *)(param_1 + 5) = uVar7 + 1;
          *(undefined1 *)(param_1[2] + (ulong)uVar7) = *(undefined1 *)((long)param_1 + 0x1721);
          uVar4 = uVar4 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1724) & 0x1f);
          uVar15 = (uint)uVar4;
          *(ushort *)(param_1 + 0x2e4) = uVar4;
          uVar7 = *(int *)((long)param_1 + 0x1724) - 0xd;
        }
        uVar17 = uVar17 - 1;
        pbVar18 = pbVar18 + 1;
        *(uint *)((long)param_1 + 0x1724) = uVar7;
      } while (uVar17 != 0);
      puVar10 = (undefined *)((long)param_1 + 0xc4);
      FUN_00e0e904(param_1,puVar10);
      plVar11 = param_1 + 0x137;
      FUN_00e0e904(param_1,plVar11,uVar2);
    }
    FUN_00e0e498(param_1,puVar10,plVar11);
  }
  else {
    FUN_00e0cff8(param_1,param_2,param_3,param_4);
  }
  FUN_00e0cef8(param_1);
  if (param_4 == 0) {
    return;
  }
  if (*(int *)((long)param_1 + 0x1724) < 9) {
    if (*(int *)((long)param_1 + 0x1724) < 1) goto LAB_00e0db64;
    uVar3 = (undefined1)param_1[0x2e4];
  }
  else {
    uVar7 = *(uint *)(param_1 + 5);
    *(uint *)(param_1 + 5) = uVar7 + 1;
    *(char *)(param_1[2] + (ulong)uVar7) = (char)param_1[0x2e4];
    uVar3 = *(undefined1 *)((long)param_1 + 0x1721);
  }
  uVar7 = *(uint *)(param_1 + 5);
  *(uint *)(param_1 + 5) = uVar7 + 1;
  *(undefined1 *)(param_1[2] + (ulong)uVar7) = uVar3;
LAB_00e0db64:
  *(undefined2 *)(param_1 + 0x2e4) = 0;
  *(undefined4 *)((long)param_1 + 0x1724) = 0;
  return;
LAB_00e0d5f8:
  uVar22 = (ulong)uVar4;
  lVar8 = lVar20 << 0x20;
  lVar20 = (long)(int)lVar20;
  puVar13 = (ushort *)((long)param_1 + (lVar8 >> 0x1e) + 0x9be);
  iVar1 = 0;
  do {
    iVar12 = iVar1;
    if ((int)lVar6 < lVar20) {
      FUN_00e0dbc4(param_1,param_1 + 0x16f);
      if (*(short *)((long)param_1 + 0xaea) == 0) {
        if (*(short *)((long)param_1 + 0xab2) == 0) {
          if (*(short *)((long)param_1 + 0xae6) == 0) {
            if (*(short *)((long)param_1 + 0xab6) == 0) {
              if (*(short *)((long)param_1 + 0xae2) == 0) {
                if (*(short *)((long)param_1 + 0xaba) == 0) {
                  if (*(short *)((long)param_1 + 0xade) == 0) {
                    if (*(short *)((long)param_1 + 0xabe) == 0) {
                      if (*(short *)((long)param_1 + 0xada) == 0) {
                        if (*(short *)((long)param_1 + 0xac2) == 0) {
                          if (*(short *)((long)param_1 + 0xad6) == 0) {
                            if (*(short *)((long)param_1 + 0xac6) == 0) {
                              if (*(short *)((long)param_1 + 0xad2) == 0) {
                                if (*(short *)((long)param_1 + 0xaca) == 0) {
                                  if (*(short *)((long)param_1 + 0xace) == 0) {
                                    iVar14 = 2;
                                    if (*(short *)((long)param_1 + 0xaae) != 0) {
                                      iVar14 = 3;
                                    }
                                  }
                                  else {
                                    iVar14 = 4;
                                  }
                                }
                                else {
                                  iVar14 = 5;
                                }
                              }
                              else {
                                iVar14 = 6;
                              }
                            }
                            else {
                              iVar14 = 7;
                            }
                          }
                          else {
                            iVar14 = 8;
                          }
                        }
                        else {
                          iVar14 = 9;
                        }
                      }
                      else {
                        iVar14 = 10;
                      }
                    }
                    else {
                      iVar14 = 0xb;
                    }
                  }
                  else {
                    iVar14 = 0xc;
                  }
                }
                else {
                  iVar14 = 0xd;
                }
              }
              else {
                iVar14 = 0xe;
              }
            }
            else {
              iVar14 = 0xf;
            }
          }
          else {
            iVar14 = 0x10;
          }
        }
        else {
          iVar14 = 0x11;
        }
      }
      else {
        iVar14 = 0x12;
      }
      lVar20 = param_1[0x2e1] + (ulong)(iVar14 * 3 + 0x11);
      param_1[0x2e1] = lVar20;
      uVar22 = lVar20 + 10U >> 3;
      uVar17 = param_1[0x2e2] + 10U >> 3;
      if (uVar17 <= uVar22) {
        uVar22 = uVar17;
      }
      goto joined_r0x00e0d780;
    }
    uVar5 = *puVar13;
    iVar1 = iVar12 + 1;
    lVar20 = lVar20 + 1;
    uVar21 = (uint)uVar4;
    uVar7 = (uint)uVar5;
  } while ((iVar1 < iVar9) && (puVar13 = puVar13 + 2, uVar21 == uVar7));
  if (iVar1 < iVar14) {
    *(short *)((long)param_1 + uVar22 * 4 + 0xaac) =
         *(short *)((long)param_1 + uVar22 * 4 + 0xaac) + (short)iVar1;
  }
  else {
    if (uVar21 == 0) {
      plVar23 = param_1 + 0x15e;
      if (9 < iVar12) {
        plVar23 = (long *)((long)param_1 + 0xaf4);
      }
    }
    else {
      plVar23 = plVar11;
      if (uVar21 != (uint)uVar17) {
        *(short *)((long)param_1 + uVar22 * 4 + 0xaac) =
             *(short *)((long)param_1 + uVar22 * 4 + 0xaac) + 1;
      }
    }
    *(short *)plVar23 = (short)*plVar23 + 1;
  }
  iVar1 = 6;
  if (uVar21 != uVar7) {
    iVar1 = 7;
  }
  iVar14 = 3;
  if (uVar21 != uVar7 && uVar7 != 0) {
    iVar14 = 4;
  }
  uVar17 = uVar22;
  iVar9 = 0x8a;
  uVar4 = uVar5;
  if (uVar7 != 0) {
    iVar9 = iVar1;
  }
  goto LAB_00e0d5f8;
}

