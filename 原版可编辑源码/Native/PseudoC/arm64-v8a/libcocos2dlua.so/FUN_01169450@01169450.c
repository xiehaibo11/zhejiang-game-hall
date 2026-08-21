
float FUN_01169450(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[1];
  fVar3 = param_2[3];
  fVar4 = param_2[5];
  fVar2 = param_2[4] + *param_2 * *(float *)(param_1 + 0x88) +
          param_2[2] * *(float *)(param_1 + 0x8c);
  *(float *)(param_1 + 0x90) = fVar2;
  *(float *)(param_1 + 0x94) =
       fVar4 + fVar1 * *(float *)(param_1 + 0x88) + fVar3 * *(float *)(param_1 + 0x8c);
  return fVar2 - *(float *)(param_1 + 0x98);
}

