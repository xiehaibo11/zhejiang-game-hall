
/* cocos2d::ProgressFromTo::~ProgressFromTo() */

void __thiscall cocos2d::ProgressFromTo::~ProgressFromTo(ProgressFromTo *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

