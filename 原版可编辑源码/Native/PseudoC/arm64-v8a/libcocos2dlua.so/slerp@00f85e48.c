
/* cocos2d::Quaternion::slerp(float, float, float, float, float, float, float, float, float, float*,
   float*, float*, float*) */

void cocos2d::Quaternion::slerp
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,float param_9,float *param_10,float *param_11,
               float *param_12,float *param_13)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (param_9 != 0.0) {
    if (param_9 == 1.0) {
      *param_10 = param_5;
      *param_11 = param_6;
      *param_12 = param_7;
      *param_13 = param_8;
      return;
    }
    if ((((param_1 != param_5) || (param_2 != param_6)) || (param_3 != param_7)) ||
       (param_4 != param_8)) {
      fVar3 = param_3 * param_7 + param_2 * param_6 + param_1 * param_5 + param_4 * param_8;
      fVar7 = 1.0;
      if (fVar3 < 0.0) {
        fVar7 = -1.0;
      }
      fVar4 = fVar3 * fVar7 + 1.0;
      fVar8 = 1.09 - fVar4 * (fVar4 * -0.0903321 + 0.476537);
      fVar2 = param_9 + -0.5;
      fVar3 = fVar2;
      if (fVar2 < 0.0) {
        fVar3 = -fVar2;
      }
      fVar6 = fVar3 + fVar3;
      fVar8 = fVar8 * (1.5 - fVar8 * fVar4 * fVar8);
      fVar1 = 1.0 - fVar6;
      fVar6 = fVar6 * fVar6;
      fVar9 = fVar1 * fVar1;
      fVar5 = 1.0 - fVar4 * fVar8;
      fVar4 = fVar5 * (fVar6 + -1.0) *
                      (fVar5 * (fVar6 + -4.0) *
                               (fVar5 * (fVar6 + -9.0) *
                                        ((fVar6 + -16.0) * fVar5 * 4.409171e-05 + -0.0015873016) +
                               0.033333335) + -0.33333334) + 1.0;
      fVar1 = fVar1 * fVar8 * (fVar5 * (fVar9 + -1.0) *
                                       (fVar5 * (fVar9 + -4.0) *
                                                (fVar5 * (fVar9 + -9.0) *
                                                         ((fVar9 + -16.0) * fVar5 * 4.409171e-05 +
                                                         -0.0015873016) + 0.033333335) + -0.33333334
                                       ) + 1.0);
      fVar8 = (fVar2 + fVar3) * fVar4 + fVar1;
      fVar7 = fVar7 * ((fVar3 - fVar2) * fVar4 + fVar1);
      fVar4 = fVar8 * param_8 + fVar7 * param_4;
      fVar3 = fVar8 * param_5 + fVar7 * param_1;
      fVar2 = fVar8 * param_6 + fVar7 * param_2;
      fVar7 = fVar8 * param_7 + fVar7 * param_3;
      fVar8 = (fVar7 * fVar7 + fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) * -0.5 + 1.5;
      *param_13 = fVar4 * fVar8;
      *param_10 = fVar3 * fVar8;
      *param_11 = fVar2 * fVar8;
      *param_12 = fVar7 * fVar8;
      return;
    }
  }
  *param_10 = param_1;
  *param_11 = param_2;
  *param_12 = param_3;
  *param_13 = param_4;
  return;
}

