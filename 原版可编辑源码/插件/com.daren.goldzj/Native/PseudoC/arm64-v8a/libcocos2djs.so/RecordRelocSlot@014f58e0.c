
/* v8::internal::ConcurrentMarkingVisitor::RecordRelocSlot(v8::internal::Code,
   v8::internal::RelocInfo*, v8::internal::HeapObject) */

void __thiscall
v8::internal::ConcurrentMarkingVisitor::RecordRelocSlot
          (ConcurrentMarkingVisitor *this,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  TypedSlots *pTVar2;
  long *plVar3;
  MarkCompactCollector aMStack_48 [8];
  undefined4 local_40;
  char local_3c;
  undefined4 local_38;
  MarkCompactCollector *local_28;
  
  MarkCompactCollector::PrepareRecordRelocSlot(aMStack_48,param_2,param_3,param_4);
  if (local_3c != '\0') {
    local_28 = aMStack_48;
    lVar1 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,v8::internal::MemoryChunkData>,std::__ndk1::__unordered_map_hasher<v8::internal::MemoryChunk*,std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,v8::internal::MemoryChunkData>,v8::internal::MemoryChunk::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::MemoryChunk*,std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,v8::internal::MemoryChunkData>,std::__ndk1::equal_to<v8::internal::MemoryChunk*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,v8::internal::MemoryChunkData>>>
            ::
            __emplace_unique_key_args<v8::internal::MemoryChunk*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::MemoryChunk*const&>,std::__ndk1::tuple<>>
                      (*(MemoryChunk ***)(this + 0x40),(piecewise_construct_t *)aMStack_48,
                       (tuple *)&DAT_01a495e9,(tuple *)&local_28);
    pTVar2 = *(TypedSlots **)(lVar1 + 0x20);
    if (pTVar2 == (TypedSlots *)0x0) {
      pTVar2 = operator_new(0x18);
      *(undefined8 *)(pTVar2 + 8) = 0;
      *(undefined8 *)(pTVar2 + 0x10) = 0;
      *(undefined ***)pTVar2 = &PTR__TypedSlots_01ca94d0;
      plVar3 = *(long **)(lVar1 + 0x20);
      *(TypedSlots **)(lVar1 + 0x20) = pTVar2;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3);
        pTVar2 = *(TypedSlots **)(lVar1 + 0x20);
      }
    }
    TypedSlots::Insert(pTVar2,local_40,local_38);
  }
  return;
}

