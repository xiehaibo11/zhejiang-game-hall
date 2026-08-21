
/* v8::internal::PendingOptimizationTable::MarkedForOptimization(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSFunction>) */

void v8::internal::PendingOptimizationTable::MarkedForOptimization(Isolate *param_1,ulong *param_2)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  CanonicalHandleScope *this;
  ulong uVar7;
  ulong local_48;
  
  uVar7 = *(ulong *)(param_1 + 0xfc0);
  pIVar1 = param_1 + 0x95a0;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)pIVar1;
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar2 + 1;
    *puVar2 = uVar7;
    uVar4 = *puVar2;
    uVar7 = local_48;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
    uVar4 = *puVar2;
    uVar7 = local_48;
  }
  local_48 = uVar4;
  if (((local_48 & 1) == 0) || ((int)local_48 != *(int *)((local_48 & 0xffffffff00000000) + 0xa0)))
  {
    uVar7 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)pIVar1;
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar3 + 1;
      *puVar3 = uVar7;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
    }
    uVar4 = ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::
            Lookup((ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                    *)&local_48,puVar3);
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
  }
  else {
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    uVar4 = *(ulong *)(param_1 + 0xa8);
    local_48 = uVar7;
  }
  if (this == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar4;
    uVar7 = *puVar3;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(this,uVar4);
    uVar7 = *puVar3;
  }
  if (((uVar7 & 1) != 0) && ((int)uVar7 == *(int *)((uVar7 & 0xffffffff00000000) + 0xa8))) {
    PrintF("Error: Function ");
    local_48 = *param_2;
    Object::ShortPrint((Object *)&local_48,(__sFILE *)waitpid);
    PrintF(
          " should be prepared for optimization with %%PrepareFunctionForOptimization before  %%OptimizeFunctionOnNextCall / %%OptimizeOSR "
          );
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  *(uint *)(uVar7 + 7) = *(uint *)(uVar7 + 7) & 0xfffffff8 | 4;
  uVar7 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar1;
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar7;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
  }
  puVar6 = (undefined8 *)
           ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::
           Put(puVar2,puVar5,puVar3);
  *(undefined8 *)(param_1 + 0xfc0) = *puVar6;
  return;
}

