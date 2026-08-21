
undefined8
FUN_01558e24(Isolate *param_1,ulong *param_2,ulong *param_3,undefined8 param_4,long *param_5,
            ulong *param_6,uint param_7,long param_8)

{
  int iVar1;
  long lVar2;
  Isolate *pIVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  int *piVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined4 *puVar20;
  ulong *puVar21;
  uint local_6c;
  ulong local_68;
  
  iVar15 = *(int *)(*param_5 + 3);
  uVar18 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 - 1);
  pIVar3 = param_1 + 0x95a0;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar3;
    if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
      puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar3 = puVar7 + 1;
    *puVar7 = uVar18;
  }
  else {
    puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar18);
  }
  puVar7 = (ulong *)v8::internal::Factory::CopyFixedArrayWithMap(param_1,param_3,puVar7);
  uVar18 = *puVar7;
  if ((int)*(uint *)(uVar18 + 0xf) >> 1 != 0) {
    lVar19 = (long)((ulong)*(uint *)(uVar18 + 0xf) << 0x20) >> 0x21;
    lVar17 = 0x1800000000;
    while( true ) {
      lVar19 = lVar19 + -1;
      lVar14 = (lVar17 >> 0x20) + 7;
      uVar4 = *(uint *)(lVar14 + uVar18);
      if (((uVar4 & 1) != 0) &&
         (uVar16 = uVar18 & 0xffffffff00000000 | (ulong)uVar4,
         *(short *)((uVar18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar16 - 1)) == 0x52)) {
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar8 = *(ulong **)pIVar3;
          if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
            puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar3 = puVar8 + 1;
          *puVar8 = uVar16;
        }
        else {
          puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar16);
        }
        puVar8 = (ulong *)v8::internal::AccessorPair::Copy(param_1,puVar8);
        uVar16 = *puVar7;
        uVar18 = *puVar8;
        puVar20 = (undefined4 *)(uVar16 + lVar14);
        *puVar20 = (int)uVar18;
        if ((uVar18 & 1) != 0) {
          uVar12 = *(ulong *)((uVar18 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar12 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar16,puVar20,uVar18);
            uVar12 = *(ulong *)(uVar18 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar16,puVar20,uVar18);
          }
        }
      }
      if (lVar19 == 0) break;
      uVar18 = *puVar7;
      lVar17 = lVar17 + 0xc00000000;
    }
  }
  param_7 = param_7 & 1;
  puVar8 = (ulong *)FUN_01559ea4(param_1,param_4);
  if (1 < iVar15) {
    iVar13 = 0;
    lVar17 = 0;
    do {
      lVar17 = lVar17 + 1;
      uVar4 = *(int *)(*param_5 + (long)iVar13 + 7) >> 1;
      uVar5 = uVar4 >> 2;
      uVar6 = uVar5 & 0x1fffffff;
      uVar4 = uVar4 & 3;
      puVar21 = (ulong *)(*(long *)(param_8 + 8) - (ulong)(uVar5 << 3));
      uVar18 = *puVar21;
      iVar1 = uVar6 * 2 + 2;
      if (*(ushort *)((uVar18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar18 - 1)) < 0x40) {
        uVar5 = *(uint *)(uVar18 + 3);
        local_68 = uVar18;
        if ((uVar5 & 0xc0000003) == 0) {
          local_6c = uVar5 >> 3 & 0xffffff;
        }
        else if (((uVar5 & 3) == 2) ||
                (uVar18 = v8::internal::String::SlowAsArrayIndex((String *)&local_68,&local_6c),
                (uVar18 & 1) == 0)) goto LAB_015590cc;
        v8::internal::ClassBoilerplate::AddToElementsTemplate
                  (param_1,puVar8,local_6c,uVar6,uVar4,iVar1);
      }
      else {
LAB_015590cc:
        if ((*(ushort *)((*puVar21 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar21 - 1)) &
            0xffe0) == 0x20) {
          puVar21 = (ulong *)v8::internal::StringTable::LookupString(param_1,puVar21);
        }
        v8::internal::ClassBoilerplate::AddToPropertiesTemplate
                  (param_1,puVar7,puVar21,uVar6,uVar4,iVar1);
      }
      iVar13 = iVar13 + 4;
    } while (lVar17 < iVar15 >> 1);
  }
  uVar18 = *puVar7;
  if ((int)*(uint *)(uVar18 + 0xf) >> 1 == 0) {
LAB_01559430:
    if (param_7 == 0) {
      uVar18 = *puVar7;
    }
    else {
      piVar11 = (int *)v8::internal::
                       BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>
                       ::Add(param_1,puVar7,param_1 + 0x820,param_1 + 0xe50,0xd9,0);
      uVar18 = *puVar7;
      if (*piVar11 != (int)uVar18) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","*dict == *properties_dictionary");
      }
    }
    if ((int)*(uint *)(uVar18 + 0xf) >> 1 != 0) {
      lVar19 = (long)((ulong)*(uint *)(uVar18 + 0xf) << 0x20) >> 0x21;
      lVar17 = 0x1400000000;
      while( true ) {
        lVar19 = lVar19 + -1;
        uVar4 = *(uint *)(uVar18 + (lVar17 >> 0x20) + 7);
        if ((uVar4 != *(uint *)(param_1 + 0xa8)) && (uVar4 != *(uint *)(param_1 + 0xa0))) {
          uVar18 = uVar18 & 0xffffffff00000000 | (ulong)uVar4;
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar21 = *(ulong **)pIVar3;
            if (puVar21 == *(ulong **)(param_1 + 0x95a8)) {
              puVar21 = (ulong *)v8::internal::HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar3 = puVar21 + 1;
            *puVar21 = uVar18;
          }
          else {
            puVar21 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar18);
            uVar18 = *puVar21;
          }
          iVar15 = (int)uVar18;
          if (((((iVar15 == *(int *)(param_1 + 0xc70)) || (iVar15 == *(int *)(param_1 + 0x5d0))) ||
               (iVar15 == *(int *)(param_1 + 0x848))) ||
              ((iVar15 == *(int *)(param_1 + 0xc48) || (iVar15 == *(int *)(param_1 + 0xc18))))) ||
             ((iVar15 == *(int *)(param_1 + 0x960) || (iVar15 == *(int *)(param_1 + 0xa38))))) {
            v8::internal::LookupIterator::InternalUpdateProtector(param_1,param_6,puVar21);
          }
        }
        if (lVar19 == 0) break;
        uVar18 = *puVar7;
        lVar17 = lVar17 + 0xc00000000;
      }
    }
    if (1 < *(int *)(*puVar8 + 7)) {
      uVar18 = FUN_0155a054(param_1,puVar8,param_6,param_8);
      if ((uVar18 & 1) == 0) {
        return 0;
      }
      *(byte *)(*param_2 + 10) = *(byte *)(*param_2 + 10) & 7 | 0x60;
    }
    uVar16 = *param_6;
    uVar18 = *param_2;
    if ((int)uVar18 == 0) {
      *(undefined4 *)(uVar16 - 1) = 0;
    }
    else {
      v8::internal::Heap::VerifyObjectLayoutChange
                ((Heap *)(uVar16 & 0xffffffff00000000 | 0x8850),uVar16,uVar18);
      *(int *)(uVar16 - 1) = (int)uVar18;
      if (((uVar18 & 1) != 0) && ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
        v8::internal::Heap_MarkingBarrierSlow(uVar16,0,uVar18);
      }
    }
    uVar16 = *param_6;
    uVar18 = *puVar7;
    *(int *)(uVar16 + 3) = (int)uVar18;
    if ((uVar18 & 1) != 0) {
      uVar12 = *(ulong *)((uVar18 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar12 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar16,uVar16 + 3,uVar18);
        uVar12 = *(ulong *)(uVar18 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar16,uVar16 + 3,uVar18);
      }
    }
    uVar18 = *puVar8;
    if (1 < *(int *)(uVar18 + 7)) {
      uVar16 = *param_6;
      *(int *)(uVar16 + 7) = (int)uVar18;
      if ((uVar18 & 1) != 0) {
        uVar12 = *(ulong *)((uVar18 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar12 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar16,uVar16 + 7,uVar18);
          uVar12 = *(ulong *)(uVar18 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          v8::internal::Heap_GenerationalBarrierSlow(uVar16,uVar16 + 7,uVar18);
        }
      }
    }
    return 1;
  }
  lVar14 = (long)((ulong)*(uint *)(uVar18 + 0xf) << 0x20) >> 0x21;
  lVar17 = 0x1800000000;
  lVar19 = 0x1400000000;
  do {
    lVar14 = lVar14 + -1;
    uVar4 = *(uint *)(uVar18 + (lVar19 >> 0x20) + 7);
    if ((uVar4 == *(uint *)(param_1 + 0xa8)) || (uVar4 == *(uint *)(param_1 + 0xa0)))
    goto LAB_015593d8;
    if (param_7 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      if (uVar4 != *(uint *)(param_1 + 0x820)) {
        uVar5 = param_7;
      }
    }
    param_7 = uVar5;
    uVar18 = uVar18 & 0xffffffff00000000 | (ulong)uVar4;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar21 = *(ulong **)pIVar3;
      if (puVar21 == *(ulong **)(param_1 + 0x95a8)) {
        puVar21 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar3 = puVar21 + 1;
      *puVar21 = uVar18;
    }
    else {
      puVar21 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar18);
    }
    lVar2 = (lVar17 >> 0x20) + 7;
    uVar4 = *(uint *)(*puVar7 + lVar2);
    uVar18 = *puVar7 & 0xffffffff00000000 | (ulong)uVar4;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)pIVar3;
      if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
        puVar9 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar3 = puVar9 + 1;
      *puVar9 = uVar18;
      if ((uVar4 & 1) != 0) goto LAB_015592e4;
LAB_0155922c:
      puVar21 = (ulong *)FUN_0155a39c(param_1,param_8,uVar18,param_6,param_1 + 200,puVar21);
      if (puVar21 == (ulong *)0x0) {
        return 0;
      }
      uVar16 = *puVar7;
      uVar18 = *puVar21;
      puVar20 = (undefined4 *)(uVar16 + lVar2);
      *puVar20 = (int)uVar18;
      if ((uVar18 & 1) != 0) {
        uVar12 = *(ulong *)((uVar18 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar12 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar16,puVar20,uVar18);
          uVar12 = *(ulong *)(uVar18 & 0xfffffffffffc0000 | 8);
        }
        if ((uVar12 & 0x18) != 0) {
LAB_01559290:
          if ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar16,puVar20,uVar18);
          }
        }
      }
    }
    else {
      puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar18);
      uVar18 = *puVar9;
      if ((uVar18 & 1) == 0) goto LAB_0155922c;
LAB_015592e4:
      if (*(short *)((uVar18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar18 - 1)) == 0x52) {
        if ((*(uint *)(uVar18 + 3) & 1) == 0) {
          puVar10 = (ulong *)FUN_0155a39c(param_1,param_8,
                                          uVar18 & 0xffffffff00000000 | (ulong)*(uint *)(uVar18 + 3)
                                          ,param_6,param_1 + 0x700,puVar21);
          if (puVar10 == (ulong *)0x0) {
            return 0;
          }
          uVar18 = *puVar9;
          uVar16 = *puVar10;
          *(int *)(uVar18 + 3) = (int)uVar16;
          if ((uVar16 & 1) != 0) {
            uVar12 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
            if (((uint)uVar12 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar18,uVar18 + 3,uVar16);
              uVar12 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar12 & 0x18) != 0) &&
               ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar18,uVar18 + 3,uVar16);
            }
          }
        }
        uVar4 = *(uint *)(*puVar9 + 7);
        if ((uVar4 & 1) != 0) goto LAB_015593d8;
        puVar21 = (ulong *)FUN_0155a39c(param_1,param_8,*puVar9 & 0xffffffff00000000 | (ulong)uVar4,
                                        param_6,param_1 + 0x9b0,puVar21);
        if (puVar21 == (ulong *)0x0) {
          return 0;
        }
        uVar16 = *puVar9;
        uVar18 = *puVar21;
        *(int *)(uVar16 + 7) = (int)uVar18;
        if ((uVar18 & 1) == 0) goto LAB_015593d8;
        uVar12 = *(ulong *)((uVar18 & 0xfffffffffffc0000) + 8);
        puVar20 = (undefined4 *)(uVar16 + 7);
        if (((uint)uVar12 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar16,puVar20,uVar18);
          uVar12 = *(ulong *)(uVar18 & 0xfffffffffffc0000 | 8);
        }
        if ((uVar12 & 0x18) == 0) goto LAB_015593d8;
        goto LAB_01559290;
      }
    }
LAB_015593d8:
    if (lVar14 == 0) goto LAB_01559430;
    uVar18 = *puVar7;
    lVar17 = lVar17 + 0xc00000000;
    lVar19 = lVar19 + 0xc00000000;
  } while( true );
}

