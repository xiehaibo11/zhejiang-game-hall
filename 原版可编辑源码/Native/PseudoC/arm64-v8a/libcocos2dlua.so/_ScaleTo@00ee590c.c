
/* cocos2d::ScaleTo::~ScaleTo() */

void __thiscall cocos2d::ScaleTo::~ScaleTo(ScaleTo *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

