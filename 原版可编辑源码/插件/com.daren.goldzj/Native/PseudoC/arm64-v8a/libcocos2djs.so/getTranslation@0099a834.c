
/* cocos2d::Mat4::getTranslation(cocos2d::Vec3*) const */

void __thiscall cocos2d::Mat4::getTranslation(Mat4 *this,Vec3 *param_1)

{
  if (param_1 != (Vec3 *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)(this + 0x30);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x34);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x38);
  }
  return;
}

