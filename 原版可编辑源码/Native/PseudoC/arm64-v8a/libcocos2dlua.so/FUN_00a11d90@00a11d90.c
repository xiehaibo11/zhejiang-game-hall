
undefined8 FUN_00a11d90(undefined8 param_1,undefined1 *param_2,uint param_3)

{
  if (0xa0 < param_3) {
    if (0x5a < param_3 - 0xe01) {
      return 0xffffffff;
    }
    if (param_3 - 0xe3b < 4) {
      return 0xffffffff;
    }
    param_3 = param_3 - 0x60;
  }
  *param_2 = (char)param_3;
  return 1;
}

