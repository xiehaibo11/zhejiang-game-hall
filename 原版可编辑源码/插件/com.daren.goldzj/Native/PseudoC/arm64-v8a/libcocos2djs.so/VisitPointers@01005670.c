
/* v8::internal::IterateAndScavengePromotedObjectsVisitor::VisitPointers(v8::internal::HeapObject,
   v8::internal::CompressedMaybeObjectSlot, v8::internal::CompressedMaybeObjectSlot) */

void __thiscall
v8::internal::IterateAndScavengePromotedObjectsVisitor::VisitPointers
          (IterateAndScavengePromotedObjectsVisitor *this,ulong param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  MemoryChunk *pMVar4;
  
  if (param_3 < param_4) {
    pMVar4 = (MemoryChunk *)(param_2 & 0xfffffffffffc0000);
    do {
      uVar1 = *param_3;
      if ((uVar1 != 3) && ((uVar1 & 1) != 0)) {
        uVar3 = (ulong)uVar1 & 0xfffffffffffc0000 | (ulong)param_3 & 0xffffffff00000000;
        if ((*(byte *)(uVar3 + 8) >> 3 & 1) == 0) {
          if ((this[0x10] != (IterateAndScavengePromotedObjectsVisitor)0x0) &&
             ((*(byte *)(uVar3 + 8) >> 6 & 1) != 0)) {
            RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                      (pMVar4,(ulong)param_3);
          }
        }
        else {
          iVar2 = Scavenger::ScavengeObject<v8::internal::CompressedHeapObjectSlot>
                            (*(Scavenger **)(this + 8),param_3);
          if (iVar2 == 0) {
            if (*(long *)(pMVar4 + 0x70) == 0) {
              RememberedSet<(v8::internal::RememberedSetType)0>::Insert<(v8::internal::AccessMode)0>
                        (pMVar4,(ulong)param_3);
            }
            else {
              RememberedSetSweeping::Insert<(v8::internal::AccessMode)0>(pMVar4,(ulong)param_3);
            }
          }
        }
      }
      param_3 = param_3 + 1;
    } while (param_3 < param_4);
  }
  return;
}

