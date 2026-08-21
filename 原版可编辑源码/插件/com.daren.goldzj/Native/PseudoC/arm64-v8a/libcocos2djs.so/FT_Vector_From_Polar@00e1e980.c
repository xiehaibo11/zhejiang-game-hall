
void FT_Vector_From_Polar(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = param_2;
    param_1[1] = 0;
    FT_Vector_Rotate(param_1,param_3);
    return;
  }
  return;
}

