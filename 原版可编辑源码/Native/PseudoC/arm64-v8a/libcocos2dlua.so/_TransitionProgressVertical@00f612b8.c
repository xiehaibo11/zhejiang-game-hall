
/* cocos2d::TransitionProgressVertical::~TransitionProgressVertical() */

void __thiscall
cocos2d::TransitionProgressVertical::~TransitionProgressVertical(TransitionProgressVertical *this)

{
  TransitionFlipX::~TransitionFlipX((TransitionFlipX *)this);
  operator_delete(this);
  return;
}

