
/* v8::Isolate::RemoveNearHeapLimitCallback(unsigned long (*)(void*, unsigned long, unsigned long),
   unsigned long) */

void __thiscall
v8::Isolate::RemoveNearHeapLimitCallback
          (Isolate *this,_func_ulong_void_ptr_ulong_ulong *param_1,ulong param_2)

{
  internal::Heap::RemoveNearHeapLimitCallback((Heap *)(this + 0x8850),param_1,param_2);
  return;
}

