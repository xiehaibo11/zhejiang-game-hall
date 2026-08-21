
/* v8::internal::MemoryChunk::InitializationMemoryFence() */

void v8::internal::MemoryChunk::InitializationMemoryFence(void)

{
  DataMemoryBarrier(2,3);
  return;
}

