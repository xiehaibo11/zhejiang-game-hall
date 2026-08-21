
/* v8::base::RegionAllocator::Split(v8::base::RegionAllocator::Region*, unsigned long) */

Region * __thiscall
v8::base::RegionAllocator::Split(RegionAllocator *this,Region *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  Region RVar3;
  Region *local_40;
  Region *local_38;
  
  RVar3 = param_1[0x10];
  local_40 = operator_new(0x18);
  lVar1 = *(long *)param_1;
  lVar2 = *(long *)(param_1 + 8);
  local_40[0x10] = RVar3;
  *(ulong *)local_40 = lVar1 + param_2;
  *(ulong *)(local_40 + 8) = lVar2 - param_2;
  if (RVar3 == (Region)0x0) {
    FreeListRemoveRegion(this,param_1);
    *(ulong *)(param_1 + 8) = param_2;
    std::__ndk1::
    __tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::AddressEndOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
    ::
    __emplace_unique_key_args<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::Region*const&>
              ((__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::AddressEndOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
                *)(this + 0x38),&local_40,&local_40);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + *(long *)(param_1 + 8);
    local_38 = param_1;
    std::__ndk1::
    __tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
    ::
    __emplace_unique_key_args<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::Region*const&>
              ((__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
                *)(this + 0x50),&local_38,&local_38);
    local_38 = local_40;
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + *(long *)(local_40 + 8);
    std::__ndk1::
    __tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
    ::
    __emplace_unique_key_args<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::Region*const&>
              ((__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
                *)(this + 0x50),&local_38,&local_38);
  }
  else {
    *(ulong *)(param_1 + 8) = param_2;
    std::__ndk1::
    __tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::AddressEndOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
    ::
    __emplace_unique_key_args<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::Region*const&>
              ((__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::AddressEndOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
                *)(this + 0x38),&local_40,&local_40);
  }
  return local_40;
}

