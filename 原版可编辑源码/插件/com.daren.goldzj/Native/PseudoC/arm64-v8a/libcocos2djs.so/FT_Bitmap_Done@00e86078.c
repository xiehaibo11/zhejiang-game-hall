
undefined8 FT_Bitmap_Done(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 == (undefined8 *)0x0) {
    return 0x21;
  }
  if (param_2 != (undefined8 *)0x0) {
    FUN_00e139fc(*param_1,param_2[2]);
    param_2[4] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    return 0;
  }
  return 6;
}

