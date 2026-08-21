
/* cocos2d::Mat4::getForwardVector(cocos2d::Vec3*) const */

void __thiscall cocos2d::Mat4::getForwardVector(Mat4 *this,Vec3 *param_1)

{
  *(float *)param_1 = -*(float *)(this + 0x20);
  *(float *)(param_1 + 4) = -*(float *)(this + 0x24);
  *(float *)(param_1 + 8) = -*(float *)(this + 0x28);
  return;
}

