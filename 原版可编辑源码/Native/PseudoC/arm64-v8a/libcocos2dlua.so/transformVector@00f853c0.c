
/* cocos2d::Mat4::transformVector(cocos2d::Vec3*) const */

void __thiscall cocos2d::Mat4::transformVector(Mat4 *this,Vec3 *param_1)

{
  MathUtil::transformVec4
            ((float *)this,*(float *)param_1,*(float *)(param_1 + 4),*(float *)(param_1 + 8),0.0,
             (float *)param_1);
  return;
}

