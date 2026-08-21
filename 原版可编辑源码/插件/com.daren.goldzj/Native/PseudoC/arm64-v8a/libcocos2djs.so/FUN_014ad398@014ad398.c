
undefined8 FUN_014ad398(int param_1,long param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  pIVar1 = param_3 + 0x95a0;
  puVar3 = *(ulong **)pIVar1;
  puVar4 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
  uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = puVar3;
    if (puVar4 == puVar3) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar7;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar7);
    uVar7 = *puVar5;
  }
  uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0x23);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar1;
    if (puVar5 == *(ulong **)(param_3 + 0x95a8)) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar7;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar7);
  }
  pIVar2 = (Isolate *)(param_2 + -8);
  if (param_1 < 6) {
    pIVar2 = param_3 + 0xa0;
  }
  uVar6 = FUN_014ae180(param_3,puVar5,puVar5,pIVar2,0);
  *(ulong **)pIVar1 = puVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar4) {
    *(ulong **)(param_3 + 0x95a8) = puVar4;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar6;
}

