
/* cocos2d::TransitionFadeUp::~TransitionFadeUp() */

void __thiscall cocos2d::TransitionFadeUp::~TransitionFadeUp(TransitionFadeUp *this)

{
  TransitionFadeBL::~TransitionFadeBL((TransitionFadeBL *)this);
  operator_delete(this);
  return;
}

