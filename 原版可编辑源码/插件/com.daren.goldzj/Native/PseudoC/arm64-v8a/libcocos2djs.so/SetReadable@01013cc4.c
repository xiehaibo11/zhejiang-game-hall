
/* v8::internal::MemoryChunk::SetReadable() */

void __thiscall v8::internal::MemoryChunk::SetReadable(MemoryChunk *this)

{
  DecrementWriteUnprotectCounterAndMaybeSetPermissions(this,1);
  return;
}

