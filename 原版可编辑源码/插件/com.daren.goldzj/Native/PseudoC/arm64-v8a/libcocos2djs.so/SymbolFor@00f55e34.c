
/* v8::internal::Isolate::SymbolFor(v8::internal::RootIndex,
   v8::internal::Handle<v8::internal::String>, bool) */

ulong * __thiscall
v8::internal::Isolate::SymbolFor(Isolate *this,ushort param_2,ulong *param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  Isolate *pIVar10;
  long lVar11;
  ulong uVar12;
  ulong local_48;
  
  local_48 = *param_3;
  if (0x1f < *(ushort *)((local_48 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_48 - 1))) {
    param_3 = (ulong *)StringTable::LookupString(this,param_3);
    local_48 = *param_3;
  }
  pIVar10 = this + (ulong)param_2 * 8 + 0x80;
  lVar11 = *(long *)pIVar10;
  if ((*(uint *)(local_48 + 3) & 1) == 0) {
    uVar3 = *(uint *)(local_48 + 3) >> 3;
  }
  else {
    uVar3 = String::ComputeAndSetHash((String *)&local_48);
  }
  uVar2 = (*(int *)(lVar11 + 0xf) >> 1) - 1;
  uVar3 = uVar2 & uVar3;
  local_48 = (ulong)uVar3;
  lVar7 = (ulong)(uVar3 * 3) << 0x22;
  lVar11 = lVar11 + 7;
  iVar8 = *(int *)((lVar7 + 0x1400000000 >> 0x20) + lVar11);
  if (iVar8 == *(int *)(this + 0xa0)) {
LAB_00f55f74:
    local_48 = 0xffffffffffffffff;
    if ((param_4 & 1) == 0) {
      puVar4 = (ulong *)Factory::NewSymbol((Factory *)this,1);
    }
    else {
      puVar4 = (ulong *)Factory::NewPrivateSymbol();
    }
    uVar12 = *puVar4;
    uVar9 = *param_3;
    *(int *)(uVar12 + 0xb) = (int)uVar9;
    if ((uVar9 & 1) != 0) {
      uVar6 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar12,uVar12 + 0xb,uVar9);
        uVar6 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar12,uVar12 + 0xb,uVar9);
      }
    }
    puVar5 = (undefined8 *)
             BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::Add
                       (this,pIVar10,param_3,puVar4,0xc0,&local_48);
    if (param_2 == 0x1da) {
      *(undefined8 *)(this + 0xf50) = *puVar5;
    }
    else if (param_2 == 0x1d9) {
      *(undefined8 *)(this + 0xf48) = *puVar5;
    }
    else {
      if (param_2 != 0x1d8) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      *(uint *)(*puVar4 + 7) = *(uint *)(*puVar4 + 7) | 4;
      *(undefined8 *)(this + 0xf40) = *puVar5;
    }
  }
  else {
    if (iVar8 != (int)*param_3) {
      iVar8 = 1;
      do {
        local_48 = (ulong)((int)local_48 + iVar8 & uVar2);
        lVar7 = local_48 * 0xc00000000;
        iVar1 = *(int *)((lVar7 + 0x1400000000 >> 0x20) + lVar11);
        if (iVar1 == *(int *)(this + 0xa0)) goto LAB_00f55f74;
        iVar8 = iVar8 + 1;
      } while (iVar1 != (int)*param_3);
    }
    uVar9 = *(ulong *)pIVar10 & 0xffffffff00000000 |
            (ulong)*(uint *)(*(ulong *)pIVar10 + (lVar7 + 0x1800000000 >> 0x20) + 7);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(this + 0x95a0);
      if (puVar4 == *(ulong **)(this + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(this);
      }
      *(ulong **)(this + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar9;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar9);
    }
  }
  return puVar4;
}

