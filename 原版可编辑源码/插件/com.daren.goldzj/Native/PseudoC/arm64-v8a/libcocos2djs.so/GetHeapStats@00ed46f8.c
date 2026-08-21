
/* v8::HeapProfiler::GetHeapStats(v8::OutputStream*, long*) */

void v8::HeapProfiler::GetHeapStats(OutputStream *param_1,long *param_2)

{
  long *in_x2;
  
  internal::HeapProfiler::PushHeapObjectsStats
            ((HeapProfiler *)param_1,(OutputStream *)param_2,in_x2);
  return;
}

