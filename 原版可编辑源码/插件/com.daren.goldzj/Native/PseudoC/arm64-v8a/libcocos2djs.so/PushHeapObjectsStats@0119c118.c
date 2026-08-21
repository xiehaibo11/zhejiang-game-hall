
/* v8::internal::HeapProfiler::PushHeapObjectsStats(v8::OutputStream*, long*) */

void __thiscall
v8::internal::HeapProfiler::PushHeapObjectsStats
          (HeapProfiler *this,OutputStream *param_1,long *param_2)

{
  HeapObjectsMap::PushHeapObjectsStats(*(HeapObjectsMap **)(this + 8),param_1,param_2);
  return;
}

