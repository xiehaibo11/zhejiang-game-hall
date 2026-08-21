
/* v8::internal::TypedSlotSet*
   v8::internal::MemoryChunk::AllocateTypedSlotSet<(v8::internal::RememberedSetType)1>() */

TypedSlotSet * __thiscall
v8::internal::MemoryChunk::AllocateTypedSlotSet<(v8::internal::RememberedSetType)1>
          (MemoryChunk *this)

{
  MemoryChunk *pMVar1;
  char cVar2;
  bool bVar3;
  TypedSlotSet *pTVar4;
  TypedSlotSet *pTVar5;
  
  pTVar4 = operator_new(0x20);
  *(undefined8 *)(pTVar4 + 0x10) = 0;
  *(MemoryChunk **)(pTVar4 + 0x18) = this;
  *(undefined ***)pTVar4 = &PTR__TypedSlots_01caa310;
  *(undefined8 *)(pTVar4 + 8) = 0;
  pMVar1 = this + 0x80;
  do {
    pTVar5 = *(TypedSlotSet **)pMVar1;
    if (pTVar5 != (TypedSlotSet *)0x0) {
      ClearExclusiveLocal();
      (**(code **)(*(long *)pTVar4 + 8))();
      return pTVar5;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pMVar1,0x10);
    if (bVar3) {
      *(TypedSlotSet **)pMVar1 = pTVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return pTVar4;
}

