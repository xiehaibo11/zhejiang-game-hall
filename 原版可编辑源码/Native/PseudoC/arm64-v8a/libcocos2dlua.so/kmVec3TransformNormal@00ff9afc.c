
/* cocos2d::kmVec3TransformNormal(cocos2d::Vec3*, cocos2d::Vec3 const*, cocos2d::Mat4 const*) */

Vec3 * cocos2d::kmVec3TransformNormal(Vec3 *param_1,Vec3 *param_2,Mat4 *param_3)

{
  Mat4::transformVector(param_3,param_2,param_1);
  return param_1;
}

