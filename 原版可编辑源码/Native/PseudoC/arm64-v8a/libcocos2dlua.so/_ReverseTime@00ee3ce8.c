
/* cocos2d::ReverseTime::~ReverseTime() */

void __thiscall cocos2d::ReverseTime::~ReverseTime(ReverseTime *this)

{
  *(undefined ***)this = &PTR__ReverseTime_016f88d8;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f8938;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
  Action::~Action((Action *)this);
  return;
}

