
/* cocos2d::JumpBy::~JumpBy() */

void __thiscall cocos2d::JumpBy::~JumpBy(JumpBy *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

