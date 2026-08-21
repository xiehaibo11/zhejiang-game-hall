
/* v8::internal::MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,
   v8::internal::ConcurrentMarkingState>::VisitPointer(v8::internal::HeapObject,
   v8::internal::CompressedObjectSlot) */

void __thiscall
v8::internal::
MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>::
VisitPointer(MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
             *this,undefined8 param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_3 < (uint *)0xfffffffffffffffc) {
    puVar1 = param_3 + 1;
    uVar2 = *param_3;
    while( true ) {
      if ((uVar2 & 1) != 0) {
        ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                  (this,param_2,param_3,(ulong)param_3 & 0xffffffff00000000 | (ulong)uVar2);
      }
      param_3 = param_3 + 1;
      if (puVar1 <= param_3) break;
      uVar2 = *param_3;
    }
  }
  return;
}

