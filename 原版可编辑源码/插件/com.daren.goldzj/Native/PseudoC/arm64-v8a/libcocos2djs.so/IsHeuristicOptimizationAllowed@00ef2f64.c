
/* v8::internal::PendingOptimizationTable::IsHeuristicOptimizationAllowed(v8::internal::Isolate*,
   v8::internal::JSFunction) */

byte v8::internal::PendingOptimizationTable::IsHeuristicOptimizationAllowed
               (Isolate *param_1,ulong param_2)

{
  Isolate *pIVar1;
  ulong uVar2;
  byte bVar3;
  ulong *puVar4;
  CanonicalHandleScope *this;
  ulong uVar5;
  ulong local_38;
  
  uVar5 = *(ulong *)(param_1 + 0xfc0);
  pIVar1 = param_1 + 0x95a0;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar5;
    uVar2 = local_38;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    uVar5 = *puVar4;
    uVar2 = local_38;
  }
  local_38 = uVar5;
  if (((local_38 & 1) == 0) || ((int)local_38 != *(int *)((local_38 & 0xffffffff00000000) + 0xa0)))
  {
    uVar5 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xb);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)pIVar1;
      if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar4 + 1;
      *puVar4 = uVar5;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    }
    uVar5 = ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::
            Lookup((ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                    *)&local_38,puVar4);
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
  }
  else {
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    uVar5 = *(ulong *)(param_1 + 0xa8);
    local_38 = uVar2;
  }
  if (this == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar5;
    uVar5 = *puVar4;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup(this,uVar5);
    uVar5 = *puVar4;
  }
  if (((uVar5 & 1) == 0) || ((int)uVar5 != *(int *)((uVar5 & 0xffffffff00000000) + 0xa8))) {
    bVar3 = *(byte *)(uVar5 + 7) >> 3 & 1;
  }
  else {
    bVar3 = 1;
  }
  return bVar3;
}

