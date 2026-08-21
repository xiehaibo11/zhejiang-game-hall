
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00f95da0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* void v8::internal::CollectSlots<(v8::internal::RememberedSetType)0>(v8::internal::MemoryChunk*,
   unsigned long, unsigned long, std::__ndk1::set<unsigned long, std::__ndk1::less<unsigned long>,
   std::__ndk1::allocator<unsigned long> >*,
   std::__ndk1::set<std::__ndk1::pair<v8::internal::SlotType, unsigned long>,
   std::__ndk1::less<std::__ndk1::pair<v8::internal::SlotType, unsigned long> >,
   std::__ndk1::allocator<std::__ndk1::pair<v8::internal::SlotType, unsigned long> > >*) */

void v8::internal::CollectSlots<(v8::internal::RememberedSetType)0>
               (MemoryChunk *param_1,ulong param_2,ulong param_3,set *param_4,set *param_5)

{
  int iVar1;
  long lVar2;
  ulong local_58;
  ulong uStack_50;
  set *local_48;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    local_58 = param_2;
    uStack_50 = param_3;
    local_48 = param_4;
    SlotSet::
    Iterate<v8::internal::CollectSlots<(v8::internal::RememberedSetType)0>(v8::internal::MemoryChunk*,unsigned_long,unsigned_long,std::__ndk1::set<unsigned_long,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<unsigned_long>>*,std::__ndk1::set<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>,std::__ndk1::less<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>>>*)::_lambda(v8::internal::CompressedMaybeObjectSlot)_1_,v8::internal::SlotSet::Iterate<v8::internal::CollectSlots<(v8::internal::RememberedSetType)0>(v8::internal::MemoryChunk*,unsigned_long,unsigned_long,std::__ndk1::set<unsigned_long,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<unsigned_long>>*,std::__ndk1::set<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>,std::__ndk1::less<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>>>*)::_lambda(v8::internal::CompressedMaybeObjectSlot)_1_>(unsigned_long,unsigned_long,v8::internal::CollectSlots<(v8::internal::RememberedSetType)0>(v8::internal::MemoryChunk*,unsigned_long,unsigned_long,std::__ndk1::set<unsigned_long,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<unsigned_long>>*,std::__ndk1::set<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>,std::__ndk1::less<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>>>*)::_lambda(v8::internal::CompressedMaybeObjectSlot)_1_,v8::internal::SlotSet::EmptyBucketMode)::_lambda(unsigned_long)_1_>
              (lVar2,param_1,*(long *)param_1 + 0xfffU >> 0xc,&local_58,lVar2,0);
  }
  if (*(long *)(param_1 + 0xa8) == 0) {
    lVar2 = *(long *)(param_1 + 0x70);
    if (lVar2 != 0) {
      local_58 = param_2;
      uStack_50 = param_3;
      local_48 = param_4;
      SlotSet::
      Iterate<v8::internal::CollectSlots<(v8::internal::RememberedSetType)0>(v8::internal::MemoryChunk*,unsigned_long,unsigned_long,std::__ndk1::set<unsigned_long,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<unsigned_long>>*,std::__ndk1::set<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>,std::__ndk1::less<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>>>*)::_lambda(v8::internal::CompressedMaybeObjectSlot)_2_,v8::internal::SlotSet::Iterate<v8::internal::CollectSlots<(v8::internal::RememberedSetType)0>(v8::internal::MemoryChunk*,unsigned_long,unsigned_long,std::__ndk1::set<unsigned_long,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<unsigned_long>>*,std::__ndk1::set<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>,std::__ndk1::less<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>>>*)::_lambda(v8::internal::CompressedMaybeObjectSlot)_2_>(unsigned_long,unsigned_long,v8::internal::CollectSlots<(v8::internal::RememberedSetType)0>(v8::internal::MemoryChunk*,unsigned_long,unsigned_long,std::__ndk1::set<unsigned_long,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<unsigned_long>>*,std::__ndk1::set<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>,std::__ndk1::less<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>>>*)::_lambda(v8::internal::CompressedMaybeObjectSlot)_2_,v8::internal::SlotSet::EmptyBucketMode)::_lambda(unsigned_long)_1_>
                (lVar2,param_1,*(long *)param_1 + 0xfffU >> 0xc,&local_58,lVar2,0);
    }
    if (*(TypedSlotSet **)(param_1 + 0x78) != (TypedSlotSet *)0x0) {
      local_58 = param_2;
      uStack_50 = param_3;
      local_48 = param_5;
      iVar1 = TypedSlotSet::
              Iterate<v8::internal::CollectSlots<(v8::internal::RememberedSetType)0>(v8::internal::MemoryChunk*,unsigned_long,unsigned_long,std::__ndk1::set<unsigned_long,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<unsigned_long>>*,std::__ndk1::set<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>,std::__ndk1::less<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>>>*)::_lambda(v8::internal::SlotType,unsigned_long)_1_>
                        (*(TypedSlotSet **)(param_1 + 0x78),&local_58,1);
      if (iVar1 == 0) {
        MemoryChunk::ReleaseTypedSlotSet<(v8::internal::RememberedSetType)0>(param_1);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","chunk->SweepingDone()");
}

