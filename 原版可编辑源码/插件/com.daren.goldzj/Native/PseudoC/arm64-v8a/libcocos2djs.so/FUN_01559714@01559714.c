
undefined8
FUN_01559714(Isolate *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5,
            long param_6)

{
  long lVar1;
  Isolate *pIVar2;
  short sVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint *puVar16;
  uint uVar17;
  ulong uVar18;
  int local_74;
  ulong local_68;
  
  pIVar2 = param_1 + 0x95a0;
  sVar3 = *(short *)(*param_3 + 5);
  plVar4 = (long *)v8::internal::DescriptorArray::Allocate(param_1,(int)sVar3,0);
  if ((int)*param_4 != *(int *)(param_1 + 1000)) {
    param_4 = (ulong *)FUN_01559ea4(param_1,param_4);
  }
  if (sVar3 == 0) {
    puVar5 = (ulong *)v8::internal::Factory::NewPropertyArray((Factory *)param_1,0);
    uVar9 = *param_3;
  }
  else {
    iVar14 = 0;
    lVar10 = 0x1000000000;
    lVar12 = (long)sVar3;
    do {
      uVar8 = *(uint *)(*param_3 + (lVar10 >> 0x20 | 3U));
      lVar12 = lVar12 + -1;
      lVar10 = lVar10 + 0xc00000000;
      iVar14 = (uVar8 >> 2 & (uVar8 >> 1 ^ 0xffffffff) & 1) + iVar14;
    } while (lVar12 != 0);
    puVar5 = (ulong *)v8::internal::Factory::NewPropertyArray((Factory *)param_1,iVar14);
    uVar9 = *param_3;
    if (sVar3 != 0) {
      lVar10 = 0;
      lVar12 = 0x1000000000;
      local_74 = 0;
      do {
        uVar15 = lVar12 >> 0x20;
        uVar8 = *(uint *)(uVar9 + uVar15 + 7);
        uVar11 = uVar9 & 0xffffffff00000000;
        uVar18 = uVar11 | uVar8;
        if (((uVar8 & 1) != 0) && (*(short *)((uVar11 | 7) + (ulong)*(uint *)(uVar18 - 1)) == 0x52))
        {
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar6 = *(ulong **)pIVar2;
            if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
              puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar2 = puVar6 + 1;
            *puVar6 = uVar18;
          }
          else {
            puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar18);
          }
          puVar6 = (ulong *)v8::internal::AccessorPair::Copy(param_1,puVar6);
          uVar18 = *puVar6;
          uVar9 = *param_3;
          uVar11 = uVar9 & 0xffffffff00000000;
        }
        uVar8 = *(uint *)(uVar9 + (uVar15 | 3));
        if ((uVar8 >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        uVar11 = uVar11 | *(uint *)(uVar15 + uVar9 + -1);
        uVar13 = (int)uVar8 >> 1;
        uVar17 = (uint)uVar18;
        if ((uVar8 >> 1 & 1) == 0) {
          if ((uVar18 & 1) == 0) {
            puVar6 = (ulong *)(*(long *)(param_6 + 8) - (long)(int)((uVar17 & 0x3ffffffe) << 2));
            uVar18 = *puVar6;
            if (5 < (int)uVar17) {
              FUN_0155a44c(param_1,uVar18,*param_5);
              uVar18 = *puVar6;
            }
          }
          if (v8::internal::FLAG_track_fields == '\0') {
            uVar8 = 0x100;
          }
          else if ((uVar18 & 1) == 0) {
            uVar8 = 0x40;
          }
          else if ((v8::internal::FLAG_track_double_fields == '\0') ||
                  (*(short *)(((ulong)param_1 | 7) + (ulong)*(uint *)(uVar18 - 1)) != 0x42)) {
            if ((v8::internal::FLAG_track_computed_fields == '\0') ||
               ((int)uVar18 != *(int *)(param_1 + 0x98))) {
              uVar8 = 0x100;
              if (v8::internal::FLAG_track_heap_object_fields != '\0') {
                uVar8 = 0xc0;
              }
            }
            else {
              uVar8 = 0;
            }
          }
          else {
            uVar8 = 0x80;
          }
          uVar13 = uVar8 | uVar13 & 0xfffffe3f;
        }
        else if (((uVar18 & 1) != 0) &&
                (*(short *)((uVar18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar18 - 1)) ==
                 0x52)) {
          puVar16 = (uint *)(uVar18 + 3);
          uVar8 = *puVar16;
          if ((uVar8 & 1) == 0) {
            puVar6 = (ulong *)(*(long *)(param_6 + 8) - (long)(int)((uVar8 & 0x3ffffffe) << 2));
            uVar9 = *puVar6;
            if (5 < (int)uVar8) {
              FUN_0155a44c(param_1,uVar9,*param_5);
              uVar9 = *puVar6;
            }
            *puVar16 = (uint)uVar9;
            if ((uVar9 & 1) != 0) {
              uVar15 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
              if (((uint)uVar15 >> 0x12 & 1) != 0) {
                v8::internal::Heap_MarkingBarrierSlow(uVar18,puVar16,uVar9);
                uVar15 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar15 & 0x18) != 0) &&
                 ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                v8::internal::Heap_GenerationalBarrierSlow(uVar18,puVar16,uVar9);
              }
            }
          }
          puVar16 = (uint *)(uVar18 + 7);
          uVar8 = *puVar16;
          if ((uVar8 & 1) == 0) {
            puVar6 = (ulong *)(*(long *)(param_6 + 8) - (long)(int)((uVar8 & 0x3ffffffe) << 2));
            uVar9 = *puVar6;
            if (5 < (int)uVar8) {
              FUN_0155a44c(param_1,uVar9,*param_5);
              uVar9 = *puVar6;
            }
            *puVar16 = (uint)uVar9;
            if ((uVar9 & 1) != 0) {
              uVar15 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
              if (((uint)uVar15 >> 0x12 & 1) != 0) {
                v8::internal::Heap_MarkingBarrierSlow(uVar18,puVar16,uVar9);
                uVar15 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar15 & 0x18) != 0) &&
                 ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                v8::internal::Heap_GenerationalBarrierSlow(uVar18,puVar16,uVar9);
              }
            }
          }
        }
        if ((uVar13 & 3) == 2) {
          uVar9 = *puVar5;
          uVar8 = local_74 << 0x13;
          lVar1 = uVar9 + (long)(local_74 << 2);
          *(int *)(lVar1 + 7) = (int)uVar18;
          if ((uVar18 & 1) != 0) {
            uVar15 = *(ulong *)((uVar18 & 0xfffffffffffc0000) + 8);
            lVar1 = lVar1 + 7;
            if (((uint)uVar15 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar9,lVar1,uVar18);
              uVar15 = *(ulong *)(uVar18 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar15 & 0x18) != 0) &&
               ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar9,lVar1,uVar18);
            }
          }
          local_68 = *plVar4;
          local_74 = local_74 + 1;
          uVar7 = v8::internal::FieldType::Any();
          v8::internal::DescriptorArray::Set
                    ((DescriptorArray *)&local_68,lVar10,uVar11,uVar7,
                     uVar13 & 0x39 | uVar8 | uVar13 & 0x1c0 | uVar13 & 0x7fe00 | 4);
        }
        else {
          local_68 = *plVar4;
          v8::internal::DescriptorArray::Set
                    ((DescriptorArray *)&local_68,lVar10,uVar11,uVar18,uVar13);
        }
        lVar10 = lVar10 + 1;
        uVar9 = *param_3;
        lVar12 = lVar12 + 0xc00000000;
      } while (sVar3 != lVar10);
    }
  }
  if (*(short *)(uVar9 + 5) != 0) {
    lVar12 = (long)*(short *)(uVar9 + 5);
    lVar10 = 0x1000000000;
    while( true ) {
      lVar12 = lVar12 + -1;
      uVar9 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + (lVar10 >> 0x20) + -1);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)pIVar2;
        if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
          puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar2 = puVar6 + 1;
        *puVar6 = uVar9;
      }
      else {
        puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
        uVar9 = *puVar6;
      }
      iVar14 = (int)uVar9;
      if (((((iVar14 == *(int *)(param_1 + 0xc70)) || (iVar14 == *(int *)(param_1 + 0x5d0))) ||
           (iVar14 == *(int *)(param_1 + 0x848))) ||
          ((iVar14 == *(int *)(param_1 + 0xc48) || (iVar14 == *(int *)(param_1 + 0xc18))))) ||
         ((iVar14 == *(int *)(param_1 + 0x960) || (iVar14 == *(int *)(param_1 + 0xa38))))) {
        v8::internal::LookupIterator::InternalUpdateProtector(param_1,param_5,puVar6);
      }
      if (lVar12 == 0) break;
      uVar9 = *param_3;
      lVar10 = lVar10 + 0xc00000000;
    }
  }
  local_68 = *param_2;
  v8::internal::Map::SetInstanceDescriptors
            ((Map *)&local_68,param_1,*plVar4,(int)*(short *)(*plVar4 + 5));
  if (1 < *(int *)(*param_4 + 7)) {
    uVar9 = FUN_0155a054(param_1,param_4,param_5,param_6);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    *(byte *)(*param_2 + 10) = *(byte *)(*param_2 + 10) & 7 | 0x60;
  }
  uVar9 = *param_2;
  uVar11 = *param_5;
  if ((int)uVar9 == 0) {
    *(undefined4 *)(uVar11 - 1) = 0;
  }
  else {
    v8::internal::Heap::VerifyObjectLayoutChange
              ((Heap *)(uVar11 & 0xffffffff00000000 | 0x8850),uVar11,uVar9);
    *(int *)(uVar11 - 1) = (int)uVar9;
    if (((uVar9 & 1) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
      v8::internal::Heap_MarkingBarrierSlow(uVar11,0,uVar9);
    }
  }
  uVar9 = *param_4;
  if (1 < *(int *)(uVar9 + 7)) {
    uVar11 = *param_5;
    *(int *)(uVar11 + 7) = (int)uVar9;
    if ((uVar9 & 1) != 0) {
      uVar15 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar15 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar11,uVar11 + 7,uVar9);
        uVar15 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar11,uVar11 + 7,uVar9);
      }
    }
  }
  if ((*(ushort *)(*puVar5 + 3) & 0x7fe) != 0) {
    local_68 = *param_5;
    v8::internal::JSReceiver::SetProperties((JSReceiver *)&local_68,*puVar5);
  }
  return 1;
}

