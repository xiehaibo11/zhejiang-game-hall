
/* cocos2d::tweenfunc::circEaseOut(float) */

float cocos2d::tweenfunc::circEaseOut(float param_1)

{
  return SQRT(1.0 - (param_1 + -1.0) * (param_1 + -1.0));
}

