
/* void 
   v8::internal::BodyDescriptorBase::IterateJSObjectBodyImpl<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>
   >(v8::internal::Map, v8::internal::HeapObject, int, int,
   v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>*) */

void v8::internal::BodyDescriptorBase::
     IterateJSObjectBodyImpl<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>>
               (long param_1,long param_2,int param_3,int param_4,
               MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
               *param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  if (*(short *)(param_1 + 7) == 0x421) {
    iVar4 = 0xc;
  }
  else {
    iVar4 = JSObject::GetHeaderSize(*(short *)(param_1 + 7),*(char *)(param_1 + 9) < '\0');
  }
  lVar5 = param_2 + -1;
  lVar7 = (ulong)*(byte *)(param_1 + 4) * 4;
  iVar6 = (int)lVar7;
  if (iVar4 < iVar6) {
    lVar8 = (long)iVar4;
    for (puVar1 = (uint *)(lVar5 + param_3); puVar1 < (uint *)(lVar5 + lVar8); puVar1 = puVar1 + 1)
    {
      if ((*puVar1 & 1) != 0) {
        MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
        ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                  (param_5,param_2,puVar1,(ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1);
      }
    }
    do {
      puVar1 = (uint *)(lVar5 + lVar8);
      if (puVar1 < (uint *)0xfffffffffffffffc) {
        puVar2 = puVar1 + 1;
        uVar3 = *puVar1;
        while( true ) {
          if ((uVar3 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      (param_5,param_2,puVar1,(ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3);
          }
          puVar1 = puVar1 + 1;
          if (puVar2 <= puVar1) break;
          uVar3 = *puVar1;
        }
      }
      lVar8 = lVar8 + 8;
      param_3 = iVar6;
    } while (lVar8 < lVar7);
  }
  for (puVar1 = (uint *)(lVar5 + param_3); puVar1 < (uint *)(lVar5 + param_4); puVar1 = puVar1 + 1)
  {
    if ((*puVar1 & 1) != 0) {
      MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
      ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                (param_5,param_2,puVar1,(ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1);
    }
  }
  return;
}

