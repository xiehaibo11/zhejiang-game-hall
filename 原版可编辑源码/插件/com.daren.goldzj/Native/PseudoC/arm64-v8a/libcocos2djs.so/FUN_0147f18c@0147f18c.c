
void FUN_0147f18c(Isolate *param_1,ulong *param_2,int param_3,int param_4,undefined8 param_5)

{
  int *piVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  pIVar2 = param_1 + 0x95a0;
  if (param_3 < 0x401) {
    uVar9 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xc3);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)pIVar2;
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar2 = puVar3 + 1;
      *puVar3 = uVar9;
    }
    else {
      puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
    }
    puVar4 = (ulong *)v8::internal::FixedArray::SetAndGrow(param_1,puVar3,param_3 + -1,param_5);
    uVar9 = *puVar4;
    if ((int)uVar9 == (int)*puVar3) {
      return;
    }
    uVar8 = *param_2;
    *(int *)(uVar8 + 0xc3) = (int)uVar9;
    if ((uVar9 & 1) == 0) {
      return;
    }
    uVar7 = uVar9 & 0xfffffffffffc0000;
    uVar6 = *(ulong *)(uVar7 + 8);
    piVar1 = (int *)(uVar8 + 0xc3);
    uVar5 = (uint)uVar6;
  }
  else {
    if ((0x100000 < param_3) && (param_4 != 1)) {
      return;
    }
    uVar9 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x2a3);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)pIVar2;
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar2 = puVar3 + 1;
      *puVar3 = uVar9;
    }
    else {
      puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
    }
    puVar4 = (ulong *)v8::internal::SimpleNumberDictionary::Set(param_1,puVar3,param_3,param_5);
    uVar9 = *puVar4;
    if ((int)uVar9 == (int)*puVar3) {
      return;
    }
    uVar8 = *param_2;
    piVar1 = (int *)(uVar8 + 0x2a3);
    *piVar1 = (int)uVar9;
    if ((uVar9 & 1) == 0) {
      return;
    }
    uVar7 = uVar9 & 0xfffffffffffc0000;
    uVar6 = *(ulong *)(uVar7 + 8);
    uVar5 = (uint)uVar6;
  }
  if ((uVar5 >> 0x12 & 1) != 0) {
    v8::internal::Heap_MarkingBarrierSlow(uVar8,piVar1,uVar9);
    uVar6 = *(ulong *)(uVar7 | 8);
  }
  if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
    v8::internal::Heap_GenerationalBarrierSlow(uVar8,piVar1,uVar9);
    return;
  }
  return;
}

