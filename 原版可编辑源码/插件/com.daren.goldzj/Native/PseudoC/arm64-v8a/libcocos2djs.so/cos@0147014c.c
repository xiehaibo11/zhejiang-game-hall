
/* v8::base::ieee754::cos(double) */

undefined1  [16] v8::base::ieee754::cos(double param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double local_20;
  double dStack_18;
  
  uVar1 = (uint)((ulong)param_1 >> 0x20) & 0x7fffffff;
  if (uVar1 < 0x3fe921fc) {
    if (((int)param_1 != 0) || (0xf8 < uVar1 >> 0x16)) {
      dVar4 = param_1 * param_1;
      dVar5 = dVar4 * (dVar4 * (dVar4 * (dVar4 * (dVar4 * (dVar4 * -1.1359647557788195e-11 +
                                                          2.087572321298175e-09) +
                                                 -2.7557314351390663e-07) + 2.480158728947673e-05) +
                               -0.001388888888887411) + 0.0416666666666666);
      if (0x3fd33332 < uVar1) {
        dVar6 = 0.28125;
        if (uVar1 < 0x3fe90001) {
          dVar6 = (double)((ulong)(uVar1 - 0x200000) << 0x20);
        }
        local_20 = (1.0 - dVar6) - ((dVar4 * 0.5 - dVar6) - (dVar4 * dVar5 + param_1 * -0.0));
        goto LAB_014705e0;
      }
      dVar5 = dVar4 * dVar5 + param_1 * -0.0;
LAB_0147022c:
      local_20 = dVar5 + dVar4 * -0.5 + 1.0;
      goto LAB_014705e0;
    }
LAB_01470184:
    local_20 = 1.0;
  }
  else {
    if (0x7fe < uVar1 >> 0x14) {
      local_20 = param_1 - param_1;
      goto LAB_014705e0;
    }
    uVar1 = FUN_014705ec(&local_20);
    uVar1 = uVar1 & 3;
    if (uVar1 == 2) {
      uVar2 = (ulong)local_20 >> 0x20 & 0x7fffffff;
      if (((int)local_20 == 0) && ((uint)(uVar2 >> 0x16) < 0xf9)) {
        local_20 = 1.0;
      }
      else {
        dVar4 = local_20 * local_20;
        uVar1 = (uint)uVar2;
        dVar5 = dVar4 * (dVar4 * (dVar4 * (dVar4 * (dVar4 * (dVar4 * -1.1359647557788195e-11 +
                                                            2.087572321298175e-09) +
                                                   -2.7557314351390663e-07) + 2.480158728947673e-05)
                                 + -0.001388888888887411) + 0.0416666666666666);
        if (uVar1 < 0x3fd33333) {
          local_20 = (dVar4 * dVar5 - local_20 * dStack_18) + dVar4 * -0.5 + 1.0;
        }
        else {
          dVar6 = 0.28125;
          if (uVar1 < 0x3fe90001) {
            dVar6 = (double)((ulong)(uVar1 - 0x200000) << 0x20);
          }
          local_20 = (1.0 - dVar6) -
                     ((dVar4 * 0.5 - dVar6) - (dVar4 * dVar5 - local_20 * dStack_18));
        }
      }
    }
    else {
      if (uVar1 != 1) {
        if (uVar1 != 0) {
          if (((int)local_20 != 0) || (0xf8 < ((ulong)local_20 & 0x7fc0000000000000) >> 0x36)) {
            dVar4 = local_20 * local_20;
            local_20 = local_20 -
                       (local_20 * dVar4 * 0.16666666666666632 +
                       (dVar4 * (dStack_18 * 0.5 -
                                local_20 * dVar4 *
                                (dVar4 * (dVar4 * (dVar4 * (dVar4 * 1.58969099521155e-10 +
                                                           -2.5050760253406863e-08) +
                                                  2.7557313707070068e-06) + -0.0001984126982985795)
                                + 0.00833333333332249)) - dStack_18));
          }
          goto LAB_014705e0;
        }
        uVar2 = (ulong)local_20 >> 0x20 & 0x7fffffff;
        if (((int)local_20 != 0) || (0xf8 < (uint)(uVar2 >> 0x16))) {
          dVar4 = local_20 * local_20;
          uVar1 = (uint)uVar2;
          dVar5 = dVar4 * (dVar4 * (dVar4 * (dVar4 * (dVar4 * (dVar4 * -1.1359647557788195e-11 +
                                                              2.087572321298175e-09) +
                                                     -2.7557314351390663e-07) +
                                            2.480158728947673e-05) + -0.001388888888887411) +
                          0.0416666666666666);
          if (0x3fd33332 < uVar1) {
            dVar6 = 0.28125;
            if (uVar1 < 0x3fe90001) {
              dVar6 = (double)((ulong)(uVar1 - 0x200000) << 0x20);
            }
            local_20 = (1.0 - dVar6) -
                       ((dVar4 * 0.5 - dVar6) - (dVar4 * dVar5 - local_20 * dStack_18));
            goto LAB_014705e0;
          }
          dVar5 = dVar4 * dVar5 - local_20 * dStack_18;
          goto LAB_0147022c;
        }
        goto LAB_01470184;
      }
      if (((int)local_20 != 0) || (0xf8 < ((ulong)local_20 & 0x7fc0000000000000) >> 0x36)) {
        dVar4 = local_20 * local_20;
        local_20 = local_20 -
                   (local_20 * dVar4 * 0.16666666666666632 +
                   (dVar4 * (dStack_18 * 0.5 -
                            local_20 * dVar4 *
                            (dVar4 * (dVar4 * (dVar4 * (dVar4 * 1.58969099521155e-10 +
                                                       -2.5050760253406863e-08) +
                                              2.7557313707070068e-06) + -0.0001984126982985795) +
                            0.00833333333332249)) - dStack_18));
      }
    }
    local_20 = -local_20;
  }
LAB_014705e0:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_20;
  return auVar3;
}

