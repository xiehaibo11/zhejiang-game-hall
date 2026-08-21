
long cpDampedSpringInit(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,long param_8,
                       undefined8 param_9,undefined8 param_10)

{
  cpConstraintInit(param_8,&PTR_FUN_0172d290,param_9,param_10);
  *(undefined4 *)(param_8 + 0x58) = param_1;
  *(undefined4 *)(param_8 + 0x5c) = param_2;
  *(undefined4 *)(param_8 + 0x60) = param_3;
  *(undefined4 *)(param_8 + 100) = param_4;
  *(undefined4 *)(param_8 + 0x68) = param_5;
  *(undefined4 *)(param_8 + 0x6c) = param_6;
  *(undefined4 *)(param_8 + 0x70) = param_7;
  *(code **)(param_8 + 0x78) = FUN_0116ea8c;
  *(undefined4 *)(param_8 + 0xa4) = 0;
  return param_8;
}

