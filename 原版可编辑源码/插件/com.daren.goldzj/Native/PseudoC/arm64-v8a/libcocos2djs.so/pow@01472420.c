
/* WARNING: Type propagation algorithm not settling */
/* v8::base::ieee754::pow(double, double) */

double v8::base::ieee754::pow(double param_1,double param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  double dVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  uVar6 = (uint)((ulong)param_2 >> 0x20);
  uVar10 = uVar6 & 0x7fffffff;
  uVar5 = SUB84(param_2,0);
  if (((ulong)param_2 & 0x7fffffff00000000) == 0 && uVar5 == 0) {
    return 1.0;
  }
  uVar3 = (uint)((ulong)param_1 >> 0x20) & 0x7fffffff;
  if ((((0x7ff00000 < uVar3) || (iVar9 = SUB84(param_1,0), iVar9 != 0 && uVar3 == 0x7ff00000)) ||
      (0x7ff00000 < uVar10)) || ((uVar5 != 0 && (uVar10 == 0x7ff00000)))) {
    return param_1 + param_2;
  }
  if (-1 < (long)param_1) goto LAB_014724a8;
  if (uVar10 >> 0x16 < 0x10d) {
    uVar2 = uVar10 >> 0x14;
    if (uVar2 < 0x3ff) {
LAB_014724a8:
      iVar12 = 0;
      goto joined_r0x01472588;
    }
    if (0x104 < uVar10 >> 0x16) {
      uVar1 = uVar5 >> (ulong)(0x433 - uVar2 & 0x1f);
      if (uVar1 << (ulong)(0x433 - uVar2 & 0x1f) == uVar5) {
        iVar12 = 2 - (uVar1 & 1);
        goto joined_r0x01472588;
      }
      goto LAB_014724a8;
    }
    if (uVar5 == 0) {
      uVar5 = uVar10 >> (ulong)(0x413 - uVar2 & 0x1f);
      if (uVar5 << (ulong)(0x413 - uVar2 & 0x1f) == uVar10) {
        iVar12 = 2 - (uVar5 & 1);
      }
      else {
        iVar12 = 0;
      }
      goto LAB_01472bdc;
    }
    iVar12 = 0;
  }
  else {
    iVar12 = 2;
joined_r0x01472588:
    if (uVar5 == 0) {
LAB_01472bdc:
      if (uVar10 == 0x7ff00000) {
        if (uVar3 == 0x3ff00000 && iVar9 == 0) {
          return param_2 - param_2;
        }
        if (0x3fe < uVar3 >> 0x14) {
          dVar13 = 0.0;
          param_1 = param_2;
          goto LAB_01472c0c;
        }
        dVar13 = -param_2;
        dVar15 = 0.0;
        goto LAB_01472c54;
      }
      if (uVar10 == 0x3ff00000) {
        if (-1 < (long)param_2) {
          return param_1;
        }
        if (param_1 != 0.0) {
          return 1.0 / param_1;
        }
        dVar13 = -INFINITY;
        param_2 = INFINITY;
LAB_01472c0c:
        if (-1 < (long)param_1) {
          return param_2;
        }
        return dVar13;
      }
      if (uVar6 == 0x40000000) {
        return param_1 * param_1;
      }
      if ((-1 < (long)param_1) && (uVar6 == 0x3fe00000)) {
        return SQRT(param_1);
      }
    }
  }
  if ((iVar9 == 0) &&
     ((dVar13 = ABS(param_1), ((ulong)param_1 & 0x7fffffff00000000) == 0 ||
      ((uVar3 | 0x40000000) == 0x7ff00000)))) {
    if ((long)param_2 < 0) {
      if (param_1 == 0.0) {
        bVar4 = (long)dVar13 < 0;
        dVar13 = INFINITY;
        if (bVar4) {
          dVar13 = -INFINITY;
        }
      }
      else {
        dVar13 = 1.0 / dVar13;
      }
    }
    if (-1 < (long)param_1) {
      return dVar13;
    }
    if (iVar12 != 0 || uVar3 != 0x3ff00000) {
      if (iVar12 == 1) {
        return -dVar13;
      }
      return dVar13;
    }
  }
  else {
    dVar13 = ABS(param_1);
    if (iVar12 != 0 || -1 < (long)param_1) {
      dVar15 = -1.0;
      if (iVar12 != 1 || -1 < (long)param_1) {
        dVar15 = 1.0;
      }
      if (uVar10 < 0x41e00001) {
        iVar9 = -0x434;
        uVar6 = (uint)((ulong)(dVar13 * 9007199254740992.0) >> 0x20);
        if (0xfffff < uVar3) {
          iVar9 = -0x3ff;
          uVar6 = uVar3;
        }
        iVar9 = iVar9 + ((int)uVar6 >> 0x14);
        dVar7 = dVar13 * 9007199254740992.0;
        if (0xfffff < uVar3) {
          dVar7 = dVar13;
        }
        uVar10 = uVar6 & 0xfffff | 0x3ff00000;
        if ((uVar6 & 0xfffff) < 0x3988f) {
          lVar8 = 0;
        }
        else if ((uVar6 & 0xfffff) < 0xbb67a) {
          lVar8 = 1;
        }
        else {
          lVar8 = 0;
          iVar9 = iVar9 + 1;
          uVar10 = uVar10 - 0x100000;
        }
        dVar17 = (double)(&DAT_01a3d648)[lVar8];
        dVar13 = (double)((ulong)dVar7 & 0xffffffff | (ulong)uVar10 << 0x20);
        dVar7 = dVar17 + dVar13;
        if (dVar7 == 0.0) {
          dVar14 = INFINITY;
          if ((long)dVar7 < 0) {
            dVar14 = -INFINITY;
          }
        }
        else {
          dVar14 = 1.0 / dVar7;
        }
        dVar16 = (dVar13 - dVar17) * dVar14;
        dVar7 = (double)((ulong)(((int)uVar10 >> 1 | 0x20000000U) + (int)lVar8 * 0x40000 + 0x80000)
                        << 0x20);
        dVar11 = (double)((ulong)dVar16 & 0xffffffff00000000);
        dVar18 = dVar16 * dVar16;
        dVar14 = dVar14 * (((dVar13 - dVar17) - dVar7 * dVar11) -
                          (dVar13 - (dVar7 - dVar17)) * dVar11);
        dVar13 = (dVar16 + dVar11) * dVar14 +
                 dVar18 * dVar18 *
                 (dVar18 * (dVar18 * (dVar18 * (dVar18 * (dVar18 * 0.20697501780033842 +
                                                         0.23066074577556175) + 0.272728123808534) +
                                     0.33333332981837743) + 0.4285714285785502) + 0.5999999999999946
                 );
        dVar7 = (double)((ulong)(dVar11 * dVar11 + 3.0 + dVar13) & 0xffffffff00000000);
        dVar17 = dVar14 * dVar7 + dVar16 * (dVar13 - ((dVar7 + -3.0) - dVar11 * dVar11));
        dVar13 = (double)((ulong)(dVar11 * dVar7 + dVar17) & 0xffffffff00000000);
        dVar17 = (double)(&DAT_01a3d668)[lVar8] +
                 (dVar17 - (dVar13 - dVar11 * dVar7)) * 0.9617966939259756 +
                 dVar13 * -7.028461650952758e-09;
        dVar7 = (double)((ulong)((double)(&DAT_01a3d658)[lVar8] +
                                 dVar13 * 0.9617967009544373 + dVar17 + (double)iVar9) &
                        0xffffffff00000000);
        dVar13 = ((dVar7 - (double)iVar9) - (double)(&DAT_01a3d658)[lVar8]) -
                 dVar13 * 0.9617967009544373;
      }
      else {
        if (0x43f00000 < uVar10) {
          if (0x3fe < uVar3 >> 0x14) {
            if (0xffffffff < (long)param_2) {
              return INFINITY;
            }
            return 0.0;
          }
          if ((long)param_2 < 0) {
            return INFINITY;
          }
          return 0.0;
        }
        if (uVar3 < 0x3fefffff) {
          dVar13 = dVar15 * 1e+300 * 1e+300;
          dVar15 = dVar15 * 1e-300 * 1e-300;
LAB_01472c54:
          if ((long)param_2 < 0) {
            return dVar13;
          }
          return dVar15;
        }
        if (0x3ff00000 < uVar3) {
          if (0xffffffff < (long)param_2) {
            return dVar15 * 1e+300 * 1e+300;
          }
          return dVar15 * 1e-300 * 1e-300;
        }
        dVar13 = dVar13 + -1.0;
        dVar17 = dVar13 * 1.9259629911266175e-08 +
                 dVar13 * dVar13 * (0.5 - dVar13 * (dVar13 * -0.25 + 0.3333333333333333)) *
                 -1.4426950408889634;
        dVar7 = (double)((ulong)(dVar13 * 1.4426950216293335 + dVar17) & 0xffffffff00000000);
        dVar13 = dVar7 - dVar13 * 1.4426950216293335;
      }
      dVar14 = dVar7 * (double)((ulong)param_2 & 0xffffffff00000000);
      dVar7 = (dVar17 - dVar13) * param_2 +
              (param_2 - (double)((ulong)param_2 & 0xffffffff00000000)) * dVar7;
      dVar13 = dVar14 + dVar7;
      uVar6 = (uint)((ulong)dVar13 >> 0x20);
      if ((long)dVar13 < 0x4090000000000000) {
        if (((uVar6 & 0x7ffffc00) < 0x4090cc00) ||
           ((dVar13 == -1075.0 && (-1075.0 - dVar14 < dVar7)))) goto LAB_0147295c;
        dVar13 = 1e-300;
      }
      else {
        if ((dVar13 == 1024.0) && (dVar7 + 8.008566259537294e-17 <= 1024.0 - dVar14)) {
LAB_0147295c:
          if ((uVar6 & 0x7fffffff) < 0x3fe00001) {
            uVar6 = 0;
          }
          else {
            bVar4 = -1 < (long)dVar13;
            uVar6 = (0x100000U >> (ulong)(((uVar6 & 0x7fffffff) >> 0x14) - 0x3fe & 0x1f)) + uVar6;
            uVar10 = uVar6 >> 0x14 & 0x7ff;
            dVar14 = dVar14 - (double)((ulong)(-0x100000 >> (uVar10 - 0x3ff & 0x1f) & uVar6) << 0x20
                                      );
            uVar10 = (uVar6 & 0xfffff | 0x100000) >> (ulong)(0x413 - uVar10 & 0x1f);
            dVar13 = dVar7 + dVar14;
            uVar6 = -uVar10;
            if (bVar4) {
              uVar6 = uVar10;
            }
          }
          dVar13 = (double)((ulong)dVar13 & 0xffffffff00000000);
          dVar17 = (dVar7 - (dVar13 - dVar14)) * 0.6931471805599453 +
                   dVar13 * -1.904654299957768e-09;
          dVar7 = dVar13 * 0.6931471824645996 + dVar17;
          dVar17 = dVar17 - (dVar7 - dVar13 * 0.6931471824645996);
          dVar13 = dVar7 * dVar7;
          dVar14 = dVar7 - dVar13 * (dVar13 * (dVar13 * (dVar13 * (dVar13 * 4.1381367970572385e-08 +
                                                                  -1.6533902205465252e-06) +
                                                        6.613756321437934e-05) +
                                              -0.0027777777777015593) + 0.16666666666666602);
          dVar13 = (dVar14 + -2.0) - (dVar17 + dVar7 * dVar17);
          dVar14 = dVar7 * dVar14;
          if (dVar13 == 0.0) {
            dVar17 = NAN;
            if (((dVar14 != 0.0) && (!NAN(dVar14))) &&
               (dVar17 = INFINITY, 0.0 <= dVar14 == (long)dVar13 < 0)) {
              dVar17 = -INFINITY;
            }
          }
          else {
            dVar17 = dVar14 / dVar13;
          }
          dVar13 = (dVar7 - dVar17) + 1.0;
          uVar10 = (int)((ulong)dVar13 >> 0x20) + uVar6 * 0x100000;
          if ((int)uVar10 < 0x100000) {
            dVar13 = scalbn(dVar13,uVar6);
          }
          else {
            dVar13 = (double)((ulong)dVar13 & 0xffffffff | (ulong)uVar10 << 0x20);
          }
          return dVar15 * dVar13;
        }
        dVar13 = 1e+300;
      }
      return dVar15 * dVar13 * dVar13;
    }
  }
  return NAN;
}

