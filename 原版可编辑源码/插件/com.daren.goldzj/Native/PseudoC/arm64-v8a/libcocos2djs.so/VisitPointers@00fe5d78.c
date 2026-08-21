
/* v8::internal::MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,
   v8::internal::MajorMarkingState>::VisitPointers(v8::internal::HeapObject,
   v8::internal::CompressedObjectSlot, v8::internal::CompressedObjectSlot) */

void __thiscall
v8::internal::
MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
::VisitPointers(MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                *this,undefined8 param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  
  if (param_3 < param_4) {
    uVar1 = *param_3;
    while( true ) {
      if ((uVar1 & 1) != 0) {
        ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                  (this,param_2,param_3,(ulong)param_3 & 0xffffffff00000000 | (ulong)uVar1);
      }
      param_3 = param_3 + 1;
      if (param_4 <= param_3) break;
      uVar1 = *param_3;
    }
  }
  return;
}

