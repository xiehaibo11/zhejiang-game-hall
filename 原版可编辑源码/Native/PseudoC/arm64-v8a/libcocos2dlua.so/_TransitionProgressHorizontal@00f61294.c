
/* cocos2d::TransitionProgressHorizontal::~TransitionProgressHorizontal() */

void __thiscall
cocos2d::TransitionProgressHorizontal::~TransitionProgressHorizontal
          (TransitionProgressHorizontal *this)

{
  TransitionFlipX::~TransitionFlipX((TransitionFlipX *)this);
  operator_delete(this);
  return;
}

