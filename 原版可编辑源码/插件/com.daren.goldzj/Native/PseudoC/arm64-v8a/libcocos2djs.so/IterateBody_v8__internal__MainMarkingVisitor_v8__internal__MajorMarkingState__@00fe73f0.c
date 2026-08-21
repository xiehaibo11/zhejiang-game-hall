
/* void 
   v8::internal::FeedbackVector::BodyDescriptor::IterateBody<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>
   >(v8::internal::Map, v8::internal::HeapObject, int,
   v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>*) */

void v8::internal::FeedbackVector::BodyDescriptor::
     IterateBody<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>>
               (undefined8 param_1,long param_2,int param_3,
               MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
               *param_4)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = (uint *)(param_2 + 3);
  puVar4 = (uint *)(param_2 + 7);
  if (puVar3 < (uint *)0xfffffffffffffffc) {
    do {
      if ((*puVar3 & 1) != 0) {
        MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
        ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                  (param_4,param_2,puVar3,(ulong)puVar3 & 0xffffffff00000000 | (ulong)*puVar3);
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < puVar4);
  }
  puVar3 = (uint *)(param_2 + 0xb);
  if (puVar4 < (uint *)0xfffffffffffffffc) {
    do {
      uVar1 = *puVar4;
      uVar2 = (ulong)uVar1 & 3;
      if (uVar2 == 1) {
        MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
        ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>(param_4,param_2,puVar4);
      }
      else if ((uVar1 != 3) && (uVar2 == 3)) {
        MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
        ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                  (param_4,param_2,puVar4,
                   (ulong)puVar4 & 0xffffffff00000000 | (ulong)uVar1 & 0xfffffffffffffffd);
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 < puVar3);
  }
  if (puVar3 < (uint *)0xfffffffffffffffc) {
    uVar1 = *puVar3;
    while( true ) {
      if ((uVar1 & 1) != 0) {
        MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
        ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                  (param_4,param_2,puVar3,(ulong)puVar3 & 0xffffffff00000000 | (ulong)uVar1);
      }
      puVar3 = puVar3 + 1;
      if ((uint *)(param_2 + 0xfU) <= puVar3) break;
      uVar1 = *puVar3;
    }
  }
  puVar4 = (uint *)(param_2 + 0x1f);
  puVar3 = (uint *)(param_2 + -1 + (long)param_3);
  do {
    if (puVar3 <= puVar4) {
      return;
    }
    while( true ) {
      uVar1 = *puVar4;
      uVar2 = (ulong)uVar1 & 3;
      if (uVar2 == 1) break;
      if ((uVar1 != 3) && (uVar2 == 3)) {
        MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
        ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                  (param_4,param_2,puVar4,
                   (ulong)puVar4 & 0xffffffff00000000 | (ulong)uVar1 & 0xfffffffffffffffd);
      }
      puVar4 = puVar4 + 1;
      if (puVar3 <= puVar4) {
        return;
      }
    }
    MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
    ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>(param_4,param_2,puVar4);
    puVar4 = puVar4 + 1;
  } while( true );
}

