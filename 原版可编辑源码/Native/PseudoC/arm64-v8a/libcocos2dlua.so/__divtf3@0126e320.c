
undefined1  [16] __divtf3(undefined1 param_1 [16],undefined1 param_2 [16])

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ushort uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined1 auVar23 [16];
  
  uVar8 = param_2._8_8_;
  uVar9 = param_2._0_8_;
  uVar5 = param_1._8_8_;
  uVar6 = param_1._0_8_;
  uVar12 = fpcr;
  uVar13 = param_1._14_2_ & 0x7fff;
  uVar4 = uVar5 & 0xffffffffffff;
  uVar14 = (ulong)uVar13;
  uVar18 = uVar5 >> 0x3f;
  if ((uVar5 & 0x7fff000000000000) == 0) {
    if (uVar4 != 0 || uVar6 != 0) {
      lVar16 = LZCOUNT(uVar4);
      if (uVar4 == 0) {
        lVar16 = LZCOUNT(uVar6) + 0x40;
      }
      iVar2 = (int)(lVar16 + -0xf);
      if (lVar16 + -0xf < 0x3d) {
        uVar5 = uVar6 << ((ulong)(iVar2 + 3) & 0x3f);
        uVar4 = uVar6 >> ((ulong)(0x3d - iVar2) & 0x3f) | uVar4 << ((ulong)(iVar2 + 3) & 0x3f);
      }
      else {
        uVar5 = 0;
        uVar4 = uVar6 << ((ulong)(iVar2 - 0x3d) & 0x3f);
      }
      uVar14 = -lVar16 - 0x3fef;
      goto LAB_0126e3f4;
    }
    uVar4 = 0;
    uVar5 = 0;
    uVar17 = 1;
LAB_0126e434:
    uVar3 = 0;
    uVar6 = uVar5;
  }
  else {
    if (uVar13 != 0x7fff) {
      uVar4 = uVar6 >> 0x3d | (uVar4 | 0x1000000000000) << 3;
      uVar5 = uVar6 << 3;
      uVar14 = uVar14 - 0x3fff;
LAB_0126e3f4:
      uVar17 = 0;
      goto LAB_0126e434;
    }
    if (uVar4 == 0 && uVar6 == 0) {
      uVar4 = 0;
      uVar5 = 0;
      uVar17 = 2;
      goto LAB_0126e434;
    }
    uVar17 = 3;
    uVar3 = (uint)(uVar4 >> 0x2f) ^ 1;
  }
  uVar13 = param_2._14_2_ & 0x7fff;
  uVar5 = uVar8 & 0xffffffffffff;
  uVar15 = (ulong)uVar13;
  if ((uVar8 & 0x7fff000000000000) == 0) {
    if (uVar5 != 0 || uVar9 != 0) {
      if (uVar5 == 0) {
        lVar16 = LZCOUNT(uVar9) + 0x40;
      }
      else {
        lVar16 = LZCOUNT(uVar5);
      }
      iVar2 = (int)(lVar16 + -0xf);
      if (lVar16 + -0xf < 0x3d) {
        uVar11 = uVar9 << ((ulong)(iVar2 + 3) & 0x3f);
        uVar5 = uVar9 >> ((ulong)(0x3d - iVar2) & 0x3f) | uVar5 << ((ulong)(iVar2 + 3) & 0x3f);
      }
      else {
        uVar11 = 0;
        uVar5 = uVar9 << ((ulong)(iVar2 - 0x3d) & 0x3f);
      }
      uVar15 = -lVar16 - 0x3fef;
      goto LAB_0126e4e8;
    }
    uVar5 = 0;
    uVar9 = 0;
    uVar7 = 1;
  }
  else if (uVar13 == 0x7fff) {
    if (uVar5 == 0 && uVar9 == 0) {
      uVar5 = 0;
      uVar9 = 0;
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
    uVar5 = uVar9 >> 0x3d | (uVar5 | 0x1000000000000) << 3;
    uVar11 = uVar9 << 3;
    uVar15 = uVar15 - 0x3fff;
LAB_0126e4e8:
    uVar7 = 0;
    uVar9 = uVar11;
  }
  lVar16 = uVar14 - uVar15;
  uVar15 = (uVar7 | uVar17 << 2) - 1;
  uVar14 = (ulong)((byte)(param_2[0xf] ^ param_1[0xf]) >> 7);
  if (0xe < uVar15) {
switchD_0126e560_default:
    if ((uVar5 < uVar4) || ((uVar9 <= uVar6 && (uVar4 == uVar5)))) {
      uVar8 = uVar4 << 0x3f;
      uVar18 = uVar6 << 0x3f;
      uVar4 = uVar4 >> 1;
      uVar6 = uVar8 | uVar6 >> 1;
    }
    else {
      lVar16 = lVar16 + -1;
      uVar18 = 0;
    }
    uVar8 = uVar5 << 0xc | uVar9 >> 0x34;
    uVar15 = uVar9 * 0x1000;
    uVar11 = (uVar5 & 0xfffffffffffff) >> 0x14;
    uVar17 = uVar5 << 0xc & 0xffffffff | uVar9 >> 0x34;
    uVar5 = 0;
    if (uVar11 != 0) {
      uVar5 = uVar4 / uVar11;
    }
    uVar7 = uVar5 * uVar17;
    uVar4 = uVar6 >> 0x20 | uVar4 - uVar5 * uVar11 << 0x20;
    if (uVar4 < uVar7) {
      uVar4 = uVar4 + uVar8;
      if ((uVar4 < uVar8) || (uVar7 <= uVar4)) {
        uVar5 = uVar5 - 1;
      }
      else {
        uVar5 = uVar5 - 2;
        uVar4 = uVar4 + uVar8;
      }
    }
    uVar10 = 0;
    if (uVar11 != 0) {
      uVar10 = (uVar4 - uVar7) / uVar11;
    }
    uVar19 = uVar10 * uVar17;
    uVar6 = uVar6 & 0xffffffff | (uVar4 - uVar7) - uVar10 * uVar11 << 0x20;
    if (uVar6 < uVar19) {
      uVar6 = uVar6 + uVar8;
      if ((uVar6 < uVar8) || (uVar19 <= uVar6)) {
        uVar10 = uVar10 - 1;
      }
      else {
        uVar10 = uVar10 - 2;
        uVar6 = uVar6 + uVar8;
      }
    }
    uVar7 = uVar10 | uVar5 << 0x20;
    uVar6 = uVar6 - uVar19;
    uVar19 = uVar15 & 0xffffffff;
    uVar20 = (uVar9 & 0xfffffffffffff) >> 0x14;
    uVar5 = (uVar7 >> 0x20) * uVar19;
    uVar22 = (uVar10 & 0xffffffff) * uVar19;
    lVar21 = (uVar7 >> 0x20) * uVar20;
    uVar4 = uVar5 + (uVar10 & 0xffffffff) * uVar20 + (uVar22 >> 0x20);
    if (uVar4 < uVar5) {
      lVar21 = lVar21 + 0x100000000;
    }
    uVar5 = lVar21 + (uVar4 >> 0x20);
    uVar10 = (uVar22 & 0xffffffff) + (uVar4 << 0x20);
    if ((uVar6 < uVar5) || ((uVar4 = uVar7, uVar5 == uVar6 && (uVar18 < uVar10)))) {
      uVar18 = uVar18 + uVar15;
      uVar4 = uVar7 - 1;
      uVar22 = uVar8;
      if (uVar18 < uVar15) {
        uVar22 = uVar8 + 1;
      }
      uVar6 = uVar6 + uVar22;
      if (((uVar8 < uVar6) || ((uVar6 == uVar8 && (uVar15 <= uVar18)))) &&
         ((uVar6 < uVar5 || ((uVar5 == uVar6 && (uVar18 < uVar10)))))) {
        uVar18 = uVar18 + uVar15;
        uVar4 = uVar8;
        if (uVar18 < uVar15) {
          uVar4 = uVar8 + 1;
        }
        uVar6 = uVar6 + uVar4;
        uVar4 = uVar7 - 2;
      }
    }
    uVar10 = uVar18 - uVar10;
    uVar18 = (uVar6 - uVar5) - (ulong)(uVar18 < uVar10);
    uVar6 = 0xffffffffffffffff;
    if (uVar18 != uVar8) {
      uVar6 = 0;
      if (uVar11 != 0) {
        uVar6 = uVar18 / uVar11;
      }
      uVar5 = uVar6 * uVar17;
      uVar18 = uVar10 >> 0x20 | uVar18 - uVar6 * uVar11 << 0x20;
      if (uVar18 < uVar5) {
        uVar18 = uVar18 + uVar8;
        if ((uVar18 < uVar8) || (uVar5 <= uVar18)) {
          uVar6 = uVar6 - 1;
        }
        else {
          uVar6 = uVar6 - 2;
          uVar18 = uVar18 + uVar8;
        }
      }
      uVar7 = 0;
      if (uVar11 != 0) {
        uVar7 = (uVar18 - uVar5) / uVar11;
      }
      uVar17 = uVar7 * uVar17;
      uVar18 = uVar10 & 0xffffffff | (uVar18 - uVar5) - uVar7 * uVar11 << 0x20;
      if (uVar18 < uVar17) {
        uVar18 = uVar18 + uVar8;
        if ((uVar18 < uVar8) || (uVar17 <= uVar18)) {
          uVar7 = uVar7 - 1;
        }
        else {
          uVar7 = uVar7 - 2;
          uVar18 = uVar18 + uVar8;
        }
      }
      uVar5 = uVar7 | uVar6 << 0x20;
      uVar18 = uVar18 - uVar17;
      uVar17 = (uVar7 & 0xffffffff) * uVar19;
      uVar19 = (uVar5 >> 0x20) * uVar19;
      lVar21 = (uVar5 >> 0x20) * uVar20;
      uVar6 = uVar19 + (uVar7 & 0xffffffff) * uVar20 + (uVar17 >> 0x20);
      if (uVar6 < uVar19) {
        lVar21 = lVar21 + 0x100000000;
      }
      uVar11 = lVar21 + (uVar6 >> 0x20);
      uVar17 = (uVar17 & 0xffffffff) + (uVar6 << 0x20);
      if ((uVar18 < uVar11) || ((uVar11 == uVar18 && (uVar17 != 0)))) {
        uVar18 = uVar18 + uVar8;
        uVar6 = uVar5 - 1;
        uVar7 = uVar15;
        if ((uVar8 <= uVar18) && ((uVar18 < uVar11 || ((uVar11 == uVar18 && (uVar15 < uVar17)))))) {
          uVar7 = uVar9 << 0xd;
          if (uVar7 < uVar15) {
            uVar8 = uVar8 + 1;
          }
          uVar18 = uVar18 + uVar8;
          uVar6 = uVar5 - 2;
        }
      }
      else {
        uVar7 = 0;
        uVar6 = uVar5;
      }
      if ((uVar7 != uVar17) || (uVar18 != uVar11)) {
        uVar6 = uVar6 | 1;
      }
    }
    goto LAB_0126e898;
  }
  switch(uVar15 & 0xffffffff) {
  case 0:
    uVar3 = uVar3 | 2;
    break;
  case 1:
  case 3:
  case 5:
    goto switchD_0126e560_caseD_1;
  case 2:
  case 6:
  case 10:
    uVar4 = uVar5;
    uVar6 = uVar9;
    uVar14 = uVar8 >> 0x3f;
    goto LAB_0126e870;
  case 4:
  case 9:
    uVar3 = 1;
    uVar4 = 0xffffffffffff;
    uVar6 = 0xffffffffffffffff;
    uVar14 = 0;
    goto LAB_0126eafc;
  case 7:
  case 8:
    break;
  case 0xb:
  case 0xc:
  case 0xd:
    uVar14 = uVar18;
    uVar7 = uVar17;
LAB_0126e870:
    if (uVar7 != 2) {
      if (uVar7 == 3) goto LAB_0126eafc;
      if (uVar7 == 1) {
switchD_0126e560_caseD_1:
        uVar18 = 0;
      }
      else {
LAB_0126e898:
        uVar5 = lVar16 + 0x3fff;
        if (0 < (long)uVar5) {
          uVar18 = uVar6;
          if ((uVar6 & 7) != 0) {
            uVar9 = uVar12 & 0xc00000;
            uVar3 = uVar3 | 0x10;
            if (uVar9 == 0x400000) {
              if (uVar14 == 0) {
LAB_0126e8ec:
                uVar18 = uVar6 + 8;
LAB_0126e8f0:
                if (uVar18 < uVar6) {
                  uVar4 = uVar4 + 1;
                }
              }
            }
            else if (uVar9 == 0x800000) {
              if (uVar14 != 0) goto LAB_0126e8ec;
            }
            else if ((uVar9 == 0) && ((uVar6 & 0xf) != 4)) {
              uVar18 = uVar6 + 4;
              goto LAB_0126e8f0;
            }
          }
          if ((uVar4 >> 0x34 & 1) != 0) {
            uVar4 = uVar4 & 0xffefffffffffffff;
            uVar5 = lVar16 + 0x4000;
          }
          if ((long)uVar5 < 0x7fff) {
            uVar9 = uVar4 >> 3;
            uVar18 = uVar4 << 0x3d | uVar18 >> 3;
          }
          else {
            uVar12 = uVar12 & 0xc00000;
            uVar4 = uVar14;
            if ((uVar12 == 0x400000) || (uVar4 = uVar12, uVar12 != 0x800000)) {
              bVar1 = uVar4 != 0;
              uVar5 = 0x7fff;
              if (uVar4 != 0) {
                uVar5 = 0x7ffe;
              }
            }
            else {
              bVar1 = uVar14 == 0;
              uVar5 = 0x7fff;
              if (uVar14 == 0) {
                uVar5 = 0x7ffe;
              }
            }
            uVar9 = -(ulong)bVar1;
            uVar3 = uVar3 | 0x14;
            uVar18 = uVar9;
          }
          goto LAB_0126eb18;
        }
        uVar18 = -lVar16 - 0x3ffe;
        if ((long)uVar18 < 0x75) {
          iVar2 = (int)uVar18;
          if ((long)uVar18 < 0x40) {
            uVar5 = uVar4 >> (uVar18 & 0x3f);
            uVar4 = uVar4 << ((ulong)(0x40 - iVar2) & 0x3f) | uVar6 >> (uVar18 & 0x3f) |
                    (ulong)(uVar6 << ((ulong)(0x40 - iVar2) & 0x3f) != 0);
          }
          else {
            lVar16 = 0;
            if (uVar18 != 0x40) {
              lVar16 = uVar4 << ((ulong)(0x80 - iVar2) & 0x3f);
            }
            uVar5 = 0;
            uVar4 = (ulong)(lVar16 != 0 || uVar6 != 0) | uVar4 >> ((ulong)(iVar2 - 0x40) & 0x3f);
          }
          uVar18 = uVar4;
          if ((uVar4 & 7) != 0) {
            uVar6 = uVar12 & 0xc00000;
            uVar3 = uVar3 | 0x10;
            if (uVar6 == 0x400000) {
              if (uVar14 == 0) {
LAB_0126ea40:
                uVar18 = uVar4 + 8;
LAB_0126ea44:
                if (uVar18 < uVar4) {
                  uVar5 = uVar5 + 1;
                }
              }
            }
            else if (uVar6 == 0x800000) {
              if (uVar14 != 0) goto LAB_0126ea40;
            }
            else if ((uVar6 == 0) && ((uVar4 & 0xf) != 4)) {
              uVar18 = uVar4 + 4;
              goto LAB_0126ea44;
            }
          }
          bVar1 = (uVar5 >> 0x33 & 1) == 0;
          if (bVar1) {
            uVar9 = uVar5 >> 3;
            uVar18 = uVar5 << 0x3d | uVar18 >> 3;
          }
          else {
            uVar3 = uVar3 | 0x10;
            uVar9 = 0;
            uVar18 = 0;
          }
          uVar5 = (ulong)!bVar1;
          if ((uVar3 >> 4 != 0) || (((uint)uVar12 >> 0xb & 1) != 0)) {
            uVar3 = uVar3 | 8;
          }
          goto LAB_0126eb18;
        }
        uVar18 = 0;
        if (uVar4 != 0 || uVar6 != 0) {
          uVar12 = uVar12 & 0xc00000;
          uVar3 = uVar3 | 0x10;
          if (uVar12 == 0x400000) {
            uVar18 = 9;
            uVar12 = uVar14;
LAB_0126eac0:
            if (uVar12 != 0) {
              uVar18 = 0;
            }
          }
          else {
            if (uVar12 != 0x800000) {
              uVar18 = 0;
              goto LAB_0126eac0;
            }
            uVar18 = 9;
            if (uVar14 == 0) {
              uVar18 = 0;
            }
          }
          uVar18 = uVar18 >> 3;
        }
        uVar3 = uVar3 | 8;
      }
      uVar9 = 0;
      uVar5 = 0;
      goto LAB_0126eb18;
    }
    break;
  case 0xe:
    uVar14 = uVar18;
    if (((uVar4 >> 0x2f & 1) != 0) && ((uVar5 & 0x800000000000) == 0)) {
      uVar4 = uVar5;
      uVar6 = uVar9;
      uVar14 = uVar8 >> 0x3f;
    }
LAB_0126eafc:
    uVar9 = uVar4 | 0x800000000000;
    uVar18 = uVar6;
    goto LAB_0126eb04;
  default:
    goto switchD_0126e560_default;
  }
  uVar9 = 0;
  uVar18 = 0;
LAB_0126eb04:
  uVar5 = 0x7fff;
LAB_0126eb18:
  if (uVar3 != 0) {
    __sfp_handle_exceptions();
  }
  auVar23._8_8_ = uVar9 & 0xffffffffffff | (uVar5 & 0x7fff) << 0x30 | uVar14 << 0x3f;
  auVar23._0_8_ = uVar18;
  return auVar23;
}

