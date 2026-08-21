
/* v8::EmbedderHeapTracer::GarbageCollectionForTesting(v8::EmbedderHeapTracer::EmbedderStackState)
    */

void v8::EmbedderHeapTracer::GarbageCollectionForTesting(long param_1)

{
  Heap *pHVar1;
  
  if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","isolate_");
  }
  if (internal::FLAG_expose_gc == '\x01') {
    pHVar1 = (Heap *)(*(long *)(param_1 + 8) + 0x8850);
    internal::Heap::SetEmbedderStackStateForNextFinalizaton(pHVar1);
    internal::Heap::PreciseCollectAllGarbage(pHVar1,0,0x15,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","i::FLAG_expose_gc");
}

