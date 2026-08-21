
long cpDampedRotarySpringInit
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6)

{
  cpConstraintInit(param_4,&PTR_FUN_0172d198,param_5,param_6);
  *(undefined4 *)(param_4 + 0x58) = param_1;
  *(undefined4 *)(param_4 + 0x5c) = param_2;
  *(undefined4 *)(param_4 + 0x60) = param_3;
  *(code **)(param_4 + 0x68) = FUN_01166dd0;
  *(undefined4 *)(param_4 + 0x7c) = 0;
  return param_4;
}

