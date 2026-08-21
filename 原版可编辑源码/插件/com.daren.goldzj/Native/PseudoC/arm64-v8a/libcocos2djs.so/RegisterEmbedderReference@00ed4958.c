
/* v8::EmbedderHeapTracer::RegisterEmbedderReference(v8::TracedReferenceBase<v8::Value> const&) */

void __thiscall
v8::EmbedderHeapTracer::RegisterEmbedderReference
          (EmbedderHeapTracer *this,TracedReferenceBase *param_1)

{
  if (*(ulong **)param_1 != (ulong *)0x0) {
    internal::Heap::RegisterExternallyReferencedObject
              ((Heap *)(*(long *)(this + 8) + 0x8850),*(ulong **)param_1);
    return;
  }
  return;
}

