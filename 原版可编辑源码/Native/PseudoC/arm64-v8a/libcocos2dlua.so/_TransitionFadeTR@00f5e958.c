
/* cocos2d::TransitionFadeTR::~TransitionFadeTR() */

void __thiscall cocos2d::TransitionFadeTR::~TransitionFadeTR(TransitionFadeTR *this)

{
  TransitionFadeBL::~TransitionFadeBL((TransitionFadeBL *)this);
  operator_delete(this);
  return;
}

