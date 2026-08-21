
void FUN_01571a14(Isolate *param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  Isolate *pIVar2;
  undefined4 *puVar3;
  ulong *puVar4;
  uint uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  Isolate *pIVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  
  uVar5 = *(uint *)(*param_2 + 7);
  uVar6 = *(uint *)(*param_2 + 3);
  pIVar2 = param_1 + 0x95a0;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar2;
    if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
      puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar7 + 1;
    *puVar7 = (ulong)(param_1 + uVar5);
  }
  else {
    puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),
                                 (ulong)(param_1 + uVar5));
  }
  uVar6 = uVar6 >> 1;
  if ((uVar6 & 0xfe) == 4) {
    puVar8 = (ulong *)v8::internal::Factory::CopyFixedDoubleArray((Factory *)param_1,puVar7);
  }
  else {
    puVar8 = puVar7;
    if ((*(int *)(*puVar7 - 1) + (int)param_1 != *(int *)(param_1 + 0xe8)) &&
       (puVar8 = (ulong *)v8::internal::Factory::CopyFixedArray((Factory *)param_1,puVar7),
       1 < *(int *)(*puVar7 + 3))) {
      iVar16 = 0;
      lVar12 = 0;
      do {
        lVar1 = (long)iVar16 + 7;
        pIVar13 = param_1 + *(uint *)(*puVar8 + lVar1);
        if (((ulong)pIVar13 & 1) != 0) {
          if (*(short *)(((ulong)param_1 | 7) + (ulong)*(uint *)(pIVar13 + -1)) == 0x56) {
            puVar4 = *(ulong **)pIVar2;
            puVar11 = *(ulong **)(param_1 + 0x95a8);
            *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
            if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar9 = puVar4;
              if (puVar11 == puVar4) {
                puVar9 = (ulong *)v8::internal::HandleScope::Extend(param_1);
              }
              *(ulong **)pIVar2 = puVar9 + 1;
              *puVar9 = (ulong)pIVar13;
            }
            else {
              puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(param_1 + 0x95b8),
                                           (ulong)pIVar13);
            }
            puVar9 = (ulong *)FUN_01571a14(param_1,puVar9,param_3);
            uVar15 = *puVar8;
            uVar14 = *puVar9;
            puVar3 = (undefined4 *)(uVar15 + lVar1);
            *puVar3 = (int)uVar14;
            if ((uVar14 & 1) != 0) {
              uVar10 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
              if (((uint)uVar10 >> 0x12 & 1) != 0) {
                v8::internal::Heap_MarkingBarrierSlow(uVar15,puVar3,uVar14);
                uVar10 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar10 & 0x18) != 0) &&
                 ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                v8::internal::Heap_GenerationalBarrierSlow(uVar15,puVar3,uVar14);
              }
            }
            *(ulong **)pIVar2 = puVar4;
            *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
            if (*(ulong **)(param_1 + 0x95a8) != puVar11) {
LAB_01571b3c:
              *(ulong **)(param_1 + 0x95a8) = puVar11;
              v8::internal::HandleScope::DeleteExtensions(param_1);
            }
          }
          else if (*(short *)(((ulong)param_1 | 7) + (ulong)*(uint *)(pIVar13 + -1)) == 0x82) {
            puVar4 = *(ulong **)pIVar2;
            puVar11 = *(ulong **)(param_1 + 0x95a8);
            *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
            if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar9 = puVar4;
              if (puVar11 == puVar4) {
                puVar9 = (ulong *)v8::internal::HandleScope::Extend(param_1);
              }
              *(ulong **)pIVar2 = puVar9 + 1;
              *puVar9 = (ulong)pIVar13;
            }
            else {
              puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(param_1 + 0x95b8),
                                           (ulong)pIVar13);
              pIVar13 = (Isolate *)*puVar9;
            }
            puVar9 = (ulong *)FUN_01571608(param_1,puVar9,*(int *)(pIVar13 + 7) >> 1,param_3);
            uVar15 = *puVar8;
            uVar14 = *puVar9;
            puVar3 = (undefined4 *)(uVar15 + lVar1);
            *puVar3 = (int)uVar14;
            if ((uVar14 & 1) != 0) {
              uVar10 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
              if (((uint)uVar10 >> 0x12 & 1) != 0) {
                v8::internal::Heap_MarkingBarrierSlow(uVar15,puVar3,uVar14);
                uVar10 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar10 & 0x18) != 0) &&
                 ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                v8::internal::Heap_GenerationalBarrierSlow(uVar15,puVar3,uVar14);
              }
            }
            *(ulong **)pIVar2 = puVar4;
            *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
            if (*(ulong **)(param_1 + 0x95a8) != puVar11) goto LAB_01571b3c;
          }
        }
        lVar12 = lVar12 + 1;
        iVar16 = iVar16 + 4;
      } while (lVar12 < *(int *)(*puVar7 + 3) >> 1);
    }
  }
  v8::internal::Factory::NewJSArrayWithElements
            (param_1,puVar8,uVar6,*(int *)(*puVar8 + 3) >> 1,param_3);
  return;
}

