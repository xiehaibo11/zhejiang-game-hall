
/* v8::Isolate::AddNearHeapLimitCallback(unsigned long (*)(void*, unsigned long, unsigned long),
   void*) */

void __thiscall
v8::Isolate::AddNearHeapLimitCallback
          (Isolate *this,_func_ulong_void_ptr_ulong_ulong *param_1,void *param_2)

{
  internal::Heap::AddNearHeapLimitCallback((Heap *)(this + 0x8850),param_1,param_2);
  return;
}

