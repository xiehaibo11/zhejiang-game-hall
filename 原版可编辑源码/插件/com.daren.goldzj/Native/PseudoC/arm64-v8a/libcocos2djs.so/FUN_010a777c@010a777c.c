
void FUN_010a777c(undefined8 param_1,Isolate *param_2,ulong *param_3,ulong *param_4,uint param_5,
                 int *param_6,uint param_7)

{
  Isolate *pIVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined4 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  double dVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
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
  
  lVar6 = tpidr_el0;
  local_80 = *(long *)(lVar6 + 0x28);
  local_88 = 0x1010000;
  uStack_90 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  uVar24 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 7);
  pIVar1 = param_2 + 0x95a0;
  local_b0 = param_2;
  if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)pIVar1;
    if (puVar8 == *(ulong **)(param_2 + 0x95a8)) {
      puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_2);
    }
    *(ulong **)pIVar1 = puVar8 + 1;
    *puVar8 = uVar24;
  }
  else {
    puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar24);
  }
  uVar24 = FUN_010a98b8(param_3,puVar8,&local_b0);
  if ((uVar24 & 1) == 0) {
    uVar14 = 0;
    goto LAB_010a804c;
  }
  puVar8 = (ulong *)v8::internal::KeyAccumulator::GetKeys((KeyAccumulator *)&local_b0,1);
  uVar24 = *puVar8;
  if (*(int *)(uVar24 + 3) < 2) {
    uVar22 = 0;
    iVar23 = 0;
    if (0 < *(int *)(uVar24 + 3) >> 1) goto LAB_010a7d04;
  }
  else {
    bVar4 = *(byte *)((*param_3 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(*param_3 - 1));
    uVar22 = 0;
    iVar26 = 0;
    do {
      uVar7 = *(uint *)(uVar24 + (long)((int)uVar22 << 2) + 7);
      uVar24 = uVar24 & 0xffffffff00000000 | (ulong)uVar7;
      if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar9 = *(ulong **)pIVar1;
        if (puVar9 == *(ulong **)(param_2 + 0x95a8)) {
          puVar9 = (ulong *)v8::internal::HandleScope::Extend(param_2);
        }
        *(ulong **)pIVar1 = puVar9 + 1;
        *puVar9 = uVar24;
        if ((uVar7 & 1) != 0) goto LAB_010a7b84;
LAB_010a7908:
        if (-1 < (int)(uint)uVar24) {
          dVar19 = (double)(ulong)((uint)uVar24 >> 1);
LAB_010a7910:
          uVar16 = *param_3;
          uVar25 = (ulong)dVar19 & 0xffffffff;
          uVar24 = uVar16 & 0xffffffff00000000;
          uVar15 = uVar24 | *(uint *)(uVar16 + 7);
          uVar7 = (*(int *)(uVar15 + 3) >> 1) - 2;
          uVar17 = SUB84(dVar19,0);
          if (uVar17 < uVar7) {
            uVar3 = *(uint *)(uVar15 + (long)(int)(uVar17 * 4 + 8) + 7);
            uVar20 = uVar25;
            uVar5 = uVar17;
            if (((uVar3 & 1) == 0) ||
               (uVar18 = (uint)*(undefined8 *)(param_2 + 0xa8), uVar3 != uVar18)) {
joined_r0x010a7cc4:
              if ((uVar5 < uVar7) ||
                 ((*(uint *)((uVar24 | *(uint *)(uVar15 + 0xb)) +
                             ((long)((uVar20 - uVar7) * 0xc00000000 + 0x1800000000) >> 0x20) + 7) >>
                   1 & 1) == 0)) {
                puVar9 = (ulong *)FUN_010a9710();
              }
              else {
                if (((uVar16 & 1) == 0) ||
                   (puVar9 = param_3,
                   *(ushort *)(((ulong)param_2 | 7) + (ulong)*(uint *)(uVar16 - 1)) < 0xa9)) {
                  puVar9 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                              (param_2,param_3,uVar25);
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
                local_c8 = puVar9;
                uStack_c0 = uVar25;
                if (((uVar17 == 0xffffffff) &&
                    (*(short *)((*puVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar9 - 1))
                     != 0x41b)) &&
                   (puVar10 = (ulong *)v8::internal::Factory::SizeToString
                                                 ((Factory *)param_2,uVar25,true),
                   (*(ushort *)
                     ((*puVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar10 - 1)) & 0xffe0
                   ) == 0x20)) {
                  puVar10 = (ulong *)v8::internal::StringTable::LookupString(param_2);
                }
                local_e8 = puVar10;
                v8::internal::LookupIterator::Start<true>((LookupIterator *)local_108);
                puVar9 = (ulong *)v8::internal::Object::GetProperty
                                            ((LookupIterator *)local_108,false);
                uVar14 = 0;
                if (puVar9 == (ulong *)0x0) goto LAB_010a804c;
              }
              if ((param_5 & 1) != 0) {
                puVar11 = (undefined4 *)
                          v8::internal::Factory::SizeToString((Factory *)param_2,uVar25,true);
                plVar12 = (long *)v8::internal::Factory::NewUninitializedFixedArray
                                            ((Factory *)param_2,2);
                *(undefined4 *)(*plVar12 + 7) = *puVar11;
                *(int *)(*plVar12 + 0xb) = (int)*puVar9;
                puVar9 = (ulong *)v8::internal::Factory::NewJSArrayWithElements
                                            (param_2,plVar12,2,2,0);
              }
              uVar15 = *puVar9;
              iVar23 = iVar26 + 1;
              uVar24 = *param_4;
              lVar13 = uVar24 + (long)(iVar26 << 2);
              *(int *)(lVar13 + 7) = (int)uVar15;
              if ((uVar15 & 1) != 0) {
                uVar16 = *(ulong *)((uVar15 & 0xfffffffffffc0000) + 8);
                lVar13 = lVar13 + 7;
                if (((uint)uVar16 >> 0x12 & 1) != 0) {
                  v8::internal::Heap_MarkingBarrierSlow(uVar24,lVar13,uVar15);
                  uVar16 = *(ulong *)(uVar15 & 0xfffffffffffc0000 | 8);
                }
                if (((uVar16 & 0x18) != 0) &&
                   ((*(byte *)((uVar24 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                  v8::internal::Heap_GenerationalBarrierSlow(uVar24,lVar13,uVar15);
                }
              }
              iVar26 = iVar23;
              if ((*(byte *)((*param_3 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(*param_3 - 1))
                  ^ bVar4) < 8) goto LAB_010a78c4;
              uVar24 = *puVar8;
              if (*(int *)(uVar24 + 3) >> 1 <= (int)uVar22) goto LAB_010a803c;
              goto LAB_010a7d04;
            }
          }
          else {
            uVar18 = (uint)*(undefined8 *)(param_2 + 0xa8);
          }
          uVar21 = uVar24 | *(uint *)(uVar15 + 0xb);
          lVar13 = uVar21 + 7;
          uVar20 = (*(ulong *)(*(long *)(param_2 + 0x490) + 7) ^ uVar25 ^ 0xffffffffffffffff) +
                   (*(ulong *)(*(long *)(param_2 + 0x490) + 7) ^ uVar25) * 0x40000;
          uVar20 = (uVar20 ^ uVar20 >> 0x1f) * 0x15;
          uVar20 = (uVar20 ^ uVar20 >> 0xb) * 0x41;
          uVar5 = (*(int *)(uVar21 + 0xf) >> 1) - 1;
          uVar20 = (ulong)(uVar5 & ((uint)(uVar20 >> 0x16) ^ (uint)uVar20) & 0x3fffffff);
          uVar3 = *(uint *)(((long)(uVar20 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar13);
          if (uVar3 != *(uint *)(param_2 + 0xa0)) {
            iVar23 = 1;
            do {
              if (uVar3 != uVar18) {
                if ((uVar3 & 1) == 0) {
                  dVar19 = (double)((int)uVar3 >> 1);
                }
                else {
                  dVar19 = *(double *)((uVar24 | uVar3) + 3);
                }
                if (uVar17 == (int)dVar19) {
                  if ((param_7 == 0) ||
                     ((param_7 & 7 &
                      *(uint *)(((long)(uVar20 * 0xc00000000 + 0x1800000000) >> 0x20) + lVar13) >> 4
                      ) == 0)) {
                    uVar20 = uVar20 + uVar7;
                    uVar5 = (uint)uVar20;
                    goto joined_r0x010a7cc4;
                  }
                  break;
                }
              }
              uVar20 = (ulong)((int)uVar20 + iVar23 & uVar5);
              uVar3 = *(uint *)(((long)(uVar20 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar13);
              iVar23 = iVar23 + 1;
            } while (uVar3 != *(uint *)(param_2 + 0xa0));
          }
        }
      }
      else {
        puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar24);
        uVar24 = *puVar9;
        if ((uVar24 & 1) == 0) goto LAB_010a7908;
LAB_010a7b84:
        if (*(short *)((uVar24 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar24 - 1)) == 0x42) {
          dVar19 = *(double *)(uVar24 + 3) + 4503599627370496.0;
          if (((ulong)dVar19 >> 0x20 != 0x43300000) ||
             (*(double *)(uVar24 + 3) != (double)((ulong)dVar19 & 0xffffffff))) goto LAB_010a78c4;
          goto LAB_010a7910;
        }
      }
LAB_010a78c4:
      uVar24 = *puVar8;
      uVar22 = uVar22 + 1;
      iVar2 = *(int *)(uVar24 + 3) >> 1;
    } while ((long)uVar22 < (long)iVar2);
    iVar23 = iVar26;
    if ((int)uVar22 < iVar2) {
LAB_010a7d04:
      uVar15 = uVar22 & 0xffffffff;
      iVar26 = (int)uVar22 << 2;
      do {
        uVar7 = *(uint *)(uVar24 + (long)iVar26 + 7);
        uVar24 = uVar24 & 0xffffffff00000000 | (ulong)uVar7;
        if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)pIVar1;
          if (puVar9 == *(ulong **)(param_2 + 0x95a8)) {
            puVar9 = (ulong *)v8::internal::HandleScope::Extend(param_2);
          }
          *(ulong **)pIVar1 = puVar9 + 1;
          *puVar9 = uVar24;
          if ((uVar7 & 1) != 0) goto LAB_010a7dbc;
LAB_010a7d78:
          if (-1 < (int)(uint)uVar24) {
            dVar19 = (double)(ulong)((uint)uVar24 >> 1);
LAB_010a7d80:
            if ((param_7 >> 1 & 1) == 0) {
              uVar24 = *param_3;
            }
            else {
              uVar24 = *param_3;
              plVar12 = *(long **)(v8::internal::ElementsAccessor::elements_accessors_ +
                                  ((ulong)*(byte *)((uVar24 & 0xffffffff00000000 | 10) +
                                                   (ulong)*(uint *)(uVar24 - 1)) & 0xf8));
              lVar13 = (**(code **)(*plVar12 + 0x108))
                                 (plVar12,param_2,uVar24,
                                  uVar24 & 0xffffffff00000000 | (ulong)*(uint *)(uVar24 + 7),
                                  (ulong)dVar19 & 0xffffffff);
              if ((lVar13 == -1) ||
                 (uVar7 = (**(code **)(*plVar12 + 0x110))(plVar12,*param_3,lVar13),
                 (uVar7 >> 4 & 1) != 0)) goto LAB_010a7d34;
              uVar24 = *param_3;
            }
            if (((uVar24 & 1) == 0) ||
               (puVar9 = param_3,
               *(ushort *)(((ulong)param_2 | 7) + (ulong)*(uint *)(uVar24 - 1)) < 0xa9)) {
              puVar9 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                          (param_2,param_3,(ulong)dVar19 & 0xffffffff);
            }
            uVar24 = (ulong)dVar19 & 0xffffffff;
            local_108[0] = 1;
            local_fc = 0xc000000000;
            local_e8 = (ulong *)0x0;
            uStack_e0 = 0;
            uStack_d0 = 0;
            local_b8 = 0xffffffffffffffff;
            local_f0 = param_2;
            puVar10 = local_e8;
            local_d8 = param_3;
            local_c8 = puVar9;
            uStack_c0 = uVar24;
            if (((uVar24 == 0xffffffff) &&
                (*(short *)((*puVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar9 - 1)) !=
                 0x41b)) &&
               (puVar10 = (ulong *)v8::internal::Factory::SizeToString
                                             ((Factory *)param_2,0xffffffff,true),
               (*(ushort *)((*puVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar10 - 1)) &
               0xffe0) == 0x20)) {
              puVar10 = (ulong *)v8::internal::StringTable::LookupString(param_2);
            }
            local_e8 = puVar10;
            v8::internal::LookupIterator::Start<true>((LookupIterator *)local_108);
            puVar9 = (ulong *)v8::internal::Object::GetProperty((LookupIterator *)local_108,false);
            uVar14 = 0;
            if (puVar9 == (ulong *)0x0) goto LAB_010a804c;
            if ((param_5 & 1) != 0) {
              puVar11 = (undefined4 *)
                        v8::internal::Factory::SizeToString((Factory *)param_2,uVar24,true);
              plVar12 = (long *)v8::internal::Factory::NewUninitializedFixedArray
                                          ((Factory *)param_2,2);
              *(undefined4 *)(*plVar12 + 7) = *puVar11;
              *(int *)(*plVar12 + 0xb) = (int)*puVar9;
              puVar9 = (ulong *)v8::internal::Factory::NewJSArrayWithElements(param_2,plVar12,2,2,0)
              ;
            }
            uVar22 = *puVar9;
            iVar2 = iVar23 + 1;
            uVar24 = *param_4;
            lVar13 = uVar24 + (long)(iVar23 << 2);
            *(int *)(lVar13 + 7) = (int)uVar22;
            iVar23 = iVar2;
            if ((uVar22 & 1) != 0) {
              uVar16 = *(ulong *)((uVar22 & 0xfffffffffffc0000) + 8);
              lVar13 = lVar13 + 7;
              if (((uint)uVar16 >> 0x12 & 1) != 0) {
                v8::internal::Heap_MarkingBarrierSlow(uVar24,lVar13,uVar22);
                uVar16 = *(ulong *)(uVar22 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar16 & 0x18) != 0) &&
                 ((*(byte *)((uVar24 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                v8::internal::Heap_GenerationalBarrierSlow(uVar24,lVar13,uVar22);
              }
            }
          }
        }
        else {
          puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar24);
          uVar24 = *puVar9;
          if ((uVar24 & 1) == 0) goto LAB_010a7d78;
LAB_010a7dbc:
          if (*(short *)((uVar24 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar24 - 1)) == 0x42)
          {
            dVar19 = *(double *)(uVar24 + 3) + 4503599627370496.0;
            if (((ulong)dVar19 >> 0x20 != 0x43300000) ||
               (*(double *)(uVar24 + 3) != (double)((ulong)dVar19 & 0xffffffff))) goto LAB_010a7d34;
            goto LAB_010a7d80;
          }
        }
LAB_010a7d34:
        uVar24 = *puVar8;
        uVar15 = uVar15 + 1;
        iVar26 = iVar26 + 4;
      } while ((long)uVar15 < (long)(*(int *)(uVar24 + 3) >> 1));
    }
  }
LAB_010a803c:
  uVar14 = 0x101;
  *param_6 = iVar23;
LAB_010a804c:
  if (*(long *)(lVar6 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar14);
}

