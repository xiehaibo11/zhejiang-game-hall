
/* v8::internal::IncrementalMarking::FastForwardSchedule() */

void __thiscall v8::internal::IncrementalMarking::FastForwardSchedule(IncrementalMarking *this)

{
  if ((*(ulong *)(this + 0x40) < *(ulong *)(this + 0x38)) &&
     (*(ulong *)(this + 0x40) = *(ulong *)(this + 0x38), FLAG_trace_incremental_marking != '\0')) {
    Isolate::PrintWithTimestamp
              ((char *)(*(long *)this + -0x8850),"[IncrementalMarking] Fast-forwarded schedule\n");
    return;
  }
  return;
}

