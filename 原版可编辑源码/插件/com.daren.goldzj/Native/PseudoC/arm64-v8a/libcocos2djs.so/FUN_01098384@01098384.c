
ulong * FUN_01098384(ulong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  CanonicalHandleScope *pCVar3;
  ulong *puVar4;
  ulong *puVar5;
  Isolate *pIVar6;
  ulong uVar7;
  
  pIVar6 = (Isolate *)(*param_1 & 0xffffffff00000000);
  pCVar3 = *(CanonicalHandleScope **)((ulong)pIVar6 | 0x95b8);
  uVar7 = (ulong)pIVar6 | (ulong)*(uint *)(*param_1 + 7);
  if (pCVar3 == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar6 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar6 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend(pIVar6);
    }
    *(ulong **)(pIVar6 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar7;
  }
  else {
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(pCVar3,uVar7);
    uVar7 = *puVar4;
  }
  iVar2 = (*(int *)(*param_1 + 0xb) >> 1) + -1;
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = iVar2 * 4;
  }
  pCVar3 = *(CanonicalHandleScope **)((ulong)pIVar6 | 0x95b8);
  uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + (long)iVar1 + 7);
  if (pCVar3 == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar6 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar6 + 0x95a8)) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(pIVar6);
    }
    *(ulong **)(pIVar6 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar7;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(pCVar3,uVar7);
  }
  if (param_2 == 0) {
    FUN_01098228(pIVar6,param_1,puVar4,0,1,iVar2);
  }
  FUN_01097bf8(pIVar6,param_1,iVar2);
  return puVar5;
}

