
/* v8::internal::CodeLargeObjectSpace::RemoveChunkMapEntries(v8::internal::LargePage*) */

void __thiscall
v8::internal::CodeLargeObjectSpace::RemoveChunkMapEntries
          (CodeLargeObjectSpace *this,LargePage *param_1)

{
  LargePage *local_28;
  
  if (param_1 < param_1 + *(long *)param_1) {
    local_28 = param_1;
    do {
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>>>
      ::__erase_unique<unsigned_long>
                ((__hash_table<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>>>
                  *)(this + 0x80),(ulong *)&local_28);
      local_28 = local_28 + 0x40000;
    } while (local_28 < param_1 + *(long *)param_1);
  }
  return;
}

