
void FT_Bitmap_New(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  return;
}

