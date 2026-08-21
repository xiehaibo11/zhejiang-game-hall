
/* v8::base::RegionAllocator::FreeListAddRegion(v8::base::RegionAllocator::Region*) */

void __thiscall v8::base::RegionAllocator::FreeListAddRegion(RegionAllocator *this,Region *param_1)

{
  Region *local_18;
  
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + *(long *)(param_1 + 8);
  local_18 = param_1;
  std::__ndk1::
  __tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
  ::
  __emplace_unique_key_args<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::Region*const&>
            ((__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
              *)(this + 0x50),&local_18,&local_18);
  return;
}

