
/* v8::base::ieee754::acos(double) */

undefined1  [16] v8::base::ieee754::acos(double param_1)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar6 [16];
  
  uVar2 = (uint)((ulong)param_1 >> 0x20);
  uVar1 = uVar2 & 0x7fffffff;
  if (0x3fe < (uVar2 >> 0x14 & 0x7ff)) {
    if (uVar1 != 0x3ff00000 || SUB84(param_1,0) != 0) {
      return ZEXT816(0x7ff4000000000000);
    }
    uVar4 = 0;
    if ((long)param_1 < 0x100000000) {
      uVar4 = 0x400921fb54442d18;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar4;
    return auVar6;
  }
  if (0x1fe < uVar1 >> 0x15) {
    if (-1 < (long)param_1) {
      dVar3 = (1.0 - param_1) * 0.5;
      dVar10 = SQRT(dVar3);
      dVar9 = (double)((ulong)dVar10 & 0xffffffff00000000);
      dVar9 = (dVar3 - dVar9 * dVar9) / (dVar10 + dVar9) +
              dVar10 * ((dVar3 * (dVar3 * (dVar3 * (dVar3 * (dVar3 * (dVar3 * 3.479331075960212e-05
                                                                     + 0.0007915349942898145) +
                                                            -0.04005553450067941) +
                                                   0.20121253213486293) + -0.3255658186224009) +
                                 0.16666666666666666)) /
                       (dVar3 * (dVar3 * (dVar3 * (dVar3 * 0.07703815055590194 + -0.6882839716054533
                                                  ) + 2.0209457602335057) + -2.403394911734414) +
                       1.0)) + dVar9;
      auVar5._0_8_ = dVar9 + dVar9;
      auVar5._8_8_ = 0;
      return auVar5;
    }
    dVar9 = (param_1 + 1.0) * 0.5;
    dVar9 = SQRT(dVar9) +
            SQRT(dVar9) *
            ((dVar9 * (dVar9 * (dVar9 * (dVar9 * (dVar9 * (dVar9 * 3.479331075960212e-05 +
                                                          0.0007915349942898145) +
                                                 -0.04005553450067941) + 0.20121253213486293) +
                               -0.3255658186224009) + 0.16666666666666666)) /
            (dVar9 * (dVar9 * (dVar9 * (dVar9 * 0.07703815055590194 + -0.6882839716054533) +
                              2.0209457602335057) + -2.403394911734414) + 1.0)) +
            -6.123233995736766e-17;
    auVar8._0_8_ = 3.141592653589793 - (dVar9 + dVar9);
    auVar8._8_8_ = 0;
    return auVar8;
  }
  if (uVar1 < 0x3c600001) {
    return ZEXT816(0x3ff921fb54442d18);
  }
  dVar9 = param_1 * param_1;
  auVar7._0_8_ = ((6.123233995736766e-17 -
                  ((dVar9 * (dVar9 * (dVar9 * (dVar9 * (dVar9 * (dVar9 * 3.479331075960212e-05 +
                                                                0.0007915349942898145) +
                                                       -0.04005553450067941) + 0.20121253213486293)
                                     + -0.3255658186224009) + 0.16666666666666666)) /
                  (dVar9 * (dVar9 * (dVar9 * (dVar9 * 0.07703815055590194 + -0.6882839716054533) +
                                    2.0209457602335057) + -2.403394911734414) + 1.0)) * param_1) -
                 param_1) + 1.5707963267948966;
  auVar7._8_8_ = 0;
  return auVar7;
}

