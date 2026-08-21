
long cpGrooveJointInit(float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
                      undefined4 param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  cpConstraintInit(param_7,&PTR_FUN_0172d178,param_8,param_9);
  fVar2 = param_4 - param_2;
  fVar1 = param_3 - param_1;
  fVar3 = 1.0 / (SQRT(fVar2 * fVar2 + fVar1 * fVar1) + 1.1754944e-38);
  *(float *)(param_7 + 0x60) = param_1;
  *(float *)(param_7 + 100) = param_2;
  *(float *)(param_7 + 0x68) = param_3;
  *(float *)(param_7 + 0x6c) = param_4;
  *(undefined4 *)(param_7 + 0x70) = param_5;
  *(undefined4 *)(param_7 + 0x74) = param_6;
  *(float *)(param_7 + 0x58) = -(fVar2 * fVar3);
  *(float *)(param_7 + 0x5c) = fVar3 * fVar1;
  *(undefined8 *)(param_7 + 0xa4) = 0;
  return param_7;
}

