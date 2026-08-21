
/* cocos2d::kmVec3Subtract(cocos2d::Vec3*, cocos2d::Vec3 const*, cocos2d::Vec3 const*) */

Vec3 * cocos2d::kmVec3Subtract(Vec3 *param_1,Vec3 *param_2,Vec3 *param_3)

{
  Vec3::subtract(param_2,param_3,param_1);
  return param_1;
}

