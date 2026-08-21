
/* cocos2d::kmVec3Transform(cocos2d::Vec3*, cocos2d::Vec3 const*, cocos2d::Mat4 const*) */

Vec3 * cocos2d::kmVec3Transform(Vec3 *param_1,Vec3 *param_2,Mat4 *param_3)

{
  Mat4::transformVector
            (param_3,*(float *)param_2,*(float *)(param_2 + 4),*(float *)(param_2 + 8),1.0,param_1);
  return param_1;
}

