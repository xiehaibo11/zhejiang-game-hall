
void cpBodySetAngle(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  cpBodyActivate();
  fVar3 = *(float *)(param_2 + 0x28);
  fVar4 = *(float *)(param_2 + 0x2c);
  *(float *)(param_2 + 0x40) = param_1;
  fVar1 = cosf(param_1);
  fVar2 = sinf(param_1);
  *(float *)(param_2 + 0x54) = -fVar2;
  *(float *)(param_2 + 0x58) = fVar1;
  *(float *)(param_2 + 0x4c) = fVar1;
  *(float *)(param_2 + 0x50) = fVar2;
  *(float *)(param_2 + 0x5c) =
       (fVar3 - fVar1 * *(float *)(param_2 + 0x20)) + fVar2 * *(float *)(param_2 + 0x24);
  *(float *)(param_2 + 0x60) =
       fVar4 - (*(float *)(param_2 + 0x20) * fVar2 + fVar1 * *(float *)(param_2 + 0x24));
  return;
}

