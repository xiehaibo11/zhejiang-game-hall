
/* v8::internal::UnreachableObjectsFilter::MarkingVisitor::VisitPointers(v8::internal::HeapObject,
   v8::internal::CompressedMaybeObjectSlot, v8::internal::CompressedMaybeObjectSlot) */

void __thiscall
v8::internal::UnreachableObjectsFilter::MarkingVisitor::VisitPointers
          (MarkingVisitor *this,undefined8 param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_28;
  
  if (param_3 < param_4) {
    do {
      uVar1 = *param_3;
      if ((uVar1 != 3) && ((uVar1 & 1) != 0)) {
        uVar3 = (ulong)uVar1 & 0xfffffffffffffffd | (ulong)param_3 & 0xffffffff00000000;
        local_28 = uVar3;
        uVar2 = MarkAsReachable(*(UnreachableObjectsFilter **)(this + 0x10),uVar3);
        if ((uVar2 & 1) != 0) {
          if (*(ulong **)(this + 0x20) == *(ulong **)(this + 0x28)) {
            std::__ndk1::
            vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>::
            __push_back_slow_path<v8::internal::HeapObject_const&>
                      ((vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>
                        *)(this + 0x18),(HeapObject *)&local_28);
          }
          else {
            **(ulong **)(this + 0x20) = uVar3;
            *(long *)(this + 0x20) = *(long *)(this + 0x20) + 8;
          }
        }
      }
      param_3 = param_3 + 1;
    } while (param_3 < param_4);
  }
  return;
}

