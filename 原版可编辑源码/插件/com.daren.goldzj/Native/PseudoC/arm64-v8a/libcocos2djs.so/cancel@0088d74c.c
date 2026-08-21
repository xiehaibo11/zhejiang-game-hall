
/* cocos2d::TimerTargetCallback::cancel() */

void __thiscall cocos2d::TimerTargetCallback::cancel(TimerTargetCallback *this)

{
  Scheduler::unschedule
            (*(Scheduler **)(this + 0x10),(basic_string *)(this + 0x70),*(void **)(this + 0x30));
  return;
}

