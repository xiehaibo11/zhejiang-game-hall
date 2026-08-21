
void FUN_010a192c(undefined8 param_1,Isolate *param_2,ulong *param_3,ulong *param_4,uint param_5,
                 int *param_6,uint param_7)

{
  Isolate *pIVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  Isolate *pIVar8;
  long lVar9;
  ulong *puVar10;
  undefined4 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  double dVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  ulong uVar24;
  double dVar25;
  uint local_138;
  undefined4 local_108 [3];
  undefined8 local_fc;
  Isolate *local_f0;
  ulong *local_e8;
  undefined8 uStack_e0;
  ulong *local_d8;
  undefined8 uStack_d0;
  ulong *local_c8;
  ulong uStack_c0;
  undefined8 local_b8;
  Isolate *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  local_88 = 0x1010000;
  uStack_90 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  uVar23 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 7);
  pIVar1 = param_2 + 0x95a0;
  local_b0 = param_2;
  if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pIVar1;
    if (puVar6 == *(ulong **)(param_2 + 0x95a8)) {
      puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_2);
    }
    *(ulong **)pIVar1 = puVar6 + 1;
    *puVar6 = uVar23;
  }
  else {
    puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar23);
  }
  uVar23 = FUN_010a3a80(param_3,puVar6,&local_b0);
  if ((uVar23 & 1) == 0) {
    uVar13 = 0;
    goto LAB_010a2200;
  }
  puVar6 = (ulong *)v8::internal::KeyAccumulator::GetKeys((KeyAccumulator *)&local_b0,1);
  uVar23 = *puVar6;
  if (*(int *)(uVar23 + 3) < 2) {
    uVar21 = 0;
    iVar22 = 0;
    if (0 < *(int *)(uVar23 + 3) >> 1) goto LAB_010a1eb8;
  }
  else {
    local_138 = param_7 & 7;
    bVar2 = *(byte *)((*param_3 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(*param_3 - 1));
    uVar21 = 0;
    iVar20 = 0;
    do {
      uVar5 = *(uint *)(uVar23 + (long)((int)uVar21 << 2) + 7);
      uVar23 = uVar23 & 0xffffffff00000000 | (ulong)uVar5;
      iVar22 = iVar20;
      if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)pIVar1;
        if (puVar7 == *(ulong **)(param_2 + 0x95a8)) {
          puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_2);
        }
        *(ulong **)pIVar1 = puVar7 + 1;
        *puVar7 = uVar23;
        if ((uVar5 & 1) != 0) goto LAB_010a1bf4;
LAB_010a1af4:
        if (-1 < (int)(uint)uVar23) {
          dVar15 = (double)(ulong)((uint)uVar23 >> 1);
LAB_010a1afc:
          uVar14 = *param_3;
          uVar24 = (ulong)dVar15 & 0xffffffff;
          pIVar8 = (Isolate *)(uVar14 & 0xffffffff00000000);
          uVar16 = (ulong)pIVar8 | (ulong)*(uint *)(uVar14 + 7);
          uVar23 = (*(ulong *)(*(long *)(param_2 + 0x490) + 7) ^ uVar24 ^ 0xffffffffffffffff) +
                   (*(ulong *)(*(long *)(param_2 + 0x490) + 7) ^ uVar24) * 0x40000;
          uVar23 = (uVar23 ^ uVar23 >> 0x1f) * 0x15;
          uVar23 = (uVar23 ^ uVar23 >> 0xb) * 0x41;
          uVar3 = (*(int *)(uVar16 + 0xf) >> 1) - 1;
          uVar23 = (ulong)(uVar3 & ((uint)(uVar23 >> 0x16) ^ (uint)uVar23) & 0x3fffffff);
          lVar9 = uVar16 + 7;
          uVar5 = *(uint *)(((long)(uVar23 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar9);
          if (uVar5 != *(uint *)(param_2 + 0xa0)) {
            iVar19 = 1;
            do {
              if (uVar5 != (uint)*(undefined8 *)(param_2 + 0xa8)) {
                if ((uVar5 & 1) == 0) {
                  dVar25 = (double)((int)uVar5 >> 1);
                }
                else {
                  dVar25 = *(double *)(((ulong)pIVar8 | (ulong)uVar5) + 3);
                }
                if (SUB84(dVar15,0) == (int)dVar25) {
                  lVar17 = (ulong)(uint)((int)uVar23 * 3) << 0x22;
                  lVar18 = lVar17 + 0x1800000000 >> 0x20;
                  if ((param_7 == 0) || ((local_138 & *(uint *)(lVar9 + lVar18) >> 4) == 0)) {
                    if ((*(uint *)(lVar9 + lVar18) >> 1 & 1) == 0) {
                      uVar23 = (ulong)pIVar8 |
                               (ulong)*(uint *)((lVar17 + 0x1400000000 >> 0x20) + lVar9);
                      if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0
                         ) {
                        puVar7 = *(ulong **)(pIVar8 + 0x95a0);
                        if (puVar7 == *(ulong **)(pIVar8 + 0x95a8)) {
                          puVar7 = (ulong *)v8::internal::HandleScope::Extend(pIVar8);
                        }
                        *(ulong **)(pIVar8 + 0x95a0) = puVar7 + 1;
                        *puVar7 = uVar23;
                      }
                      else {
                        puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                                    (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),
                                                     uVar23);
                      }
                    }
                    else {
                      if (((uVar14 & 1) == 0) ||
                         (puVar7 = param_3,
                         *(ushort *)(((ulong)param_2 | 7) + (ulong)*(uint *)(uVar14 - 1)) < 0xa9)) {
                        puVar7 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                                    (param_2,param_3,uVar24);
                      }
                      local_108[0] = 1;
                      local_fc = 0xc000000000;
                      local_e8 = (ulong *)0x0;
                      uStack_e0 = 0;
                      uStack_d0 = 0;
                      local_b8 = 0xffffffffffffffff;
                      local_f0 = param_2;
                      puVar10 = local_e8;
                      local_d8 = param_3;
                      local_c8 = puVar7;
                      uStack_c0 = uVar24;
                      if (((SUB84(dVar15,0) == -1) &&
                          (*(short *)((*puVar7 & 0xffffffff00000000 | 7) +
                                     (ulong)*(uint *)(*puVar7 - 1)) != 0x41b)) &&
                         (puVar10 = (ulong *)v8::internal::Factory::SizeToString
                                                       ((Factory *)param_2,uVar24,true),
                         (*(ushort *)
                           ((*puVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar10 - 1)) &
                         0xffe0) == 0x20)) {
                        puVar10 = (ulong *)v8::internal::StringTable::LookupString(param_2);
                      }
                      local_e8 = puVar10;
                      v8::internal::LookupIterator::Start<true>((LookupIterator *)local_108);
                      puVar7 = (ulong *)v8::internal::Object::GetProperty
                                                  ((LookupIterator *)local_108,false);
                      uVar13 = 0;
                      if (puVar7 == (ulong *)0x0) goto LAB_010a2200;
                    }
                    if ((param_5 & 1) != 0) {
                      puVar11 = (undefined4 *)
                                v8::internal::Factory::SizeToString((Factory *)param_2,uVar24,true);
                      plVar12 = (long *)v8::internal::Factory::NewUninitializedFixedArray
                                                  ((Factory *)param_2,2);
                      *(undefined4 *)(*plVar12 + 7) = *puVar11;
                      *(int *)(*plVar12 + 0xb) = (int)*puVar7;
                      puVar7 = (ulong *)v8::internal::Factory::NewJSArrayWithElements
                                                  (param_2,plVar12,2,2,0);
                    }
                    uVar14 = *puVar7;
                    uVar23 = *param_4;
                    iVar22 = iVar20 + 1;
                    lVar9 = uVar23 + (long)(iVar20 << 2);
                    *(int *)(lVar9 + 7) = (int)uVar14;
                    if ((uVar14 & 1) != 0) {
                      uVar16 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
                      lVar9 = lVar9 + 7;
                      if (((uint)uVar16 >> 0x12 & 1) != 0) {
                        v8::internal::Heap_MarkingBarrierSlow(uVar23,lVar9,uVar14);
                        uVar16 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar16 & 0x18) != 0) &&
                         ((*(byte *)((uVar23 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        v8::internal::Heap_GenerationalBarrierSlow(uVar23,lVar9,uVar14);
                      }
                    }
                    if (7 < (*(byte *)((*param_3 & 0xffffffff00000000 | 10) +
                                      (ulong)*(uint *)(*param_3 - 1)) ^ bVar2)) {
                      uVar23 = *puVar6;
                      if (*(int *)(uVar23 + 3) >> 1 <= (int)uVar21) goto LAB_010a21f0;
                      goto LAB_010a1eb8;
                    }
                  }
                  break;
                }
              }
              uVar23 = (ulong)((int)uVar23 + iVar19 & uVar3);
              uVar5 = *(uint *)(((long)(uVar23 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar9);
              iVar19 = iVar19 + 1;
            } while (uVar5 != *(uint *)(param_2 + 0xa0));
          }
        }
      }
      else {
        puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar23);
        uVar23 = *puVar7;
        if ((uVar23 & 1) == 0) goto LAB_010a1af4;
LAB_010a1bf4:
        if (*(short *)((uVar23 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar23 - 1)) == 0x42) {
          dVar15 = *(double *)(uVar23 + 3) + 4503599627370496.0;
          if (((ulong)dVar15 >> 0x20 != 0x43300000) ||
             (*(double *)(uVar23 + 3) != (double)((ulong)dVar15 & 0xffffffff))) goto LAB_010a1ab0;
          goto LAB_010a1afc;
        }
      }
LAB_010a1ab0:
      uVar23 = *puVar6;
      uVar21 = uVar21 + 1;
      iVar19 = *(int *)(uVar23 + 3) >> 1;
      iVar20 = iVar22;
    } while ((long)uVar21 < (long)iVar19);
    if ((int)uVar21 < iVar19) {
LAB_010a1eb8:
      uVar14 = uVar21 & 0xffffffff;
      iVar20 = (int)uVar21 << 2;
      do {
        uVar5 = *(uint *)(uVar23 + (long)iVar20 + 7);
        uVar23 = uVar23 & 0xffffffff00000000 | (ulong)uVar5;
        if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar7 = *(ulong **)pIVar1;
          if (puVar7 == *(ulong **)(param_2 + 0x95a8)) {
            puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_2);
          }
          *(ulong **)pIVar1 = puVar7 + 1;
          *puVar7 = uVar23;
          if ((uVar5 & 1) != 0) goto LAB_010a1f70;
LAB_010a1f30:
          if (-1 < (int)(uint)uVar23) {
            dVar15 = (double)(ulong)((uint)uVar23 >> 1);
LAB_010a1f38:
            if ((param_7 >> 1 & 1) == 0) {
              uVar23 = *param_3;
            }
            else {
              uVar23 = *param_3;
              plVar12 = *(long **)(v8::internal::ElementsAccessor::elements_accessors_ +
                                  ((ulong)*(byte *)((uVar23 & 0xffffffff00000000 | 10) +
                                                   (ulong)*(uint *)(uVar23 - 1)) & 0xf8));
              lVar9 = (**(code **)(*plVar12 + 0x108))
                                (plVar12,param_2,uVar23,
                                 uVar23 & 0xffffffff00000000 | (ulong)*(uint *)(uVar23 + 7),
                                 (ulong)dVar15 & 0xffffffff);
              if ((lVar9 == -1) ||
                 (uVar5 = (**(code **)(*plVar12 + 0x110))(plVar12,*param_3,lVar9),
                 (uVar5 >> 4 & 1) != 0)) goto LAB_010a1eec;
              uVar23 = *param_3;
            }
            if (((uVar23 & 1) == 0) ||
               (puVar7 = param_3,
               *(ushort *)(((ulong)param_2 | 7) + (ulong)*(uint *)(uVar23 - 1)) < 0xa9)) {
              puVar7 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                          (param_2,param_3,(ulong)dVar15 & 0xffffffff);
            }
            uVar23 = (ulong)dVar15 & 0xffffffff;
            local_108[0] = 1;
            local_fc = 0xc000000000;
            local_e8 = (ulong *)0x0;
            uStack_e0 = 0;
            uStack_d0 = 0;
            local_b8 = 0xffffffffffffffff;
            local_f0 = param_2;
            puVar10 = local_e8;
            local_d8 = param_3;
            local_c8 = puVar7;
            uStack_c0 = uVar23;
            if (((uVar23 == 0xffffffff) &&
                (*(short *)((*puVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar7 - 1)) !=
                 0x41b)) &&
               (puVar10 = (ulong *)v8::internal::Factory::SizeToString
                                             ((Factory *)param_2,0xffffffff,true),
               (*(ushort *)((*puVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar10 - 1)) &
               0xffe0) == 0x20)) {
              puVar10 = (ulong *)v8::internal::StringTable::LookupString(param_2);
            }
            local_e8 = puVar10;
            v8::internal::LookupIterator::Start<true>((LookupIterator *)local_108);
            puVar7 = (ulong *)v8::internal::Object::GetProperty((LookupIterator *)local_108,false);
            uVar13 = 0;
            if (puVar7 == (ulong *)0x0) goto LAB_010a2200;
            if ((param_5 & 1) != 0) {
              puVar11 = (undefined4 *)
                        v8::internal::Factory::SizeToString((Factory *)param_2,uVar23,true);
              plVar12 = (long *)v8::internal::Factory::NewUninitializedFixedArray
                                          ((Factory *)param_2,2);
              *(undefined4 *)(*plVar12 + 7) = *puVar11;
              *(int *)(*plVar12 + 0xb) = (int)*puVar7;
              puVar7 = (ulong *)v8::internal::Factory::NewJSArrayWithElements(param_2,plVar12,2,2,0)
              ;
            }
            uVar21 = *puVar7;
            iVar19 = iVar22 + 1;
            uVar23 = *param_4;
            lVar9 = uVar23 + (long)(iVar22 << 2);
            *(int *)(lVar9 + 7) = (int)uVar21;
            iVar22 = iVar19;
            if ((uVar21 & 1) != 0) {
              uVar16 = *(ulong *)((uVar21 & 0xfffffffffffc0000) + 8);
              lVar9 = lVar9 + 7;
              if (((uint)uVar16 >> 0x12 & 1) != 0) {
                v8::internal::Heap_MarkingBarrierSlow(uVar23,lVar9,uVar21);
                uVar16 = *(ulong *)(uVar21 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar16 & 0x18) != 0) &&
                 ((*(byte *)((uVar23 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                v8::internal::Heap_GenerationalBarrierSlow(uVar23,lVar9,uVar21);
              }
            }
          }
        }
        else {
          puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar23);
          uVar23 = *puVar7;
          if ((uVar23 & 1) == 0) goto LAB_010a1f30;
LAB_010a1f70:
          if (*(short *)((uVar23 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar23 - 1)) == 0x42)
          {
            dVar15 = *(double *)(uVar23 + 3) + 4503599627370496.0;
            if (((ulong)dVar15 >> 0x20 != 0x43300000) ||
               (*(double *)(uVar23 + 3) != (double)((ulong)dVar15 & 0xffffffff))) goto LAB_010a1eec;
            goto LAB_010a1f38;
          }
        }
LAB_010a1eec:
        uVar23 = *puVar6;
        uVar14 = uVar14 + 1;
        iVar20 = iVar20 + 4;
      } while ((long)uVar14 < (long)(*(int *)(uVar23 + 3) >> 1));
    }
  }
LAB_010a21f0:
  uVar13 = 0x101;
  *param_6 = iVar22;
LAB_010a2200:
  if (*(long *)(lVar4 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar13);
}

