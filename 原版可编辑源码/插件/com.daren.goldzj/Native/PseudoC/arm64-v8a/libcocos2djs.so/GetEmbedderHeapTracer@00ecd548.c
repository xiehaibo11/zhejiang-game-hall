
/* v8::Isolate::GetEmbedderHeapTracer() */

void __thiscall v8::Isolate::GetEmbedderHeapTracer(Isolate *this)

{
  internal::Heap::GetEmbedderHeapTracer((Heap *)(this + 0x8850));
  return;
}

