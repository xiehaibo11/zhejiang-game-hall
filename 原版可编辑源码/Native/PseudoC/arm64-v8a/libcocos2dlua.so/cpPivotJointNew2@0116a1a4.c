
void * cpPivotJointNew2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined8 param_5,undefined8 param_6)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x98);
  cpConstraintInit(pvVar1,&PTR_FUN_0172d228,param_5,param_6);
  *(undefined4 *)((long)pvVar1 + 0x58) = param_1;
  *(undefined4 *)((long)pvVar1 + 0x5c) = param_2;
  *(undefined4 *)((long)pvVar1 + 0x60) = param_3;
  *(undefined4 *)((long)pvVar1 + 100) = param_4;
  *(undefined8 *)((long)pvVar1 + 0x88) = 0;
  return pvVar1;
}

