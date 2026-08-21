
/* v8::internal::Accessors::ArgumentsIteratorGetter(v8::Local<v8::Name>,
   v8::PropertyCallbackInfo<v8::Value> const&) */

void v8::internal::Accessors::ArgumentsIteratorGetter(undefined8 param_1,long *param_2)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  Isolate *pIVar7;
  long lVar8;
  
  pIVar7 = *(Isolate **)(*param_2 + 0x10);
  pIVar1 = pIVar7 + 0x95a0;
  puVar3 = *(ulong **)pIVar1;
  puVar4 = *(ulong **)(pIVar7 + 0x95a8);
  *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + 1;
  uVar6 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
  uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(pIVar7 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = puVar3;
    if (puVar4 == puVar3) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar6;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar6);
    uVar6 = *puVar5;
  }
  lVar8 = *param_2;
  uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0x35b);
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar1;
    if (puVar5 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar6;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar6);
  }
  puVar2 = (ulong *)(lVar8 + 0x18);
  if (puVar5 != (ulong *)0x0) {
    puVar2 = puVar5;
  }
  *(ulong *)(lVar8 + 0x20) = *puVar2;
  *(ulong **)pIVar1 = puVar3;
  *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + -1;
  if (*(ulong **)(pIVar7 + 0x95a8) != puVar4) {
    *(ulong **)(pIVar7 + 0x95a8) = puVar4;
    HandleScope::DeleteExtensions(pIVar7);
    return;
  }
  return;
}

