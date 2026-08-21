
/* v8::internal::LocalEmbedderHeapTracer::ProcessingScope::FlushWrapperCacheIfFull() */

void __thiscall
v8::internal::LocalEmbedderHeapTracer::ProcessingScope::FlushWrapperCacheIfFull
          (ProcessingScope *this)

{
  void *pvVar1;
  void *pvVar2;
  
  if (*(long *)(this + 0x10) == *(long *)(this + 0x18)) {
    (**(code **)(**(long **)(*(long *)this + 8) + 0x10))(*(long **)(*(long *)this + 8),this + 8);
    pvVar2 = *(void **)(this + 8);
    *(void **)(this + 0x10) = pvVar2;
    if ((ulong)(*(long *)(this + 0x18) - (long)pvVar2 >> 4) < 1000) {
      pvVar1 = operator_new(16000);
      *(void **)(this + 8) = pvVar1;
      *(void **)(this + 0x10) = pvVar1;
      *(long *)(this + 0x18) = (long)pvVar1 + 16000;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
        return;
      }
    }
  }
  return;
}

