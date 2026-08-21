
undefined8 FT_Palette_Select(long param_1,undefined2 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if ((*(byte *)(param_1 + 0x10) >> 3 & 1) == 0) {
    uVar1 = 0;
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
      return uVar1;
    }
  }
  else {
    uVar1 = (**(code **)(*(long *)(param_1 + 0x370) + 0x100))(param_1,param_2);
    if ((int)uVar1 == 0) {
      uVar1 = 0;
      *(undefined2 *)(param_1 + 0x440) = param_2;
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = *(undefined8 *)(param_1 + 0x448);
      }
    }
  }
  return uVar1;
}

