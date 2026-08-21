
/* cocos2d::kmVec2Subtract(cocos2d::Vec2*, cocos2d::Vec2 const*, cocos2d::Vec2 const*) */

Vec2 * cocos2d::kmVec2Subtract(Vec2 *param_1,Vec2 *param_2,Vec2 *param_3)

{
  Vec2::subtract(param_2,param_3,param_1);
  return param_1;
}

