
void cpLoopIndexes(float *param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  ulong uVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  *param_4 = 0;
  *param_3 = 0;
  if (1 < (int)param_2) {
    fVar3 = *param_1;
    fVar5 = param_1[1];
    param_1 = param_1 + 3;
    uVar1 = 1;
    fVar7 = fVar3;
    fVar8 = fVar5;
    do {
      fVar10 = param_1[-1];
      fVar12 = *param_1;
      puVar2 = param_3;
      fVar4 = fVar10;
      fVar11 = fVar7;
      fVar6 = fVar12;
      fVar9 = fVar8;
      if (((fVar10 < fVar3) ||
          (((fVar10 == fVar3 && (fVar12 < fVar5)) ||
           (puVar2 = param_4, fVar4 = fVar3, fVar11 = fVar10, fVar6 = fVar5, fVar9 = fVar12,
           fVar7 < fVar10)))) || ((fVar10 == fVar7 && (fVar8 < fVar12)))) {
        *puVar2 = (int)uVar1;
        fVar3 = fVar4;
        fVar7 = fVar11;
        fVar5 = fVar6;
        fVar8 = fVar9;
      }
      uVar1 = uVar1 + 1;
      param_1 = param_1 + 2;
    } while (param_2 != uVar1);
  }
  return;
}

