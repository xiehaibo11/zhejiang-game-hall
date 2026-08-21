
/* v8::internal::LocalEmbedderHeapTracer::ProcessingScope::~ProcessingScope() */

void __thiscall
v8::internal::LocalEmbedderHeapTracer::ProcessingScope::~ProcessingScope(ProcessingScope *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != *(void **)(this + 0x10)) {
    (**(code **)(**(long **)(*(long *)this + 8) + 0x10))();
    pvVar1 = *(void **)(this + 8);
  }
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

