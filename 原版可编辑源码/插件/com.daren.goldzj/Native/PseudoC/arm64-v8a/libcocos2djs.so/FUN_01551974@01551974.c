
ulong FUN_01551974(undefined8 param_1,ulong *param_2,Factory *param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  ushort uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  double dVar21;
  undefined1 auVar22 [16];
  ulong local_130;
  byte **local_120;
  byte *local_118;
  char *local_110;
  undefined8 local_108;
  RuntimeCallStats *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulong local_d8;
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
    v8::internal::RuntimeCallStats::Enter(local_100,(ulong)&local_100 | 8,0xbc);
  }
  if (DAT_01d46cd0 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46cd0 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d46cd0;
  local_120 = (byte **)0x0;
  if ((*DAT_01d46cd0 & 5) != 0) {
    local_d0 = (long *)0x0;
    local_c8 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar3,"V8.Runtime_Runtime_ArrayIndexOf",0,0,0,0,0,0,0,&local_d0,
                       0);
    plVar5 = local_c8;
    local_c8 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_d0;
    local_d0 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_120 = &local_118;
    local_110 = "V8.Runtime_Runtime_ArrayIndexOf";
    local_118 = pbVar3;
    local_108 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar8 = param_2 + -2;
  uVar13 = *param_2;
  if (((uVar13 & 1) == 0) ||
     (puVar7 = param_2,
     *(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) < 0xa9)) {
    puVar7 = (ulong *)v8::internal::Object::ToObjectImpl(param_3,param_2,"Array.prototype.indexOf");
  }
  if (puVar7 == (ulong *)0x0) {
LAB_01551f0c:
    uVar17 = *(ulong *)(param_3 + 0x180);
  }
  else {
    uVar17 = *puVar7;
    uVar13 = uVar17 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar13 + *(uint *)(uVar17 - 1)) != 0x423) {
      puVar9 = (ulong *)v8::internal::Object::GetProperty(param_3,puVar7,param_3 + 0x7b8);
      if (puVar9 != (ulong *)0x0) {
        uVar13 = *puVar9;
        if ((uVar13 & 1) == 0) {
          uVar13 = (ulong)(((uint)(uVar13 >> 1) & 0x7fffffff & ((int)uVar13 >> 0x1f ^ 0xffffffffU))
                          << 1);
          if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar9 = *(ulong **)(param_3 + 0x95a0);
            if (puVar9 == *(ulong **)(param_3 + 0x95a8)) {
              puVar9 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)param_3);
            }
            *(ulong **)(param_3 + 0x95a0) = puVar9 + 1;
            *puVar9 = uVar13;
          }
          else {
            puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar13);
          }
        }
        else {
          puVar9 = (ulong *)v8::internal::Object::ConvertToLength(param_3,puVar9);
        }
        if (puVar9 != (ulong *)0x0) {
          uVar13 = *puVar9;
          if ((uVar13 & 1) == 0) {
            uVar13 = (ulong)(double)((int)uVar13 >> 1);
            goto joined_r0x01551ba0;
          }
          uVar13 = (ulong)*(double *)(uVar13 + 3);
          goto joined_r0x01551e50;
        }
      }
      goto LAB_01551f0c;
    }
    uVar15 = *(uint *)(uVar17 + 0xb);
    if ((uVar15 & 1) == 0) {
      uVar1 = 0;
      if (-1 < (int)uVar15) {
        uVar1 = uVar15 >> 1;
      }
      uVar13 = (ulong)uVar1;
joined_r0x01551e50:
      if (uVar13 == 0) goto LAB_01551e54;
LAB_01551b1c:
      if ((*puVar8 & 1) != 0) {
        puVar8 = (ulong *)v8::internal::Object::ConvertToInteger(param_3,puVar8);
      }
      if (puVar8 == (ulong *)0x0) goto LAB_01551f0c;
      uVar17 = *puVar8;
      if ((uVar17 & 1) == 0) {
        dVar21 = (double)((int)uVar17 >> 1);
      }
      else {
        dVar21 = *(double *)(uVar17 + 3);
      }
      if ((double)(long)uVar13 < dVar21) goto LAB_01551e54;
      if (dVar21 < -9.223372036854776e+18) {
        uVar14 = 0;
      }
      else {
        uVar14 = (ulong)dVar21;
        if ((long)uVar14 < 0) {
          uVar14 = uVar13 + uVar14 & ((long)(uVar13 + uVar14) >> 0x3f ^ 0xffffffffffffffffU);
        }
      }
      uVar17 = *puVar7;
      if (((long)uVar13 < 0x100000000) &&
         (uVar16 = uVar17 & 0xffffffff00000000,
         0x410 < *(ushort *)((uVar16 | *(uint *)(uVar17 - 1)) + 7))) {
        uVar15 = *(uint *)((uVar16 | *(uint *)(uVar17 - 1)) + 0xf);
        if (uVar15 != *(uint *)(param_3 + 0xb0)) {
          uVar19 = uVar16 | uVar15;
          do {
            uVar18 = uVar19 & 0xffffffff00000000 | (ulong)*(uint *)(uVar19 - 1);
            if ((*(ushort *)(uVar18 + 7) < 0x412) ||
               ((*(int *)(uVar19 + 7) != *(int *)(param_3 + 0x168) &&
                (*(int *)(uVar19 + 7) != *(int *)(param_3 + 1000))))) goto LAB_01551cc0;
            uVar15 = *(uint *)(uVar18 + 0xf);
            uVar19 = uVar19 & 0xffffffff00000000 | (ulong)uVar15;
          } while (uVar15 != *(uint *)(param_3 + 0xb0));
        }
        plVar5 = *(long **)(v8::internal::ElementsAccessor::elements_accessors_ +
                           ((ulong)*(byte *)((uVar16 | 10) + (ulong)*(uint *)(uVar17 - 1)) & 0xf8));
        auVar22 = (**(code **)(*plVar5 + 0xd0))
                            (plVar5,param_3,puVar7,param_2 + -1,uVar14 & 0xffffffff,
                             uVar13 & 0xffffffff);
        lVar12 = auVar22._8_8_;
        if ((auVar22._0_8_ & 0xff) == 0) goto LAB_01551f0c;
        if ((lVar12 == auVar22._8_4_) && (lVar12 + 0x40000000U >> 0x1f == 0)) {
          if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar8 = *(ulong **)(param_3 + 0x95a0);
            if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
              puVar8 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)param_3);
            }
            *(ulong **)(param_3 + 0x95a0) = puVar8 + 1;
            *puVar8 = lVar12 << 1;
          }
          else {
            puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_3 + 0x95b8),lVar12 << 1);
          }
        }
        else {
          puVar8 = (ulong *)v8::internal::Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                                      (param_3);
          *(double *)(*puVar8 + 3) = (double)lVar12;
        }
        uVar17 = *puVar8;
joined_r0x01551e88:
        if (param_3 == (Factory *)0x0) goto LAB_01551f38;
      }
      else {
LAB_01551cc0:
        if ((long)uVar13 <= (long)uVar14) {
          uVar17 = 0xfffffffffffffffe;
          goto joined_r0x01551e88;
        }
        uVar16 = uVar14 << 1;
        do {
          puVar8 = *(ulong **)(param_3 + 0x95a0);
          puVar9 = *(ulong **)(param_3 + 0x95a8);
          *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
          if ((uVar14 == (long)(int)uVar14) && (uVar14 + 0x40000000 >> 0x1f == 0)) {
            if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar10 = puVar8;
              if (puVar9 == puVar8) {
                puVar10 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)param_3);
              }
              *(ulong **)(param_3 + 0x95a0) = puVar10 + 1;
              *puVar10 = uVar16;
            }
            else {
              puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar16);
            }
          }
          else {
            puVar10 = (ulong *)v8::internal::Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                                         (param_3);
            *(double *)(*puVar10 + 3) = (double)(long)uVar14;
          }
          v8::internal::LookupIterator::PropertyOrElement
                    ((LookupIterator *)&local_d0,param_3,puVar7,puVar10,auStack_64,3);
          uVar4 = v8::internal::JSReceiver::HasProperty((LookupIterator *)&local_d0);
          if ((uVar4 & 0xff) == 0) {
LAB_01551ddc:
            local_130 = *(ulong *)(param_3 + 0x180);
LAB_01551de0:
            iVar20 = 1;
          }
          else {
            if (0xff < uVar4) {
              puVar11 = (undefined8 *)
                        v8::internal::Object::GetProperty((LookupIterator *)&local_d0,false);
              if (puVar11 == (undefined8 *)0x0) goto LAB_01551ddc;
              local_d8 = param_2[-1];
              uVar17 = v8::internal::Object::StrictEquals((Object *)&local_d8,*puVar11);
              if ((uVar17 & 1) == 0) {
                iVar20 = 0;
                goto LAB_01551df8;
              }
              local_130 = *puVar10;
              goto LAB_01551de0;
            }
            iVar20 = 0x1c;
          }
LAB_01551df8:
          *(ulong **)(param_3 + 0x95a0) = puVar8;
          *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
          if (*(ulong **)(param_3 + 0x95a8) != puVar9) {
            *(ulong **)(param_3 + 0x95a8) = puVar9;
            v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
          }
          if ((iVar20 != 0x1c) && (uVar17 = local_130, iVar20 != 0)) break;
          uVar14 = uVar14 + 1;
          uVar16 = uVar16 + 2;
          uVar17 = 0xfffffffffffffffe;
        } while (uVar13 != uVar14);
      }
    }
    else {
      uVar17 = uVar17 & 0xffffffff00000000 | (ulong)uVar15;
      if (*(short *)(uVar13 + *(uint *)(uVar17 - 1)) == 0x42) {
        dVar21 = *(double *)(uVar17 + 3) + 4503599627370496.0;
        uVar15 = SUB84(dVar21,0);
        if ((ulong)dVar21 >> 0x20 != 0x43300000) {
          uVar15 = 0;
        }
        uVar13 = (ulong)uVar15;
joined_r0x01551ba0:
        if (uVar13 != 0) goto LAB_01551b1c;
      }
LAB_01551e54:
      uVar17 = 0xfffffffffffffffe;
    }
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar6;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
  }
LAB_01551f38:
  if ((local_120 != (byte **)0x0) && (*local_118 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_118,local_110,local_108);
  }
  if (local_100 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_100,(RuntimeCallTimer *)((ulong)&local_100 | 8));
  }
  return uVar17;
}

