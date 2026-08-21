
Isolate * FUN_0108cb98(ulong *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  CanonicalHandleScope *pCVar7;
  ulong *puVar8;
  Isolate *pIVar9;
  Isolate *pIVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  uVar5 = *(uint *)((long)param_1 + 4);
  piVar1 = (int *)((ulong)uVar5 << 0x20 | 0x95b0);
  puVar2 = (undefined8 *)((ulong)uVar5 << 0x20 | 0x95a0);
  plVar3 = (long *)((ulong)uVar5 << 0x20 | 0x95a8);
  uVar13 = *puVar2;
  lVar11 = *plVar3;
  pIVar10 = (Isolate *)((ulong)uVar5 << 0x20);
  *piVar1 = *piVar1 + 1;
  v8::internal::JSObject::EnsureWritableFastElements();
  if (uVar5 != 0) {
    *puVar2 = uVar13;
    *piVar1 = *piVar1 + -1;
    if (*plVar3 != lVar11) {
      *plVar3 = lVar11;
      v8::internal::HandleScope::DeleteExtensions(pIVar10);
    }
  }
  pCVar7 = *(CanonicalHandleScope **)(pIVar10 + 0x95b8);
  uVar12 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 7);
  if (pCVar7 == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)(pIVar10 + 0x95a0);
    if (puVar8 == (ulong *)*plVar3) {
      puVar8 = (ulong *)v8::internal::HandleScope::Extend(pIVar10);
    }
    *(ulong **)(pIVar10 + 0x95a0) = puVar8 + 1;
    *puVar8 = uVar12;
  }
  else {
    puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(pCVar7,uVar12);
    uVar12 = *puVar8;
  }
  iVar6 = (*(int *)(*param_1 + 0xb) >> 1) + -1;
  iVar4 = 0;
  if (param_2 != 0) {
    iVar4 = iVar6 * 4;
  }
  pCVar7 = *(CanonicalHandleScope **)(pIVar10 + 0x95b8);
  uVar12 = uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 + (long)iVar4 + 7);
  if (pCVar7 == (CanonicalHandleScope *)0x0) {
    pIVar9 = *(Isolate **)(pIVar10 + 0x95a0);
    if (pIVar9 == (Isolate *)*plVar3) {
      pIVar9 = (Isolate *)v8::internal::HandleScope::Extend(pIVar10);
    }
    *(Isolate **)(pIVar10 + 0x95a0) = pIVar9 + 8;
    *(ulong *)pIVar9 = uVar12;
  }
  else {
    pIVar9 = (Isolate *)v8::internal::CanonicalHandleScope::Lookup(pCVar7,uVar12);
  }
  if (param_2 == 0) {
    FUN_0108ca3c(pIVar10,param_1,puVar8,0,1,iVar6);
  }
  FUN_0108ba88(pIVar10,param_1,iVar6,puVar8);
  if (((*(ulong *)pIVar9 & 1) != 0) && ((int)*(ulong *)pIVar9 == *(int *)(pIVar10 + 0xa8))) {
    pIVar9 = pIVar10 + 0xa0;
  }
  return pIVar9;
}

