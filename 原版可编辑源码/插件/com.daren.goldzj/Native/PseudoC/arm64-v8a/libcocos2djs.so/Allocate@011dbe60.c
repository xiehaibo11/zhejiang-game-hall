
/* v8::internal::SerializerAllocator::Allocate(v8::internal::SnapshotSpace, unsigned int) */

ulong __thiscall
v8::internal::SerializerAllocator::Allocate(SerializerAllocator *this,uint param_2,int param_3)

{
  SerializerAllocator *pSVar1;
  uint uVar2;
  uint uVar3;
  SerializerAllocator *pSVar4;
  ulong uVar5;
  long lVar6;
  
  pSVar1 = this + (long)(int)param_2 * 4;
  uVar3 = *(uint *)(this + 0x80);
  uVar2 = *(uint *)pSVar1;
  lVar6 = (long)(int)param_2;
  if (uVar3 == 0) {
    uVar3 = MemoryChunkLayout::AllocatableMemoryInMemoryChunk(param_2);
  }
  if ((uVar2 == 0) || (uVar2 + param_3 <= uVar3)) {
    param_3 = uVar2 + param_3;
    uVar5 = (ulong)*(uint *)pSVar1 << 0x20;
  }
  else {
    Serializer::PutNextChunk(*(Serializer **)(this + 0x88),param_2);
    pSVar4 = this + lVar6 * 0x18 + 0x18;
    if (*(uint **)pSVar4 == *(uint **)(this + lVar6 * 0x18 + 0x20)) {
      std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
      __push_back_slow_path<unsigned_int_const&>
                ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)
                 (this + lVar6 * 0x18 + 0x10),(uint *)pSVar1);
    }
    else {
      **(uint **)pSVar4 = *(uint *)pSVar1;
      *(long *)pSVar4 = *(long *)pSVar4 + 4;
    }
    uVar5 = 0;
    *(uint *)pSVar1 = 0;
  }
  *(int *)(this + lVar6 * 4) = param_3;
  return uVar5 | ((*(int *)(this + lVar6 * 0x18 + 0x18) - *(int *)(this + lVar6 * 0x18 + 0x10)) * 4
                  & 0xfffffff0U | param_2);
}

