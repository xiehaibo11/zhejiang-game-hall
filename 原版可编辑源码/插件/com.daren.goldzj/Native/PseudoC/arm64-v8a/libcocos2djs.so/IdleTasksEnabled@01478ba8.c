
/* v8::platform::DefaultForegroundTaskRunner::IdleTasksEnabled() */

bool __thiscall
v8::platform::DefaultForegroundTaskRunner::IdleTasksEnabled(DefaultForegroundTaskRunner *this)

{
  return *(int *)(this + 0x98) == 1;
}

