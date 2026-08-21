
void * cpGearJointNew(undefined4 param_1,float param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x70);
  cpConstraintInit(pvVar1,&PTR_FUN_0172d158,param_3,param_4);
  *(undefined4 *)((long)pvVar1 + 0x58) = param_1;
  *(float *)((long)pvVar1 + 0x5c) = param_2;
  *(float *)((long)pvVar1 + 0x60) = 1.0 / param_2;
  *(undefined4 *)((long)pvVar1 + 0x6c) = 0;
  return pvVar1;
}

