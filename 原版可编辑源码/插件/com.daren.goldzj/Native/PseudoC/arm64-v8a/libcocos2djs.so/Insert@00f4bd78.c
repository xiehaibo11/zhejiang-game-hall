
/* v8::internal::Isolate::ThreadDataTable::Insert(v8::internal::Isolate::PerIsolateThreadData*) */

void __thiscall
v8::internal::Isolate::ThreadDataTable::Insert(ThreadDataTable *this,PerIsolateThreadData *param_1)

{
  ulong extraout_x1;
  ulong local_20;
  PerIsolateThreadData *pPStack_18;
  
  local_20 = (ulong)*(uint *)(param_1 + 8);
  pPStack_18 = param_1;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>,std::__ndk1::__unordered_map_hasher<v8::internal::ThreadId,std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>,v8::internal::Isolate::ThreadDataTable::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::ThreadId,std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>,std::__ndk1::equal_to<v8::internal::ThreadId>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>>>
  ::
  __emplace_unique_key_args<v8::internal::ThreadId,std::__ndk1::pair<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>>
            ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>,std::__ndk1::__unordered_map_hasher<v8::internal::ThreadId,std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>,v8::internal::Isolate::ThreadDataTable::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::ThreadId,std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>,std::__ndk1::equal_to<v8::internal::ThreadId>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>>>
              *)this,(ThreadId *)&local_20,(pair *)&local_20);
  if ((extraout_x1 & 1) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","inserted");
}

