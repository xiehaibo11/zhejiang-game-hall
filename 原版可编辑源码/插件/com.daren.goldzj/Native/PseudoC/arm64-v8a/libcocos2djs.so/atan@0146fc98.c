
/* v8::base::ieee754::atan(double) */

undefined1  [16] v8::base::ieee754::atan(double param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  double dVar4;
  undefined8 in_register_00005008;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  
  uVar2 = (uint)((ulong)param_1 >> 0x20);
  uVar1 = uVar2 & 0x7fffffff;
  if ((uVar2 >> 0x14 & 0x7ff) < 0x441) {
    if (uVar1 >> 0x12 < 0xff7) {
      lVar3 = 0xffffffff;
      dVar4 = param_1;
      if ((1.0 < param_1 + 1e+300) && (uVar1 >> 0x16 < 0xf9)) {
        auVar6._8_8_ = in_register_00005008;
        auVar6._0_8_ = param_1;
        return auVar6;
      }
    }
    else {
      dVar4 = ABS(param_1);
      if (uVar1 < 0x3ff30000) {
        if (uVar1 < 0x3fe60000) {
          lVar3 = 0;
          dVar4 = (dVar4 + dVar4 + -1.0) / (dVar4 + 2.0);
        }
        else {
          dVar4 = (dVar4 + -1.0) / (dVar4 + 1.0);
          lVar3 = 1;
        }
      }
      else if (uVar1 < 0x40038000) {
        dVar4 = (dVar4 + -1.5) / (dVar4 * 1.5 + 1.0);
        lVar3 = 2;
      }
      else {
        dVar4 = -1.0 / dVar4;
        lVar3 = 3;
      }
    }
    dVar9 = dVar4 * dVar4;
    dVar10 = dVar9 * dVar9;
    dVar9 = dVar9 * (dVar10 * (dVar10 * (dVar10 * (dVar10 * (dVar10 * 0.016285820115365782 +
                                                            0.049768779946159324) +
                                                  0.06661073137387531) + 0.09090887133436507) +
                              0.14285714272503466) + 0.3333333333333293);
    dVar10 = dVar10 * (dVar10 * (dVar10 * (dVar10 * (dVar10 * -0.036531572744216916 +
                                                    -0.058335701337905735) + -0.0769187620504483) +
                                -0.11111110405462356) + -0.19999999999876483);
    if (-1 < (int)lVar3) {
      dVar9 = *(double *)(&UNK_01a3d5d8 + lVar3 * 8) -
              ((dVar4 * (dVar10 + dVar9) - *(double *)(&UNK_01a3d5f8 + lVar3 * 8)) - dVar4);
      dVar4 = -dVar9;
      if (-1 < (long)param_1) {
        dVar4 = dVar9;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = dVar4;
      return auVar7;
    }
    auVar8._0_8_ = dVar4 - dVar4 * (dVar10 + dVar9);
    auVar8._8_8_ = 0;
    return auVar8;
  }
  if ((uVar1 < 0x7ff00001) && ((SUB84(param_1,0) == 0 || (uVar1 != 0x7ff00000)))) {
    if (0xffffffff < (long)param_1) {
      return ZEXT816(0x3ff921fb54442d18);
    }
    return ZEXT816(0xbff921fb54442d18);
  }
  auVar5._0_8_ = param_1 + param_1;
  auVar5._8_8_ = 0;
  return auVar5;
}

