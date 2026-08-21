
/* v8::internal::Scavenger::Finalize() */

void __thiscall v8::internal::Scavenger::Finalize(Scavenger *this)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  long local_88;
  void *local_80;
  undefined8 uStack_78;
  void *local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  Heap::MergeAllocationSitePretenuringFeedback(*(Heap **)(this + 8),(unordered_map *)(this + 0x50));
  *(long *)(*(long *)(this + 8) + 0x7b8) =
       *(long *)(*(long *)(this + 8) + 0x7b8) + *(long *)(this + 0x78);
  *(long *)(*(long *)(this + 8) + 0x7a0) =
       *(long *)(*(long *)(this + 8) + 0x7a0) + *(long *)(this + 0x80);
  plVar5 = *(long **)(this + 0x2a0);
  if (plVar5 != (long *)0x0) {
    lVar4 = *(long *)this;
    do {
      local_88 = plVar5[2];
      local_80 = (void *)plVar5[3];
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::__unordered_map_hasher<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::equal_to<v8::internal::HeapObject>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>>>
      ::
      __emplace_unique_key_args<v8::internal::HeapObject,std::__ndk1::pair<v8::internal::HeapObject,v8::internal::Map>&>
                ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::__unordered_map_hasher<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::equal_to<v8::internal::HeapObject>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>>>
                  *)(lVar4 + 0x20),(HeapObject *)&local_88,(pair *)&local_88);
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
  }
  PagedSpace::MergeLocalSpace
            (*(PagedSpace **)(*(long *)(this + 0x88) + 0xf0),(LocalSpace *)(this + 0xa0));
  PagedSpace::MergeLocalSpace
            (*(PagedSpace **)(*(long *)(this + 0x88) + 0xf8),(LocalSpace *)(this + 0x188));
  auVar8 = LocalAllocationBuffer::Close((LocalAllocationBuffer *)(this + 0x270));
  if ((auVar8._8_8_ != 0) && (auVar8._8_8_ == *(long *)(*(long *)(this + 0x90) + 0x68))) {
    *(long *)(*(long *)(this + 0x90) + 0x68) = auVar8._0_8_;
  }
  Worklist<v8::internal::MemoryChunk*,64>::FlushToGlobal
            (*(Worklist<v8::internal::MemoryChunk*,64> **)(this + 0x10),*(int *)(this + 0x18));
  Worklist<v8::internal::EphemeronHashTable,128>::FlushToGlobal
            (*(Worklist<v8::internal::EphemeronHashTable,128> **)(this + 0x40),*(int *)(this + 0x48)
            );
  for (plVar5 = *(long **)(this + 0x2c8); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    local_88 = plVar5[2];
    uStack_78 = 0;
    local_80 = (void *)0x0;
    uStack_68 = 0;
    local_70 = (void *)0x0;
    local_60 = 0x3f800000;
    lVar4 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<v8::internal::EphemeronHashTable>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>>>
            ::
            __emplace_unique_key_args<v8::internal::EphemeronHashTable,std::__ndk1::pair<v8::internal::EphemeronHashTable_const,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>>
                      (*(__hash_table<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<v8::internal::EphemeronHashTable>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>>>
                         **)(this + 8),(EphemeronHashTable *)&local_88,(pair *)&local_88);
    pvVar2 = local_80;
    puVar3 = local_70;
    while (puVar3 != (void *)0x0) {
      pvVar6 = (void *)*puVar3;
      local_80 = pvVar2;
      operator_delete(puVar3);
      pvVar2 = local_80;
      puVar3 = pvVar6;
    }
    local_80 = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    plVar7 = (long *)plVar5[5];
    if (plVar7 != (long *)0x0) {
      do {
        local_88 = CONCAT44(local_88._4_4_,(int)plVar7[2]);
        std::__ndk1::
        __hash_table<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>
        ::__emplace_unique_key_args<int,int_const&>
                  ((__hash_table<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>
                    *)(lVar4 + 0x18),(int *)&local_88,(int *)&local_88);
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

