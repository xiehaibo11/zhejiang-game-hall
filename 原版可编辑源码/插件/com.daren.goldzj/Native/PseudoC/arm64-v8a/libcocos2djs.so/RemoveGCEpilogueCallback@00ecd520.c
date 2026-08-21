
/* v8::Isolate::RemoveGCEpilogueCallback(void (*)(v8::Isolate*, v8::GCType, v8::GCCallbackFlags)) */

void __thiscall
v8::Isolate::RemoveGCEpilogueCallback
          (Isolate *this,_func_void_Isolate_ptr_GCType_GCCallbackFlags *param_1)

{
  internal::Heap::RemoveGCEpilogueCallback((Heap *)(this + 0x8850),FUN_00ecd4e4,param_1);
  return;
}

