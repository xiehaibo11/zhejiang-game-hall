
void FUN_010a6a50(ulong *param_1,undefined4 param_2)

{
  CanonicalHandleScope *pCVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  Isolate *pIVar6;
  ulong uVar7;
  ulong uVar8;
  
  pIVar6 = (Isolate *)(*param_1 & 0xffffffff00000000);
  pCVar1 = *(CanonicalHandleScope **)((ulong)pIVar6 | 0x95b8);
  uVar8 = (ulong)pIVar6 | (ulong)*(uint *)(*param_1 + 7);
  if (pCVar1 == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar6 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar6 + 0x95a8)) {
      puVar2 = (ulong *)v8::internal::HandleScope::Extend(pIVar6);
    }
    *(ulong **)(pIVar6 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar8;
  }
  else {
    puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(pCVar1,uVar8);
    uVar8 = *puVar2;
  }
  pCVar1 = *(CanonicalHandleScope **)((ulong)pIVar6 | 0x95b8);
  uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0xb);
  if (pCVar1 == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar6 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar6 + 0x95a8)) {
      puVar3 = (ulong *)v8::internal::HandleScope::Extend(pIVar6);
    }
    *(ulong **)(pIVar6 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar8;
  }
  else {
    puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(pCVar1,uVar8);
  }
  puVar3 = (ulong *)FUN_010a6be4(param_1,puVar3,
                                 *(byte *)((*param_1 & 0xffffffff00000000 | 10) +
                                          (ulong)*(uint *)(*param_1 - 1)) >> 3,param_2);
  uVar4 = v8::internal::JSObject::GetElementsTransitionMap(param_1,0xd);
  v8::internal::JSObject::MigrateToMap(pIVar6,param_1,uVar4,0);
  uVar7 = *puVar2;
  uVar8 = *puVar3;
  *(int *)(uVar7 + 0xb) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar5 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar7,uVar7 + 0xb,uVar8);
      uVar5 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      v8::internal::Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0xb,uVar8);
    }
  }
  v8::internal::JSObject::ValidateElements(*param_1);
  return;
}

