
undefined1  [16]
distaa3(long param_1,long param_2,long param_3,int param_4,int param_5,int param_6,int param_7,
       int param_8,int param_9)

{
  uint uVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar1 = (param_5 - param_6) - param_7 * param_4;
  uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
  dVar3 = *(double *)(param_1 + uVar2);
  if (1.0 < dVar3) {
    dVar3 = 1.0;
  }
  if (dVar3 == 0.0) {
    return ZEXT816(0x412e848000000000);
  }
  dVar9 = (double)param_8;
  dVar10 = (double)param_9;
  dVar4 = SQRT(dVar9 * dVar9 + dVar10 * dVar10);
  if (dVar4 == 0.0) {
    dVar9 = *(double *)(param_2 + uVar2);
    if ((dVar9 != 0.0) && (dVar10 = *(double *)(param_3 + uVar2), dVar10 != 0.0)) {
      dVar11 = SQRT(dVar9 * dVar9 + dVar10 * dVar10);
      if (0.0 < dVar11) {
        dVar9 = dVar9 / dVar11;
        dVar10 = dVar10 / dVar11;
      }
LAB_009f5700:
      dVar9 = ABS(dVar9);
      dVar10 = ABS(dVar10);
      dVar11 = dVar10;
      if (dVar10 <= dVar9) {
        dVar11 = dVar9;
        dVar9 = dVar10;
      }
      dVar10 = (dVar9 * 0.5) / dVar11;
      if (dVar10 <= dVar3) {
        if (1.0 - dVar10 <= dVar3) {
          auVar8._0_8_ = dVar4 + SQRT((1.0 - dVar3) * dVar9 * (dVar11 + dVar11)) +
                                 (dVar11 + dVar9) * -0.5;
          auVar8._8_8_ = 0;
          return auVar8;
        }
        auVar7._0_8_ = dVar4 + (0.5 - dVar3) * dVar11;
        auVar7._8_8_ = 0;
        return auVar7;
      }
      auVar5._0_8_ = dVar4 + ((dVar11 + dVar9) * 0.5 - SQRT(dVar3 * dVar9 * (dVar11 + dVar11)));
      auVar5._8_8_ = 0;
      return auVar5;
    }
  }
  else if ((param_8 != 0) && (param_9 != 0)) {
    if (0.0 < dVar4) {
      dVar9 = dVar9 / dVar4;
      dVar10 = dVar10 / dVar4;
    }
    goto LAB_009f5700;
  }
  auVar6._0_8_ = dVar4 + (0.5 - dVar3);
  auVar6._8_8_ = 0;
  return auVar6;
}

