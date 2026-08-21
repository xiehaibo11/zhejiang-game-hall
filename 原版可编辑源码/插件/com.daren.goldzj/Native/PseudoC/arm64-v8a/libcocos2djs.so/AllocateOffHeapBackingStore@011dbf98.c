
/* v8::internal::SerializerAllocator::AllocateOffHeapBackingStore() */

ulong __thiscall
v8::internal::SerializerAllocator::AllocateOffHeapBackingStore(SerializerAllocator *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x7c);
  *(uint *)(this + 0x7c) = uVar1 + 1;
  return (ulong)uVar1 << 0x20 | 0x26;
}

