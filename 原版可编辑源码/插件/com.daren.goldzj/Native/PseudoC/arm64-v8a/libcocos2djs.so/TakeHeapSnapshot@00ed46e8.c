
/* v8::HeapProfiler::TakeHeapSnapshot(v8::ActivityControl*, v8::HeapProfiler::ObjectNameResolver*)
    */

void v8::HeapProfiler::TakeHeapSnapshot(ActivityControl *param_1,ObjectNameResolver *param_2)

{
  ObjectNameResolver *in_x2;
  
  internal::HeapProfiler::TakeSnapshot((HeapProfiler *)param_1,(ActivityControl *)param_2,in_x2);
  return;
}

