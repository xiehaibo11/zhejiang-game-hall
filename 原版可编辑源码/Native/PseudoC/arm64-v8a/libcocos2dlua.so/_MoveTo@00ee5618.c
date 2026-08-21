
/* cocos2d::MoveTo::~MoveTo() */

void __thiscall cocos2d::MoveTo::~MoveTo(MoveTo *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

