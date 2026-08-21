
/* cocos2d::ScaleBy::~ScaleBy() */

void __thiscall cocos2d::ScaleBy::~ScaleBy(ScaleBy *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

