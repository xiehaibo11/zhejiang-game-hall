
/* cocos2d::tweenfunc::easeOut(float, float) */

void cocos2d::tweenfunc::easeOut(float param_1,float param_2)

{
  powf(param_1,1.0 / param_2);
  return;
}

