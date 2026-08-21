
ulong FUN_01092140(ulong *param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  Factory *this;
  ulong uVar10;
  
  uVar8 = *param_1;
  pIVar3 = (Isolate *)(uVar8 & 0xffffffff00000000);
  bVar1 = *(byte *)(((ulong)pIVar3 | 10) + (ulong)*(uint *)(uVar8 - 1));
  if (bVar1 < 0x20) {
    v8::internal::Isolate::UpdateNoElementsProtectorOnSetElement(pIVar3,param_1);
    uVar8 = *param_1;
    pIVar3 = (Isolate *)(uVar8 & 0xffffffff00000000);
  }
  uVar8 = (ulong)pIVar3 | (ulong)*(uint *)(uVar8 + 7);
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar8;
  }
  else {
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar8);
  }
  this = (Factory *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
  puVar5 = (ulong *)v8::internal::Factory::NewFixedDoubleArray(this,param_2);
  iVar7 = -1;
  if ((bVar1 < 0x28) && ((bVar1 >> 3 & 1) == 0)) {
    uVar8 = *param_1;
    if (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x423) {
      iVar7 = *(int *)(uVar8 + 0xb) >> 1;
    }
    else {
      iVar7 = -1;
    }
  }
  FUN_01092348(this,*puVar4,0,*puVar5,bVar1 >> 3,0,iVar7,0xffffffff);
  uVar6 = v8::internal::JSObject::GetElementsTransitionMap(param_1,5);
  v8::internal::JSObject::MigrateToMap((ulong)*(uint *)((long)param_1 + 4) << 0x20,param_1,uVar6,0);
  uVar10 = *param_1;
  uVar8 = *puVar5;
  *(int *)(uVar10 + 7) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar9 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar9 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar10,uVar10 + 7,uVar8);
      uVar9 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      v8::internal::Heap_GenerationalBarrierSlow(uVar10,uVar10 + 7,uVar8);
    }
  }
  bVar2 = v8::internal::JSObject::UpdateAllocationSite<(v8::internal::AllocationSiteUpdateMode)0>
                    (param_1,5);
  if (v8::internal::FLAG_trace_elements_transitions != '\0') {
    uVar8 = v8::internal::JSObject::PrintElementsTransition
                      (waitpid,param_1,bVar1 >> 3,puVar4,5,puVar5);
    return uVar8;
  }
  return (ulong)bVar2;
}

