
void * cpDampedRotarySpringNew
                 (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x80);
  cpConstraintInit(pvVar1,&PTR_FUN_0172d198,param_4,param_5);
  *(undefined4 *)((long)pvVar1 + 0x58) = param_1;
  *(undefined4 *)((long)pvVar1 + 0x5c) = param_2;
  *(undefined4 *)((long)pvVar1 + 0x60) = param_3;
  *(code **)((long)pvVar1 + 0x68) = FUN_01166dd0;
  *(undefined4 *)((long)pvVar1 + 0x7c) = 0;
  return pvVar1;
}

