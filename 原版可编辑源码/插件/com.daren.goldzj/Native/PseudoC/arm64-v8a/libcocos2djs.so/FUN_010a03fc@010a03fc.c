
undefined8 FUN_010a03fc(undefined8 param_1,ulong *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  ulong uVar6;
  Isolate *pIVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  Factory *this;
  ulong local_28;
  
  local_28 = *param_2;
  if ((*(uint *)((local_28 & 0xffffffff00000000 | (ulong)*(uint *)(local_28 - 1)) + 0xb) >> 0x14 & 1
      ) != 0) {
    return 0;
  }
  uVar6 = v8::internal::JSObject::WouldConvertToSlowElements((JSObject *)&local_28,param_3);
  if ((uVar6 & 1) != 0) {
    return 0;
  }
  pIVar7 = (Isolate *)(*param_2 & 0xffffffff00000000);
  uVar6 = (ulong)pIVar7 | (ulong)*(uint *)(*param_2 + 7);
  if (*(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar8 = (ulong *)v8::internal::HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
    *puVar8 = uVar6;
  }
  else {
    puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8),uVar6);
  }
  this = (Factory *)((ulong)*(uint *)((long)param_2 + 4) << 0x20);
  puVar9 = (ulong *)v8::internal::Factory::NewUninitializedFixedArray
                              (this,param_3 + (param_3 + 1 >> 1) + 0x11);
  uVar10 = *puVar8;
  uVar6 = *puVar9;
  uVar2 = *(int *)(uVar10 + 3) >> 1;
  uVar3 = *(int *)(uVar6 + 3) >> 1;
  if (uVar3 <= uVar2) {
    uVar2 = uVar3;
  }
  uVar3 = uVar3 - uVar2;
  if (0 < (int)uVar3) {
    uVar4 = *(undefined4 *)(this + 0xa8);
    lVar1 = uVar6 + (long)(int)(uVar2 << 2);
    uVar12 = (ulong)uVar3;
    if (uVar3 < 8) {
      uVar14 = 0;
    }
    else {
      uVar14 = uVar12 & 0xfffffff8;
      puVar15 = (undefined8 *)(lVar1 + 0x17);
      uVar16 = uVar14;
      do {
        puVar15[-1] = CONCAT44(uVar4,uVar4);
        puVar15[-2] = CONCAT44(uVar4,uVar4);
        puVar15[1] = CONCAT44(uVar4,uVar4);
        *puVar15 = CONCAT44(uVar4,uVar4);
        uVar16 = uVar16 - 8;
        puVar15 = puVar15 + 4;
      } while (uVar16 != 0);
      if (uVar14 == uVar12) goto LAB_010a054c;
    }
    lVar13 = uVar12 - uVar14;
    puVar11 = (undefined4 *)(lVar1 + 7 + uVar14 * 4);
    do {
      lVar13 = lVar13 + -1;
      *puVar11 = uVar4;
      puVar11 = puVar11 + 1;
    } while (lVar13 != 0);
  }
LAB_010a054c:
  if (uVar2 != 0) {
    v8::internal::Heap::CopyRange<v8::internal::CompressedObjectSlot>
              ((Heap *)(this + 0x8850),uVar6,uVar6 + 7,uVar10 + 7,uVar2,0);
  }
  bVar5 = v8::internal::JSObject::UpdateAllocationSite<(v8::internal::AllocationSiteUpdateMode)1>
                    (param_2,0xb);
  if (bVar5) {
    return 0;
  }
  uVar10 = *param_2;
  uVar6 = *puVar9;
  *(int *)(uVar10 + 7) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar12 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar12 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar10,uVar10 + 7,uVar6);
      uVar12 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      v8::internal::Heap_GenerationalBarrierSlow(uVar10,uVar10 + 7,uVar6);
    }
  }
  return 1;
}

