
/* v8::internal::IncrementalMarking::PauseBlackAllocation() */

void __thiscall v8::internal::IncrementalMarking::PauseBlackAllocation(IncrementalMarking *this)

{
  PagedSpace::UnmarkLinearAllocationArea(*(PagedSpace **)(*(long *)this + 0xf0));
  PagedSpace::UnmarkLinearAllocationArea(*(PagedSpace **)(*(long *)this + 0x100));
  PagedSpace::UnmarkLinearAllocationArea(*(PagedSpace **)(*(long *)this + 0xf8));
  if (FLAG_trace_incremental_marking != '\0') {
    Isolate::PrintWithTimestamp
              ((char *)(*(long *)this + -0x8850),"[IncrementalMarking] Black allocation paused\n");
  }
  this[0x5f] = (IncrementalMarking)0x0;
  return;
}

