
/* v8::internal::CodeLargeObjectSpace::InsertChunkMapEntries(v8::internal::LargePage*) */

void __thiscall
v8::internal::CodeLargeObjectSpace::InsertChunkMapEntries
          (CodeLargeObjectSpace *this,LargePage *param_1)

{
  long lVar1;
  LargePage *local_48 [2];
  LargePage **local_38;
  
  if (param_1 < param_1 + *(long *)param_1) {
    local_48[0] = param_1;
    do {
      local_38 = local_48;
      lVar1 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>>>
              ::
              __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
                        ((ulong *)(this + 0x80),(piecewise_construct_t *)local_48,
                         (tuple *)&DAT_019c7168,(tuple *)&local_38);
      *(LargePage **)(lVar1 + 0x18) = param_1;
      local_48[0] = local_48[0] + 0x40000;
    } while (local_48[0] < param_1 + *(long *)param_1);
  }
  return;
}

