
/* cocos2d::Vec2::angle(cocos2d::Vec2 const&, cocos2d::Vec2 const&) */

void cocos2d::Vec2::angle(Vec2 *param_1,Vec2 *param_2)

{
  atan2f(ABS(*(float *)param_1 * *(float *)(param_2 + 4) -
             *(float *)(param_1 + 4) * *(float *)param_2) + 1e-37,
         *(float *)(param_2 + 4) * *(float *)(param_1 + 4) + *(float *)param_1 * *(float *)param_2);
  return;
}

