
/* v8::platform::DefaultWorkerThreadsTaskRunner::WorkerThread::Run() */

void __thiscall v8::platform::DefaultWorkerThreadsTaskRunner::WorkerThread::Run(WorkerThread *this)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  long *local_28;
  
  lVar3 = *(long *)(this + 0x30);
  uVar2 = base::OS::GetCurrentThreadId();
  *(undefined4 *)(lVar3 + 0x108) = uVar2;
  while( true ) {
    plVar1 = local_28;
    DelayedTaskQueue::GetNext();
    if (local_28 == (long *)0x0) break;
    (**(code **)(*local_28 + 0x10))();
    local_28 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  return;
}

