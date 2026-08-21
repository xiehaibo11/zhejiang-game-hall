
/* cocos2d::kmVec4Subtract(cocos2d::Vec4*, cocos2d::Vec4 const*, cocos2d::Vec4 const*) */

Vec4 * cocos2d::kmVec4Subtract(Vec4 *param_1,Vec4 *param_2,Vec4 *param_3)

{
  Vec4::subtract(param_2,param_3,param_1);
  return param_1;
}

