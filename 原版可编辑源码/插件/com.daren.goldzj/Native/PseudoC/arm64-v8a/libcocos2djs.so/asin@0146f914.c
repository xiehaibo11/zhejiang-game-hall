
/* v8::base::ieee754::asin(double) */

undefined1  [16] v8::base::ieee754::asin(double param_1)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  undefined8 in_register_00005008;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar2 = (uint)((ulong)param_1 >> 0x20);
  uVar1 = uVar2 & 0x7fffffff;
  if (0x3fe < (uVar2 >> 0x14 & 0x7ff)) {
    if (uVar1 != 0x3ff00000 || SUB84(param_1,0) != 0) {
      return ZEXT816(0x7ff4000000000000);
    }
    auVar5._0_8_ = param_1 * 1.5707963267948966 + param_1 * 6.123233995736766e-17;
    auVar5._8_8_ = 0;
    return auVar5;
  }
  if (0x1fe < uVar1 >> 0x15) {
    dVar8 = (1.0 - ABS(param_1)) * 0.5;
    dVar10 = dVar8 * (dVar8 * (dVar8 * (dVar8 * 0.07703815055590194 + -0.6882839716054533) +
                              2.0209457602335057) + -2.403394911734414) + 1.0;
    dVar11 = dVar8 * (dVar8 * (dVar8 * (dVar8 * (dVar8 * (dVar8 * 3.479331075960212e-05 +
                                                         0.0007915349942898145) +
                                                -0.04005553450067941) + 0.20121253213486293) +
                              -0.3255658186224009) + 0.16666666666666666);
    dVar9 = SQRT(dVar8);
    if (uVar1 < 0x3fef3333) {
      dVar3 = (double)((ulong)dVar9 & 0xffffffff00000000);
      dVar8 = (dVar8 - dVar3 * dVar3) / (dVar9 + dVar3);
      dVar8 = ((0.7853981633974483 - (dVar3 + dVar3)) -
              ((dVar9 + dVar9) * (dVar11 / dVar10) - (6.123233995736766e-17 - (dVar8 + dVar8)))) +
              0.7853981633974483;
    }
    else {
      dVar9 = dVar9 + dVar9 * (dVar11 / dVar10);
      dVar8 = 1.5707963267948966 - (dVar9 + dVar9 + -6.123233995736766e-17);
    }
    if ((long)param_1 < 0x100000000) {
      dVar8 = -dVar8;
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar8;
    return auVar7;
  }
  if (uVar1 >> 0x16 < 0xf9) {
    dVar8 = 0.0;
    if (1.0 < param_1 + 1e+300) {
      auVar4._8_8_ = in_register_00005008;
      auVar4._0_8_ = param_1;
      return auVar4;
    }
  }
  else {
    dVar8 = param_1 * param_1;
  }
  auVar6._0_8_ = ((dVar8 * (dVar8 * (dVar8 * (dVar8 * (dVar8 * (dVar8 * 3.479331075960212e-05 +
                                                               0.0007915349942898145) +
                                                      -0.04005553450067941) + 0.20121253213486293) +
                                    -0.3255658186224009) + 0.16666666666666666)) /
                 (dVar8 * (dVar8 * (dVar8 * (dVar8 * 0.07703815055590194 + -0.6882839716054533) +
                                   2.0209457602335057) + -2.403394911734414) + 1.0)) * param_1 +
                 param_1;
  auVar6._8_8_ = 0;
  return auVar6;
}

