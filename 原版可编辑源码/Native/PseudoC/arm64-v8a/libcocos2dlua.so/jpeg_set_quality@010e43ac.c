
void jpeg_set_quality(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if ((int)param_2 < 2) {
    param_2 = 1;
  }
  if (99 < (int)param_2) {
    param_2 = 100;
  }
  if ((int)param_2 < 0x32) {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = 5000 / param_2;
    }
    jpeg_set_linear_quality(param_1,uVar1);
    return;
  }
  jpeg_set_linear_quality(param_1,param_2 * -2 + 200);
  return;
}

