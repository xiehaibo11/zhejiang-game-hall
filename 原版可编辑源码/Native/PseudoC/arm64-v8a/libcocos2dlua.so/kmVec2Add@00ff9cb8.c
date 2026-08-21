
/* cocos2d::kmVec2Add(cocos2d::Vec2*, cocos2d::Vec2 const*, cocos2d::Vec2 const*) */

Vec2 * cocos2d::kmVec2Add(Vec2 *param_1,Vec2 *param_2,Vec2 *param_3)

{
  Vec2::add(param_2,param_3,param_1);
  return param_1;
}

