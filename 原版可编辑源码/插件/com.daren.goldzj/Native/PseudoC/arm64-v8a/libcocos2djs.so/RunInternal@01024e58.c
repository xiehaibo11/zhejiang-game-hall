
/* v8::internal::Sweeper::IterabilityTask::RunInternal() */

void __thiscall v8::internal::Sweeper::IterabilityTask::RunInternal(IterabilityTask *this)

{
  undefined8 *puVar1;
  byte *pbVar2;
  WorkerThreadRuntimeCallStats *pWVar3;
  long *plVar4;
  undefined8 uVar5;
  Sweeper *pSVar6;
  undefined8 *puVar7;
  byte **local_a8;
  byte *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  BackgroundScope aBStack_88 [64];
  undefined8 local_48;
  long *local_40;
  long *local_38;
  
  pWVar3 = (WorkerThreadRuntimeCallStats *)
           GCTracer::worker_thread_runtime_call_stats(*(GCTracer **)(this + 0x38));
  WorkerThreadRuntimeCallStatsScope::WorkerThreadRuntimeCallStatsScope
            ((WorkerThreadRuntimeCallStatsScope *)&local_48,pWVar3);
  GCTracer::BackgroundScope::BackgroundScope(aBStack_88,*(undefined8 *)(this + 0x38),6,local_48);
  if (RunInternal()::trace_event_unique_atomic563 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    RunInternal()::trace_event_unique_atomic563 =
         (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
  }
  pbVar2 = RunInternal()::trace_event_unique_atomic563;
  local_a8 = (byte **)0x0;
  if ((*RunInternal()::trace_event_unique_atomic563 & 5) != 0) {
    uVar5 = GCTracer::BackgroundScope::Name(6);
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x58,pbVar2,uVar5,0,0,0,0,0,0,0,&local_40,0);
    plVar4 = local_38;
    local_38 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_40;
    local_40 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_98 = GCTracer::BackgroundScope::Name(6);
    local_a8 = &local_a0;
    local_a0 = pbVar2;
    local_90 = uVar5;
  }
  pSVar6 = *(Sweeper **)(this + 0x28);
  puVar1 = *(undefined8 **)(pSVar6 + 0x118);
  for (puVar7 = *(undefined8 **)(pSVar6 + 0x110); puVar7 != puVar1; puVar7 = puVar7 + 1) {
    RawSweep(pSVar6,*puVar7,1,FLAG_verify_heap,1);
    pSVar6 = *(Sweeper **)(this + 0x28);
  }
  *(undefined8 *)(pSVar6 + 0x118) = *(undefined8 *)(pSVar6 + 0x110);
  base::Semaphore::Signal(*(Semaphore **)(this + 0x30));
  if ((local_a8 != (byte **)0x0) && (*local_a0 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_a0,local_98,local_90);
  }
  GCTracer::BackgroundScope::~BackgroundScope(aBStack_88);
  WorkerThreadRuntimeCallStatsScope::~WorkerThreadRuntimeCallStatsScope
            ((WorkerThreadRuntimeCallStatsScope *)&local_48);
  return;
}

