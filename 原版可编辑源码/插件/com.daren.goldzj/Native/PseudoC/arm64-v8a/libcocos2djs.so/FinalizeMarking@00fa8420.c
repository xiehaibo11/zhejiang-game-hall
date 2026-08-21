
/* v8::internal::IncrementalMarking::FinalizeMarking(v8::internal::IncrementalMarking::CompletionAction)
    */

void __thiscall
v8::internal::IncrementalMarking::FinalizeMarking(IncrementalMarking *this,int param_2)

{
  if (FLAG_trace_incremental_marking != '\0') {
    Isolate::PrintWithTimestamp
              ((char *)(*(long *)this + -0x8850),
               "[IncrementalMarking] requesting finalization of incremental marking.\n");
  }
  *(undefined4 *)(this + 100) = 2;
  if (param_2 != 0) {
    return;
  }
  StackGuard::RequestInterrupt((StackGuard *)(*(long *)this + -0x8808),2);
  return;
}

