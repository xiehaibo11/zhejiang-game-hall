
/* cocos2d::TimerTargetCallback::cancel() */

void __thiscall cocos2d::TimerTargetCallback::cancel(TimerTargetCallback *this)

{
  Scheduler::unschedule
            (*(Scheduler **)(this + 0x28),(basic_string *)(this + 0x90),*(void **)(this + 0x50));
  return;
}

