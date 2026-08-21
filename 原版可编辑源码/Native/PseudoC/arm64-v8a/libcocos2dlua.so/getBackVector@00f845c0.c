
/* cocos2d::Mat4::getBackVector(cocos2d::Vec3*) const */

void __thiscall cocos2d::Mat4::getBackVector(Mat4 *this,Vec3 *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x20);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x28);
  return;
}

