
float FUN_011695e8(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[4] + *param_2 * *(float *)(param_1 + 0x88) +
          param_2[2] * *(float *)(param_1 + 0x8c);
  fVar2 = param_2[5] + param_2[1] * *(float *)(param_1 + 0x88) +
          param_2[3] * *(float *)(param_1 + 0x8c);
  *(float *)(param_1 + 0xa0) = fVar1;
  *(float *)(param_1 + 0xa4) = fVar2;
  fVar3 = param_2[4] + *param_2 * *(float *)(param_1 + 0x90) +
          param_2[2] * *(float *)(param_1 + 0x94);
  fVar4 = param_2[5] + param_2[1] * *(float *)(param_1 + 0x90) +
          param_2[3] * *(float *)(param_1 + 0x94);
  *(float *)(param_1 + 0xa8) = fVar3;
  *(float *)(param_1 + 0xac) = fVar4;
  fVar1 = (float)NEON_fminnm(fVar1,fVar3);
  NEON_fminnm(fVar2,fVar4);
  fVar3 = param_2[1];
  fVar2 = param_2[3];
  *(float *)(param_1 + 0xb0) =
       *(float *)(param_1 + 0x98) * *param_2 + param_2[2] * *(float *)(param_1 + 0x9c);
  *(float *)(param_1 + 0xb4) =
       *(float *)(param_1 + 0x98) * fVar3 + fVar2 * *(float *)(param_1 + 0x9c);
  return fVar1 - *(float *)(param_1 + 0xb8);
}

