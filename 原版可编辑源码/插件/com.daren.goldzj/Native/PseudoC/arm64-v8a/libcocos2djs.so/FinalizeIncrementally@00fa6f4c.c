
/* v8::internal::IncrementalMarking::FinalizeIncrementally() */

void __thiscall v8::internal::IncrementalMarking::FinalizeIncrementally(IncrementalMarking *this)

{
  byte *pbVar1;
  undefined **ppuVar2;
  Heap *pHVar3;
  long *plVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  byte **local_a0;
  byte *local_98;
  undefined8 local_90;
  undefined8 local_88;
  Scope aSStack_80 [64];
  undefined **local_40;
  Heap *local_38;
  
  GCTracer::Scope::Scope(aSStack_80,*(undefined8 *)(*(long *)this + 0x7f8),6);
  if (DAT_01d3f130 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f130 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f130;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d3f130 & 5) != 0) {
    uVar5 = GCTracer::Scope::Name(6);
    local_40 = (undefined **)0x0;
    local_38 = (Heap *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x58,pbVar1,uVar5,0,0,0,0,0,0,0,&local_40,0);
    pHVar3 = local_38;
    local_38 = (Heap *)0x0;
    if (pHVar3 != (Heap *)0x0) {
      (**(code **)(*(long *)pHVar3 + 8))();
    }
    ppuVar2 = local_40;
    local_40 = (undefined **)0x0;
    if (ppuVar2 != (undefined **)0x0) {
      (**(code **)(*ppuVar2 + 8))();
    }
    local_90 = GCTracer::Scope::Name(6);
    local_a0 = &local_98;
    local_98 = pbVar1;
    local_88 = uVar5;
  }
  dVar6 = (double)Heap::MonotonicallyIncreasingTimeInMs();
  local_38 = *(Heap **)this;
  local_40 = &PTR__RootVisitor_01ca8030;
  Heap::IterateStrongRoots(local_38,&local_40,5);
  RetainMaps(this);
  this[0x60] = (IncrementalMarking)0x1;
  if (FLAG_trace_incremental_marking != '\0') {
    dVar7 = (double)Heap::MonotonicallyIncreasingTimeInMs();
    Isolate::PrintWithTimestamp
              ((char *)(*(long *)this + -0x8850),dVar7 - dVar6,
               "[IncrementalMarking] Finalize incrementally spent %.1f ms.\n");
  }
  if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_98,local_90,local_88);
  }
  GCTracer::Scope::~Scope(aSStack_80);
  return;
}

