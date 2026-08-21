
/* v8::internal::PendingOptimizationTable::FunctionWasOptimized(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSFunction>) */

void v8::internal::PendingOptimizationTable::FunctionWasOptimized(Isolate *param_1,ulong *param_2)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 auStack_44 [4];
  ulong local_28;
  
  uVar5 = *(ulong *)(param_1 + 0xfc0);
  if (((uVar5 & 1) == 0) || ((int)uVar5 != *(int *)((uVar5 & 0xffffffff00000000) + 0xa0))) {
    pIVar1 = param_1 + 0x95a0;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)pIVar1;
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar2 + 1;
      *puVar2 = uVar5;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    }
    local_28 = *puVar2;
    uVar5 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)pIVar1;
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar3 + 1;
      *puVar3 = uVar5;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    }
    uVar5 = ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::
            Lookup((ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                    *)&local_28,puVar3);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)pIVar1;
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar3 + 1;
      *puVar3 = uVar5;
      uVar5 = *puVar3;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
      uVar5 = *puVar3;
    }
    if ((((uVar5 & 1) == 0) || ((int)uVar5 != *(int *)((uVar5 & 0xffffffff00000000) + 0xa8))) &&
       ((*(uint *)(uVar5 + 7) & 0xfffffffe) == 4)) {
      uVar5 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)pIVar1;
        if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
          puVar3 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar3 + 1;
        *puVar3 = uVar5;
      }
      else {
        puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
      }
      puVar4 = (undefined8 *)
               ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
               ::Remove(param_1,puVar2,puVar3,auStack_44);
      *(undefined8 *)(param_1 + 0xfc0) = *puVar4;
    }
  }
  return;
}

