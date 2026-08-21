
undefined8 * FUN_0109c5a8(void)

{
  uint uVar1;
  int iVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  int iVar7;
  ulong *extraout_x1;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulong uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  FUN_0109d35c();
  pcStack_18 = FUN_0109c5b4;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_0109d370();
  pcStack_78 = FUN_0109c5c0;
  pIVar3 = (Isolate *)(*extraout_x1 & 0xffffffff00000000);
  uVar8 = (ulong)pIVar3 | (ulong)*(uint *)(*extraout_x1 + 7);
  if (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    puStack_80 = (undefined1 *)&puStack_20;
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puStack_80 = (undefined1 *)&puStack_20;
      puVar4 = (ulong *)v8::internal::HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar8;
  }
  else {
    puStack_80 = (undefined1 *)&puStack_20;
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8),uVar8);
  }
  uStack_88 = *extraout_x1;
  pIVar3 = (Isolate *)(uStack_88 & 0xffffffff00000000);
  iVar2 = v8::internal::JSObject::GetFastElementsUsage((JSObject *)&uStack_88);
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
      uStack_88 = *puVar5;
      v8::internal::NumberDictionary::UpdateMaxNumberKey
                ((NumberDictionary *)&uStack_88,iVar7,extraout_x1);
    }
  }
  return puVar5;
}

