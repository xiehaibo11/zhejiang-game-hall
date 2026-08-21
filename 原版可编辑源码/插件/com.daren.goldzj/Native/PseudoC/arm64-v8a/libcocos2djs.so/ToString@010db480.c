
/* v8::internal::JSFunction::ToString(v8::internal::Handle<v8::internal::JSFunction>) */

ulong * v8::internal::JSFunction::ToString(ulong *param_1)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  CanonicalHandleScope *pCVar4;
  ulong *puVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  Isolate *pIVar10;
  ulong uVar11;
  undefined8 local_98;
  undefined8 local_8c;
  long local_80;
  Isolate *local_78;
  undefined8 uStack_70;
  ulong *local_68;
  undefined8 uStack_60;
  ulong *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  pIVar10 = (Isolate *)(*param_1 & 0xffffffff00000000);
  pCVar4 = *(CanonicalHandleScope **)((ulong)pIVar10 | 0x95b8);
  uVar11 = (ulong)pIVar10 | (ulong)*(uint *)(*param_1 + 0xb);
  if (pCVar4 == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar10 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar10 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar10);
    }
    *(ulong **)(pIVar10 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar11;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup(pCVar4,uVar11);
    uVar11 = *puVar5;
  }
  uVar8 = uVar11 & 0xffffffff00000000;
  uVar11 = uVar8 | *(uint *)(uVar11 + 0xf);
  if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x5b) {
    uVar11 = uVar8 | *(uint *)(uVar11 + 0xb);
  }
  if ((((uVar11 & 1) == 0) || ((int)uVar11 != *(int *)((uVar11 & 0xffffffff00000000) + 0xa0))) &&
     (local_98 = uVar11, uVar11 = Script::IsUserJavaScript((Script *)&local_98), (uVar11 & 1) != 0))
  {
    uVar11 = *(ulong *)(pIVar10 + 0xb38);
    local_78 = pIVar10 + 0xb38;
    local_80 = (ulong)*(uint *)((long)param_1 + 4) << 0x20;
    uVar7 = 2;
    if (*(short *)(((ulong)*(uint *)((long)param_1 + 4) << 0x20 | 7) + (ulong)*(uint *)(uVar11 - 1))
        == 0x40) {
      uVar7 = (*(int *)(uVar11 + 7) << 1 ^ 0xffffffffU) & 2;
    }
    local_8c = 0xc000000000;
    local_98._0_4_ = uVar7;
    if ((*(ushort *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) & 0xffe0) ==
        0x20) {
      local_78 = (Isolate *)StringTable::LookupString();
    }
    uStack_70 = 0;
    uStack_60 = 0;
    local_48 = 0xffffffffffffffff;
    uStack_50 = 0xffffffffffffffff;
    local_68 = param_1;
    local_58 = param_1;
    LookupIterator::Start<false>((LookupIterator *)&local_98);
    if (local_98._4_4_ == 4) {
      uVar11 = *(ulong *)(local_80 + 0xa0);
    }
    else {
      puVar6 = (ulong *)JSReceiver::GetDataProperty((LookupIterator *)&local_98);
      uVar11 = *puVar6;
    }
    if (((uVar11 & 1) != 0) &&
       (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x5a)) {
      iVar3 = *(int *)(uVar11 + 7);
      uVar9 = *puVar5 & 0xffffffff00000000;
      uVar8 = uVar9 | *(uint *)(*puVar5 + 0xf);
      if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x5b) {
        uVar8 = uVar9 | *(uint *)(uVar8 + 0xb);
      }
      pCVar4 = *(CanonicalHandleScope **)((ulong)pIVar10 | 0x95b8);
      iVar1 = *(int *)(uVar11 + 3) >> 1;
      uVar11 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 3);
      if (pCVar4 == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)(pIVar10 + 0x95a0);
        if (puVar5 == *(ulong **)(pIVar10 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(pIVar10);
        }
        *(ulong **)(pIVar10 + 0x95a0) = puVar5 + 1;
        *puVar5 = uVar11;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup(pCVar4,uVar11);
      }
      if ((iVar1 == 0) && (*(int *)(*puVar5 + 7) == iVar3 >> 1)) {
        return puVar5;
      }
      puVar5 = (ulong *)Factory::NewProperSubString((Factory *)pIVar10,puVar5,iVar1);
      return puVar5;
    }
    local_98 = *puVar5;
    uVar11 = SharedFunctionInfo::HasSourceCode((SharedFunctionInfo *)&local_98);
    if ((uVar11 & 1) != 0) {
      local_98 = *puVar5;
      uVar2 = *(ushort *)(local_98 + 0x19);
      if ((uVar2 != 0xffff) &&
         (iVar3 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_98),
         iVar3 - (uint)uVar2 != -1)) {
        puVar5 = (ulong *)SharedFunctionInfo::GetSourceCodeHarmony(puVar5);
        return puVar5;
      }
      Isolate::CountUsage(pIVar10,0x31);
    }
  }
  puVar5 = (ulong *)FUN_010db750(puVar5);
  return puVar5;
}

