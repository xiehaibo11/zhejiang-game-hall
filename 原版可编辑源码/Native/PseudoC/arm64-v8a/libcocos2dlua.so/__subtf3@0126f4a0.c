
undefined1  [16] __subtf3(undefined1 param_1 [16],undefined1 param_2 [16])

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar28;
  undefined1 auVar27 [16];
  ulong uVar29;
  
  uVar29 = param_2._0_8_;
  uVar28 = param_1._8_8_;
  uVar26 = param_1._0_8_;
  uVar1 = fpcr;
  uVar25 = -((long)uVar28 >> 0x3f);
  uVar15 = param_2._14_2_ & 0x7fff;
  uVar22 = param_1._14_2_ & 0x7fff;
  uVar2 = param_2._8_8_ << 3;
  uVar3 = uVar2 & 0x7fffffffffff8;
  uVar16 = (ulong)(ushort)uVar15;
  uVar12 = uVar26 >> 0x3d;
  uVar11 = (uVar28 & 0xffffffffffff) << 3 | uVar12;
  uVar19 = uVar29 >> 0x3d;
  uVar9 = uVar3 | uVar19;
  uVar23 = (ulong)(ushort)uVar22;
  uVar21 = uVar26 * 8;
  uVar13 = uVar29 * 8;
  if ((uVar16 == 0x7fff) && (uVar9 != 0 || uVar13 != 0)) {
    bVar4 = param_2[0xf] >> 7;
  }
  else {
    bVar4 = param_2[0xf] >> 7 ^ 1;
  }
  uVar20 = (ulong)bVar4;
  uVar22 = uVar22 - uVar15;
  uVar5 = param_1._12_4_;
  uVar15 = (uint)(uVar3 >> 0x20);
  uVar14 = uVar21;
  uVar10 = uVar11;
  uVar7 = uVar9;
  uVar18 = uVar13;
  uVar24 = uVar16;
  if (-uVar20 == (long)uVar28 >> 0x3f) {
    if (0 < (int)uVar22) {
      if (uVar16 == 0) {
        if (uVar9 == 0 && uVar13 == 0) {
LAB_0126f8f0:
          uVar9 = uVar11;
          uVar13 = uVar21;
          uVar24 = uVar23;
          if (uVar23 == 0x7fff) {
            uVar16 = uVar23;
            if (uVar11 == 0 && uVar21 == 0) {
LAB_0126ff84:
              uVar22 = 0;
              uVar10 = 0;
              uVar14 = 0;
              goto LAB_0126fe4c;
            }
LAB_0126f938:
            uVar22 = (uVar5 & 0xffff) >> 0xf ^ 1;
            uVar16 = uVar23;
            goto LAB_0126fe4c;
          }
          goto LAB_0126fd88;
        }
        uVar22 = uVar22 - 1;
        if (uVar22 != 0) goto LAB_0126f580;
        uVar12 = uVar13 + uVar21;
        uVar11 = uVar9 + uVar11;
        if (uVar12 < uVar21) {
          uVar11 = uVar11 + 1;
        }
      }
      else {
        uVar9 = uVar9 | 0x8000000000000;
LAB_0126f580:
        if (uVar23 == 0x7fff) {
LAB_0126f930:
          uVar16 = uVar23;
          if (uVar11 != 0 || uVar21 != 0) goto LAB_0126f938;
          goto LAB_0126fe34;
        }
        if ((int)uVar22 < 0x75) {
          if (0x3f < (int)uVar22) {
            lVar17 = 0;
            if (uVar22 != 0x40) {
              lVar17 = uVar9 << ((ulong)(0x80 - uVar22) & 0x3f);
            }
            uVar12 = (ulong)(lVar17 != 0 || uVar13 != 0) | uVar9 >> ((ulong)(uVar22 - 0x40) & 0x3f);
            goto LAB_0126f604;
          }
          uVar19 = uVar9 >> ((ulong)uVar22 & 0x3f);
          uVar12 = uVar9 << ((ulong)(0x40 - uVar22) & 0x3f) | uVar13 >> ((ulong)uVar22 & 0x3f) |
                   (ulong)(uVar13 << ((ulong)(0x40 - uVar22) & 0x3f) != 0);
        }
        else {
          uVar12 = (ulong)(uVar9 != 0 || uVar13 != 0);
LAB_0126f604:
          uVar19 = 0;
        }
        uVar12 = uVar12 + uVar21;
        uVar11 = uVar19 + uVar11;
        if (uVar12 < uVar21) {
          uVar11 = uVar11 + 1;
        }
      }
LAB_0126f868:
      uVar9 = uVar11;
      uVar13 = uVar12;
      uVar24 = uVar23;
      if ((uVar11 >> 0x33 & 1) == 0) goto LAB_0126fd88;
      uVar24 = uVar23 + 1;
      if (uVar24 != 0x7fff) {
        uVar9 = (uVar11 & 0xfff7ffffffffffff) >> 1;
        uVar13 = uVar12 & 1 | uVar12 >> 1 | uVar11 << 0x3f;
        goto LAB_0126fe48;
      }
      uVar12 = uVar1 & 0xc00000;
      if (uVar12 == 0) {
LAB_0126fe10:
        uVar10 = 0;
      }
      else {
        if (uVar12 == 0x400000) {
          if (uVar25 != 0) {
LAB_0126f8a8:
            uVar22 = 0x14;
            uVar10 = 0xffffffffffffffff;
            uVar14 = 0xffffffffffffffff;
            uVar16 = 0x7ffe;
            uVar25 = 1;
            goto LAB_0126fe4c;
          }
          goto LAB_0126fe10;
        }
        if ((uVar12 != 0x800000) || (uVar25 == 0)) goto LAB_0126fe1c;
LAB_0126fdfc:
        uVar10 = 0;
        uVar25 = 1;
      }
LAB_0126fe08:
      uVar22 = 0x14;
      uVar14 = uVar10;
      uVar16 = uVar24;
      goto LAB_0126fe4c;
    }
    if (uVar22 != 0) {
      if (uVar23 == 0) {
        if (uVar11 == 0 && uVar21 == 0) {
          if (uVar16 == 0x7fff) {
            if (uVar9 != 0 || uVar13 != 0) {
              uVar22 = uVar15 >> 0x12 ^ 1;
              uVar10 = uVar9;
              uVar14 = uVar13;
              goto LAB_0126fe4c;
            }
            goto LAB_0126ff84;
          }
          goto LAB_0126fd88;
        }
        uVar22 = ~uVar22;
        if (uVar22 == 0) {
          uVar12 = uVar21 + uVar13;
          uVar11 = uVar9 + uVar11;
          uVar23 = uVar16;
          if (uVar12 < uVar13) {
            uVar11 = uVar11 + 1;
          }
          goto LAB_0126f868;
        }
        if (uVar16 != 0x7fff) goto LAB_0126f6b4;
      }
      else if (uVar16 != 0x7fff) {
        uVar22 = -uVar22;
        uVar11 = uVar11 | 0x8000000000000;
LAB_0126f6b4:
        if ((int)uVar22 < 0x75) {
          if (0x3f < (int)uVar22) {
            lVar17 = 0;
            if (uVar22 != 0x40) {
              lVar17 = uVar11 << ((ulong)(0x80 - uVar22) & 0x3f);
            }
            uVar12 = (ulong)(lVar17 != 0 || uVar21 != 0) | uVar11 >> ((ulong)(uVar22 - 0x40) & 0x3f)
            ;
            goto LAB_0126f730;
          }
          uVar19 = uVar11 >> ((ulong)uVar22 & 0x3f);
          uVar12 = uVar11 << ((ulong)(0x40 - uVar22) & 0x3f) | uVar21 >> ((ulong)uVar22 & 0x3f) |
                   (ulong)(uVar21 << ((ulong)(0x40 - uVar22) & 0x3f) != 0);
        }
        else {
          uVar12 = (ulong)(uVar11 != 0 || uVar21 != 0);
LAB_0126f730:
          uVar19 = 0;
        }
        uVar12 = uVar12 + uVar13;
        uVar11 = uVar19 + uVar9;
        uVar23 = uVar16;
        if (uVar12 < uVar13) {
          uVar11 = uVar11 + 1;
        }
        goto LAB_0126f868;
      }
      if (uVar9 != 0 || uVar13 != 0) {
        uVar22 = uVar15 >> 0x12 ^ 1;
        uVar10 = uVar9;
        uVar14 = uVar13;
        goto LAB_0126fe4c;
      }
LAB_0126fe34:
      uVar9 = 0;
      uVar13 = 0;
      uVar24 = uVar16;
      goto LAB_0126fe48;
    }
    uVar24 = uVar23 + 1;
    if (1 < (uVar24 & 0x7fff)) {
      if (uVar24 != 0x7fff) {
        uVar9 = uVar9 + uVar11;
        if (uVar13 + uVar21 < uVar21) {
          uVar9 = uVar9 + 1;
        }
        uVar13 = uVar13 + uVar21 >> 1 | uVar9 << 0x3f;
        uVar9 = uVar9 >> 1;
        goto LAB_0126fe48;
      }
      uVar12 = uVar1 & 0xc00000;
      if (uVar12 != 0) {
        if (uVar12 == 0x400000) {
          if (uVar25 == 0) goto LAB_0126fe10;
          goto LAB_0126f8a8;
        }
        if ((uVar12 == 0x800000) && (uVar25 != 0)) goto LAB_0126fdfc;
LAB_0126fe1c:
        uVar10 = 0xffffffffffffffff;
        uVar24 = 0x7ffe;
        goto LAB_0126fe08;
      }
      goto LAB_0126fe10;
    }
    if (uVar23 != 0) {
      if (uVar23 == 0x7fff) {
        if (uVar11 == 0 && uVar21 == 0) {
          uVar24 = uVar23;
          if (uVar16 != 0x7fff) goto LAB_0126fe48;
          uVar15 = 0;
LAB_0126f7d4:
          uVar22 = uVar15;
          if ((uVar9 != 0 || uVar13 != 0) && ((uVar2 & 0x4000000000000) == 0)) {
            uVar22 = 1;
          }
          goto LAB_0126f7e8;
        }
        uVar22 = (uVar5 & 0xffff) >> 0xf ^ 1;
        uVar15 = uVar22;
        if (uVar16 == 0x7fff) goto LAB_0126f7d4;
LAB_0126f7ec:
        uVar10 = uVar11;
        uVar14 = uVar21;
        if (uVar9 != 0 || uVar13 != 0) {
          uVar16 = uVar26 & 0x1fffffffffffffff | uVar12 << 0x3d;
          uVar12 = uVar28 & 0xffffffffffff;
          if (((uVar28 & 0xffffffffffff) >> 0x2f != 0) && (uVar3 >> 0x32 == 0)) {
            uVar16 = uVar29 & 0x1fffffffffffffff | uVar19 << 0x3d;
            uVar12 = uVar3 >> 3;
          }
          goto LAB_0126fc2c;
        }
      }
      else {
        uVar22 = 0;
        uVar15 = 0;
        if (uVar16 == 0x7fff) goto LAB_0126f7d4;
LAB_0126f7e8:
        uVar10 = uVar9;
        uVar14 = uVar13;
        if (uVar11 != 0 || uVar21 != 0) goto LAB_0126f7ec;
      }
LAB_0126fdec:
      uVar16 = 0x7fff;
      goto LAB_0126fe4c;
    }
    if ((uVar11 != 0 || uVar21 != 0) && (uVar7 = uVar11, uVar18 = uVar21, uVar9 != 0 || uVar13 != 0)
       ) {
      uVar13 = uVar13 + uVar21;
      uVar7 = uVar9 + uVar11;
      if (uVar13 < uVar21) {
        uVar7 = uVar7 + 1;
      }
      uVar18 = uVar13;
      if ((uVar7 >> 0x33 & 1) != 0) {
        uVar9 = uVar7 & 0xfff7ffffffffffff;
        uVar24 = 1;
        goto LAB_0126fe48;
      }
    }
LAB_0126fdb4:
    uVar16 = 0;
    uVar22 = 0;
    uVar14 = uVar18;
    uVar10 = uVar7;
    if (uVar7 == 0 && uVar18 == 0) {
      uVar10 = 0;
      uVar14 = 0;
    }
    bVar6 = uVar7 != 0 || uVar18 != 0;
  }
  else {
    if ((int)uVar22 < 1) {
      if (uVar22 == 0) {
        if (1 < (uVar23 + 1 & 0x7fff)) {
          uVar12 = uVar21 + uVar29 * -8;
          uVar19 = (uVar11 - uVar9) - (ulong)(uVar21 < uVar12);
          if ((uVar19 >> 0x33 & 1) == 0) {
            uVar20 = uVar25;
            if (uVar19 == 0 && uVar12 == 0) goto LAB_0126fc70;
          }
          else {
            uVar12 = uVar13 + uVar26 * -8;
            uVar19 = (uVar9 - uVar11) - (ulong)(uVar13 < uVar12);
          }
          goto LAB_0126fc98;
        }
        if (uVar23 == 0) {
          if (uVar11 == 0 && uVar21 == 0) {
            uVar25 = uVar20;
            if (uVar9 == 0 && uVar13 == 0) {
LAB_0126fc70:
              uVar7 = 0;
              uVar18 = 0;
              uVar25 = (ulong)((uVar1 & 0xc00000) == 0x800000);
            }
          }
          else {
            uVar7 = uVar11;
            uVar18 = uVar21;
            if (uVar9 != 0 || uVar13 != 0) {
              uVar18 = uVar21 + uVar29 * -8;
              uVar7 = (uVar11 - uVar9) - (ulong)(uVar21 < uVar18);
              if ((uVar7 >> 0x33 & 1) == 0) {
                if (uVar7 == 0 && uVar18 == 0) goto LAB_0126fc70;
              }
              else {
                uVar18 = uVar13 + uVar26 * -8;
                uVar7 = (uVar9 - uVar11) - (ulong)(uVar13 < uVar18);
                uVar25 = uVar20;
              }
            }
          }
          goto LAB_0126fdb4;
        }
        if (uVar23 != 0x7fff) {
          uVar22 = 0;
          uVar15 = 0;
          if (uVar16 == 0x7fff) goto LAB_0126fbc0;
LAB_0126fbd0:
          if (uVar11 == 0 && uVar21 == 0) goto LAB_0126fbd4;
LAB_0126fc08:
          if (uVar9 == 0 && uVar13 == 0) goto LAB_0126fdec;
          uVar16 = uVar26 & 0x1fffffffffffffff | uVar12 << 0x3d;
          uVar12 = uVar28 & 0xffffffffffff;
          if (((uVar28 & 0xffffffffffff) >> 0x2f != 0) && (uVar3 >> 0x32 == 0)) {
            uVar16 = uVar29 & 0x1fffffffffffffff | uVar19 << 0x3d;
            uVar12 = uVar3 >> 3;
            uVar25 = uVar20;
          }
LAB_0126fc2c:
          uVar10 = uVar16 >> 0x3d | uVar12 << 3;
          uVar14 = uVar16 << 3;
          goto LAB_0126fdec;
        }
        if (uVar11 != 0 || uVar21 != 0) {
          uVar22 = (uVar5 & 0xffff) >> 0xf ^ 1;
          uVar15 = uVar22;
          if (uVar16 == 0x7fff) goto LAB_0126fbc0;
          goto LAB_0126fc08;
        }
        uVar22 = 0;
        uVar15 = 0;
        if (uVar16 == 0x7fff) {
LAB_0126fbc0:
          uVar22 = uVar15;
          if ((uVar9 != 0 || uVar13 != 0) && ((uVar2 & 0x4000000000000) == 0)) {
            uVar22 = 1;
          }
          goto LAB_0126fbd0;
        }
LAB_0126fbd4:
        uVar10 = uVar9;
        uVar25 = uVar20;
        if (uVar9 == 0 && uVar13 == 0) {
          uVar25 = 0;
          uVar10 = 0x7ffffffffffff;
        }
        uVar16 = 0x7fff;
        uVar14 = uVar13;
        if (uVar9 == 0 && uVar13 == 0) {
          uVar14 = 0xfffffffffffffff8;
        }
        bVar6 = false;
        if (uVar9 == 0 && uVar13 == 0) {
          uVar22 = 1;
        }
        goto LAB_0126fe50;
      }
      if (uVar23 != 0) {
        if (uVar16 == 0x7fff) goto LAB_0126fa60;
        uVar22 = -uVar22;
        uVar11 = uVar11 | 0x8000000000000;
LAB_0126fa88:
        if ((int)uVar22 < 0x75) {
          if (0x3f < (int)uVar22) {
            lVar17 = 0;
            if (uVar22 != 0x40) {
              lVar17 = uVar11 << ((ulong)(0x80 - uVar22) & 0x3f);
            }
            uVar12 = (ulong)(lVar17 != 0 || uVar21 != 0) | uVar11 >> ((ulong)(uVar22 - 0x40) & 0x3f)
            ;
            goto LAB_0126fb04;
          }
          uVar19 = uVar11 >> ((ulong)uVar22 & 0x3f);
          uVar12 = uVar11 << ((ulong)(0x40 - uVar22) & 0x3f) | uVar21 >> ((ulong)uVar22 & 0x3f) |
                   (ulong)(uVar21 << ((ulong)(0x40 - uVar22) & 0x3f) != 0);
        }
        else {
          uVar12 = (ulong)(uVar11 != 0 || uVar21 != 0);
LAB_0126fb04:
          uVar19 = 0;
        }
        uVar12 = uVar13 - uVar12;
        uVar9 = (uVar9 - uVar19) - (ulong)(uVar13 < uVar12);
        uVar25 = uVar20;
        uVar23 = uVar16;
        goto LAB_0126fc88;
      }
      if (uVar11 == 0 && uVar21 == 0) {
        uVar25 = uVar20;
        if (uVar16 != 0x7fff) goto LAB_0126fd88;
        if (uVar9 == 0 && uVar13 == 0) goto LAB_0126ff84;
        uVar22 = uVar15 >> 0x12 ^ 1;
        uVar10 = uVar9;
        uVar14 = uVar13;
      }
      else {
        uVar22 = ~uVar22;
        if (uVar22 == 0) {
          uVar12 = uVar13 + uVar26 * -8;
          uVar9 = (uVar9 - uVar11) - (ulong)(uVar13 < uVar12);
          uVar25 = uVar20;
          uVar23 = uVar16;
          goto LAB_0126fc88;
        }
        if (uVar16 != 0x7fff) goto LAB_0126fa88;
LAB_0126fa60:
        uVar25 = uVar20;
        if (uVar9 == 0 && uVar13 == 0) goto LAB_0126fe34;
        uVar22 = uVar15 >> 0x12 ^ 1;
        uVar10 = uVar9;
        uVar14 = uVar13;
      }
    }
    else {
      if (uVar16 == 0) {
        if (uVar9 == 0 && uVar13 == 0) goto LAB_0126f8f0;
        uVar22 = uVar22 - 1;
        if (uVar22 != 0) goto LAB_0126f928;
        uVar12 = uVar21 + uVar29 * -8;
        uVar9 = (uVar11 - uVar9) - (ulong)(uVar21 < uVar12);
      }
      else {
        uVar9 = uVar9 | 0x8000000000000;
LAB_0126f928:
        if (uVar23 == 0x7fff) goto LAB_0126f930;
        if ((int)uVar22 < 0x75) {
          if (0x3f < (int)uVar22) {
            lVar17 = 0;
            if (uVar22 != 0x40) {
              lVar17 = uVar9 << ((ulong)(0x80 - uVar22) & 0x3f);
            }
            uVar12 = (ulong)(lVar17 != 0 || uVar13 != 0) | uVar9 >> ((ulong)(uVar22 - 0x40) & 0x3f);
            goto LAB_0126f9c4;
          }
          uVar19 = uVar9 >> ((ulong)uVar22 & 0x3f);
          uVar12 = uVar9 << ((ulong)(0x40 - uVar22) & 0x3f) | uVar13 >> ((ulong)uVar22 & 0x3f) |
                   (ulong)(uVar13 << ((ulong)(0x40 - uVar22) & 0x3f) != 0);
        }
        else {
          uVar12 = (ulong)(uVar9 != 0 || uVar13 != 0);
LAB_0126f9c4:
          uVar19 = 0;
        }
        uVar12 = uVar21 - uVar12;
        uVar9 = (uVar11 - uVar19) - (ulong)(uVar21 < uVar12);
      }
LAB_0126fc88:
      uVar13 = uVar12;
      uVar24 = uVar23;
      if ((uVar9 >> 0x33 & 1) != 0) {
        uVar19 = uVar9 & 0x7ffffffffffff;
        uVar20 = uVar25;
LAB_0126fc98:
        iVar8 = (int)LZCOUNT(uVar19);
        if (uVar19 == 0) {
          iVar8 = (int)LZCOUNT(uVar12) + 0x40;
        }
        uVar22 = iVar8 - 0xc;
        if ((int)uVar22 < 0x40) {
          uVar13 = uVar12 << ((ulong)uVar22 & 0x3f);
          uVar9 = uVar12 >> ((ulong)(0x4c - iVar8) & 0x3f) | uVar19 << ((ulong)uVar22 & 0x3f);
        }
        else {
          uVar13 = 0;
          uVar9 = uVar12 << ((ulong)(iVar8 - 0x4c) & 0x3f);
        }
        uVar25 = uVar20;
        if ((long)uVar23 <= (long)(int)uVar22) {
          iVar8 = uVar22 - (int)uVar23;
          uVar22 = iVar8 + 1;
          if ((int)uVar22 < 0x40) {
            uVar7 = uVar9 >> ((ulong)uVar22 & 0x3f);
            uVar18 = uVar13 >> ((ulong)uVar22 & 0x3f) | uVar9 << ((ulong)(0x40 - uVar22) & 0x3f) |
                     (ulong)(uVar13 << ((ulong)(0x40 - uVar22) & 0x3f) != 0);
          }
          else {
            lVar17 = 0;
            if (uVar22 != 0x40) {
              lVar17 = uVar9 << ((ulong)(0x80 - uVar22) & 0x3f);
            }
            uVar7 = 0;
            uVar18 = (ulong)(lVar17 != 0 || uVar13 != 0) | uVar9 >> ((ulong)(iVar8 - 0x3f) & 0x3f);
          }
          goto LAB_0126fdb4;
        }
        uVar9 = uVar9 & 0xfff7ffffffffffff;
        uVar24 = uVar23 - (long)(int)uVar22;
      }
LAB_0126fd88:
      uVar7 = uVar9;
      uVar18 = uVar13;
      if (uVar24 == 0) goto LAB_0126fdb4;
LAB_0126fe48:
      uVar22 = 0;
      uVar10 = uVar9;
      uVar14 = uVar13;
      uVar16 = uVar24;
    }
LAB_0126fe4c:
    bVar6 = false;
  }
LAB_0126fe50:
  uVar12 = uVar14;
  if ((uVar14 & 7) == 0) {
    if ((!bVar6) || ((uVar22 >> 4 == 0 && (((uint)uVar1 >> 0xb & 1) == 0)))) goto LAB_0126feb8;
  }
  else {
    uVar19 = uVar1 & 0xc00000;
    uVar22 = uVar22 | 0x10;
    if (uVar19 == 0x400000) {
      if (uVar25 == 0) {
LAB_0126fe94:
        uVar12 = uVar14 + 8;
LAB_0126fe98:
        if (uVar12 < uVar14) {
          uVar10 = uVar10 + 1;
        }
      }
    }
    else if (uVar19 == 0x800000) {
      if (uVar25 != 0) goto LAB_0126fe94;
    }
    else if ((uVar19 == 0) && ((uVar14 & 0xf) != 4)) {
      uVar12 = uVar14 + 4;
      goto LAB_0126fe98;
    }
    uVar14 = uVar12;
    if (!bVar6) goto LAB_0126feb8;
  }
  uVar22 = uVar22 | 8;
  uVar12 = uVar14;
LAB_0126feb8:
  if ((uVar10 >> 0x33 & 1) != 0) {
    uVar16 = uVar16 + 1;
    uVar10 = uVar10 & 0xfff7ffffffffffff;
    if (uVar16 == 0x7fff) {
      uVar1 = uVar1 & 0xc00000;
      uVar10 = 0;
      if (uVar1 != 0) {
        if (uVar1 == 0x400000) {
          uVar10 = -(ulong)(uVar25 != 0);
          if (uVar25 != 0) {
            uVar16 = 0x7ffe;
          }
        }
        else if ((uVar25 == 0) || (uVar1 != 0x800000)) {
          uVar10 = 0xffffffffffffffff;
          uVar16 = 0x7ffe;
        }
      }
      uVar22 = uVar22 | 0x14;
      uVar12 = uVar10;
    }
  }
  uVar19 = uVar12 >> 3 | uVar10 << 0x3d;
  uVar10 = uVar10 >> 3;
  uVar12 = uVar10;
  if ((uVar16 == 0x7fff) && (uVar12 = uVar10 | 0x800000000000, uVar19 == 0 && uVar10 == 0)) {
    uVar12 = 0;
  }
  if (uVar22 != 0) {
    __sfp_handle_exceptions();
  }
  auVar27._8_8_ = uVar12 & 0xffffffffffff | (uVar16 & 0x7fff) << 0x30 | uVar25 << 0x3f;
  auVar27._0_8_ = uVar19;
  return auVar27;
}

