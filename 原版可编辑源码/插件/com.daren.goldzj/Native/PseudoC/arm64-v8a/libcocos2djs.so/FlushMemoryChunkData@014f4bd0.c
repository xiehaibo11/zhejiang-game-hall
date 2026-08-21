
/* v8::internal::ConcurrentMarking::FlushMemoryChunkData(v8::internal::MajorNonAtomicMarkingState*)
    */

void v8::internal::ConcurrentMarking::FlushMemoryChunkData(MajorNonAtomicMarkingState *param_1)

{
  bool bVar1;
  MemoryChunk *this;
  undefined8 *puVar2;
  TypedSlotSet *this_00;
  long lVar3;
  long lVar4;
  TypedSlots *pTVar5;
  long lVar6;
  MajorNonAtomicMarkingState *pMVar7;
  long *plVar8;
  void *pvVar9;
  
  if (0 < *(int *)(param_1 + 0x4d8)) {
    lVar6 = 1;
    do {
      pMVar7 = param_1 + lVar6 * 0x80 + 0x40;
      for (plVar8 = *(long **)pMVar7; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        this = (MemoryChunk *)plVar8[2];
        if (plVar8[3] != 0) {
          *(long *)(this + 0x68) = *(long *)(this + 0x68) + plVar8[3];
        }
        pTVar5 = (TypedSlots *)plVar8[4];
        if (pTVar5 != (TypedSlots *)0x0) {
          plVar8[4] = 0;
          this_00 = *(TypedSlotSet **)(this + 0x80);
          if (this_00 == (TypedSlotSet *)0x0) {
            this_00 = MemoryChunk::AllocateTypedSlotSet<(v8::internal::RememberedSetType)1>(this);
          }
          TypedSlots::Merge((TypedSlots *)this_00,pTVar5);
          (**(code **)(*(long *)pTVar5 + 8))(pTVar5);
        }
      }
      if (*(long *)(param_1 + lVar6 * 0x80 + 0x48) != 0) {
        puVar2 = *(void **)pMVar7;
        while (puVar2 != (void *)0x0) {
          plVar8 = (long *)puVar2[4];
          pvVar9 = (void *)*puVar2;
          puVar2[4] = 0;
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 8))();
          }
          operator_delete(puVar2);
          puVar2 = pvVar9;
        }
        *(long *)pMVar7 = 0;
        lVar3 = *(long *)(param_1 + lVar6 * 0x80 + 0x38);
        if (lVar3 != 0) {
          lVar4 = 0;
          do {
            *(undefined8 *)(*(long *)(param_1 + lVar6 * 0x80 + 0x30) + lVar4 * 8) = 0;
            lVar4 = lVar4 + 1;
          } while (lVar3 != lVar4);
        }
        *(undefined8 *)(param_1 + lVar6 * 0x80 + 0x48) = 0;
      }
      *(undefined8 *)(param_1 + lVar6 * 0x80 + 0x58) = 0;
      bVar1 = lVar6 < *(int *)(param_1 + 0x4d8);
      lVar6 = lVar6 + 1;
    } while (bVar1);
  }
  *(undefined8 *)(param_1 + 0x428) = 0;
  return;
}

