
/* v8::EmbedderHeapTracer::DecreaseAllocatedSize(unsigned long) */

void __thiscall
v8::EmbedderHeapTracer::DecreaseAllocatedSize(EmbedderHeapTracer *this,ulong param_1)

{
  long lVar1;
  
  if (*(long *)(this + 8) != 0) {
    lVar1 = *(long *)(*(long *)(this + 8) + 0x90c0);
    *(ulong *)(lVar1 + 0x20) = *(long *)(lVar1 + 0x20) - param_1;
  }
  return;
}

