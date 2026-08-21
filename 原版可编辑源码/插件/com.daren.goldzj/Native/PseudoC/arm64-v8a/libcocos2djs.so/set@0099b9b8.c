
/* cocos2d::Quaternion::set(cocos2d::Mat4 const&) */

void __thiscall cocos2d::Quaternion::set(Quaternion *this,Mat4 *param_1)

{
  Mat4::getRotation(param_1,this);
  return;
}

