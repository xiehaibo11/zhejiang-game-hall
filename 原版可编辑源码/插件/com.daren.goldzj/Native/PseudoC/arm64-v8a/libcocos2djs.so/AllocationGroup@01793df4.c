
/* v8::internal::compiler::MemoryLowering::AllocationGroup::AllocationGroup(v8::internal::compiler::Node*,
   v8::internal::AllocationType, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::MemoryLowering::AllocationGroup::AllocationGroup
          (AllocationGroup *this,long param_1,AllocationGroup param_3,undefined8 param_4)

{
  uint local_14;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = param_4;
  *(undefined8 *)(this + 0x18) = 0;
  this[0x20] = param_3;
  *(AllocationGroup **)this = this + 8;
  *(undefined8 *)(this + 0x28) = 0;
  local_14 = *(uint *)(param_1 + 0x14) & 0xffffff;
  std::__ndk1::
  __tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>::
  __emplace_unique_key_args<unsigned_int,unsigned_int>
            ((__tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>
              *)this,&local_14,&local_14);
  return;
}

