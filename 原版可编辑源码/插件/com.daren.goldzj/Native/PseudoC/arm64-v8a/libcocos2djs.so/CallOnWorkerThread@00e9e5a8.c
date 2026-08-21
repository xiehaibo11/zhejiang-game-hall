
/* v8::platform::DefaultPlatform::CallOnWorkerThread(std::__ndk1::unique_ptr<v8::Task,
   std::__ndk1::default_delete<v8::Task> >) */

void __thiscall
v8::platform::DefaultPlatform::CallOnWorkerThread(DefaultPlatform *this,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *local_28;
  
  EnsureBackgroundTaskRunnerInitialized(this);
  local_28 = (long *)*param_2;
  puVar2 = *(undefined8 **)(this + 0x38);
  *param_2 = 0;
  (**(code **)*puVar2)(puVar2,&local_28);
  plVar1 = local_28;
  local_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return;
}

