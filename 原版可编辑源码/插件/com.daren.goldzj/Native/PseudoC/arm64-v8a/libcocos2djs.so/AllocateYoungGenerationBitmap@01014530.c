
/* v8::internal::MemoryChunk::AllocateYoungGenerationBitmap() */

void __thiscall v8::internal::MemoryChunk::AllocateYoungGenerationBitmap(MemoryChunk *this)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x2000);
  *(void **)(this + 0x108) = pvVar1;
  return;
}

