
/* cocos2d::Mat4::getLeftVector(cocos2d::Vec3*) const */

void __thiscall cocos2d::Mat4::getLeftVector(Mat4 *this,Vec3 *param_1)

{
  *(float *)param_1 = -*(float *)this;
  *(float *)(param_1 + 4) = -*(float *)(this + 4);
  *(float *)(param_1 + 8) = -*(float *)(this + 8);
  return;
}

