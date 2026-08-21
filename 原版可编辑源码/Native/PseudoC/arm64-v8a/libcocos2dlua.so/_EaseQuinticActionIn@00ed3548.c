
/* cocos2d::EaseQuinticActionIn::~EaseQuinticActionIn() */

void __thiscall cocos2d::EaseQuinticActionIn::~EaseQuinticActionIn(EaseQuinticActionIn *this)

{
  *(undefined ***)this = &PTR__ActionEase_016f5ab0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

