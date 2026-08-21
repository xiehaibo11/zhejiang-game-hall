
ulong FUN_0108f294(ulong *param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  Factory *this;
  ulong uVar11;
  
  uVar9 = *param_1;
  pIVar3 = (Isolate *)(uVar9 & 0xffffffff00000000);
  bVar1 = *(byte *)(((ulong)pIVar3 | 10) + (ulong)*(uint *)(uVar9 - 1));
  if (bVar1 < 0x20) {
    v8::internal::Isolate::UpdateNoElementsProtectorOnSetElement(pIVar3,param_1);
    uVar9 = *param_1;
    pIVar3 = (Isolate *)(uVar9 & 0xffffffff00000000);
  }
  uVar9 = (ulong)pIVar3 | (ulong)*(uint *)(uVar9 + 7);
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar9;
  }
  else {
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar9);
  }
  this = (Factory *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
  puVar5 = (ulong *)v8::internal::Factory::NewFixedDoubleArray(this,param_2);
  iVar7 = -1;
  if ((bVar1 < 0x28) && ((bVar1 >> 3 & 1) == 0)) {
    uVar9 = *param_1;
    if (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0x423) {
      iVar7 = *(int *)(uVar9 + 0xb) >> 1;
    }
    else {
      iVar7 = -1;
    }
  }
  FUN_0108f4c0(this,*puVar4,0,*puVar5,bVar1 >> 3,0,iVar7,0xffffffff);
  uVar8 = 4;
  if ((bVar1 < 0x30 & bVar1 >> 3) != 0) {
    uVar8 = 5;
  }
  uVar6 = v8::internal::JSObject::GetElementsTransitionMap(param_1,uVar8);
  v8::internal::JSObject::MigrateToMap((ulong)*(uint *)((long)param_1 + 4) << 0x20,param_1,uVar6,0);
  uVar11 = *param_1;
  uVar9 = *puVar5;
  *(int *)(uVar11 + 7) = (int)uVar9;
  if ((uVar9 & 1) != 0) {
    uVar10 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar10 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar11,uVar11 + 7,uVar9);
      uVar10 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      v8::internal::Heap_GenerationalBarrierSlow(uVar11,uVar11 + 7,uVar9);
    }
  }
  bVar2 = v8::internal::JSObject::UpdateAllocationSite<(v8::internal::AllocationSiteUpdateMode)0>
                    (param_1,uVar8);
  if (v8::internal::FLAG_trace_elements_transitions != '\0') {
    uVar9 = v8::internal::JSObject::PrintElementsTransition
                      (waitpid,param_1,bVar1 >> 3,puVar4,uVar8,puVar5);
    return uVar9;
  }
  return (ulong)bVar2;
}

