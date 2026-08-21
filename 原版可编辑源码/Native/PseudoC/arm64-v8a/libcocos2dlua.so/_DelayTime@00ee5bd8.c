
/* non-virtual thunk to cocos2d::DelayTime::~DelayTime() */

void __thiscall cocos2d::DelayTime::~DelayTime(DelayTime *this)

{
  Action::~Action((Action *)(this + -0x28));
  operator_delete((Action *)(this + -0x28));
  return;
}

