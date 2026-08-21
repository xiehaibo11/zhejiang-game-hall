
/* v8::base::ieee754::cbrt(double) */

undefined1  [16] v8::base::ieee754::cbrt(double param_1)

{
  uint uVar1;
  double dVar2;
  int iVar3;
  ulong uVar4;
  undefined8 in_register_00005008;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  
  uVar1 = (uint)((ulong)param_1 >> 0x20);
  if (0x7fe < (uVar1 >> 0x14 & 0x7ff)) {
    auVar5._0_8_ = param_1 + param_1;
    auVar5._8_8_ = 0;
    return auVar5;
  }
  uVar4 = (ulong)param_1 >> 0x20 & 0x7fffffff;
  if (uVar4 >> 0x14 == 0) {
    if ((int)uVar4 == 0 && SUB84(param_1,0) == 0) goto LAB_01471c18;
    uVar4 = (ulong)(param_1 * 18014398509481984.0) >> 0x20 & 0x7fffffff;
    iVar3 = 0x297f7893;
  }
  else {
    iVar3 = 0x2a9f7893;
  }
  dVar2 = (double)((ulong)((int)(uVar4 / 3) + iVar3 | uVar1 & 0x80000000) << 0x20);
  dVar7 = dVar2 * dVar2 * (dVar2 / param_1);
  dVar2 = (double)((long)((dVar7 * dVar7 * dVar7 *
                           (dVar7 * 0.14599619288661245 + -0.758397934778766) +
                          dVar7 * (dVar7 * 1.6214297201053545 + -1.8849797954337717) +
                          1.87595182427177) * dVar2) + 0x80000000U & 0xffffffffc0000000);
  dVar7 = param_1 / (dVar2 * dVar2);
  param_1 = ((dVar7 - dVar2) / (dVar2 + dVar2 + dVar7)) * dVar2 + dVar2;
  in_register_00005008 = 0;
LAB_01471c18:
  auVar6._8_8_ = in_register_00005008;
  auVar6._0_8_ = param_1;
  return auVar6;
}

