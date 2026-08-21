
/* v8::Isolate::RemoveGCEpilogueCallback(void (*)(v8::Isolate*, v8::GCType, v8::GCCallbackFlags,
   void*), void*) */

void __thiscall
v8::Isolate::RemoveGCEpilogueCallback
          (Isolate *this,_func_void_Isolate_ptr_GCType_GCCallbackFlags_void_ptr *param_1,
          void *param_2)

{
  internal::Heap::RemoveGCEpilogueCallback((Heap *)(this + 0x8850),param_1,param_2);
  return;
}

