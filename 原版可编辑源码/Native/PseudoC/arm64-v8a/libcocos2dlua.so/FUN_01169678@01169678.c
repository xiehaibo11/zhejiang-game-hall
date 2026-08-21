
void FUN_01169678(float param_1,float param_2,long param_3,long *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = *(float *)(param_3 + 0xa8);
  fVar3 = *(float *)(param_3 + 0xac);
  fVar4 = *(float *)(param_3 + 0xa0) - fVar2;
  fVar5 = *(float *)(param_3 + 0xa4) - fVar3;
  fVar1 = (float)NEON_fminnm(((param_1 - fVar2) * fVar4 + fVar5 * (param_2 - fVar3)) /
                             (fVar4 * fVar4 + fVar5 * fVar5),0x3f800000);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar2 = fVar2 + fVar4 * fVar1;
  fVar3 = fVar3 + fVar5 * fVar1;
  param_2 = param_2 - fVar3;
  param_1 = param_1 - fVar2;
  fVar1 = *(float *)(param_3 + 0xb8);
  fVar4 = SQRT(param_2 * param_2 + param_1 * param_1);
  param_1 = (1.0 / fVar4) * param_1;
  param_2 = (1.0 / fVar4) * param_2;
  *param_4 = param_3;
  if (fVar4 != 0.0) {
    fVar2 = fVar2 + fVar1 * param_1;
    fVar3 = fVar3 + fVar1 * param_2;
  }
  *(float *)(param_4 + 1) = fVar2;
  *(float *)((long)param_4 + 0xc) = fVar3;
  *(float *)(param_4 + 2) = fVar4 - fVar1;
  if (1e-05 < fVar4) {
    *(float *)((long)param_4 + 0x14) = param_1;
    *(float *)(param_4 + 3) = param_2;
    return;
  }
  *(undefined8 *)((long)param_4 + 0x14) = *(undefined8 *)(param_3 + 0x98);
  return;
}

