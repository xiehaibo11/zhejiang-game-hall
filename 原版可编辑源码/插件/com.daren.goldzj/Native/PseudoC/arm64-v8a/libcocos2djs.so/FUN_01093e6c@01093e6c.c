
undefined8 * FUN_01093e6c(undefined8 param_1,ulong *param_2)

{
  uint uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  ulong local_68;
  
  pIVar2 = (Isolate *)(*param_2 & 0xffffffff00000000);
  uVar6 = (ulong)pIVar2 | (ulong)*(uint *)(*param_2 + 7);
  if (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar3 = (ulong *)v8::internal::HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar6;
  }
  else {
    puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8),uVar6);
  }
  local_68 = *param_2;
  pIVar2 = (Isolate *)(local_68 & 0xffffffff00000000);
  uVar1 = v8::internal::JSObject::GetFastElementsUsage((JSObject *)&local_68);
  puVar4 = (undefined8 *)
           v8::internal::
           HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::New
                     (pIVar2,(ulong)uVar1,0,0);
  if (0 < (int)uVar1) {
    lVar8 = 0;
    iVar7 = -1;
    do {
      uVar6 = *puVar3 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar3 + (long)(int)lVar8 + 7);
      if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)(pIVar2 + 0x95a0);
        if (puVar5 == *(ulong **)(pIVar2 + 0x95a8)) {
          puVar5 = (ulong *)v8::internal::HandleScope::Extend(pIVar2);
        }
        *(ulong **)(pIVar2 + 0x95a0) = puVar5 + 1;
        *puVar5 = uVar6;
      }
      else {
        puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar6);
      }
      puVar4 = (undefined8 *)
               v8::internal::
               Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::Add
                         (pIVar2,puVar4,iVar7 + 1,puVar5,0xc0,0);
      lVar8 = lVar8 + 4;
      iVar7 = iVar7 + 1;
    } while ((ulong)uVar1 * 4 - lVar8 != 0);
    if (0 < iVar7) {
      local_68 = *puVar4;
      v8::internal::NumberDictionary::UpdateMaxNumberKey
                ((NumberDictionary *)&local_68,iVar7,param_2);
    }
  }
  return puVar4;
}

