
/* v8::internal::JSProxy::SetPrivateSymbol(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSProxy>, v8::internal::Handle<v8::internal::Symbol>,
   v8::internal::PropertyDescriptor*, v8::Maybe<v8::internal::ShouldThrow>) */

undefined8
v8::internal::JSProxy::SetPrivateSymbol
          (Isolate *param_1,ulong *param_2,ulong *param_3,byte *param_4,undefined8 param_5)

{
  Isolate *pIVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  CanonicalHandleScope *this;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  Isolate *pIVar8;
  ulong uVar9;
  undefined4 local_a8;
  int local_a4;
  undefined8 local_9c;
  long local_90;
  ulong *local_88;
  undefined8 uStack_80;
  ulong *local_78;
  undefined8 uStack_70;
  ulong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulong local_38;
  
  pIVar8 = *(Isolate **)(param_4 + 8);
  bVar3 = *param_4;
  if (((pIVar8 == (Isolate *)0x0) && ((bVar3 >> 5 & 1) == 0)) ||
     ((byte)(~bVar3 & bVar3 >> 1 & 4 | bVar3 & (bVar3 << 1 ^ 0xff) & 2 |
            bVar3 >> 5 & (bVar3 >> 4 ^ 0xff) & 1) != 2)) {
    iVar4 = GetShouldThrow(param_1,param_5);
    if (iVar4 == 1) {
      return 1;
    }
    puVar6 = (undefined8 *)Factory::NewTypeError((Factory *)param_1,0x8f,0,0,0);
    Isolate::Throw(param_1,*puVar6,0);
    return 0;
  }
  pIVar1 = param_1 + 0xa0;
  if (pIVar8 != (Isolate *)0x0) {
    pIVar1 = pIVar8;
  }
  local_90 = (ulong)*(uint *)((long)param_2 + 4) << 0x20;
  local_a8 = 3;
  if ((*(short *)(((ulong)*(uint *)((long)param_2 + 4) << 0x20 | 7) + (ulong)*(uint *)(*param_3 - 1)
                 ) == 0x40) && (local_a8 = 3, (*(byte *)(*param_3 + 7) & 1) != 0)) {
    local_a8 = 0;
  }
  local_9c = 0xc000000000;
  local_88 = param_3;
  if ((*(ushort *)((*param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_3 - 1)) & 0xffe0)
      == 0x20) {
    local_88 = (ulong *)StringTable::LookupString(local_90,param_3);
  }
  uStack_80 = 0;
  uStack_70 = 0;
  local_58 = 0xffffffffffffffff;
  uStack_60 = 0xffffffffffffffff;
  local_78 = param_2;
  local_68 = param_2;
  LookupIterator::Start<false>((LookupIterator *)&local_a8);
  if (local_a4 == 4) {
    uVar2 = *(uint *)(*param_2 + 3);
    uVar9 = *param_2 & 0xffffffff00000000;
    if ((uVar2 & 1) == 0) {
      uVar9 = *(ulong *)(uVar9 + 0x410);
      this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    }
    else {
      uVar9 = uVar9 | uVar2;
      this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    }
    if (this == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(param_1 + 0x95a0);
      if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar9;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup(this,uVar9);
      uVar9 = *puVar5;
    }
    iVar4 = *(int *)(uVar9 + 0x13);
    puVar7 = (ulong *)Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::
                      Add(param_1,puVar5,param_3,pIVar1,iVar4 << 7 | 0xd0,0);
    *(uint *)(*puVar7 + 0x13) = iVar4 + 2U & 0xfffffffe;
    if ((puVar5 != puVar7) &&
       (((puVar5 == (ulong *)0x0 || (puVar7 == (ulong *)0x0)) || (*puVar5 != *puVar7)))) {
      local_38 = *param_2;
      JSReceiver::SetProperties((JSReceiver *)&local_38,*puVar7);
    }
    return 0x101;
  }
  LookupIterator::WriteDataValue(&local_a8,pIVar1,0);
  return 0x101;
}

