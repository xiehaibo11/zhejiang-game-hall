
/* cocos2d::kmVec3Fill(cocos2d::Vec3*, float, float, float) */

void cocos2d::kmVec3Fill(Vec3 *param_1,float param_2,float param_3,float param_4)

{
  *(float *)param_1 = param_2;
  *(float *)(param_1 + 4) = param_3;
  *(float *)(param_1 + 8) = param_4;
  return;
}

