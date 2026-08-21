
/* v8::HeapProfiler::AddBuildEmbedderGraphCallback(void (*)(v8::Isolate*, v8::EmbedderGraph*,
   void*), void*) */

void v8::HeapProfiler::AddBuildEmbedderGraphCallback
               (_func_void_Isolate_ptr_EmbedderGraph_ptr_void_ptr *param_1,void *param_2)

{
  void *in_x2;
  
  internal::HeapProfiler::AddBuildEmbedderGraphCallback((HeapProfiler *)param_1,param_2,in_x2);
  return;
}

