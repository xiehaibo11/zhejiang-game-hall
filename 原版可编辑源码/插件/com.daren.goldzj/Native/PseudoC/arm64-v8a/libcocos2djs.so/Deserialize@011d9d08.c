
/* v8::internal::ObjectDeserializer::Deserialize(v8::internal::Isolate*) */

ulong * __thiscall
v8::internal::ObjectDeserializer::Deserialize(ObjectDeserializer *this,Isolate *param_1)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  ulong local_48;
  
  Deserializer::Initialize((Deserializer *)this,param_1);
  uVar5 = DeserializerAllocator::ReserveSpace((DeserializerAllocator *)(this + 0x148));
  if ((uVar5 & 1) == 0) {
    puVar6 = (ulong *)0x0;
  }
  else {
    pIVar1 = param_1 + 0x95a0;
    lVar2 = *(long *)pIVar1;
    lVar3 = *(long *)(param_1 + 0x95a8);
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
    local_48 = 0;
    (**(code **)(*(long *)this + 0x10))(this,0x12,0,&local_48,&stack0xffffffffffffffc0);
    Deserializer::DeserializeDeferredObjects((Deserializer *)this);
    plVar4 = *(long **)(this + 0xc0);
    for (plVar8 = *(long **)(this + 0xb8); plVar8 != plVar4; plVar8 = plVar8 + 1) {
      lVar7 = *plVar8;
      Heap_WriteBarrierForCodeSlow(lVar7);
      FlushInstructionCache((void *)(lVar7 + 0x3f),(long)*(int *)(lVar7 + 0x13));
    }
    LinkAllocationSites(this);
    Deserializer::LogNewMapEvents((Deserializer *)this);
    uVar5 = local_48;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)pIVar1;
      if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar6 + 1;
      *puVar6 = uVar5;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),local_48);
    }
    Deserializer::Rehash((Deserializer *)this);
    DeserializerAllocator::RegisterDeserializedObjectsForBlackAllocation
              ((DeserializerAllocator *)(this + 0x148));
    CommitPostProcessedObjects(this);
    uVar5 = *puVar6;
    *(long *)pIVar1 = lVar2;
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
    if (*(long *)(param_1 + 0x95a8) != lVar3) {
      *(long *)(param_1 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(param_1);
    }
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)pIVar1;
      if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar6 + 1;
      *puVar6 = uVar5;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    }
  }
  return puVar6;
}

