
/* v8::internal::JSGlobalObject::EnsureEmptyPropertyCell(v8::internal::Handle<v8::internal::JSGlobalObject>,
   v8::internal::Handle<v8::internal::Name>, v8::internal::PropertyCellType,
   v8::internal::InternalIndex*) */

ulong * v8::internal::JSGlobalObject::EnsureEmptyPropertyCell
                  (ulong *param_1,long *param_2,int param_3,ulong *param_4)

{
  uint uVar1;
  uint uVar2;
  CanonicalHandleScope *pCVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  Isolate *pIVar10;
  ulong uVar11;
  ulong local_48;
  
  pIVar10 = (Isolate *)(*param_1 & 0xffffffff00000000);
  pCVar3 = *(CanonicalHandleScope **)((ulong)pIVar10 | 0x95b8);
  uVar11 = (ulong)pIVar10 | (ulong)*(uint *)(*param_1 + 3);
  if (pCVar3 == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar10 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar10 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar10);
    }
    *(ulong **)(pIVar10 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar11;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup(pCVar3,uVar11);
    uVar11 = *puVar4;
  }
  uVar2 = *(uint *)(*param_2 + 3);
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar2 >> 3;
  }
  else {
    local_48 = *param_2;
    uVar2 = String::ComputeAndSetHash((String *)&local_48);
  }
  uVar1 = (*(int *)(uVar11 + 0xf) >> 1) - 1;
  uVar2 = uVar1 & uVar2;
  uVar8 = *(uint *)(uVar11 + 7 + (long)(int)(uVar2 * 4 + 0x14));
  if (uVar8 != *(uint *)(pIVar10 + 0xa0)) {
    iVar9 = 1;
    do {
      if (*(int *)((uVar11 & 0xffffffff00000000 | (ulong)uVar8) + 3) == (int)*param_2) {
        if (param_4 != (ulong *)0x0) {
          *param_4 = (ulong)uVar2;
        }
        pCVar3 = *(CanonicalHandleScope **)((ulong)pIVar10 | 0x95b8);
        uVar11 = *puVar4 & 0xffffffff00000000 |
                 (ulong)*(uint *)(*puVar4 + (long)(int)(uVar2 * 4 + 0x14) + 7);
        if (pCVar3 == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)(pIVar10 + 0x95a0);
          if (puVar5 == *(ulong **)(pIVar10 + 0x95a8)) {
            puVar5 = (ulong *)HandleScope::Extend(pIVar10);
          }
          *(ulong **)(pIVar10 + 0x95a0) = puVar5 + 1;
          *puVar5 = uVar11;
        }
        else {
          puVar5 = (ulong *)CanonicalHandleScope::Lookup(pCVar3,uVar11);
        }
        puVar7 = (uint *)(*puVar5 + 7);
        if ((*puVar7 & 0x180) == 0x80) {
          puVar5 = (ulong *)PropertyCell::InvalidateEntry(pIVar10,puVar4,(ulong)uVar2);
          puVar7 = (uint *)(*puVar5 + 7);
        }
        *puVar7 = param_3 << 7;
        return puVar5;
      }
      uVar2 = uVar2 + iVar9 & uVar1;
      uVar8 = *(uint *)(uVar11 + 7 + (long)(int)(uVar2 * 4 + 0x14));
      iVar9 = iVar9 + 1;
    } while (uVar8 != *(uint *)(pIVar10 + 0xa0));
  }
  puVar5 = (ulong *)Factory::NewPropertyCell((Factory *)pIVar10,param_2,1);
  puVar6 = (undefined8 *)
           BaseNameDictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::
           Add(pIVar10,puVar4,param_2,puVar5,param_3 << 6,param_4);
  local_48 = *param_1;
  JSReceiver::SetProperties((JSReceiver *)&local_48,*puVar6);
  return puVar5;
}

