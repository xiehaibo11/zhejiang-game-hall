
void FUN_010ac848(undefined8 param_1,Isolate *param_2,ulong *param_3,ulong *param_4,uint param_5,
                 int *param_6,uint param_7)

{
  Isolate *pIVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  long lVar10;
  ulong *puVar11;
  undefined4 *puVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  double dVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  Isolate *this;
  ulong uVar22;
  uint uVar23;
  int iVar24;
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
  
  lVar5 = tpidr_el0;
  local_80 = *(long *)(lVar5 + 0x28);
  local_88 = 0x1010000;
  uStack_90 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  uVar21 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 7);
  pIVar1 = param_2 + 0x95a0;
  local_b0 = param_2;
  if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar1;
    if (puVar7 == *(ulong **)(param_2 + 0x95a8)) {
      puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_2);
    }
    *(ulong **)pIVar1 = puVar7 + 1;
    *puVar7 = uVar21;
    this = local_b0;
  }
  else {
    puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar21);
    this = param_2;
  }
  uVar6 = *(uint *)((*param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 0xb)) + 7);
  if (uVar6 != 0) {
    uVar23 = 0;
    do {
      uVar8 = v8::internal::Factory::NewNumberFromUint((Factory *)this,uVar23);
      uVar21 = v8::internal::KeyAccumulator::AddKey((KeyAccumulator *)&local_b0,uVar8,0);
      if ((uVar21 & 1) == 0) goto LAB_010acdcc;
      uVar23 = uVar23 + 1;
    } while (uVar6 != uVar23);
  }
  uVar21 = FUN_010a3a80(param_3,puVar7,&local_b0);
  if ((uVar21 & 1) == 0) {
LAB_010acdcc:
    uVar8 = 0;
    goto LAB_010ad138;
  }
  puVar7 = (ulong *)v8::internal::KeyAccumulator::GetKeys((KeyAccumulator *)&local_b0,1);
  uVar21 = *puVar7;
  if (*(int *)(uVar21 + 3) < 2) {
    uVar20 = 0;
    iVar19 = 0;
    if (0 < *(int *)(uVar21 + 3) >> 1) goto LAB_010acdf4;
  }
  else {
    bVar3 = *(byte *)((*param_3 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(*param_3 - 1));
    uVar20 = 0;
    iVar24 = 0;
    do {
      uVar6 = *(uint *)(uVar21 + (long)((int)uVar20 << 2) + 7);
      uVar21 = uVar21 & 0xffffffff00000000 | (ulong)uVar6;
      if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar9 = *(ulong **)pIVar1;
        if (puVar9 == *(ulong **)(param_2 + 0x95a8)) {
          puVar9 = (ulong *)v8::internal::HandleScope::Extend(param_2);
        }
        *(ulong **)pIVar1 = puVar9 + 1;
        *puVar9 = uVar21;
        if ((uVar6 & 1) != 0) goto LAB_010acae0;
LAB_010aca50:
        if (-1 < (int)(uint)uVar21) {
          dVar16 = (double)(ulong)((uint)uVar21 >> 1);
LAB_010aca58:
          uVar14 = *param_3;
          uVar22 = (ulong)dVar16 & 0xffffffff;
          uVar18 = uVar14 & 0xffffffff00000000;
          uVar6 = *(uint *)((uVar18 | *(uint *)(uVar14 + 0xb)) + 7);
          uVar15 = SUB84(dVar16,0);
          uVar17 = uVar18 | *(uint *)(uVar14 + 7);
          uVar21 = uVar22;
          uVar23 = uVar15;
          if (uVar15 < uVar6) {
joined_r0x010acdc4:
            if ((uVar23 < uVar6) ||
               ((*(uint *)(uVar17 + ((long)((uVar21 - uVar6) * 0xc00000000 + 0x1800000000) >> 0x20)
                          + 7) >> 1 & 1) == 0)) {
              puVar9 = (ulong *)FUN_010ae4a4(param_3);
            }
            else {
              if (((uVar14 & 1) == 0) ||
                 (puVar9 = param_3,
                 *(ushort *)(((ulong)param_2 | 7) + (ulong)*(uint *)(uVar14 - 1)) < 0xa9)) {
                puVar9 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                            (param_2,param_3,uVar22);
              }
              local_108[0] = 1;
              local_fc = 0xc000000000;
              local_e8 = (ulong *)0x0;
              uStack_e0 = 0;
              uStack_d0 = 0;
              local_b8 = 0xffffffffffffffff;
              local_f0 = param_2;
              puVar11 = local_e8;
              local_d8 = param_3;
              local_c8 = puVar9;
              uStack_c0 = uVar22;
              if (((uVar15 == 0xffffffff) &&
                  (*(short *)((*puVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar9 - 1)) !=
                   0x41b)) &&
                 (puVar11 = (ulong *)v8::internal::Factory::SizeToString
                                               ((Factory *)param_2,uVar22,true),
                 (*(ushort *)((*puVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar11 - 1))
                 & 0xffe0) == 0x20)) {
                puVar11 = (ulong *)v8::internal::StringTable::LookupString(param_2);
              }
              local_e8 = puVar11;
              v8::internal::LookupIterator::Start<true>((LookupIterator *)local_108);
              puVar9 = (ulong *)v8::internal::Object::GetProperty((LookupIterator *)local_108,false)
              ;
              uVar8 = 0;
              if (puVar9 == (ulong *)0x0) goto LAB_010ad138;
            }
            if ((param_5 & 1) != 0) {
              puVar12 = (undefined4 *)
                        v8::internal::Factory::SizeToString((Factory *)param_2,uVar22,true);
              plVar13 = (long *)v8::internal::Factory::NewUninitializedFixedArray
                                          ((Factory *)param_2,2);
              *(undefined4 *)(*plVar13 + 7) = *puVar12;
              *(int *)(*plVar13 + 0xb) = (int)*puVar9;
              puVar9 = (ulong *)v8::internal::Factory::NewJSArrayWithElements(param_2,plVar13,2,2,0)
              ;
            }
            uVar14 = *puVar9;
            iVar19 = iVar24 + 1;
            uVar21 = *param_4;
            lVar10 = uVar21 + (long)(iVar24 << 2);
            *(int *)(lVar10 + 7) = (int)uVar14;
            if ((uVar14 & 1) != 0) {
              uVar17 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
              lVar10 = lVar10 + 7;
              if (((uint)uVar17 >> 0x12 & 1) != 0) {
                v8::internal::Heap_MarkingBarrierSlow(uVar21,lVar10,uVar14);
                uVar17 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar17 & 0x18) != 0) &&
                 ((*(byte *)((uVar21 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                v8::internal::Heap_GenerationalBarrierSlow(uVar21,lVar10,uVar14);
              }
            }
            iVar24 = iVar19;
            if (7 < (*(byte *)((*param_3 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(*param_3 - 1)
                              ) ^ bVar3)) {
              uVar21 = *puVar7;
              if (*(int *)(uVar21 + 3) >> 1 <= (int)uVar20) goto LAB_010ad128;
              goto LAB_010acdf4;
            }
          }
          else {
            uVar4 = (*(int *)(uVar17 + 0xf) >> 1) - 1;
            uVar21 = (*(ulong *)(*(long *)(param_2 + 0x490) + 7) ^ uVar22 ^ 0xffffffffffffffff) +
                     (*(ulong *)(*(long *)(param_2 + 0x490) + 7) ^ uVar22) * 0x40000;
            uVar21 = (uVar21 ^ uVar21 >> 0x1f) * 0x15;
            uVar21 = (uVar21 ^ uVar21 >> 0xb) * 0x41;
            uVar21 = (ulong)(uVar4 & ((uint)(uVar21 >> 0x16) ^ (uint)uVar21) & 0x3fffffff);
            lVar10 = uVar17 + 7;
            uVar23 = *(uint *)(((long)(uVar21 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar10);
            if (uVar23 != *(uint *)(param_2 + 0xa0)) {
              iVar19 = 1;
              do {
                if (uVar23 != (uint)*(undefined8 *)(param_2 + 0xa8)) {
                  if ((uVar23 & 1) == 0) {
                    dVar16 = (double)((int)uVar23 >> 1);
                  }
                  else {
                    dVar16 = *(double *)((uVar18 | uVar23) + 3);
                  }
                  if (uVar15 == (int)dVar16) {
                    if ((param_7 == 0) ||
                       ((param_7 & 7 &
                        *(uint *)(((long)(uVar21 * 0xc00000000 + 0x1800000000) >> 0x20) + lVar10) >>
                        4) == 0)) {
                      uVar21 = uVar21 + uVar6;
                      uVar23 = (uint)uVar21;
                      goto joined_r0x010acdc4;
                    }
                    break;
                  }
                }
                uVar21 = (ulong)((int)uVar21 + iVar19 & uVar4);
                uVar23 = *(uint *)(((long)(uVar21 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar10);
                iVar19 = iVar19 + 1;
              } while (uVar23 != *(uint *)(param_2 + 0xa0));
            }
          }
        }
      }
      else {
        puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar21);
        uVar21 = *puVar9;
        if ((uVar21 & 1) == 0) goto LAB_010aca50;
LAB_010acae0:
        if (*(short *)((uVar21 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar21 - 1)) == 0x42) {
          dVar16 = *(double *)(uVar21 + 3) + 4503599627370496.0;
          if (((ulong)dVar16 >> 0x20 != 0x43300000) ||
             (*(double *)(uVar21 + 3) != (double)((ulong)dVar16 & 0xffffffff))) goto LAB_010aca0c;
          goto LAB_010aca58;
        }
      }
LAB_010aca0c:
      uVar21 = *puVar7;
      uVar20 = uVar20 + 1;
      iVar2 = *(int *)(uVar21 + 3) >> 1;
    } while ((long)uVar20 < (long)iVar2);
    iVar19 = iVar24;
    if ((int)uVar20 < iVar2) {
LAB_010acdf4:
      uVar14 = uVar20 & 0xffffffff;
      iVar24 = (int)uVar20 << 2;
      do {
        uVar6 = *(uint *)(uVar21 + (long)iVar24 + 7);
        uVar21 = uVar21 & 0xffffffff00000000 | (ulong)uVar6;
        if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)pIVar1;
          if (puVar9 == *(ulong **)(param_2 + 0x95a8)) {
            puVar9 = (ulong *)v8::internal::HandleScope::Extend(param_2);
          }
          *(ulong **)pIVar1 = puVar9 + 1;
          *puVar9 = uVar21;
          if ((uVar6 & 1) != 0) goto LAB_010aceac;
LAB_010ace68:
          if (-1 < (int)(uint)uVar21) {
            dVar16 = (double)(ulong)((uint)uVar21 >> 1);
LAB_010ace70:
            if ((param_7 >> 1 & 1) == 0) {
              uVar21 = *param_3;
            }
            else {
              uVar21 = *param_3;
              plVar13 = *(long **)(v8::internal::ElementsAccessor::elements_accessors_ +
                                  ((ulong)*(byte *)((uVar21 & 0xffffffff00000000 | 10) +
                                                   (ulong)*(uint *)(uVar21 - 1)) & 0xf8));
              lVar10 = (**(code **)(*plVar13 + 0x108))
                                 (plVar13,param_2,uVar21,
                                  uVar21 & 0xffffffff00000000 | (ulong)*(uint *)(uVar21 + 7),
                                  (ulong)dVar16 & 0xffffffff);
              if ((lVar10 == -1) ||
                 (uVar6 = (**(code **)(*plVar13 + 0x110))(plVar13,*param_3,lVar10),
                 (uVar6 >> 4 & 1) != 0)) goto LAB_010ace24;
              uVar21 = *param_3;
            }
            if (((uVar21 & 1) == 0) ||
               (puVar9 = param_3,
               *(ushort *)(((ulong)param_2 | 7) + (ulong)*(uint *)(uVar21 - 1)) < 0xa9)) {
              puVar9 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                          (param_2,param_3,(ulong)dVar16 & 0xffffffff);
            }
            uVar21 = (ulong)dVar16 & 0xffffffff;
            local_108[0] = 1;
            local_fc = 0xc000000000;
            local_e8 = (ulong *)0x0;
            uStack_e0 = 0;
            uStack_d0 = 0;
            local_b8 = 0xffffffffffffffff;
            local_f0 = param_2;
            puVar11 = local_e8;
            local_d8 = param_3;
            local_c8 = puVar9;
            uStack_c0 = uVar21;
            if (((uVar21 == 0xffffffff) &&
                (*(short *)((*puVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar9 - 1)) !=
                 0x41b)) &&
               (puVar11 = (ulong *)v8::internal::Factory::SizeToString
                                             ((Factory *)param_2,0xffffffff,true),
               (*(ushort *)((*puVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar11 - 1)) &
               0xffe0) == 0x20)) {
              puVar11 = (ulong *)v8::internal::StringTable::LookupString(param_2);
            }
            local_e8 = puVar11;
            v8::internal::LookupIterator::Start<true>((LookupIterator *)local_108);
            puVar9 = (ulong *)v8::internal::Object::GetProperty((LookupIterator *)local_108,false);
            uVar8 = 0;
            if (puVar9 == (ulong *)0x0) goto LAB_010ad138;
            if ((param_5 & 1) != 0) {
              puVar12 = (undefined4 *)
                        v8::internal::Factory::SizeToString((Factory *)param_2,uVar21,true);
              plVar13 = (long *)v8::internal::Factory::NewUninitializedFixedArray
                                          ((Factory *)param_2,2);
              *(undefined4 *)(*plVar13 + 7) = *puVar12;
              *(int *)(*plVar13 + 0xb) = (int)*puVar9;
              puVar9 = (ulong *)v8::internal::Factory::NewJSArrayWithElements(param_2,plVar13,2,2,0)
              ;
            }
            uVar20 = *puVar9;
            iVar2 = iVar19 + 1;
            uVar21 = *param_4;
            lVar10 = uVar21 + (long)(iVar19 << 2);
            *(int *)(lVar10 + 7) = (int)uVar20;
            iVar19 = iVar2;
            if ((uVar20 & 1) != 0) {
              uVar17 = *(ulong *)((uVar20 & 0xfffffffffffc0000) + 8);
              lVar10 = lVar10 + 7;
              if (((uint)uVar17 >> 0x12 & 1) != 0) {
                v8::internal::Heap_MarkingBarrierSlow(uVar21,lVar10,uVar20);
                uVar17 = *(ulong *)(uVar20 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar17 & 0x18) != 0) &&
                 ((*(byte *)((uVar21 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                v8::internal::Heap_GenerationalBarrierSlow(uVar21,lVar10,uVar20);
              }
            }
          }
        }
        else {
          puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar21);
          uVar21 = *puVar9;
          if ((uVar21 & 1) == 0) goto LAB_010ace68;
LAB_010aceac:
          if (*(short *)((uVar21 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar21 - 1)) == 0x42)
          {
            dVar16 = *(double *)(uVar21 + 3) + 4503599627370496.0;
            if (((ulong)dVar16 >> 0x20 != 0x43300000) ||
               (*(double *)(uVar21 + 3) != (double)((ulong)dVar16 & 0xffffffff))) goto LAB_010ace24;
            goto LAB_010ace70;
          }
        }
LAB_010ace24:
        uVar21 = *puVar7;
        uVar14 = uVar14 + 1;
        iVar24 = iVar24 + 4;
      } while ((long)uVar14 < (long)(*(int *)(uVar21 + 3) >> 1));
    }
  }
LAB_010ad128:
  uVar8 = 0x101;
  *param_6 = iVar19;
LAB_010ad138:
  if (*(long *)(lVar5 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

