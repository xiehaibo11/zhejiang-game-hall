
/* void 
   v8::internal::PrototypeInfo::BodyDescriptor::IterateBody<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>
   >(v8::internal::Map, v8::internal::HeapObject, int,
   v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>*) */

void v8::internal::PrototypeInfo::BodyDescriptor::
     IterateBody<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>>
               (undefined8 param_1,long param_2,int param_3,
               MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
               *param_4)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  
  puVar4 = (uint *)(param_2 + 0x13);
  for (puVar1 = (uint *)(param_2 + 3); puVar1 < puVar4; puVar1 = puVar1 + 1) {
    if ((*puVar1 & 1) != 0) {
      MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
      ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                (param_4,param_2,puVar1,(ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1);
    }
  }
  puVar1 = (uint *)(param_2 + 0x17);
  if (puVar4 < (uint *)0xfffffffffffffffc) {
    do {
      uVar2 = *puVar4;
      uVar3 = (ulong)uVar2 & 3;
      if (uVar3 == 1) {
        MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
        ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>(param_4,param_2,puVar4);
      }
      else if ((uVar2 != 3) && (uVar3 == 3)) {
        MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
        ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                  (param_4,param_2,puVar4,
                   (ulong)puVar4 & 0xffffffff00000000 | (ulong)uVar2 & 0xfffffffffffffffd);
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 < puVar1);
  }
  for (; puVar1 < (uint *)(param_2 + -1 + (long)param_3); puVar1 = puVar1 + 1) {
    if ((*puVar1 & 1) != 0) {
      MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
      ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                (param_4,param_2,puVar1,(ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1);
    }
  }
  return;
}

