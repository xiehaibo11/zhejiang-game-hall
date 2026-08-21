
void cpBodySetPosition(float param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  cpBodyActivate();
  fVar4 = *(float *)(param_3 + 0x20);
  fVar5 = *(float *)(param_3 + 0x24);
  fVar3 = *(float *)(param_3 + 0x40);
  fVar2 = param_1 + *(float *)(param_3 + 0x4c) * fVar4 + *(float *)(param_3 + 0x54) * fVar5;
  fVar6 = param_2 + *(float *)(param_3 + 0x50) * fVar4 + *(float *)(param_3 + 0x58) * fVar5;
  *(float *)(param_3 + 0x28) = fVar2;
  *(float *)(param_3 + 0x2c) = fVar6;
  fVar1 = cosf(fVar3);
  fVar3 = sinf(fVar3);
  *(float *)(param_3 + 0x4c) = fVar1;
  *(float *)(param_3 + 0x50) = fVar3;
  *(float *)(param_3 + 0x54) = -fVar3;
  *(float *)(param_3 + 0x58) = fVar1;
  *(float *)(param_3 + 0x5c) = (fVar2 - fVar1 * fVar4) + fVar3 * fVar5;
  *(float *)(param_3 + 0x60) = fVar6 - (fVar4 * fVar3 + fVar1 * fVar5);
  return;
}

