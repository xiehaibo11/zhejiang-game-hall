
/* v8::base::ieee754::log1p(double) */

undefined1  [16] v8::base::ieee754::log1p(double param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 in_register_00005008;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  uVar3 = (uint)((ulong)param_1 >> 0x20);
  if ((int)uVar3 < 0x3fda827a) {
    uVar4 = (ulong)param_1 >> 0x20 & 0x7fffffff;
    uVar1 = (uint)(uVar4 >> 0x14);
    if (0x3fe < uVar1) {
      if (param_1 == -1.0) {
        return ZEXT816(0xfff0000000000000);
      }
      return ZEXT816(0x7ff4000000000000);
    }
    if ((uint)(uVar4 >> 0x15) < 0x1f1) {
      if ((0.0 < param_1 + 18014398509481984.0) && (uVar1 < 0x3c9)) {
        auVar6._8_8_ = in_register_00005008;
        auVar6._0_8_ = param_1;
        return auVar6;
      }
      auVar10._0_8_ = param_1 + param_1 * param_1 * -0.5;
      auVar10._8_8_ = 0;
      return auVar10;
    }
    if (0x402d413b < uVar3 + 0x402d413b) {
      dVar13 = param_1 * 0.5;
      iVar2 = 0;
      dVar14 = dVar13 * param_1;
      goto LAB_0146f790;
    }
LAB_0146f6f0:
    dVar14 = param_1 + 1.0;
    iVar2 = (int)((long)dVar14 >> 0x34) + -0x3ff;
    dVar13 = (param_1 - dVar14) + 1.0;
    if (iVar2 < 1) {
      dVar13 = param_1 - (dVar14 + -1.0);
    }
    dVar13 = dVar13 / dVar14;
    param_1 = dVar14;
  }
  else {
    if (0x7fefffff < (int)uVar3) {
      auVar5._0_8_ = param_1 + param_1;
      auVar5._8_8_ = 0;
      return auVar5;
    }
    if ((int)uVar3 < 0x43400000) goto LAB_0146f6f0;
    iVar2 = (uVar3 >> 0x14) - 0x3ff;
    dVar13 = 0.0;
  }
  uVar3 = (uint)((ulong)param_1 >> 0x20) & 0xfffff;
  if (uVar3 < 0x6a09e) {
    dVar14 = (double)((ulong)param_1 & 0xffffffff | (ulong)(uVar3 | 0x3ff00000) << 0x20);
  }
  else {
    iVar2 = iVar2 + 1;
    dVar14 = (double)((ulong)(uVar3 | 0x3fe00000) << 0x20 | (ulong)param_1 & 0xffffffff);
    uVar3 = 0x100000 - uVar3 >> 2;
  }
  param_1 = dVar14 + -1.0;
  dVar14 = param_1 * param_1 * 0.5;
  if (uVar3 == 0) {
    if (param_1 != 0.0) {
      dVar14 = dVar14 * (param_1 * -0.6666666666666666 + 1.0);
      if (iVar2 != 0) {
        auVar11._0_8_ =
             (double)iVar2 * 0.6931471803691238 -
             ((dVar14 - (dVar13 + (double)iVar2 * 1.9082149292705877e-10)) - param_1);
        auVar11._8_8_ = 0;
        return auVar11;
      }
      auVar12._0_8_ = param_1 - dVar14;
      auVar12._8_8_ = 0;
      return auVar12;
    }
    if (iVar2 != 0) {
      auVar8._0_8_ = (double)iVar2 * 0.6931471803691238 +
                     dVar13 + (double)iVar2 * 1.9082149292705877e-10;
      auVar8._8_8_ = 0;
      return auVar8;
    }
    return ZEXT816(0);
  }
LAB_0146f790:
  dVar15 = param_1 / (param_1 + 2.0);
  dVar16 = dVar15 * dVar15;
  dVar16 = dVar16 * (dVar16 * (dVar16 * (dVar16 * (dVar16 * (dVar16 * (dVar16 * 0.14798198605116586
                                                                      + 0.15313837699209373) +
                                                            0.1818357216161805) +
                                                  0.22222198432149784) + 0.2857142874366239) +
                              0.3999999999940942) + 0.6666666666666735);
  if (iVar2 != 0) {
    auVar7._0_8_ = (double)iVar2 * 0.6931471803691238 -
                   ((dVar14 - (dVar13 + (double)iVar2 * 1.9082149292705877e-10 +
                              dVar15 * (dVar14 + dVar16))) - param_1);
    auVar7._8_8_ = 0;
    return auVar7;
  }
  auVar9._0_8_ = param_1 - (dVar14 - dVar15 * (dVar14 + dVar16));
  auVar9._8_8_ = 0;
  return auVar9;
}

