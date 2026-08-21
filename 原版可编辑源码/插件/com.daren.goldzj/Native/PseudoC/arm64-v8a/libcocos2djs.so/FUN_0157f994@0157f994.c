
ulong FUN_0157f994(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  byte bVar6;
  byte *pbVar7;
  bool bVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong *puVar11;
  void *pvVar12;
  ulong *puVar13;
  uint *puVar14;
  undefined8 *puVar15;
  int *piVar16;
  ulong *puVar17;
  ulong *puVar18;
  undefined8 uVar19;
  ulong *puVar20;
  Isolate *pIVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  ulong *puVar29;
  code *pcVar30;
  ulong uVar31;
  uint uVar32;
  uint uVar33;
  int *piVar34;
  uint uVar35;
  long lVar36;
  int local_13c;
  byte **local_130;
  byte *local_128;
  char *local_120;
  undefined8 local_118;
  RuntimeCallStats *local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  long *local_d8;
  long *local_d0;
  undefined **local_a0;
  ulong *local_98;
  undefined ***local_80;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  local_f0 = 0;
  uStack_108 = 0;
  local_110 = (RuntimeCallStats *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_110 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_110,(ulong)&local_110 | 8,0x1df);
  }
  if (DAT_01d47258 == (byte *)0x0) {
    plVar9 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47258 = (byte *)(**(code **)(*plVar9 + 0x10))(plVar9,"disabled-by-default-v8.runtime");
  }
  pbVar7 = DAT_01d47258;
  local_130 = (byte **)0x0;
  if ((*DAT_01d47258 & 5) != 0) {
    local_d8 = (long *)0x0;
    local_d0 = (long *)0x0;
    plVar9 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar10 = (**(code **)(*plVar9 + 0x18))
                       (plVar9,0x58,pbVar7,"V8.Runtime_Runtime_RegExpExecMultiple",0,0,0,0,0,0,0,
                        &local_d8,0);
    plVar9 = local_d0;
    local_d0 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    plVar9 = local_d8;
    local_d8 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    local_130 = &local_128;
    local_120 = "V8.Runtime_Runtime_RegExpExecMultiple";
    local_128 = pbVar7;
    local_118 = uVar10;
  }
  uVar10 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar24 = *param_2;
  if (((uVar24 & 1) == 0) ||
     (*(short *)((uVar24 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar24 - 1)) != 0x42e)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSRegExp()");
  }
  uVar24 = param_2[-1];
  if (((uVar24 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar24 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar24 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
  puVar20 = param_2 + -2;
  uVar24 = *puVar20;
  if (((uVar24 & 1) == 0) ||
     (*(short *)((uVar24 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar24 - 1)) != 0x76)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsRegExpMatchInfo()");
  }
  puVar29 = param_2 + -3;
  uVar24 = *puVar29;
  if (((uVar24 & 1) == 0) ||
     (*(short *)((uVar24 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar24 - 1)) != 0x423)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[3].IsJSArray()");
  }
  if ((*(byte *)((uVar24 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(uVar24 - 1)) & 0xf0) != 0x10)
  {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","result_array->HasObjectElements()");
  }
  puVar11 = (ulong *)v8::internal::String::Flatten(param_3,param_2 + -1,0);
  plVar9 = (long *)*param_2;
  uVar33 = *(uint *)((long)plVar9 + 0xb);
  uVar31 = (ulong)plVar9 & 0xffffffff00000000;
  uVar24 = uVar31 | uVar33;
  if ((*(uint *)(uVar24 + 0xf) >> 1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","regexp->GetFlags() & JSRegExp::kGlobal");
  }
  if (((uVar33 & 1) != 0) && (uVar33 == *(uint *)(uVar31 + 0xa0))) goto LAB_01580cfc;
  iVar23 = *(int *)(uVar24 + 7) >> 1;
  if (iVar23 == 1) {
LAB_0157fbdc:
    if ((v8::internal::FLAG_regexp_tier_up != '\0') &&
       (((((uVar33 & 1) == 0 || (uVar33 != *(uint *)(uVar31 + 0xa0))) &&
         ((*(uint *)(uVar24 + 7) & 0xfffffffe) == 4)) &&
        (local_d8 = plVar9, v8::internal::JSRegExp::MarkTierUpForNextExec((JSRegExp *)&local_d8),
        v8::internal::FLAG_trace_regexp_tier_up != '\0')))) {
      v8::internal::PrintF
                ("Forcing tier-up of JSRegExp object %p in SearchRegExpMultiple\n",*param_2);
    }
    uVar24 = *param_2;
    uVar33 = *(uint *)(uVar24 + 0xb);
    uVar31 = uVar24 & 0xffffffff00000000;
    if (((uVar33 & 1) != 0) && (uVar33 == *(uint *)(uVar31 + 0xa0))) {
LAB_01580cfc:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    iVar23 = *(int *)((uVar31 | uVar33) + 7) >> 1;
    if (iVar23 == 1) {
      iVar23 = 0;
    }
    else {
      if (iVar23 != 2) goto LAB_01580cfc;
      iVar23 = *(int *)((uVar31 | uVar33) + 0x27) >> 1;
    }
    iVar3 = *(int *)(*puVar11 + 7);
    if (0x1000 < iVar3) {
      local_d8 = (long *)0x0;
      uVar24 = v8::internal::RegExpResultsCache::Lookup
                         (param_3 + 0x8850,*puVar11,uVar31 | *(uint *)(uVar24 + 0xb),&local_d8,0);
      if (((uVar24 & 1) != 0) &&
         (*(ushort *)((uVar24 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar24 - 1)) - 0x76 < 0xf
         )) {
        uVar33 = iVar23 * 2 + 2;
        uVar31 = -(ulong)(uVar33 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar33 << 2;
        if ((ulong)(long)(int)uVar33 >> 0x3e != 0) {
          uVar31 = 0xffffffffffffffff;
        }
        pvVar12 = operator_new__(uVar31,(nothrow_t *)&std::nothrow);
        if (pvVar12 == (void *)0x0) {
          plVar9 = (long *)v8::internal::V8::GetCurrentPlatform();
          (**(code **)(*plVar9 + 0x18))();
          pvVar12 = operator_new__(uVar31,(nothrow_t *)&std::nothrow);
          if (pvVar12 == (void *)0x0) {
LAB_01580d84:
                    /* WARNING: Subroutine does not return */
            v8::internal::FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
          }
        }
        if (0 < (int)uVar33) {
          lVar25 = 0;
          do {
            *(int *)((long)pvVar12 + lVar25) = *(int *)((long)local_d8 + (long)(int)lVar25 + 7) >> 1
            ;
            lVar25 = lVar25 + 4;
          } while ((ulong)uVar33 * 4 - lVar25 != 0);
        }
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar13 = *(ulong **)(param_3 + 0x95a0);
          if (puVar13 == *(ulong **)(param_3 + 0x95a8)) {
            puVar13 = (ulong *)v8::internal::HandleScope::Extend(param_3);
          }
          *(ulong **)(param_3 + 0x95a0) = puVar13 + 1;
          *puVar13 = uVar24;
        }
        else {
          puVar13 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar24);
        }
        puVar13 = (ulong *)v8::internal::Factory::CopyFixedArrayWithMap
                                     (param_3,puVar13,param_3 + 0xe0);
        v8::internal::JSObject::EnsureCanContainElements
                  (puVar29,puVar13,*(int *)(*puVar13 + 3) >> 1,1);
        uVar31 = *puVar29;
        uVar24 = *puVar13;
        *(int *)(uVar31 + 7) = (int)uVar24;
        if ((uVar24 & 1) != 0) {
          uVar28 = *(ulong *)((uVar24 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar28 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar31,uVar31 + 7,uVar24);
            uVar28 = *(ulong *)(uVar24 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar28 & 0x18) != 0) && ((*(byte *)((uVar31 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar31,uVar31 + 7,uVar24);
          }
        }
        *(uint *)(*puVar29 + 0xb) = *(uint *)(*puVar13 + 3) & 0xfffffffe;
        v8::internal::RegExp::SetLastMatchInfo(param_3,puVar20,puVar11,iVar23,pvVar12);
        operator_delete__(pvVar12);
        uVar24 = *puVar29;
        goto LAB_01580c30;
      }
    }
    v8::internal::RegExpGlobalCache::RegExpGlobalCache
              ((RegExpGlobalCache *)&local_d8,param_2,puVar11,param_3);
    if (-1 < (int)local_d8) {
      uVar24 = *puVar29 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar29 + 7);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar13 = *(ulong **)(param_3 + 0x95a0);
        if (puVar13 == *(ulong **)(param_3 + 0x95a8)) {
          puVar13 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar13 + 1;
        *puVar13 = uVar24;
      }
      else {
        puVar13 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar24);
        uVar24 = *puVar13;
      }
      if (*(int *)(uVar24 + 3) < 0x20) {
        puVar13 = (ulong *)v8::internal::Factory::NewFixedArrayWithHoles((Factory *)param_3,0x10,0);
      }
      v8::internal::FixedArrayBuilder::FixedArrayBuilder((FixedArrayBuilder *)&local_a0,puVar13);
      puVar14 = (uint *)v8::internal::RegExpGlobalCache::FetchNext((RegExpGlobalCache *)&local_d8);
      if (puVar14 == (uint *)0x0) {
        uVar24 = 0;
        uVar33 = 0xffffffff;
      }
      else {
        uVar33 = *puVar14;
        v8::internal::FixedArrayBuilder::EnsureCapacity((FixedArrayBuilder *)&local_a0,param_3,5);
        if (0 < (int)uVar33) {
          uVar24 = (ulong)uVar33;
          if (0x7ff < uVar33) {
            v8::internal::FixedArrayBuilder::Add
                      ((FixedArrayBuilder *)&local_a0,
                       -(ulong)(-uVar33 >> 0x1f) & 0xfffffffe00000000 | (ulong)-uVar33 << 1);
            uVar24 = 0;
          }
          v8::internal::FixedArrayBuilder::Add
                    ((FixedArrayBuilder *)&local_a0,
                     -(uVar24 >> 0x1f) & 0xfffffffe00000000 | uVar24 << 1);
        }
        uVar32 = puVar14[1];
        uVar24 = (ulong)uVar32;
        uVar19 = *(undefined8 *)(param_3 + 0x95a0);
        lVar25 = *(long *)(param_3 + 0x95a8);
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
        if ((uVar33 != 0) || (puVar13 = puVar11, *(uint *)(*puVar11 + 7) != uVar32)) {
          puVar13 = (ulong *)v8::internal::Factory::NewProperSubString
                                       ((Factory *)param_3,puVar11,uVar33,uVar24);
        }
        v8::internal::FixedArrayBuilder::Add((FixedArrayBuilder *)&local_a0,*puVar13);
        *(undefined8 *)(param_3 + 0x95a0) = uVar19;
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
        if (*(long *)(param_3 + 0x95a8) != lVar25) {
          *(long *)(param_3 + 0x95a8) = lVar25;
          v8::internal::HandleScope::DeleteExtensions(param_3);
        }
        puVar14 = (uint *)v8::internal::RegExpGlobalCache::FetchNext((RegExpGlobalCache *)&local_d8)
        ;
        while (puVar14 != (uint *)0x0) {
          uVar33 = *puVar14;
          v8::internal::FixedArrayBuilder::EnsureCapacity((FixedArrayBuilder *)&local_a0,param_3,5);
          uVar35 = (uint)uVar24;
          uVar32 = uVar33 - uVar35;
          if (uVar32 != 0 && (int)uVar35 <= (int)uVar33) {
            if ((uVar35 >> 0x13 == 0) && (uVar32 < 0x800)) {
              uVar24 = (ulong)(uVar32 | uVar35 << 0xb);
            }
            else {
              v8::internal::FixedArrayBuilder::Add
                        ((FixedArrayBuilder *)&local_a0,
                         -(ulong)(-uVar32 >> 0x1f) & 0xfffffffe00000000 | (ulong)-uVar32 << 1);
            }
            v8::internal::FixedArrayBuilder::Add
                      ((FixedArrayBuilder *)&local_a0,
                       -(uVar24 >> 0x1f) & 0xfffffffe00000000 | uVar24 << 1);
          }
          uVar24 = (ulong)puVar14[1];
          uVar19 = *(undefined8 *)(param_3 + 0x95a0);
          lVar25 = *(long *)(param_3 + 0x95a8);
          *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
          puVar15 = (undefined8 *)
                    v8::internal::Factory::NewProperSubString
                              ((Factory *)param_3,puVar11,uVar33,uVar24);
          v8::internal::FixedArrayBuilder::Add((FixedArrayBuilder *)&local_a0,*puVar15);
          *(undefined8 *)(param_3 + 0x95a0) = uVar19;
          *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
          if (*(long *)(param_3 + 0x95a8) != lVar25) {
            *(long *)(param_3 + 0x95a8) = lVar25;
            v8::internal::HandleScope::DeleteExtensions(param_3);
          }
          puVar14 = (uint *)v8::internal::RegExpGlobalCache::FetchNext
                                      ((RegExpGlobalCache *)&local_d8);
        }
      }
      if ((int)local_d8 < 0) {
        pIVar21 = param_3 + 0x180;
      }
      else if ((int)uVar33 < 0) {
        pIVar21 = param_3 + 0xb0;
      }
      else {
        uVar32 = (uint)uVar24;
        uVar33 = iVar3 - uVar32;
        if (uVar33 != 0 && (int)uVar32 <= iVar3) {
          if ((uVar32 >> 0x13 == 0) && (uVar33 < 0x800)) {
            uVar24 = (ulong)(uVar33 | uVar32 << 0xb);
          }
          else {
            v8::internal::FixedArrayBuilder::Add
                      ((FixedArrayBuilder *)&local_a0,
                       -(ulong)(-uVar33 >> 0x1f) & 0xfffffffe00000000 | (ulong)-uVar33 << 1);
          }
          v8::internal::FixedArrayBuilder::Add
                    ((FixedArrayBuilder *)&local_a0,
                     -(uVar24 >> 0x1f) & 0xfffffffe00000000 | uVar24 << 1);
        }
        uVar19 = v8::internal::RegExpGlobalCache::LastSuccessfulMatch
                           ((RegExpGlobalCache *)&local_d8);
        v8::internal::RegExp::SetLastMatchInfo(param_3,puVar20,puVar11,iVar23,uVar19);
        if (0x1000 < iVar3) {
          uVar33 = iVar23 * 2 + 2;
          plVar9 = (long *)v8::internal::Factory::NewFixedArray((Factory *)param_3,uVar33,0);
          lVar25 = v8::internal::RegExpGlobalCache::LastSuccessfulMatch
                             ((RegExpGlobalCache *)&local_d8);
          if (0 < (int)uVar33) {
            lVar27 = 0;
            do {
              piVar16 = (int *)(lVar25 + lVar27);
              iVar23 = (int)lVar27;
              lVar27 = lVar27 + 4;
              *(int *)(*plVar9 + (long)iVar23 + 7) = *piVar16 << 1;
            } while ((ulong)uVar33 * 4 - lVar27 != 0);
          }
          uVar19 = v8::internal::FixedArray::ShrinkOrEmpty
                             (param_3,local_a0,(ulong)local_98 & 0xffffffff);
          uVar19 = v8::internal::Factory::CopyFixedArrayWithMap(param_3,uVar19,param_3 + 0xe0);
          uVar24 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
          if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar20 = *(ulong **)(param_3 + 0x95a0);
            if (puVar20 == *(ulong **)(param_3 + 0x95a8)) {
              puVar20 = (ulong *)v8::internal::HandleScope::Extend(param_3);
            }
            *(ulong **)(param_3 + 0x95a0) = puVar20 + 1;
            *puVar20 = uVar24;
          }
          else {
            puVar20 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar24);
          }
          v8::internal::RegExpResultsCache::Enter(param_3,puVar11,puVar20,uVar19,plVar9,0);
        }
        pIVar21 = (Isolate *)
                  v8::internal::FixedArrayBuilder::ToJSArray((FixedArrayBuilder *)&local_a0,puVar29)
        ;
      }
      goto LAB_01580c24;
    }
LAB_0158022c:
    uVar24 = *(ulong *)(param_3 + 0x180);
  }
  else {
    if (iVar23 != 2) goto LAB_01580cfc;
    if (*(uint *)(uVar24 + 0x27) < 2) goto LAB_0157fbdc;
    if (((v8::internal::FLAG_regexp_tier_up != '\0') &&
        ((((uVar33 & 1) == 0 || (uVar33 != *(uint *)(uVar31 + 0xa0))) &&
         ((*(uint *)(uVar24 + 7) & 0xfffffffe) == 4)))) &&
       (local_d8 = plVar9, v8::internal::JSRegExp::MarkTierUpForNextExec((JSRegExp *)&local_d8),
       v8::internal::FLAG_trace_regexp_tier_up != '\0')) {
      v8::internal::PrintF
                ("Forcing tier-up of JSRegExp object %p in SearchRegExpMultiple\n",*param_2);
    }
    uVar24 = *param_2;
    uVar33 = *(uint *)(uVar24 + 0xb);
    uVar31 = uVar24 & 0xffffffff00000000;
    if (((uVar33 & 1) != 0) && (uVar33 == *(uint *)(uVar31 + 0xa0))) goto LAB_01580cfc;
    iVar23 = *(int *)((uVar31 | uVar33) + 7) >> 1;
    if (iVar23 == 1) {
      iVar23 = 0;
    }
    else {
      if (iVar23 != 2) goto LAB_01580cfc;
      iVar23 = *(int *)((uVar31 | uVar33) + 0x27) >> 1;
    }
    iVar3 = *(int *)(*puVar11 + 7);
    if (0x1000 < iVar3) {
      local_d8 = (long *)0x0;
      uVar24 = v8::internal::RegExpResultsCache::Lookup
                         (param_3 + 0x8850,*puVar11,uVar31 | *(uint *)(uVar24 + 0xb),&local_d8,0);
      if (((uVar24 & 1) != 0) &&
         (*(ushort *)((uVar24 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar24 - 1)) - 0x76 < 0xf
         )) {
        uVar33 = iVar23 * 2 + 2;
        uVar31 = -(ulong)(uVar33 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar33 << 2;
        if ((ulong)(long)(int)uVar33 >> 0x3e != 0) {
          uVar31 = 0xffffffffffffffff;
        }
        pvVar12 = operator_new__(uVar31,(nothrow_t *)&std::nothrow);
        if (pvVar12 == (void *)0x0) {
          plVar9 = (long *)v8::internal::V8::GetCurrentPlatform();
          (**(code **)(*plVar9 + 0x18))();
          pvVar12 = operator_new__(uVar31,(nothrow_t *)&std::nothrow);
          if (pvVar12 == (void *)0x0) goto LAB_01580d84;
        }
        if (0 < (int)uVar33) {
          lVar25 = 0;
          do {
            *(int *)((long)pvVar12 + lVar25) = *(int *)((long)local_d8 + (long)(int)lVar25 + 7) >> 1
            ;
            lVar25 = lVar25 + 4;
          } while ((ulong)uVar33 * 4 - lVar25 != 0);
        }
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar13 = *(ulong **)(param_3 + 0x95a0);
          if (puVar13 == *(ulong **)(param_3 + 0x95a8)) {
            puVar13 = (ulong *)v8::internal::HandleScope::Extend(param_3);
          }
          *(ulong **)(param_3 + 0x95a0) = puVar13 + 1;
          *puVar13 = uVar24;
        }
        else {
          puVar13 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar24);
        }
        puVar13 = (ulong *)v8::internal::Factory::CopyFixedArrayWithMap
                                     (param_3,puVar13,param_3 + 0xe0);
        v8::internal::JSObject::EnsureCanContainElements
                  (puVar29,puVar13,*(int *)(*puVar13 + 3) >> 1,1);
        uVar31 = *puVar29;
        uVar24 = *puVar13;
        *(int *)(uVar31 + 7) = (int)uVar24;
        if ((uVar24 & 1) != 0) {
          uVar28 = *(ulong *)((uVar24 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar28 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar31,uVar31 + 7,uVar24);
            uVar28 = *(ulong *)(uVar24 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar28 & 0x18) != 0) && ((*(byte *)((uVar31 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar31,uVar31 + 7,uVar24);
          }
        }
        *(uint *)(*puVar29 + 0xb) = *(uint *)(*puVar13 + 3) & 0xfffffffe;
        v8::internal::RegExp::SetLastMatchInfo(param_3,puVar20,puVar11,iVar23,pvVar12);
        operator_delete__(pvVar12);
        uVar24 = *puVar29;
        goto LAB_01580c30;
      }
    }
    v8::internal::RegExpGlobalCache::RegExpGlobalCache
              ((RegExpGlobalCache *)&local_d8,param_2,puVar11,param_3);
    if ((int)local_d8 < 0) goto LAB_0158022c;
    uVar24 = *puVar29 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar29 + 7);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar13 = *(ulong **)(param_3 + 0x95a0);
      if (puVar13 == *(ulong **)(param_3 + 0x95a8)) {
        puVar13 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar13 + 1;
      *puVar13 = uVar24;
    }
    else {
      puVar13 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar24);
      uVar24 = *puVar13;
    }
    if (*(int *)(uVar24 + 3) < 0x20) {
      puVar13 = (ulong *)v8::internal::Factory::NewFixedArrayWithHoles((Factory *)param_3,0x10,0);
    }
    v8::internal::FixedArrayBuilder::FixedArrayBuilder((FixedArrayBuilder *)&local_e8,puVar13);
    piVar16 = (int *)v8::internal::RegExpGlobalCache::FetchNext((RegExpGlobalCache *)&local_d8);
    if (piVar16 == (int *)0x0) {
      uVar24 = 0;
      local_13c = -1;
    }
    else {
      uVar24 = 0;
      bVar6 = 1;
      lVar25 = (ulong)(iVar23 + 1U) - 1;
      do {
        local_13c = *piVar16;
        v8::internal::FixedArrayBuilder::EnsureCapacity((FixedArrayBuilder *)&local_e8,param_3,5);
        uVar32 = (uint)uVar24;
        uVar33 = local_13c - uVar32;
        if (uVar33 != 0 && (int)uVar32 <= local_13c) {
          if ((uVar32 >> 0x13 == 0) && (uVar33 < 0x800)) {
            uVar24 = (ulong)(uVar33 | uVar32 << 0xb);
          }
          else {
            v8::internal::FixedArrayBuilder::Add
                      ((FixedArrayBuilder *)&local_e8,
                       -(ulong)(-uVar33 >> 0x1f) & 0xfffffffe00000000 | (ulong)-uVar33 << 1);
          }
          v8::internal::FixedArrayBuilder::Add
                    ((FixedArrayBuilder *)&local_e8,
                     -(uVar24 >> 0x1f) & 0xfffffffe00000000 | uVar24 << 1);
        }
        uVar33 = piVar16[1];
        uVar24 = (ulong)uVar33;
        uVar19 = *(undefined8 *)(param_3 + 0x95a0);
        lVar27 = *(long *)(param_3 + 0x95a8);
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
        if (((bool)(local_13c != 0 | bVar6 ^ 1)) ||
           (puVar13 = puVar11, *(uint *)(*puVar11 + 7) != uVar33)) {
          puVar13 = (ulong *)v8::internal::Factory::NewProperSubString
                                       ((Factory *)param_3,puVar11,local_13c,uVar24);
        }
        uVar31 = *param_2 & 0xffffffff00000000;
        uVar31 = uVar31 | *(uint *)((uVar31 | *(uint *)(*param_2 + 0xb)) + 0x2b);
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar17 = *(ulong **)(param_3 + 0x95a0);
          if (puVar17 == *(ulong **)(param_3 + 0x95a8)) {
            puVar17 = (ulong *)v8::internal::HandleScope::Extend(param_3);
          }
          *(ulong **)(param_3 + 0x95a0) = puVar17 + 1;
          *puVar17 = uVar31;
        }
        else {
          puVar17 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar31);
          uVar31 = *puVar17;
        }
        if ((uVar31 & 1) == 0) {
          bVar8 = false;
          iVar22 = 3;
        }
        else {
          bVar8 = *(ushort *)((uVar31 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar31 - 1)) -
                  0x76 < 0xf;
          iVar22 = 3;
          if (bVar8) {
            iVar22 = 4;
          }
        }
        puVar18 = (ulong *)v8::internal::Factory::NewFixedArray
                                     ((Factory *)param_3,iVar22 + iVar23,0);
        uVar28 = *puVar18;
        uVar31 = *puVar13;
        *(int *)(uVar28 + 7) = (int)uVar31;
        if ((uVar31 & 1) != 0) {
          uVar26 = *(ulong *)((uVar31 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar26 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar28,uVar28 + 7,uVar31);
            uVar26 = *(ulong *)(uVar31 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar26 & 0x18) != 0) && ((*(byte *)((uVar28 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar28,uVar28 + 7,uVar31);
          }
        }
        if (0 < iVar23) {
          piVar34 = piVar16 + 3;
          iVar22 = 4;
          iVar4 = piVar16[2];
          lVar36 = lVar25;
          if (-1 < iVar4) goto LAB_015804a4;
LAB_01580514:
          uVar31 = *puVar18;
          uVar28 = *(ulong *)(param_3 + 0xa0);
          *(int *)(uVar31 + (long)iVar22 + 7) = (int)uVar28;
          piVar16 = piVar34;
          if ((uVar28 & 1) == 0) goto LAB_0158048c;
          uVar26 = *(ulong *)((uVar28 & 0xfffffffffffc0000) + 8);
          lVar1 = uVar31 + (long)iVar22 + 7;
          if (((uint)uVar26 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar31,lVar1,uVar28);
            uVar26 = *(ulong *)(uVar28 & 0xfffffffffffc0000 | 8);
          }
          do {
            piVar16 = piVar34;
            if (((uVar26 & 0x18) != 0) &&
               ((*(byte *)((uVar31 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar31,lVar1,uVar28);
            }
LAB_0158048c:
            do {
              iVar22 = iVar22 + 4;
              lVar36 = lVar36 + -1;
              piVar34 = piVar16 + 2;
              uVar33 = iVar23 + 1U;
              if (lVar36 == 0) goto LAB_015805a8;
              iVar4 = piVar16[1];
              if (iVar4 < 0) goto LAB_01580514;
LAB_015804a4:
              if ((iVar4 != 0) || (uVar28 = *puVar11, *(int *)(uVar28 + 7) != *piVar34)) {
                puVar13 = (ulong *)v8::internal::Factory::NewProperSubString
                                             ((Factory *)param_3,puVar11);
                uVar28 = *puVar13;
              }
              uVar31 = *puVar18;
              *(int *)(uVar31 + (long)iVar22 + 7) = (int)uVar28;
              piVar16 = piVar34;
            } while ((uVar28 & 1) == 0);
            uVar26 = *(ulong *)((uVar28 & 0xfffffffffffc0000) + 8);
            lVar1 = uVar31 + (long)iVar22 + 7;
            if (((uint)uVar26 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar31,lVar1,uVar28);
              uVar26 = *(ulong *)(uVar28 & 0xfffffffffffc0000 | 8);
            }
          } while( true );
        }
        uVar33 = 1;
LAB_015805a8:
        iVar22 = uVar33 * 4;
        *(int *)(*puVar18 + (long)iVar22 + 7) = local_13c << 1;
        uVar28 = *puVar18;
        uVar31 = *puVar11;
        lVar36 = uVar28 + (long)(iVar22 + 4);
        *(int *)(lVar36 + 7) = (int)uVar31;
        if ((uVar31 & 1) != 0) {
          uVar26 = *(ulong *)((uVar31 & 0xfffffffffffc0000) + 8);
          lVar36 = lVar36 + 7;
          if (((uint)uVar26 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar28,lVar36,uVar31);
            uVar26 = *(ulong *)(uVar31 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar26 & 0x18) != 0) && ((*(byte *)((uVar28 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar28,lVar36,uVar31);
          }
        }
        if (bVar8) {
          local_a0 = &PTR_FUN_01cc9180;
          local_98 = puVar18;
          local_80 = &local_a0;
          puVar13 = (ulong *)FUN_015870e0(param_3,puVar17,&local_a0);
          if (&local_a0 == local_80) {
            pcVar30 = (code *)(*local_80)[4];
LAB_01580674:
            (*pcVar30)(local_80);
          }
          else if (local_80 != (undefined ***)0x0) {
            pcVar30 = (code *)(*local_80)[5];
            goto LAB_01580674;
          }
          uVar28 = *puVar18;
          uVar31 = *puVar13;
          lVar36 = uVar28 + (long)(iVar22 + 8);
          *(int *)(lVar36 + 7) = (int)uVar31;
          if ((uVar31 & 1) != 0) {
            uVar26 = *(ulong *)((uVar31 & 0xfffffffffffc0000) + 8);
            lVar36 = lVar36 + 7;
            if (((uint)uVar26 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar28,lVar36,uVar31);
              uVar26 = *(ulong *)(uVar31 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar26 & 0x18) != 0) &&
               ((*(byte *)((uVar28 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar28,lVar36,uVar31);
            }
          }
        }
        puVar15 = (undefined8 *)
                  v8::internal::Factory::NewJSArrayWithElements
                            (param_3,puVar18,3,*(int *)(*puVar18 + 3) >> 1,0);
        v8::internal::FixedArrayBuilder::Add((FixedArrayBuilder *)&local_e8,*puVar15);
        *(undefined8 *)(param_3 + 0x95a0) = uVar19;
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
        if (*(long *)(param_3 + 0x95a8) != lVar27) {
          *(long *)(param_3 + 0x95a8) = lVar27;
          v8::internal::HandleScope::DeleteExtensions(param_3);
        }
        piVar16 = (int *)v8::internal::RegExpGlobalCache::FetchNext((RegExpGlobalCache *)&local_d8);
        bVar6 = 0;
      } while (piVar16 != (int *)0x0);
    }
    if ((int)local_d8 < 0) {
      pIVar21 = param_3 + 0x180;
    }
    else if (local_13c < 0) {
      pIVar21 = param_3 + 0xb0;
    }
    else {
      uVar32 = (uint)uVar24;
      uVar33 = iVar3 - uVar32;
      if (uVar33 != 0 && (int)uVar32 <= iVar3) {
        if ((uVar32 >> 0x13 == 0) && (uVar33 < 0x800)) {
          uVar24 = (ulong)(uVar33 | uVar32 << 0xb);
        }
        else {
          v8::internal::FixedArrayBuilder::Add
                    ((FixedArrayBuilder *)&local_e8,
                     -(ulong)(-uVar33 >> 0x1f) & 0xfffffffe00000000 | (ulong)-uVar33 << 1);
        }
        v8::internal::FixedArrayBuilder::Add
                  ((FixedArrayBuilder *)&local_e8,
                   -(uVar24 >> 0x1f) & 0xfffffffe00000000 | uVar24 << 1);
      }
      uVar19 = v8::internal::RegExpGlobalCache::LastSuccessfulMatch((RegExpGlobalCache *)&local_d8);
      v8::internal::RegExp::SetLastMatchInfo(param_3,puVar20,puVar11,iVar23,uVar19);
      if (0x1000 < iVar3) {
        uVar33 = iVar23 * 2 + 2;
        plVar9 = (long *)v8::internal::Factory::NewFixedArray((Factory *)param_3,uVar33,0);
        lVar25 = v8::internal::RegExpGlobalCache::LastSuccessfulMatch
                           ((RegExpGlobalCache *)&local_d8);
        if (0 < (int)uVar33) {
          lVar27 = 0;
          do {
            piVar16 = (int *)(lVar25 + lVar27);
            iVar23 = (int)lVar27;
            lVar27 = lVar27 + 4;
            *(int *)(*plVar9 + (long)iVar23 + 7) = *piVar16 << 1;
          } while ((ulong)uVar33 * 4 - lVar27 != 0);
        }
        uVar19 = v8::internal::FixedArray::ShrinkOrEmpty(param_3,local_e8,local_e0);
        uVar19 = v8::internal::Factory::CopyFixedArrayWithMap(param_3,uVar19,param_3 + 0xe0);
        uVar24 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar20 = *(ulong **)(param_3 + 0x95a0);
          if (puVar20 == *(ulong **)(param_3 + 0x95a8)) {
            puVar20 = (ulong *)v8::internal::HandleScope::Extend(param_3);
          }
          *(ulong **)(param_3 + 0x95a0) = puVar20 + 1;
          *puVar20 = uVar24;
        }
        else {
          puVar20 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar24);
        }
        v8::internal::RegExpResultsCache::Enter(param_3,puVar11,puVar20,uVar19,plVar9,0);
      }
      pIVar21 = (Isolate *)
                v8::internal::FixedArrayBuilder::ToJSArray((FixedArrayBuilder *)&local_e8,puVar29);
    }
LAB_01580c24:
    uVar24 = *(ulong *)pIVar21;
  }
  v8::internal::RegExpGlobalCache::~RegExpGlobalCache((RegExpGlobalCache *)&local_d8);
LAB_01580c30:
  *(undefined8 *)(param_3 + 0x95a0) = uVar10;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_130 != (byte **)0x0) && (*local_128 != 0)) {
    plVar9 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar9 + 0x28))(plVar9,local_128,local_120,local_118);
  }
  if (local_110 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_110,(RuntimeCallTimer *)((ulong)&local_110 | 8));
  }
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar24;
}

