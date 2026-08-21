
undefined8 FUN_01090f28(undefined8 param_1,ulong *param_2,uint param_3)

{
  bool bVar1;
  ulong uVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_28;
  
  local_28 = *param_2;
  if (((*(uint *)((local_28 & 0xffffffff00000000 | (ulong)*(uint *)(local_28 - 1)) + 0xb) >> 0x14 &
       1) != 0) ||
     (uVar2 = v8::internal::JSObject::WouldConvertToSlowElements((JSObject *)&local_28,param_3),
     (uVar2 & 1) != 0)) {
    return 0;
  }
  pIVar3 = (Isolate *)(*param_2 & 0xffffffff00000000);
  uVar2 = (ulong)pIVar3 | (ulong)*(uint *)(*param_2 + 7);
  if (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar2;
  }
  else {
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8),uVar2);
  }
  puVar5 = (ulong *)v8::internal::Factory::NewFixedDoubleArray
                              ((Factory *)((ulong)*(uint *)((long)param_2 + 4) << 0x20),
                               param_3 + (param_3 + 1 >> 1) + 0x11);
  FUN_0108f6a8(*puVar4,0,*puVar5,0,0xffffffff);
  bVar1 = v8::internal::JSObject::UpdateAllocationSite<(v8::internal::AllocationSiteUpdateMode)1>
                    (param_2,5);
  if (bVar1) {
    return 0;
  }
  uVar7 = *param_2;
  uVar2 = *puVar5;
  *(int *)(uVar7 + 7) = (int)uVar2;
  if ((uVar2 & 1) != 0) {
    uVar6 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar7,uVar7 + 7,uVar2);
      uVar6 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      v8::internal::Heap_GenerationalBarrierSlow(uVar7,uVar7 + 7,uVar2);
    }
  }
  return 1;
}

