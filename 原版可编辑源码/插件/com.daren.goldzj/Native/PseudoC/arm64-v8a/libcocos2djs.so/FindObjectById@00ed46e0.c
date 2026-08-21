
/* v8::HeapProfiler::FindObjectById(unsigned int) */

void v8::HeapProfiler::FindObjectById(uint param_1)

{
  uint in_w1;
  
  internal::HeapProfiler::FindHeapObjectById((HeapProfiler *)(ulong)param_1,in_w1);
  return;
}

