
/* v8::internal::PageEvacuationTask::RunInParallel(v8::internal::ItemParallelJob::Task::Runner) */

void __thiscall
v8::internal::PageEvacuationTask::RunInParallel(PageEvacuationTask *this,int param_2)

{
  char cVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  WorkerThreadRuntimeCallStats *pWVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 local_a8;
  byte **local_a0;
  byte *local_98;
  undefined8 local_90;
  undefined8 local_88;
  BackgroundScope aBStack_80 [64];
  long *local_40;
  long *local_38;
  
  if (param_2 == 0) {
    uVar4 = (**(code **)(**(long **)(this + 0x50) + 0x18))();
    GCTracer::Scope::Scope((Scope *)aBStack_80,*(undefined8 *)(this + 0x58),uVar4);
    if (RunInParallel(v8::internal::ItemParallelJob::Task::Runner)::trace_event_unique_atomic2991 ==
        (byte *)0x0) {
      plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
      RunInParallel(v8::internal::ItemParallelJob::Task::Runner)::trace_event_unique_atomic2991 =
           (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.gc");
    }
    pbVar3 = RunInParallel(v8::internal::ItemParallelJob::Task::Runner)::
             trace_event_unique_atomic2991;
    local_a0 = (byte **)0x0;
    if ((*RunInParallel(v8::internal::ItemParallelJob::Task::Runner)::trace_event_unique_atomic2991
        & 5) != 0) {
      uVar7 = GCTracer::Scope::Name(uVar4);
      local_40 = (long *)0x0;
      local_38 = (long *)0x0;
      plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,0x58,pbVar3,uVar7,0,0,0,0,0,0,0,&local_40,0);
      plVar6 = local_38;
      local_38 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = local_40;
      local_40 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      local_90 = GCTracer::Scope::Name(uVar4);
      local_a0 = &local_98;
      local_98 = pbVar3;
      local_88 = uVar7;
    }
LAB_00fe9f44:
    do {
      lVar8 = *(long *)(this + 0x38);
      plVar6 = *(long **)(this + 0x28);
      *(long *)(this + 0x38) = lVar8 + 1;
      lVar9 = plVar6[1] - *plVar6 >> 3;
      if (lVar8 == lVar9) {
LAB_00fe9fd8:
        if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
          plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
          (**(code **)(*plVar6 + 0x28))(plVar6,local_98,local_90,local_88);
        }
        GCTracer::Scope::~Scope((Scope *)aBStack_80);
        return;
      }
      lVar8 = *(long *)(this + 0x30);
      if (lVar8 == lVar9) {
        lVar8 = 0;
        *(undefined8 *)(this + 0x30) = 0;
      }
      *(long *)(this + 0x30) = lVar8 + 1;
      lVar8 = *(long *)(*plVar6 + lVar8 * 8);
      plVar6 = (long *)(lVar8 + 8);
      do {
        if (*plVar6 != 0) {
          ClearExclusiveLocal();
          goto LAB_00fe9f44;
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) goto LAB_00fe9fd8;
      Evacuator::EvacuatePage(*(Evacuator **)(this + 0x50),*(MemoryChunk **)(lVar8 + 0x10));
      do {
        lVar8 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = 2;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    } while (lVar8 == 1);
  }
  else {
    pWVar5 = (WorkerThreadRuntimeCallStats *)
             GCTracer::worker_thread_runtime_call_stats(*(GCTracer **)(this + 0x58));
    WorkerThreadRuntimeCallStatsScope::WorkerThreadRuntimeCallStatsScope
              ((WorkerThreadRuntimeCallStatsScope *)&local_a8,pWVar5);
    uVar7 = *(undefined8 *)(this + 0x58);
    uVar4 = (**(code **)(**(long **)(this + 0x50) + 0x10))();
    GCTracer::BackgroundScope::BackgroundScope(aBStack_80,uVar7,uVar4,local_a8);
    if (RunInParallel(v8::internal::ItemParallelJob::Task::Runner)::trace_event_unique_atomic2994 ==
        (byte *)0x0) {
      plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
      RunInParallel(v8::internal::ItemParallelJob::Task::Runner)::trace_event_unique_atomic2994 =
           (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.gc");
    }
    pbVar3 = RunInParallel(v8::internal::ItemParallelJob::Task::Runner)::
             trace_event_unique_atomic2994;
    local_a0 = (byte **)0x0;
    if ((*RunInParallel(v8::internal::ItemParallelJob::Task::Runner)::trace_event_unique_atomic2994
        & 5) != 0) {
      (**(code **)(**(long **)(this + 0x50) + 0x10))();
      uVar7 = GCTracer::BackgroundScope::Name();
      local_40 = (long *)0x0;
      local_38 = (long *)0x0;
      plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,0x58,pbVar3,uVar7,0,0,0,0,0,0,0,&local_40,0);
      plVar6 = local_38;
      local_38 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = local_40;
      local_40 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      (**(code **)(**(long **)(this + 0x50) + 0x10))();
      local_90 = GCTracer::BackgroundScope::Name();
      local_a0 = &local_98;
      local_98 = pbVar3;
      local_88 = uVar7;
    }
LAB_00fe9d6c:
    do {
      lVar8 = *(long *)(this + 0x38);
      plVar6 = *(long **)(this + 0x28);
      *(long *)(this + 0x38) = lVar8 + 1;
      lVar9 = plVar6[1] - *plVar6 >> 3;
      if (lVar8 == lVar9) {
LAB_00fe9df0:
        if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
          plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
          (**(code **)(*plVar6 + 0x28))(plVar6,local_98,local_90,local_88);
        }
        GCTracer::BackgroundScope::~BackgroundScope(aBStack_80);
        WorkerThreadRuntimeCallStatsScope::~WorkerThreadRuntimeCallStatsScope
                  ((WorkerThreadRuntimeCallStatsScope *)&local_a8);
        return;
      }
      lVar8 = *(long *)(this + 0x30);
      if (lVar8 == lVar9) {
        lVar8 = 0;
        *(undefined8 *)(this + 0x30) = 0;
      }
      *(long *)(this + 0x30) = lVar8 + 1;
      lVar8 = *(long *)(*plVar6 + lVar8 * 8);
      plVar6 = (long *)(lVar8 + 8);
      do {
        if (*plVar6 != 0) {
          ClearExclusiveLocal();
          goto LAB_00fe9d6c;
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) goto LAB_00fe9df0;
      Evacuator::EvacuatePage(*(Evacuator **)(this + 0x50),*(MemoryChunk **)(lVar8 + 0x10));
      do {
        lVar8 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = 2;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    } while (lVar8 == 1);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kProcessing == state_.exchange(kFinished)");
}

