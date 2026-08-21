
/* cocos2d::tweenfunc::quartEaseOut(float) */

float cocos2d::tweenfunc::quartEaseOut(float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + -1.0;
  return -(fVar1 * fVar1 * fVar1 * fVar1 + -1.0);
}

