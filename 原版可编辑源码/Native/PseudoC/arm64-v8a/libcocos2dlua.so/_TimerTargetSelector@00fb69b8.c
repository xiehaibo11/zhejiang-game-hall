
/* cocos2d::TimerTargetSelector::~TimerTargetSelector() */

void __thiscall cocos2d::TimerTargetSelector::~TimerTargetSelector(TimerTargetSelector *this)

{
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

