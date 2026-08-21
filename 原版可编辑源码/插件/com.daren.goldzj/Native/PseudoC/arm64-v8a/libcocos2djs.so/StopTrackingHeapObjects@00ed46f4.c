
/* v8::HeapProfiler::StopTrackingHeapObjects() */

void v8::HeapProfiler::StopTrackingHeapObjects(void)

{
  HeapProfiler *in_x0;
  
  internal::HeapProfiler::StopHeapObjectsTracking(in_x0);
  return;
}

