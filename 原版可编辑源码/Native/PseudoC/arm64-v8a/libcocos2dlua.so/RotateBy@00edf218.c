
/* cocos2d::RotateBy::RotateBy() */

void __thiscall cocos2d::RotateBy::RotateBy(RotateBy *this)

{
  Action::Action((Action *)this);
  *(undefined4 *)(this + 0x4c) = 0;
  this[0x56] = (RotateBy)0x0;
  *(undefined ***)this = &PTR__Action_016f87c8;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f8828;
  Vec3::Vec3((Vec3 *)(this + 0x58));
  Vec3::Vec3((Vec3 *)(this + 100));
  return;
}

