
/* cocos2d::TransitionProgressOutIn::~TransitionProgressOutIn() */

void __thiscall
cocos2d::TransitionProgressOutIn::~TransitionProgressOutIn(TransitionProgressOutIn *this)

{
  TransitionFlipX::~TransitionFlipX((TransitionFlipX *)this);
  operator_delete(this);
  return;
}

