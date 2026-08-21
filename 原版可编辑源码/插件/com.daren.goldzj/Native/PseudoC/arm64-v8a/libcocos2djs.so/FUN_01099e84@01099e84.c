
undefined8 * FUN_01099e84(void)

{
  uint uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong *extraout_x1;
  ulong *puVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  ulong uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  FUN_0109abf0();
  pcStack_18 = FUN_01099e90;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_0109ac04();
  pcStack_78 = FUN_01099e9c;
  pIVar2 = (Isolate *)(*extraout_x1 & 0xffffffff00000000);
  uVar6 = (ulong)pIVar2 | (ulong)*(uint *)(*extraout_x1 + 7);
  if (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar2 + 0x95a0);
    puStack_80 = (undefined1 *)&puStack_20;
    if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
      puStack_80 = (undefined1 *)&puStack_20;
      puVar3 = (ulong *)v8::internal::HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar6;
  }
  else {
    puStack_80 = (undefined1 *)&puStack_20;
    puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8),uVar6);
  }
  uStack_88 = *extraout_x1;
  pIVar2 = (Isolate *)(uStack_88 & 0xffffffff00000000);
  uVar1 = v8::internal::JSObject::GetFastElementsUsage((JSObject *)&uStack_88);
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
      uStack_88 = *puVar4;
      v8::internal::NumberDictionary::UpdateMaxNumberKey
                ((NumberDictionary *)&uStack_88,iVar7,extraout_x1);
    }
  }
  return puVar4;
}

