
byte * FUN_00bff61c(byte *param_1,uint param_2)

{
  for (; 0x7f < param_2; param_2 = param_2 >> 7) {
    *param_1 = (byte)param_2 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)param_2;
  return param_1 + 1;
}

