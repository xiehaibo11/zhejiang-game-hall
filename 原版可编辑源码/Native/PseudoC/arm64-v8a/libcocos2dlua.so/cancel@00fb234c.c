
/* cocos2d::TimerTargetSelector::cancel() */

void __thiscall cocos2d::TimerTargetSelector::cancel(TimerTargetSelector *this)

{
  Scheduler::unschedule(*(_func_void_float **)(this + 0x28),*(Ref **)(this + 0x58));
  return;
}

