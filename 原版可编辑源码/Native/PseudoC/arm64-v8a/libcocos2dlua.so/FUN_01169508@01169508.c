
void FUN_01169508(float param_1,float param_2,float param_3,float param_4,float param_5,long param_6
                 ,long *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_1 - *(float *)(param_6 + 0x90);
  fVar6 = param_3 - *(float *)(param_6 + 0x90);
  fVar2 = param_2 - *(float *)(param_6 + 0x94);
  fVar4 = param_4 - *(float *)(param_6 + 0x94);
  fVar7 = *(float *)(param_6 + 0x98) + param_5;
  fVar8 = fVar1 * fVar1 + fVar2 * fVar2;
  fVar3 = fVar6 * fVar1 + fVar2 * fVar4;
  fVar5 = fVar3 - fVar8;
  fVar3 = fVar6 * fVar6 + fVar4 * fVar4 + fVar8 + fVar3 * -2.0;
  fVar7 = fVar3 * (fVar7 * fVar7 - fVar8) + fVar5 * fVar5;
  if (((0.0 <= fVar7) && (fVar3 = (-fVar5 - SQRT(fVar7)) / fVar3, 0.0 <= fVar3)) && (fVar3 <= 1.0))
  {
    fVar5 = 1.0 - fVar3;
    fVar4 = fVar3 * fVar4 + fVar2 * fVar5;
    fVar2 = fVar3 * fVar6 + fVar1 * fVar5;
    fVar1 = 1.0 / (SQRT(fVar4 * fVar4 + fVar2 * fVar2) + 1.1754944e-38);
    fVar2 = fVar1 * fVar2;
    fVar1 = fVar1 * fVar4;
    *param_7 = param_6;
    *(float *)(param_7 + 2) = fVar2;
    *(float *)((long)param_7 + 0x14) = fVar1;
    *(float *)(param_7 + 1) = (fVar3 * param_3 + param_1 * fVar5) - param_5 * fVar2;
    *(float *)((long)param_7 + 0xc) = (fVar3 * param_4 + param_2 * fVar5) - param_5 * fVar1;
    *(float *)(param_7 + 3) = fVar3;
  }
  return;
}

