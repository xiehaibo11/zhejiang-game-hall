
long cpSlideJointInit(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,long param_7,undefined8 param_8,
                     undefined8 param_9)

{
  cpConstraintInit(param_7,&PTR_FUN_0172d338,param_8,param_9);
  *(undefined4 *)(param_7 + 0x58) = param_1;
  *(undefined4 *)(param_7 + 0x5c) = param_2;
  *(undefined4 *)(param_7 + 0x60) = param_3;
  *(undefined4 *)(param_7 + 100) = param_4;
  *(undefined4 *)(param_7 + 0x68) = param_5;
  *(undefined4 *)(param_7 + 0x6c) = param_6;
  *(undefined4 *)(param_7 + 0x8c) = 0;
  return param_7;
}

