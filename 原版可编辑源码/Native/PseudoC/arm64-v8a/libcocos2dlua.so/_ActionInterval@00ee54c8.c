
/* cocos2d::ActionInterval::~ActionInterval() */

void __thiscall cocos2d::ActionInterval::~ActionInterval(ActionInterval *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

