
/* cocos2d::RotateTo::RotateTo() */

void __thiscall cocos2d::RotateTo::RotateTo(RotateTo *this)

{
  Action::Action((Action *)this);
  *(undefined4 *)(this + 0x4c) = 0;
  this[0x56] = (RotateTo)0x0;
  *(undefined ***)this = &PTR__Action_016f8740;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f87a0;
  Vec3::Vec3((Vec3 *)(this + 0x58));
  Vec3::Vec3((Vec3 *)(this + 100));
  Vec3::Vec3((Vec3 *)(this + 0x70));
  return;
}

