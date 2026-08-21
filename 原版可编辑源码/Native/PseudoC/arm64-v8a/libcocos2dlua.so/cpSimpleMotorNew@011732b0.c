
void * cpSimpleMotorNew(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x68);
  cpConstraintInit(pvVar1,&PTR_FUN_0172d2d8,param_2,param_3);
  *(undefined4 *)((long)pvVar1 + 0x58) = param_1;
  *(undefined4 *)((long)pvVar1 + 0x60) = 0;
  return pvVar1;
}

