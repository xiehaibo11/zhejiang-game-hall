
/* appendArrowHead(duDebugDraw*, float const*, float const*, float, unsigned int) */

void appendArrowHead(duDebugDraw *param_1,float *param_2,float *param_3,float param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_1 != (duDebugDraw *)0x0) {
    fVar3 = *param_2 - *param_3;
    fVar4 = param_2[1] - param_3[1];
    fVar6 = param_2[2] - param_3[2];
    if (1.0000001e-06 <= fVar3 * fVar3 + fVar4 * fVar4 + fVar6 * fVar6) {
      fVar3 = *param_3 - *param_2;
      fVar6 = param_3[1] - param_2[1];
      fVar1 = param_3[2] - param_2[2];
      fVar2 = 1.0 / SQRT(fVar3 * fVar3 + fVar6 * fVar6 + fVar1 * fVar1);
      fVar3 = fVar3 * fVar2;
      fVar1 = fVar1 * fVar2;
      fVar4 = fVar6 * fVar2 * 0.0;
      (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2,param_5);
      fVar6 = fVar6 * fVar2 * param_4;
      fVar5 = ((fVar3 * 0.0 - fVar1 * 0.0) * param_4) / 3.0;
      fVar2 = ((fVar1 - fVar4) * param_4) / 3.0;
      fVar4 = ((fVar4 - fVar3) * param_4) / 3.0;
      (**(code **)(*(long *)param_1 + 0x30))
                (fVar2 + fVar3 * param_4 + *param_2,fVar5 + fVar6 + param_2[1],
                 fVar4 + fVar1 * param_4 + param_2[2],param_1,param_5);
      (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x0118291c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0x30))
                ((fVar3 * param_4 + *param_2) - fVar2,(fVar6 + param_2[1]) - fVar5,
                 (fVar1 * param_4 + param_2[2]) - fVar4,param_1,param_5);
      return;
    }
  }
  return;
}

