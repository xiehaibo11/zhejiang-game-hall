
void cpBodyApplyForceAtLocalPoint
               (float param_1,float param_2,float param_3,float param_4,long param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = *(float *)(param_5 + 0x5c);
  fVar1 = *(float *)(param_5 + 0x4c);
  fVar2 = *(float *)(param_5 + 0x50);
  fVar4 = *(float *)(param_5 + 0x54);
  fVar5 = *(float *)(param_5 + 0x58);
  fVar6 = *(float *)(param_5 + 0x60);
  fVar7 = fVar1 * param_1 + param_2 * fVar4;
  fVar8 = fVar2 * param_1 + param_2 * fVar5;
  cpBodyActivate();
  *(float *)(param_5 + 0x38) = *(float *)(param_5 + 0x38) + fVar7;
  *(float *)(param_5 + 0x3c) = *(float *)(param_5 + 0x3c) + fVar8;
  *(float *)(param_5 + 0x48) =
       *(float *)(param_5 + 0x48) +
       fVar8 * (((fVar1 * param_3 + param_4 * fVar4 + fVar3) - *(float *)(param_5 + 0x5c)) -
               (*(float *)(param_5 + 0x20) * *(float *)(param_5 + 0x4c) +
               *(float *)(param_5 + 0x54) * *(float *)(param_5 + 0x24))) +
       fVar7 * (*(float *)(param_5 + 0x20) * *(float *)(param_5 + 0x50) +
                *(float *)(param_5 + 0x58) * *(float *)(param_5 + 0x24) +
               (*(float *)(param_5 + 0x60) - (fVar2 * param_3 + param_4 * fVar5 + fVar6)));
  return;
}

