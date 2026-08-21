
undefined1  [16] __addtf3(undefined1 param_1 [16],undefined1 param_2 [16])

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar27;
  undefined1 auVar26 [16];
  ulong uVar28;
  
  uVar28 = param_2._0_8_;
  uVar27 = param_1._8_8_;
  uVar25 = param_1._0_8_;
  uVar1 = fpcr;
  uVar21 = param_1._14_2_ & 0x7fff;
  uVar24 = -((long)uVar27 >> 0x3f);
  uVar11 = uVar25 >> 0x3d;
  uVar10 = (uVar27 & 0xffffffffffff) << 3 | uVar11;
  uVar14 = param_2._14_2_ & 0x7fff;
  lVar16 = param_2._8_8_ >> 0x3f;
  uVar19 = -lVar16;
  uVar2 = param_2._8_8_ << 3;
  uVar3 = uVar2 & 0x7fffffffffff8;
  uVar22 = (ulong)(ushort)uVar21;
  uVar18 = uVar28 >> 0x3d;
  uVar8 = uVar3 | uVar18;
  uVar20 = uVar25 * 8;
  uVar15 = (ulong)(ushort)uVar14;
  uVar12 = uVar28 * 8;
  uVar21 = uVar21 - uVar14;
  uVar4 = param_1._12_4_;
  uVar14 = (uint)(uVar3 >> 0x20);
  uVar13 = uVar20;
  uVar9 = uVar10;
  uVar6 = uVar8;
  uVar17 = uVar12;
  uVar23 = uVar15;
  if (lVar16 == (long)uVar27 >> 0x3f) {
    if (0 < (int)uVar21) {
      if (uVar15 == 0) {
        if (uVar8 == 0 && uVar12 == 0) {
LAB_0126dc5c:
          uVar8 = uVar10;
          uVar12 = uVar20;
          uVar23 = uVar22;
          if (uVar22 == 0x7fff) {
            uVar15 = uVar22;
            if (uVar10 == 0 && uVar20 == 0) {
LAB_0126e2f0:
              uVar21 = 0;
              uVar9 = 0;
              uVar13 = 0;
              goto LAB_0126e1b8;
            }
LAB_0126dca4:
            uVar21 = (uVar4 & 0xffff) >> 0xf ^ 1;
            uVar15 = uVar22;
            goto LAB_0126e1b8;
          }
          goto LAB_0126e0f4;
        }
        uVar21 = uVar21 - 1;
        if (uVar21 != 0) goto LAB_0126d8ec;
        uVar11 = uVar12 + uVar20;
        uVar10 = uVar8 + uVar10;
        if (uVar11 < uVar20) {
          uVar10 = uVar10 + 1;
        }
      }
      else {
        uVar8 = uVar8 | 0x8000000000000;
LAB_0126d8ec:
        if (uVar22 == 0x7fff) {
LAB_0126dc9c:
          uVar15 = uVar22;
          if (uVar10 != 0 || uVar20 != 0) goto LAB_0126dca4;
          goto LAB_0126e1a0;
        }
        if ((int)uVar21 < 0x75) {
          if (0x3f < (int)uVar21) {
            lVar16 = 0;
            if (uVar21 != 0x40) {
              lVar16 = uVar8 << ((ulong)(0x80 - uVar21) & 0x3f);
            }
            uVar11 = (ulong)(lVar16 != 0 || uVar12 != 0) | uVar8 >> ((ulong)(uVar21 - 0x40) & 0x3f);
            goto LAB_0126d970;
          }
          uVar18 = uVar8 >> ((ulong)uVar21 & 0x3f);
          uVar11 = uVar8 << ((ulong)(0x40 - uVar21) & 0x3f) | uVar12 >> ((ulong)uVar21 & 0x3f) |
                   (ulong)(uVar12 << ((ulong)(0x40 - uVar21) & 0x3f) != 0);
        }
        else {
          uVar11 = (ulong)(uVar8 != 0 || uVar12 != 0);
LAB_0126d970:
          uVar18 = 0;
        }
        uVar11 = uVar11 + uVar20;
        uVar10 = uVar18 + uVar10;
        if (uVar11 < uVar20) {
          uVar10 = uVar10 + 1;
        }
      }
LAB_0126dbd4:
      uVar8 = uVar10;
      uVar12 = uVar11;
      uVar23 = uVar22;
      if ((uVar10 >> 0x33 & 1) == 0) goto LAB_0126e0f4;
      uVar23 = uVar22 + 1;
      if (uVar23 != 0x7fff) {
        uVar8 = (uVar10 & 0xfff7ffffffffffff) >> 1;
        uVar12 = uVar11 & 1 | uVar11 >> 1 | uVar10 << 0x3f;
        goto LAB_0126e1b4;
      }
      uVar11 = uVar1 & 0xc00000;
      if (uVar11 == 0) {
LAB_0126e17c:
        uVar9 = 0;
      }
      else {
        if (uVar11 == 0x400000) {
          if (uVar24 != 0) {
LAB_0126dc14:
            uVar21 = 0x14;
            uVar9 = 0xffffffffffffffff;
            uVar13 = 0xffffffffffffffff;
            uVar15 = 0x7ffe;
            uVar24 = 1;
            goto LAB_0126e1b8;
          }
          goto LAB_0126e17c;
        }
        if ((uVar11 != 0x800000) || (uVar24 == 0)) goto LAB_0126e188;
LAB_0126e168:
        uVar9 = 0;
        uVar24 = 1;
      }
LAB_0126e174:
      uVar21 = 0x14;
      uVar13 = uVar9;
      uVar15 = uVar23;
      goto LAB_0126e1b8;
    }
    if (uVar21 != 0) {
      if (uVar22 == 0) {
        if (uVar10 == 0 && uVar20 == 0) {
          if (uVar15 == 0x7fff) {
            if (uVar8 != 0 || uVar12 != 0) {
              uVar21 = uVar14 >> 0x12 ^ 1;
              uVar9 = uVar8;
              uVar13 = uVar12;
              goto LAB_0126e1b8;
            }
            goto LAB_0126e2f0;
          }
          goto LAB_0126e0f4;
        }
        uVar21 = ~uVar21;
        if (uVar21 == 0) {
          uVar11 = uVar20 + uVar12;
          uVar10 = uVar8 + uVar10;
          uVar22 = uVar15;
          if (uVar11 < uVar12) {
            uVar10 = uVar10 + 1;
          }
          goto LAB_0126dbd4;
        }
        if (uVar15 != 0x7fff) goto LAB_0126da20;
      }
      else if (uVar15 != 0x7fff) {
        uVar21 = -uVar21;
        uVar10 = uVar10 | 0x8000000000000;
LAB_0126da20:
        if ((int)uVar21 < 0x75) {
          if (0x3f < (int)uVar21) {
            lVar16 = 0;
            if (uVar21 != 0x40) {
              lVar16 = uVar10 << ((ulong)(0x80 - uVar21) & 0x3f);
            }
            uVar11 = (ulong)(lVar16 != 0 || uVar20 != 0) | uVar10 >> ((ulong)(uVar21 - 0x40) & 0x3f)
            ;
            goto LAB_0126da9c;
          }
          uVar18 = uVar10 >> ((ulong)uVar21 & 0x3f);
          uVar11 = uVar10 << ((ulong)(0x40 - uVar21) & 0x3f) | uVar20 >> ((ulong)uVar21 & 0x3f) |
                   (ulong)(uVar20 << ((ulong)(0x40 - uVar21) & 0x3f) != 0);
        }
        else {
          uVar11 = (ulong)(uVar10 != 0 || uVar20 != 0);
LAB_0126da9c:
          uVar18 = 0;
        }
        uVar11 = uVar11 + uVar12;
        uVar10 = uVar18 + uVar8;
        uVar22 = uVar15;
        if (uVar11 < uVar12) {
          uVar10 = uVar10 + 1;
        }
        goto LAB_0126dbd4;
      }
      if (uVar8 != 0 || uVar12 != 0) {
        uVar21 = uVar14 >> 0x12 ^ 1;
        uVar9 = uVar8;
        uVar13 = uVar12;
        goto LAB_0126e1b8;
      }
LAB_0126e1a0:
      uVar8 = 0;
      uVar12 = 0;
      uVar23 = uVar15;
      goto LAB_0126e1b4;
    }
    uVar23 = uVar22 + 1;
    if (1 < (uVar23 & 0x7fff)) {
      if (uVar23 != 0x7fff) {
        uVar8 = uVar8 + uVar10;
        if (uVar12 + uVar20 < uVar20) {
          uVar8 = uVar8 + 1;
        }
        uVar12 = uVar12 + uVar20 >> 1 | uVar8 << 0x3f;
        uVar8 = uVar8 >> 1;
        goto LAB_0126e1b4;
      }
      uVar11 = uVar1 & 0xc00000;
      if (uVar11 != 0) {
        if (uVar11 == 0x400000) {
          if (uVar24 == 0) goto LAB_0126e17c;
          goto LAB_0126dc14;
        }
        if ((uVar11 == 0x800000) && (uVar24 != 0)) goto LAB_0126e168;
LAB_0126e188:
        uVar9 = 0xffffffffffffffff;
        uVar23 = 0x7ffe;
        goto LAB_0126e174;
      }
      goto LAB_0126e17c;
    }
    if (uVar22 != 0) {
      if (uVar22 == 0x7fff) {
        if (uVar10 == 0 && uVar20 == 0) {
          uVar23 = uVar22;
          if (uVar15 != 0x7fff) goto LAB_0126e1b4;
          uVar14 = 0;
LAB_0126db40:
          uVar21 = uVar14;
          if ((uVar8 != 0 || uVar12 != 0) && ((uVar2 & 0x4000000000000) == 0)) {
            uVar21 = 1;
          }
          goto LAB_0126db54;
        }
        uVar21 = (uVar4 & 0xffff) >> 0xf ^ 1;
        uVar14 = uVar21;
        if (uVar15 == 0x7fff) goto LAB_0126db40;
LAB_0126db58:
        uVar9 = uVar10;
        uVar13 = uVar20;
        if (uVar8 != 0 || uVar12 != 0) {
          uVar23 = uVar25 & 0x1fffffffffffffff | uVar11 << 0x3d;
          uVar11 = uVar27 & 0xffffffffffff;
          if (((uVar27 & 0xffffffffffff) >> 0x2f != 0) && (uVar3 >> 0x32 == 0)) {
            uVar23 = uVar28 & 0x1fffffffffffffff | uVar18 << 0x3d;
            uVar11 = uVar3 >> 3;
          }
          goto LAB_0126df98;
        }
      }
      else {
        uVar21 = 0;
        uVar14 = 0;
        if (uVar15 == 0x7fff) goto LAB_0126db40;
LAB_0126db54:
        uVar9 = uVar8;
        uVar13 = uVar12;
        if (uVar10 != 0 || uVar20 != 0) goto LAB_0126db58;
      }
LAB_0126e158:
      uVar15 = 0x7fff;
      goto LAB_0126e1b8;
    }
    if ((uVar10 != 0 || uVar20 != 0) && (uVar6 = uVar10, uVar17 = uVar20, uVar8 != 0 || uVar12 != 0)
       ) {
      uVar12 = uVar12 + uVar20;
      uVar6 = uVar8 + uVar10;
      if (uVar12 < uVar20) {
        uVar6 = uVar6 + 1;
      }
      uVar17 = uVar12;
      if ((uVar6 >> 0x33 & 1) != 0) {
        uVar8 = uVar6 & 0xfff7ffffffffffff;
        uVar23 = 1;
        goto LAB_0126e1b4;
      }
    }
LAB_0126e120:
    uVar15 = 0;
    uVar21 = 0;
    uVar13 = uVar17;
    uVar9 = uVar6;
    if (uVar6 == 0 && uVar17 == 0) {
      uVar9 = 0;
      uVar13 = 0;
    }
    bVar5 = uVar6 != 0 || uVar17 != 0;
  }
  else {
    if ((int)uVar21 < 1) {
      if (uVar21 == 0) {
        if (1 < (uVar22 + 1 & 0x7fff)) {
          uVar11 = uVar20 + uVar28 * -8;
          uVar18 = (uVar10 - uVar8) - (ulong)(uVar20 < uVar11);
          if ((uVar18 >> 0x33 & 1) == 0) {
            if (uVar18 == 0 && uVar11 == 0) goto LAB_0126dfe0;
          }
          else {
            uVar11 = uVar12 + uVar25 * -8;
            uVar18 = (uVar8 - uVar10) - (ulong)(uVar12 < uVar11);
            uVar24 = uVar19;
          }
          goto LAB_0126e004;
        }
        if (uVar22 == 0) {
          if (uVar10 == 0 && uVar20 == 0) {
            uVar24 = uVar19;
            if (uVar8 == 0 && uVar12 == 0) {
LAB_0126dfe0:
              uVar6 = 0;
              uVar17 = 0;
              uVar24 = (ulong)((uVar1 & 0xc00000) == 0x800000);
            }
          }
          else {
            uVar6 = uVar10;
            uVar17 = uVar20;
            if (uVar8 != 0 || uVar12 != 0) {
              uVar17 = uVar20 + uVar28 * -8;
              uVar6 = (uVar10 - uVar8) - (ulong)(uVar20 < uVar17);
              if ((uVar6 >> 0x33 & 1) == 0) {
                if (uVar6 == 0 && uVar17 == 0) goto LAB_0126dfe0;
              }
              else {
                uVar17 = uVar12 + uVar25 * -8;
                uVar6 = (uVar8 - uVar10) - (ulong)(uVar12 < uVar17);
                uVar24 = uVar19;
              }
            }
          }
          goto LAB_0126e120;
        }
        if (uVar22 != 0x7fff) {
          uVar21 = 0;
          uVar14 = 0;
          if (uVar15 == 0x7fff) goto LAB_0126df2c;
LAB_0126df3c:
          if (uVar10 == 0 && uVar20 == 0) goto LAB_0126df40;
LAB_0126df74:
          if (uVar8 == 0 && uVar12 == 0) goto LAB_0126e158;
          uVar23 = uVar25 & 0x1fffffffffffffff | uVar11 << 0x3d;
          uVar11 = uVar27 & 0xffffffffffff;
          if (((uVar27 & 0xffffffffffff) >> 0x2f != 0) && (uVar3 >> 0x32 == 0)) {
            uVar23 = uVar28 & 0x1fffffffffffffff | uVar18 << 0x3d;
            uVar11 = uVar3 >> 3;
            uVar24 = uVar19;
          }
LAB_0126df98:
          uVar9 = uVar23 >> 0x3d | uVar11 << 3;
          uVar13 = uVar23 << 3;
          goto LAB_0126e158;
        }
        if (uVar10 != 0 || uVar20 != 0) {
          uVar21 = (uVar4 & 0xffff) >> 0xf ^ 1;
          uVar14 = uVar21;
          if (uVar15 == 0x7fff) goto LAB_0126df2c;
          goto LAB_0126df74;
        }
        uVar21 = 0;
        uVar14 = 0;
        if (uVar15 == 0x7fff) {
LAB_0126df2c:
          uVar21 = uVar14;
          if ((uVar8 != 0 || uVar12 != 0) && ((uVar2 & 0x4000000000000) == 0)) {
            uVar21 = 1;
          }
          goto LAB_0126df3c;
        }
LAB_0126df40:
        uVar9 = uVar8;
        uVar24 = uVar19;
        if (uVar8 == 0 && uVar12 == 0) {
          uVar24 = 0;
          uVar9 = 0x7ffffffffffff;
        }
        uVar15 = 0x7fff;
        uVar13 = uVar12;
        if (uVar8 == 0 && uVar12 == 0) {
          uVar13 = 0xfffffffffffffff8;
        }
        bVar5 = false;
        if (uVar8 == 0 && uVar12 == 0) {
          uVar21 = 1;
        }
        goto LAB_0126e1bc;
      }
      if (uVar22 != 0) {
        if (uVar15 == 0x7fff) goto LAB_0126ddc8;
        uVar21 = -uVar21;
        uVar10 = uVar10 | 0x8000000000000;
LAB_0126ddf0:
        if ((int)uVar21 < 0x75) {
          if (0x3f < (int)uVar21) {
            lVar16 = 0;
            if (uVar21 != 0x40) {
              lVar16 = uVar10 << ((ulong)(0x80 - uVar21) & 0x3f);
            }
            uVar11 = (ulong)(lVar16 != 0 || uVar20 != 0) | uVar10 >> ((ulong)(uVar21 - 0x40) & 0x3f)
            ;
            goto LAB_0126de6c;
          }
          uVar18 = uVar10 >> ((ulong)uVar21 & 0x3f);
          uVar11 = uVar10 << ((ulong)(0x40 - uVar21) & 0x3f) | uVar20 >> ((ulong)uVar21 & 0x3f) |
                   (ulong)(uVar20 << ((ulong)(0x40 - uVar21) & 0x3f) != 0);
        }
        else {
          uVar11 = (ulong)(uVar10 != 0 || uVar20 != 0);
LAB_0126de6c:
          uVar18 = 0;
        }
        uVar11 = uVar12 - uVar11;
        uVar8 = (uVar8 - uVar18) - (ulong)(uVar12 < uVar11);
        goto LAB_0126dff8;
      }
      if (uVar10 == 0 && uVar20 == 0) {
        uVar24 = uVar19;
        if (uVar15 != 0x7fff) goto LAB_0126e0f4;
        if (uVar8 == 0 && uVar12 == 0) goto LAB_0126e2f0;
        uVar21 = uVar14 >> 0x12 ^ 1;
        uVar9 = uVar8;
        uVar13 = uVar12;
      }
      else {
        uVar21 = ~uVar21;
        if (uVar21 == 0) {
          uVar11 = uVar12 + uVar25 * -8;
          uVar8 = (uVar8 - uVar10) - (ulong)(uVar12 < uVar11);
          goto LAB_0126dff8;
        }
        if (uVar15 != 0x7fff) goto LAB_0126ddf0;
LAB_0126ddc8:
        uVar24 = uVar19;
        if (uVar8 == 0 && uVar12 == 0) goto LAB_0126e1a0;
        uVar21 = uVar14 >> 0x12 ^ 1;
        uVar9 = uVar8;
        uVar13 = uVar12;
      }
    }
    else {
      uVar19 = uVar24;
      if (uVar15 == 0) {
        if (uVar8 == 0 && uVar12 == 0) goto LAB_0126dc5c;
        uVar21 = uVar21 - 1;
        if (uVar21 != 0) goto LAB_0126dc94;
        uVar11 = uVar20 + uVar28 * -8;
        uVar8 = (uVar10 - uVar8) - (ulong)(uVar20 < uVar11);
        uVar15 = uVar22;
      }
      else {
        uVar8 = uVar8 | 0x8000000000000;
LAB_0126dc94:
        if (uVar22 == 0x7fff) goto LAB_0126dc9c;
        if ((int)uVar21 < 0x75) {
          if (0x3f < (int)uVar21) {
            lVar16 = 0;
            if (uVar21 != 0x40) {
              lVar16 = uVar8 << ((ulong)(0x80 - uVar21) & 0x3f);
            }
            uVar11 = (ulong)(lVar16 != 0 || uVar12 != 0) | uVar8 >> ((ulong)(uVar21 - 0x40) & 0x3f);
            goto LAB_0126dd30;
          }
          uVar18 = uVar8 >> ((ulong)uVar21 & 0x3f);
          uVar11 = uVar8 << ((ulong)(0x40 - uVar21) & 0x3f) | uVar12 >> ((ulong)uVar21 & 0x3f) |
                   (ulong)(uVar12 << ((ulong)(0x40 - uVar21) & 0x3f) != 0);
        }
        else {
          uVar11 = (ulong)(uVar8 != 0 || uVar12 != 0);
LAB_0126dd30:
          uVar18 = 0;
        }
        uVar11 = uVar20 - uVar11;
        uVar8 = (uVar10 - uVar18) - (ulong)(uVar20 < uVar11);
        uVar15 = uVar22;
      }
LAB_0126dff8:
      uVar12 = uVar11;
      uVar23 = uVar15;
      uVar24 = uVar19;
      if ((uVar8 >> 0x33 & 1) != 0) {
        uVar18 = uVar8 & 0x7ffffffffffff;
        uVar22 = uVar15;
LAB_0126e004:
        iVar7 = (int)LZCOUNT(uVar18);
        if (uVar18 == 0) {
          iVar7 = (int)LZCOUNT(uVar11) + 0x40;
        }
        uVar21 = iVar7 - 0xc;
        if ((int)uVar21 < 0x40) {
          uVar12 = uVar11 << ((ulong)uVar21 & 0x3f);
          uVar8 = uVar11 >> ((ulong)(0x4c - iVar7) & 0x3f) | uVar18 << ((ulong)uVar21 & 0x3f);
        }
        else {
          uVar12 = 0;
          uVar8 = uVar11 << ((ulong)(iVar7 - 0x4c) & 0x3f);
        }
        if ((long)uVar22 <= (long)(int)uVar21) {
          iVar7 = uVar21 - (int)uVar22;
          uVar21 = iVar7 + 1;
          if ((int)uVar21 < 0x40) {
            uVar6 = uVar8 >> ((ulong)uVar21 & 0x3f);
            uVar17 = uVar12 >> ((ulong)uVar21 & 0x3f) | uVar8 << ((ulong)(0x40 - uVar21) & 0x3f) |
                     (ulong)(uVar12 << ((ulong)(0x40 - uVar21) & 0x3f) != 0);
          }
          else {
            lVar16 = 0;
            if (uVar21 != 0x40) {
              lVar16 = uVar8 << ((ulong)(0x80 - uVar21) & 0x3f);
            }
            uVar6 = 0;
            uVar17 = (ulong)(lVar16 != 0 || uVar12 != 0) | uVar8 >> ((ulong)(iVar7 - 0x3f) & 0x3f);
          }
          goto LAB_0126e120;
        }
        uVar8 = uVar8 & 0xfff7ffffffffffff;
        uVar23 = uVar22 - (long)(int)uVar21;
      }
LAB_0126e0f4:
      uVar6 = uVar8;
      uVar17 = uVar12;
      if (uVar23 == 0) goto LAB_0126e120;
LAB_0126e1b4:
      uVar21 = 0;
      uVar9 = uVar8;
      uVar13 = uVar12;
      uVar15 = uVar23;
    }
LAB_0126e1b8:
    bVar5 = false;
  }
LAB_0126e1bc:
  uVar11 = uVar13;
  if ((uVar13 & 7) == 0) {
    if ((!bVar5) || ((uVar21 >> 4 == 0 && (((uint)uVar1 >> 0xb & 1) == 0)))) goto LAB_0126e224;
  }
  else {
    uVar18 = uVar1 & 0xc00000;
    uVar21 = uVar21 | 0x10;
    if (uVar18 == 0x400000) {
      if (uVar24 == 0) {
LAB_0126e200:
        uVar11 = uVar13 + 8;
LAB_0126e204:
        if (uVar11 < uVar13) {
          uVar9 = uVar9 + 1;
        }
      }
    }
    else if (uVar18 == 0x800000) {
      if (uVar24 != 0) goto LAB_0126e200;
    }
    else if ((uVar18 == 0) && ((uVar13 & 0xf) != 4)) {
      uVar11 = uVar13 + 4;
      goto LAB_0126e204;
    }
    uVar13 = uVar11;
    if (!bVar5) goto LAB_0126e224;
  }
  uVar21 = uVar21 | 8;
  uVar11 = uVar13;
LAB_0126e224:
  if ((uVar9 >> 0x33 & 1) != 0) {
    uVar15 = uVar15 + 1;
    uVar9 = uVar9 & 0xfff7ffffffffffff;
    if (uVar15 == 0x7fff) {
      uVar1 = uVar1 & 0xc00000;
      uVar9 = 0;
      if (uVar1 != 0) {
        if (uVar1 == 0x400000) {
          uVar9 = -(ulong)(uVar24 != 0);
          if (uVar24 != 0) {
            uVar15 = 0x7ffe;
          }
        }
        else if ((uVar24 == 0) || (uVar1 != 0x800000)) {
          uVar9 = 0xffffffffffffffff;
          uVar15 = 0x7ffe;
        }
      }
      uVar21 = uVar21 | 0x14;
      uVar11 = uVar9;
    }
  }
  uVar18 = uVar11 >> 3 | uVar9 << 0x3d;
  uVar9 = uVar9 >> 3;
  uVar11 = uVar9;
  if ((uVar15 == 0x7fff) && (uVar11 = uVar9 | 0x800000000000, uVar18 == 0 && uVar9 == 0)) {
    uVar11 = 0;
  }
  if (uVar21 != 0) {
    __sfp_handle_exceptions();
  }
  auVar26._8_8_ = uVar11 & 0xffffffffffff | (uVar15 & 0x7fff) << 0x30 | uVar24 << 0x3f;
  auVar26._0_8_ = uVar18;
  return auVar26;
}

