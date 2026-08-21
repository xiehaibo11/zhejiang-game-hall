
/* v8::internal::LocalEmbedderHeapTracer::ProcessingScope::ProcessingScope(v8::internal::LocalEmbedderHeapTracer*)
    */

void __thiscall
v8::internal::LocalEmbedderHeapTracer::ProcessingScope::ProcessingScope
          (ProcessingScope *this,LocalEmbedderHeapTracer *param_1)

{
  void *pvVar1;
  
  *(LocalEmbedderHeapTracer **)this = param_1;
  pvVar1 = operator_new(16000);
  *(void **)(this + 0x10) = pvVar1;
  *(void **)(this + 8) = pvVar1;
  *(long *)(this + 0x18) = (long)pvVar1 + 16000;
  return;
}

