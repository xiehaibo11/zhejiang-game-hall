
/* v8::internal::SamplingHeapProfiler::~SamplingHeapProfiler() */

void __thiscall
v8::internal::SamplingHeapProfiler::~SamplingHeapProfiler(SamplingHeapProfiler *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  
  Heap::RemoveAllocationObserversFromAllSpaces
            (*(Heap **)(this + 8),(AllocationObserver *)(this + 0x20),
             (AllocationObserver *)(this + 0x20));
  puVar1 = *(void **)(this + 0xc0);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)puVar1[3];
    pvVar3 = (void *)*puVar1;
    puVar1[3] = 0;
    if (pvVar2 != (void *)0x0) {
      if (*(ulong **)((long)pvVar2 + 0x10) != (ulong *)0x0) {
        v8::V8::DisposeGlobal(*(ulong **)((long)pvVar2 + 0x10));
      }
      operator_delete(pvVar2);
    }
    operator_delete(puVar1);
    puVar1 = pvVar3;
  }
  pvVar2 = *(void **)(this + 0xb0);
  *(undefined8 *)(this + 0xb0) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>>>
             *)(this + 0x78),*(__tree_node **)(this + 0x80));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
             *)(this + 0x60),*(__tree_node **)(this + 0x68));
  return;
}

