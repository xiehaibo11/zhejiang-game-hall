
undefined8 FT_Outline_Done_Internal(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    uVar1 = 0x14;
  }
  else if (param_1 == 0) {
    uVar1 = 6;
  }
  else {
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      if (param_2[1] != 0) {
        (**(code **)(param_1 + 0x10))(param_1);
      }
      param_2[1] = 0;
      if (param_2[2] != 0) {
        (**(code **)(param_1 + 0x10))(param_1);
      }
      param_2[2] = 0;
      if (param_2[3] != 0) {
        (**(code **)(param_1 + 0x10))(param_1);
      }
      param_2[3] = 0;
    }
    uVar1 = 0;
    param_2[4] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
  }
  return uVar1;
}

