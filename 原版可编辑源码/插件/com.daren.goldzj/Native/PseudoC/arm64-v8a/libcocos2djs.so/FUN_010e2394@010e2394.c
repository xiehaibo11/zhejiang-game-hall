
Isolate * FUN_010e2394(Isolate *param_1,undefined4 param_2,undefined8 param_3,ulong param_4)

{
  undefined4 uVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  ulong local_48;
  
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(param_1 + 0x95a0);
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
    *puVar2 = param_4;
  }
  else {
    puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),param_4);
    param_4 = *puVar2;
  }
  if (*(uint *)(param_4 + 7) < 2) {
    pIVar3 = param_1 + 0x168;
  }
  else {
    local_48 = param_4;
    uVar1 = v8::internal::
            Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::
            NumberOfEnumerableProperties
                      ((Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>
                        *)&local_48);
    pIVar3 = (Isolate *)v8::internal::Factory::NewFixedArray((Factory *)param_1,uVar1,0);
    v8::internal::
    BaseNameDictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::
    CopyEnumKeysTo(param_1,puVar2,pIVar3,param_2,param_3);
  }
  return pIVar3;
}

