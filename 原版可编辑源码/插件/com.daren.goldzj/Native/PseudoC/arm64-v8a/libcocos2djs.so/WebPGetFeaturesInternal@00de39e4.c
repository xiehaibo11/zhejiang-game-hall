
undefined8 WebPGetFeaturesInternal(long param_1,undefined8 param_2,undefined8 *param_3,uint param_4)

{
  undefined8 uVar1;
  
  if (((param_1 != 0) && (param_3 != (undefined8 *)0x0)) && ((param_4 & 0xffffff00) == 0x200)) {
    param_3[4] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    uVar1 = FUN_00de27bc();
    return uVar1;
  }
  return 2;
}

