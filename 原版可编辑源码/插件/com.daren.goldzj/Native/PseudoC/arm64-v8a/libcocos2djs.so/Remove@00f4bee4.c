
/* v8::internal::Isolate::ThreadDataTable::Remove(v8::internal::Isolate::PerIsolateThreadData*) */

void __thiscall
v8::internal::Isolate::ThreadDataTable::Remove(ThreadDataTable *this,PerIsolateThreadData *param_1)

{
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>,std::__ndk1::__unordered_map_hasher<v8::internal::ThreadId,std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>,v8::internal::Isolate::ThreadDataTable::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::ThreadId,std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>,std::__ndk1::equal_to<v8::internal::ThreadId>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>>>
  ::__erase_unique<v8::internal::ThreadId>
            ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>,std::__ndk1::__unordered_map_hasher<v8::internal::ThreadId,std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>,v8::internal::Isolate::ThreadDataTable::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::ThreadId,std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>,std::__ndk1::equal_to<v8::internal::ThreadId>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>>>
              *)this,param_1 + 8);
  if (param_1 != (PerIsolateThreadData *)0x0) {
    operator_delete(param_1);
    return;
  }
  return;
}

