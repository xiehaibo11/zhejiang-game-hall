
void FUN_010a5460(undefined8 param_1,ulong *param_2,int param_3,ulong *param_4,undefined8 param_5,
                 uint param_6)

{
  long lVar1;
  CanonicalHandleScope *pCVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  Isolate *pIVar9;
  ulong uVar10;
  
  pIVar9 = (Isolate *)(*param_2 & 0xffffffff00000000);
  pCVar2 = *(CanonicalHandleScope **)((ulong)pIVar9 | 0x95b8);
  uVar10 = (ulong)pIVar9 | (ulong)*(uint *)(*param_2 + 7);
  if (pCVar2 == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar9 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar9 + 0x95a8)) {
      puVar3 = (ulong *)v8::internal::HandleScope::Extend(pIVar9);
    }
    *(ulong **)(pIVar9 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar10;
  }
  else {
    puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(pCVar2,uVar10);
    uVar10 = *puVar3;
  }
  pCVar2 = *(CanonicalHandleScope **)((ulong)pIVar9 | 0x95b8);
  uVar10 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0xb);
  if (pCVar2 == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar9 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar9 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend(pIVar9);
    }
    *(ulong **)(pIVar9 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar10;
  }
  else {
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(pCVar2,uVar10);
    uVar10 = *puVar4;
  }
  if ((*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x7b) ||
     ((uint)(*(int *)(uVar10 + 3) >> 1) < param_6)) {
    FUN_010a6a50(param_2,param_6);
  }
  uVar7 = *param_4;
  uVar5 = (ulong)*(uint *)(*puVar3 + 0xb);
  uVar10 = *puVar3 & 0xffffffff00000000;
  uVar8 = uVar10 | uVar5;
  lVar1 = uVar8 + (long)(param_3 << 2);
  *(int *)(lVar1 + 7) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    lVar1 = lVar1 + 7;
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar8,lVar1,uVar7);
      uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) &&
       ((*(byte *)((uVar10 | uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      v8::internal::Heap_GenerationalBarrierSlow(uVar8,lVar1,uVar7);
      return;
    }
  }
  return;
}

