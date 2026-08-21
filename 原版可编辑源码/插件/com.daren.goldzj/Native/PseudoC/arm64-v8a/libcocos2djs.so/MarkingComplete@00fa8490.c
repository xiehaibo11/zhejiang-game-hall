
/* v8::internal::IncrementalMarking::MarkingComplete(v8::internal::IncrementalMarking::CompletionAction)
    */

void __thiscall
v8::internal::IncrementalMarking::MarkingComplete(IncrementalMarking *this,int param_2)

{
  *(undefined4 *)(this + 0x58) = 3;
  *(undefined1 *)(*(long *)this + 0xac0) = 1;
  this[0x5d] = (IncrementalMarking)0x1;
  if (FLAG_trace_incremental_marking != '\0') {
    Isolate::PrintWithTimestamp
              ((char *)(*(long *)this + -0x8850),"[IncrementalMarking] Complete (normal).\n");
  }
  *(undefined4 *)(this + 100) = 1;
  if (param_2 != 0) {
    return;
  }
  StackGuard::RequestInterrupt((StackGuard *)(*(long *)this + -0x8808),2);
  return;
}

