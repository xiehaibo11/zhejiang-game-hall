
void * cpPivotJointNew(undefined8 param_1,undefined4 param_2,long param_3,long param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_1;
  uVar3 = param_2;
  if (param_3 != 0) {
    uVar2 = cpBodyWorldToLocal(param_1,param_3);
  }
  if (param_4 != 0) {
    param_1 = cpBodyWorldToLocal(param_1,param_4);
  }
  pvVar1 = calloc(1,0x98);
  cpConstraintInit(pvVar1,&PTR_FUN_0172d228,param_3,param_4);
  *(int *)((long)pvVar1 + 0x58) = (int)uVar2;
  *(undefined4 *)((long)pvVar1 + 0x5c) = uVar3;
  *(int *)((long)pvVar1 + 0x60) = (int)param_1;
  *(undefined4 *)((long)pvVar1 + 100) = param_2;
  *(undefined8 *)((long)pvVar1 + 0x88) = 0;
  return pvVar1;
}

