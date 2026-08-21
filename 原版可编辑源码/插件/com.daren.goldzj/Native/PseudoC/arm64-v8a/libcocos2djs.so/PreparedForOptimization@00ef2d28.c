
/* v8::internal::PendingOptimizationTable::PreparedForOptimization(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSFunction>, bool) */

void v8::internal::PendingOptimizationTable::PreparedForOptimization
               (Isolate *param_1,ulong *param_2,ulong param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar11 = *(ulong *)(param_1 + 0xfc0);
  pIVar1 = param_1 + 0x95a0;
  if (((uVar11 & 1) == 0) || ((int)uVar11 != *(int *)((uVar11 & 0xffffffff00000000) + 0xa0))) {
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)pIVar1;
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar2 + 1;
      *puVar2 = uVar11;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
    }
  }
  else {
    puVar2 = (ulong *)HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::
                      New(param_1,1,0,0);
  }
  uVar11 = *param_2 & 0xffffffff00000000;
  uVar8 = uVar11 | *(uint *)(*param_2 + 0xb);
  uVar10 = uVar11 | *(uint *)(uVar8 + 0xf);
  uVar9 = uVar11 | 7;
  if ((*(short *)(uVar9 + *(uint *)(uVar10 - 1)) == 0x5b) &&
     (*(short *)(uVar9 + *(uint *)((uVar11 | *(uint *)(uVar10 + 0x13)) - 1)) == 0x86)) {
    uVar7 = *(uint *)(uVar10 + 0xf);
  }
  else {
    uVar7 = *(uint *)(uVar8 + 3);
    if (((uVar7 & 1) == 0) || (*(short *)(uVar9 + *(uint *)((uVar11 | uVar7) - 1)) != 0x86)) {
      uVar7 = *(uint *)((uVar11 | *(uint *)(uVar8 + 3)) + 3);
    }
    else {
      uVar7 = *(uint *)(uVar8 + 3);
    }
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar11 | uVar7;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11 | uVar7);
  }
  uVar11 = 10;
  if ((param_3 & 1) == 0) {
    uVar11 = 2;
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar11;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
  }
  uVar5 = Factory::NewTuple2((Factory *)param_1,puVar3,puVar4,0);
  uVar11 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar11;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
  }
  puVar6 = (undefined8 *)
           ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::
           Put(puVar2,puVar3,uVar5);
  *(undefined8 *)(param_1 + 0xfc0) = *puVar6;
  return;
}

