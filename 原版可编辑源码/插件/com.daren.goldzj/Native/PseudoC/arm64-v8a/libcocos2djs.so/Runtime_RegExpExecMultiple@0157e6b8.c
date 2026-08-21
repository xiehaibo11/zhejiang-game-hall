
/* v8::internal::Runtime_RegExpExecMultiple(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_RegExpExecMultiple(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  Isolate *pIVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  byte bVar8;
  bool bVar9;
  ulong *puVar10;
  void *pvVar11;
  long *plVar12;
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
  ulong *puVar28;
  ulong uVar29;
  long lVar30;
  code *pcVar31;
  ulong uVar32;
  uint uVar33;
  uint uVar34;
  int *piVar35;
  uint uVar36;
  long lVar37;
  int local_f4;
  undefined8 local_e8;
  undefined4 local_e0;
  ulong local_d8 [7];
  undefined **local_a0;
  ulong *local_98;
  undefined ***local_80;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  if (TracingFlags::runtime_stats != 0) {
    uVar24 = FUN_0157f994(param_1,param_2,param_3);
    if (*(long *)(lVar7 + 0x28) == local_70) {
      return uVar24;
    }
    goto LAB_0157f900;
  }
  pIVar2 = param_3 + 0x95a0;
  lVar3 = *(long *)pIVar2;
  lVar4 = *(long *)(param_3 + 0x95a8);
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
  puVar28 = param_2 + -3;
  uVar24 = *puVar28;
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
  puVar10 = (ulong *)String::Flatten(param_3,param_2 + -1,0);
  uVar24 = *param_2;
  uVar34 = *(uint *)(uVar24 + 0xb);
  uVar32 = uVar24 & 0xffffffff00000000;
  uVar29 = uVar32 | uVar34;
  if ((*(uint *)(uVar29 + 0xf) >> 1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","regexp->GetFlags() & JSRegExp::kGlobal");
  }
  if (((uVar34 & 1) != 0) && (uVar34 == *(uint *)(uVar32 + 0xa0))) goto LAB_0157f904;
  iVar23 = *(int *)(uVar29 + 7) >> 1;
  if (iVar23 == 1) {
LAB_0157e828:
    if ((FLAG_regexp_tier_up != '\0') &&
       (((((uVar34 & 1) == 0 || (uVar34 != *(uint *)(uVar32 + 0xa0))) &&
         ((*(uint *)(uVar29 + 7) & 0xfffffffe) == 4)) &&
        (local_d8[0] = uVar24, JSRegExp::MarkTierUpForNextExec((JSRegExp *)local_d8),
        FLAG_trace_regexp_tier_up != '\0')))) {
      PrintF("Forcing tier-up of JSRegExp object %p in SearchRegExpMultiple\n",*param_2);
    }
    uVar24 = *param_2;
    uVar34 = *(uint *)(uVar24 + 0xb);
    uVar29 = uVar24 & 0xffffffff00000000;
    if (((uVar34 & 1) != 0) && (uVar34 == *(uint *)(uVar29 + 0xa0))) {
LAB_0157f904:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    iVar23 = *(int *)((uVar29 | uVar34) + 7) >> 1;
    if (iVar23 == 1) {
      iVar23 = 0;
    }
    else {
      if (iVar23 != 2) goto LAB_0157f904;
      iVar23 = *(int *)((uVar29 | uVar34) + 0x27) >> 1;
    }
    iVar5 = *(int *)(*puVar10 + 7);
    if (iVar5 < 0x1001) {
LAB_0157e9d4:
      RegExpGlobalCache::RegExpGlobalCache((RegExpGlobalCache *)local_d8,param_2,puVar10,param_3);
      if ((int)local_d8[0] < 0) goto LAB_0157ee78;
      uVar24 = *puVar28 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar28 + 7);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar13 = *(ulong **)pIVar2;
        if (puVar13 == *(ulong **)(param_3 + 0x95a8)) {
          puVar13 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar2 = puVar13 + 1;
        *puVar13 = uVar24;
      }
      else {
        puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar24);
        uVar24 = *puVar13;
      }
      if (*(int *)(uVar24 + 3) < 0x20) {
        puVar13 = (ulong *)Factory::NewFixedArrayWithHoles((Factory *)param_3,0x10,0);
      }
      FixedArrayBuilder::FixedArrayBuilder((FixedArrayBuilder *)&local_a0,puVar13);
      puVar14 = (uint *)RegExpGlobalCache::FetchNext((RegExpGlobalCache *)local_d8);
      if (puVar14 == (uint *)0x0) {
        uVar24 = 0;
        uVar34 = 0xffffffff;
      }
      else {
        uVar34 = *puVar14;
        FixedArrayBuilder::EnsureCapacity((FixedArrayBuilder *)&local_a0,param_3,5);
        if (0 < (int)uVar34) {
          uVar24 = (ulong)uVar34;
          if (0x7ff < uVar34) {
            FixedArrayBuilder::Add
                      ((FixedArrayBuilder *)&local_a0,
                       -(ulong)(-uVar34 >> 0x1f) & 0xfffffffe00000000 | (ulong)-uVar34 << 1);
            uVar24 = 0;
          }
          FixedArrayBuilder::Add
                    ((FixedArrayBuilder *)&local_a0,
                     -(uVar24 >> 0x1f) & 0xfffffffe00000000 | uVar24 << 1);
        }
        uVar33 = puVar14[1];
        uVar24 = (ulong)uVar33;
        lVar25 = *(long *)pIVar2;
        lVar27 = *(long *)(param_3 + 0x95a8);
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
        if ((uVar34 != 0) || (puVar13 = puVar10, *(uint *)(*puVar10 + 7) != uVar33)) {
          puVar13 = (ulong *)Factory::NewProperSubString((Factory *)param_3,puVar10,uVar34,uVar24);
        }
        FixedArrayBuilder::Add((FixedArrayBuilder *)&local_a0,*puVar13);
        *(long *)pIVar2 = lVar25;
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
        if (*(long *)(param_3 + 0x95a8) != lVar27) {
          *(long *)(param_3 + 0x95a8) = lVar27;
          HandleScope::DeleteExtensions(param_3);
        }
        puVar14 = (uint *)RegExpGlobalCache::FetchNext((RegExpGlobalCache *)local_d8);
        while (puVar14 != (uint *)0x0) {
          uVar34 = *puVar14;
          FixedArrayBuilder::EnsureCapacity((FixedArrayBuilder *)&local_a0,param_3,5);
          uVar36 = (uint)uVar24;
          uVar33 = uVar34 - uVar36;
          if (uVar33 != 0 && (int)uVar36 <= (int)uVar34) {
            if ((uVar36 >> 0x13 == 0) && (uVar33 < 0x800)) {
              uVar24 = (ulong)(uVar33 | uVar36 << 0xb);
            }
            else {
              FixedArrayBuilder::Add
                        ((FixedArrayBuilder *)&local_a0,
                         -(ulong)(-uVar33 >> 0x1f) & 0xfffffffe00000000 | (ulong)-uVar33 << 1);
            }
            FixedArrayBuilder::Add
                      ((FixedArrayBuilder *)&local_a0,
                       -(uVar24 >> 0x1f) & 0xfffffffe00000000 | uVar24 << 1);
          }
          uVar24 = (ulong)puVar14[1];
          lVar25 = *(long *)pIVar2;
          lVar27 = *(long *)(param_3 + 0x95a8);
          *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
          puVar15 = (undefined8 *)
                    Factory::NewProperSubString((Factory *)param_3,puVar10,uVar34,uVar24);
          FixedArrayBuilder::Add((FixedArrayBuilder *)&local_a0,*puVar15);
          *(long *)pIVar2 = lVar25;
          *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
          if (*(long *)(param_3 + 0x95a8) != lVar27) {
            *(long *)(param_3 + 0x95a8) = lVar27;
            HandleScope::DeleteExtensions(param_3);
          }
          puVar14 = (uint *)RegExpGlobalCache::FetchNext((RegExpGlobalCache *)local_d8);
        }
      }
      if ((int)local_d8[0] < 0) {
        pIVar21 = param_3 + 0x180;
      }
      else if ((int)uVar34 < 0) {
        pIVar21 = param_3 + 0xb0;
      }
      else {
        uVar33 = (uint)uVar24;
        uVar34 = iVar5 - uVar33;
        if (uVar34 != 0 && (int)uVar33 <= iVar5) {
          if ((uVar33 >> 0x13 == 0) && (uVar34 < 0x800)) {
            uVar24 = (ulong)(uVar34 | uVar33 << 0xb);
          }
          else {
            FixedArrayBuilder::Add
                      ((FixedArrayBuilder *)&local_a0,
                       -(ulong)(-uVar34 >> 0x1f) & 0xfffffffe00000000 | (ulong)-uVar34 << 1);
          }
          FixedArrayBuilder::Add
                    ((FixedArrayBuilder *)&local_a0,
                     -(uVar24 >> 0x1f) & 0xfffffffe00000000 | uVar24 << 1);
        }
        uVar19 = RegExpGlobalCache::LastSuccessfulMatch((RegExpGlobalCache *)local_d8);
        RegExp::SetLastMatchInfo(param_3,puVar20,puVar10,iVar23,uVar19);
        if (0x1000 < iVar5) {
          uVar34 = iVar23 * 2 + 2;
          plVar12 = (long *)Factory::NewFixedArray((Factory *)param_3,uVar34,0);
          lVar25 = RegExpGlobalCache::LastSuccessfulMatch((RegExpGlobalCache *)local_d8);
          if (0 < (int)uVar34) {
            lVar27 = 0;
            do {
              piVar16 = (int *)(lVar25 + lVar27);
              iVar23 = (int)lVar27;
              lVar27 = lVar27 + 4;
              *(int *)(*plVar12 + (long)iVar23 + 7) = *piVar16 << 1;
            } while ((ulong)uVar34 * 4 - lVar27 != 0);
          }
          uVar19 = FixedArray::ShrinkOrEmpty(param_3,local_a0,(ulong)local_98 & 0xffffffff);
          uVar19 = Factory::CopyFixedArrayWithMap(param_3,uVar19,param_3 + 0xe0);
          uVar24 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
          if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar20 = *(ulong **)pIVar2;
            if (puVar20 == *(ulong **)(param_3 + 0x95a8)) {
              puVar20 = (ulong *)HandleScope::Extend(param_3);
            }
            *(ulong **)pIVar2 = puVar20 + 1;
            *puVar20 = uVar24;
          }
          else {
            puVar20 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar24);
          }
          RegExpResultsCache::Enter(param_3,puVar10,puVar20,uVar19,plVar12,0);
        }
        pIVar21 = (Isolate *)FixedArrayBuilder::ToJSArray((FixedArrayBuilder *)&local_a0,puVar28);
      }
      goto LAB_0157f878;
    }
    local_d8[0] = 0;
    uVar24 = RegExpResultsCache::Lookup
                       (param_3 + 0x8850,*puVar10,uVar29 | *(uint *)(uVar24 + 0xb),local_d8,0);
    if (((uVar24 & 1) == 0) ||
       (0xe < *(ushort *)((uVar24 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar24 - 1)) - 0x76))
    goto LAB_0157e9d4;
    uVar34 = iVar23 * 2 + 2;
    uVar29 = -(ulong)(uVar34 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar34 << 2;
    if ((ulong)(long)(int)uVar34 >> 0x3e != 0) {
      uVar29 = 0xffffffffffffffff;
    }
    pvVar11 = operator_new__(uVar29,(nothrow_t *)&std::nothrow);
    if (pvVar11 == (void *)0x0) {
      plVar12 = (long *)V8::GetCurrentPlatform();
      (**(code **)(*plVar12 + 0x18))();
      pvVar11 = operator_new__(uVar29,(nothrow_t *)&std::nothrow);
      if (pvVar11 == (void *)0x0) {
LAB_0157f988:
                    /* WARNING: Subroutine does not return */
        FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
      }
    }
    if (0 < (int)uVar34) {
      lVar25 = 0;
      do {
        *(int *)((long)pvVar11 + lVar25) = *(int *)(local_d8[0] + 7 + (long)(int)lVar25) >> 1;
        lVar25 = lVar25 + 4;
      } while ((ulong)uVar34 * 4 - lVar25 != 0);
    }
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar13 = *(ulong **)pIVar2;
      if (puVar13 == *(ulong **)(param_3 + 0x95a8)) {
        puVar13 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar2 = puVar13 + 1;
      *puVar13 = uVar24;
    }
    else {
      puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar24);
    }
    puVar13 = (ulong *)Factory::CopyFixedArrayWithMap(param_3,puVar13,param_3 + 0xe0);
    JSObject::EnsureCanContainElements(puVar28,puVar13,*(int *)(*puVar13 + 3) >> 1,1);
    uVar29 = *puVar28;
    uVar24 = *puVar13;
    *(int *)(uVar29 + 7) = (int)uVar24;
    if ((uVar24 & 1) != 0) {
      uVar32 = *(ulong *)((uVar24 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar32 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar29,uVar29 + 7,uVar24);
        uVar32 = *(ulong *)(uVar24 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar32 & 0x18) != 0) && ((*(byte *)((uVar29 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar29,uVar29 + 7,uVar24);
      }
    }
    *(uint *)(*puVar28 + 0xb) = *(uint *)(*puVar13 + 3) & 0xfffffffe;
    RegExp::SetLastMatchInfo(param_3,puVar20,puVar10,iVar23,pvVar11);
    operator_delete__(pvVar11);
    uVar24 = *puVar28;
  }
  else {
    if (iVar23 != 2) goto LAB_0157f904;
    if (*(uint *)(uVar29 + 0x27) < 2) goto LAB_0157e828;
    if (((FLAG_regexp_tier_up != '\0') &&
        ((((uVar34 & 1) == 0 || (uVar34 != *(uint *)(uVar32 + 0xa0))) &&
         ((*(uint *)(uVar29 + 7) & 0xfffffffe) == 4)))) &&
       (local_d8[0] = uVar24, JSRegExp::MarkTierUpForNextExec((JSRegExp *)local_d8),
       FLAG_trace_regexp_tier_up != '\0')) {
      PrintF("Forcing tier-up of JSRegExp object %p in SearchRegExpMultiple\n",*param_2);
    }
    uVar24 = *param_2;
    uVar34 = *(uint *)(uVar24 + 0xb);
    uVar29 = uVar24 & 0xffffffff00000000;
    if (((uVar34 & 1) != 0) && (uVar34 == *(uint *)(uVar29 + 0xa0))) goto LAB_0157f904;
    iVar23 = *(int *)((uVar29 | uVar34) + 7) >> 1;
    if (iVar23 == 1) {
      iVar23 = 0;
    }
    else {
      if (iVar23 != 2) goto LAB_0157f904;
      iVar23 = *(int *)((uVar29 | uVar34) + 0x27) >> 1;
    }
    iVar5 = *(int *)(*puVar10 + 7);
    if (0x1000 < iVar5) {
      local_d8[0] = 0;
      uVar24 = RegExpResultsCache::Lookup
                         (param_3 + 0x8850,*puVar10,uVar29 | *(uint *)(uVar24 + 0xb),local_d8,0);
      if (((uVar24 & 1) != 0) &&
         (*(ushort *)((uVar24 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar24 - 1)) - 0x76 < 0xf
         )) {
        uVar34 = iVar23 * 2 + 2;
        uVar29 = -(ulong)(uVar34 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar34 << 2;
        if ((ulong)(long)(int)uVar34 >> 0x3e != 0) {
          uVar29 = 0xffffffffffffffff;
        }
        pvVar11 = operator_new__(uVar29,(nothrow_t *)&std::nothrow);
        if (pvVar11 == (void *)0x0) {
          plVar12 = (long *)V8::GetCurrentPlatform();
          (**(code **)(*plVar12 + 0x18))();
          pvVar11 = operator_new__(uVar29,(nothrow_t *)&std::nothrow);
          if (pvVar11 == (void *)0x0) goto LAB_0157f988;
        }
        if (0 < (int)uVar34) {
          lVar25 = 0;
          do {
            *(int *)((long)pvVar11 + lVar25) = *(int *)(local_d8[0] + 7 + (long)(int)lVar25) >> 1;
            lVar25 = lVar25 + 4;
          } while ((ulong)uVar34 * 4 - lVar25 != 0);
        }
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar13 = *(ulong **)pIVar2;
          if (puVar13 == *(ulong **)(param_3 + 0x95a8)) {
            puVar13 = (ulong *)HandleScope::Extend(param_3);
          }
          *(ulong **)pIVar2 = puVar13 + 1;
          *puVar13 = uVar24;
        }
        else {
          puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar24);
        }
        puVar13 = (ulong *)Factory::CopyFixedArrayWithMap(param_3,puVar13,param_3 + 0xe0);
        JSObject::EnsureCanContainElements(puVar28,puVar13,*(int *)(*puVar13 + 3) >> 1,1);
        uVar29 = *puVar28;
        uVar24 = *puVar13;
        *(int *)(uVar29 + 7) = (int)uVar24;
        if ((uVar24 & 1) != 0) {
          uVar32 = *(ulong *)((uVar24 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar32 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar29,uVar29 + 7,uVar24);
            uVar32 = *(ulong *)(uVar24 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar32 & 0x18) != 0) && ((*(byte *)((uVar29 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar29,uVar29 + 7,uVar24);
          }
        }
        *(uint *)(*puVar28 + 0xb) = *(uint *)(*puVar13 + 3) & 0xfffffffe;
        RegExp::SetLastMatchInfo(param_3,puVar20,puVar10,iVar23,pvVar11);
        operator_delete__(pvVar11);
        uVar24 = *puVar28;
        goto LAB_0157f884;
      }
    }
    RegExpGlobalCache::RegExpGlobalCache((RegExpGlobalCache *)local_d8,param_2,puVar10,param_3);
    if ((int)local_d8[0] < 0) {
LAB_0157ee78:
      uVar24 = *(ulong *)(param_3 + 0x180);
    }
    else {
      uVar24 = *puVar28 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar28 + 7);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar13 = *(ulong **)pIVar2;
        if (puVar13 == *(ulong **)(param_3 + 0x95a8)) {
          puVar13 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar2 = puVar13 + 1;
        *puVar13 = uVar24;
      }
      else {
        puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar24);
        uVar24 = *puVar13;
      }
      if (*(int *)(uVar24 + 3) < 0x20) {
        puVar13 = (ulong *)Factory::NewFixedArrayWithHoles((Factory *)param_3,0x10,0);
      }
      FixedArrayBuilder::FixedArrayBuilder((FixedArrayBuilder *)&local_e8,puVar13);
      piVar16 = (int *)RegExpGlobalCache::FetchNext((RegExpGlobalCache *)local_d8);
      if (piVar16 == (int *)0x0) {
        uVar24 = 0;
        local_f4 = -1;
      }
      else {
        uVar24 = 0;
        bVar8 = 1;
        lVar25 = (ulong)(iVar23 + 1U) - 1;
        do {
          local_f4 = *piVar16;
          FixedArrayBuilder::EnsureCapacity((FixedArrayBuilder *)&local_e8,param_3,5);
          uVar33 = (uint)uVar24;
          uVar34 = local_f4 - uVar33;
          if (uVar34 != 0 && (int)uVar33 <= local_f4) {
            if ((uVar33 >> 0x13 == 0) && (uVar34 < 0x800)) {
              uVar24 = (ulong)(uVar34 | uVar33 << 0xb);
            }
            else {
              FixedArrayBuilder::Add
                        ((FixedArrayBuilder *)&local_e8,
                         -(ulong)(-uVar34 >> 0x1f) & 0xfffffffe00000000 | (ulong)-uVar34 << 1);
            }
            FixedArrayBuilder::Add
                      ((FixedArrayBuilder *)&local_e8,
                       -(uVar24 >> 0x1f) & 0xfffffffe00000000 | uVar24 << 1);
          }
          lVar27 = *(long *)pIVar2;
          uVar34 = piVar16[1];
          uVar24 = (ulong)uVar34;
          lVar30 = *(long *)(param_3 + 0x95a8);
          *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
          if (((bool)(local_f4 != 0 | bVar8 ^ 1)) ||
             (puVar13 = puVar10, *(uint *)(*puVar10 + 7) != uVar34)) {
            puVar13 = (ulong *)Factory::NewProperSubString
                                         ((Factory *)param_3,puVar10,local_f4,uVar24);
          }
          uVar29 = *param_2 & 0xffffffff00000000;
          uVar29 = uVar29 | *(uint *)((uVar29 | *(uint *)(*param_2 + 0xb)) + 0x2b);
          if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar17 = *(ulong **)pIVar2;
            if (puVar17 == *(ulong **)(param_3 + 0x95a8)) {
              puVar17 = (ulong *)HandleScope::Extend(param_3);
            }
            *(ulong **)pIVar2 = puVar17 + 1;
            *puVar17 = uVar29;
          }
          else {
            puVar17 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar29);
            uVar29 = *puVar17;
          }
          if ((uVar29 & 1) == 0) {
            bVar9 = false;
            iVar22 = 3;
          }
          else {
            bVar9 = *(ushort *)((uVar29 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar29 - 1)) -
                    0x76 < 0xf;
            iVar22 = 3;
            if (bVar9) {
              iVar22 = 4;
            }
          }
          puVar18 = (ulong *)Factory::NewFixedArray((Factory *)param_3,iVar22 + iVar23,0);
          uVar32 = *puVar18;
          uVar29 = *puVar13;
          *(int *)(uVar32 + 7) = (int)uVar29;
          if ((uVar29 & 1) != 0) {
            uVar26 = *(ulong *)((uVar29 & 0xfffffffffffc0000) + 8);
            if (((uint)uVar26 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar32,uVar32 + 7,uVar29);
              uVar26 = *(ulong *)(uVar29 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar26 & 0x18) != 0) &&
               ((*(byte *)((uVar32 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar32,uVar32 + 7,uVar29);
            }
          }
          if (0 < iVar23) {
            piVar35 = piVar16 + 3;
            iVar22 = 4;
            iVar6 = piVar16[2];
            lVar37 = lVar25;
            if (-1 < iVar6) goto LAB_0157f0f8;
LAB_0157f168:
            uVar29 = *puVar18;
            uVar32 = *(ulong *)(param_3 + 0xa0);
            *(int *)(uVar29 + (long)iVar22 + 7) = (int)uVar32;
            piVar16 = piVar35;
            if ((uVar32 & 1) == 0) goto LAB_0157f0e0;
            uVar26 = *(ulong *)((uVar32 & 0xfffffffffffc0000) + 8);
            lVar1 = uVar29 + (long)iVar22 + 7;
            if (((uint)uVar26 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar29,lVar1,uVar32);
              uVar26 = *(ulong *)(uVar32 & 0xfffffffffffc0000 | 8);
            }
            do {
              piVar16 = piVar35;
              if (((uVar26 & 0x18) != 0) &&
                 ((*(byte *)((uVar29 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar29,lVar1,uVar32);
              }
LAB_0157f0e0:
              do {
                iVar22 = iVar22 + 4;
                lVar37 = lVar37 + -1;
                piVar35 = piVar16 + 2;
                uVar34 = iVar23 + 1U;
                if (lVar37 == 0) goto LAB_0157f1fc;
                iVar6 = piVar16[1];
                if (iVar6 < 0) goto LAB_0157f168;
LAB_0157f0f8:
                if ((iVar6 != 0) || (uVar32 = *puVar10, *(int *)(uVar32 + 7) != *piVar35)) {
                  puVar13 = (ulong *)Factory::NewProperSubString((Factory *)param_3,puVar10);
                  uVar32 = *puVar13;
                }
                uVar29 = *puVar18;
                *(int *)(uVar29 + (long)iVar22 + 7) = (int)uVar32;
                piVar16 = piVar35;
              } while ((uVar32 & 1) == 0);
              uVar26 = *(ulong *)((uVar32 & 0xfffffffffffc0000) + 8);
              lVar1 = uVar29 + (long)iVar22 + 7;
              if (((uint)uVar26 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar29,lVar1,uVar32);
                uVar26 = *(ulong *)(uVar32 & 0xfffffffffffc0000 | 8);
              }
            } while( true );
          }
          uVar34 = 1;
LAB_0157f1fc:
          iVar22 = uVar34 * 4;
          *(int *)(*puVar18 + (long)iVar22 + 7) = local_f4 << 1;
          uVar32 = *puVar18;
          uVar29 = *puVar10;
          lVar37 = uVar32 + (long)(iVar22 + 4);
          *(int *)(lVar37 + 7) = (int)uVar29;
          if ((uVar29 & 1) != 0) {
            uVar26 = *(ulong *)((uVar29 & 0xfffffffffffc0000) + 8);
            lVar37 = lVar37 + 7;
            if (((uint)uVar26 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar32,lVar37,uVar29);
              uVar26 = *(ulong *)(uVar29 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar26 & 0x18) != 0) &&
               ((*(byte *)((uVar32 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar32,lVar37,uVar29);
            }
          }
          if (bVar9) {
            local_a0 = &PTR_FUN_01cc9180;
            local_98 = puVar18;
            local_80 = &local_a0;
            puVar13 = (ulong *)FUN_015870e0(param_3,puVar17,&local_a0);
            if (&local_a0 == local_80) {
              pcVar31 = (code *)(*local_80)[4];
LAB_0157f2c8:
              (*pcVar31)(local_80);
            }
            else if (local_80 != (undefined ***)0x0) {
              pcVar31 = (code *)(*local_80)[5];
              goto LAB_0157f2c8;
            }
            uVar32 = *puVar18;
            uVar29 = *puVar13;
            lVar37 = uVar32 + (long)(iVar22 + 8);
            *(int *)(lVar37 + 7) = (int)uVar29;
            if ((uVar29 & 1) != 0) {
              uVar26 = *(ulong *)((uVar29 & 0xfffffffffffc0000) + 8);
              lVar37 = lVar37 + 7;
              if (((uint)uVar26 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar32,lVar37,uVar29);
                uVar26 = *(ulong *)(uVar29 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar26 & 0x18) != 0) &&
                 ((*(byte *)((uVar32 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar32,lVar37,uVar29);
              }
            }
          }
          puVar15 = (undefined8 *)
                    Factory::NewJSArrayWithElements(param_3,puVar18,3,*(int *)(*puVar18 + 3) >> 1,0)
          ;
          FixedArrayBuilder::Add((FixedArrayBuilder *)&local_e8,*puVar15);
          *(long *)pIVar2 = lVar27;
          *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
          if (*(long *)(param_3 + 0x95a8) != lVar30) {
            *(long *)(param_3 + 0x95a8) = lVar30;
            HandleScope::DeleteExtensions(param_3);
          }
          piVar16 = (int *)RegExpGlobalCache::FetchNext((RegExpGlobalCache *)local_d8);
          bVar8 = 0;
        } while (piVar16 != (int *)0x0);
      }
      if ((int)local_d8[0] < 0) {
        pIVar21 = param_3 + 0x180;
      }
      else if (local_f4 < 0) {
        pIVar21 = param_3 + 0xb0;
      }
      else {
        uVar33 = (uint)uVar24;
        uVar34 = iVar5 - uVar33;
        if (uVar34 != 0 && (int)uVar33 <= iVar5) {
          if ((uVar33 >> 0x13 == 0) && (uVar34 < 0x800)) {
            uVar24 = (ulong)(uVar34 | uVar33 << 0xb);
          }
          else {
            FixedArrayBuilder::Add
                      ((FixedArrayBuilder *)&local_e8,
                       -(ulong)(-uVar34 >> 0x1f) & 0xfffffffe00000000 | (ulong)-uVar34 << 1);
          }
          FixedArrayBuilder::Add
                    ((FixedArrayBuilder *)&local_e8,
                     -(uVar24 >> 0x1f) & 0xfffffffe00000000 | uVar24 << 1);
        }
        uVar19 = RegExpGlobalCache::LastSuccessfulMatch((RegExpGlobalCache *)local_d8);
        RegExp::SetLastMatchInfo(param_3,puVar20,puVar10,iVar23,uVar19);
        if (0x1000 < iVar5) {
          uVar34 = iVar23 * 2 + 2;
          plVar12 = (long *)Factory::NewFixedArray((Factory *)param_3,uVar34,0);
          lVar25 = RegExpGlobalCache::LastSuccessfulMatch((RegExpGlobalCache *)local_d8);
          if (0 < (int)uVar34) {
            lVar27 = 0;
            do {
              piVar16 = (int *)(lVar25 + lVar27);
              iVar23 = (int)lVar27;
              lVar27 = lVar27 + 4;
              *(int *)(*plVar12 + (long)iVar23 + 7) = *piVar16 << 1;
            } while ((ulong)uVar34 * 4 - lVar27 != 0);
          }
          uVar19 = FixedArray::ShrinkOrEmpty(param_3,local_e8,local_e0);
          uVar19 = Factory::CopyFixedArrayWithMap(param_3,uVar19,param_3 + 0xe0);
          uVar24 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
          if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar20 = *(ulong **)pIVar2;
            if (puVar20 == *(ulong **)(param_3 + 0x95a8)) {
              puVar20 = (ulong *)HandleScope::Extend(param_3);
            }
            *(ulong **)pIVar2 = puVar20 + 1;
            *puVar20 = uVar24;
          }
          else {
            puVar20 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar24);
          }
          RegExpResultsCache::Enter(param_3,puVar10,puVar20,uVar19,plVar12,0);
        }
        pIVar21 = (Isolate *)FixedArrayBuilder::ToJSArray((FixedArrayBuilder *)&local_e8,puVar28);
      }
LAB_0157f878:
      uVar24 = *(ulong *)pIVar21;
    }
    RegExpGlobalCache::~RegExpGlobalCache((RegExpGlobalCache *)local_d8);
  }
LAB_0157f884:
  *(long *)pIVar2 = lVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    HandleScope::DeleteExtensions(param_3);
  }
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return uVar24;
  }
LAB_0157f900:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

