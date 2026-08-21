
/* v8::internal::UnreachableObjectsFilter::MarkingVisitor::VisitRootPointers(v8::internal::Root,
   char const*, v8::internal::FullObjectSlot, v8::internal::FullObjectSlot) */

void __thiscall
v8::internal::UnreachableObjectsFilter::MarkingVisitor::VisitRootPointers
          (MarkingVisitor *this,undefined8 param_2,undefined8 param_3,ulong *param_4,ulong *param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_28;
  
  if (param_4 < param_5) {
    uVar2 = *param_4;
    while( true ) {
      if (((uVar2 & 1) != 0) &&
         (local_28 = uVar2,
         uVar1 = MarkAsReachable(*(UnreachableObjectsFilter **)(this + 0x10),uVar2),
         (uVar1 & 1) != 0)) {
        if (*(ulong **)(this + 0x20) == *(ulong **)(this + 0x28)) {
          std::__ndk1::
          vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>::
          __push_back_slow_path<v8::internal::HeapObject_const&>
                    ((vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>
                      *)(this + 0x18),(HeapObject *)&local_28);
        }
        else {
          **(ulong **)(this + 0x20) = uVar2;
          *(long *)(this + 0x20) = *(long *)(this + 0x20) + 8;
        }
      }
      param_4 = param_4 + 1;
      if (param_5 <= param_4) break;
      uVar2 = *param_4;
    }
  }
  return;
}

