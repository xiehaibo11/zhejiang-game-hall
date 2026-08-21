
/* cocos2d::Repeat::~Repeat() */

void __thiscall cocos2d::Repeat::~Repeat(Repeat *this)

{
  *(undefined ***)this = &PTR__Repeat_016f85a8;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f8608;
  if (*(Ref **)(this + 0x68) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x68));
  }
  Action::~Action((Action *)this);
  return;
}

