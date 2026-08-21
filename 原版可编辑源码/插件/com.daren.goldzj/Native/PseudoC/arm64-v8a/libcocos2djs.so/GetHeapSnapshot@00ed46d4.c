
/* v8::HeapProfiler::GetHeapSnapshot(int) */

void __thiscall v8::HeapProfiler::GetHeapSnapshot(HeapProfiler *this,int param_1)

{
  internal::HeapProfiler::GetSnapshot((HeapProfiler *)this,param_1);
  return;
}

