
/* cocos2d::tweenfunc::customEase(float, float*) */

float cocos2d::tweenfunc::customEase(float param_1,float *param_2)

{
  float fVar1;
  
  if (param_2 != (float *)0x0) {
    fVar1 = 1.0 - param_1;
    param_1 = param_2[7] * param_1 * param_1 * param_1 +
              fVar1 * fVar1 * fVar1 * param_2[1] + fVar1 * fVar1 * param_2[3] * 3.0 * param_1 +
              fVar1 * param_2[5] * 3.0 * param_1 * param_1;
  }
  return param_1;
}

