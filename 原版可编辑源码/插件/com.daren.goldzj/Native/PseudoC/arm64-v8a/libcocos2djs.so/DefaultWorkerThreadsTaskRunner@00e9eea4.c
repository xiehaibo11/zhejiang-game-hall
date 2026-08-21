
/* v8::platform::DefaultWorkerThreadsTaskRunner::DefaultWorkerThreadsTaskRunner(unsigned int, double
   (*)()) */

void __thiscall
v8::platform::DefaultWorkerThreadsTaskRunner::DefaultWorkerThreadsTaskRunner
          (DefaultWorkerThreadsTaskRunner *this,uint param_1,_func_double *param_2)

{
  long lVar1;
  Thread *pTVar2;
  ulong uVar3;
  Thread *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR_PostTask_01c98180;
  this[8] = (DefaultWorkerThreadsTaskRunner)0x0;
  base::Mutex::Mutex((Mutex *)(this + 0xc));
  DelayedTaskQueue::DelayedTaskQueue((DelayedTaskQueue *)(this + 0x38),param_2);
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(_func_double **)(this + 0x100) = param_2;
  *(undefined4 *)(this + 0x108) = 0;
  *(uint *)(this + 0x10c) = param_1;
  for (; param_1 != 0; param_1 = param_1 - 1) {
    pTVar2 = operator_new(0x38);
    local_68 = (Thread *)0x1998925;
    local_60 = 0;
    base::Thread::Thread(pTVar2,(Options *)&local_68);
    *(undefined ***)pTVar2 = &PTR__WorkerThread_01c981e0;
    *(DefaultWorkerThreadsTaskRunner **)(pTVar2 + 0x30) = this;
    uVar3 = base::Thread::Start(pTVar2);
    if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","Start()");
    }
    if (*(undefined8 **)(this + 0xf0) < *(undefined8 **)(this + 0xf8)) {
      local_68 = (Thread *)0x0;
      **(undefined8 **)(this + 0xf0) = pTVar2;
      *(long *)(this + 0xf0) = *(long *)(this + 0xf0) + 8;
    }
    else {
      local_68 = pTVar2;
      std::__ndk1::
      vector<std::__ndk1::unique_ptr<v8::platform::DefaultWorkerThreadsTaskRunner::WorkerThread,std::__ndk1::default_delete<v8::platform::DefaultWorkerThreadsTaskRunner::WorkerThread>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::platform::DefaultWorkerThreadsTaskRunner::WorkerThread,std::__ndk1::default_delete<v8::platform::DefaultWorkerThreadsTaskRunner::WorkerThread>>>>
      ::
      __push_back_slow_path<std::__ndk1::unique_ptr<v8::platform::DefaultWorkerThreadsTaskRunner::WorkerThread,std::__ndk1::default_delete<v8::platform::DefaultWorkerThreadsTaskRunner::WorkerThread>>>
                ((vector<std::__ndk1::unique_ptr<v8::platform::DefaultWorkerThreadsTaskRunner::WorkerThread,std::__ndk1::default_delete<v8::platform::DefaultWorkerThreadsTaskRunner::WorkerThread>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::platform::DefaultWorkerThreadsTaskRunner::WorkerThread,std::__ndk1::default_delete<v8::platform::DefaultWorkerThreadsTaskRunner::WorkerThread>>>>
                  *)(this + 0xe8),(unique_ptr *)&local_68);
    }
    pTVar2 = local_68;
    local_68 = (Thread *)0x0;
    if (pTVar2 != (Thread *)0x0) {
      (**(code **)(*(long *)pTVar2 + 8))();
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

