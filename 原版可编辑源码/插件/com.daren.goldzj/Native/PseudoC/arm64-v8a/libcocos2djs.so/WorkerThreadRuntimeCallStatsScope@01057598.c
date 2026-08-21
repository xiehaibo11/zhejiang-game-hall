
/* v8::internal::WorkerThreadRuntimeCallStatsScope::WorkerThreadRuntimeCallStatsScope(v8::internal::WorkerThreadRuntimeCallStats*)
    */

void __thiscall
v8::internal::WorkerThreadRuntimeCallStatsScope::WorkerThreadRuntimeCallStatsScope
          (WorkerThreadRuntimeCallStatsScope *this,WorkerThreadRuntimeCallStats *param_1)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined8 *)this = 0;
  if (TracingFlags::runtime_stats != 0) {
    if (param_1[0x40] == (WorkerThreadRuntimeCallStats)0x0) {
      iVar1 = base::Thread::CreateThreadLocalKey();
      if (param_1[0x40] == (WorkerThreadRuntimeCallStats)0x0) {
        param_1[0x40] = (WorkerThreadRuntimeCallStats)0x1;
      }
      *(int *)(param_1 + 0x44) = iVar1;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x44);
    }
    lVar2 = base::Thread::GetThreadLocal(iVar1);
    *(long *)this = lVar2;
    if (lVar2 == 0) {
      pvVar3 = (void *)WorkerThreadRuntimeCallStats::NewTable(param_1);
      *(void **)this = pvVar3;
      if (param_1[0x40] == (WorkerThreadRuntimeCallStats)0x0) {
        iVar1 = base::Thread::CreateThreadLocalKey();
        if (param_1[0x40] == (WorkerThreadRuntimeCallStats)0x0) {
          param_1[0x40] = (WorkerThreadRuntimeCallStats)0x1;
        }
        *(int *)(param_1 + 0x44) = iVar1;
        pvVar3 = *(void **)this;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x44);
      }
      base::Thread::SetThreadLocal(iVar1,pvVar3);
    }
    if ((TracingFlags::runtime_stats >> 1 & 1) != 0) {
      RuntimeCallStats::Reset(*(RuntimeCallStats **)this);
      return;
    }
  }
  return;
}

