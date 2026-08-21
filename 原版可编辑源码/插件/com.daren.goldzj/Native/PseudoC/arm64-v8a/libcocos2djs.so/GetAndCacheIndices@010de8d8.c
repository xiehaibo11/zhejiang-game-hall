
/* v8::internal::JSRegExpResult::GetAndCacheIndices(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSRegExpResult>) */

Isolate * v8::internal::JSRegExpResult::GetAndCacheIndices(Isolate *param_1,undefined8 param_2)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  uint uVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  Isolate *pIVar6;
  ulong *puVar7;
  undefined8 uVar8;
  long lVar9;
  Isolate *pIVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 local_c8;
  int local_c4;
  undefined8 local_bc;
  Isolate *local_b0;
  Isolate *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  uVar12 = *(ulong *)(param_1 + 0xbc0);
  uVar13 = (ulong)param_1 | 7;
  pIVar1 = param_1 + 0xbc0;
  local_c8 = 3;
  if ((*(short *)(uVar13 + *(uint *)(uVar12 - 1)) == 0x40) &&
     (local_c8 = 3, (*(byte *)(uVar12 + 7) & 1) != 0)) {
    local_c8 = 0;
  }
  local_bc = 0xc000000000;
  local_a8 = pIVar1;
  local_b0 = param_1;
  if ((*(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) & 0xffe0) ==
      0x20) {
    local_a8 = (Isolate *)StringTable::LookupString(param_1,pIVar1);
  }
  uStack_a0 = 0;
  uStack_90 = 0;
  local_78 = 0xffffffffffffffff;
  uStack_80 = 0xffffffffffffffff;
  local_98 = param_2;
  local_88 = param_2;
  LookupIterator::Start<false>((LookupIterator *)&local_c8);
  if (local_c4 == 4) {
    pIVar4 = local_b0 + 0xa0;
    uVar12 = *(ulong *)pIVar4;
  }
  else {
    pIVar4 = (Isolate *)Object::GetProperty((LookupIterator *)&local_c8,false);
    if (pIVar4 == (Isolate *)0x0) goto LAB_010ded94;
    uVar12 = *(ulong *)pIVar4;
  }
  if (((uVar12 & 1) == 0) ||
     (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x42e)) {
    return pIVar4;
  }
  pIVar4 = param_1 + 0x95a0;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar4;
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar4 = puVar5 + 1;
    *puVar5 = uVar12;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar12);
  }
  uVar12 = *(ulong *)(param_1 + 0xbd0);
  pIVar2 = param_1 + 0xbd0;
  local_c8 = 3;
  if ((*(short *)(uVar13 + *(uint *)(uVar12 - 1)) == 0x40) &&
     (local_c8 = 3, (*(byte *)(uVar12 + 7) & 1) != 0)) {
    local_c8 = 0;
  }
  local_bc = 0xc000000000;
  pIVar6 = pIVar2;
  local_b0 = param_1;
  if ((*(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) & 0xffe0) ==
      0x20) {
    pIVar6 = (Isolate *)StringTable::LookupString(param_1,pIVar2);
  }
  uStack_a0 = 0;
  uStack_90 = 0;
  local_78 = 0xffffffffffffffff;
  uStack_80 = 0xffffffffffffffff;
  local_a8 = pIVar6;
  local_98 = param_2;
  local_88 = param_2;
  LookupIterator::Start<false>((LookupIterator *)&local_c8);
  if (local_c4 == 4) {
    pIVar6 = local_b0 + 0xa0;
  }
  else {
    pIVar6 = (Isolate *)Object::GetProperty((LookupIterator *)&local_c8,false);
    if (pIVar6 == (Isolate *)0x0) goto LAB_010ded94;
  }
  uVar12 = *(ulong *)pIVar6;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar4;
    if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar4 = puVar7 + 1;
    *puVar7 = uVar12;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar12);
  }
  uVar12 = *(ulong *)(param_1 + 0xbd8);
  pIVar4 = param_1 + 0xbd8;
  local_c8 = 3;
  if ((*(short *)(uVar13 + *(uint *)(uVar12 - 1)) == 0x40) &&
     (local_c8 = 3, (*(byte *)(uVar12 + 7) & 1) != 0)) {
    local_c8 = 0;
  }
  local_bc = 0xc000000000;
  pIVar6 = pIVar4;
  local_b0 = param_1;
  if ((*(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) & 0xffe0) ==
      0x20) {
    pIVar6 = (Isolate *)StringTable::LookupString(param_1,pIVar4);
  }
  uStack_a0 = 0;
  uStack_90 = 0;
  local_78 = 0xffffffffffffffff;
  uStack_80 = 0xffffffffffffffff;
  local_a8 = pIVar6;
  local_98 = param_2;
  local_88 = param_2;
  LookupIterator::Start<false>((LookupIterator *)&local_c8);
  if (local_c4 == 4) {
    pIVar6 = local_b0 + 0xa0;
  }
  else {
    pIVar6 = (Isolate *)Object::GetProperty((LookupIterator *)&local_c8,false);
    if (pIVar6 == (Isolate *)0x0) goto LAB_010ded94;
  }
  uVar3 = *(uint *)(*puVar5 + 0xb);
  uVar12 = *puVar5 & 0xffffffff00000000;
  if (((uVar3 & 1) != 0) && (uVar3 == *(uint *)(uVar12 + 0xa0))) {
LAB_010deda8:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  uVar12 = uVar12 | uVar3;
  iVar11 = *(int *)(uVar12 + 7) >> 1;
  if (iVar11 == 1) {
    iVar11 = 0;
  }
  else {
    if (iVar11 != 2) goto LAB_010deda8;
    iVar11 = *(int *)(uVar12 + 0x27) >> 1;
  }
  uVar8 = RegExpMatchInfo::New(param_1,iVar11);
  lVar9 = RegExp::Exec(param_1,puVar5,puVar7,*(int *)pIVar6 >> 1,uVar8);
  if (lVar9 == 0) {
    return (Isolate *)0x0;
  }
  uVar12 = *(ulong *)(param_1 + 0xbc8);
  pIVar6 = param_1 + 0xbc8;
  local_c8 = 3;
  if ((*(short *)(uVar13 + *(uint *)(uVar12 - 1)) == 0x40) &&
     (local_c8 = 3, (*(byte *)(uVar12 + 7) & 1) != 0)) {
    local_c8 = 0;
  }
  local_bc = 0xc000000000;
  pIVar10 = pIVar6;
  local_b0 = param_1;
  if ((*(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) & 0xffe0) ==
      0x20) {
    pIVar10 = (Isolate *)StringTable::LookupString(param_1,pIVar6);
  }
  uStack_a0 = 0;
  uStack_90 = 0;
  local_78 = 0xffffffffffffffff;
  uStack_80 = 0xffffffffffffffff;
  local_a8 = pIVar10;
  local_98 = param_2;
  local_88 = param_2;
  LookupIterator::Start<false>((LookupIterator *)&local_c8);
  if (local_c4 == 4) {
    pIVar10 = local_b0 + 0xa0;
  }
  else {
    pIVar10 = (Isolate *)Object::GetProperty((LookupIterator *)&local_c8,false);
    if (pIVar10 == (Isolate *)0x0) goto LAB_010ded94;
  }
  pIVar10 = (Isolate *)JSRegExpResultIndices::BuildIndices(param_1,uVar8,pIVar10);
  lVar9 = Object::SetProperty(param_1,param_2,pIVar1,pIVar10,0,0);
  if (lVar9 != 0) {
    pIVar1 = param_1 + 0xa0;
    lVar9 = Object::SetProperty(param_1,param_2,pIVar6,pIVar1,0,0);
    if (((lVar9 != 0) &&
        (lVar9 = Object::SetProperty(param_1,param_2,pIVar4,pIVar1,0,0), lVar9 != 0)) &&
       (lVar9 = Object::SetProperty(param_1,param_2,pIVar2,pIVar1,0,0), lVar9 != 0)) {
      return pIVar10;
    }
  }
LAB_010ded94:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

