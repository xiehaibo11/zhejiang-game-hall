
/* v8::base::ieee754::log(double) */

undefined1  [16] v8::base::ieee754::log(double param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  if ((long)param_1 < 0x10000000000000) {
    if (((ulong)param_1 & 0x7fffffff00000000) == 0 && SUB84(param_1,0) == 0) {
      return ZEXT816(0xfff0000000000000);
    }
    if ((long)param_1 < 0) {
      return ZEXT816(0x7ff4000000000000);
    }
    param_1 = param_1 * 18014398509481984.0;
    iVar3 = -0x36;
  }
  else {
    iVar3 = 0;
  }
  uVar2 = (uint)((ulong)param_1 >> 0x20);
  if (0x7fefffff < (int)uVar2) {
    auVar5._0_8_ = param_1 + param_1;
    auVar5._8_8_ = 0;
    return auVar5;
  }
  uVar1 = uVar2 & 0xfffff;
  iVar3 = iVar3 + ((int)uVar2 >> 0x14) + (uVar1 + 0x95f64 >> 0x14) + -0x3ff;
  dVar4 = (double)((ulong)param_1 & 0xffffffff |
                  (ulong)((uVar1 + 0x95f64 & 0x100000 | uVar2 & 0xfffff) ^ 0x3ff00000) << 0x20) +
          -1.0;
  if ((uVar2 + 2 & 0xfffff) < 3) {
    if (dVar4 == 0.0) {
      if (iVar3 != 0) {
        auVar6._0_8_ = (double)iVar3 * 0.6931471803691238 + (double)iVar3 * 1.9082149292705877e-10;
        auVar6._8_8_ = 0;
        return auVar6;
      }
      return ZEXT816(0);
    }
    dVar12 = dVar4 * dVar4 * (dVar4 * -0.3333333333333333 + 0.5);
    if (iVar3 != 0) {
      auVar7._0_8_ = (double)iVar3 * 0.6931471803691238 -
                     ((dVar12 + (double)iVar3 * -1.9082149292705877e-10) - dVar4);
      auVar7._8_8_ = 0;
      return auVar7;
    }
LAB_0146f614:
    auVar9._0_8_ = dVar4 - dVar12;
    auVar9._8_8_ = 0;
    return auVar9;
  }
  dVar11 = dVar4 / (dVar4 + 2.0);
  dVar14 = dVar11 * dVar11;
  dVar12 = dVar14 * dVar14;
  dVar13 = (double)iVar3;
  dVar14 = dVar12 * (dVar12 * (dVar12 * 0.15313837699209373 + 0.22222198432149784) +
                    0.3999999999940942) +
           dVar14 * (dVar12 * (dVar12 * (dVar12 * 0.14798198605116586 + 0.1818357216161805) +
                              0.2857142874366239) + 0.6666666666666735);
  if ((int)(uVar1 - 0x6147a | 0x6b851 - uVar1) < 1) {
    if (iVar3 == 0) {
      auVar10._0_8_ = dVar4 - dVar11 * (dVar4 - dVar14);
      auVar10._8_8_ = 0;
      return auVar10;
    }
    dVar12 = dVar11 * (dVar4 - dVar14) + dVar13 * -1.9082149292705877e-10;
  }
  else {
    dVar12 = dVar4 * dVar4 * 0.5;
    if (iVar3 == 0) {
      dVar12 = dVar12 - dVar11 * (dVar12 + dVar14);
      goto LAB_0146f614;
    }
    dVar12 = dVar12 - (dVar13 * 1.9082149292705877e-10 + dVar11 * (dVar12 + dVar14));
  }
  auVar8._0_8_ = dVar13 * 0.6931471803691238 - (dVar12 - dVar4);
  auVar8._8_8_ = 0;
  return auVar8;
}

