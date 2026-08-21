
undefined8 FUN_014a6694(undefined8 param_1,long param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong *puVar5;
  Isolate *pIVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong *puVar11;
  
  pIVar1 = param_3 + 0x95a0;
  iVar4 = (int)param_1 * 8;
  puVar10 = (ulong *)(param_2 - (iVar4 + -0x10));
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *puVar10;
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(param_3 + 0x95a8);
  uVar8 = uVar7 & 0xffffffff00000000;
  uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)(uVar7 + 0xb)) + 3);
  puVar11 = (ulong *)(param_2 - (iVar4 + -8));
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar1;
    if (puVar5 == *(ulong **)(param_3 + 0x95a8)) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar8;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar8);
  }
  uVar7 = *puVar11;
  if (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0xa9) {
    pIVar6 = (Isolate *)FUN_014a6d98(param_3,puVar10,puVar11,puVar5,param_2,param_1,param_2);
  }
  else {
    pIVar6 = (Isolate *)FUN_014a6aa4();
  }
  if (pIVar6 == (Isolate *)0x0) {
    pIVar6 = param_3 + 0x180;
  }
  uVar9 = *(undefined8 *)pIVar6;
  *(long *)pIVar1 = lVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar9;
}

