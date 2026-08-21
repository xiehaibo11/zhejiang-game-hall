
ulong * FUN_0147ef78(Isolate *param_1,undefined8 param_2)

{
  Isolate *pIVar1;
  ulong *puVar2;
  long lVar3;
  Isolate *pIVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined4 local_98;
  int local_94;
  undefined8 local_8c;
  Isolate *local_80;
  Isolate *local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  pIVar1 = param_1 + 0x95a0;
  puVar7 = *(ulong **)pIVar1;
  puVar6 = *(ulong **)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  uVar5 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = puVar7;
    if (puVar6 == puVar7) {
      puVar2 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar2 + 1;
    *puVar2 = uVar5;
  }
  else {
    puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
  }
  lVar3 = FUN_0147cb10(param_1,puVar2,param_2,0);
  puVar2 = (ulong *)0x0;
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(param_1 + 0x908);
    local_78 = param_1 + 0x908;
    local_98 = 3;
    if ((*(short *)(((ulong)param_1 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x40) &&
       (local_98 = 3, (*(byte *)(uVar5 + 7) & 1) != 0)) {
      local_98 = 0;
    }
    local_8c = 0xc000000000;
    local_80 = param_1;
    if ((*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) & 0xffe0) ==
        0x20) {
      local_78 = (Isolate *)v8::internal::StringTable::LookupString(param_1);
    }
    uStack_70 = 0;
    uStack_60 = 0;
    local_48 = 0xffffffffffffffff;
    uStack_50 = 0xffffffffffffffff;
    local_68 = lVar3;
    local_58 = lVar3;
    v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_98);
    if (local_94 == 4) {
      pIVar4 = local_80 + 0xa0;
    }
    else {
      pIVar4 = (Isolate *)v8::internal::Object::GetProperty((LookupIterator *)&local_98,false);
      if (pIVar4 == (Isolate *)0x0) {
        puVar2 = (ulong *)0x0;
        goto LAB_0147f140;
      }
    }
    uVar5 = *(ulong *)pIVar4;
    *(ulong **)pIVar1 = puVar7;
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
    if (*(ulong **)(param_1 + 0x95a8) != puVar6) {
      *(ulong **)(param_1 + 0x95a8) = puVar6;
      v8::internal::HandleScope::DeleteExtensions(param_1);
    }
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)pIVar1;
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar2 + 1;
      *puVar2 = uVar5;
    }
    else {
      puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    }
    puVar7 = *(ulong **)pIVar1;
    puVar6 = *(ulong **)(param_1 + 0x95a8);
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  }
LAB_0147f140:
  *(ulong **)pIVar1 = puVar7;
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
  if (*(ulong **)(param_1 + 0x95a8) != puVar6) {
    *(ulong **)(param_1 + 0x95a8) = puVar6;
    v8::internal::HandleScope::DeleteExtensions(param_1);
  }
  return puVar2;
}

