
void FUN_00ee61fc(byte *param_1)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong local_48;
  
  plVar4 = *(long **)(param_1 + 0x28);
  if ((*(byte *)(*plVar4 + 0x17) & 0x3e) == 0) {
    if ((*param_1 & 1) == 0) {
      puVar6 = *(ulong **)(param_1 + 0x20);
      pIVar1 = (Isolate *)(*puVar6 & 0xffffffff00000000);
      uVar5 = (ulong)pIVar1 | (ulong)*(uint *)(*puVar6 + 0xb);
      if (*(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar2 = *(ulong **)(pIVar1 + 0x95a0);
        if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
          puVar2 = (ulong *)v8::internal::HandleScope::Extend(pIVar1);
        }
        *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
        *puVar2 = uVar5;
      }
      else {
        puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8),uVar5);
      }
      pIVar1 = (Isolate *)(*puVar6 & 0xffffffff00000000);
      uVar5 = (ulong)pIVar1 |
              (ulong)*(uint *)(((ulong)pIVar1 |
                               (ulong)*(uint *)(((ulong)pIVar1 | (ulong)*(uint *)(*puVar6 + 0xf)) -
                                               1)) + 0x13);
      if (*(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)(pIVar1 + 0x95a0);
        if (puVar3 == *(ulong **)(pIVar1 + 0x95a8)) {
          puVar3 = (ulong *)v8::internal::HandleScope::Extend(pIVar1);
        }
        *(ulong **)(pIVar1 + 0x95a0) = puVar3 + 1;
        *puVar3 = uVar5;
      }
      else {
        puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8),uVar5);
      }
      if (*(int *)(param_1 + 0x38) != -1) {
        v8::internal::OSROptimizedCodeCache::AddOptimizedCode(puVar3,puVar2,plVar4);
        return;
      }
      pIVar1 = (Isolate *)(*puVar6 & 0xffffffff00000000);
      uVar5 = (ulong)pIVar1 |
              (ulong)*(uint *)(((ulong)pIVar1 | (ulong)*(uint *)(*puVar6 + 0x13)) + 3);
      if (*(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)(pIVar1 + 0x95a0);
        if (puVar6 == *(ulong **)(pIVar1 + 0x95a8)) {
          puVar6 = (ulong *)v8::internal::HandleScope::Extend(pIVar1);
        }
        *(ulong **)(pIVar1 + 0x95a0) = puVar6 + 1;
        *puVar6 = uVar5;
      }
      else {
        puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8),uVar5);
      }
      v8::internal::FeedbackVector::SetOptimizedCode(puVar6,plVar4);
      return;
    }
    if (*(int *)(param_1 + 0x38) == -1) {
      pIVar1 = (Isolate *)(**(ulong **)(param_1 + 0x20) & 0xffffffff00000000);
      uVar5 = (ulong)pIVar1 |
              (ulong)*(uint *)(((ulong)pIVar1 |
                               (ulong)*(uint *)(**(ulong **)(param_1 + 0x20) + 0x13)) + 3);
      if (*(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)(pIVar1 + 0x95a0);
        if (puVar6 == *(ulong **)(pIVar1 + 0x95a8)) {
          puVar6 = (ulong *)v8::internal::HandleScope::Extend(pIVar1);
        }
        *(ulong **)(pIVar1 + 0x95a0) = puVar6 + 1;
        *puVar6 = uVar5;
      }
      else {
        puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8),uVar5);
        uVar5 = *puVar6;
      }
      local_48 = uVar5;
      v8::internal::FeedbackVector::ClearOptimizationMarker((FeedbackVector *)&local_48);
    }
  }
  return;
}

