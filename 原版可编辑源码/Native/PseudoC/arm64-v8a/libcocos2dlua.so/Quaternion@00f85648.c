
/* cocos2d::Quaternion::Quaternion(cocos2d::Mat4 const&) */

void __thiscall cocos2d::Quaternion::Quaternion(Quaternion *this,Mat4 *param_1)

{
  Mat4::getRotation(param_1,this);
  return;
}

