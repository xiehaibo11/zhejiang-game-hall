
/* non-virtual thunk to cocos2d::Sequence::~Sequence() */

void __thiscall cocos2d::Sequence::~Sequence(Sequence *this)

{
  *(undefined ***)(this + -0x28) = &PTR__Sequence_016f8520;
  *(undefined ***)this = &PTR_clone_016f8580;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
  if (*(Ref **)(this + 0x38) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x38));
  }
  Action::~Action((Action *)(this + -0x28));
  return;
}

