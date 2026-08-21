
float cpArbiterTotalKE(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  ulong uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = 0.0;
  if (((uint)param_1[0x24] < 3) && (uVar4 = (ulong)(uint)param_1[0x16], 0 < (int)param_1[0x16])) {
    pfVar5 = (float *)(*(long *)(param_1 + 0x18) + 0x20);
    fVar6 = 0.0;
    do {
      pfVar1 = pfVar5 + -1;
      fVar7 = *pfVar5;
      pfVar2 = pfVar5 + -4;
      pfVar3 = pfVar5 + -3;
      uVar4 = uVar4 - 1;
      pfVar5 = pfVar5 + 0xe;
      fVar6 = (*pfVar1 * *pfVar1 * ((1.0 - *param_1) / (*param_1 + 1.0))) / *pfVar2 +
              fVar6 + (fVar7 * fVar7) / *pfVar3;
    } while (uVar4 != 0);
  }
  return fVar6;
}

