
/* v8::internal::Heap::SetEmbedderStackStateForNextFinalizaton(v8::EmbedderHeapTracer::EmbedderStackState)
    */

void v8::internal::Heap::SetEmbedderStackStateForNextFinalizaton(long param_1)

{
  LocalEmbedderHeapTracer::SetEmbedderStackStateForNextFinalization
            (*(LocalEmbedderHeapTracer **)(param_1 + 0x870));
  return;
}

