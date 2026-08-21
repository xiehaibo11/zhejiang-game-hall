
undefined1  [16] __multf3(undefined1 param_1 [16],undefined1 param_2 [16])

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ushort uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined1 auVar25 [16];
  
  uVar8 = param_2._8_8_;
  uVar11 = param_2._0_8_;
  uVar5 = param_1._8_8_;
  uVar6 = param_1._0_8_;
  uVar16 = fpcr;
  uVar21 = param_1._14_2_ & 0x7fff;
  uVar15 = uVar5 & 0xffffffffffff;
  uVar22 = (ulong)uVar21;
  uVar9 = uVar5 >> 0x3f;
  if ((uVar5 & 0x7fff000000000000) == 0) {
    if (uVar15 != 0 || uVar6 != 0) {
      if (uVar15 == 0) {
        lVar13 = LZCOUNT(uVar6) + 0x40;
      }
      else {
        lVar13 = LZCOUNT(uVar15);
      }
      iVar4 = (int)(lVar13 + -0xf);
      if (lVar13 + -0xf < 0x3d) {
        uVar5 = uVar6 << ((ulong)(iVar4 + 3) & 0x3f);
        uVar15 = uVar6 >> ((ulong)(0x3d - iVar4) & 0x3f) | uVar15 << ((ulong)(iVar4 + 3) & 0x3f);
      }
      else {
        uVar5 = 0;
        uVar15 = uVar6 << ((ulong)(iVar4 - 0x3d) & 0x3f);
      }
      uVar22 = -lVar13 - 0x3fef;
      goto LAB_0126ee9c;
    }
    uVar15 = 0;
    uVar5 = 0;
    uVar23 = 1;
LAB_0126eedc:
    uVar3 = 0;
    uVar6 = uVar5;
  }
  else {
    if (uVar21 != 0x7fff) {
      uVar15 = uVar6 >> 0x3d | (uVar15 | 0x1000000000000) << 3;
      uVar5 = uVar6 << 3;
      uVar22 = uVar22 - 0x3fff;
LAB_0126ee9c:
      uVar23 = 0;
      goto LAB_0126eedc;
    }
    if (uVar15 == 0 && uVar6 == 0) {
      uVar15 = 0;
      uVar5 = 0;
      uVar23 = 2;
      goto LAB_0126eedc;
    }
    uVar23 = 3;
    uVar3 = (uint)(uVar15 >> 0x2f) ^ 1;
  }
  uVar21 = param_2._14_2_ & 0x7fff;
  uVar5 = uVar8 & 0xffffffffffff;
  uVar20 = (ulong)uVar21;
  if ((uVar8 & 0x7fff000000000000) == 0) {
    if (uVar5 != 0 || uVar11 != 0) {
      lVar13 = LZCOUNT(uVar5);
      if (uVar5 == 0) {
        lVar13 = LZCOUNT(uVar11) + 0x40;
      }
      iVar4 = (int)(lVar13 + -0xf);
      if (lVar13 + -0xf < 0x3d) {
        uVar5 = uVar11 >> ((ulong)(0x3d - iVar4) & 0x3f) | uVar5 << ((ulong)(iVar4 + 3) & 0x3f);
        uVar10 = uVar11 << ((ulong)(iVar4 + 3) & 0x3f);
      }
      else {
        uVar10 = 0;
        uVar5 = uVar11 << ((ulong)(iVar4 - 0x3d) & 0x3f);
      }
      uVar20 = -lVar13 - 0x3fef;
      goto LAB_0126ef88;
    }
    uVar5 = 0;
    uVar11 = 0;
    uVar7 = 1;
  }
  else if (uVar21 == 0x7fff) {
    if (uVar5 == 0 && uVar11 == 0) {
      uVar5 = 0;
      uVar11 = 0;
      uVar7 = 2;
    }
    else {
      uVar7 = 3;
      if ((uVar8 & 0x800000000000) == 0) {
        uVar3 = 1;
      }
    }
  }
  else {
    uVar5 = uVar11 >> 0x3d | (uVar5 | 0x1000000000000) << 3;
    uVar10 = uVar11 << 3;
    uVar20 = uVar20 - 0x3fff;
LAB_0126ef88:
    uVar7 = 0;
    uVar11 = uVar10;
  }
  uVar18 = (uVar7 | uVar23 << 2) - 1;
  uVar10 = (ulong)((byte)(param_2[0xf] ^ param_1[0xf]) >> 7);
  lVar13 = uVar22 + uVar20 + 1;
  if (0xe < uVar18) {
switchD_0126f004_default:
    uVar8 = uVar6 >> 0x20;
    uVar23 = uVar11 & 0xffffffff;
    uVar6 = uVar6 & 0xffffffff;
    uVar11 = uVar11 >> 0x20;
    lVar14 = uVar11 * uVar8;
    uVar9 = uVar23 * uVar8 + uVar11 * uVar6 + (uVar23 * uVar6 >> 0x20);
    if (uVar9 < uVar23 * uVar8) {
      lVar14 = lVar14 + 0x100000000;
    }
    uVar18 = uVar5 >> 0x20;
    uVar5 = uVar5 & 0xffffffff;
    lVar19 = uVar18 * uVar8;
    uVar7 = uVar5 * uVar8 + uVar18 * uVar6 + (uVar5 * uVar6 >> 0x20);
    if (uVar7 < uVar5 * uVar8) {
      lVar19 = lVar19 + 0x100000000;
    }
    uVar24 = uVar15 >> 0x20;
    uVar15 = uVar15 & 0xffffffff;
    uVar8 = lVar19 + (uVar7 >> 0x20);
    uVar7 = (uVar5 * uVar6 & 0xffffffff) + (uVar7 << 0x20);
    uVar12 = uVar23 * uVar24 + uVar11 * uVar15 + (uVar23 * uVar15 >> 0x20);
    lVar19 = uVar11 * uVar24;
    if (uVar12 < uVar23 * uVar24) {
      lVar19 = lVar19 + 0x100000000;
    }
    uVar11 = lVar19 + (uVar12 >> 0x20);
    uVar1 = uVar5 * uVar24 + uVar18 * uVar15 + (uVar5 * uVar15 >> 0x20);
    uVar12 = (uVar23 * uVar15 & 0xffffffff) + (uVar12 << 0x20);
    lVar19 = uVar18 * uVar24;
    if (uVar1 < uVar5 * uVar24) {
      lVar19 = lVar19 + 0x100000000;
    }
    uVar18 = uVar7 + (uVar9 >> 0x20) + lVar14;
    uVar17 = (ulong)(uVar18 < uVar7);
    uVar15 = (uVar5 * uVar15 & 0xffffffff) + (uVar1 << 0x20) + uVar8;
    uVar18 = uVar18 + uVar12;
    uVar5 = uVar15 + uVar17;
    uVar7 = uVar11 + uVar5;
    uVar12 = (ulong)(uVar18 < uVar12);
    uVar24 = uVar7 + uVar12;
    uVar6 = (ulong)((uVar23 * uVar6 & 0xffffffff) + (uVar9 << 0x20) != 0 ||
                   (uVar18 & 0x7ffffffffffff) != 0);
    uVar9 = (ulong)(uVar5 < uVar17 || uVar15 < uVar8) + (uVar1 >> 0x20) +
            (ulong)(uVar24 < uVar12 || uVar7 < uVar11) + lVar19;
    uVar12 = uVar24 >> 0x33 | uVar9 * 0x2000;
    uVar15 = uVar6 | uVar18 >> 0x33 | uVar24 * 0x2000;
    lVar14 = uVar22 + uVar20;
    if (((uVar9 & 0x7ffffffffffff) >> 0x27 & 1) != 0) {
      uVar12 = uVar12 >> 1;
      uVar15 = uVar6 | uVar18 >> 0x33 & 1 | uVar15 >> 1 | (uVar24 >> 0x33) << 0x3f;
      lVar14 = lVar13;
    }
    goto LAB_0126f1ec;
  }
  uVar24 = uVar11;
  uVar12 = uVar5;
  switch(uVar18 & 0xffffffff) {
  case 0:
  case 1:
    break;
  case 2:
  case 6:
  case 10:
    uVar10 = uVar8 >> 0x3f;
    break;
  case 3:
  case 4:
  case 7:
  case 9:
    uVar7 = uVar23;
    uVar24 = uVar6;
    uVar12 = uVar15;
    break;
  case 5:
  case 8:
    uVar3 = 1;
    uVar24 = 0xffffffffffffffff;
    uVar10 = 0;
    uVar12 = 0xffffffffffff;
    goto LAB_0126f450;
  case 0xb:
  case 0xc:
  case 0xd:
    uVar7 = uVar23;
    uVar24 = uVar6;
    uVar10 = uVar9;
    uVar12 = uVar15;
    break;
  case 0xe:
    uVar24 = uVar6;
    uVar10 = uVar9;
    uVar12 = uVar15;
    if (((uVar15 >> 0x2f & 1) != 0) && ((uVar5 & 0x800000000000) == 0)) {
      uVar24 = uVar11;
      uVar10 = uVar8 >> 0x3f;
      uVar12 = uVar5;
    }
    goto LAB_0126f450;
  default:
    goto switchD_0126f004_default;
  }
  if (uVar7 == 2) {
    uVar9 = 0;
    uVar24 = 0;
  }
  else {
    if (uVar7 != 3) {
      uVar15 = uVar24;
      lVar14 = lVar13;
      if (uVar7 == 1) {
        uVar24 = 0;
      }
      else {
LAB_0126f1ec:
        uVar6 = lVar14 + 0x3fff;
        if (0 < (long)uVar6) {
          uVar9 = uVar15;
          if ((uVar15 & 7) != 0) {
            uVar11 = uVar16 & 0xc00000;
            uVar3 = uVar3 | 0x10;
            if (uVar11 == 0x400000) {
              if (uVar10 == 0) {
LAB_0126f240:
                uVar9 = uVar15 + 8;
LAB_0126f244:
                if (uVar9 < uVar15) {
                  uVar12 = uVar12 + 1;
                }
              }
            }
            else if (uVar11 == 0x800000) {
              if (uVar10 != 0) goto LAB_0126f240;
            }
            else if ((uVar11 == 0) && ((uVar15 & 0xf) != 4)) {
              uVar9 = uVar15 + 4;
              goto LAB_0126f244;
            }
          }
          if ((uVar12 >> 0x34 & 1) != 0) {
            uVar12 = uVar12 & 0xffefffffffffffff;
            uVar6 = lVar14 + 0x4000;
          }
          if ((long)uVar6 < 0x7fff) {
            uVar24 = uVar9 >> 3 | uVar12 << 0x3d;
            uVar9 = uVar12 >> 3;
          }
          else {
            uVar16 = uVar16 & 0xc00000;
            uVar9 = uVar10;
            if ((uVar16 == 0x400000) || (uVar9 = uVar16, uVar16 != 0x800000)) {
              bVar2 = uVar9 != 0;
              uVar6 = 0x7fff;
              if (uVar9 != 0) {
                uVar6 = 0x7ffe;
              }
            }
            else {
              bVar2 = uVar10 == 0;
              uVar6 = 0x7fff;
              if (uVar10 == 0) {
                uVar6 = 0x7ffe;
              }
            }
            uVar24 = -(ulong)bVar2;
            uVar3 = uVar3 | 0x14;
            uVar9 = uVar24;
          }
          goto LAB_0126f46c;
        }
        uVar6 = -lVar14 - 0x3ffe;
        if ((long)uVar6 < 0x75) {
          iVar4 = (int)uVar6;
          if ((long)uVar6 < 0x40) {
            uVar9 = uVar12 >> (uVar6 & 0x3f);
            uVar15 = uVar12 << ((ulong)(0x40 - iVar4) & 0x3f) | uVar15 >> (uVar6 & 0x3f) |
                     (ulong)(uVar15 << ((ulong)(0x40 - iVar4) & 0x3f) != 0);
          }
          else {
            lVar13 = 0;
            if (uVar6 != 0x40) {
              lVar13 = uVar12 << ((ulong)(0x80 - iVar4) & 0x3f);
            }
            uVar9 = 0;
            uVar15 = (ulong)(lVar13 != 0 || uVar15 != 0) | uVar12 >> ((ulong)(iVar4 - 0x40) & 0x3f);
          }
          uVar6 = uVar15;
          if ((uVar15 & 7) != 0) {
            uVar11 = uVar16 & 0xc00000;
            uVar3 = uVar3 | 0x10;
            if (uVar11 == 0x400000) {
              if (uVar10 == 0) {
LAB_0126f390:
                uVar6 = uVar15 + 8;
LAB_0126f394:
                if (uVar6 < uVar15) {
                  uVar9 = uVar9 + 1;
                }
              }
            }
            else if (uVar11 == 0x800000) {
              if (uVar10 != 0) goto LAB_0126f390;
            }
            else if ((uVar11 == 0) && ((uVar15 & 0xf) != 4)) {
              uVar6 = uVar15 + 4;
              goto LAB_0126f394;
            }
          }
          bVar2 = (uVar9 >> 0x33 & 1) == 0;
          if (bVar2) {
            uVar24 = uVar6 >> 3 | uVar9 << 0x3d;
            uVar9 = uVar9 >> 3;
          }
          else {
            uVar3 = uVar3 | 0x10;
            uVar9 = 0;
            uVar24 = 0;
          }
          uVar6 = (ulong)!bVar2;
          if ((uVar3 >> 4 != 0) || (((uint)uVar16 >> 0xb & 1) != 0)) {
            uVar3 = uVar3 | 8;
          }
          goto LAB_0126f46c;
        }
        uVar24 = 0;
        if (uVar12 != 0 || uVar15 != 0) {
          uVar16 = uVar16 & 0xc00000;
          uVar3 = uVar3 | 0x10;
          if (uVar16 == 0x400000) {
            uVar24 = 9;
            uVar16 = uVar10;
LAB_0126f40c:
            if (uVar16 != 0) {
              uVar24 = 0;
            }
          }
          else {
            if (uVar16 != 0x800000) {
              uVar24 = 0;
              goto LAB_0126f40c;
            }
            uVar24 = 9;
            if (uVar10 == 0) {
              uVar24 = 0;
            }
          }
          uVar24 = uVar24 >> 3;
        }
        uVar3 = uVar3 | 8;
      }
      uVar9 = 0;
      uVar6 = 0;
      goto LAB_0126f46c;
    }
LAB_0126f450:
    uVar9 = uVar12 | 0x800000000000;
  }
  uVar6 = 0x7fff;
LAB_0126f46c:
  if (uVar3 != 0) {
    __sfp_handle_exceptions();
  }
  auVar25._8_8_ = uVar9 & 0xffffffffffff | (uVar6 & 0x7fff) << 0x30 | uVar10 << 0x3f;
  auVar25._0_8_ = uVar24;
  return auVar25;
}

