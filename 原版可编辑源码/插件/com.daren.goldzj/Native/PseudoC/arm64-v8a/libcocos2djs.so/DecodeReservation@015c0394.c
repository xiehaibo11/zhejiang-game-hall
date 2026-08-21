
/* v8::internal::DeserializerAllocator::DecodeReservation(std::__ndk1::vector<v8::internal::SerializedData::Reservation,
   std::__ndk1::allocator<v8::internal::SerializedData::Reservation> > const&) */

void __thiscall
v8::internal::DeserializerAllocator::DecodeReservation(DeserializerAllocator *this,vector *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  DeserializerAllocator *pDVar4;
  ulong *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar1 = *(uint **)(param_1 + 8);
  if (*(uint **)param_1 != puVar1) {
    uVar3 = 0;
    puVar7 = *(uint **)param_1;
    do {
      uVar2 = *puVar7;
      local_58 = uVar2 & 0x7fffffff;
      uStack_50 = 0;
      local_48 = 0;
      pDVar4 = this + (ulong)uVar3 * 0x18 + 8;
      puVar5 = *(ulong **)pDVar4;
      if (puVar5 < *(ulong **)(this + (ulong)uVar3 * 0x18 + 0x10)) {
        puVar5[2] = 0;
        puVar5[1] = 0;
        *puVar5 = CONCAT44(uStack_54,uVar2) & 0xffffffff7fffffff;
        *(long *)pDVar4 = *(long *)pDVar4 + 0x18;
      }
      else {
        std::__ndk1::
        vector<v8::internal::Heap::Chunk,std::__ndk1::allocator<v8::internal::Heap::Chunk>>::
        __push_back_slow_path<v8::internal::Heap::Chunk>
                  ((vector<v8::internal::Heap::Chunk,std::__ndk1::allocator<v8::internal::Heap::Chunk>>
                    *)(this + (ulong)uVar3 * 0x18),(Chunk *)&local_58);
      }
      puVar6 = puVar7 + 1;
      uVar3 = uVar3 - ((int)*puVar7 >> 0x1f);
      puVar7 = puVar6;
    } while (puVar1 != puVar6);
  }
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  return;
}

