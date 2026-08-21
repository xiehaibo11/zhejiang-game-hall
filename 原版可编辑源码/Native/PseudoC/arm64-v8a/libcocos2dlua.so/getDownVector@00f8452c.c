
/* cocos2d::Mat4::getDownVector(cocos2d::Vec3*) const */

void __thiscall cocos2d::Mat4::getDownVector(Mat4 *this,Vec3 *param_1)

{
  *(float *)param_1 = -*(float *)(this + 0x10);
  *(float *)(param_1 + 4) = -*(float *)(this + 0x14);
  *(float *)(param_1 + 8) = -*(float *)(this + 0x18);
  return;
}

