
/* cocos2d::tweenfunc::sineEaseIn(float) */

float cocos2d::tweenfunc::sineEaseIn(float param_1)

{
  float fVar1;
  
  fVar1 = cosf(param_1 * 1.5707964);
  return 1.0 - fVar1;
}

