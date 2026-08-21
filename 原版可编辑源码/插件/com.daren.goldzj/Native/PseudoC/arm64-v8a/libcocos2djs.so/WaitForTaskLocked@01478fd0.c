
/* v8::platform::DefaultForegroundTaskRunner::WaitForTaskLocked(v8::base::LockGuard<v8::base::Mutex,
   (v8::base::NullBehavior)0> const&) */

void v8::platform::DefaultForegroundTaskRunner::WaitForTaskLocked(LockGuard *param_1)

{
  base::ConditionVariable::Wait((ConditionVariable *)(param_1 + 0x34),(Mutex *)(param_1 + 0xc));
  return;
}

