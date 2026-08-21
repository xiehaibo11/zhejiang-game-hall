
void FUN_01173e64(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(float *)(param_2 + 0x68) != 0.0) {
    lVar1 = *(long *)(param_2 + 0x10);
    lVar2 = *(long *)(param_2 + 0x18);
    fVar4 = *(float *)(param_2 + 0x60);
    fVar5 = *(float *)(param_2 + 0x6c);
    fVar6 = *(float *)(lVar1 + 0x44);
    fVar3 = (fVar5 + (fVar6 - (*(float *)(lVar2 + 0x44) + *(float *)(param_2 + 0x68))) *
                     *(float *)(param_2 + 100)) * fVar4;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    fVar3 = (float)NEON_fminnm(fVar3,*(float *)(param_2 + 0x30) * param_1 * ABS(fVar4));
    *(float *)(param_2 + 0x6c) = fVar3 / fVar4;
    fVar5 = fVar3 / fVar4 - fVar5;
    *(float *)(lVar1 + 0x44) = fVar6 - *(float *)(lVar1 + 0x1c) * fVar5;
    *(float *)(lVar2 + 0x44) = *(float *)(lVar2 + 0x44) + *(float *)(lVar2 + 0x1c) * fVar5;
  }
  return;
}

