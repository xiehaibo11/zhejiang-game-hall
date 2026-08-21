
undefined8 FT_Outline_Done(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  if (param_1 == (long *)0x0) {
    return 0x21;
  }
  if (param_2 != (undefined8 *)0x0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      if ((*(byte *)(param_2 + 4) & 1) != 0) {
        if (param_2[1] != 0) {
          (**(code **)(lVar1 + 0x10))(lVar1);
        }
        param_2[1] = 0;
        if (param_2[2] != 0) {
          (**(code **)(lVar1 + 0x10))(lVar1);
        }
        param_2[2] = 0;
        if (param_2[3] != 0) {
          (**(code **)(lVar1 + 0x10))(lVar1);
        }
        param_2[3] = 0;
      }
      param_2[4] = 0;
      param_2[1] = 0;
      *param_2 = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      return 0;
    }
    return 6;
  }
  return 0x14;
}

