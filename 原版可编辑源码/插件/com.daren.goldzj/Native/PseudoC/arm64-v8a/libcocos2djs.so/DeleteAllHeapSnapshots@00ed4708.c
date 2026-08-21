
/* v8::HeapProfiler::DeleteAllHeapSnapshots() */

void v8::HeapProfiler::DeleteAllHeapSnapshots(void)

{
  HeapProfiler *in_x0;
  
  internal::HeapProfiler::DeleteAllSnapshots(in_x0);
  return;
}

