
/* v8::internal::IncrementalMarking::StartMarking() */

void __thiscall v8::internal::IncrementalMarking::StartMarking(IncrementalMarking *this)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  long *plVar4;
  undefined8 uVar5;
  IncrementalMarking IVar6;
  undefined8 uVar7;
  byte **local_b0;
  byte *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  Scope aSStack_90 [64];
  undefined **local_50;
  Heap *pHStack_48;
  long *local_40;
  long *local_38;
  
  pcVar1 = (char *)(*(long *)this + -0x8850);
  if (*(char *)(*(long *)this + 0x2e68) == '\0') {
    if (FLAG_trace_incremental_marking != '\0') {
      Isolate::PrintWithTimestamp(pcVar1,"[IncrementalMarking] Start marking\n");
    }
    if (FLAG_never_compact == '\0') {
      bVar3 = MarkCompactCollector::StartCompaction(*(MarkCompactCollector **)(this + 8));
      IVar6 = (IncrementalMarking)(bVar3 & 1);
    }
    else {
      IVar6 = (IncrementalMarking)0x0;
    }
    this[0x5c] = IVar6;
    MarkCompactCollector::StartMarking(*(MarkCompactCollector **)(this + 8));
    *(undefined4 *)(this + 0x58) = 2;
    *(undefined1 *)(*(long *)this + 0xac0) = 1;
    ActivateIncrementalWriteBarrier(this);
    CompilationCache::MarkCompactPrologue(*(CompilationCache **)(*(long *)this + 0xcc8));
    this[0x5f] = (IncrementalMarking)0x1;
    PagedSpace::MarkLinearAllocationAreaBlack(*(PagedSpace **)(*(long *)this + 0xf0));
    PagedSpace::MarkLinearAllocationAreaBlack(*(PagedSpace **)(*(long *)this + 0x100));
    PagedSpace::MarkLinearAllocationAreaBlack(*(PagedSpace **)(*(long *)this + 0xf8));
    if (FLAG_trace_incremental_marking != '\0') {
      Isolate::PrintWithTimestamp
                ((char *)(*(long *)this + -0x8850),"[IncrementalMarking] Black allocation started\n"
                );
    }
    pHStack_48 = *(Heap **)this;
    local_50 = &PTR__RootVisitor_01ca8030;
    Heap::IterateStrongRoots(pHStack_48,&local_50,5);
    if ((FLAG_concurrent_marking != '\0') && (*(int *)(*(long *)this + 0x178) != 4)) {
      ConcurrentMarking::ScheduleTasks(*(ConcurrentMarking **)(*(long *)this + 0x830));
    }
    if (FLAG_trace_incremental_marking != '\0') {
      Isolate::PrintWithTimestamp
                ((char *)(*(long *)this + -0x8850),"[IncrementalMarking] Running\n");
    }
    GCTracer::Scope::Scope(aSStack_90,*(undefined8 *)(*(long *)this + 0x7f8),1);
    if (DAT_01d3f128 == (byte *)0x0) {
      plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d3f128 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
    }
    pbVar2 = DAT_01d3f128;
    local_b0 = (byte **)0x0;
    if ((*DAT_01d3f128 & 5) != 0) {
      uVar5 = GCTracer::Scope::Name(1);
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
      local_a0 = GCTracer::Scope::Name(1);
      local_b0 = &local_a8;
      local_a8 = pbVar2;
      local_98 = uVar5;
    }
    uVar7 = *(undefined8 *)(*(Heap **)this + 0x870);
    uVar5 = Heap::flags_for_embedder_tracer(*(Heap **)this);
    LocalEmbedderHeapTracer::TracePrologue(uVar7,uVar5);
    if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
      plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar4 + 0x28))(plVar4,local_a8,local_a0,local_98);
    }
    GCTracer::Scope::~Scope(aSStack_90);
  }
  else if (FLAG_trace_incremental_marking != '\0') {
    Isolate::PrintWithTimestamp(pcVar1,"[IncrementalMarking] Start delayed - serializer\n");
    return;
  }
  return;
}

