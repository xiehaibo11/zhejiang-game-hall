
/* v8::internal::MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,
   v8::internal::MajorMarkingState>::VisitPointer(v8::internal::HeapObject,
   v8::internal::CompressedMaybeObjectSlot) */

void __thiscall
v8::internal::
MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
::VisitPointer(MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
               *this,undefined8 param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_3 < (uint *)0xfffffffffffffffc) {
    puVar1 = param_3 + 1;
    do {
      uVar2 = *param_3;
      uVar3 = (ulong)uVar2 & 3;
      if (uVar3 == 1) {
        ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>(this,param_2,param_3);
      }
      else if ((uVar2 != 3) && (uVar3 == 3)) {
        ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                  (this,param_2,param_3,
                   (ulong)param_3 & 0xffffffff00000000 | (ulong)uVar2 & 0xfffffffffffffffd);
      }
      param_3 = param_3 + 1;
    } while (param_3 < puVar1);
  }
  return;
}

