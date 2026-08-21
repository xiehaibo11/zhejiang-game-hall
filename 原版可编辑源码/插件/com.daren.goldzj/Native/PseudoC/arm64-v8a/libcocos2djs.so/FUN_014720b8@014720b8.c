
undefined1  [16] FUN_014720b8(undefined1 param_1 [16],double param_2,int param_3)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  ulong uVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  
  dVar5 = param_1._0_8_;
  uVar4 = (ulong)dVar5 >> 0x20 & 0x7fffffff;
  uVar3 = (uint)uVar4;
  if (((int)dVar5 != 0) || (0x3e2 < (uint)(uVar4 >> 0x14))) {
    if (0x3fe59427 < uVar3) {
      dVar2 = -dVar5;
      dVar1 = -param_2;
      if (-1 < (long)dVar5) {
        dVar2 = dVar5;
        dVar1 = param_2;
      }
      dVar5 = (0.7853981633974483 - dVar2) + (3.061616997868383e-17 - dVar1);
      param_2 = 0.0;
    }
    dVar1 = dVar5 * dVar5;
    dVar2 = dVar1 * dVar1;
    dVar2 = dVar5 * dVar1 * 0.3333333333333341 +
            param_2 + dVar1 * (param_2 +
                              dVar5 * dVar1 *
                              (dVar2 * (dVar2 * (dVar2 * (dVar2 * (dVar2 * -1.8558637485527546e-05 +
                                                                  7.817944429395571e-05) +
                                                         0.0005880412408202641) +
                                                0.0035920791075913124) + 0.021869488294859542) +
                               0.13333333333320124 +
                              dVar1 * (dVar2 * (dVar2 * (dVar2 * (dVar2 * (dVar2 * 
                                                  2.590730518636337e-05 + 7.140724913826082e-05) +
                                                  0.0002464631348184699) + 0.0014562094543252903) +
                                               0.0088632398235993) + 0.05396825397622605)));
    dVar1 = dVar5 + dVar2;
    if (uVar3 < 0x3fe59428) {
      if (param_3 != 1) {
        dVar10 = (double)((ulong)(-1.0 / dVar1) & 0xffffffff00000000);
        dVar1 = (-1.0 / dVar1) *
                ((double)((ulong)dVar1 & 0xffffffff00000000) * dVar10 + 1.0 +
                (dVar2 - ((double)((ulong)dVar1 & 0xffffffff00000000) - dVar5)) * dVar10) + dVar10;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = dVar1;
      return auVar7;
    }
    dVar5 = dVar5 - ((dVar1 * dVar1) / (dVar1 + (double)param_3) - dVar2);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = ((double)param_3 - (dVar5 + dVar5)) *
                   (double)(int)(1 - (param_1._4_4_ >> 0x1e & 2));
    return auVar6;
  }
  if ((param_3 == -1 && param_1._0_4_ == 0) && uVar3 == 0) {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = 1.0 / ABS(dVar5);
    return auVar8;
  }
  if (param_3 != 1) {
    dVar10 = -1.0 / (dVar5 + param_2);
    dVar1 = (double)((ulong)(dVar5 + param_2) & 0xffffffff00000000);
    dVar2 = (double)((ulong)dVar10 & 0xffffffff00000000);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = dVar10 * (dVar1 * dVar2 + 1.0 + (param_2 - (dVar1 - dVar5)) * dVar2) + dVar2;
    return auVar9;
  }
  return param_1;
}

