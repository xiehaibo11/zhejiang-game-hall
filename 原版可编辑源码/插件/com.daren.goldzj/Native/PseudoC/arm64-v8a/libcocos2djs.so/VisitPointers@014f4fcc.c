
/* v8::internal::MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,
   v8::internal::ConcurrentMarkingState>::VisitPointers(v8::internal::HeapObject,
   v8::internal::CompressedMaybeObjectSlot, v8::internal::CompressedMaybeObjectSlot) */

void __thiscall
v8::internal::
MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>::
VisitPointers(MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              *this,undefined8 param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  ulong uVar2;
  
  for (; param_3 < param_4; param_3 = param_3 + 1) {
    uVar1 = *param_3;
    uVar2 = (ulong)uVar1 & 3;
    if (uVar2 == 1) {
      ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>(this,param_2,param_3);
    }
    else if ((uVar1 != 3) && (uVar2 == 3)) {
      ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                (this,param_2,param_3,
                 (ulong)param_3 & 0xffffffff00000000 | (ulong)uVar1 & 0xfffffffffffffffd);
    }
  }
  return;
}

