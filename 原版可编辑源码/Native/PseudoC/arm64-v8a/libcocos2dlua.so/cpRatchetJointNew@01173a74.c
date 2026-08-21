
void * cpRatchetJointNew(undefined4 param_1,undefined4 param_2,long param_3,long param_4)

{
  void *pvVar1;
  float fVar2;
  float fVar3;
  
  pvVar1 = calloc(1,0x70);
  cpConstraintInit(pvVar1,&PTR_FUN_0172d318,param_3,param_4);
  fVar2 = 0.0;
  fVar3 = 0.0;
  *(undefined4 *)((long)pvVar1 + 0x58) = 0;
  *(undefined4 *)((long)pvVar1 + 0x5c) = param_1;
  *(undefined4 *)((long)pvVar1 + 0x60) = param_2;
  if (param_4 != 0) {
    fVar3 = *(float *)(param_4 + 0x40);
  }
  if (param_3 != 0) {
    fVar2 = *(float *)(param_3 + 0x40);
  }
  *(float *)((long)pvVar1 + 0x58) = fVar3 - fVar2;
  return pvVar1;
}

