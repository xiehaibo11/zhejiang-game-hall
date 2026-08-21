
/* v8::internal::JSModuleNamespace::GetPropertyAttributes(v8::internal::LookupIterator*) */

ulong v8::internal::JSModuleNamespace::GetPropertyAttributes(LookupIterator *param_1)

{
  Isolate *pIVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong *puVar6;
  Isolate *pIVar7;
  ulong local_28;
  
  lVar5 = *(long *)(param_1 + 0x20);
  puVar6 = *(ulong **)(param_1 + 0x38);
  if (lVar5 == 0) {
    lVar5 = Factory::SizeToString(*(Factory **)(param_1 + 0x18),*(ulong *)(param_1 + 0x48),true);
    *(long *)(param_1 + 0x20) = lVar5;
  }
  pIVar7 = *(Isolate **)(param_1 + 0x18);
  local_28 = *puVar6 & 0xffffffff00000000;
  pIVar1 = pIVar7 + 0x95a0;
  local_28 = local_28 | *(uint *)((local_28 | *(uint *)(*puVar6 + 0xb)) + 3);
  uVar3 = ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::
          Lookup((ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                  *)&local_28,lVar5);
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pIVar1;
    if (puVar6 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)pIVar1 = puVar6 + 1;
    *puVar6 = uVar3;
    uVar3 = *puVar6;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar3);
    uVar3 = *puVar6;
  }
  if (((uVar3 & 1) != 0) && ((int)uVar3 == *(int *)(pIVar7 + 0xa8))) {
    return 0x4000000001;
  }
  uVar2 = *(uint *)(uVar3 + 3);
  uVar3 = uVar3 & 0xffffffff00000000 | (ulong)uVar2;
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pIVar1;
    if (puVar6 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)pIVar1 = puVar6 + 1;
    *puVar6 = uVar3;
    if ((uVar2 & 1) == 0) goto LAB_010f40e0;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar3);
    uVar3 = *puVar6;
    if ((uVar3 & 1) == 0) goto LAB_010f40e0;
  }
  if ((int)uVar3 == *(int *)(pIVar7 + 0xa8)) {
    puVar4 = (undefined8 *)Factory::NewReferenceError((Factory *)pIVar7,0xb2,lVar5,0,0);
    Isolate::Throw(pIVar7,*puVar4,0);
    return 0;
  }
LAB_010f40e0:
  return (ulong)(*(uint *)(param_1 + 0x10) >> 3 & 7) << 0x20 | 1;
}

