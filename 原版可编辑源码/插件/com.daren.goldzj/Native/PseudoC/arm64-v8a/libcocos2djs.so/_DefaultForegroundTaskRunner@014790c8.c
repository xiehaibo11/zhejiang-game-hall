
/* v8::platform::DefaultForegroundTaskRunner::~DefaultForegroundTaskRunner() */

void __thiscall
v8::platform::DefaultForegroundTaskRunner::~DefaultForegroundTaskRunner
          (DefaultForegroundTaskRunner *this)

{
  ~DefaultForegroundTaskRunner(this);
  operator_delete(this);
  return;
}

