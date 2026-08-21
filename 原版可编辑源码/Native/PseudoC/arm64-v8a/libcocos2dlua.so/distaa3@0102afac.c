
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
  double dVar8;
  double dVar9;
  double dVar10;
  
  uVar1 = (param_5 - param_6) - param_7 * param_4;
  uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
  dVar3 = *(double *)(param_1 + uVar2);
  if (1.0 < dVar3) {
    dVar3 = 1.0;
  }
  if (dVar3 == 0.0) {
    return ZEXT816(0x412e848000000000);
  }
  dVar8 = (double)param_8;
  dVar9 = (double)param_9;
  dVar4 = SQRT(dVar8 * dVar8 + dVar9 * dVar9);
  if (dVar4 == 0.0) {
    dVar8 = *(double *)(param_2 + uVar2);
    if ((dVar8 != 0.0) && (dVar9 = *(double *)(param_3 + uVar2), dVar9 != 0.0)) {
      dVar10 = SQRT(dVar8 * dVar8 + dVar9 * dVar9);
      if (0.0 < dVar10) {
        dVar8 = dVar8 / dVar10;
                    /* try { // try from 0102b03c to 0112b043 has its CatchHandler @ 0102b1d8 */
        dVar9 = dVar9 / dVar10;
      }
LAB_0102b05c:
      dVar8 = ABS(dVar8);
      dVar9 = ABS(dVar9);
      dVar10 = dVar9;
      if (dVar9 <= dVar8) {
        dVar10 = dVar8;
        dVar8 = dVar9;
      }
      dVar9 = (dVar8 * 0.5) / dVar10;
      if (dVar9 <= dVar3) {
        if (1.0 - dVar9 <= dVar3) {
          auVar7._0_8_ = dVar4 + SQRT((1.0 - dVar3) * dVar8 * (dVar10 + dVar10)) +
                                 (dVar10 + dVar8) * -0.5;
          auVar7._8_8_ = 0;
          return auVar7;
        }
        auVar6._0_8_ = dVar4 + (0.5 - dVar3) * dVar10;
        auVar6._8_8_ = 0;
        return auVar6;
      }
      dVar9 = (dVar10 + dVar8) * 0.5;
      dVar3 = SQRT(dVar3 * dVar8 * (dVar10 + dVar10));
      goto LAB_0102b0a4;
    }
  }
  else if ((param_8 != 0) && (param_9 != 0)) {
    if (0.0 < dVar4) {
      dVar8 = dVar8 / dVar4;
      dVar9 = dVar9 / dVar4;
    }
    goto LAB_0102b05c;
  }
  dVar9 = 0.5;
LAB_0102b0a4:
                    /* try { // try from 0102b0a4 to 0112b0ab has its CatchHandler @ 0102b1bc */
  auVar5._0_8_ = dVar4 + (dVar9 - dVar3);
  auVar5._8_8_ = 0;
  return auVar5;
}

