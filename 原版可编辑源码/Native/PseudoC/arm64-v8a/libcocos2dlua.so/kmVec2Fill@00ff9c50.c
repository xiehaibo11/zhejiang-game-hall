
/* cocos2d::kmVec2Fill(cocos2d::Vec2*, float, float) */

void cocos2d::kmVec2Fill(Vec2 *param_1,float param_2,float param_3)

{
  *(float *)param_1 = param_2;
  *(float *)(param_1 + 4) = param_3;
  return;
}

