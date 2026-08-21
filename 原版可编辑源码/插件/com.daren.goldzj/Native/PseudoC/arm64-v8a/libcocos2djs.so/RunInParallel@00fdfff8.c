
/* v8::internal::YoungGenerationMarkingTask::RunInParallel(v8::internal::ItemParallelJob::Task::Runner)
    */

void __thiscall
v8::internal::YoungGenerationMarkingTask::RunInParallel
          (YoungGenerationMarkingTask *this,int param_2)

{
  byte *pbVar1;
  WorkerThreadRuntimeCallStats *pWVar2;
  long *plVar3;
  undefined8 uVar4;
  byte **local_a0;
  byte *local_98;
  undefined8 local_90;
  undefined8 local_88;
  BackgroundScope aBStack_80 [64];
  long *local_40;
  long *local_38;
  undefined8 local_18;
  
  if (param_2 == 0) {
    GCTracer::Scope::Scope
              ((Scope *)aBStack_80,*(undefined8 *)(*(long *)(*(long *)(this + 0x50) + 8) + 0x7f8),
               0x51);
    if (RunInParallel(v8::internal::ItemParallelJob::Task::Runner)::trace_event_unique_atomic4663 ==
        (byte *)0x0) {
      plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
      RunInParallel(v8::internal::ItemParallelJob::Task::Runner)::trace_event_unique_atomic4663 =
           (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.gc");
    }
    pbVar1 = RunInParallel(v8::internal::ItemParallelJob::Task::Runner)::
             trace_event_unique_atomic4663;
    local_a0 = (byte **)0x0;
    if ((*RunInParallel(v8::internal::ItemParallelJob::Task::Runner)::trace_event_unique_atomic4663
        & 5) != 0) {
      uVar4 = GCTracer::Scope::Name(0x51);
      local_40 = (long *)0x0;
      local_38 = (long *)0x0;
      plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x58,pbVar1,uVar4,0,0,0,0,0,0,0,&local_40,0);
      plVar3 = local_38;
      local_38 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      plVar3 = local_40;
      local_40 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      local_90 = GCTracer::Scope::Name(0x51);
      local_a0 = &local_98;
      local_98 = pbVar1;
      local_88 = uVar4;
    }
    ProcessItems(this);
    if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
      plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar3 + 0x28))(plVar3,local_98,local_90,local_88);
    }
    GCTracer::Scope::~Scope((Scope *)aBStack_80);
  }
  else {
    pWVar2 = (WorkerThreadRuntimeCallStats *)
             GCTracer::worker_thread_runtime_call_stats
                       (*(GCTracer **)(*(long *)(*(long *)(this + 0x50) + 8) + 0x7f8));
    WorkerThreadRuntimeCallStatsScope::WorkerThreadRuntimeCallStatsScope
              ((WorkerThreadRuntimeCallStatsScope *)&local_18,pWVar2);
    GCTracer::BackgroundScope::BackgroundScope
              (aBStack_80,*(undefined8 *)(*(long *)(*(long *)(this + 0x50) + 8) + 0x7f8),9,local_18)
    ;
    if (RunInParallel(v8::internal::ItemParallelJob::Task::Runner)::trace_event_unique_atomic4668 ==
        (byte *)0x0) {
      plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
      RunInParallel(v8::internal::ItemParallelJob::Task::Runner)::trace_event_unique_atomic4668 =
           (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.gc");
    }
    pbVar1 = RunInParallel(v8::internal::ItemParallelJob::Task::Runner)::
             trace_event_unique_atomic4668;
    local_a0 = (byte **)0x0;
    if ((*RunInParallel(v8::internal::ItemParallelJob::Task::Runner)::trace_event_unique_atomic4668
        & 5) != 0) {
      uVar4 = GCTracer::BackgroundScope::Name(9);
      local_40 = (long *)0x0;
      local_38 = (long *)0x0;
      plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x58,pbVar1,uVar4,0,0,0,0,0,0,0,&local_40,0);
      plVar3 = local_38;
      local_38 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      plVar3 = local_40;
      local_40 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      local_90 = GCTracer::BackgroundScope::Name(9);
      local_a0 = &local_98;
      local_98 = pbVar1;
      local_88 = uVar4;
    }
    ProcessItems(this);
    if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
      plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar3 + 0x28))(plVar3,local_98,local_90,local_88);
    }
    GCTracer::BackgroundScope::~BackgroundScope(aBStack_80);
    WorkerThreadRuntimeCallStatsScope::~WorkerThreadRuntimeCallStatsScope
              ((WorkerThreadRuntimeCallStatsScope *)&local_18);
  }
  return;
}

