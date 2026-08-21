
/* v8::internal::IncrementalMarking::FastForwardScheduleIfCloseToFinalization() */

void __thiscall
v8::internal::IncrementalMarking::FastForwardScheduleIfCloseToFinalization(IncrementalMarking *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(this + 0x38);
  if ((((*(ulong *)(this + 0x28) >> 2) * 3 < uVar1) && (*(ulong *)(this + 0x40) < uVar1)) &&
     (*(ulong *)(this + 0x40) = uVar1, FLAG_trace_incremental_marking != '\0')) {
    Isolate::PrintWithTimestamp
              ((char *)(*(long *)this + -0x8850),"[IncrementalMarking] Fast-forwarded schedule\n");
    return;
  }
  return;
}

