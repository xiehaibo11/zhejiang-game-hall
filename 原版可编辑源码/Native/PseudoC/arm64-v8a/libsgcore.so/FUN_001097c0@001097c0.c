
undefined1  [16] FUN_001097c0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  do {
    DAT_00113110 = 0x7fffffff;
    DAT_00113114 = 0x3fffffff;
    DAT_00113118 = 0xfffffff;
    DAT_0011311c = 0x80000000;
    DAT_00113120 = 0xc0000000;
    DAT_001130f8 = 0x13579bdf;
    DAT_001130fc = 0x2468ace0;
    DAT_00113100 = 0xfdb97531;
    DAT_00113104 = 0x80000062;
    DAT_00113108 = 0x40000020;
    DAT_0011310c = 0x10000002;
    DAT_00113124 = 0xf0000000;
    if (DAT_00113190 < 10) {
      DAT_001130f8 = 0x13579bdf;
      DAT_001130fc = 0x2468ace0;
      DAT_00113100 = 0xfdb97531;
      DAT_00113104 = 0x80000062;
      DAT_00113108 = 0x40000020;
      DAT_0011310c = 0x10000002;
      DAT_00113110 = 0x7fffffff;
      DAT_00113114 = 0x3fffffff;
      DAT_00113118 = 0xfffffff;
      DAT_0011311c = 0x80000000;
      DAT_00113120 = 0xc0000000;
      DAT_00113124 = 0xf0000000;
      return auVar1;
    }
  } while (((DAT_00113194 + -1) * DAT_00113194 & 1U) != 0);
  return auVar1;
}

