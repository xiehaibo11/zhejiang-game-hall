
/* v8::internal::MemoryChunk::ReleaseYoungGenerationBitmap() */

void __thiscall v8::internal::MemoryChunk::ReleaseYoungGenerationBitmap(MemoryChunk *this)

{
  free(*(void **)(this + 0x108));
  *(undefined8 *)(this + 0x108) = 0;
  return;
}

