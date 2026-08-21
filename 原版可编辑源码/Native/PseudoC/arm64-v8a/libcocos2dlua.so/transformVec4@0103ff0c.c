
/* cocos2d::MathUtil::transformVec4(float const*, float, float, float, float, float*) */

void cocos2d::MathUtil::transformVec4
               (float *param_1,float param_2,float param_3,float param_4,float param_5,
               float *param_6)

{
  MathUtilNeon64::transformVec4(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

