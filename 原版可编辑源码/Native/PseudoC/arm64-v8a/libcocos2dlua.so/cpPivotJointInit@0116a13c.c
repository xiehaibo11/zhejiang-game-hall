
long cpPivotJointInit(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     long param_5,undefined8 param_6,undefined8 param_7)

{
  cpConstraintInit(param_5,&PTR_FUN_0172d228,param_6,param_7);
  *(undefined4 *)(param_5 + 0x58) = param_1;
  *(undefined4 *)(param_5 + 0x5c) = param_2;
  *(undefined4 *)(param_5 + 0x60) = param_3;
  *(undefined4 *)(param_5 + 100) = param_4;
  *(undefined8 *)(param_5 + 0x88) = 0;
  return param_5;
}

