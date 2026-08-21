
void cpArbiterApplyCachedImpulse(float param_1,long param_2)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((*(int *)(param_2 + 0x90) != 0) && (0 < *(int *)(param_2 + 0x58))) {
    lVar2 = *(long *)(param_2 + 0x28);
    lVar3 = *(long *)(param_2 + 0x30);
    fVar6 = *(float *)(param_2 + 0x68);
    fVar7 = *(float *)(param_2 + 0x6c);
    lVar4 = 0;
    lVar5 = 0;
    do {
      pfVar1 = (float *)(*(long *)(param_2 + 0x60) + lVar4);
      fVar11 = *pfVar1;
      fVar12 = pfVar1[1];
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x38;
      fVar10 = (pfVar1[7] * fVar6 - pfVar1[8] * fVar7) * param_1;
      fVar9 = (pfVar1[7] * fVar7 + fVar6 * pfVar1[8]) * param_1;
      fVar8 = pfVar1[2];
      fVar13 = pfVar1[3];
      *(float *)(lVar2 + 0x30) = *(float *)(lVar2 + 0x30) - fVar10 * *(float *)(lVar2 + 0x14);
      *(float *)(lVar2 + 0x34) = *(float *)(lVar2 + 0x34) - fVar9 * *(float *)(lVar2 + 0x14);
      *(float *)(lVar2 + 0x44) =
           *(float *)(lVar2 + 0x44) + (fVar12 * fVar10 - fVar11 * fVar9) * *(float *)(lVar2 + 0x1c);
      *(float *)(lVar3 + 0x30) = *(float *)(lVar3 + 0x30) + fVar10 * *(float *)(lVar3 + 0x14);
      *(float *)(lVar3 + 0x34) = *(float *)(lVar3 + 0x34) + fVar9 * *(float *)(lVar3 + 0x14);
      *(float *)(lVar3 + 0x44) =
           *(float *)(lVar3 + 0x44) + (fVar9 * fVar8 - fVar13 * fVar10) * *(float *)(lVar3 + 0x1c);
    } while (lVar5 < *(int *)(param_2 + 0x58));
  }
  return;
}

