
/* int 
   v8::internal::ConcurrentMarkingVisitor::VisitLeftTrimmableArray<v8::internal::FixedArray>(v8::internal::Map,
   v8::internal::FixedArray) */

int __thiscall
v8::internal::ConcurrentMarkingVisitor::VisitLeftTrimmableArray<v8::internal::FixedArray>
          (ConcurrentMarkingVisitor *this,undefined8 param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  uint *puVar5;
  
  uVar2 = *(uint *)(param_3 + 3U);
  uVar3 = ShouldVisit(this,param_3);
  if ((uVar3 & 1) == 0) {
    iVar4 = 0;
  }
  else {
    puVar5 = (uint *)(param_3 + -1);
    iVar4 = (uVar2 & 0x7ffffffe) * 2 + 8;
    if (puVar5 < (uint *)0xfffffffffffffffc) {
      uVar2 = *puVar5;
      puVar1 = puVar5;
      while( true ) {
        if ((uVar2 & 1) != 0) {
          MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                      *)this,param_3,puVar1,(ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar2);
        }
        puVar1 = puVar1 + 1;
        if ((uint *)(param_3 + 3U) <= puVar1) break;
        uVar2 = *puVar1;
      }
    }
    for (puVar1 = (uint *)(param_3 + 7); puVar1 < (uint *)((long)puVar5 + (long)iVar4);
        puVar1 = puVar1 + 1) {
      if ((*puVar1 & 1) != 0) {
        MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
        ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                  ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                    *)this,param_3,puVar1,(ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1);
      }
    }
  }
  return iVar4;
}

