
/* cocos2d::RotateTo::~RotateTo() */

void __thiscall cocos2d::RotateTo::~RotateTo(RotateTo *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

