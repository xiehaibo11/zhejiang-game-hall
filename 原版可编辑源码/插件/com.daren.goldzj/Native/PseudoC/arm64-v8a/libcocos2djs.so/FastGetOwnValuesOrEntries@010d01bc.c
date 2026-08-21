
/* v8::internal::FastGetOwnValuesOrEntries(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSReceiver>, bool,
   v8::internal::Handle<v8::internal::FixedArray>*) */

undefined8
v8::internal::FastGetOwnValuesOrEntries
          (Isolate *param_1,ulong *param_2,uint param_3,undefined8 *param_4)

{
  long lVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  char cVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  int iVar25;
  undefined8 local_d0;
  undefined8 local_c4;
  Isolate *local_b8;
  ulong *local_b0;
  undefined8 uStack_a8;
  ulong *local_a0;
  undefined8 uStack_98;
  ulong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_64;
  
  pIVar2 = param_1 + 0x95a0;
  uVar23 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)pIVar2;
    if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar9 + 1;
    *puVar9 = uVar23;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar23);
    uVar23 = *puVar9;
  }
  if ((*(ushort *)(uVar23 + 7) < 0xaa) ||
     (local_d0 = uVar23, uVar23 = Map::OnlyHasSimpleProperties((Map *)&local_d0), (uVar23 & 1) == 0)
     ) {
    return 1;
  }
  uVar23 = *param_2;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)pIVar2;
    if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
      puVar10 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar10 + 1;
    *puVar10 = uVar23;
  }
  else {
    puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar23);
  }
  uVar23 = *puVar9 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar9 + 0x17);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar11 = *(ulong **)pIVar2;
    if (puVar11 == *(ulong **)(param_1 + 0x95a8)) {
      puVar11 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar11 + 1;
    *puVar11 = uVar23;
  }
  else {
    puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar23);
  }
  uVar23 = *puVar10;
  uVar22 = (ulong)(*(uint *)(*puVar9 + 0xb) >> 10) & 0x3ff;
  plVar12 = *(long **)(ElementsAccessor::elements_accessors_ +
                      ((ulong)*(byte *)((uVar23 & 0xffffffff00000000 | 10) +
                                       (ulong)*(uint *)(uVar23 - 1)) & 0xf8));
  uVar23 = (**(code **)(*plVar12 + 0xb8))
                     (plVar12,uVar23,uVar23 & 0xffffffff00000000 | (ulong)*(uint *)(uVar23 + 7));
  if (0x7fffffd - uVar22 < uVar23) {
    puVar13 = (undefined8 *)Factory::NewRangeError((Factory *)param_1,0xbe,0,0,0);
    Isolate::Throw(param_1,*puVar13,0);
LAB_010d0934:
    uVar18 = 0;
  }
  else {
    puVar14 = (ulong *)Factory::NewFixedArray((Factory *)param_1,(int)uVar22 + (int)uVar23,0);
    local_64 = 0;
    uVar23 = *puVar10;
    if (*(int *)(uVar23 + 7) != *(int *)(param_1 + 0x168)) {
      plVar12 = *(long **)(ElementsAccessor::elements_accessors_ +
                          ((ulong)*(byte *)((uVar23 & 0xffffffff00000000 | 10) +
                                           (ulong)*(uint *)(uVar23 - 1)) & 0xf8));
      cVar8 = (**(code **)(*plVar12 + 0x50))
                        (plVar12,param_1,puVar10,puVar14,param_3 & 1,&local_64,0x12);
      if (cVar8 == '\0') goto LAB_010d0934;
      uVar23 = *puVar10;
    }
    uVar19 = *puVar9;
    bVar7 = *(int *)(uVar23 - 1) == (int)uVar19;
    if (bVar7) {
      *puVar11 = uVar19 & 0xffffffff00000000 | (ulong)*(uint *)(uVar19 + 0x17);
    }
    if ((int)uVar22 != 0) {
      lVar24 = 0;
      do {
        puVar3 = *(ulong **)pIVar2;
        puVar4 = *(ulong **)(param_1 + 0x95a8);
        *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
        uVar23 = *puVar11 & 0xffffffff00000000 | (ulong)*(uint *)(lVar24 + *puVar11 + 0xf);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar15 = puVar3;
          if (puVar4 == puVar3) {
            puVar15 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar2 = puVar15 + 1;
          *puVar15 = uVar23;
        }
        else {
          puVar15 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar23);
          uVar23 = *puVar15;
        }
        if (*(ushort *)((uVar23 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar23 - 1)) < 0x40) {
          if (bVar7) {
            uVar23 = *puVar11;
            uVar5 = *(uint *)(lVar24 + uVar23 + 0x13);
            if ((uVar5 >> 5 & 1) == 0) {
              if ((uVar5 >> 1 & 1) == 0) {
                if ((uVar5 >> 2 & 1) == 0) {
                  uVar6 = (uint)((int)uVar5 >> 1) >> 0x13 & 0x3ff;
                  uVar5 = (uint)((int)uVar5 >> 1) >> 6 & 7;
                  uVar23 = *puVar9;
                  iVar25 = (uint)*(byte *)(uVar23 + 3) - (uint)*(byte *)(uVar23 + 4);
                  if ((int)uVar6 < iVar25) {
                    uVar19 = (ulong)*(byte *)(uVar23 + 4) << 0x1c;
                    iVar21 = (uVar6 + *(byte *)(uVar23 + 4)) * 4;
                  }
                  else {
                    iVar21 = (uVar6 - iVar25) * 4 + 8;
                    uVar19 = 0x20000000;
                  }
                  local_d0 = CONCAT71(local_d0._1_7_,(char)uVar5);
                  if (4 < uVar5) {
                    uVar18 = Representation::Mnemonic((Representation *)&local_d0);
                    PrintF("%s\n",uVar18);
                    /* WARNING: Subroutine does not return */
                    V8_Fatal("unreachable code");
                  }
                  puVar17 = (ulong *)JSObject::FastPropertyAt
                                               (puVar10,(ulong)uVar5,
                                                (ulong)((int)uVar6 < iVar25) << 0xd |
                                                (long)iVar25 << 0x10 | (long)iVar21 | uVar19 |
                                                *(ulong *)(&DAT_019d75d8 + (ulong)uVar5 * 8));
                  bVar7 = true;
                }
                else {
                  uVar23 = uVar23 & 0xffffffff00000000 | (ulong)*(uint *)(lVar24 + uVar23 + 0x17);
                  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                    puVar17 = *(ulong **)pIVar2;
                    if (puVar17 == *(ulong **)(param_1 + 0x95a8)) {
                      puVar17 = (ulong *)HandleScope::Extend(param_1);
                    }
                    *(ulong **)pIVar2 = puVar17 + 1;
                    *puVar17 = uVar23;
                  }
                  else {
                    puVar17 = (ulong *)CanonicalHandleScope::Lookup
                                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),
                                                  uVar23);
                  }
                  bVar7 = true;
                }
              }
              else {
                if (((*puVar10 & 1) == 0) ||
                   (puVar17 = puVar10,
                   *(ushort *)(((ulong)param_1 | 7) + (ulong)*(uint *)(*puVar10 - 1)) < 0xa9)) {
                  puVar17 = (ulong *)LookupIterator::GetRootForNonJSReceiver
                                               (param_1,puVar10,0xffffffffffffffff);
                }
                local_d0 = local_d0 & 0xffffffff00000000;
                local_c4 = 0xc000000000;
                puVar16 = puVar15;
                local_b8 = param_1;
                if ((*(ushort *)
                      ((*puVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar15 - 1)) &
                    0xffe0) == 0x20) {
                  puVar16 = (ulong *)StringTable::LookupString(param_1,puVar15);
                }
                uStack_a8 = 0;
                uStack_98 = 0;
                local_88 = 0xffffffffffffffff;
                uStack_80 = 0xffffffffffffffff;
                local_b0 = puVar16;
                local_a0 = puVar10;
                local_90 = puVar17;
                LookupIterator::Start<false>((LookupIterator *)&local_d0);
                puVar17 = (ulong *)Object::GetProperty((LookupIterator *)&local_d0,false);
                if (puVar17 == (ulong *)0x0) {
                  bVar7 = true;
                  iVar25 = 1;
                  goto LAB_010d0830;
                }
                uVar23 = *puVar9;
                bVar7 = *(int *)(*puVar10 - 1) == (int)uVar23;
                *puVar11 = uVar23 & 0xffffffff00000000 | (ulong)*(uint *)(uVar23 + 0x17);
              }
joined_r0x010d0760:
              if ((param_3 & 1) != 0) {
                plVar12 = (long *)Factory::NewUninitializedFixedArray((Factory *)param_1,2);
                *(int *)(*plVar12 + 7) = (int)*puVar15;
                *(int *)(*plVar12 + 0xb) = (int)*puVar17;
                puVar17 = (ulong *)Factory::NewJSArrayWithElements(param_1,plVar12,2,2,0);
              }
              uVar23 = *puVar17;
              uVar19 = *puVar14;
              lVar1 = uVar19 + (long)(local_64 << 2);
              *(int *)(lVar1 + 7) = (int)uVar23;
              if ((uVar23 & 1) != 0) {
                uVar20 = *(ulong *)((uVar23 & 0xfffffffffffc0000) + 8);
                lVar1 = lVar1 + 7;
                if (((uint)uVar20 >> 0x12 & 1) != 0) {
                  Heap_MarkingBarrierSlow(uVar19,lVar1,uVar23);
                  uVar20 = *(ulong *)(uVar23 & 0xfffffffffffc0000 | 8);
                }
                if (((uVar20 & 0x18) != 0) &&
                   ((*(byte *)((uVar19 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                  Heap_GenerationalBarrierSlow(uVar19,lVar1,uVar23);
                }
              }
              iVar25 = 0;
              local_64 = local_64 + 1;
            }
            else {
              iVar25 = 5;
              bVar7 = true;
            }
          }
          else {
            if (((*puVar10 & 1) == 0) ||
               (puVar17 = puVar10,
               *(ushort *)(((ulong)param_1 | 7) + (ulong)*(uint *)(*puVar10 - 1)) < 0xa9)) {
              puVar17 = (ulong *)LookupIterator::GetRootForNonJSReceiver
                                           (param_1,puVar10,0xffffffffffffffff);
            }
            local_d0 = local_d0 & 0xffffffff00000000;
            local_c4 = 0xc000000000;
            puVar16 = puVar15;
            local_b8 = param_1;
            if ((*(ushort *)((*puVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar15 - 1)) &
                0xffe0) == 0x20) {
              puVar16 = (ulong *)StringTable::LookupString(param_1,puVar15);
            }
            uStack_a8 = 0;
            uStack_98 = 0;
            local_88 = 0xffffffffffffffff;
            uStack_80 = 0xffffffffffffffff;
            local_b0 = puVar16;
            local_a0 = puVar10;
            local_90 = puVar17;
            LookupIterator::Start<false>((LookupIterator *)&local_d0);
            if ((local_d0._4_4_ == 4) || ((local_c4._4_1_ >> 4 & 1) != 0)) {
              iVar25 = 5;
            }
            else {
              puVar17 = (ulong *)Object::GetProperty((LookupIterator *)&local_d0,false);
              if (puVar17 != (ulong *)0x0) {
                bVar7 = false;
                goto joined_r0x010d0760;
              }
              iVar25 = 1;
            }
            bVar7 = false;
          }
        }
        else {
          iVar25 = 5;
        }
LAB_010d0830:
        *(ulong **)pIVar2 = puVar3;
        *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
        if (*(ulong **)(param_1 + 0x95a8) != puVar4) {
          *(ulong **)(param_1 + 0x95a8) = puVar4;
          HandleScope::DeleteExtensions(param_1);
        }
        if ((iVar25 != 5) && (iVar25 != 0)) goto LAB_010d0934;
        lVar24 = lVar24 + 0xc;
      } while (uVar22 * 0xc != lVar24);
    }
    uVar18 = FixedArray::ShrinkOrEmpty(param_1,puVar14,local_64);
    *param_4 = uVar18;
    uVar18 = 0x101;
  }
  return uVar18;
}

