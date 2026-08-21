
long cpRotaryLimitJointInit
               (undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
               undefined8 param_5)

{
  cpConstraintInit(param_3,&PTR_FUN_0172d2f8,param_4,param_5);
  *(undefined4 *)(param_3 + 0x58) = param_1;
  *(undefined4 *)(param_3 + 0x5c) = param_2;
  *(undefined4 *)(param_3 + 0x68) = 0;
  return param_3;
}

