
/* v8::platform::DefaultWorkerThreadsTaskRunner::PostDelayedTask(std::__ndk1::unique_ptr<v8::Task,
   std::__ndk1::default_delete<v8::Task> >, double) */

void __thiscall
v8::platform::DefaultWorkerThreadsTaskRunner::PostDelayedTask
          (DelayedTaskQueue *param_1,DefaultWorkerThreadsTaskRunner *this,undefined8 *param_3)

{
  long *plVar1;
  long *local_38;
  
  base::Mutex::Lock((Mutex *)(this + 0xc));
  if (this[8] == (DefaultWorkerThreadsTaskRunner)0x0) {
    local_38 = (long *)*param_3;
    *param_3 = 0;
    DelayedTaskQueue::AppendDelayed(param_1,this + 0x38,&local_38);
    plVar1 = local_38;
    local_38 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  base::Mutex::Unlock((Mutex *)(this + 0xc));
  return;
}

