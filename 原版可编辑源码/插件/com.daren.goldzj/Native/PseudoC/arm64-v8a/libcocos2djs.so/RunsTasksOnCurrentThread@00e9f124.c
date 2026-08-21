
/* v8::platform::DefaultWorkerThreadsTaskRunner::RunsTasksOnCurrentThread() const */

bool __thiscall
v8::platform::DefaultWorkerThreadsTaskRunner::RunsTasksOnCurrentThread
          (DefaultWorkerThreadsTaskRunner *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x108);
  iVar2 = base::OS::GetCurrentThreadId();
  return iVar1 == iVar2;
}

