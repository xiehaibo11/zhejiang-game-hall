
/* cocos2d::tweenfunc::expoEaseInOut(float) */

float cocos2d::tweenfunc::expoEaseInOut(float param_1)

{
  float fVar1;
  
  if ((param_1 != 0.0) && (param_1 != 1.0)) {
    fVar1 = param_1 + param_1 + -1.0;
    if (0.5 <= param_1) {
      fVar1 = exp2f(fVar1 * -10.0);
      fVar1 = 2.0 - fVar1;
    }
    else {
      fVar1 = exp2f(fVar1 * 10.0);
    }
    param_1 = fVar1 * 0.5;
  }
  return param_1;
}

