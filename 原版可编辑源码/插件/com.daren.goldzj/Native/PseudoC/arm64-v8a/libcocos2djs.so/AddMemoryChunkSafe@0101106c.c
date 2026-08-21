
/* v8::internal::MemoryAllocator::Unmapper::AddMemoryChunkSafe(v8::internal::MemoryChunk*) */

void __thiscall
v8::internal::MemoryAllocator::Unmapper::AddMemoryChunkSafe(Unmapper *this,MemoryChunk *param_1)

{
  Unmapper *this_00;
  MemoryChunk *local_18;
  
  local_18 = param_1;
  if (((byte)param_1[8] & 0x21) == 0) {
    base::Mutex::Lock((Mutex *)(this + 0x10));
    if (*(undefined8 **)(this + 0x40) != *(undefined8 **)(this + 0x48)) {
      **(undefined8 **)(this + 0x40) = param_1;
      *(long *)(this + 0x40) = *(long *)(this + 0x40) + 8;
      goto LAB_01011108;
    }
    this_00 = this + 0x38;
  }
  else {
    base::Mutex::Lock((Mutex *)(this + 0x10));
    if (*(undefined8 **)(this + 0x58) != *(undefined8 **)(this + 0x60)) {
      **(undefined8 **)(this + 0x58) = param_1;
      *(long *)(this + 0x58) = *(long *)(this + 0x58) + 8;
      goto LAB_01011108;
    }
    this_00 = this + 0x50;
  }
  std::__ndk1::vector<v8::internal::MemoryChunk*,std::__ndk1::allocator<v8::internal::MemoryChunk*>>
  ::__push_back_slow_path<v8::internal::MemoryChunk*const&>
            ((vector<v8::internal::MemoryChunk*,std::__ndk1::allocator<v8::internal::MemoryChunk*>>
              *)this_00,&local_18);
LAB_01011108:
  base::Mutex::Unlock((Mutex *)(this + 0x10));
  return;
}

