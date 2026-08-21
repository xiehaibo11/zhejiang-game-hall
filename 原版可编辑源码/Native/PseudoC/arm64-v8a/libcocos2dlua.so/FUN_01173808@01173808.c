
void FUN_01173808(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *(float *)(param_2 + 100);
  if (fVar5 != 0.0) {
    lVar1 = *(long *)(param_2 + 0x10);
    lVar2 = *(long *)(param_2 + 0x18);
    fVar4 = *(float *)(param_2 + 0x68);
    fVar3 = *(float *)(lVar1 + 0x44);
    fVar6 = fVar4 + *(float *)(param_2 + 0x60) * (fVar3 - (*(float *)(lVar2 + 0x44) + fVar5));
    if (0.0 <= fVar5) {
      fVar5 = (float)NEON_fminnm(fVar6,0);
    }
    else {
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      fVar5 = (float)NEON_fminnm(fVar6,*(float *)(param_2 + 0x30) * param_1);
    }
    *(float *)(param_2 + 0x68) = fVar5;
    fVar5 = fVar5 - fVar4;
    *(float *)(lVar1 + 0x44) = fVar3 - fVar5 * *(float *)(lVar1 + 0x1c);
    *(float *)(lVar2 + 0x44) = *(float *)(lVar2 + 0x44) + fVar5 * *(float *)(lVar2 + 0x1c);
  }
  return;
}

