
/* cocos2d::tweenfunc::cubicEaseOut(float) */

float cocos2d::tweenfunc::cubicEaseOut(float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + -1.0;
  return fVar1 * fVar1 * fVar1 + 1.0;
}

