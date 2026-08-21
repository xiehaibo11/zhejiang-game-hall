
void * cpDampedSpringNew(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                        ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8
                        ,undefined8 param_9)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0xa8);
  cpConstraintInit(pvVar1,&PTR_FUN_0172d290,param_8,param_9);
  *(undefined4 *)((long)pvVar1 + 0x58) = param_1;
  *(undefined4 *)((long)pvVar1 + 0x5c) = param_2;
  *(undefined4 *)((long)pvVar1 + 0x60) = param_3;
  *(undefined4 *)((long)pvVar1 + 100) = param_4;
  *(undefined4 *)((long)pvVar1 + 0x68) = param_5;
  *(undefined4 *)((long)pvVar1 + 0x6c) = param_6;
  *(undefined4 *)((long)pvVar1 + 0x70) = param_7;
  *(code **)((long)pvVar1 + 0x78) = FUN_0116ea8c;
  *(undefined4 *)((long)pvVar1 + 0xa4) = 0;
  return pvVar1;
}

