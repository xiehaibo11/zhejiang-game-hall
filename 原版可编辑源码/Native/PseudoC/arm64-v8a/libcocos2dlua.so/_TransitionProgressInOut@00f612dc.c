
/* cocos2d::TransitionProgressInOut::~TransitionProgressInOut() */

void __thiscall
cocos2d::TransitionProgressInOut::~TransitionProgressInOut(TransitionProgressInOut *this)

{
  TransitionFlipX::~TransitionFlipX((TransitionFlipX *)this);
  operator_delete(this);
  return;
}

