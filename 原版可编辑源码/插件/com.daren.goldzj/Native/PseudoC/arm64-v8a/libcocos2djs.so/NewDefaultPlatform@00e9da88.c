
/* v8::platform::NewDefaultPlatform(int, v8::platform::IdleTaskSupport,
   v8::platform::InProcessStackDumping, std::__ndk1::unique_ptr<v8::TracingController,
   std::__ndk1::default_delete<v8::TracingController> >) */

void __thiscall
v8::platform::NewDefaultPlatform
          (undefined8 *param_1_00,int param_2,undefined4 param_1,int param_4,undefined8 *param_5)

{
  long *plVar1;
  DefaultPlatform *this;
  long *local_28;
  
  if (param_4 == 1) {
    base::debug::EnableInProcessStackDumping();
  }
  this = operator_new(0x78);
  local_28 = (long *)*param_5;
  *param_5 = 0;
  DefaultPlatform::DefaultPlatform(this,param_1,&local_28);
  plVar1 = local_28;
  local_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  base::Mutex::Lock((Mutex *)(this + 8));
  if (param_2 < 1) {
    param_2 = base::SysInfo::NumberOfProcessors();
    param_2 = param_2 + -1;
  }
  if (7 < param_2) {
    param_2 = 8;
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  *(int *)(this + 0x30) = param_2;
  base::Mutex::Unlock((Mutex *)(this + 8));
  DefaultPlatform::EnsureBackgroundTaskRunnerInitialized(this);
  *param_1_00 = this;
  return;
}

