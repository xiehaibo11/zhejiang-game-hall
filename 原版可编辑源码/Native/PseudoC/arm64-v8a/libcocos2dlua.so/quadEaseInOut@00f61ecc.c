
/* cocos2d::tweenfunc::quadEaseInOut(float) */

float cocos2d::tweenfunc::quadEaseInOut(float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + param_1;
  if (fVar1 < 1.0) {
    return fVar1 * fVar1 * 0.5;
  }
  return ((fVar1 + -1.0) * (fVar1 + -1.0 + -2.0) + -1.0) * -0.5;
}

