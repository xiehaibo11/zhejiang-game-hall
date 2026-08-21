
/* v8::internal::MemoryAllocator::Unmapper::UnmapFreeMemoryTask::RunInternal() */

void __thiscall
v8::internal::MemoryAllocator::Unmapper::UnmapFreeMemoryTask::RunInternal(UnmapFreeMemoryTask *this)

{
  char cVar1;
  bool bVar2;
  byte *pbVar3;
  WorkerThreadRuntimeCallStats *pWVar4;
  long *plVar5;
  undefined8 uVar6;
  byte **local_a0;
  byte *local_98;
  undefined8 local_90;
  undefined8 local_88;
  BackgroundScope aBStack_80 [64];
  long *local_40;
  long *local_38;
  undefined8 local_18;
  
  pWVar4 = (WorkerThreadRuntimeCallStats *)
           GCTracer::worker_thread_runtime_call_stats(*(GCTracer **)(this + 0x30));
  WorkerThreadRuntimeCallStatsScope::WorkerThreadRuntimeCallStatsScope
            ((WorkerThreadRuntimeCallStatsScope *)&local_18,pWVar4);
  GCTracer::BackgroundScope::BackgroundScope(aBStack_80,*(undefined8 *)(this + 0x30),2,local_18);
  if (RunInternal()::trace_event_unique_atomic250 == (byte *)0x0) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    RunInternal()::trace_event_unique_atomic250 =
         (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.gc");
  }
  pbVar3 = RunInternal()::trace_event_unique_atomic250;
  local_a0 = (byte **)0x0;
  if ((*RunInternal()::trace_event_unique_atomic250 & 5) != 0) {
    uVar6 = GCTracer::BackgroundScope::Name(2);
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,0x58,pbVar3,uVar6,0,0,0,0,0,0,0,&local_40,0);
    plVar5 = local_38;
    local_38 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_40;
    local_40 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_90 = GCTracer::BackgroundScope::Name(2);
    local_a0 = &local_98;
    local_98 = pbVar3;
    local_88 = uVar6;
  }
  PerformFreeMemoryOnQueuedChunks<(v8::internal::MemoryAllocator::Unmapper::FreeMode)0>
            (*(Unmapper **)(this + 0x28));
  plVar5 = (long *)(*(long *)(this + 0x28) + 0xb8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  base::Semaphore::Signal((Semaphore *)(*(long *)(this + 0x28) + 0xa0));
  if (FLAG_trace_unmapper != '\0') {
    PrintIsolate((void *)(**(long **)(this + 0x28) + -0x8850),"UnmapFreeMemoryTask Done: id=%lu\n",
                 *(undefined8 *)(this + 0x18));
  }
  if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_98,local_90,local_88);
  }
  GCTracer::BackgroundScope::~BackgroundScope(aBStack_80);
  WorkerThreadRuntimeCallStatsScope::~WorkerThreadRuntimeCallStatsScope
            ((WorkerThreadRuntimeCallStatsScope *)&local_18);
  return;
}

