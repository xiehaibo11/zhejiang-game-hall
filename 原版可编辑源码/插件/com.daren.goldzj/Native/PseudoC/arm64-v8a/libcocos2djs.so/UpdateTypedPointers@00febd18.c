
/* v8::internal::RememberedSetUpdatingItem<v8::internal::MajorNonAtomicMarkingState,
   (v8::internal::GarbageCollector)1>::UpdateTypedPointers() */

void __thiscall
v8::internal::
RememberedSetUpdatingItem<v8::internal::MajorNonAtomicMarkingState,(v8::internal::GarbageCollector)1>
::UpdateTypedPointers
          (RememberedSetUpdatingItem<v8::internal::MajorNonAtomicMarkingState,(v8::internal::GarbageCollector)1>
           *this)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  MemoryChunk *pMVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  RememberedSetUpdatingItem<v8::internal::MajorNonAtomicMarkingState,(v8::internal::GarbageCollector)1>
  *local_58;
  
  if (*(long *)(*(long *)(this + 0x20) + 0x78) != 0) {
    if (*(long *)(*(long *)(this + 0x10) + 0x100) == *(long *)(*(long *)(this + 0x20) + 0x58))
    goto LAB_00febec0;
    pMVar5 = *(MemoryChunk **)(this + 0x20);
    lVar6 = *(long *)(pMVar5 + 0x78);
    if (lVar6 != 0) {
      plVar7 = *(long **)(lVar6 + 8);
      if (plVar7 != (long *)0x0) {
        iVar8 = 0;
        do {
          puVar2 = (uint *)plVar7[2];
          for (puVar1 = (uint *)plVar7[1]; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            uVar3 = *puVar1 >> 0x1d;
            if (uVar3 != 5) {
              iVar4 = UpdateTypedSlotHelper::
                      UpdateTypedSlot<v8::internal::RememberedSetUpdatingItem<v8::internal::MajorNonAtomicMarkingState,(v8::internal::GarbageCollector)1>::UpdateTypedPointers()::_lambda(v8::internal::FullMaybeObjectSlot)_1_>
                                (*(undefined8 *)(this + 0x10),uVar3,
                                 *(long *)(lVar6 + 0x18) + ((ulong)*puVar1 & 0x1fffffff),this);
              if (iVar4 == 0) {
                iVar8 = iVar8 + 1;
              }
              else {
                *puVar1 = 0xa0000000;
              }
            }
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
        if (iVar8 != 0) goto LAB_00febde8;
      }
      MemoryChunk::ReleaseTypedSlotSet<(v8::internal::RememberedSetType)0>(pMVar5);
    }
  }
LAB_00febde8:
  if ((*(int *)(this + 0x28) == 0) && (*(long *)(*(long *)(this + 0x20) + 0x80) != 0)) {
    if (*(long *)(*(long *)(this + 0x10) + 0x100) == *(long *)(*(long *)(this + 0x20) + 0x58)) {
LAB_00febec0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","chunk_->owner() != heap_->map_space()");
    }
    pMVar5 = *(MemoryChunk **)(this + 0x20);
    lVar6 = *(long *)(pMVar5 + 0x80);
    if (lVar6 != 0) {
      plVar7 = *(long **)(lVar6 + 8);
      local_58 = this;
      if (plVar7 != (long *)0x0) {
        iVar8 = 0;
        do {
          puVar2 = (uint *)plVar7[2];
          for (puVar1 = (uint *)plVar7[1]; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            uVar3 = *puVar1 >> 0x1d;
            if (uVar3 != 5) {
              iVar4 = UpdateTypedPointers()::{lambda(v8::internal::SlotType,unsigned_long)#2}::
                      operator()((_lambda_v8__internal__SlotType_unsigned_long__2_ *)&local_58,uVar3
                                 ,*(long *)(lVar6 + 0x18) + ((ulong)*puVar1 & 0x1fffffff));
              if (iVar4 == 0) {
                iVar8 = iVar8 + 1;
              }
              else {
                *puVar1 = 0xa0000000;
              }
            }
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
        if (iVar8 != 0) {
          return;
        }
      }
      MemoryChunk::ReleaseTypedSlotSet<(v8::internal::RememberedSetType)1>(pMVar5);
    }
  }
  return;
}

