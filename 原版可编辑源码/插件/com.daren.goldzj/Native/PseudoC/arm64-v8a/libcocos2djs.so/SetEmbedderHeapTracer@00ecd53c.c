
/* v8::Isolate::SetEmbedderHeapTracer(v8::EmbedderHeapTracer*) */

void __thiscall v8::Isolate::SetEmbedderHeapTracer(Isolate *this,EmbedderHeapTracer *param_1)

{
  internal::Heap::SetEmbedderHeapTracer((Heap *)(this + 0x8850),param_1);
  return;
}

