
undefined8 * FUN_010a0610(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  Isolate *pIVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong *extraout_x1;
  ulong *extraout_x1_00;
  int in_w3;
  ulong uVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  Factory *this;
  ulong uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  ulong uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  FUN_010a14f4();
  pcStack_58 = FUN_010a061c;
  pIVar8 = (Isolate *)(*extraout_x1 & 0xffffffff00000000);
  uVar19 = (ulong)pIVar8 | (ulong)*(uint *)(*extraout_x1 + 7);
  if (*(CanonicalHandleScope **)((ulong)pIVar8 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)(pIVar8 + 0x95a0);
    puStack_60 = &stack0xfffffffffffffff0;
    if (puVar9 == *(ulong **)(pIVar8 + 0x95a8)) {
      puStack_60 = &stack0xfffffffffffffff0;
      puVar9 = (ulong *)v8::internal::HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar9 + 1;
    *puVar9 = uVar19;
  }
  else {
    puStack_60 = &stack0xfffffffffffffff0;
    puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar8 | 0x95b8),uVar19);
    uVar19 = *puVar9;
  }
  iVar22 = *(int *)(*extraout_x1 + 0xb);
  this = (Factory *)(*extraout_x1 & 0xffffffff00000000);
  iVar7 = iVar22 >> 1;
  uVar2 = iVar7 + in_w3;
  if ((uint)(*(int *)(uVar19 + 3) >> 1) < uVar2) {
    puVar10 = (ulong *)v8::internal::Factory::NewUninitializedFixedArray
                                 (this,uVar2 + (uVar2 >> 1) + 0x10);
    uVar19 = *puVar10;
    uVar13 = *puVar9;
    iVar7 = *(int *)(uVar19 + 3) >> 1;
    uVar3 = *(int *)(uVar13 + 3) >> 1;
    uVar5 = iVar7 - in_w3;
    if (uVar5 <= uVar3) {
      uVar3 = uVar5;
    }
    uVar5 = iVar7 - (uVar3 + in_w3);
    if (0 < (int)uVar5) {
      uVar4 = *(undefined4 *)(this + 0xa8);
      lVar1 = uVar19 + (long)(int)((uVar3 + in_w3) * 4);
      uVar15 = (ulong)uVar5;
      if (uVar5 < 8) {
        uVar17 = 0;
      }
      else {
        uVar17 = uVar15 & 0xfffffff8;
        puVar11 = (undefined8 *)(lVar1 + 0x17);
        uVar18 = uVar17;
        do {
          puVar11[-1] = CONCAT44(uVar4,uVar4);
          puVar11[-2] = CONCAT44(uVar4,uVar4);
          puVar11[1] = CONCAT44(uVar4,uVar4);
          *puVar11 = CONCAT44(uVar4,uVar4);
          uVar18 = uVar18 - 8;
          puVar11 = puVar11 + 4;
        } while (uVar18 != 0);
        if (uVar17 == uVar15) goto LAB_010a0834;
      }
      lVar16 = uVar17 - uVar15;
      puVar14 = (undefined4 *)(lVar1 + 7 + uVar17 * 4);
      do {
        bVar6 = lVar16 != -1;
        lVar16 = lVar16 + 1;
        *puVar14 = uVar4;
        puVar14 = puVar14 + 1;
      } while (bVar6);
    }
LAB_010a0834:
    if (uVar3 != 0) {
      v8::internal::Heap::CopyRange<v8::internal::CompressedObjectSlot>
                ((Heap *)(this + 0x8850),uVar19,uVar19 + (long)(in_w3 << 2) + 7,uVar13 + 7,uVar3,0);
    }
    uVar13 = *extraout_x1;
    uVar19 = *puVar10;
    *(int *)(uVar13 + 7) = (int)uVar19;
    if ((uVar19 & 1) != 0) {
      uVar15 = *(ulong *)((uVar19 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar15 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar13,uVar13 + 7,uVar19);
        uVar15 = *(ulong *)(uVar19 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar13,uVar13 + 7,uVar19);
      }
    }
  }
  else {
    if ((in_w3 == 0) && (0xc9 < iVar22)) {
      uVar13 = v8::internal::Heap::CanMoveObjectStart((Heap *)(this + 0x8850),uVar19);
      uVar19 = *puVar9;
      if ((uVar13 & 1) != 0) {
        uVar19 = v8::internal::Heap::LeftTrimFixedArray((Heap *)(this + 0x8850),uVar19,0);
        *puVar9 = uVar19;
        uVar13 = *extraout_x1;
        *(int *)(uVar13 + 7) = (int)uVar19;
        if ((uVar19 & 1) != 0) {
          uVar15 = *(ulong *)((uVar19 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar15 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar13,uVar13 + 7,uVar19);
            uVar15 = *(ulong *)(uVar19 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar13,uVar13 + 7,uVar19);
          }
        }
        goto LAB_010a08bc;
      }
    }
    else if (iVar7 == 0) goto joined_r0x010a07f0;
    v8::internal::Heap::MoveRange
              ((Heap *)(this + 0x8850),uVar19,uVar19 + 7 + (long)(in_w3 << 2),uVar19 + 7,iVar7,4);
  }
joined_r0x010a07f0:
  if (in_w3 != 0) {
    FUN_010a1508();
    pcStack_68 = FUN_010a08e8;
    puStack_70 = (undefined1 *)&puStack_60;
    FUN_010a151c();
    pcStack_78 = FUN_010a08f4;
    puStack_80 = (undefined1 *)&puStack_70;
    FUN_010a1530();
    pcStack_d8 = FUN_010a0900;
    pIVar8 = (Isolate *)(*extraout_x1_00 & 0xffffffff00000000);
    uVar19 = (ulong)pIVar8 | (ulong)*(uint *)(*extraout_x1_00 + 7);
    if (*(CanonicalHandleScope **)((ulong)pIVar8 | 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)(pIVar8 + 0x95a0);
      puStack_e0 = (undefined1 *)&puStack_80;
      if (puVar9 == *(ulong **)(pIVar8 + 0x95a8)) {
        puStack_e0 = (undefined1 *)&puStack_80;
        puVar9 = (ulong *)v8::internal::HandleScope::Extend(pIVar8);
      }
      *(ulong **)(pIVar8 + 0x95a0) = puVar9 + 1;
      *puVar9 = uVar19;
    }
    else {
      puStack_e0 = (undefined1 *)&puStack_80;
      puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)((ulong)pIVar8 | 0x95b8),uVar19);
    }
    uStack_e8 = *extraout_x1_00;
    pIVar8 = (Isolate *)(uStack_e8 & 0xffffffff00000000);
    iVar7 = v8::internal::JSObject::GetFastElementsUsage((JSObject *)&uStack_e8);
    puVar11 = (undefined8 *)
              v8::internal::
              HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::New
                        (pIVar8,iVar7,0,0);
    if (0 < iVar7) {
      iVar21 = 0;
      iVar20 = 0;
      iVar22 = 0;
      iVar12 = -1;
      do {
        uVar19 = *puVar9;
        uVar2 = *(uint *)((long)iVar21 + 7 + uVar19);
        if (((uVar2 & 1) == 0) || (uVar2 != *(uint *)(pIVar8 + 0xa8))) {
          uVar19 = uVar19 & 0xffffffff00000000 | (ulong)*(uint *)(uVar19 + (long)iVar21 + 7);
          if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar10 = *(ulong **)(pIVar8 + 0x95a0);
            if (puVar10 == *(ulong **)(pIVar8 + 0x95a8)) {
              puVar10 = (ulong *)v8::internal::HandleScope::Extend(pIVar8);
            }
            *(ulong **)(pIVar8 + 0x95a0) = puVar10 + 1;
            *puVar10 = uVar19;
          }
          else {
            puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar19);
          }
          puVar11 = (undefined8 *)
                    v8::internal::
                    Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::
                    Add(pIVar8,puVar11,iVar20,puVar10,0xc0,0);
          iVar22 = iVar22 + 1;
          iVar12 = iVar20;
        }
        iVar20 = iVar20 + 1;
        iVar21 = iVar21 + 4;
      } while (iVar22 < iVar7);
      if (0 < iVar12) {
        uStack_e8 = *puVar11;
        v8::internal::NumberDictionary::UpdateMaxNumberKey
                  ((NumberDictionary *)&uStack_e8,iVar12,extraout_x1_00);
      }
    }
    return puVar11;
  }
LAB_010a08bc:
  *(uint *)(*extraout_x1 + 0xb) = uVar2 * 2;
  return (undefined8 *)(ulong)uVar2;
}

