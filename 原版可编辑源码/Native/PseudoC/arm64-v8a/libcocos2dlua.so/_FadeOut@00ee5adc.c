
/* non-virtual thunk to cocos2d::FadeOut::~FadeOut() */

void __thiscall cocos2d::FadeOut::~FadeOut(FadeOut *this)

{
  Action::~Action((Action *)(this + -0x28));
  operator_delete((Action *)(this + -0x28));
  return;
}

