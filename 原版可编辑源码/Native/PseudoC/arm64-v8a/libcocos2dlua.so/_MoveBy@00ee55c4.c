
/* cocos2d::MoveBy::~MoveBy() */

void __thiscall cocos2d::MoveBy::~MoveBy(MoveBy *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

