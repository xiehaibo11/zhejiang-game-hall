
/* v8::platform::DefaultPlatform::IdleTasksEnabled(v8::Isolate*) */

bool v8::platform::DefaultPlatform::IdleTasksEnabled(Isolate *param_1)

{
  return *(int *)(param_1 + 0x34) == 1;
}

