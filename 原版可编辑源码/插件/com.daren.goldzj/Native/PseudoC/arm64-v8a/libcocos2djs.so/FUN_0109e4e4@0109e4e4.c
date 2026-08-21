
undefined8 * FUN_0109e4e4(undefined8 param_1,ulong *param_2,undefined8 param_3,int param_4)

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
  ulong uStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  pIVar7 = (Isolate *)(*param_2 & 0xffffffff00000000);
  uVar18 = (ulong)pIVar7 | (ulong)*(uint *)(*param_2 + 7);
  if (*(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar8 = (ulong *)v8::internal::HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
    *puVar8 = uVar18;
  }
  else {
    puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8),uVar18);
    uVar18 = *puVar8;
  }
  iVar3 = *(int *)(*param_2 + 0xb);
  this = (Factory *)(*param_2 & 0xffffffff00000000);
  iVar17 = iVar3 >> 1;
  uVar6 = iVar17 + param_4;
  if ((uint)(*(int *)(uVar18 + 3) >> 1) < uVar6) {
    puVar9 = (ulong *)v8::internal::Factory::NewUninitializedFixedArray
                                (this,uVar6 + (uVar6 >> 1) + 0x10);
    uVar18 = *puVar9;
    uVar11 = *puVar8;
    iVar17 = *(int *)(uVar18 + 3) >> 1;
    uVar1 = *(int *)(uVar11 + 3) >> 1;
    uVar4 = iVar17 - param_4;
    if (uVar4 <= uVar1) {
      uVar1 = uVar4;
    }
    uVar4 = iVar17 - (uVar1 + param_4);
    if (0 < (int)uVar4) {
      uVar2 = *(undefined4 *)(this + 0xa8);
      lVar19 = uVar18 + (long)(int)((uVar1 + param_4) * 4);
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
                ((Heap *)(this + 0x8850),uVar18,uVar18 + (long)(param_4 << 2) + 7,uVar11 + 7,uVar1,0
                );
    }
    uVar11 = *param_2;
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
    if ((param_4 == 0) && (0xc9 < iVar3)) {
      uVar11 = v8::internal::Heap::CanMoveObjectStart((Heap *)(this + 0x8850),uVar18);
      uVar18 = *puVar8;
      if ((uVar11 & 1) != 0) {
        uVar18 = v8::internal::Heap::LeftTrimFixedArray((Heap *)(this + 0x8850),uVar18,0);
        *puVar8 = uVar18;
        uVar11 = *param_2;
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
              ((Heap *)(this + 0x8850),uVar18,uVar18 + 7 + (long)(param_4 << 2),uVar18 + 7,iVar17,4)
    ;
  }
joined_r0x0109e6b8:
  if (param_4 != 0) {
    FUN_0109f388();
    pcStack_58 = FUN_0109e7b0;
    puStack_60 = &stack0xffffffffffffffb0;
    FUN_0109f39c();
    pcStack_68 = FUN_0109e7bc;
    puStack_70 = (undefined1 *)&puStack_60;
    FUN_0109f3b0();
    pcStack_c8 = FUN_0109e7c8;
    pIVar7 = (Isolate *)(*extraout_x1 & 0xffffffff00000000);
    uVar18 = (ulong)pIVar7 | (ulong)*(uint *)(*extraout_x1 + 7);
    if (*(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(pIVar7 + 0x95a0);
      puStack_d0 = (undefined1 *)&puStack_70;
      if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
        puStack_d0 = (undefined1 *)&puStack_70;
        puVar8 = (ulong *)v8::internal::HandleScope::Extend(pIVar7);
      }
      *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar18;
    }
    else {
      puStack_d0 = (undefined1 *)&puStack_70;
      puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8),uVar18);
    }
    uStack_d8 = *extraout_x1;
    pIVar7 = (Isolate *)(uStack_d8 & 0xffffffff00000000);
    uVar6 = v8::internal::JSObject::GetFastElementsUsage((JSObject *)&uStack_d8);
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
        uStack_d8 = *puVar10;
        v8::internal::NumberDictionary::UpdateMaxNumberKey
                  ((NumberDictionary *)&uStack_d8,iVar17,extraout_x1);
      }
    }
    return puVar10;
  }
LAB_0109e784:
  *(uint *)(*param_2 + 0xb) = uVar6 * 2;
  return (undefined8 *)(ulong)uVar6;
}

