
undefined8 * FUN_01091350(undefined8 param_1,ulong *param_2)

{
  int iVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  Factory *this;
  int iVar9;
  int iVar10;
  ulong local_48;
  
  pIVar2 = (Isolate *)(*param_2 & 0xffffffff00000000);
  uVar8 = (ulong)pIVar2 | (ulong)*(uint *)(*param_2 + 7);
  if (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar3 = (ulong *)v8::internal::HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar8;
  }
  else {
    puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8),uVar8);
  }
  local_48 = *param_2;
  this = (Factory *)(local_48 & 0xffffffff00000000);
  iVar1 = v8::internal::JSObject::GetFastElementsUsage((JSObject *)&local_48);
  puVar4 = (undefined8 *)
           v8::internal::
           HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::New
                     (this,iVar1,0,0);
  if (0 < iVar1) {
    iVar9 = 0;
    uVar8 = 0;
    iVar10 = 0;
    iVar6 = -1;
    do {
      uVar7 = uVar8 & 0xfffffff8 | 7;
      if (*(long *)(*puVar3 + uVar7) != -0x8000000080001) {
        uVar5 = v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>
                          (this,*(double *)(uVar7 + *puVar3));
        puVar4 = (undefined8 *)
                 v8::internal::
                 Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::Add
                           (this,puVar4,iVar9,uVar5,0xc0,0);
        iVar10 = iVar10 + 1;
        iVar6 = iVar9;
      }
      uVar8 = uVar8 + 8;
      iVar9 = iVar9 + 1;
    } while (iVar10 < iVar1);
    if (0 < iVar6) {
      local_48 = *puVar4;
      v8::internal::NumberDictionary::UpdateMaxNumberKey
                ((NumberDictionary *)&local_48,iVar6,param_2);
    }
  }
  return puVar4;
}

