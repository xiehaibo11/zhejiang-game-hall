
/* cocos2d::TransitionProgress::~TransitionProgress() */

void __thiscall cocos2d::TransitionProgress::~TransitionProgress(TransitionProgress *this)

{
  TransitionFlipX::~TransitionFlipX((TransitionFlipX *)this);
  operator_delete(this);
  return;
}

