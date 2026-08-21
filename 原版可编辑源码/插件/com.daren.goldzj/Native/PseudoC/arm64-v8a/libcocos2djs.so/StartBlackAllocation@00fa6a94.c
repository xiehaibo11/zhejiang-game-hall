
/* v8::internal::IncrementalMarking::StartBlackAllocation() */

void __thiscall v8::internal::IncrementalMarking::StartBlackAllocation(IncrementalMarking *this)

{
  this[0x5f] = (IncrementalMarking)0x1;
  PagedSpace::MarkLinearAllocationAreaBlack(*(PagedSpace **)(*(long *)this + 0xf0));
  PagedSpace::MarkLinearAllocationAreaBlack(*(PagedSpace **)(*(long *)this + 0x100));
  PagedSpace::MarkLinearAllocationAreaBlack(*(PagedSpace **)(*(long *)this + 0xf8));
  if (FLAG_trace_incremental_marking != '\0') {
    Isolate::PrintWithTimestamp
              ((char *)(*(long *)this + -0x8850),"[IncrementalMarking] Black allocation started\n");
    return;
  }
  return;
}

