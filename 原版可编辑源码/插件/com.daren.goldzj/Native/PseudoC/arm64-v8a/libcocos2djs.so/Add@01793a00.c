
/* v8::internal::compiler::MemoryLowering::AllocationGroup::Add(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::MemoryLowering::AllocationGroup::Add(AllocationGroup *this,Node *param_1)

{
  uint local_14;
  
  local_14 = *(uint *)(param_1 + 0x14) & 0xffffff;
  std::__ndk1::
  __tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>::
  __emplace_unique_key_args<unsigned_int,unsigned_int>
            ((__tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>
              *)this,&local_14,&local_14);
  return;
}

