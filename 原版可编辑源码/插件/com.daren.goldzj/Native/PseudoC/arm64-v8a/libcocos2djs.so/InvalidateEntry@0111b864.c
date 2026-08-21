
/* v8::internal::PropertyCell::InvalidateEntry(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::GlobalDictionary>, v8::internal::InternalIndex) */

ulong * v8::internal::PropertyCell::InvalidateEntry(Isolate *param_1,ulong *param_2,int param_3)

{
  long lVar1;
  Isolate *pIVar2;
  undefined4 *puVar3;
  uint uVar4;
  bool bVar5;
  ulong *puVar6;
  ulong *puVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_48;
  
  lVar1 = (long)(param_3 * 4 + 0x14) + 7;
  uVar10 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + lVar1);
  pIVar2 = param_1 + 0x95a0;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pIVar2;
    if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar6 + 1;
    *puVar6 = uVar10;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
    uVar10 = *puVar6;
  }
  uVar10 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 3);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar2;
    if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar7 + 1;
    *puVar7 = uVar10;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
  }
  puVar7 = (ulong *)Factory::NewPropertyCell((Factory *)param_1,puVar7,1);
  uVar10 = *puVar6;
  uVar11 = *puVar7;
  uVar8 = *(uint *)(uVar10 + 0xb);
  *(uint *)(uVar11 + 0xb) = uVar8;
  if ((uVar8 & 1) != 0) {
    uVar10 = uVar10 & 0xffffffff00000000;
    uVar12 = uVar10 | uVar8;
    uVar10 = uVar10 | (ulong)uVar8 & 0xfffffffffffc0000;
    uVar9 = *(ulong *)(uVar10 + 8);
    if (((uint)uVar9 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar11,uVar11 + 0xb,uVar12);
      uVar9 = *(ulong *)(uVar10 | 8);
    }
    if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar11,uVar11 + 0xb,uVar12);
    }
  }
  uVar11 = *param_2;
  uVar10 = *puVar7;
  puVar3 = (undefined4 *)(uVar11 + lVar1);
  *puVar3 = (int)uVar10;
  if ((uVar10 & 1) != 0) {
    uVar9 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar9 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar11,puVar3,uVar10);
      uVar9 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar11,puVar3,uVar10);
    }
  }
  uVar8 = 0xc0;
  uVar4 = *(uint *)(*puVar6 + 0xb);
  if ((uVar4 & 1) == 0) {
    bVar5 = false;
  }
  else {
    bVar5 = uVar4 == *(uint *)(param_1 + 0xa8);
    uVar8 = 0;
    if (!bVar5) {
      uVar8 = 0xc0;
    }
  }
  uVar4 = *(int *)(*puVar6 + 7) >> 1 & 0xffffff3f;
  *(uint *)(*puVar7 + 7) = (uVar4 | uVar8) << 1;
  uVar10 = *puVar6;
  if (bVar5) {
    uVar11 = *(ulong *)(param_1 + 0xa0);
    *(int *)(uVar10 + 0xb) = (int)uVar11;
  }
  else {
    uVar11 = *(ulong *)(param_1 + 0xa8);
    *(int *)(uVar10 + 0xb) = (int)uVar11;
  }
  if ((uVar11 & 1) != 0) {
    uVar9 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar9 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,uVar10 + 0xb,uVar11);
      uVar9 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,uVar10 + 0xb,uVar11);
    }
  }
  *(uint *)(*puVar6 + 7) = uVar4 << 1 | 0x80;
  local_48 = *puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar6 + 0xf);
  DependentCode::DeoptimizeDependentCodeGroup(&local_48,param_1,2);
  return puVar7;
}

