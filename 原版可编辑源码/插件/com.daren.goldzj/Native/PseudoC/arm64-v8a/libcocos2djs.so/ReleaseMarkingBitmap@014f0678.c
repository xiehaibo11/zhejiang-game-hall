
/* v8::internal::BasicMemoryChunk::ReleaseMarkingBitmap() */

void __thiscall v8::internal::BasicMemoryChunk::ReleaseMarkingBitmap(BasicMemoryChunk *this)

{
  free(*(void **)(this + 0x10));
  *(undefined8 *)(this + 0x10) = 0;
  return;
}

