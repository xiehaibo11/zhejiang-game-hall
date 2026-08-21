
/* v8::internal::MemoryChunk::InLargeObjectSpace() const */

bool __thiscall v8::internal::MemoryChunk::InLargeObjectSpace(MemoryChunk *this)

{
  if (((byte)this[10] >> 5 & 1) == 0) {
    return *(int *)(*(long *)(this + 0x58) + 0x48) == 5;
  }
  return false;
}

