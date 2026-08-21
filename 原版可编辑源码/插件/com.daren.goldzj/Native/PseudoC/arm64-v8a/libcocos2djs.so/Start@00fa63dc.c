
/* v8::internal::IncrementalMarking::Start(v8::internal::GarbageCollectionReason) */

void __thiscall v8::internal::IncrementalMarking::Start(IncrementalMarking *this,undefined4 param_2)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  Heap *this_00;
  long lVar9;
  ulong uVar10;
  long lVar11;
  byte **local_f0;
  byte *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  Scope aSStack_d0 [64];
  byte **local_90;
  byte *local_88;
  char *local_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  
  if (FLAG_trace_incremental_marking != '\0') {
    uVar2 = Heap::OldGenerationSizeOfObjects(*(Heap **)this);
    uVar2 = uVar2 >> 0x14;
    uVar8 = *(ulong *)(*(Heap **)this + 0x5d0) >> 0x14;
    uVar3 = Heap::GlobalSizeOfObjects(*(Heap **)this);
    lVar6 = *(long *)this;
    uVar3 = uVar3 >> 0x14;
    uVar10 = *(ulong *)(lVar6 + 0x5d8) >> 0x14;
    uVar4 = Heap::GarbageCollectionReasonToString(param_2);
    lVar11 = 0;
    if (uVar2 <= uVar8) {
      lVar11 = uVar8 - uVar2;
    }
    lVar7 = 0;
    if (uVar3 <= uVar10) {
      lVar7 = uVar10 - uVar3;
    }
    Isolate::PrintWithTimestamp
              ((char *)(lVar6 + -0x8850),
               "[IncrementalMarking] Start (%s): (size/limit/slack) v8: %zuMB / %zuMB / %zuMB global: %zuMB / %zuMB / %zuMB\n"
               ,uVar4,uVar2,uVar8,lVar11,uVar3,uVar10,lVar7);
  }
  lVar11 = *(long *)(*(long *)this + 0xcd0);
  Histogram::AddSample((int)lVar11 + 0x120);
  TimedHistogram::Start
            ((TimedHistogram *)(lVar11 + 0x970),(ElapsedTimer *)(lVar11 + 0x9a0),
             *(Isolate **)(*(long *)(lVar11 + 0x990) + 0x10));
  if (DAT_01d3f118 == (byte *)0x0) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f118 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,&DAT_019c38f7);
  }
  pbVar1 = DAT_01d3f118;
  local_90 = (byte **)0x0;
  if ((*DAT_01d3f118 & 5) != 0) {
    local_70 = (long *)0x0;
    local_68 = (long *)0x0;
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar1,"V8.GCIncrementalMarkingStart",0,0,0,0,0,0,0,&local_70,0);
    plVar5 = local_68;
    local_68 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_70;
    local_70 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_90 = &local_88;
    local_80 = "V8.GCIncrementalMarkingStart";
    local_88 = pbVar1;
    local_78 = uVar4;
  }
  GCTracer::Scope::Scope(aSStack_d0,*(undefined8 *)(*(long *)this + 0x7f8),8);
  if (DAT_01d3f120 == (byte *)0x0) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f120 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f120;
  local_f0 = (byte **)0x0;
  if ((*DAT_01d3f120 & 5) != 0) {
    uVar4 = GCTracer::Scope::Name(8);
    local_70 = (long *)0x0;
    local_68 = (long *)0x0;
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,0x58,pbVar1,uVar4,0,0,0,0,0,0,0,&local_70,0);
    plVar5 = local_68;
    local_68 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_70;
    local_70 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_e0 = GCTracer::Scope::Name(8);
    local_f0 = &local_e8;
    local_e8 = pbVar1;
    local_d8 = uVar4;
  }
  GCTracer::NotifyIncrementalMarkingStart(*(GCTracer **)(*(long *)this + 0x7f8));
  uVar4 = Heap::MonotonicallyIncreasingTimeInMs();
  *(undefined8 *)(this + 0x20) = uVar4;
  uVar4 = Heap::OldGenerationSizeOfObjects(*(Heap **)this);
  this_00 = *(Heap **)this;
  *(undefined8 *)(this + 0x28) = uVar4;
  lVar9 = *(long *)(this_00 + 0x888);
  lVar6 = Heap::OldGenerationSizeOfObjects(this_00);
  lVar7 = *(long *)(this_00 + 0x890);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 0x20);
  *(undefined8 *)(this + 0x50) = 0;
  *(long *)(this + 0x30) = (lVar6 + lVar9) - lVar7;
  *(undefined2 *)(this + 0x5d) = 0x100;
  if (*(char *)(*(long *)(*(long *)(this + 8) + 0x26f8) + 0xf9) == '\0') {
    StartMarking(this);
  }
  else {
    if (FLAG_trace_incremental_marking != '\0') {
      Isolate::PrintWithTimestamp
                ((char *)(*(long *)this + -0x8850),"[IncrementalMarking] Start sweeping.\n");
    }
    *(undefined4 *)(this + 0x58) = 1;
    *(undefined1 *)(*(long *)this + 0xac0) = 0;
  }
  Heap::AddAllocationObserversToAllSpaces
            (*(Heap **)this,(AllocationObserver *)(this + 0x88),(AllocationObserver *)(this + 0x68))
  ;
  IncrementalMarkingJob::Start((IncrementalMarkingJob *)(this + 0x61),*(Heap **)this);
  if ((local_f0 != (byte **)0x0) && (*local_e8 != 0)) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_e8,local_e0,local_d8);
  }
  GCTracer::Scope::~Scope(aSStack_d0);
  if ((local_90 != (byte **)0x0) && (*local_88 != 0)) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_88,local_80,local_78);
  }
  TimedHistogram::Stop
            ((TimedHistogram *)(lVar11 + 0x970),(ElapsedTimer *)(lVar11 + 0x9a0),
             *(Isolate **)(*(long *)(lVar11 + 0x990) + 0x10));
  return;
}

