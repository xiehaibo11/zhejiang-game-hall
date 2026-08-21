
/* v8::platform::DefaultWorkerThreadsTaskRunner::WorkerThread::WorkerThread(v8::platform::DefaultWorkerThreadsTaskRunner*)
    */

void __thiscall
v8::platform::DefaultWorkerThreadsTaskRunner::WorkerThread::WorkerThread
          (WorkerThread *this,DefaultWorkerThreadsTaskRunner *param_1)

{
  long lVar1;
  ulong uVar2;
  char *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = "V8 DefaultWorkerThreadsTaskRunner WorkerThread";
  local_40 = 0;
  base::Thread::Thread((Thread *)this,(Options *)&local_48);
  *(DefaultWorkerThreadsTaskRunner **)(this + 0x30) = param_1;
  *(undefined ***)this = &PTR__WorkerThread_01c981e0;
  uVar2 = base::Thread::Start((Thread *)this);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","Start()");
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

