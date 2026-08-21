
undefined8 * FUN_0109e4c0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  Isolate *pIVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  ulong *extraout_x1;
  ulong *extraout_x1_00;
  int in_w3;
  ulong uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  Factory *this;
  int iVar17;
  ulong uVar18;
  long lVar19;
  ulong uStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  FUN_0109f34c();
  pcStack_18 = FUN_0109e4cc;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_0109f360();
  pcStack_28 = FUN_0109e4d8;
  puStack_30 = (undefined1 *)&puStack_20;
  FUN_0109f374();
  pcStack_78 = FUN_0109e4e4;
  pIVar7 = (Isolate *)(*extraout_x1 & 0xffffffff00000000);
  uVar18 = (ulong)pIVar7 | (ulong)*(uint *)(*extraout_x1 + 7);
  if (*(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)(pIVar7 + 0x95a0);
    puStack_80 = (undefined1 *)&puStack_30;
    if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
      puStack_80 = (undefined1 *)&puStack_30;
      puVar8 = (ulong *)v8::internal::HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
    *puVar8 = uVar18;
  }
  else {
    puStack_80 = (undefined1 *)&puStack_30;
    puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8),uVar18);
    uVar18 = *puVar8;
  }
  iVar3 = *(int *)(*extraout_x1 + 0xb);
  this = (Factory *)(*extraout_x1 & 0xffffffff00000000);
  iVar17 = iVar3 >> 1;
  uVar6 = iVar17 + in_w3;
  if ((uint)(*(int *)(uVar18 + 3) >> 1) < uVar6) {
    puVar9 = (ulong *)v8::internal::Factory::NewUninitializedFixedArray
                                (this,uVar6 + (uVar6 >> 1) + 0x10);
    uVar18 = *puVar9;
    uVar11 = *puVar8;
    iVar17 = *(int *)(uVar18 + 3) >> 1;
    uVar1 = *(int *)(uVar11 + 3) >> 1;
    uVar4 = iVar17 - in_w3;
    if (uVar4 <= uVar1) {
      uVar1 = uVar4;
    }
    uVar4 = iVar17 - (uVar1 + in_w3);
    if (0 < (int)uVar4) {
      uVar2 = *(undefined4 *)(this + 0xa8);
      lVar19 = uVar18 + (long)(int)((uVar1 + in_w3) * 4);
      uVar13 = (ulong)uVar4;
      if (uVar4 < 8) {
        uVar15 = 0;
      }
      else {
        uVar15 = uVar13 & 0xfffffff8;
        puVar10 = (undefined8 *)(lVar19 + 0x17);
        uVar16 = uVar15;
        do {
          puVar10[-1] = CONCAT44(uVar2,uVar2);
          puVar10[-2] = CONCAT44(uVar2,uVar2);
          puVar10[1] = CONCAT44(uVar2,uVar2);
          *puVar10 = CONCAT44(uVar2,uVar2);
          uVar16 = uVar16 - 8;
          puVar10 = puVar10 + 4;
        } while (uVar16 != 0);
        if (uVar15 == uVar13) goto LAB_0109e6fc;
      }
      lVar14 = uVar15 - uVar13;
      puVar12 = (undefined4 *)(lVar19 + 7 + uVar15 * 4);
      do {
        bVar5 = lVar14 != -1;
        lVar14 = lVar14 + 1;
        *puVar12 = uVar2;
        puVar12 = puVar12 + 1;
      } while (bVar5);
    }
LAB_0109e6fc:
    if (uVar1 != 0) {
      v8::internal::Heap::CopyRange<v8::internal::CompressedObjectSlot>
                ((Heap *)(this + 0x8850),uVar18,uVar18 + (long)(in_w3 << 2) + 7,uVar11 + 7,uVar1,0);
    }
    uVar11 = *extraout_x1;
    uVar18 = *puVar9;
    *(int *)(uVar11 + 7) = (int)uVar18;
    if ((uVar18 & 1) != 0) {
      uVar13 = *(ulong *)((uVar18 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar13 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar11,uVar11 + 7,uVar18);
        uVar13 = *(ulong *)(uVar18 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar11,uVar11 + 7,uVar18);
      }
    }
  }
  else {
    if ((in_w3 == 0) && (0xc9 < iVar3)) {
      uVar11 = v8::internal::Heap::CanMoveObjectStart((Heap *)(this + 0x8850),uVar18);
      uVar18 = *puVar8;
      if ((uVar11 & 1) != 0) {
        uVar18 = v8::internal::Heap::LeftTrimFixedArray((Heap *)(this + 0x8850),uVar18,0);
        *puVar8 = uVar18;
        uVar11 = *extraout_x1;
        *(int *)(uVar11 + 7) = (int)uVar18;
        if ((uVar18 & 1) != 0) {
          uVar13 = *(ulong *)((uVar18 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar13 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar11,uVar11 + 7,uVar18);
            uVar13 = *(ulong *)(uVar18 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar11,uVar11 + 7,uVar18);
          }
        }
        goto LAB_0109e784;
      }
    }
    else if (iVar17 == 0) goto joined_r0x0109e6b8;
    v8::internal::Heap::MoveRange
              ((Heap *)(this + 0x8850),uVar18,uVar18 + 7 + (long)(in_w3 << 2),uVar18 + 7,iVar17,4);
  }
joined_r0x0109e6b8:
  if (in_w3 != 0) {
    FUN_0109f388();
    pcStack_88 = FUN_0109e7b0;
    puStack_90 = (undefined1 *)&puStack_80;
    FUN_0109f39c();
    pcStack_98 = FUN_0109e7bc;
    puStack_a0 = (undefined1 *)&puStack_90;
    FUN_0109f3b0();
    pcStack_f8 = FUN_0109e7c8;
    pIVar7 = (Isolate *)(*extraout_x1_00 & 0xffffffff00000000);
    uVar18 = (ulong)pIVar7 | (ulong)*(uint *)(*extraout_x1_00 + 7);
    if (*(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(pIVar7 + 0x95a0);
      puStack_100 = (undefined1 *)&puStack_a0;
      if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
        puStack_100 = (undefined1 *)&puStack_a0;
        puVar8 = (ulong *)v8::internal::HandleScope::Extend(pIVar7);
      }
      *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar18;
    }
    else {
      puStack_100 = (undefined1 *)&puStack_a0;
      puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8),uVar18);
    }
    uStack_108 = *extraout_x1_00;
    pIVar7 = (Isolate *)(uStack_108 & 0xffffffff00000000);
    uVar6 = v8::internal::JSObject::GetFastElementsUsage((JSObject *)&uStack_108);
    puVar10 = (undefined8 *)
              v8::internal::
              HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::New
                        (pIVar7,(ulong)uVar6,0,0);
    if (0 < (int)uVar6) {
      lVar19 = 0;
      iVar17 = -1;
      do {
        uVar18 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + (long)(int)lVar19 + 7);
        if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)(pIVar7 + 0x95a0);
          if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
            puVar9 = (ulong *)v8::internal::HandleScope::Extend(pIVar7);
          }
          *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
          *puVar9 = uVar18;
        }
        else {
          puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar18);
        }
        puVar10 = (undefined8 *)
                  v8::internal::
                  Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::
                  Add(pIVar7,puVar10,iVar17 + 1,puVar9,0xc0,0);
        lVar19 = lVar19 + 4;
        iVar17 = iVar17 + 1;
      } while ((ulong)uVar6 * 4 - lVar19 != 0);
      if (0 < iVar17) {
        uStack_108 = *puVar10;
        v8::internal::NumberDictionary::UpdateMaxNumberKey
                  ((NumberDictionary *)&uStack_108,iVar17,extraout_x1_00);
      }
    }
    return puVar10;
  }
LAB_0109e784:
  *(uint *)(*extraout_x1 + 0xb) = uVar6 * 2;
  return (undefined8 *)(ulong)uVar6;
}

