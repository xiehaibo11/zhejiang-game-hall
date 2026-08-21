
/* v8::internal::Heap::UnprotectAndRegisterMemoryChunk(v8::internal::MemoryChunk*) */

void __thiscall v8::internal::Heap::UnprotectAndRegisterMemoryChunk(Heap *this,MemoryChunk *param_1)

{
  ulong extraout_x1;
  MemoryChunk *local_28;
  
  if (this[0xba0] != (Heap)0x0) {
    local_28 = param_1;
    base::Mutex::Lock((Mutex *)(this + 0xb50));
    std::__ndk1::
    __hash_table<v8::internal::MemoryChunk*,std::__ndk1::hash<v8::internal::MemoryChunk*>,std::__ndk1::equal_to<v8::internal::MemoryChunk*>,std::__ndk1::allocator<v8::internal::MemoryChunk*>>
    ::__emplace_unique_key_args<v8::internal::MemoryChunk*,v8::internal::MemoryChunk*const&>
              ((__hash_table<v8::internal::MemoryChunk*,std::__ndk1::hash<v8::internal::MemoryChunk*>,std::__ndk1::equal_to<v8::internal::MemoryChunk*>,std::__ndk1::allocator<v8::internal::MemoryChunk*>>
                *)(this + 0xb78),&local_28,&local_28);
    if ((extraout_x1 & 1) != 0) {
      MemoryChunk::SetReadAndWritable(local_28);
    }
    base::Mutex::Unlock((Mutex *)(this + 0xb50));
  }
  return;
}

