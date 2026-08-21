
undefined8 FUN_014c6530(Isolate *param_1)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  Isolate *pIVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  pIVar2 = param_1 + 0x95a0;
  puVar3 = *(ulong **)pIVar2;
  puVar4 = *(ulong **)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  uVar7 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1))
                                              + 0x13)) + 0x3b3);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = puVar3;
    if (puVar4 == puVar3) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar5 + 1;
    *puVar5 = uVar7;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
  }
  pIVar1 = param_1 + 0xa0;
  pIVar6 = (Isolate *)
           v8::internal::ErrorUtils::MakeGenericError(param_1,puVar5,0x154,pIVar1,pIVar1,pIVar1,2);
  pIVar1 = param_1 + 0x180;
  if (pIVar6 != (Isolate *)0x0) {
    pIVar1 = pIVar6;
  }
  uVar8 = *(undefined8 *)pIVar1;
  *(ulong **)pIVar2 = puVar3;
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
  if (*(ulong **)(param_1 + 0x95a8) != puVar4) {
    *(ulong **)(param_1 + 0x95a8) = puVar4;
    v8::internal::HandleScope::DeleteExtensions(param_1);
  }
  return uVar8;
}

