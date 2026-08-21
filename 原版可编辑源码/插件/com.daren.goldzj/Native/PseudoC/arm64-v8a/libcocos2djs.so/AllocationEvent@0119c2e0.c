
/* v8::internal::HeapProfiler::AllocationEvent(unsigned long, int) */

void __thiscall
v8::internal::HeapProfiler::AllocationEvent(HeapProfiler *this,ulong param_1,int param_2)

{
  if (*(AllocationTracker **)(this + 0x30) != (AllocationTracker *)0x0) {
    AllocationTracker::AllocationEvent(*(AllocationTracker **)(this + 0x30),param_1,param_2);
    return;
  }
  return;
}

