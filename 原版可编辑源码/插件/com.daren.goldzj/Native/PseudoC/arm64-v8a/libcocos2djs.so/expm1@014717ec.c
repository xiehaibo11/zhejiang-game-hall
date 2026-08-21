
/* v8::base::ieee754::expm1(double) */

undefined1  [16] v8::base::ieee754::expm1(double param_1)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double in_d3;
  double dVar16;
  
  uVar2 = (uint)((ulong)param_1 >> 0x20) & 0x7fffffff;
  if (uVar2 < 0x4043687a) {
    if (uVar2 < 0x3fd62e43) {
      if (uVar2 >> 0x14 < 0x3c9) {
        auVar5._0_8_ = param_1 - ((DAT_01d358d8 + param_1) - (DAT_01d358d8 + param_1));
        auVar5._8_8_ = 0;
        return auVar5;
      }
      uVar2 = 0;
      goto LAB_01471950;
    }
    if (0x3ff0a2b1 < uVar2) goto LAB_014718f8;
    if ((long)param_1 < 0) {
      dVar14 = -1.9082149292705877e-10;
      uVar2 = 0xffffffff;
      dVar15 = param_1 + 0.6931471803691238;
    }
    else {
      dVar14 = 1.9082149292705877e-10;
      uVar2 = 1;
      dVar15 = param_1 + -0.6931471803691238;
    }
  }
  else {
    if (0x40862e41 < uVar2) {
      if (0x7fe < uVar2 >> 0x14) {
        uVar1 = (ulong)param_1 & 0xfffff00000000;
        iVar3 = SUB84(param_1,0);
        dVar14 = param_1 + param_1;
        if (((ulong)param_1 >> 0x20 & 0x80000000) != 0) {
          param_1 = -1.0;
        }
        if (uVar1 != 0 || iVar3 != 0) {
          param_1 = dVar14;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = param_1;
        return auVar4;
      }
      if (709.782712893384 < param_1) {
        auVar6._0_8_ = DAT_01d358d8 * DAT_01d358d8;
        auVar6._8_8_ = 0;
        return auVar6;
      }
    }
    if ((param_1 + 1e-300 < 0.0) && ((long)param_1 < 0)) {
      return ZEXT816(0xbff0000000000000);
    }
LAB_014718f8:
    dVar14 = 0.5;
    if (((ulong)param_1 >> 0x20 & 0x80000000) != 0) {
      dVar14 = -0.5;
    }
    uVar2 = (uint)(param_1 * 1.4426950408889634 + dVar14);
    dVar15 = param_1 + (double)(int)uVar2 * -0.6931471803691238;
    dVar14 = (double)(int)uVar2 * 1.9082149292705877e-10;
  }
  param_1 = dVar15 - dVar14;
  in_d3 = (dVar15 - param_1) - dVar14;
LAB_01471950:
  dVar14 = param_1 * param_1 * 0.5;
  dVar15 = dVar14 * (dVar14 * (dVar14 * (dVar14 * (dVar14 * -2.0109921818362437e-07 +
                                                  4.008217827329362e-06) + -7.93650757867488e-05) +
                              0.0015873015872548146) + -0.03333333333333313) + 1.0;
  dVar16 = 3.0 - param_1 * 0.5 * dVar15;
  dVar15 = dVar14 * ((dVar15 - dVar16) / (6.0 - param_1 * dVar16));
  if (uVar2 == 0) {
    auVar8._0_8_ = param_1 - (param_1 * dVar15 - dVar14);
    auVar8._8_8_ = 0;
    return auVar8;
  }
  dVar14 = (param_1 * (dVar15 - in_d3) - in_d3) - dVar14;
  if (uVar2 == 1) {
    if (param_1 < -0.25) {
      auVar9._0_8_ = (dVar14 - (param_1 + 0.5)) * -2.0;
      auVar9._8_8_ = 0;
      return auVar9;
    }
    auVar11._0_8_ = (param_1 - dVar14) + (param_1 - dVar14) + 1.0;
    auVar11._8_8_ = 0;
    return auVar11;
  }
  if (uVar2 == 0xffffffff) {
    auVar7._0_8_ = (param_1 - dVar14) * 0.5 + -0.5;
    auVar7._8_8_ = 0;
    return auVar7;
  }
  dVar15 = (double)((ulong)(uVar2 * 0x100000 + 0x3ff00000) << 0x20);
  if (0x38 < uVar2) {
    dVar16 = (param_1 - dVar14) + 1.0;
    dVar14 = (dVar16 + dVar16) * 8.98846567431158e+307;
    if (uVar2 != 0x400) {
      dVar14 = dVar16 * dVar15;
    }
    auVar10._0_8_ = dVar14 + -1.0;
    auVar10._8_8_ = 0;
    return auVar10;
  }
  if ((int)uVar2 < 0x14) {
    auVar12._0_8_ =
         ((double)((ulong)(0x3ff00000 - (0x200000U >> (ulong)(uVar2 & 0x1f))) << 0x20) -
         (dVar14 - param_1)) * dVar15;
    auVar12._8_8_ = 0;
    return auVar12;
  }
  auVar13._0_8_ =
       ((param_1 - (dVar14 + (double)((ulong)(uVar2 * -0x100000 + 0x3ff00000) << 0x20))) + 1.0) *
       dVar15;
  auVar13._8_8_ = 0;
  return auVar13;
}

