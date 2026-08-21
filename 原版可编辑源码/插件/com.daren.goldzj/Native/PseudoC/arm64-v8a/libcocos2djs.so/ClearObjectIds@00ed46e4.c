
/* v8::HeapProfiler::ClearObjectIds() */

void v8::HeapProfiler::ClearObjectIds(void)

{
  HeapProfiler *in_x0;
  
  internal::HeapProfiler::ClearHeapObjectMap(in_x0);
  return;
}

