
void * cpRotaryLimitJointNew
                 (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x70);
  cpConstraintInit(pvVar1,&PTR_FUN_0172d2f8,param_3,param_4);
  *(undefined4 *)((long)pvVar1 + 0x58) = param_1;
  *(undefined4 *)((long)pvVar1 + 0x5c) = param_2;
  *(undefined4 *)((long)pvVar1 + 0x68) = 0;
  return pvVar1;
}

