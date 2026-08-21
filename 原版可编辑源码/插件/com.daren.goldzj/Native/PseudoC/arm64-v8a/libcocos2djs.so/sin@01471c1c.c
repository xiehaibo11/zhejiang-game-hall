
/* v8::base::ieee754::sin(double) */

double v8::base::ieee754::sin(double param_1)

{
  uint uVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_20;
  double dStack_18;
  
  uVar2 = (ulong)param_1 >> 0x20 & 0x7fffffff;
  if ((uint)uVar2 < 0x3fe921fc) {
    if (((int)param_1 != 0) || (0xf8 < ((ulong)param_1 & 0x7fc0000000000000) >> 0x36)) {
      dVar3 = param_1 * param_1;
      param_1 = dVar3 * param_1 *
                (dVar3 * (dVar3 * (dVar3 * (dVar3 * (dVar3 * 1.58969099521155e-10 +
                                                    -2.5050760253406863e-08) +
                                           2.7557313707070068e-06) + -0.0001984126982985795) +
                         0.00833333333332249) + -0.16666666666666632) + param_1;
    }
  }
  else if ((uint)(uVar2 >> 0x14) < 0x7ff) {
    uVar1 = FUN_014705ec(&local_20);
    uVar1 = uVar1 & 3;
    if (uVar1 == 2) {
      if (((int)local_20 != 0) || (0xf8 < ((ulong)local_20 & 0x7fc0000000000000) >> 0x36)) {
        dVar3 = local_20 * local_20;
        local_20 = local_20 -
                   (local_20 * dVar3 * 0.16666666666666632 +
                   (dVar3 * (dStack_18 * 0.5 -
                            local_20 * dVar3 *
                            (dVar3 * (dVar3 * (dVar3 * (dVar3 * 1.58969099521155e-10 +
                                                       -2.5050760253406863e-08) +
                                              2.7557313707070068e-06) + -0.0001984126982985795) +
                            0.00833333333332249)) - dStack_18));
      }
    }
    else {
      if (uVar1 == 1) {
        uVar2 = (ulong)local_20 >> 0x20 & 0x7fffffff;
        if (((int)local_20 == 0) && ((uint)(uVar2 >> 0x16) < 0xf9)) {
          return 1.0;
        }
        dVar3 = local_20 * local_20;
        uVar1 = (uint)uVar2;
        dVar5 = dVar3 * (dVar3 * (dVar3 * (dVar3 * (dVar3 * (dVar3 * -1.1359647557788195e-11 +
                                                            2.087572321298175e-09) +
                                                   -2.7557314351390663e-07) + 2.480158728947673e-05)
                                 + -0.001388888888887411) + 0.0416666666666666);
        if (uVar1 < 0x3fd33333) {
          return (dVar3 * dVar5 - local_20 * dStack_18) + dVar3 * -0.5 + 1.0;
        }
        dVar4 = 0.28125;
        if (uVar1 < 0x3fe90001) {
          dVar4 = (double)((ulong)(uVar1 - 0x200000) << 0x20);
        }
        return (1.0 - dVar4) - ((dVar3 * 0.5 - dVar4) - (dVar3 * dVar5 - local_20 * dStack_18));
      }
      if (uVar1 == 0) {
        if (((int)local_20 == 0) && (((ulong)local_20 & 0x7fc0000000000000) >> 0x36 < 0xf9)) {
          return local_20;
        }
        dVar3 = local_20 * local_20;
        return local_20 -
               (local_20 * dVar3 * 0.16666666666666632 +
               (dVar3 * (dStack_18 * 0.5 -
                        local_20 * dVar3 *
                        (dVar3 * (dVar3 * (dVar3 * (dVar3 * 1.58969099521155e-10 +
                                                   -2.5050760253406863e-08) + 2.7557313707070068e-06
                                          ) + -0.0001984126982985795) + 0.00833333333332249)) -
               dStack_18));
      }
      uVar2 = (ulong)local_20 >> 0x20 & 0x7fffffff;
      if (((int)local_20 == 0) && ((uint)(uVar2 >> 0x16) < 0xf9)) {
        local_20 = 1.0;
      }
      else {
        dVar3 = local_20 * local_20;
        uVar1 = (uint)uVar2;
        dVar5 = dVar3 * (dVar3 * (dVar3 * (dVar3 * (dVar3 * (dVar3 * -1.1359647557788195e-11 +
                                                            2.087572321298175e-09) +
                                                   -2.7557314351390663e-07) + 2.480158728947673e-05)
                                 + -0.001388888888887411) + 0.0416666666666666);
        if (uVar1 < 0x3fd33333) {
          local_20 = (dVar3 * dVar5 - local_20 * dStack_18) + dVar3 * -0.5 + 1.0;
        }
        else {
          dVar4 = 0.28125;
          if (uVar1 < 0x3fe90001) {
            dVar4 = (double)((ulong)(uVar1 - 0x200000) << 0x20);
          }
          local_20 = (1.0 - dVar4) -
                     ((dVar3 * 0.5 - dVar4) - (dVar3 * dVar5 - local_20 * dStack_18));
        }
      }
    }
    param_1 = -local_20;
  }
  else {
    param_1 = param_1 - param_1;
  }
  return param_1;
}

