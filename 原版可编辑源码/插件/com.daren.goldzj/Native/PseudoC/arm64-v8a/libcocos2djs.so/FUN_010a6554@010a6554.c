
void FUN_010a6554(Isolate *param_1,ulong param_2,uint param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  int iVar5;
  ulong uVar6;
  
  pIVar1 = param_1 + 0x95a0;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = param_2;
  }
  else {
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),param_2);
    param_2 = *puVar4;
  }
  uVar3 = (*(int *)(param_2 + 3) >> 1) - 2;
  if (param_3 < uVar3) {
    uVar2 = *(uint *)(param_2 + 7);
    iVar5 = (*(uint *)(param_2 + 7 + (long)(int)(param_3 * 4 + 8)) & 0x7ffffffe) << 1;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xb);
    iVar5 = (param_3 - uVar3) * 4;
  }
  uVar6 = param_2 & 0xffffffff00000000 |
          (ulong)*(uint *)((param_2 & 0xffffffff00000000 | (ulong)uVar2) + (long)iVar5 + 7);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar6;
  }
  else {
    v8::internal::CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
  }
  return;
}

