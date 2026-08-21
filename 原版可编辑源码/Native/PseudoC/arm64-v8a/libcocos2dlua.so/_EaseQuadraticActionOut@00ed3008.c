
/* non-virtual thunk to cocos2d::EaseQuadraticActionOut::~EaseQuadraticActionOut() */

void __thiscall
cocos2d::EaseQuadraticActionOut::~EaseQuadraticActionOut(EaseQuadraticActionOut *this)

{
  *(undefined ***)(this + -0x28) = &PTR__ActionEase_016f5ab0;
  *(undefined ***)this = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
  Action::~Action((Action *)(this + -0x28));
  return;
}

