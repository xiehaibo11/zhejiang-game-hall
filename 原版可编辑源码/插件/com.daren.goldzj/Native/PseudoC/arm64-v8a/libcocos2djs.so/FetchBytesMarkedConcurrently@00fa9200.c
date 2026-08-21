
/* v8::internal::IncrementalMarking::FetchBytesMarkedConcurrently() */

void __thiscall
v8::internal::IncrementalMarking::FetchBytesMarkedConcurrently(IncrementalMarking *this)

{
  ulong uVar1;
  long lVar2;
  
  if (FLAG_concurrent_marking != '\0') {
    uVar1 = ConcurrentMarking::TotalMarkedBytes(*(ConcurrentMarking **)(*(long *)this + 0x830));
    lVar2 = uVar1 - *(ulong *)(this + 0x50);
    if (*(ulong *)(this + 0x50) <= uVar1 && lVar2 != 0) {
      *(ulong *)(this + 0x50) = uVar1;
      *(long *)(this + 0x38) = lVar2 + *(long *)(this + 0x38);
    }
    if (FLAG_trace_incremental_marking != '\0') {
      lVar2 = *(long *)this;
      uVar1 = ConcurrentMarking::TotalMarkedBytes(*(ConcurrentMarking **)(lVar2 + 0x830));
      Isolate::PrintWithTimestamp
                ((char *)(lVar2 + -0x8850),
                 "[IncrementalMarking] Marked %zuKB on background threads\n",uVar1 >> 10);
      return;
    }
  }
  return;
}

