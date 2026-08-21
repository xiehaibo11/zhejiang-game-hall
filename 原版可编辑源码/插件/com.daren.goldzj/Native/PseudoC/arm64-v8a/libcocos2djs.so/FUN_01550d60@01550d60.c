
ulong * FUN_01550d60(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint uVar5;
  bool bVar6;
  byte *pbVar7;
  ushort uVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  double dVar22;
  byte **local_120;
  byte *local_118;
  char *local_110;
  undefined8 local_108;
  RuntimeCallStats *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long *local_d0;
  long *local_c8;
  undefined1 auStack_64 [4];
  
  local_e0 = 0;
  uStack_f8 = 0;
  local_100 = (RuntimeCallStats *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_100 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_100,(ulong)&local_100 | 8,0xbb);
  }
  if (DAT_01d46cc8 == (byte *)0x0) {
    plVar9 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46cc8 = (byte *)(**(code **)(*plVar9 + 0x10))(plVar9,"disabled-by-default-v8.runtime");
  }
  pbVar7 = DAT_01d46cc8;
  local_120 = (byte **)0x0;
  if ((*DAT_01d46cc8 & 5) != 0) {
    local_d0 = (long *)0x0;
    local_c8 = (long *)0x0;
    plVar9 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar10 = (**(code **)(*plVar9 + 0x18))
                       (plVar9,0x58,pbVar7,"V8.Runtime_Runtime_ArrayIncludes_Slow",0,0,0,0,0,0,0,
                        &local_d0,0);
    plVar9 = local_c8;
    local_c8 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    plVar9 = local_d0;
    local_d0 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    local_120 = &local_118;
    local_110 = "V8.Runtime_Runtime_ArrayIncludes_Slow";
    local_118 = pbVar7;
    local_108 = uVar10;
  }
  puVar2 = *(ulong **)(param_3 + 0x95a0);
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar13 = param_2 + -2;
  uVar21 = *param_2;
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar11 = puVar2;
    if (puVar3 == puVar2) {
      puVar11 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar11 + 1;
    *puVar11 = uVar21;
    if ((uVar21 & 1) != 0) goto LAB_01550edc;
LAB_01550ef4:
    puVar11 = (ulong *)v8::internal::Object::ToObjectImpl(param_3,puVar11,0);
  }
  else {
    puVar11 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar21);
    uVar21 = *puVar11;
    if ((uVar21 & 1) == 0) goto LAB_01550ef4;
LAB_01550edc:
    if (*(ushort *)((uVar21 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar21 - 1)) < 0xa9)
    goto LAB_01550ef4;
  }
  if (puVar11 == (ulong *)0x0) goto LAB_015512c4;
  uVar17 = *puVar11;
  uVar21 = uVar17 & 0xffffffff00000000;
  if (*(short *)((uVar21 | *(uint *)(uVar17 - 1)) + 7) == 0x423) {
    uVar5 = *(uint *)(uVar17 + 0xb);
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
      if (-1 < (int)uVar5) {
        uVar1 = uVar5 >> 1;
      }
joined_r0x01550ffc:
      uVar21 = (ulong)uVar1;
joined_r0x01550ffc:
      if (uVar21 != 0) {
LAB_01550f44:
        if ((*puVar13 & 1) == 0) {
LAB_01551038:
          if (puVar13 == (ulong *)0x0) goto LAB_015512c4;
          uVar16 = *puVar13;
          if ((uVar16 & 1) == 0) {
            uVar5 = (int)uVar16 >> 1;
            uVar17 = (ulong)uVar5;
            if ((int)uVar16 < 0) {
              uVar17 = uVar21 + (long)(int)uVar5;
              uVar17 = uVar17 & ((long)uVar17 >> 0x3f ^ 0xffffffffffffffffU);
            }
          }
          else {
            dVar22 = *(double *)(uVar16 + 3);
            if ((double)(long)uVar21 <= dVar22) {
              param_2 = *(ulong **)(param_3 + 0xc0);
              goto LAB_015512c8;
            }
            uVar17 = 0;
            if ((ABS(dVar22) != INFINITY) && (!NAN(ABS(dVar22)))) {
              if ((dVar22 < 0.0) && (dVar22 = dVar22 + (double)(long)uVar21, dVar22 <= 0.0)) {
                dVar22 = 0.0;
              }
              uVar17 = (ulong)dVar22;
            }
          }
        }
        else {
          if ((int)*puVar13 != *(int *)(param_3 + 0xa0)) {
            puVar13 = (ulong *)v8::internal::Object::ConvertToInteger(param_3,puVar13);
            goto LAB_01551038;
          }
          uVar17 = 0;
        }
        uVar16 = *puVar11;
        puVar13 = param_2 + -1;
        if (((long)uVar21 < 0x100000000) &&
           (uVar18 = uVar16 & 0xffffffff00000000,
           0x410 < *(ushort *)((uVar18 | *(uint *)(uVar16 - 1)) + 7))) {
          uVar5 = *(uint *)((uVar18 | *(uint *)(uVar16 - 1)) + 0xf);
          if (uVar5 != *(uint *)(param_3 + 0xb0)) {
            uVar20 = uVar18 | uVar5;
            do {
              uVar19 = uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 - 1);
              if ((*(ushort *)(uVar19 + 7) < 0x412) ||
                 ((*(int *)(uVar20 + 7) != *(int *)(param_3 + 0x168) &&
                  (*(int *)(uVar20 + 7) != *(int *)(param_3 + 1000))))) goto LAB_015510ec;
              uVar5 = *(uint *)(uVar19 + 0xf);
              uVar20 = uVar20 & 0xffffffff00000000 | (ulong)uVar5;
            } while (uVar5 != *(uint *)(param_3 + 0xb0));
          }
          plVar9 = *(long **)(v8::internal::ElementsAccessor::elements_accessors_ +
                             ((ulong)*(byte *)((uVar18 | 10) + (ulong)*(uint *)(uVar16 - 1)) & 0xf8)
                             );
          uVar8 = (**(code **)(*plVar9 + 200))(plVar9,param_3,puVar11,puVar13,uVar17,uVar21);
          if ((uVar8 & 0xff) == 0) {
            param_2 = *(ulong **)(param_3 + 0x180);
          }
          else {
            plVar9 = (long *)v8::internal::Factory::ToBoolean((Factory *)param_3,0xff < uVar8);
            param_2 = (ulong *)*plVar9;
            if (param_3 == (Isolate *)0x0) goto LAB_015512f0;
          }
        }
        else {
LAB_015510ec:
          if ((long)uVar17 < (long)uVar21) {
            uVar16 = uVar17 << 1;
            do {
              puVar12 = *(ulong **)(param_3 + 0x95a0);
              puVar4 = *(ulong **)(param_3 + 0x95a8);
              *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
              if ((uVar17 == (long)(int)uVar17) && (uVar17 + 0x40000000 >> 0x1f == 0)) {
                if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                  puVar14 = puVar12;
                  if (puVar4 == puVar12) {
                    puVar14 = (ulong *)v8::internal::HandleScope::Extend(param_3);
                  }
                  *(ulong **)(param_3 + 0x95a0) = puVar14 + 1;
                  *puVar14 = uVar16;
                }
                else {
                  puVar14 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                               (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar16)
                  ;
                }
              }
              else {
                puVar14 = (ulong *)v8::internal::Factory::
                                   NewHeapNumber<(v8::internal::AllocationType)0>
                                             ((Factory *)param_3);
                *(double *)(*puVar14 + 3) = (double)(long)uVar17;
              }
              v8::internal::LookupIterator::PropertyOrElement
                        ((LookupIterator *)&local_d0,param_3,puVar11,puVar14,auStack_64,3);
              puVar15 = (undefined8 *)
                        v8::internal::Object::GetProperty((LookupIterator *)&local_d0,false);
              if (puVar15 == (undefined8 *)0x0) {
                param_2 = *(ulong **)(param_3 + 0x180);
LAB_015511cc:
                bVar6 = true;
              }
              else {
                local_d0 = (long *)*puVar13;
                uVar18 = v8::internal::Object::SameValueZero((Object *)&local_d0,*puVar15);
                if ((uVar18 & 1) != 0) {
                  param_2 = *(ulong **)(param_3 + 0xb8);
                  goto LAB_015511cc;
                }
                bVar6 = false;
              }
              *(ulong **)(param_3 + 0x95a0) = puVar12;
              *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
              if (*(ulong **)(param_3 + 0x95a8) != puVar4) {
                *(ulong **)(param_3 + 0x95a8) = puVar4;
                v8::internal::HandleScope::DeleteExtensions(param_3);
              }
              if (bVar6) goto LAB_015512c8;
              uVar17 = uVar17 + 1;
              uVar16 = uVar16 + 2;
            } while (uVar21 != uVar17);
          }
          param_2 = *(ulong **)(param_3 + 0xc0);
        }
        goto LAB_015512c8;
      }
    }
    else if (*(short *)((uVar21 | 7) + (ulong)*(uint *)((uVar21 | uVar5) - 1)) == 0x42) {
      dVar22 = *(double *)((uVar21 | uVar5) + 3) + 4503599627370496.0;
      uVar1 = SUB84(dVar22,0);
      if ((ulong)dVar22 >> 0x20 != 0x43300000) {
        uVar1 = 0;
      }
      goto joined_r0x01550ffc;
    }
LAB_01551020:
    param_2 = *(ulong **)(param_3 + 0xc0);
  }
  else {
    puVar12 = (ulong *)v8::internal::Object::GetProperty(param_3,puVar11,param_3 + 0x7b8);
    if (puVar12 != (ulong *)0x0) {
      uVar21 = *puVar12;
      if ((uVar21 & 1) == 0) {
        uVar21 = (ulong)(((uint)(uVar21 >> 1) & 0x7fffffff & ((int)uVar21 >> 0x1f ^ 0xffffffffU)) <<
                        1);
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar12 = *(ulong **)(param_3 + 0x95a0);
          if (puVar12 == *(ulong **)(param_3 + 0x95a8)) {
            puVar12 = (ulong *)v8::internal::HandleScope::Extend(param_3);
          }
          *(ulong **)(param_3 + 0x95a0) = puVar12 + 1;
          *puVar12 = uVar21;
        }
        else {
          puVar12 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar21);
        }
      }
      else {
        puVar12 = (ulong *)v8::internal::Object::ConvertToLength(param_3,puVar12);
      }
      if (puVar12 != (ulong *)0x0) {
        uVar21 = *puVar12;
        if ((uVar21 & 1) != 0) {
          uVar21 = (ulong)*(double *)(uVar21 + 3);
          goto joined_r0x01550ffc;
        }
        uVar21 = (ulong)(double)((int)uVar21 >> 1);
        if (uVar21 == 0) goto LAB_01551020;
        goto LAB_01550f44;
      }
    }
LAB_015512c4:
    param_2 = *(ulong **)(param_3 + 0x180);
  }
LAB_015512c8:
  *(ulong **)(param_3 + 0x95a0) = puVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
    *(ulong **)(param_3 + 0x95a8) = puVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
LAB_015512f0:
  if ((local_120 != (byte **)0x0) && (*local_118 != 0)) {
    plVar9 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar9 + 0x28))(plVar9,local_118,local_110,local_108);
  }
  if (local_100 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_100,(RuntimeCallTimer *)((ulong)&local_100 | 8));
  }
  return param_2;
}

