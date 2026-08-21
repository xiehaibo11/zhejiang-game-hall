
/* cocos2d::TransitionProgressRadialCW::~TransitionProgressRadialCW() */

void __thiscall
cocos2d::TransitionProgressRadialCW::~TransitionProgressRadialCW(TransitionProgressRadialCW *this)

{
  TransitionFlipX::~TransitionFlipX((TransitionFlipX *)this);
  operator_delete(this);
  return;
}

