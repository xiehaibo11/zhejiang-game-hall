
/* v8::EmbedderHeapTracer::FinalizeTracing() */

void __thiscall v8::EmbedderHeapTracer::FinalizeTracing(EmbedderHeapTracer *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 8);
  if ((lVar1 != 0) && (1 < *(int *)(*(long *)(lVar1 + 0x9078) + 0x58))) {
    internal::Heap::FinalizeIncrementalMarkingAtomically((Heap *)(lVar1 + 0x8850),0x16);
    return;
  }
  return;
}

