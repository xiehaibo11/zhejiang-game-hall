
undefined8 * FUN_010859e8(undefined8 param_1,ulong *param_2)

{
  uint uVar1;
  int iVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulong local_68;
  
  pIVar3 = (Isolate *)(*param_2 & 0xffffffff00000000);
  uVar8 = (ulong)pIVar3 | (ulong)*(uint *)(*param_2 + 7);
  if (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar8;
  }
  else {
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8),uVar8);
  }
  pIVar3 = (Isolate *)((ulong)*(uint *)((long)param_2 + 4) << 0x20);
  v8::internal::Isolate::UpdateNoElementsProtectorOnSetElement(pIVar3,param_2);
  local_68 = *param_2;
  iVar2 = v8::internal::JSObject::GetFastElementsUsage((JSObject *)&local_68);
  puVar5 = (undefined8 *)
           v8::internal::
           HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::New
                     (pIVar3,iVar2,0,0);
  if (0 < iVar2) {
    iVar10 = 0;
    iVar9 = 0;
    iVar11 = 0;
    iVar7 = -1;
    do {
      uVar8 = *puVar4;
      uVar1 = *(uint *)((long)iVar10 + 7 + uVar8);
      if (((uVar1 & 1) == 0) || (uVar1 != *(uint *)(pIVar3 + 0xa8))) {
        uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + (long)iVar10 + 7);
        if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar6 = *(ulong **)(pIVar3 + 0x95a0);
          if (puVar6 == *(ulong **)(pIVar3 + 0x95a8)) {
            puVar6 = (ulong *)v8::internal::HandleScope::Extend(pIVar3);
          }
          *(ulong **)(pIVar3 + 0x95a0) = puVar6 + 1;
          *puVar6 = uVar8;
        }
        else {
          puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar8);
        }
        puVar5 = (undefined8 *)
                 v8::internal::
                 Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::Add
                           (pIVar3,puVar5,iVar9,puVar6,0xc0,0);
        iVar11 = iVar11 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar11 < iVar2);
    if (0 < iVar7) {
      local_68 = *puVar5;
      v8::internal::NumberDictionary::UpdateMaxNumberKey
                ((NumberDictionary *)&local_68,iVar7,param_2);
    }
  }
  return puVar5;
}

