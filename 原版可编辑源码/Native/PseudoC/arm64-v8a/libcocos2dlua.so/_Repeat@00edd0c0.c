
/* non-virtual thunk to cocos2d::Repeat::~Repeat() */

void __thiscall cocos2d::Repeat::~Repeat(Repeat *this)

{
  *(undefined ***)(this + -0x28) = &PTR__Repeat_016f85a8;
  *(undefined ***)this = &PTR_clone_016f8608;
  if (*(Ref **)(this + 0x40) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x40));
  }
  Action::~Action((Action *)(this + -0x28));
  return;
}

