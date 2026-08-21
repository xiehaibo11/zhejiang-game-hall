
/* v8::platform::DelayedTaskQueue::DelayedTaskQueue(double (*)()) */

void __thiscall
v8::platform::DelayedTaskQueue::DelayedTaskQueue(DelayedTaskQueue *this,_func_double *param_1)

{
  base::ConditionVariable::ConditionVariable((ConditionVariable *)this);
  base::Mutex::Mutex((Mutex *)(this + 0x30));
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(DelayedTaskQueue **)(this + 0x88) = this + 0x90;
  this[0xa0] = (DelayedTaskQueue)0x0;
  *(_func_double **)(this + 0xa8) = param_1;
  return;
}

