
undefined8 * FUN_0108cd68(undefined8 *param_1,ulong *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  int iVar5;
  ulong uVar6;
  Isolate *pIVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 local_68;
  
  pIVar7 = (Isolate *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
  v8::internal::Isolate::UpdateNoElementsProtectorOnSetElement(pIVar7,param_1);
  local_68 = *param_1;
  iVar2 = v8::internal::JSObject::GetFastElementsUsage((JSObject *)&local_68);
  puVar3 = (undefined8 *)
           v8::internal::
           HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::New
                     (pIVar7,iVar2,0,0);
  if (0 < iVar2) {
    iVar9 = 0;
    iVar8 = 0;
    iVar10 = 0;
    iVar5 = -1;
    do {
      uVar6 = *param_2;
      uVar1 = *(uint *)((long)iVar9 + 7 + uVar6);
      if (((uVar1 & 1) == 0) || (uVar1 != *(uint *)(pIVar7 + 0xa8))) {
        uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + (long)iVar9 + 7);
        if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar4 = *(ulong **)(pIVar7 + 0x95a0);
          if (puVar4 == *(ulong **)(pIVar7 + 0x95a8)) {
            puVar4 = (ulong *)v8::internal::HandleScope::Extend(pIVar7);
          }
          *(ulong **)(pIVar7 + 0x95a0) = puVar4 + 1;
          *puVar4 = uVar6;
        }
        else {
          puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar6);
        }
        puVar3 = (undefined8 *)
                 v8::internal::
                 Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::Add
                           (pIVar7,puVar3,iVar8,puVar4,0xc0,0);
        iVar10 = iVar10 + 1;
        iVar5 = iVar8;
      }
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar10 < iVar2);
    if (0 < iVar5) {
      local_68 = *puVar3;
      v8::internal::NumberDictionary::UpdateMaxNumberKey
                ((NumberDictionary *)&local_68,iVar5,param_1);
    }
  }
  return puVar3;
}

