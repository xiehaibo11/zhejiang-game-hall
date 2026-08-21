
ulong FUN_010ae5fc(ulong *param_1,undefined4 param_2)

{
  byte bVar1;
  bool bVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  pIVar3 = (Isolate *)(*param_1 & 0xffffffff00000000);
  uVar8 = (ulong)pIVar3 | (ulong)*(uint *)(*param_1 + 7);
  if (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar8;
  }
  else {
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8),uVar8);
  }
  pIVar3 = (Isolate *)(*param_1 & 0xffffffff00000000);
  bVar1 = *(byte *)(((ulong)pIVar3 | 10) + (ulong)*(uint *)(*param_1 - 1)) >> 3;
  if (bVar1 == 0xf) {
    v8::internal::Isolate::UpdateNoElementsProtectorOnSetElement(pIVar3,param_1);
  }
  puVar5 = (ulong *)FUN_010ae7ac(param_1,puVar4,bVar1,param_2);
  uVar6 = v8::internal::JSObject::GetElementsTransitionMap(param_1,0xf);
  v8::internal::JSObject::MigrateToMap((ulong)*(uint *)((long)param_1 + 4) << 0x20,param_1,uVar6,0);
  uVar9 = *param_1;
  uVar8 = *puVar5;
  *(int *)(uVar9 + 7) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar9,uVar9 + 7,uVar8);
      uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      v8::internal::Heap_GenerationalBarrierSlow(uVar9,uVar9 + 7,uVar8);
    }
  }
  bVar2 = v8::internal::JSObject::UpdateAllocationSite<(v8::internal::AllocationSiteUpdateMode)0>
                    (param_1,0xf);
  if (v8::internal::FLAG_trace_elements_transitions != '\0') {
    uVar8 = v8::internal::JSObject::PrintElementsTransition(waitpid,param_1,bVar1,puVar4,0xf,puVar5)
    ;
    return uVar8;
  }
  return (ulong)bVar2;
}

