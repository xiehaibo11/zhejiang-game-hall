
/* std::__ndk1::__tree<v8::base::RegionAllocator::Region*,
   v8::base::RegionAllocator::SizeAddressOrder,
   std::__ndk1::allocator<v8::base::RegionAllocator::Region*>
   >::destroy(std::__ndk1::__tree_node<v8::base::RegionAllocator::Region*, void*>*) */

void __thiscall
std::__ndk1::
__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
::destroy(__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    operator_delete(param_1);
    return;
  }
  return;
}

