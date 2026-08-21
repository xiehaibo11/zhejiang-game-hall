
/* cocos2d::Quaternion::setIdentity() */

void __thiscall cocos2d::Quaternion::setIdentity(Quaternion *this)

{
  *(undefined8 *)(this + 8) = 0x3f80000000000000;
  *(undefined8 *)this = 0;
  return;
}

