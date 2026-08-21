
void * cpGrooveJointNew(float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
                       undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  void *pvVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  pvVar1 = calloc(1,0xb8);
  cpConstraintInit(pvVar1,&PTR_FUN_0172d178,param_7,param_8);
  fVar3 = param_4 - param_2;
  fVar2 = param_3 - param_1;
  fVar4 = 1.0 / (SQRT(fVar3 * fVar3 + fVar2 * fVar2) + 1.1754944e-38);
  *(float *)((long)pvVar1 + 0x60) = param_1;
  *(float *)((long)pvVar1 + 100) = param_2;
  *(float *)((long)pvVar1 + 0x68) = param_3;
  *(float *)((long)pvVar1 + 0x6c) = param_4;
  *(undefined4 *)((long)pvVar1 + 0x70) = param_5;
  *(undefined4 *)((long)pvVar1 + 0x74) = param_6;
  *(float *)((long)pvVar1 + 0x58) = -(fVar3 * fVar4);
  *(float *)((long)pvVar1 + 0x5c) = fVar4 * fVar2;
  *(undefined8 *)((long)pvVar1 + 0xa4) = 0;
  return pvVar1;
}

