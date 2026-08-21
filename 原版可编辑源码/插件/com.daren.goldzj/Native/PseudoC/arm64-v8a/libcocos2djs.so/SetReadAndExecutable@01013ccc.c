
/* v8::internal::MemoryChunk::SetReadAndExecutable() */

void __thiscall v8::internal::MemoryChunk::SetReadAndExecutable(MemoryChunk *this)

{
  DecrementWriteUnprotectCounterAndMaybeSetPermissions(this,4);
  return;
}

