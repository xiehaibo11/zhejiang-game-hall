
/* v8::base::ieee754::log10(double) */

undefined1  [16] v8::base::ieee754::log10(double param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  
  if ((long)param_1 < 0x10000000000000) {
    if (((ulong)param_1 & 0x7fffffff00000000) == 0 && SUB84(param_1,0) == 0) {
      return ZEXT816(0xfff0000000000000);
    }
    if ((long)param_1 < 0) {
      return ZEXT816(0x7ff8000000000000);
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
  if ((SUB84(param_1,0) == 0) && (uVar2 == 0x3ff00000)) {
    return ZEXT816(0);
  }
  iVar3 = iVar3 + ((int)uVar2 >> 0x14) + -0x3ff;
  iVar1 = iVar3 >> 0x1f;
  dVar7 = (double)(iVar3 - iVar1);
  dVar4 = (double)log((double)((ulong)param_1 & 0xffffffff |
                              (ulong)((uVar2 & 0xfffff | iVar1 * -0x100000) ^ 0x3ff00000) << 0x20));
  auVar6._0_8_ = dVar7 * 0.30102999566361177 +
                 dVar7 * 3.694239077158931e-13 + dVar4 * 0.4342944819032518;
  auVar6._8_8_ = 0;
  return auVar6;
}

