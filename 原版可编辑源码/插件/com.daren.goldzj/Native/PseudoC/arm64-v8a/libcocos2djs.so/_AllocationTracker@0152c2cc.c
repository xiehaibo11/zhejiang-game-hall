
/* v8::internal::AllocationTracker::~AllocationTracker() */

void __thiscall v8::internal::AllocationTracker::~AllocationTracker(AllocationTracker *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  puVar2 = *(undefined8 **)(this + 0x180);
  for (puVar1 = *(undefined8 **)(this + 0x178); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    puVar4 = (undefined8 *)*puVar1;
    if (puVar4 != (undefined8 *)0x0) {
      if ((ulong *)*puVar4 != (ulong *)0x0) {
        GlobalHandles::Destroy((ulong *)*puVar4);
      }
      operator_delete(puVar4);
    }
  }
  puVar2 = *(undefined8 **)(this + 0x150);
  for (puVar1 = *(undefined8 **)(this + 0x148); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    if ((void *)*puVar1 != (void *)0x0) {
      operator_delete((void *)*puVar1);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_long,v8::internal::AddressToTraceMap::RangeStack>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::AddressToTraceMap::RangeStack>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,v8::internal::AddressToTraceMap::RangeStack>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::AddressToTraceMap::RangeStack>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::AddressToTraceMap::RangeStack>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,v8::internal::AddressToTraceMap::RangeStack>>>
             *)(this + 0x198),*(__tree_node **)(this + 0x1a0));
  pvVar3 = *(void **)(this + 0x178);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x180) = pvVar3;
    operator_delete(pvVar3);
  }
  free(*(void **)(this + 0x160));
  pvVar3 = *(void **)(this + 0x148);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x150) = pvVar3;
    operator_delete(pvVar3);
  }
  AllocationTraceNode::~AllocationTraceNode((AllocationTraceNode *)(this + 0x18));
  return;
}

