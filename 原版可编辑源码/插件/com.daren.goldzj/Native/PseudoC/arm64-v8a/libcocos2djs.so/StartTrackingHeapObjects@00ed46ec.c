
/* v8::HeapProfiler::StartTrackingHeapObjects(bool) */

void __thiscall v8::HeapProfiler::StartTrackingHeapObjects(HeapProfiler *this,bool param_1)

{
  internal::HeapProfiler::StartHeapObjectsTracking((HeapProfiler *)this,param_1);
  return;
}

