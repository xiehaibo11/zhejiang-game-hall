
/* v8::internal::IncrementalMarking::V8Step(double,
   v8::internal::IncrementalMarking::CompletionAction, v8::internal::StepOrigin) */

undefined1 __thiscall
v8::internal::IncrementalMarking::V8Step
          (double param_1,IncrementalMarking *this,int param_3,int param_4)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  byte *pbVar4;
  undefined1 uVar5;
  long *plVar6;
  undefined8 uVar7;
  MarkCompactCollector *this_00;
  ulong uVar8;
  ulong uVar9;
  Worklist<v8::internal::HeapObject,64> *this_01;
  ulong uVar10;
  int iVar11;
  Mutex *this_02;
  long lVar12;
  LocalEmbedderHeapTracer *this_03;
  double dVar13;
  double dVar14;
  byte **local_e0;
  byte *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  Scope aSStack_c0 [64];
  long *local_80;
  long *local_78;
  
  dVar13 = (double)Heap::MonotonicallyIncreasingTimeInMs();
  iVar11 = *(int *)(this + 0x58);
  if (iVar11 != 1) goto LAB_00fa8c28;
  GCTracer::Scope::Scope(aSStack_c0,*(undefined8 *)(*(long *)this + 0x7f8),9);
  if (DAT_01d3f160 == (byte *)0x0) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f160 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.gc");
  }
  pbVar4 = DAT_01d3f160;
  local_e0 = (byte **)0x0;
  if ((*DAT_01d3f160 & 5) != 0) {
    uVar7 = GCTracer::Scope::Name(9);
    local_80 = (long *)0x0;
    local_78 = (long *)0x0;
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,0x58,pbVar4,uVar7,0,0,0,0,0,0,0,&local_80,0);
    plVar6 = local_78;
    local_78 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_80;
    local_80 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    local_d0 = GCTracer::Scope::Name(9);
    local_e0 = &local_d8;
    local_d8 = pbVar4;
    local_c8 = uVar7;
  }
  this_00 = *(MarkCompactCollector **)(this + 8);
  if ((*(Sweeper **)(this_00 + 0x26f8))[0xf9] != (Sweeper)0x0) {
    if (FLAG_concurrent_sweeping != '\0') {
      uVar8 = Sweeper::AreSweeperTasksRunning(*(Sweeper **)(this_00 + 0x26f8));
      if ((uVar8 & 1) != 0) goto LAB_00fa8bd4;
      this_00 = *(MarkCompactCollector **)(this + 8);
    }
    MarkCompactCollector::EnsureSweepingCompleted(this_00);
  }
LAB_00fa8bd4:
  if (*(char *)(*(long *)(*(long *)(this + 8) + 0x26f8) + 0xf9) == '\0') {
    StartMarking(this);
  }
  if ((local_e0 != (byte **)0x0) && (*local_d8 != 0)) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_d8,local_d0,local_c8);
  }
  GCTracer::Scope::~Scope(aSStack_c0);
  iVar11 = *(int *)(this + 0x58);
LAB_00fa8c28:
  if (iVar11 == 2) {
    if (FLAG_concurrent_marking != '\0') {
      *(undefined8 *)(*(long *)(*(long *)this + 0xe8) + 0xc0) =
           *(undefined8 *)(*(long *)(*(long *)this + 0xe8) + 0x68);
      *(undefined8 *)(*(long *)(*(long *)this + 0x118) + 0x80) = 0;
      lVar12 = *(long *)(this + 0x10);
      this_02 = (Mutex *)(lVar12 + 0x538);
      base::Mutex::Lock(this_02);
      plVar6 = *(long **)(lVar12 + 0x560);
      if (plVar6 != (long *)0x0) {
        *(undefined8 *)(lVar12 + 0x560) = 0;
        base::Mutex::Unlock(this_02);
        plVar2 = plVar6;
        for (plVar3 = (long *)*plVar6; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
          plVar2 = plVar3;
        }
        this_02 = (Mutex *)(lVar12 + 0x280);
        base::Mutex::Lock(this_02);
        *plVar2 = *(long *)(lVar12 + 0x2a8);
        *(long **)(lVar12 + 0x2a8) = plVar6;
      }
      base::Mutex::Unlock(this_02);
    }
    if (FLAG_trace_incremental_marking != '\0') {
      lVar12 = *(long *)this;
      GCTracer::IncrementalMarkingSpeedInBytesPerMillisecond(*(GCTracer **)(lVar12 + 0x7f8));
      Isolate::PrintWithTimestamp
                ((char *)(lVar12 + -0x8850),"[IncrementalMarking] Marking speed %.fKB/ms\n");
    }
    dVar14 = (double)GCTracer::IncrementalMarkingSpeedInBytesPerMillisecond
                               (*(GCTracer **)(*(long *)this + 0x7f8));
    uVar9 = GCIdleTimeHandler::EstimateMarkingStepSize(param_1,dVar14);
    uVar8 = ComputeStepSizeInBytes(this,param_4);
    if (uVar9 <= uVar8) {
      uVar8 = uVar9;
    }
    uVar5 = uVar8 != 0;
    uVar9 = uVar8;
    if (uVar8 < 0x10001) {
      uVar9 = 0x10000;
    }
    uVar9 = MarkCompactCollector::
            ProcessMarkingWorklist<(v8::internal::MarkCompactCollector::MarkingWorklistProcessingMode)0>
                      (*(MarkCompactCollector **)(this + 8),uVar9);
    plVar6 = *(long **)(this + 0x10);
    *(ulong *)(this + 0x38) = *(long *)(this + 0x38) + uVar9;
    if ((((*(long *)(plVar6[1] + 8) == 0) && (*(long *)(*plVar6 + 8) == 0)) &&
        (*(long *)(plVar6[0x58] + 8) == 0)) &&
       (((*(long *)(plVar6[0x57] + 8) == 0 && (plVar6[0x55] == 0)) && (plVar6[0xac] == 0)))) {
      if (((FLAG_incremental_marking_wrappers == '\0') ||
          (this_03 = *(LocalEmbedderHeapTracer **)(*(long *)this + 0x870),
          *(long *)(this_03 + 8) == 0)) ||
         (((uVar10 = LocalEmbedderHeapTracer::IsRemoteTracingDone(this_03), (uVar10 & 1) != 0 &&
           (this_03[0x1c] != (LocalEmbedderHeapTracer)0x0)) || (3 < *(ulong *)(this_03 + 0x10))))) {
        if (this[0x60] == (IncrementalMarking)0x0) {
          if (FLAG_trace_incremental_marking != '\0') {
            Isolate::PrintWithTimestamp
                      ((char *)(*(long *)this + -0x8850),
                       "[IncrementalMarking] requesting finalization of incremental marking.\n");
          }
          *(undefined4 *)(this + 100) = 2;
          if (param_3 == 0) {
            StackGuard::RequestInterrupt((StackGuard *)(*(long *)this + -0x8808),2);
          }
          if ((*(ulong *)(this + 0x40) < *(ulong *)(this + 0x38)) &&
             (*(ulong *)(this + 0x40) = *(ulong *)(this + 0x38),
             FLAG_trace_incremental_marking != '\0')) {
            Isolate::PrintWithTimestamp
                      ((char *)(*(long *)this + -0x8850),
                       "[IncrementalMarking] Fast-forwarded schedule\n");
          }
          IncrementalMarkingJob::Start((IncrementalMarkingJob *)(this + 0x61),*(Heap **)this);
          uVar5 = 2;
        }
        else {
          *(undefined4 *)(this + 0x58) = 3;
          *(undefined1 *)(*(long *)this + 0xac0) = 1;
          this[0x5d] = (IncrementalMarking)0x1;
          if (FLAG_trace_incremental_marking != '\0') {
            Isolate::PrintWithTimestamp
                      ((char *)(*(long *)this + -0x8850),"[IncrementalMarking] Complete (normal).\n"
                      );
          }
          *(undefined4 *)(this + 100) = 1;
          if (param_3 == 0) {
            uVar5 = 2;
            StackGuard::RequestInterrupt((StackGuard *)(*(long *)this + -0x8808),2);
          }
          else {
            uVar5 = 2;
          }
        }
      }
      else {
        uVar5 = 0;
        *(long *)(*(long *)(*(long *)this + 0x870) + 0x10) =
             *(long *)(*(long *)(*(long *)this + 0x870) + 0x10) + 1;
      }
    }
    uVar8 = uVar8 >> 10;
  }
  else {
    uVar8 = 0;
    uVar9 = 0;
    uVar5 = 1;
  }
  if (FLAG_concurrent_marking != '\0') {
    this_01 = *(Worklist<v8::internal::HeapObject,64> **)(this + 0x10);
    if (((*(long *)(*(long *)(this_01 + 8) + 8) != 0) || (*(long *)(*(long *)this_01 + 8) != 0)) &&
       (*(long *)(this_01 + 0x2a8) == 0)) {
      Worklist<v8::internal::HeapObject,64>::FlushToGlobal(this_01,0);
    }
    ConcurrentMarking::RescheduleTasksIfNeeded(*(ConcurrentMarking **)(*(long *)this + 0x830));
  }
  dVar14 = (double)Heap::MonotonicallyIncreasingTimeInMs();
  GCTracer::AddIncrementalMarkingStep(*(GCTracer **)(*(long *)this + 0x7f8),dVar14 - dVar13,uVar9);
  if (FLAG_trace_incremental_marking != '\0') {
    pcVar1 = "in v8";
    if (param_4 != 0) {
      pcVar1 = "in task";
    }
    Isolate::PrintWithTimestamp
              ((char *)(*(long *)this + -0x8850),dVar14 - dVar13,
               "[IncrementalMarking] Step %s %zuKB (%zuKB) in %.1f\n",pcVar1,uVar9 >> 10,uVar8);
  }
  return uVar5;
}

