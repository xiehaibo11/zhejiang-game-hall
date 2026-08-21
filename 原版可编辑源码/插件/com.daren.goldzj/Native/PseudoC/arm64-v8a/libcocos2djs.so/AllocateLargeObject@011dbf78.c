
/* v8::internal::SerializerAllocator::AllocateLargeObject(unsigned int) */

ulong __thiscall
v8::internal::SerializerAllocator::AllocateLargeObject(SerializerAllocator *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x78);
  *(uint *)(this + 0x74) = *(int *)(this + 0x74) + param_1;
  *(uint *)(this + 0x78) = uVar1 + 1;
  return (ulong)uVar1 << 0x20 | 5;
}

