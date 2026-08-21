
float cpBodyKineticEnergy(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30) +
          *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x34);
  fVar2 = *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x44);
  fVar1 = 0.0;
  fVar3 = 0.0;
  if (fVar4 != 0.0) {
    fVar3 = *(float *)(param_1 + 0x10) * fVar4;
  }
  if (fVar2 != 0.0) {
    fVar1 = *(float *)(param_1 + 0x18) * fVar2;
  }
  return fVar1 + fVar3;
}

