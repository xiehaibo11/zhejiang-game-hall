
/* v8::platform::DefaultWorkerThreadsTaskRunner::PostTask(std::__ndk1::unique_ptr<v8::Task,
   std::__ndk1::default_delete<v8::Task> >) */

void __thiscall
v8::platform::DefaultWorkerThreadsTaskRunner::PostTask
          (DefaultWorkerThreadsTaskRunner *this,undefined8 *param_2)

{
  long *plVar1;
  long *local_18;
  
  base::Mutex::Lock((Mutex *)(this + 0xc));
  if (this[8] == (DefaultWorkerThreadsTaskRunner)0x0) {
    local_18 = (long *)*param_2;
    *param_2 = 0;
    DelayedTaskQueue::Append((DelayedTaskQueue *)(this + 0x38),&local_18);
    plVar1 = local_18;
    local_18 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  base::Mutex::Unlock((Mutex *)(this + 0xc));
  return;
}

