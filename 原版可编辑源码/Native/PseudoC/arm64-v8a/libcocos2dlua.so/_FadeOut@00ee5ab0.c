
/* cocos2d::FadeOut::~FadeOut() */

void __thiscall cocos2d::FadeOut::~FadeOut(FadeOut *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

