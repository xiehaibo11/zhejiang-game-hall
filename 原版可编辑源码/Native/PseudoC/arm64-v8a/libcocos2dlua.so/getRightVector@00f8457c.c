
/* cocos2d::Mat4::getRightVector(cocos2d::Vec3*) const */

void __thiscall cocos2d::Mat4::getRightVector(Mat4 *this,Vec3 *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 8);
  return;
}

