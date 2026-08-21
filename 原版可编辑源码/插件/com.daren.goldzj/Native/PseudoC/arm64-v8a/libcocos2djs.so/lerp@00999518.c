
/* cocos2d::MathUtil::lerp(float, float, float) */

float cocos2d::MathUtil::lerp(float param_1,float param_2,float param_3)

{
  return param_2 * param_3 + (1.0 - param_3) * param_1;
}

