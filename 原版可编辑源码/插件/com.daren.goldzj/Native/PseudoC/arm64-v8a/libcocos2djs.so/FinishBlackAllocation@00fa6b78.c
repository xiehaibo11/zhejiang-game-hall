
/* v8::internal::IncrementalMarking::FinishBlackAllocation() */

void __thiscall v8::internal::IncrementalMarking::FinishBlackAllocation(IncrementalMarking *this)

{
  if ((this[0x5f] != (IncrementalMarking)0x0) &&
     (this[0x5f] = (IncrementalMarking)0x0, FLAG_trace_incremental_marking != '\0')) {
    Isolate::PrintWithTimestamp
              ((char *)(*(long *)this + -0x8850),"[IncrementalMarking] Black allocation finished\n")
    ;
    return;
  }
  return;
}

