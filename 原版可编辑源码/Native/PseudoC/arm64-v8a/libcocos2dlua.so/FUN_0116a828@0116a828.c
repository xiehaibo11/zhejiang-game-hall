
void FUN_0116a828(long param_1,long param_2,long param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = *(float *)(param_2 + 0x98) + *(float *)(param_1 + 0x98);
  fVar2 = *(float *)(param_2 + 0x90) - *(float *)(param_1 + 0x90);
  fVar4 = *(float *)(param_2 + 0x94) - *(float *)(param_1 + 0x94);
  fVar3 = fVar2 * fVar2 + fVar4 * fVar4;
  if (fVar3 < fVar7 * fVar7) {
    fVar3 = SQRT(fVar3);
    if (fVar3 == 0.0) {
      fVar3 = 0.0;
      fVar2 = 1.0;
    }
    else {
      fVar3 = 1.0 / fVar3;
      fVar2 = fVar3 * fVar2;
      fVar3 = fVar3 * fVar4;
    }
    *(float *)(param_3 + 0x14) = fVar2;
    *(float *)(param_3 + 0x18) = fVar3;
    fVar7 = *(float *)(param_1 + 0x94);
    fVar4 = *(float *)(param_1 + 0x98);
    fVar8 = *(float *)(param_2 + 0x94);
    fVar6 = *(float *)(param_2 + 0x98);
    fVar5 = *(float *)(param_2 + 0x90);
    pfVar1 = (float *)(*(long *)(param_3 + 0x20) + (long)*(int *)(param_3 + 0x1c) * 0x38);
    *pfVar1 = *(float *)(param_1 + 0x90) + fVar2 * fVar4;
    pfVar1[1] = fVar7 + fVar3 * fVar4;
    pfVar1[2] = fVar5 - fVar6 * fVar2;
    pfVar1[3] = fVar8 - fVar6 * fVar3;
    pfVar1[0xc] = 0.0;
    pfVar1[0xd] = 0.0;
    *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
  }
  return;
}

