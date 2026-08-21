
/* v8::internal::PointersUpdatingTask::RunInParallel(v8::internal::ItemParallelJob::Task::Runner) */

void __thiscall
v8::internal::PointersUpdatingTask::RunInParallel(PointersUpdatingTask *this,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  WorkerThreadRuntimeCallStats *pWVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 local_a8;
  byte **local_a0;
  byte *local_98;
  undefined8 local_90;
  undefined8 local_88;
  BackgroundScope aBStack_80 [64];
  long *local_40;
  long *local_38;
  
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(this + 0x58);
    GCTracer::Scope::Scope((Scope *)aBStack_80,*(undefined8 *)(this + 0x50),uVar1);
    if (RunInParallel(v8::internal::ItemParallelJob::Task::Runner)::trace_event_unique_atomic3325 ==
        (byte *)0x0) {
      plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
      RunInParallel(v8::internal::ItemParallelJob::Task::Runner)::trace_event_unique_atomic3325 =
           (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.gc");
    }
    pbVar4 = RunInParallel(v8::internal::ItemParallelJob::Task::Runner)::
             trace_event_unique_atomic3325;
    local_a0 = (byte **)0x0;
    if ((*RunInParallel(v8::internal::ItemParallelJob::Task::Runner)::trace_event_unique_atomic3325
        & 5) != 0) {
      uVar7 = GCTracer::Scope::Name(uVar1);
      local_40 = (long *)0x0;
      local_38 = (long *)0x0;
      plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,0x58,pbVar4,uVar7,0,0,0,0,0,0,0,&local_40,0);
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
      local_90 = GCTracer::Scope::Name(uVar1);
      local_a0 = &local_98;
      local_98 = pbVar4;
      local_88 = uVar7;
    }
LAB_00fdeb28:
    do {
      lVar9 = *(long *)(this + 0x38);
      plVar6 = *(long **)(this + 0x28);
      *(long *)(this + 0x38) = lVar9 + 1;
      lVar10 = plVar6[1] - *plVar6 >> 3;
      if (lVar9 == lVar10) {
LAB_00fdebbc:
        if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
          plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
          (**(code **)(*plVar6 + 0x28))(plVar6,local_98,local_90,local_88);
        }
        GCTracer::Scope::~Scope((Scope *)aBStack_80);
        return;
      }
      lVar9 = *(long *)(this + 0x30);
      if (lVar9 == lVar10) {
        lVar9 = 0;
        *(undefined8 *)(this + 0x30) = 0;
      }
      *(long *)(this + 0x30) = lVar9 + 1;
      plVar8 = *(long **)(*plVar6 + lVar9 * 8);
      plVar6 = plVar8 + 1;
      do {
        if (*plVar6 != 0) {
          ClearExclusiveLocal();
          goto LAB_00fdeb28;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (plVar8 == (long *)0x0) goto LAB_00fdebbc;
      (**(code **)(*plVar8 + 0x10))();
      do {
        lVar9 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    } while (lVar9 == 1);
  }
  else {
    pWVar5 = (WorkerThreadRuntimeCallStats *)
             GCTracer::worker_thread_runtime_call_stats(*(GCTracer **)(this + 0x50));
    WorkerThreadRuntimeCallStatsScope::WorkerThreadRuntimeCallStatsScope
              ((WorkerThreadRuntimeCallStatsScope *)&local_a8,pWVar5);
    GCTracer::BackgroundScope::BackgroundScope
              (aBStack_80,*(undefined8 *)(this + 0x50),*(undefined4 *)(this + 0x5c),local_a8);
    if (RunInParallel(v8::internal::ItemParallelJob::Task::Runner)::trace_event_unique_atomic3328 ==
        (byte *)0x0) {
      plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
      RunInParallel(v8::internal::ItemParallelJob::Task::Runner)::trace_event_unique_atomic3328 =
           (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.gc");
    }
    pbVar4 = RunInParallel(v8::internal::ItemParallelJob::Task::Runner)::
             trace_event_unique_atomic3328;
    local_a0 = (byte **)0x0;
    if ((*RunInParallel(v8::internal::ItemParallelJob::Task::Runner)::trace_event_unique_atomic3328
        & 5) != 0) {
      uVar7 = GCTracer::BackgroundScope::Name(*(undefined4 *)(this + 0x5c));
      local_40 = (long *)0x0;
      local_38 = (long *)0x0;
      plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,0x58,pbVar4,uVar7,0,0,0,0,0,0,0,&local_40,0);
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
      local_90 = GCTracer::BackgroundScope::Name(*(undefined4 *)(this + 0x5c));
      local_a0 = &local_98;
      local_98 = pbVar4;
      local_88 = uVar7;
    }
LAB_00fde960:
    do {
      lVar9 = *(long *)(this + 0x38);
      plVar6 = *(long **)(this + 0x28);
      *(long *)(this + 0x38) = lVar9 + 1;
      lVar10 = plVar6[1] - *plVar6 >> 3;
      if (lVar9 == lVar10) {
LAB_00fde9e4:
        if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
          plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
          (**(code **)(*plVar6 + 0x28))(plVar6,local_98,local_90,local_88);
        }
        GCTracer::BackgroundScope::~BackgroundScope(aBStack_80);
        WorkerThreadRuntimeCallStatsScope::~WorkerThreadRuntimeCallStatsScope
                  ((WorkerThreadRuntimeCallStatsScope *)&local_a8);
        return;
      }
      lVar9 = *(long *)(this + 0x30);
      if (lVar9 == lVar10) {
        lVar9 = 0;
        *(undefined8 *)(this + 0x30) = 0;
      }
      *(long *)(this + 0x30) = lVar9 + 1;
      plVar8 = *(long **)(*plVar6 + lVar9 * 8);
      plVar6 = plVar8 + 1;
      do {
        if (*plVar6 != 0) {
          ClearExclusiveLocal();
          goto LAB_00fde960;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (plVar8 == (long *)0x0) goto LAB_00fde9e4;
      (**(code **)(*plVar8 + 0x10))();
      do {
        lVar9 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    } while (lVar9 == 1);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kProcessing == state_.exchange(kFinished)");
}

