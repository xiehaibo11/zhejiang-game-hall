
/* std::__ndk1::__tree<std::__ndk1::__value_type<unsigned int,
   v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState const*> >,
   std::__ndk1::__map_value_compare<unsigned int, std::__ndk1::__value_type<unsigned int,
   v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState const*> >,
   std::__ndk1::less<unsigned int>, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned int,
   v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState const*> > >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned int,
   v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState const*> >,
   void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_int,v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState_const*>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState_const*>>,std::__ndk1::less<unsigned_int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_int,v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState_const*>>>>
::destroy(__tree<std::__ndk1::__value_type<unsigned_int,v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState_const*>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState_const*>>,std::__ndk1::less<unsigned_int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_int,v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState_const*>>>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    if (*(long *)(param_1 + 0x28) != 0) {
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    }
  }
  return;
}

