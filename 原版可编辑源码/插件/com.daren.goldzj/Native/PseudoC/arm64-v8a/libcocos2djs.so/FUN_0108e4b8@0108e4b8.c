
undefined8 * FUN_0108e4b8(undefined8 param_1,ulong *param_2)

{
  uint uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  Factory *pFVar5;
  ulong uVar6;
  ulong uVar7;
  Factory *this;
  int iVar8;
  ulong local_48;
  
  pIVar2 = (Isolate *)(*param_2 & 0xffffffff00000000);
  uVar7 = (ulong)pIVar2 | (ulong)*(uint *)(*param_2 + 7);
  if (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar3 = (ulong *)v8::internal::HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar7;
  }
  else {
    puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8),uVar7);
  }
  local_48 = *param_2;
  this = (Factory *)(local_48 & 0xffffffff00000000);
  uVar1 = v8::internal::JSObject::GetFastElementsUsage((JSObject *)&local_48);
  puVar4 = (undefined8 *)
           v8::internal::
           HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::New
                     (this,(ulong)uVar1,0,0);
  if (0 < (int)uVar1) {
    uVar7 = 0;
    iVar8 = -1;
    do {
      uVar6 = uVar7 & 0xfffffff8 | 7;
      iVar8 = iVar8 + 1;
      pFVar5 = this + 0xa8;
      if (*(long *)(uVar6 + *puVar3) != -0x8000000080001) {
        pFVar5 = (Factory *)
                 v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>
                           (this,*(double *)(*puVar3 + uVar6));
      }
      puVar4 = (undefined8 *)
               v8::internal::
               Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::Add
                         (this,puVar4,iVar8,pFVar5,0xc0,0);
      uVar7 = uVar7 + 8;
    } while ((ulong)uVar1 * 8 - uVar7 != 0);
    if (0 < iVar8) {
      local_48 = *puVar4;
      v8::internal::NumberDictionary::UpdateMaxNumberKey
                ((NumberDictionary *)&local_48,iVar8,param_2);
    }
  }
  return puVar4;
}

