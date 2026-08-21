
/* cocos2d::RemoveSelf::~RemoveSelf() */

void __thiscall cocos2d::RemoveSelf::~RemoveSelf(RemoveSelf *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

