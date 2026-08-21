
/* cocos2d::TintBy::~TintBy() */

void __thiscall cocos2d::TintBy::~TintBy(TintBy *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

