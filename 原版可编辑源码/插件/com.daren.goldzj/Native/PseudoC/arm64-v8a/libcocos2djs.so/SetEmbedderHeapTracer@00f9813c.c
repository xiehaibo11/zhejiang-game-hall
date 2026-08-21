
/* v8::internal::Heap::SetEmbedderHeapTracer(v8::EmbedderHeapTracer*) */

void __thiscall v8::internal::Heap::SetEmbedderHeapTracer(Heap *this,EmbedderHeapTracer *param_1)

{
  LocalEmbedderHeapTracer::SetRemoteTracer(*(LocalEmbedderHeapTracer **)(this + 0x870),param_1);
  return;
}

