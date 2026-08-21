
ulong FUN_01098020(ulong *param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  Factory *this;
  ulong uVar9;
  
  uVar7 = *param_1;
  pIVar3 = (Isolate *)(uVar7 & 0xffffffff00000000);
  bVar1 = *(byte *)(((ulong)pIVar3 | 10) + (ulong)*(uint *)(uVar7 - 1));
  if (bVar1 < 0x20) {
    v8::internal::Isolate::UpdateNoElementsProtectorOnSetElement(pIVar3,param_1);
    uVar7 = *param_1;
    pIVar3 = (Isolate *)(uVar7 & 0xffffffff00000000);
  }
  bVar1 = bVar1 >> 3;
  uVar7 = (ulong)pIVar3 | (ulong)*(uint *)(uVar7 + 7);
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar7;
  }
  else {
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar7);
  }
  this = (Factory *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
  puVar5 = (ulong *)v8::internal::Factory::NewUninitializedFixedArray(this,param_2);
  FUN_01097ef0(this,*puVar4,0,*puVar5,bVar1,0,0xffffffff);
  uVar6 = v8::internal::JSObject::GetElementsTransitionMap(param_1,7);
  v8::internal::JSObject::MigrateToMap((ulong)*(uint *)((long)param_1 + 4) << 0x20,param_1,uVar6,0);
  uVar9 = *param_1;
  uVar7 = *puVar5;
  *(int *)(uVar9 + 7) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar8 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar9,uVar9 + 7,uVar7);
      uVar8 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      v8::internal::Heap_GenerationalBarrierSlow(uVar9,uVar9 + 7,uVar7);
    }
  }
  bVar2 = v8::internal::JSObject::UpdateAllocationSite<(v8::internal::AllocationSiteUpdateMode)0>
                    (param_1,7);
  if (v8::internal::FLAG_trace_elements_transitions == '\0') {
    return (ulong)bVar2;
  }
  uVar7 = v8::internal::JSObject::PrintElementsTransition(waitpid,param_1,bVar1,puVar4,7,puVar5);
  return uVar7;
}

