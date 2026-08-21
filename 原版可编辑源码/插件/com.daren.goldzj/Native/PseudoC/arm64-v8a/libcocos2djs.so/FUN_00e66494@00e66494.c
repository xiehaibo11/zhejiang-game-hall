
/* WARNING: Removing unreachable block (ram,0x00e66544) */
/* WARNING: Removing unreachable block (ram,0x00e6654c) */

void FUN_00e66494(long param_1,uint param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  byte *pbVar18;
  int iVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  char cVar25;
  
  lVar8 = param_1 + (ulong)param_2 * 0x9e8;
  pbVar22 = *(byte **)(lVar8 + 0x60);
  iVar3 = *(int *)(lVar8 + 0x58);
  pbVar23 = pbVar22 + (long)iVar3 * 0x58;
  if (param_2 == 1) {
    cVar25 = (&PTR_DAT_01c97170)[*(uint *)(**(long **)(param_1 + 0x1420) + 8)][0x18];
    if (iVar3 < 1) {
      pbVar24 = (byte *)0x0;
      bVar5 = false;
      goto LAB_00e66974;
    }
    pbVar15 = pbVar22 + 0x18;
    pbVar18 = (byte *)0x0;
    do {
      pbVar20 = pbVar15 + -0x18;
      bVar7 = *pbVar15;
      pbVar24 = pbVar18;
      if ((bVar7 >> 2 & 1) == 0) {
        lVar8 = *(long *)(pbVar15 + 0x10);
        pbVar21 = *(byte **)(pbVar15 + 0x18);
        pbVar9 = pbVar20;
        pbVar13 = pbVar15;
        if ((pbVar21 == (byte *)0x0) || (lVar8 == 0)) {
LAB_00e66560:
          bVar5 = lVar8 != 0;
          if (lVar8 == 0) {
LAB_00e6656c:
            if (pbVar21 != (byte *)0x0) {
              lVar8 = *(long *)(pbVar21 + 0x28);
              if (lVar8 == 0) goto LAB_00e66614;
              pbVar9 = pbVar21;
              pbVar13 = pbVar21 + 0x18;
              pbVar21 = pbVar20;
              goto LAB_00e665b4;
            }
          }
          if (!bVar5) goto LAB_00e66614;
        }
        else if (*(long *)(pbVar21 + 0x28) != 0) {
          if ((pbVar21[0x18] >> 3 & 1) != 0) {
            pbVar21[0x28] = 0;
            pbVar21[0x29] = 0;
            pbVar21[0x2a] = 0;
            pbVar21[0x2b] = 0;
            pbVar21[0x2c] = 0;
            pbVar21[0x2d] = 0;
            pbVar21[0x2e] = 0;
            pbVar21[0x2f] = 0;
            pbVar21[0x18] = pbVar21[0x18] & 0xf7;
            lVar8 = *(long *)(pbVar15 + 0x10);
            goto LAB_00e66560;
          }
          if ((bVar7 >> 3 & 1) == 0) goto LAB_00e665b4;
          lVar8 = 0;
          pbVar15[0x10] = 0;
          pbVar15[0x11] = 0;
          pbVar15[0x12] = 0;
          pbVar15[0x13] = 0;
          pbVar15[0x14] = 0;
          pbVar15[0x15] = 0;
          pbVar15[0x16] = 0;
          pbVar15[0x17] = 0;
          *pbVar15 = bVar7 & 0xf7;
          bVar5 = false;
          goto LAB_00e6656c;
        }
LAB_00e665b4:
        lVar8 = *(long *)(lVar8 + 0x10);
        *(long *)(pbVar9 + 0x10) = lVar8;
        bVar7 = *pbVar13;
        *pbVar13 = bVar7 | 4;
        if ((pbVar21 != (byte *)0x0) && (*(long *)(pbVar21 + 0x28) == 0)) {
          bVar2 = pbVar21[0x18];
          lVar6 = FUN_00e66c3c(param_1,1,*(long *)(pbVar21 + 8) - *(long *)(pbVar9 + 8),
                               lVar8 - *(long *)(pbVar9 + 8),bVar7 | 4,bVar2);
          *(long *)(pbVar21 + 0x10) = lVar6 + lVar8;
          pbVar21[0x18] = bVar2 | 4;
        }
        pbVar24 = pbVar20;
        if (pbVar18 != (byte *)0x0) {
          pbVar24 = pbVar18;
        }
      }
LAB_00e66614:
      pbVar20 = pbVar15 + 0x40;
      pbVar15 = pbVar15 + 0x58;
      pbVar18 = pbVar24;
    } while (pbVar20 < pbVar23);
  }
  else {
    cVar25 = '\0';
    pbVar24 = (byte *)0x0;
  }
  bVar5 = 0 < iVar3;
  if (iVar3 < 1) {
    bVar5 = false;
    iVar19 = 0;
  }
  else {
    iVar19 = 0;
    pbVar15 = pbVar22;
    do {
      while (bVar7 = pbVar15[0x18], (bVar7 >> 2 & 1) != 0) {
joined_r0x00e6685c:
        pbVar15 = pbVar15 + 0x58;
        if (pbVar23 <= pbVar15) goto joined_r0x00e66920;
      }
      pbVar18 = *(byte **)(pbVar15 + 0x30);
      if (pbVar18 == (byte *)0x0) {
        iVar19 = iVar19 + 1;
        goto joined_r0x00e6685c;
      }
      if (*(long *)(pbVar18 + 0x28) == 0) {
        if (pbVar24 == (byte *)0x0) {
          lVar12 = *(long *)(pbVar15 + 8);
          lVar6 = *(long *)(pbVar18 + 8) - lVar12;
          lVar8 = FUN_00e66c3c(param_1,param_2,lVar6,0,bVar7,pbVar18[0x18]);
          if (lVar8 < 0x60) {
            lVar17 = lVar12 + (lVar6 >> 1);
            uVar11 = 0x20;
            if (0x40 < lVar8) {
              uVar11 = 0x1a;
            }
            lVar1 = 0x20;
            if (0x40 < lVar8) {
              lVar1 = 0x26;
            }
            uVar16 = lVar17 + 0x20U & 0xffffffffffffffc0;
            uVar10 = uVar16 - lVar1;
            uVar16 = uVar16 | uVar11;
            lVar4 = lVar17 - uVar10;
            lVar1 = -lVar4;
            if (-1 < lVar4) {
              lVar1 = lVar4;
            }
            lVar17 = lVar17 - uVar16;
            lVar4 = -lVar17;
            if (-1 < lVar17) {
              lVar4 = lVar17;
            }
            if (lVar4 <= lVar1) {
              uVar10 = uVar16;
            }
            lVar17 = lVar8;
            if (lVar8 < 0) {
              lVar17 = lVar8 + 1;
            }
            lVar17 = uVar10 - (lVar17 >> 1);
            *(long *)(pbVar15 + 0x10) = lVar17;
            *(long *)(pbVar18 + 0x10) = lVar17 + lVar8;
            uVar11 = *(ulong *)(pbVar15 + 0x10);
          }
          else {
            uVar11 = lVar12 + 0x20U & 0xffffffffffffffc0;
            *(ulong *)(pbVar15 + 0x10) = uVar11;
          }
          pbVar15[0x18] = bVar7 | 4;
          lVar8 = FUN_00e66c3c(param_1,param_2,lVar6,uVar11 - lVar12,bVar7 | 4,pbVar18[0x18]);
          *(ulong *)(pbVar18 + 0x10) = lVar8 + uVar11;
          pbVar24 = pbVar15;
        }
        else {
          lVar6 = *(long *)(pbVar24 + 8);
          lVar8 = *(long *)(pbVar24 + 0x10);
          lVar17 = *(long *)(pbVar15 + 8);
          bVar2 = pbVar18[0x18];
          lVar12 = *(long *)(pbVar18 + 8) - lVar17;
          uVar11 = FUN_00e66c3c(param_1,param_2,lVar12,0,bVar7,bVar2);
          if ((bVar2 >> 2 & 1) == 0) {
            lVar8 = (lVar17 - lVar6) + lVar8;
            lVar6 = lVar8 + (lVar12 >> 1);
            pbVar20 = pbVar18;
            if ((long)uVar11 < 0x60) {
              uVar10 = lVar6 + 0x20U & 0xffffffffffffffc0;
              lVar8 = 0x20;
              if (0x40 < (long)uVar11) {
                lVar8 = 0x26;
              }
              uVar16 = 0x20;
              if (0x40 < (long)uVar11) {
                uVar16 = 0x1a;
              }
              uVar14 = uVar10 - lVar8;
              uVar10 = uVar10 | uVar16;
              lVar12 = lVar6 - uVar14;
              lVar8 = -lVar12;
              if (-1 < lVar12) {
                lVar8 = lVar12;
              }
              lVar6 = lVar6 - uVar10;
              lVar12 = -lVar6;
              if (-1 < lVar6) {
                lVar12 = lVar6;
              }
              if (lVar12 <= lVar8) {
                uVar14 = uVar10;
              }
              if ((long)uVar11 < 0) {
                uVar11 = uVar11 + 1;
              }
              *(ulong *)(pbVar15 + 0x10) = uVar14 - ((long)uVar11 >> 1);
              lVar8 = uVar14 + ((long)uVar11 >> 1);
            }
            else {
              uVar10 = lVar8 + 0x20;
              uVar16 = uVar10 & 0xffffffffffffffc0;
              lVar17 = (uVar16 + (uVar11 >> 1)) - lVar6;
              uVar10 = (uVar10 + lVar12 & 0xffffffffffffffc0) - uVar11;
              lVar8 = -lVar17;
              if (-1 < lVar17) {
                lVar8 = lVar17;
              }
              lVar6 = ((uVar11 >> 1) - lVar6) + uVar10;
              lVar12 = -lVar6;
              if (-1 < lVar6) {
                lVar12 = lVar6;
              }
              if (lVar12 <= lVar8) {
                uVar16 = uVar10;
              }
              *(ulong *)(pbVar15 + 0x10) = uVar16;
              lVar8 = uVar16 + uVar11;
            }
          }
          else {
            lVar8 = *(long *)(pbVar18 + 0x10) - uVar11;
            pbVar20 = pbVar15;
          }
          *(long *)(pbVar20 + 0x10) = lVar8;
          pbVar15[0x18] = bVar7 | 4;
          pbVar18[0x18] = pbVar18[0x18] | 4;
          if (pbVar22 < pbVar15) {
            lVar8 = *(long *)(pbVar15 + -0x48);
            if (cVar25 == '\0') {
              if (*(long *)(pbVar15 + 0x10) < lVar8) goto LAB_00e668f4;
            }
            else if (lVar8 < *(long *)(pbVar15 + 0x10)) {
LAB_00e668f4:
              lVar12 = *(long *)(pbVar18 + 0x10) - lVar8;
              lVar6 = -lVar12;
              if (-1 < lVar12) {
                lVar6 = lVar12;
              }
              if (0x10 < lVar6) {
                *(long *)(pbVar15 + 0x10) = lVar8;
                goto joined_r0x00e666a8;
              }
            }
          }
        }
        goto joined_r0x00e6685c;
      }
      lVar8 = *(long *)(pbVar18 + 0x10);
      lVar6 = FUN_00e66c3c(param_1,param_2,*(long *)(pbVar15 + 8) - *(long *)(pbVar18 + 8),
                           lVar8 - *(long *)(pbVar18 + 8),pbVar18[0x18],bVar7);
      *(long *)(pbVar15 + 0x10) = lVar6 + lVar8;
      pbVar15[0x18] = bVar7 | 4;
joined_r0x00e666a8:
      pbVar15 = pbVar15 + 0x58;
    } while (pbVar15 < pbVar23);
  }
joined_r0x00e66920:
  if (param_2 == 0) {
    if (iVar3 == 6) {
      lVar8 = 4;
      lVar6 = 2;
      pbVar15 = pbVar22;
    }
    else {
      if (iVar3 != 0xc) goto LAB_00e66c10;
      lVar8 = 9;
      lVar6 = 5;
      pbVar15 = pbVar22 + 0x58;
    }
    lVar12 = (*(long *)(pbVar22 + lVar6 * 0x58 + 8) * 2 - *(long *)(pbVar22 + lVar8 * 0x58 + 8)) -
             *(long *)(pbVar15 + 8);
    lVar17 = -lVar12;
    if (-1 < lVar12) {
      lVar17 = lVar12;
    }
    if (lVar17 < 8) {
      lVar12 = *(long *)(pbVar22 + lVar8 * 0x58 + 0x30);
      lVar17 = *(long *)(pbVar22 + lVar6 * 0x58 + 0x10) * 2 - *(long *)(pbVar15 + 0x10);
      lVar6 = *(long *)(pbVar22 + lVar8 * 0x58 + 0x10) - lVar17;
      *(long *)(pbVar22 + lVar8 * 0x58 + 0x10) = lVar17;
      if (lVar12 != 0) {
        *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) - lVar6;
      }
      if (iVar3 == 0xc) {
        *(long *)(pbVar22 + 0x2d0) = *(long *)(pbVar22 + 0x2d0) - lVar6;
        *(long *)(pbVar22 + 0x3d8) = *(long *)(pbVar22 + 0x3d8) - lVar6;
      }
      pbVar22[lVar8 * 0x58 + 0x18] = pbVar22[lVar8 * 0x58 + 0x18] | 4;
      if (lVar12 != 0) {
        *(byte *)(lVar12 + 0x18) = *(byte *)(lVar12 + 0x18) | 4;
      }
    }
  }
LAB_00e66c10:
  if (iVar19 == 0 && pbVar24 != (byte *)0x0) {
    return;
  }
LAB_00e66974:
  pbVar15 = pbVar22;
  if (bVar5) {
    do {
      while (bVar7 = pbVar15[0x18], (bVar7 >> 2 & 1) == 0) {
        lVar8 = *(long *)(pbVar15 + 0x38);
        if (lVar8 == 0) {
LAB_00e669d0:
          pbVar18 = pbVar15;
          if (pbVar24 == (byte *)0x0) {
            uVar11 = *(long *)(pbVar15 + 8) + 0x20U & 0xffffffffffffffc0;
            pbVar24 = pbVar15;
          }
          else {
            do {
              pbVar20 = pbVar18;
              pbVar18 = pbVar20 + -0x58;
              if (pbVar18 < pbVar22) {
                bVar2 = 0;
                pbVar21 = pbVar15;
                goto LAB_00e66a14;
              }
            } while ((pbVar20[-0x40] >> 2 & 1) == 0);
            bVar2 = 1;
            pbVar21 = pbVar15;
LAB_00e66a14:
            do {
              pbVar9 = pbVar21;
              pbVar21 = pbVar9 + 0x58;
              if (pbVar23 <= pbVar21) goto LAB_00e66a74;
            } while ((pbVar9[0x70] >> 2 & 1) == 0);
            if ((pbVar21 <= pbVar15) || (!(bool)(bVar2 & pbVar18 < pbVar15))) {
LAB_00e66a74:
              lVar12 = *(long *)(pbVar24 + 0x10);
              uVar11 = (*(long *)(pbVar15 + 8) + 0x10) - *(long *)(pbVar24 + 8) & 0xffffffffffffffe0
              ;
              goto LAB_00e66a88;
            }
            uVar11 = *(ulong *)(pbVar20 + -0x48);
            lVar8 = *(long *)(pbVar9 + 0x60) - *(long *)(pbVar20 + -0x50);
            if (lVar8 != 0) {
              lVar8 = FT_MulDiv(*(long *)(pbVar15 + 8) - *(long *)(pbVar20 + -0x50),
                                *(long *)(pbVar9 + 0x68) - uVar11,lVar8);
              bVar7 = pbVar15[0x18];
              uVar11 = lVar8 + uVar11;
            }
          }
        }
        else {
          lVar12 = *(long *)(pbVar15 + 8);
          lVar17 = *(long *)(lVar8 + 8) - lVar12;
          lVar6 = -lVar17;
          if (-1 < lVar17) {
            lVar6 = lVar17;
          }
          if (0x4f < lVar6) goto LAB_00e669d0;
          uVar11 = *(long *)(lVar8 + 0x10) - *(long *)(lVar8 + 8);
LAB_00e66a88:
          uVar11 = uVar11 + lVar12;
        }
        *(ulong *)(pbVar15 + 0x10) = uVar11;
        pbVar15[0x18] = bVar7 | 4;
        if (pbVar22 < pbVar15) {
          uVar10 = *(ulong *)(pbVar15 + -0x48);
          if (cVar25 == '\0') {
            if ((long)uVar11 < (long)uVar10) goto LAB_00e66ab0;
          }
          else if ((long)uVar10 < (long)uVar11) {
LAB_00e66ab0:
            if (*(long *)(pbVar15 + 0x30) != 0) {
              lVar6 = *(long *)(*(long *)(pbVar15 + 0x30) + 0x10) - uVar10;
              lVar8 = -lVar6;
              if (-1 < lVar6) {
                lVar8 = lVar6;
              }
              if (0x10 < lVar8) {
                *(ulong *)(pbVar15 + 0x10) = uVar10;
                uVar11 = uVar10;
              }
            }
          }
        }
        if ((pbVar23 <= pbVar15 + 0x58) || (pbVar18 = pbVar15 + 0x58, (pbVar15[0x70] >> 2 & 1) == 0)
           ) break;
        lVar8 = *(long *)(pbVar15 + 0x68);
        if (cVar25 == '\0') {
          if (lVar8 < (long)uVar11) goto LAB_00e66af8;
          break;
        }
        if (lVar8 <= (long)uVar11) break;
LAB_00e66af8:
        if (*(long *)(pbVar15 + 0x30) == 0) break;
        lVar12 = *(long *)(*(long *)(pbVar15 + 0x30) + 0x10) - *(long *)(pbVar15 + -0x48);
        lVar6 = -lVar12;
        if (-1 < lVar12) {
          lVar6 = lVar12;
        }
        if (lVar6 < 0x11) break;
        *(long *)(pbVar15 + 0x10) = lVar8;
        pbVar15 = pbVar18;
        if (pbVar23 <= pbVar18) {
          return;
        }
      }
      pbVar15 = pbVar15 + 0x58;
    } while (pbVar15 < pbVar23);
  }
  return;
}

