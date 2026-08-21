
/* v8::internal::Debug::TemporaryObjectsTracker::AllocationEvent(unsigned long, int) */

void v8::internal::Debug::TemporaryObjectsTracker::AllocationEvent(ulong param_1,int param_2)

{
  ulong local_18;
  
  local_18 = (ulong)(uint)param_2;
  std::__ndk1::
  __hash_table<unsigned_long,std::__ndk1::hash<unsigned_long>,std::__ndk1::equal_to<unsigned_long>,std::__ndk1::allocator<unsigned_long>>
  ::__emplace_unique_key_args<unsigned_long,unsigned_long_const&>
            ((__hash_table<unsigned_long,std::__ndk1::hash<unsigned_long>,std::__ndk1::equal_to<unsigned_long>,std::__ndk1::allocator<unsigned_long>>
              *)(param_1 + 8),&local_18,&local_18);
  return;
}

