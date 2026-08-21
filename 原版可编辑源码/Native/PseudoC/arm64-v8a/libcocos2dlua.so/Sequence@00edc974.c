
/* cocos2d::Sequence::Sequence() */

void __thiscall cocos2d::Sequence::Sequence(Sequence *this)

{
  Action::Action((Action *)this);
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined ***)this = &PTR__Sequence_016f8520;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f8580;
  return;
}

