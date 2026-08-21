
/* cocos2d::tweenfunc::quartEaseInOut(float) */

float cocos2d::tweenfunc::quartEaseInOut(float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + param_1;
  if (fVar1 < 1.0) {
    return fVar1 * fVar1 * fVar1 * fVar1 * 0.5;
  }
  fVar1 = fVar1 + -2.0;
  return (fVar1 * fVar1 * fVar1 * fVar1 + -2.0) * -0.5;
}

