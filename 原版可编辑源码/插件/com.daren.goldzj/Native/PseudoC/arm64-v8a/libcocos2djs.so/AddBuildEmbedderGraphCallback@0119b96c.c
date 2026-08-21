
/* v8::internal::HeapProfiler::AddBuildEmbedderGraphCallback(void (*)(v8::Isolate*,
   v8::EmbedderGraph*, void*), void*) */

void __thiscall
v8::internal::HeapProfiler::AddBuildEmbedderGraphCallback
          (HeapProfiler *this,_func_void_Isolate_ptr_EmbedderGraph_ptr_void_ptr *param_1,
          void *param_2)

{
  undefined8 *puVar1;
  _func_void_Isolate_ptr_EmbedderGraph_ptr_void_ptr *local_20;
  void *pvStack_18;
  
  puVar1 = *(undefined8 **)(this + 0x78);
  if (puVar1 < *(undefined8 **)(this + 0x80)) {
    puVar1[1] = param_2;
    *puVar1 = param_1;
    *(long *)(this + 0x78) = *(long *)(this + 0x78) + 0x10;
  }
  else {
    local_20 = param_1;
    pvStack_18 = param_2;
    std::__ndk1::
    vector<std::__ndk1::pair<void(*)(v8::Isolate*,v8::EmbedderGraph*,void*),void*>,std::__ndk1::allocator<std::__ndk1::pair<void(*)(v8::Isolate*,v8::EmbedderGraph*,void*),void*>>>
    ::__push_back_slow_path<std::__ndk1::pair<void(*)(v8::Isolate*,v8::EmbedderGraph*,void*),void*>>
              ((vector<std::__ndk1::pair<void(*)(v8::Isolate*,v8::EmbedderGraph*,void*),void*>,std::__ndk1::allocator<std::__ndk1::pair<void(*)(v8::Isolate*,v8::EmbedderGraph*,void*),void*>>>
                *)(this + 0x70),(pair *)&local_20);
  }
  return;
}

