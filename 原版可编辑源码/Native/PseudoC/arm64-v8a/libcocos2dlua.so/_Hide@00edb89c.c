
/* cocos2d::Hide::~Hide() */

void __thiscall cocos2d::Hide::~Hide(Hide *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

