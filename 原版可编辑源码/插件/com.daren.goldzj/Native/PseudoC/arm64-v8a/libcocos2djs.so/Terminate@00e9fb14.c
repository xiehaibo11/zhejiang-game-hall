
/* v8::platform::DelayedTaskQueue::Terminate() */

void __thiscall v8::platform::DelayedTaskQueue::Terminate(DelayedTaskQueue *this)

{
  base::Mutex::Lock((Mutex *)(this + 0x30));
  this[0xa0] = (DelayedTaskQueue)0x1;
  base::ConditionVariable::NotifyAll((ConditionVariable *)this);
  base::Mutex::Unlock((Mutex *)(this + 0x30));
  return;
}

