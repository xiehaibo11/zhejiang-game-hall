
void FUN_010a9710(Isolate *param_1,ulong param_2,long param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  pIVar1 = param_1 + 0x95a0;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = param_2;
  }
  else {
    puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),param_2);
    param_2 = *puVar3;
  }
  uVar2 = (*(int *)(param_2 + 3) >> 1) - 2;
  uVar5 = param_2 & 0xffffffff00000000;
  if ((uint)param_3 < uVar2) {
    uVar2 = *(uint *)(param_2 + 7 + (long)(int)((uint)param_3 * 4 + 8));
    uVar6 = uVar5 | *(uint *)(param_2 + 7);
  }
  else {
    uVar2 = *(uint *)((uVar5 | *(uint *)(param_2 + 0xb)) +
                      ((long)((param_3 - (ulong)uVar2) * 0xc00000000 + 0x1400000000) >> 0x20) + 7);
    uVar5 = uVar5 | uVar2;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)pIVar1;
      if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
        puVar4 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar4 + 1;
      *puVar4 = uVar5;
      if ((uVar2 & 1) == 0) {
        return;
      }
    }
    else {
      puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
      uVar5 = *puVar4;
      if ((uVar5 & 1) == 0) {
        return;
      }
    }
    if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x53) {
      return;
    }
    uVar2 = *(uint *)(uVar5 + 3);
    uVar5 = *puVar3 & 0xffffffff00000000;
    uVar6 = uVar5 | *(uint *)(*puVar3 + 7);
  }
  uVar5 = uVar5 | *(uint *)(uVar6 + (long)(int)((uVar2 & 0x7ffffffe) << 1) + 7);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    v8::internal::CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
  }
  return;
}

