
ulong FUN_014d1ad4(Isolate *param_1)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  
  pIVar1 = param_1 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  uVar6 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1))
                                              + 0x13)) + 0x247);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = puVar2;
    if (puVar3 == puVar2) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar6;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
    uVar6 = *puVar5;
  }
  uVar4 = *(uint *)(uVar6 + 0xf);
  uVar6 = uVar6 & 0xffffffff00000000 | (ulong)uVar4;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar1;
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar6;
    if ((uVar4 & 1) == 0) goto LAB_014d1bbc;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
    uVar6 = *puVar5;
    if ((uVar6 & 1) == 0) goto LAB_014d1bbc;
  }
  if ((int)uVar6 == *(int *)(param_1 + 0xa0)) {
    uVar6 = *(ulong *)(param_1 + 200);
  }
LAB_014d1bbc:
  *(ulong **)pIVar1 = puVar2;
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
  if (*(ulong **)(param_1 + 0x95a8) != puVar3) {
    *(ulong **)(param_1 + 0x95a8) = puVar3;
    v8::internal::HandleScope::DeleteExtensions(param_1);
  }
  return uVar6;
}

