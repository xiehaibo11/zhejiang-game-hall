
/* v8::platform::DefaultForegroundTaskRunner::DefaultForegroundTaskRunner(v8::platform::IdleTaskSupport,
   double (*)()) */

void __thiscall
v8::platform::DefaultForegroundTaskRunner::DefaultForegroundTaskRunner
          (DefaultForegroundTaskRunner *this,undefined4 param_2,undefined8 param_3)

{
  this[8] = (DefaultForegroundTaskRunner)0x0;
  *(undefined ***)this = &PTR_PostTask_01cc4028;
  base::Mutex::Mutex((Mutex *)(this + 0xc));
  base::ConditionVariable::ConditionVariable((ConditionVariable *)(this + 0x34));
  *(undefined4 *)(this + 0x98) = param_2;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xf0) = param_3;
  return;
}

