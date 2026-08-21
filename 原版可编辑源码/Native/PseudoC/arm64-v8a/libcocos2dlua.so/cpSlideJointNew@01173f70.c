
void * cpSlideJointNew(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x98);
  cpConstraintInit(pvVar1,&PTR_FUN_0172d338,param_7,param_8);
  *(undefined4 *)((long)pvVar1 + 0x58) = param_1;
  *(undefined4 *)((long)pvVar1 + 0x5c) = param_2;
  *(undefined4 *)((long)pvVar1 + 0x60) = param_3;
  *(undefined4 *)((long)pvVar1 + 100) = param_4;
  *(undefined4 *)((long)pvVar1 + 0x68) = param_5;
  *(undefined4 *)((long)pvVar1 + 0x6c) = param_6;
  *(undefined4 *)((long)pvVar1 + 0x8c) = 0;
  return pvVar1;
}

