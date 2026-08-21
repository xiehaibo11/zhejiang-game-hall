
/* v8::internal::Heap::MergeAllocationSitePretenuringFeedback(std::__ndk1::unordered_map<v8::internal::AllocationSite,
   unsigned long, v8::internal::Object::Hasher, std::__ndk1::equal_to<v8::internal::AllocationSite>,
   std::__ndk1::allocator<std::__ndk1::pair<v8::internal::AllocationSite const, unsigned long> > >
   const&) */

void __thiscall
v8::internal::Heap::MergeAllocationSitePretenuringFeedback(Heap *this,unordered_map *param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong local_40 [2];
  
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 != (long *)0x0) {
    do {
      local_40[0] = plVar3[2];
      if ((*(uint *)(local_40[0] - 1) & 1) == 0) {
        local_40[0] = (local_40[0] & 0xffffffff00000000 | (ulong)*(uint *)(local_40[0] - 1)) + 1;
      }
      if (((*(short *)((local_40[0] & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_40[0] - 1))
            == 0x55) && (uVar2 = *(uint *)(local_40[0] + 0xf), (uVar2 & 0x1c000000) != 0x10000000))
         && (uVar1 = (uVar2 & 0x3ffffff) + (int)plVar3[3],
            *(uint *)(local_40[0] + 0xf) = uVar1 | uVar2 & 0xfc000000, 99 < (uVar1 & 0x3fffffc))) {
        local_40[1] = 0;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
        ::
        __emplace_unique_key_args<v8::internal::AllocationSite,std::__ndk1::pair<v8::internal::AllocationSite,int>>
                  ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
                    *)(this + 0x898),(AllocationSite *)local_40,(pair *)local_40);
      }
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
  }
  return;
}

