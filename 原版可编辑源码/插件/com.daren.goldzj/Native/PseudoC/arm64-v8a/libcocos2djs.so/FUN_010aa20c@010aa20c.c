
void FUN_010aa20c(undefined8 param_1,Isolate *param_2,ulong *param_3,ulong *param_4,uint param_5,
                 int *param_6,uint param_7)

{
  Isolate *pIVar1;
  uint *puVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong *puVar8;
  undefined4 *puVar9;
  long *plVar10;
  long lVar11;
  ulong *puVar12;
  uint uVar13;
  int iVar14;
  double dVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  Isolate *this;
  ulong uVar21;
  int iVar22;
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
  uVar20 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 7);
  pIVar1 = param_2 + 0x95a0;
  local_b0 = param_2;
  if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pIVar1;
    if (puVar6 == *(ulong **)(param_2 + 0x95a8)) {
      puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_2);
    }
    *(ulong **)pIVar1 = puVar6 + 1;
    *puVar6 = uVar20;
    this = local_b0;
  }
  else {
    puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar20);
    this = param_2;
  }
  uVar5 = *(uint *)((*param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 0xb)) + 7);
  if (uVar5 != 0) {
    uVar13 = 0;
    do {
      uVar7 = v8::internal::Factory::NewNumberFromUint((Factory *)this,uVar13);
      uVar20 = v8::internal::KeyAccumulator::AddKey((KeyAccumulator *)&local_b0,uVar7,0);
      if ((uVar20 & 1) == 0) goto LAB_010aa5b8;
      uVar13 = uVar13 + 1;
    } while (uVar5 != uVar13);
  }
  uVar20 = FUN_0108c0b8(param_3,puVar6,&local_b0);
  if ((uVar20 & 1) == 0) {
LAB_010aa5b8:
    uVar7 = 0;
    goto LAB_010aa924;
  }
  puVar6 = (ulong *)v8::internal::KeyAccumulator::GetKeys((KeyAccumulator *)&local_b0,1);
  uVar20 = *puVar6;
  if (*(int *)(uVar20 + 3) < 2) {
    uVar19 = 0;
    iVar22 = 0;
    if (0 < *(int *)(uVar20 + 3) >> 1) goto LAB_010aa5f0;
  }
  else {
    bVar3 = *(byte *)((*param_3 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(*param_3 - 1));
    iVar18 = 0;
    uVar19 = 0;
    iVar22 = 0;
    do {
      uVar5 = *(uint *)(uVar20 + (long)iVar18 + 7);
      uVar20 = uVar20 & 0xffffffff00000000 | (ulong)uVar5;
      if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)pIVar1;
        if (puVar8 == *(ulong **)(param_2 + 0x95a8)) {
          puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_2);
        }
        *(ulong **)pIVar1 = puVar8 + 1;
        *puVar8 = uVar20;
        if ((uVar5 & 1) != 0) goto LAB_010aa570;
LAB_010aa3ec:
        if (-1 < (int)(uint)uVar20) {
          dVar15 = (double)(ulong)((uint)uVar20 >> 1);
LAB_010aa3f4:
          uVar16 = *param_3;
          uVar21 = (ulong)dVar15 & 0xffffffff;
          uVar17 = uVar16 & 0xffffffff00000000;
          uVar5 = *(uint *)((uVar17 | *(uint *)(uVar16 + 0xb)) + 7);
          uVar13 = SUB84(dVar15,0);
          uVar20 = uVar21;
          if (uVar5 <= uVar13) {
            uVar20 = uVar17 | *(uint *)(uVar16 + 7);
            puVar2 = (uint *)(uVar16 + 0xb);
            if (*(short *)((uVar17 | 7) + (ulong)*(uint *)(uVar16 - 1)) != 0x423) {
              puVar2 = (uint *)(uVar20 + 3);
            }
            if (((uint)((int)*puVar2 >> 1) <= uVar13) ||
               ((((ulong)(param_2 + *(uint *)(uVar20 + (long)(int)(uVar13 << 2) + 7)) & 1) != 0 &&
                ((int)(param_2 + *(uint *)(uVar20 + (long)(int)(uVar13 << 2) + 7)) ==
                 *(int *)(param_2 + 0xa8))))) goto LAB_010aa3a8;
            uVar20 = uVar5 + uVar21;
          }
          puVar8 = (ulong *)FUN_010abd60(param_3,uVar20);
          if ((param_5 & 1) != 0) {
            puVar9 = (undefined4 *)
                     v8::internal::Factory::SizeToString((Factory *)param_2,uVar21,true);
            plVar10 = (long *)v8::internal::Factory::NewUninitializedFixedArray
                                        ((Factory *)param_2,2);
            *(undefined4 *)(*plVar10 + 7) = *puVar9;
            *(int *)(*plVar10 + 0xb) = (int)*puVar8;
            puVar8 = (ulong *)v8::internal::Factory::NewJSArrayWithElements(param_2,plVar10,2,2,0);
          }
          uVar16 = *puVar8;
          iVar14 = iVar22 + 1;
          uVar20 = *param_4;
          lVar11 = uVar20 + (long)(iVar22 << 2);
          *(int *)(lVar11 + 7) = (int)uVar16;
          if ((uVar16 & 1) != 0) {
            uVar17 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
            lVar11 = lVar11 + 7;
            if (((uint)uVar17 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar20,lVar11,uVar16);
              uVar17 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar17 & 0x18) != 0) &&
               ((*(byte *)((uVar20 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar20,lVar11,uVar16);
            }
          }
          iVar22 = iVar14;
          if (7 < (*(byte *)((*param_3 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(*param_3 - 1))
                  ^ bVar3)) {
            uVar20 = *puVar6;
            iVar14 = *(int *)(uVar20 + 3);
            break;
          }
        }
      }
      else {
        puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar20);
        uVar20 = *puVar8;
        if ((uVar20 & 1) == 0) goto LAB_010aa3ec;
LAB_010aa570:
        if (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) == 0x42) {
          dVar15 = *(double *)(uVar20 + 3) + 4503599627370496.0;
          if (((ulong)dVar15 >> 0x20 != 0x43300000) ||
             (*(double *)(uVar20 + 3) != (double)((ulong)dVar15 & 0xffffffff))) goto LAB_010aa3a8;
          goto LAB_010aa3f4;
        }
      }
LAB_010aa3a8:
      uVar20 = *puVar6;
      uVar19 = uVar19 + 1;
      iVar18 = iVar18 + 4;
      iVar14 = *(int *)(uVar20 + 3);
    } while ((long)uVar19 < (long)(iVar14 >> 1));
    if ((int)uVar19 < iVar14 >> 1) {
LAB_010aa5f0:
      uVar16 = uVar19 & 0xffffffff;
      iVar18 = (int)uVar19 << 2;
      iVar14 = iVar22;
      do {
        uVar5 = *(uint *)(uVar20 + (long)iVar18 + 7);
        uVar20 = uVar20 & 0xffffffff00000000 | (ulong)uVar5;
        iVar22 = iVar14;
        if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar8 = *(ulong **)pIVar1;
          if (puVar8 == *(ulong **)(param_2 + 0x95a8)) {
            puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_2);
          }
          *(ulong **)pIVar1 = puVar8 + 1;
          *puVar8 = uVar20;
          if ((uVar5 & 1) != 0) goto LAB_010aa6a8;
LAB_010aa668:
          if (-1 < (int)(uint)uVar20) {
            dVar15 = (double)(ulong)((uint)uVar20 >> 1);
LAB_010aa670:
            if ((param_7 >> 1 & 1) == 0) {
              uVar20 = *param_3;
            }
            else {
              uVar20 = *param_3;
              plVar10 = *(long **)(v8::internal::ElementsAccessor::elements_accessors_ +
                                  ((ulong)*(byte *)((uVar20 & 0xffffffff00000000 | 10) +
                                                   (ulong)*(uint *)(uVar20 - 1)) & 0xf8));
              lVar11 = (**(code **)(*plVar10 + 0x108))
                                 (plVar10,param_2,uVar20,
                                  uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 + 7),
                                  (ulong)dVar15 & 0xffffffff);
              if ((lVar11 == -1) ||
                 (uVar5 = (**(code **)(*plVar10 + 0x110))(plVar10,*param_3,lVar11),
                 (uVar5 >> 4 & 1) != 0)) goto LAB_010aa624;
              uVar20 = *param_3;
            }
            if (((uVar20 & 1) == 0) ||
               (puVar8 = param_3,
               *(ushort *)(((ulong)param_2 | 7) + (ulong)*(uint *)(uVar20 - 1)) < 0xa9)) {
              puVar8 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                          (param_2,param_3,(ulong)dVar15 & 0xffffffff);
            }
            uVar20 = (ulong)dVar15 & 0xffffffff;
            local_108[0] = 1;
            local_fc = 0xc000000000;
            local_e8 = (ulong *)0x0;
            uStack_e0 = 0;
            uStack_d0 = 0;
            local_b8 = 0xffffffffffffffff;
            local_f0 = param_2;
            puVar12 = local_e8;
            local_d8 = param_3;
            local_c8 = puVar8;
            uStack_c0 = uVar20;
            if (((uVar20 == 0xffffffff) &&
                (*(short *)((*puVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar8 - 1)) !=
                 0x41b)) &&
               (puVar12 = (ulong *)v8::internal::Factory::SizeToString
                                             ((Factory *)param_2,0xffffffff,true),
               (*(ushort *)((*puVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar12 - 1)) &
               0xffe0) == 0x20)) {
              puVar12 = (ulong *)v8::internal::StringTable::LookupString(param_2);
            }
            local_e8 = puVar12;
            v8::internal::LookupIterator::Start<true>((LookupIterator *)local_108);
            puVar8 = (ulong *)v8::internal::Object::GetProperty((LookupIterator *)local_108,false);
            uVar7 = 0;
            if (puVar8 == (ulong *)0x0) goto LAB_010aa924;
            if ((param_5 & 1) != 0) {
              puVar9 = (undefined4 *)
                       v8::internal::Factory::SizeToString((Factory *)param_2,uVar20,true);
              plVar10 = (long *)v8::internal::Factory::NewUninitializedFixedArray
                                          ((Factory *)param_2,2);
              *(undefined4 *)(*plVar10 + 7) = *puVar9;
              *(int *)(*plVar10 + 0xb) = (int)*puVar8;
              puVar8 = (ulong *)v8::internal::Factory::NewJSArrayWithElements(param_2,plVar10,2,2,0)
              ;
            }
            uVar19 = *puVar8;
            iVar22 = iVar14 + 1;
            uVar20 = *param_4;
            lVar11 = uVar20 + (long)(iVar14 << 2);
            *(int *)(lVar11 + 7) = (int)uVar19;
            if ((uVar19 & 1) != 0) {
              uVar17 = *(ulong *)((uVar19 & 0xfffffffffffc0000) + 8);
              lVar11 = lVar11 + 7;
              if (((uint)uVar17 >> 0x12 & 1) != 0) {
                v8::internal::Heap_MarkingBarrierSlow(uVar20,lVar11,uVar19);
                uVar17 = *(ulong *)(uVar19 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar17 & 0x18) != 0) &&
                 ((*(byte *)((uVar20 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                v8::internal::Heap_GenerationalBarrierSlow(uVar20,lVar11,uVar19);
              }
            }
          }
        }
        else {
          puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar20);
          uVar20 = *puVar8;
          if ((uVar20 & 1) == 0) goto LAB_010aa668;
LAB_010aa6a8:
          if (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) == 0x42)
          {
            dVar15 = *(double *)(uVar20 + 3) + 4503599627370496.0;
            if (((ulong)dVar15 >> 0x20 != 0x43300000) ||
               (*(double *)(uVar20 + 3) != (double)((ulong)dVar15 & 0xffffffff))) goto LAB_010aa624;
            goto LAB_010aa670;
          }
        }
LAB_010aa624:
        uVar20 = *puVar6;
        uVar16 = uVar16 + 1;
        iVar18 = iVar18 + 4;
        iVar14 = iVar22;
      } while ((long)uVar16 < (long)(*(int *)(uVar20 + 3) >> 1));
    }
  }
  uVar7 = 0x101;
  *param_6 = iVar22;
LAB_010aa924:
  if (*(long *)(lVar4 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

