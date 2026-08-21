
/* v8::internal::LocalEmbedderHeapTracer::StartIncrementalMarkingIfNeeded() */

void __thiscall
v8::internal::LocalEmbedderHeapTracer::StartIncrementalMarkingIfNeeded
          (LocalEmbedderHeapTracer *this)

{
  Heap *this_00;
  uint uVar1;
  ulong uVar2;
  
  if (FLAG_global_gc_scheduling != '\0') {
    this_00 = (Heap *)(*(long *)this + 0x8850);
    uVar1 = Heap::ShouldOptimizeForMemoryUsage(this_00);
    Heap::StartIncrementalMarkingIfAllocationLimitIsReached(this_00,uVar1 & 1,0x40);
    uVar2 = Heap::AllocationLimitOvershotByLargeMargin(this_00);
    if ((uVar2 & 1) != 0) {
      Heap::FinalizeIncrementalMarkingAtomically(this_00,0x16);
      return;
    }
  }
  return;
}

