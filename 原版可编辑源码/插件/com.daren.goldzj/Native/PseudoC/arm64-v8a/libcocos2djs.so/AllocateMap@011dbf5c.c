
/* v8::internal::SerializerAllocator::AllocateMap() */

ulong __thiscall v8::internal::SerializerAllocator::AllocateMap(SerializerAllocator *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x70);
  *(uint *)(this + 0x70) = uVar1 + 1;
  return (ulong)uVar1 << 0x20 | 4;
}

