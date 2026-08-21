
/* cocos2d::Mat4::createLookAt(cocos2d::Vec3 const&, cocos2d::Vec3 const&, cocos2d::Vec3 const&,
   cocos2d::Mat4*) */

void cocos2d::Mat4::createLookAt(Vec3 *param_1,Vec3 *param_2,Vec3 *param_3,Mat4 *param_4)

{
  createLookAt(*(float *)param_1,*(float *)(param_1 + 4),*(float *)(param_1 + 8),*(float *)param_2,
               *(float *)(param_2 + 4),*(float *)(param_2 + 8),*(float *)param_3,
               *(float *)(param_3 + 4),*(float *)(param_3 + 8),param_4);
  return;
}

