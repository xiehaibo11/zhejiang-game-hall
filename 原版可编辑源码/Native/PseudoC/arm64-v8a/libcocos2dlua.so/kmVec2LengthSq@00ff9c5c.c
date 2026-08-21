
/* cocos2d::kmVec2LengthSq(cocos2d::Vec2 const*) */

float cocos2d::kmVec2LengthSq(Vec2 *param_1)

{
  return *(float *)param_1 * *(float *)param_1 + *(float *)(param_1 + 4) * *(float *)(param_1 + 4);
}

