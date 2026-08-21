
long cpSimpleMotorInit(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  cpConstraintInit(param_2,&PTR_FUN_0172d2d8,param_3,param_4);
  *(undefined4 *)(param_2 + 0x58) = param_1;
  *(undefined4 *)(param_2 + 0x60) = 0;
  return param_2;
}

