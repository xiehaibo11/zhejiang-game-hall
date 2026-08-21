
/* cocos2d::TintTo::~TintTo() */

void __thiscall cocos2d::TintTo::~TintTo(TintTo *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

