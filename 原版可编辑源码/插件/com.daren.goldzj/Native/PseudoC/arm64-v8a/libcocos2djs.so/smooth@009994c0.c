
/* cocos2d::MathUtil::smooth(float*, float, float, float) */

void cocos2d::MathUtil::smooth(float *param_1,float param_2,float param_3,float param_4)

{
  if (0.0 < param_3) {
    *param_1 = *param_1 + ((param_2 - *param_1) * param_3) / (param_3 + param_4);
  }
  return;
}

