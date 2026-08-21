
/* cocos2d::ResizeBy::~ResizeBy() */

void __thiscall cocos2d::ResizeBy::~ResizeBy(ResizeBy *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

