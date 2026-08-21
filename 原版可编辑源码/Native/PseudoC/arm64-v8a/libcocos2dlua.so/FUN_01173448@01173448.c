
void FUN_01173448(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  fVar5 = *(float *)(param_2 + 0x60);
  fVar4 = *(float *)(lVar1 + 0x44);
  fVar3 = (float)NEON_fminnm(fVar5 + ((fVar4 - *(float *)(lVar2 + 0x44)) -
                                     *(float *)(param_2 + 0x58)) * *(float *)(param_2 + 0x5c),
                             *(float *)(param_2 + 0x30) * param_1);
  *(float *)(param_2 + 0x60) = fVar3;
  fVar3 = fVar3 - fVar5;
  *(float *)(lVar1 + 0x44) = fVar4 - *(float *)(lVar1 + 0x1c) * fVar3;
  *(float *)(lVar2 + 0x44) = *(float *)(lVar2 + 0x44) + *(float *)(lVar2 + 0x1c) * fVar3;
  return;
}

