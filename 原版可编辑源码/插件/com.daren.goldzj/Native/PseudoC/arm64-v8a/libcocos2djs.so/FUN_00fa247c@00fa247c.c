
void FUN_00fa247c(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  long local_30;
  long local_28;
  
  local_30 = *param_2;
  lVar2 = *(long *)(param_1 + 0x18);
  cVar1 = v8::internal::AllocationSite::GetAllocationType((AllocationSite *)&local_30);
  if (*(char *)(param_1 + 0x10) == cVar1) {
    v8::internal::AllocationSite::ResetPretenureDecision((AllocationSite *)&local_30);
    *(uint *)(local_30 + 0xf) = *(uint *)(local_30 + 0xf) | 0x20000000;
    **(undefined1 **)(param_1 + 8) = 1;
    local_28 = local_30;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
    ::__erase_unique<v8::internal::AllocationSite>
              ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
                *)(lVar2 + 0x898),(AllocationSite *)&local_28);
  }
  return;
}

