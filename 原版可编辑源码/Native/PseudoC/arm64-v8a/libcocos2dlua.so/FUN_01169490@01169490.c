
void FUN_01169490(float param_1,float param_2,long param_3,long *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = *(float *)(param_3 + 0x98);
  param_1 = param_1 - *(float *)(param_3 + 0x90);
  param_2 = param_2 - *(float *)(param_3 + 0x94);
  fVar1 = SQRT(param_1 * param_1 + param_2 * param_2);
  *param_4 = param_3;
  fVar2 = *(float *)(param_3 + 0x90);
  fVar3 = *(float *)(param_3 + 0x94);
  fVar5 = fVar4 / fVar1;
  *(float *)(param_4 + 2) = fVar1 - fVar4;
  *(float *)(param_4 + 1) = fVar2 + param_1 * fVar5;
  *(float *)((long)param_4 + 0xc) = fVar3 + param_2 * fVar5;
  if (1e-05 < fVar1) {
    *(float *)((long)param_4 + 0x14) = (1.0 / fVar1) * param_1;
    *(float *)(param_4 + 3) = (1.0 / fVar1) * param_2;
    return;
  }
  *(undefined4 *)((long)param_4 + 0x14) = 0;
  *(undefined4 *)(param_4 + 3) = 0x3f800000;
  return;
}

