
void FUN_010a4570(undefined8 param_1,Isolate *param_2,ulong *param_3,ulong *param_4,uint param_5,
                 int *param_6,uint param_7)

{
  Isolate *pIVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  uint uVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined4 *puVar10;
  long *plVar11;
  long lVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  double dVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  ulong uVar24;
  int iVar25;
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
  uVar23 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 7);
  pIVar1 = param_2 + 0x95a0;
  local_b0 = param_2;
  if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)pIVar1;
    if (puVar8 == *(ulong **)(param_2 + 0x95a8)) {
      puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_2);
    }
    *(ulong **)pIVar1 = puVar8 + 1;
    *puVar8 = uVar23;
  }
  else {
    puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar23);
  }
  uVar23 = FUN_010a6738(param_3,puVar8,&local_b0);
  if ((uVar23 & 1) == 0) {
    uVar14 = 0;
    goto LAB_010a4c5c;
  }
  puVar8 = (ulong *)v8::internal::KeyAccumulator::GetKeys((KeyAccumulator *)&local_b0,1);
  uVar23 = *puVar8;
  if (*(int *)(uVar23 + 3) < 2) {
    uVar21 = 0;
    iVar22 = 0;
    if (0 < *(int *)(uVar23 + 3) >> 1) goto LAB_010a4918;
  }
  else {
    bVar5 = *(byte *)((*param_3 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(*param_3 - 1));
    iVar20 = 0;
    uVar21 = 0;
    iVar25 = 0;
    do {
      uVar7 = *(uint *)(uVar23 + (long)iVar20 + 7);
      uVar23 = uVar23 & 0xffffffff00000000 | (ulong)uVar7;
      if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar9 = *(ulong **)pIVar1;
        if (puVar9 == *(ulong **)(param_2 + 0x95a8)) {
          puVar9 = (ulong *)v8::internal::HandleScope::Extend(param_2);
        }
        *(ulong **)pIVar1 = puVar9 + 1;
        *puVar9 = uVar23;
        if ((uVar7 & 1) != 0) goto LAB_010a48a4;
LAB_010a46f8:
        if (-1 < (int)(uint)uVar23) {
          dVar18 = (double)(ulong)((uint)uVar23 >> 1);
LAB_010a4700:
          uVar16 = *param_3;
          uVar24 = (ulong)dVar18 & 0xffffffff;
          uVar23 = uVar16 & 0xffffffff00000000;
          uVar15 = uVar23 | *(uint *)(uVar16 + 7);
          uVar7 = (*(int *)(uVar15 + 3) >> 1) - 2;
          uVar17 = SUB84(dVar18,0);
          if ((uVar7 <= uVar17) ||
             ((uVar4 = *(uint *)(uVar15 + (long)(int)(uVar17 * 4 + 8) + 7), uVar19 = uVar24,
              (uVar4 & 1) != 0 && (uVar4 == *(uint *)(param_2 + 0xa8))))) {
            uVar19 = uVar23 | *(uint *)(uVar15 + 0xb);
            piVar3 = (int *)(uVar16 + 0xb);
            if (*(short *)((uVar23 | 7) + (ulong)*(uint *)(uVar16 - 1)) != 0x423) {
              piVar3 = (int *)(uVar19 + 3);
            }
            if (((uint)(*piVar3 >> 1) <= uVar17) ||
               ((((ulong)(param_2 + *(uint *)(uVar19 + (long)(int)(uVar17 << 2) + 7)) & 1) != 0 &&
                ((int)(param_2 + *(uint *)(uVar19 + (long)(int)(uVar17 << 2) + 7)) ==
                 *(int *)(param_2 + 0xa8))))) goto LAB_010a46b4;
            uVar19 = uVar7 + uVar24;
          }
          puVar9 = (ulong *)FUN_010a6554(uVar23,uVar15,uVar19);
          if ((param_5 & 1) != 0) {
            puVar10 = (undefined4 *)
                      v8::internal::Factory::SizeToString((Factory *)param_2,uVar24,true);
            plVar11 = (long *)v8::internal::Factory::NewUninitializedFixedArray
                                        ((Factory *)param_2,2);
            *(undefined4 *)(*plVar11 + 7) = *puVar10;
            *(int *)(*plVar11 + 0xb) = (int)*puVar9;
            puVar9 = (ulong *)v8::internal::Factory::NewJSArrayWithElements(param_2,plVar11,2,2,0);
          }
          uVar15 = *puVar9;
          iVar22 = iVar25 + 1;
          uVar23 = *param_4;
          lVar12 = uVar23 + (long)(iVar25 << 2);
          *(int *)(lVar12 + 7) = (int)uVar15;
          if ((uVar15 & 1) != 0) {
            uVar16 = *(ulong *)((uVar15 & 0xfffffffffffc0000) + 8);
            lVar12 = lVar12 + 7;
            if (((uint)uVar16 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar23,lVar12,uVar15);
              uVar16 = *(ulong *)(uVar15 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar16 & 0x18) != 0) &&
               ((*(byte *)((uVar23 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar23,lVar12,uVar15);
            }
          }
          iVar25 = iVar22;
          if (7 < (*(byte *)((*param_3 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(*param_3 - 1))
                  ^ bVar5)) {
            uVar23 = *puVar8;
            if (*(int *)(uVar23 + 3) >> 1 <= (int)uVar21) goto LAB_010a4c4c;
            goto LAB_010a4918;
          }
        }
      }
      else {
        puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar23);
        uVar23 = *puVar9;
        if ((uVar23 & 1) == 0) goto LAB_010a46f8;
LAB_010a48a4:
        if (*(short *)((uVar23 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar23 - 1)) == 0x42) {
          dVar18 = *(double *)(uVar23 + 3) + 4503599627370496.0;
          if (((ulong)dVar18 >> 0x20 != 0x43300000) ||
             (*(double *)(uVar23 + 3) != (double)((ulong)dVar18 & 0xffffffff))) goto LAB_010a46b4;
          goto LAB_010a4700;
        }
      }
LAB_010a46b4:
      uVar23 = *puVar8;
      uVar21 = uVar21 + 1;
      iVar20 = iVar20 + 4;
      iVar2 = *(int *)(uVar23 + 3) >> 1;
    } while ((long)uVar21 < (long)iVar2);
    iVar22 = iVar25;
    if ((int)uVar21 < iVar2) {
LAB_010a4918:
      uVar15 = uVar21 & 0xffffffff;
      iVar20 = (int)uVar21 << 2;
      do {
        uVar7 = *(uint *)(uVar23 + (long)iVar20 + 7);
        uVar23 = uVar23 & 0xffffffff00000000 | (ulong)uVar7;
        if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)pIVar1;
          if (puVar9 == *(ulong **)(param_2 + 0x95a8)) {
            puVar9 = (ulong *)v8::internal::HandleScope::Extend(param_2);
          }
          *(ulong **)pIVar1 = puVar9 + 1;
          *puVar9 = uVar23;
          if ((uVar7 & 1) != 0) goto LAB_010a49d0;
LAB_010a498c:
          if (-1 < (int)(uint)uVar23) {
            dVar18 = (double)(ulong)((uint)uVar23 >> 1);
LAB_010a4994:
            if ((param_7 >> 1 & 1) == 0) {
              uVar23 = *param_3;
            }
            else {
              uVar23 = *param_3;
              plVar11 = *(long **)(v8::internal::ElementsAccessor::elements_accessors_ +
                                  ((ulong)*(byte *)((uVar23 & 0xffffffff00000000 | 10) +
                                                   (ulong)*(uint *)(uVar23 - 1)) & 0xf8));
              lVar12 = (**(code **)(*plVar11 + 0x108))
                                 (plVar11,param_2,uVar23,
                                  uVar23 & 0xffffffff00000000 | (ulong)*(uint *)(uVar23 + 7),
                                  (ulong)dVar18 & 0xffffffff);
              if ((lVar12 == -1) ||
                 (uVar7 = (**(code **)(*plVar11 + 0x110))(plVar11,*param_3,lVar12),
                 (uVar7 >> 4 & 1) != 0)) goto LAB_010a4948;
              uVar23 = *param_3;
            }
            if (((uVar23 & 1) == 0) ||
               (puVar9 = param_3,
               *(ushort *)(((ulong)param_2 | 7) + (ulong)*(uint *)(uVar23 - 1)) < 0xa9)) {
              puVar9 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                          (param_2,param_3,(ulong)dVar18 & 0xffffffff);
            }
            uVar23 = (ulong)dVar18 & 0xffffffff;
            local_108[0] = 1;
            local_fc = 0xc000000000;
            local_e8 = (ulong *)0x0;
            uStack_e0 = 0;
            uStack_d0 = 0;
            local_b8 = 0xffffffffffffffff;
            local_f0 = param_2;
            puVar13 = local_e8;
            local_d8 = param_3;
            local_c8 = puVar9;
            uStack_c0 = uVar23;
            if (((uVar23 == 0xffffffff) &&
                (*(short *)((*puVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar9 - 1)) !=
                 0x41b)) &&
               (puVar13 = (ulong *)v8::internal::Factory::SizeToString
                                             ((Factory *)param_2,0xffffffff,true),
               (*(ushort *)((*puVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar13 - 1)) &
               0xffe0) == 0x20)) {
              puVar13 = (ulong *)v8::internal::StringTable::LookupString(param_2);
            }
            local_e8 = puVar13;
            v8::internal::LookupIterator::Start<true>((LookupIterator *)local_108);
            puVar9 = (ulong *)v8::internal::Object::GetProperty((LookupIterator *)local_108,false);
            uVar14 = 0;
            if (puVar9 == (ulong *)0x0) goto LAB_010a4c5c;
            if ((param_5 & 1) != 0) {
              puVar10 = (undefined4 *)
                        v8::internal::Factory::SizeToString((Factory *)param_2,uVar23,true);
              plVar11 = (long *)v8::internal::Factory::NewUninitializedFixedArray
                                          ((Factory *)param_2,2);
              *(undefined4 *)(*plVar11 + 7) = *puVar10;
              *(int *)(*plVar11 + 0xb) = (int)*puVar9;
              puVar9 = (ulong *)v8::internal::Factory::NewJSArrayWithElements(param_2,plVar11,2,2,0)
              ;
            }
            uVar21 = *puVar9;
            iVar25 = iVar22 + 1;
            uVar23 = *param_4;
            lVar12 = uVar23 + (long)(iVar22 << 2);
            *(int *)(lVar12 + 7) = (int)uVar21;
            iVar22 = iVar25;
            if ((uVar21 & 1) != 0) {
              uVar16 = *(ulong *)((uVar21 & 0xfffffffffffc0000) + 8);
              lVar12 = lVar12 + 7;
              if (((uint)uVar16 >> 0x12 & 1) != 0) {
                v8::internal::Heap_MarkingBarrierSlow(uVar23,lVar12,uVar21);
                uVar16 = *(ulong *)(uVar21 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar16 & 0x18) != 0) &&
                 ((*(byte *)((uVar23 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                v8::internal::Heap_GenerationalBarrierSlow(uVar23,lVar12,uVar21);
              }
            }
          }
        }
        else {
          puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar23);
          uVar23 = *puVar9;
          if ((uVar23 & 1) == 0) goto LAB_010a498c;
LAB_010a49d0:
          if (*(short *)((uVar23 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar23 - 1)) == 0x42)
          {
            dVar18 = *(double *)(uVar23 + 3) + 4503599627370496.0;
            if (((ulong)dVar18 >> 0x20 != 0x43300000) ||
               (*(double *)(uVar23 + 3) != (double)((ulong)dVar18 & 0xffffffff))) goto LAB_010a4948;
            goto LAB_010a4994;
          }
        }
LAB_010a4948:
        uVar23 = *puVar8;
        uVar15 = uVar15 + 1;
        iVar20 = iVar20 + 4;
      } while ((long)uVar15 < (long)(*(int *)(uVar23 + 3) >> 1));
    }
  }
LAB_010a4c4c:
  uVar14 = 0x101;
  *param_6 = iVar22;
LAB_010a4c5c:
  if (*(long *)(lVar6 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar14);
}

