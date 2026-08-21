
/* v8::internal::HeapProfiler::StartHeapObjectsTracking(bool) */

void __thiscall
v8::internal::HeapProfiler::StartHeapObjectsTracking(HeapProfiler *this,bool param_1)

{
  AllocationTracker *this_00;
  AllocationTracker *this_01;
  
  HeapObjectsMap::UpdateHeapObjectsMap(*(HeapObjectsMap **)(this + 8));
  this[0x38] = (HeapProfiler)0x1;
  if (param_1) {
    this_00 = operator_new(0x1b0);
    AllocationTracker::AllocationTracker
              (this_00,*(HeapObjectsMap **)(this + 8),*(StringsStorage **)(this + 0x28));
    this_01 = *(AllocationTracker **)(this + 0x30);
    *(AllocationTracker **)(this + 0x30) = this_00;
    if (this_01 != (AllocationTracker *)0x0) {
      AllocationTracker::~AllocationTracker(this_01);
      operator_delete(this_01);
    }
    Heap::AddHeapObjectAllocationTracker
              (*(Heap **)(*(long *)(this + 8) + 0x78),(HeapObjectAllocationTracker *)this);
    DebugFeatureTracker::Track
              ((DebugFeatureTracker *)
               (*(long *)(*(long *)(*(long *)(this + 8) + 0x78) + 0x2e78) + 0x30),5);
    return;
  }
  return;
}

