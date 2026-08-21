
/* v8::EmbedderHeapTracer::IncreaseAllocatedSize(unsigned long) */

void __thiscall
v8::EmbedderHeapTracer::IncreaseAllocatedSize(EmbedderHeapTracer *this,ulong param_1)

{
  long lVar1;
  LocalEmbedderHeapTracer *this_00;
  
  if (*(long *)(this + 8) != 0) {
    this_00 = *(LocalEmbedderHeapTracer **)(*(long *)(this + 8) + 0x90c0);
    lVar1 = *(long *)(this_00 + 0x28);
    *(ulong *)(this_00 + 0x20) = *(long *)(this_00 + 0x20) + param_1;
    *(ulong *)(this_00 + 0x28) = lVar1 + param_1;
    if (*(ulong *)(this_00 + 0x30) < lVar1 + param_1) {
      internal::LocalEmbedderHeapTracer::StartIncrementalMarkingIfNeeded(this_00);
      *(long *)(this_00 + 0x30) = *(long *)(this_00 + 0x28) + 0x20000;
    }
  }
  return;
}

