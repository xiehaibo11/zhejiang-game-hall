
/* v8::internal::CodeRangeAddressHint::NotifyFreedCodeRange(unsigned long, unsigned long) */

void __thiscall
v8::internal::CodeRangeAddressHint::NotifyFreedCodeRange
          (CodeRangeAddressHint *this,ulong param_1,ulong param_2)

{
  long lVar1;
  ulong local_40;
  ulong auStack_38 [2];
  undefined1 *local_28;
  
  local_40 = param_2;
  auStack_38[0] = param_1;
  base::Mutex::Lock((Mutex *)this);
  local_28 = (undefined1 *)&local_40;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>>>>
          ::
          __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
                    ((ulong *)(this + 0x28),(piecewise_construct_t *)&local_40,
                     (tuple *)&DAT_019c7168,(tuple *)&local_28);
  if (*(ulong **)(lVar1 + 0x20) == *(ulong **)(lVar1 + 0x28)) {
    std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>::
    __push_back_slow_path<unsigned_long_const&>
              ((vector<unsigned_long,std::__ndk1::allocator<unsigned_long>> *)(lVar1 + 0x18),
               auStack_38);
  }
  else {
    **(ulong **)(lVar1 + 0x20) = param_1;
    *(long *)(lVar1 + 0x20) = *(long *)(lVar1 + 0x20) + 8;
  }
  base::Mutex::Unlock((Mutex *)this);
  return;
}

