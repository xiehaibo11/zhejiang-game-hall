
/* std::__ndk1::__tree<std::__ndk1::__value_type<unsigned long,
   std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,
   std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode> > >,
   std::__ndk1::__map_value_compare<unsigned long, std::__ndk1::__value_type<unsigned long,
   std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,
   std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode> > >,
   std::__ndk1::less<unsigned long>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<unsigned long,
   std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,
   std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode> > > >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned long,
   std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,
   std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode> > >, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>>>
::destroy(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>>>
          *this,__tree_node *param_1)

{
  __tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
  *this_00;
  
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    this_00 = *(__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
                **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (this_00 !=
        (__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
         *)0x0) {
      destroy((__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>>>
               *)(this_00 + 0x18),*(__tree_node **)(this_00 + 0x20));
      __tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
      ::destroy(this_00,*(__tree_node **)(this_00 + 8));
      operator_delete(this_00);
    }
    operator_delete(param_1);
    return;
  }
  return;
}

