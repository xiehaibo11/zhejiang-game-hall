
void cpBodyUpdatePosition(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_2 + 0x40) +
          param_1 * (*(float *)(param_2 + 0x78) + *(float *)(param_2 + 0x44));
  fVar3 = *(float *)(param_2 + 0x28) +
          param_1 * (*(float *)(param_2 + 0x70) + *(float *)(param_2 + 0x30));
  fVar4 = *(float *)(param_2 + 0x2c) +
          param_1 * (*(float *)(param_2 + 0x74) + *(float *)(param_2 + 0x34));
  *(float *)(param_2 + 0x28) = fVar3;
  *(float *)(param_2 + 0x2c) = fVar4;
  *(float *)(param_2 + 0x40) = fVar2;
  fVar1 = cosf(fVar2);
  fVar2 = sinf(fVar2);
  *(float *)(param_2 + 0x54) = -fVar2;
  *(float *)(param_2 + 0x58) = fVar1;
  *(float *)(param_2 + 0x4c) = fVar1;
  *(float *)(param_2 + 0x50) = fVar2;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(float *)(param_2 + 0x5c) =
       (fVar3 - fVar1 * *(float *)(param_2 + 0x20)) + fVar2 * *(float *)(param_2 + 0x24);
  *(float *)(param_2 + 0x60) =
       fVar4 - (*(float *)(param_2 + 0x20) * fVar2 + fVar1 * *(float *)(param_2 + 0x24));
  *(undefined4 *)(param_2 + 0x78) = 0;
  return;
}

