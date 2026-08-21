
/* v8::base::ieee754::log2(double) */

undefined1  [16] v8::base::ieee754::log2(double param_1)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  iVar5 = SUB84(param_1,0);
  if (0xfffffffffffff < (long)param_1) {
    iVar6 = 0;
LAB_01471574:
    uVar2 = (uint)((ulong)param_1 >> 0x20);
    if (0x7fefffff < (int)uVar2) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_1 + param_1;
      return auVar8;
    }
    if ((iVar5 == 0) && (uVar2 == 0x3ff00000)) {
      return ZEXT816(0);
    }
    uVar1 = (uVar2 & 0xfffff) + 0x95f64;
    dVar7 = (double)((ulong)param_1 & 0xffffffff |
                    (ulong)((uVar1 & 0x100000 | uVar2 & 0xfffff) ^ 0x3ff00000) << 0x20) + -1.0;
    dVar12 = dVar7 * dVar7 * 0.5;
    dVar13 = dVar7 / (dVar7 + 2.0);
    dVar15 = dVar13 * dVar13;
    dVar14 = dVar15 * dVar15;
    dVar3 = (double)((ulong)(dVar7 - dVar12) & 0xffffffff00000000);
    dVar11 = (double)(int)(iVar6 + ((int)uVar2 >> 0x14) + (uVar1 >> 0x14) + -0x3ff);
    dVar7 = ((dVar7 - dVar3) - dVar12) +
            dVar13 * (dVar12 + dVar14 * (dVar14 * (dVar14 * 0.15313837699209373 +
                                                  0.22222198432149784) + 0.3999999999940942) +
                               dVar15 * (dVar14 * (dVar14 * (dVar14 * 0.14798198605116586 +
                                                            0.1818357216161805) + 0.2857142874366239
                                                  ) + 0.6666666666666735));
    dVar12 = dVar3 * 1.4426950407214463 + dVar11;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = dVar12 + dVar3 * 1.4426950407214463 + (dVar11 - dVar12) +
                            dVar7 * 1.4426950407214463 + (dVar7 + dVar3) * 1.6751713164886512e-10;
    return auVar9;
  }
  if (((ulong)param_1 & 0x7fffffff00000000) == 0 && iVar5 == 0) {
    uVar4 = 0xfff0000000000000;
  }
  else {
    if (-1 < (long)param_1) {
      param_1 = param_1 * 18014398509481984.0;
      iVar6 = -0x36;
      goto LAB_01471574;
    }
    uVar4 = 0x7ff4000000000000;
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar4;
  return auVar10;
}

