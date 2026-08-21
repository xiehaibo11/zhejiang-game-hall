
/* cocos2d::ProgressTo::~ProgressTo() */

void __thiscall cocos2d::ProgressTo::~ProgressTo(ProgressTo *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

