
/* v8::internal::MemoryReducer::TimerTask::RunInternal() */

void __thiscall v8::internal::MemoryReducer::TimerTask::RunInternal(TimerTask *this)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  Heap *this_00;
  GCTracer *this_01;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  double dVar12;
  
  this_00 = (Heap *)**(undefined8 **)(this + 0x28);
  dVar12 = (double)Heap::MonotonicallyIncreasingTimeInMs();
  lVar9 = *(long *)(this_00 + 0xe8);
  this_01 = *(GCTracer **)(this_00 + 0x7f8);
  lVar6 = *(long *)(this_00 + 0x880);
  lVar4 = *(long *)(lVar9 + 0x150);
  lVar3 = *(long *)(lVar9 + 0x68);
  uVar5 = lVar4 - 4U & 0xfffffffffffc0000;
  uVar7 = lVar3 - 4U & 0xfffffffffffc0000;
  if (uVar5 != uVar7) {
    uVar11 = *(ulong *)(uVar5 + 0xe0);
    lVar10 = *(long *)(uVar5 + 0x28) - lVar4;
    if (uVar11 != uVar7) {
      do {
        lVar3 = MemoryChunkLayout::AllocatableMemoryInDataPage();
        uVar11 = *(ulong *)(uVar11 + 0xe0);
        lVar10 = lVar3 + lVar10;
      } while (uVar11 != uVar7);
      lVar3 = *(long *)(lVar9 + 0x68);
    }
    lVar4 = *(long *)(uVar7 + 0x20);
    lVar3 = lVar10 + lVar3;
  }
  lVar8 = *(long *)(this_00 + 0x888);
  lVar9 = Heap::OldGenerationSizeOfObjects(this_00);
  lVar10 = *(long *)(this_00 + 0x890);
  uVar5 = Heap::EmbedderAllocationCounter(this_00);
  GCTracer::SampleAllocation(this_01,dVar12,(lVar3 - lVar4) + lVar6,(lVar9 + lVar8) - lVar10,uVar5);
  uVar5 = Heap::HasLowAllocationRate(this_00);
  uVar7 = Heap::ShouldOptimizeForMemoryUsage(this_00);
  if (FLAG_trace_gc_verbose != '\0') {
    pcVar1 = "low alloc";
    if ((uVar5 & 1) == 0) {
      pcVar1 = "high alloc";
    }
    pcVar2 = "background";
    if ((uVar7 & 1) == 0) {
      pcVar2 = "foreground";
    }
    Isolate::PrintWithTimestamp
              ((char *)(this_00 + -0x8850),"Memory reducer: %s, %s\n",pcVar1,pcVar2);
  }
  if (*(int *)(*(IncrementalMarking **)(this_00 + 0x828) + 0x58) == 0) {
    IncrementalMarking::CanBeActivated(*(IncrementalMarking **)(this_00 + 0x828));
  }
  Heap::CommittedOldGenerationMemory(this_00);
  NotifyTimer(*(Event **)(this + 0x28));
  return;
}

