
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00febbfc */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::RememberedSetUpdatingItem<v8::internal::MajorNonAtomicMarkingState,
   (v8::internal::GarbageCollector)1>::UpdateUntypedPointers() */

void v8::internal::
     RememberedSetUpdatingItem<v8::internal::MajorNonAtomicMarkingState,(v8::internal::GarbageCollector)1>
     ::UpdateUntypedPointers(void)

{
  long in_x0;
  MemoryChunk *this;
  ulong uVar1;
  long lVar2;
  MemoryChunk *in_x1;
  long *plVar3;
  MemoryChunk *extraout_x1;
  MemoryChunk *extraout_x1_00;
  MemoryChunk *extraout_x1_01;
  undefined1 auStack_68 [48];
  __tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
  a_Stack_38 [8];
  __tree_node *local_30;
  
  this = *(MemoryChunk **)(in_x0 + 0x20);
  if (*(long *)(this + 0x30) != 0) {
    InvalidatedSlotsFilter::OldToNew((InvalidatedSlotsFilter *)this,in_x1);
    plVar3 = *(long **)(in_x0 + 0x20);
    if ((plVar3[6] == 0) ||
       (uVar1 = SlotSet::
                Iterate<v8::internal::RememberedSetUpdatingItem<v8::internal::MajorNonAtomicMarkingState,(v8::internal::GarbageCollector)1>::UpdateUntypedPointers()::_lambda(v8::internal::CompressedMaybeObjectSlot)_1_,v8::internal::SlotSet::Iterate<v8::internal::RememberedSetUpdatingItem<v8::internal::MajorNonAtomicMarkingState,(v8::internal::GarbageCollector)1>::UpdateUntypedPointers()::_lambda(v8::internal::CompressedMaybeObjectSlot)_1_>(unsigned_long,unsigned_long,v8::internal::RememberedSetUpdatingItem<v8::internal::MajorNonAtomicMarkingState,(v8::internal::GarbageCollector)1>::UpdateUntypedPointers()::_lambda(v8::internal::CompressedMaybeObjectSlot)_1_,v8::internal::SlotSet::EmptyBucketMode)::_lambda(unsigned_long)_1_>
                          (plVar3[6],plVar3,*plVar3 + 0xfffU >> 0xc), (int)uVar1 == 0)) {
      MemoryChunk::ReleaseSlotSet<(v8::internal::RememberedSetType)0>();
    }
    std::__ndk1::
    __tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
    ::destroy(a_Stack_38,local_30);
    this = *(MemoryChunk **)(in_x0 + 0x20);
    in_x1 = extraout_x1;
  }
  if (*(long *)(this + 0x70) != 0) {
    InvalidatedSlotsFilter::OldToNew((InvalidatedSlotsFilter *)this,in_x1);
    plVar3 = *(long **)(in_x0 + 0x20);
    if ((plVar3[0xe] == 0) ||
       (uVar1 = SlotSet::
                Iterate<v8::internal::RememberedSetUpdatingItem<v8::internal::MajorNonAtomicMarkingState,(v8::internal::GarbageCollector)1>::UpdateUntypedPointers()::_lambda(v8::internal::CompressedMaybeObjectSlot)_2_,v8::internal::SlotSet::Iterate<v8::internal::RememberedSetUpdatingItem<v8::internal::MajorNonAtomicMarkingState,(v8::internal::GarbageCollector)1>::UpdateUntypedPointers()::_lambda(v8::internal::CompressedMaybeObjectSlot)_2_>(unsigned_long,unsigned_long,v8::internal::RememberedSetUpdatingItem<v8::internal::MajorNonAtomicMarkingState,(v8::internal::GarbageCollector)1>::UpdateUntypedPointers()::_lambda(v8::internal::CompressedMaybeObjectSlot)_2_,v8::internal::SlotSet::EmptyBucketMode)::_lambda(unsigned_long)_1_>
                          (plVar3[0xe],plVar3,*plVar3 + 0xfffU >> 0xc), (int)uVar1 == 0)) {
      MemoryChunk::ReleaseSweepingSlotSet();
    }
    std::__ndk1::
    __tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
    ::destroy(a_Stack_38,local_30);
    this = *(MemoryChunk **)(in_x0 + 0x20);
    in_x1 = extraout_x1_00;
  }
  if (*(long *)(this + 0x88) != 0) {
    MemoryChunk::ReleaseInvalidatedSlots<(v8::internal::RememberedSetType)0>(this);
    in_x1 = extraout_x1_01;
  }
  if (*(int *)(in_x0 + 0x28) == 0) {
    if (*(long *)(*(InvalidatedSlotsFilter **)(in_x0 + 0x20) + 0x38) != 0) {
      InvalidatedSlotsFilter::OldToOld(*(InvalidatedSlotsFilter **)(in_x0 + 0x20),in_x1);
      plVar3 = *(long **)(in_x0 + 0x20);
      lVar2 = plVar3[7];
      if (lVar2 != 0) {
        SlotSet::
        Iterate<v8::internal::RememberedSetUpdatingItem<v8::internal::MajorNonAtomicMarkingState,(v8::internal::GarbageCollector)1>::UpdateUntypedPointers()::_lambda(v8::internal::CompressedMaybeObjectSlot)_3_,v8::internal::SlotSet::Iterate<v8::internal::RememberedSetUpdatingItem<v8::internal::MajorNonAtomicMarkingState,(v8::internal::GarbageCollector)1>::UpdateUntypedPointers()::_lambda(v8::internal::CompressedMaybeObjectSlot)_3_>(unsigned_long,unsigned_long,v8::internal::RememberedSetUpdatingItem<v8::internal::MajorNonAtomicMarkingState,(v8::internal::GarbageCollector)1>::UpdateUntypedPointers()::_lambda(v8::internal::CompressedMaybeObjectSlot)_3_,v8::internal::SlotSet::EmptyBucketMode)::_lambda(unsigned_long)_1_>
                  (lVar2,plVar3,*plVar3 + 0xfffU >> 0xc,auStack_68,lVar2,0);
      }
      MemoryChunk::ReleaseSlotSet<(v8::internal::RememberedSetType)1>();
      std::__ndk1::
      __tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
      ::destroy(a_Stack_38,local_30);
      if (*(int *)(in_x0 + 0x28) != 0) {
        return;
      }
    }
    if (*(long *)(*(MemoryChunk **)(in_x0 + 0x20) + 0x90) != 0) {
      MemoryChunk::ReleaseInvalidatedSlots<(v8::internal::RememberedSetType)1>
                (*(MemoryChunk **)(in_x0 + 0x20));
    }
  }
  return;
}

