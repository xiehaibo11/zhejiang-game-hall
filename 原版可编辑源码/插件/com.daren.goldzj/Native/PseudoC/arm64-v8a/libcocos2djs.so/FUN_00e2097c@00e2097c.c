
undefined8
FUN_00e2097c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
            undefined8 *param_5)

{
  long lVar1;
  
  lVar1 = FUN_00e20f2c(*param_1,param_3,".resource/");
  if (lVar1 != 0) {
    *param_4 = lVar1;
    *param_5 = 0;
    return 0;
  }
  return 0x40;
}

