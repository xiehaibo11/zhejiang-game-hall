
/* v8::internal::SerializerAllocator::TargetChunkSize(v8::internal::SnapshotSpace) */

void __thiscall
v8::internal::SerializerAllocator::TargetChunkSize(SerializerAllocator *this,undefined4 param_2)

{
  if (*(int *)(this + 0x80) != 0) {
    return;
  }
  MemoryChunkLayout::AllocatableMemoryInMemoryChunk(param_2);
  return;
}

