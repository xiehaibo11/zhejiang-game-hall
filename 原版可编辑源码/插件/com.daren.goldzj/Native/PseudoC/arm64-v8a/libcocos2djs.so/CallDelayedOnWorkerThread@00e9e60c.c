
/* v8::platform::DefaultPlatform::CallDelayedOnWorkerThread(std::__ndk1::unique_ptr<v8::Task,
   std::__ndk1::default_delete<v8::Task> >, double) */

void __thiscall
v8::platform::DefaultPlatform::CallDelayedOnWorkerThread
          (undefined8 param_1,DefaultPlatform *this,undefined8 *param_3)

{
  long *plVar1;
  long *local_28;
  
  EnsureBackgroundTaskRunnerInitialized(this);
  local_28 = (long *)*param_3;
  plVar1 = *(long **)(this + 0x38);
  *param_3 = 0;
  (**(code **)(*plVar1 + 0x10))(param_1,plVar1,&local_28);
  plVar1 = local_28;
  local_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return;
}

