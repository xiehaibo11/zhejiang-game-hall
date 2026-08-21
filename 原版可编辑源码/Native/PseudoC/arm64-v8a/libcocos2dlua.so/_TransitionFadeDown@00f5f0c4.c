
/* cocos2d::TransitionFadeDown::~TransitionFadeDown() */

void __thiscall cocos2d::TransitionFadeDown::~TransitionFadeDown(TransitionFadeDown *this)

{
  TransitionFadeBL::~TransitionFadeBL((TransitionFadeBL *)this);
  operator_delete(this);
  return;
}

