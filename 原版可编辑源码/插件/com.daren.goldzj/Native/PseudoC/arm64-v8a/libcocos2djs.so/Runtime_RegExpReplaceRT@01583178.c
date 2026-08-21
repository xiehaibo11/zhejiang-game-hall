
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::Runtime_RegExpReplaceRT(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_RegExpReplaceRT(int param_1,ulong *param_2,Isolate *param_3)

{
  bool bVar1;
  Isolate *pIVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  Isolate *pIVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  Isolate *pIVar22;
  Isolate *pIVar23;
  undefined8 uVar24;
  long lVar25;
  long **pplVar26;
  CanonicalHandleScope *this;
  int iVar27;
  ulong uVar28;
  ulong uVar29;
  undefined **ppuVar30;
  long *plVar31;
  undefined4 uVar32;
  undefined8 *puVar33;
  ulong uVar34;
  ulong uVar35;
  long *plVar36;
  int iVar37;
  int iVar38;
  undefined8 *puVar39;
  ulong uVar40;
  undefined8 *puVar41;
  long lVar42;
  long *plVar43;
  uint uVar44;
  undefined8 *puVar45;
  uint uVar46;
  int iVar47;
  double dVar48;
  long lVar49;
  uint local_20c;
  long *local_178;
  long *local_170;
  long *local_168;
  Zone *local_160;
  int local_158;
  int local_150 [14];
  undefined8 *local_118;
  undefined8 local_110;
  long lStack_108;
  long lStack_100;
  long local_f8;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  Isolate *local_c0;
  Isolate *local_b8;
  long **local_b0;
  ulong *local_a8;
  ulong *local_a0;
  ulong *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  
  lVar9 = tpidr_el0;
  local_80 = *(long *)(lVar9 + 0x28);
  if (TracingFlags::runtime_stats != 0) {
    uVar28 = FUN_01584d0c(param_1,param_2,param_3);
    if (*(long *)(lVar9 + 0x28) == local_80) {
      return uVar28;
    }
    goto LAB_01584c9c;
  }
  pIVar2 = param_3 + 0x95a0;
  lVar7 = *(long *)pIVar2;
  lVar8 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar28 = *param_2;
  if (((uVar28 & 1) == 0) ||
     (*(ushort *)((uVar28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar28 - 1)) < 0xa9)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSReceiver()");
  }
  uVar28 = param_2[-1];
  if (((uVar28 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar28 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
  pIVar14 = (Isolate *)String::Flatten(param_3,param_2 + -1,0);
  puVar16 = param_2 + -2;
  uVar28 = *puVar16;
  if ((uVar28 & 1) == 0) {
LAB_01583238:
    puVar15 = (ulong *)Object::ConvertToString(param_3,puVar16);
LAB_01583248:
    if (puVar15 != (ulong *)0x0) {
      bVar1 = false;
      goto LAB_01583294;
    }
LAB_0158387c:
    pIVar23 = (Isolate *)CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
    uVar28 = *(ulong *)(param_3 + 0x180);
    goto LAB_01584c20;
  }
  if ((*(byte *)((uVar28 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar28 - 1)) >> 1 & 1) == 0) {
    puVar15 = puVar16;
    if (0x3f < *(ushort *)((uVar28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar28 - 1)))
    goto LAB_01583238;
    goto LAB_01583248;
  }
  puVar15 = (ulong *)0x0;
  bVar1 = true;
LAB_01583294:
  uVar28 = RegExpUtils::IsUnmodifiedRegExp(param_3,param_2);
  if ((uVar28 & 1) == 0) {
    uVar28 = *(ulong *)(param_3 + 0x718);
    uVar34 = (ulong)param_3 | 7;
    local_b8 = param_3 + 0x718;
    uVar44 = *(uint *)(*(ulong *)pIVar14 + 7);
    uVar32 = 3;
    if ((*(short *)(uVar34 + *(uint *)(uVar28 - 1)) == 0x40) &&
       (uVar32 = 3, (*(byte *)(uVar28 + 7) & 1) != 0)) {
      uVar32 = 0;
    }
    local_d8 = (undefined **)CONCAT44(local_d8._4_4_,uVar32);
    uStack_d0._4_4_ = 0;
    local_c8 = 0xc0;
    local_c0 = param_3;
    if ((*(ushort *)((uVar28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar28 - 1)) & 0xffe0) ==
        0x20) {
      local_b8 = (Isolate *)StringTable::LookupString(param_3);
    }
    local_b0 = (long **)0x0;
    local_a0 = (ulong *)0x0;
    uStack_88 = 0xffffffffffffffff;
    local_90 = 0xffffffffffffffff;
    local_a8 = param_2;
    local_98 = param_2;
    LookupIterator::Start<false>((LookupIterator *)&local_d8);
    if (local_d8._4_4_ == 4) {
      pIVar23 = local_c0 + 0xa0;
    }
    else {
      pIVar23 = (Isolate *)Object::GetProperty((LookupIterator *)&local_d8,false);
      if (pIVar23 == (Isolate *)0x0) goto LAB_0158387c;
    }
    local_d8 = *(undefined ***)pIVar23;
    uVar40 = Object::BooleanValue((Object *)&local_d8,param_3);
    uVar28 = uVar40 & 0xffffffff;
    if ((uVar40 & 1) == 0) {
      uVar12 = 0;
    }
    else {
      uVar29 = *(ulong *)(param_3 + 0xab8);
      pIVar23 = param_3 + 0xab8;
      uVar32 = 3;
      if ((*(short *)(uVar34 + *(uint *)(uVar29 - 1)) == 0x40) &&
         (uVar32 = 3, (*(byte *)(uVar29 + 7) & 1) != 0)) {
        uVar32 = 0;
      }
      local_d8 = (undefined **)CONCAT44(local_d8._4_4_,uVar32);
      uStack_d0._4_4_ = 0;
      local_c8 = 0xc0;
      local_c0 = param_3;
      if ((*(ushort *)((uVar29 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar29 - 1)) & 0xffe0)
          == 0x20) {
        pIVar23 = (Isolate *)StringTable::LookupString(param_3);
      }
      local_b0 = (long **)0x0;
      local_a0 = (ulong *)0x0;
      uStack_88 = 0xffffffffffffffff;
      local_90 = 0xffffffffffffffff;
      local_b8 = pIVar23;
      local_a8 = param_2;
      local_98 = param_2;
      LookupIterator::Start<false>((LookupIterator *)&local_d8);
      if (local_d8._4_4_ == 4) {
        pIVar23 = local_c0 + 0xa0;
      }
      else {
        pIVar23 = (Isolate *)Object::GetProperty((LookupIterator *)&local_d8,false);
        if (pIVar23 == (Isolate *)0x0) goto LAB_0158387c;
      }
      local_d8 = *(undefined ***)pIVar23;
      uVar12 = Object::BooleanValue((Object *)&local_d8,param_3);
      lVar25 = RegExpUtils::SetLastIndex(param_3,param_2,0);
      if (lVar25 == 0) goto LAB_0158387c;
    }
    Zone::Zone((Zone *)&local_118,*(AccountingAllocator **)(param_3 + 0x95d0),
               "../../src/runtime/runtime-regexp.cc:1765");
    pIVar23 = param_3 + 0xa0;
    puVar17 = (ulong *)RegExpUtils::RegExpExec(param_3,param_2,pIVar14);
    if (puVar17 != (ulong *)0x0) {
      puVar45 = (undefined8 *)0x0;
      puVar39 = (undefined8 *)0x0;
      puVar41 = (undefined8 *)0x0;
      uVar29 = *puVar17;
      do {
        if (((uVar29 & 1) != 0) && ((int)uVar29 == *(int *)(param_3 + 0xb0))) {
LAB_015838a0:
          IncrementalStringBuilder::IncrementalStringBuilder
                    ((IncrementalStringBuilder *)local_150,param_3);
          if (puVar45 != puVar39) {
            local_20c = 0;
            goto LAB_015838e8;
          }
          local_20c = 0;
          goto LAB_01584654;
        }
        if (puVar39 == puVar41) {
          lVar25 = (long)puVar39 - (long)puVar45 >> 3;
          uVar29 = lVar25 + 1;
          if (uVar29 >> 0x1c != 0) {
LAB_01584cc8:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar35 = (long)puVar41 - (long)puVar45 >> 2;
          if (uVar29 <= uVar35) {
            uVar29 = uVar35;
          }
          if (0x7fffffe < (ulong)((long)puVar41 - (long)puVar45 >> 3)) {
            uVar29 = 0xfffffff;
          }
          if (uVar29 == 0) {
            lVar19 = 0;
          }
          else {
            uVar35 = uVar29 * 8;
            if (uVar35 < (ulong)(lStack_100 - lStack_108) || uVar35 - (lStack_100 - lStack_108) == 0
               ) {
              lVar19 = lStack_108;
              lStack_108 = lStack_108 + uVar35;
            }
            else {
              lVar19 = Zone::NewExpand((Zone *)&local_118,uVar35);
            }
          }
          puVar3 = (undefined8 *)(lVar19 + lVar25 * 8);
          puVar41 = (undefined8 *)(lVar19 + uVar29 * 8);
          *puVar3 = puVar17;
          puVar33 = puVar3;
          while (puVar39 != puVar45) {
            puVar39 = puVar39 + -1;
            puVar33 = puVar33 + -1;
            *puVar33 = *puVar39;
          }
        }
        else {
          *puVar39 = puVar17;
          puVar33 = puVar45;
          puVar3 = puVar39;
        }
        puVar45 = puVar33;
        puVar39 = puVar3 + 1;
        if ((uVar40 & 1) == 0) goto LAB_015838a0;
        if (((*puVar17 & 1) == 0) ||
           (puVar18 = puVar17, *(ushort *)(uVar34 + *(uint *)(*puVar17 - 1)) < 0xa9)) {
          puVar18 = (ulong *)LookupIterator::GetRootForNonJSReceiver(param_3,puVar17,0);
        }
        local_d8 = (undefined **)CONCAT44(local_d8._4_4_,3);
        uStack_d0._4_4_ = 0;
        local_c8 = 0xc0;
        local_b8 = (Isolate *)0x0;
        local_b0 = (long **)0x0;
        local_a0 = (ulong *)0x0;
        uStack_88 = 0xffffffffffffffff;
        local_90 = 0;
        local_c0 = param_3;
        local_a8 = puVar17;
        local_98 = puVar18;
        LookupIterator::Start<true>((LookupIterator *)&local_d8);
        if (local_d8._4_4_ == 4) {
          pIVar22 = local_c0 + 0xa0;
          uVar29 = *(ulong *)pIVar22;
          if ((uVar29 & 1) == 0) goto LAB_015837a0;
LAB_01583788:
          if (0x3f < *(ushort *)((uVar29 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar29 - 1)))
          goto LAB_015837a0;
        }
        else {
          pIVar22 = (Isolate *)Object::GetProperty((LookupIterator *)&local_d8,false);
          if (pIVar22 == (Isolate *)0x0) break;
          uVar29 = *(ulong *)pIVar22;
          if ((uVar29 & 1) != 0) goto LAB_01583788;
LAB_015837a0:
          pIVar22 = (Isolate *)Object::ConvertToString(param_3);
        }
        if ((pIVar22 == (Isolate *)0x0) ||
           (((*(int *)(*(ulong *)pIVar22 + 7) == 0 &&
             (lVar25 = RegExpUtils::SetAdvancedStringIndex(param_3,param_2,pIVar14,uVar12 & 1),
             lVar25 == 0)) ||
            (puVar17 = (ulong *)RegExpUtils::RegExpExec(param_3,param_2,pIVar14,pIVar23),
            puVar17 == (ulong *)0x0)))) break;
        uVar29 = *puVar17;
      } while( true );
    }
    uVar28 = *(ulong *)(param_3 + 0x180);
    goto LAB_01583890;
  }
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!functional_replace");
  }
  uVar44 = *(uint *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) + 0xf);
  puVar16 = (ulong *)String::Flatten(param_3,puVar15,0);
  uVar28 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
  uVar28 = uVar28 | *(uint *)((uVar28 | *(uint *)((uVar28 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x247);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar15 = *(ulong **)pIVar2;
    if (puVar15 == *(ulong **)(param_3 + 0x95a8)) {
      puVar15 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar2 = puVar15 + 1;
    *puVar15 = uVar28;
    if ((uVar44 >> 1 & 1) == 0) goto LAB_01583320;
LAB_01583518:
    lVar25 = RegExpUtils::SetLastIndex(param_3,param_2,0);
    pIVar23 = (Isolate *)CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
    if (lVar25 == 0) goto LAB_01584c18;
    if (FLAG_regexp_tier_up != '\0') {
      ppuVar30 = (undefined **)*param_2;
      uVar44 = *(uint *)((long)ppuVar30 + 0xb);
      if ((((uVar44 & 1) == 0) ||
          (uVar44 != *(uint *)(((ulong)ppuVar30 & 0xffffffff00000000) + 0xa0))) &&
         (((*(uint *)(((ulong)ppuVar30 & 0xffffffff00000000 | (ulong)uVar44) + 7) & 0xfffffffe) == 4
          && (local_d8 = ppuVar30, JSRegExp::MarkTierUpForNextExec((JSRegExp *)&local_d8),
             FLAG_trace_regexp_tier_up != '\0')))) {
        PrintF("Forcing tier-up of JSRegExp object %p in RegExpReplace\n",*param_2);
      }
    }
    if (*(int *)(*puVar16 + 7) == 0) {
      uVar28 = *(ulong *)pIVar14;
      uVar34 = uVar28 & 0xffffffff00000000 | 7;
      uVar44 = *(uint *)(*param_2 + 0xb);
      uVar40 = *param_2 & 0xffffffff00000000;
      if ((*(byte *)(uVar34 + *(uint *)(uVar28 - 1)) >> 3 & 1) == 0) {
        if ((((uVar44 & 1) != 0) && (uVar44 == *(uint *)(uVar40 + 0xa0))) ||
           ((*(uint *)((uVar40 | uVar44) + 7) & 0xfffffffe) != 2)) {
          RegExpGlobalCache::RegExpGlobalCache
                    ((RegExpGlobalCache *)&local_d8,param_2,pIVar14,param_3);
          if ((int)local_d8 < 0) {
LAB_015847fc:
            pIVar23 = param_3 + 0x180;
            goto LAB_01584b18;
          }
          piVar21 = (int *)RegExpGlobalCache::FetchNext((RegExpGlobalCache *)&local_d8);
          if (piVar21 == (int *)0x0) {
LAB_01584890:
            pIVar23 = param_3 + 0x180;
            if (-1 < (int)local_d8) {
              pIVar23 = pIVar14;
            }
            goto LAB_01584b18;
          }
          uVar44 = *(uint *)(*param_2 + 0xb);
          uVar28 = *param_2 & 0xffffffff00000000;
          if (((uVar44 & 1) != 0) && (uVar44 == *(uint *)(uVar28 + 0xa0))) goto LAB_01584ce0;
          uVar28 = uVar28 | uVar44;
          iVar37 = *(int *)(uVar28 + 7) >> 1;
          if (iVar37 == 1) {
            iVar37 = 0;
          }
          else {
            if (iVar37 != 2) goto LAB_01584ce0;
            iVar37 = *(int *)(uVar28 + 0x27) >> 1;
          }
          iVar13 = *(int *)(*(ulong *)pIVar14 + 7);
          iVar27 = iVar13 + (*piVar21 - piVar21[1]);
          if (iVar27 == 0) {
LAB_01584b08:
            pIVar23 = param_3 + 200;
          }
          else {
            pIVar23 = (Isolate *)Factory::NewRawTwoByteString((Factory *)param_3,iVar27,0);
            if (pIVar23 == (Isolate *)0x0) {
LAB_01584cf8:
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","(location_) != nullptr");
            }
            iVar38 = 0;
            iVar47 = 0;
            do {
              iVar5 = *piVar21;
              iVar6 = piVar21[1];
              if (iVar47 < iVar5) {
                String::WriteToFlat<unsigned_short>
                          (*(ulong *)pIVar14,*(ulong *)pIVar23 + (long)iVar38 * 2 + 0xb,iVar47,iVar5
                          );
                iVar38 = (iVar38 - iVar47) + iVar5;
              }
              piVar21 = (int *)RegExpGlobalCache::FetchNext((RegExpGlobalCache *)&local_d8);
              iVar47 = iVar6;
            } while (piVar21 != (int *)0x0);
            if ((int)local_d8 < 0) {
LAB_01584b10:
              pIVar23 = param_3 + 0x180;
            }
            else {
              uVar24 = RegExpGlobalCache::LastSuccessfulMatch((RegExpGlobalCache *)&local_d8);
              RegExp::SetLastMatchInfo(param_3,puVar15,pIVar14,iVar37,uVar24);
              if (iVar13 - iVar6 != 0 && iVar6 <= iVar13) {
                String::WriteToFlat<unsigned_short>
                          (*(ulong *)pIVar14,*(ulong *)pIVar23 + (long)iVar38 * 2 + 0xb,iVar6,iVar13
                          );
                iVar38 = (iVar13 - iVar6) + iVar38;
              }
              if (iVar38 == 0) goto LAB_01584b08;
              uVar44 = iVar38 * 2 + 0xfU & 0xfffffffc;
              *(int *)(*(ulong *)pIVar23 + 7) = iVar38;
              uVar28 = *(ulong *)pIVar23;
              iVar37 = (iVar27 * 2 + 0xfU & 0xfffffffc) - uVar44;
              if (iVar37 == 0) goto LAB_01584b1c;
LAB_01584ad8:
              uVar34 = Heap::IsLargeObject(uVar28);
              if ((uVar34 & 1) == 0) {
                Heap::CreateFillerObjectAt
                          ((Heap *)(param_3 + 0x8850),uVar28 + (long)(int)uVar44 + -1,iVar37,1,1);
              }
            }
          }
LAB_01584b18:
          uVar28 = *(ulong *)pIVar23;
LAB_01584b1c:
          RegExpGlobalCache::~RegExpGlobalCache((RegExpGlobalCache *)&local_d8);
          this = *(CanonicalHandleScope **)(param_3 + 0x95b8);
          goto joined_r0x01584c04;
        }
      }
      else if ((((uVar44 & 1) != 0) && (uVar44 == *(uint *)(uVar40 + 0xa0))) ||
              ((*(uint *)((uVar40 | uVar44) + 7) & 0xfffffffe) != 2)) {
        RegExpGlobalCache::RegExpGlobalCache((RegExpGlobalCache *)&local_d8,param_2,pIVar14,param_3)
        ;
        if ((int)local_d8 < 0) goto LAB_015847fc;
        piVar21 = (int *)RegExpGlobalCache::FetchNext((RegExpGlobalCache *)&local_d8);
        if (piVar21 == (int *)0x0) goto LAB_01584890;
        uVar44 = *(uint *)(*param_2 + 0xb);
        uVar28 = *param_2 & 0xffffffff00000000;
        if (((uVar44 & 1) != 0) && (uVar44 == *(uint *)(uVar28 + 0xa0))) goto LAB_01584ce0;
        uVar28 = uVar28 | uVar44;
        iVar37 = *(int *)(uVar28 + 7) >> 1;
        if (iVar37 == 1) {
          iVar37 = 0;
        }
        else {
          if (iVar37 != 2) goto LAB_01584ce0;
          iVar37 = *(int *)(uVar28 + 0x27) >> 1;
        }
        iVar13 = *(int *)(*(ulong *)pIVar14 + 7);
        iVar27 = iVar13 + (*piVar21 - piVar21[1]);
        if (iVar27 == 0) goto LAB_01584b08;
        pIVar23 = (Isolate *)Factory::NewRawOneByteString((Factory *)param_3,iVar27,0);
        if (pIVar23 == (Isolate *)0x0) goto LAB_01584cf8;
        iVar38 = 0;
        iVar47 = 0;
        do {
          iVar5 = *piVar21;
          iVar6 = piVar21[1];
          if (iVar47 < iVar5) {
            String::WriteToFlat<unsigned_char>
                      (*(ulong *)pIVar14,*(ulong *)pIVar23 + (long)iVar38 + 0xb,iVar47,iVar5);
            iVar38 = (iVar38 - iVar47) + iVar5;
          }
          piVar21 = (int *)RegExpGlobalCache::FetchNext((RegExpGlobalCache *)&local_d8);
          iVar47 = iVar6;
        } while (piVar21 != (int *)0x0);
        if ((int)local_d8 < 0) goto LAB_01584b10;
        uVar24 = RegExpGlobalCache::LastSuccessfulMatch((RegExpGlobalCache *)&local_d8);
        RegExp::SetLastMatchInfo(param_3,puVar15,pIVar14,iVar37,uVar24);
        if (iVar13 - iVar6 != 0 && iVar6 <= iVar13) {
          String::WriteToFlat<unsigned_char>
                    (*(ulong *)pIVar14,*(ulong *)pIVar23 + (long)iVar38 + 0xb,iVar6,iVar13);
          iVar38 = (iVar13 - iVar6) + iVar38;
        }
        if (iVar38 == 0) goto LAB_01584b08;
        uVar44 = iVar38 + 0xfU & 0xfffffffc;
        *(int *)(*(ulong *)pIVar23 + 7) = iVar38;
        uVar28 = *(ulong *)pIVar23;
        iVar37 = (iVar27 + 0xfU & 0xfffffffc) - uVar44;
        if (iVar37 != 0) goto LAB_01584ad8;
        goto LAB_01584b1c;
      }
      if ((*(byte *)(uVar34 + *(uint *)(uVar28 - 1)) >> 3 & 1) == 0) {
        uVar28 = FUN_0158791c();
      }
      else {
        uVar28 = FUN_01587700(param_3,pIVar14,param_2,param_3 + 200,puVar15);
      }
      this = *(CanonicalHandleScope **)(param_3 + 0x95b8);
    }
    else {
      uVar44 = *(uint *)(*param_2 + 0xb);
      uVar28 = *param_2 & 0xffffffff00000000;
      if (((uVar44 & 1) != 0) && (uVar44 == *(uint *)(uVar28 + 0xa0))) {
LAB_01584ce0:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      uVar34 = uVar28 | uVar44;
      iVar37 = *(int *)(uVar34 + 7) >> 1;
      if (iVar37 == 1) {
        iVar37 = 0;
      }
      else {
        if (iVar37 != 2) goto LAB_01584ce0;
        iVar37 = *(int *)(uVar34 + 0x27) >> 1;
      }
      iVar27 = *(int *)(*(ulong *)pIVar14 + 7);
      if (((uVar44 & 1) == 0) || (uVar44 != *(uint *)(uVar28 + 0xa0))) {
        iVar13 = *(int *)(uVar34 + 7) >> 1;
        if (iVar13 != 2) goto LAB_01584208;
        iVar13 = RegExp::IrregexpPrepare(param_3,param_2,pIVar14);
        pIVar23 = (Isolate *)CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
        if (iVar13 != -1) {
          iVar13 = 2;
          goto LAB_01584208;
        }
        uVar28 = *(ulong *)(param_3 + 0x180);
      }
      else {
        iVar13 = 0;
LAB_01584208:
        Zone::Zone((Zone *)&local_d8,*(AccountingAllocator **)(param_3 + 0x95d0),
                   "../../src/runtime/runtime-regexp.cc:624");
        lStack_108 = 0;
        local_110 = 0;
        local_f8 = 0;
        lStack_100 = 0;
        uStack_e8 = 0;
        local_f0 = 0;
        local_118 = &local_d8;
        local_e0 = &local_d8;
        uVar28 = CompiledReplacement::Compile
                           ((CompiledReplacement *)&local_118,param_3,param_2,puVar16,iVar37,iVar27)
        ;
        if ((iVar13 == 1) && ((uVar28 & 1) != 0)) {
          if (((*(byte *)((*(ulong *)pIVar14 & 0xffffffff00000000 | 7) +
                         (ulong)*(uint *)(*(ulong *)pIVar14 - 1)) >> 3 & 1) == 0) ||
             ((*(byte *)((*puVar16 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar16 - 1)) >> 3
              & 1) == 0)) {
            uVar28 = FUN_0158791c(param_3,pIVar14,param_2,puVar16,puVar15);
          }
          else {
            uVar28 = FUN_01587700(param_3,pIVar14,param_2,puVar16,puVar15);
          }
        }
        else {
          RegExpGlobalCache::RegExpGlobalCache
                    ((RegExpGlobalCache *)local_150,param_2,pIVar14,param_3);
          if (local_150[0] < 0) {
LAB_01584888:
            uVar28 = *(ulong *)(param_3 + 0x180);
          }
          else {
            piVar21 = (int *)RegExpGlobalCache::FetchNext((RegExpGlobalCache *)local_150);
            if (piVar21 == (int *)0x0) {
              if (local_150[0] < 0) goto LAB_01584888;
              uVar28 = *(ulong *)pIVar14;
            }
            else {
              ReplacementStringBuilder::ReplacementStringBuilder
                        ((ReplacementStringBuilder *)&local_178,param_3 + 0x8850,pIVar14,
                         (int)local_110 * 4 + 5);
              uVar34 = 0;
              do {
                iVar13 = *piVar21;
                uVar44 = piVar21[1];
                uVar40 = (ulong)uVar44;
                uVar46 = (uint)uVar34;
                uVar12 = iVar13 - uVar46;
                if (uVar12 != 0 && (int)uVar46 <= iVar13) {
                  ReplacementStringBuilder::EnsureCapacity((ReplacementStringBuilder *)&local_178,2)
                  ;
                  if ((uVar46 >> 0x13 == 0) && (uVar12 < 0x800)) {
                    uVar34 = (ulong)(uVar12 | uVar46 << 0xb);
                  }
                  else {
                    FixedArrayBuilder::Add
                              ((FixedArrayBuilder *)&local_170,
                               -(ulong)(-uVar12 >> 0x1f) & 0xfffffffe00000000 | (ulong)-uVar12 << 1)
                    ;
                  }
                  FixedArrayBuilder::Add
                            ((FixedArrayBuilder *)&local_170,
                             -(uVar34 >> 0x1f) & 0xfffffffe00000000 | uVar34 << 1);
                  iVar38 = local_158 + uVar12;
                  bVar1 = local_158 <= (int)(0xffffff0 - uVar12);
                  local_158 = 0x7fffffff;
                  if (bVar1) {
                    local_158 = iVar38;
                  }
                }
                if ((uVar28 & 1) == 0) {
                  CompiledReplacement::Apply
                            ((CompiledReplacement *)&local_118,
                             (ReplacementStringBuilder *)&local_178,iVar13,uVar44,piVar21);
                }
                else {
                  ReplacementStringBuilder::AddString
                            ((ReplacementStringBuilder *)&local_178,puVar16);
                }
                piVar21 = (int *)RegExpGlobalCache::FetchNext((RegExpGlobalCache *)local_150);
                uVar34 = uVar40;
              } while (piVar21 != (int *)0x0);
              if (local_150[0] < 0) {
LAB_01584bc0:
                pIVar14 = param_3 + 0x180;
              }
              else {
                uVar12 = iVar27 - uVar44;
                if (uVar12 != 0 && (int)uVar44 <= iVar27) {
                  ReplacementStringBuilder::EnsureCapacity((ReplacementStringBuilder *)&local_178,2)
                  ;
                  if ((uVar44 >> 0x13 == 0) && (uVar12 < 0x800)) {
                    uVar40 = (ulong)(uVar12 | uVar44 << 0xb);
                  }
                  else {
                    FixedArrayBuilder::Add
                              ((FixedArrayBuilder *)&local_170,
                               -(ulong)(-uVar12 >> 0x1f) & 0xfffffffe00000000 | (ulong)-uVar12 << 1)
                    ;
                  }
                  FixedArrayBuilder::Add
                            ((FixedArrayBuilder *)&local_170,
                             -(uVar40 >> 0x1f) & 0xfffffffe00000000 | uVar40 << 1);
                  iVar27 = local_158 + uVar12;
                  bVar1 = local_158 <= (int)(0xffffff0 - uVar12);
                  local_158 = 0x7fffffff;
                  if (bVar1) {
                    local_158 = iVar27;
                  }
                }
                uVar24 = RegExpGlobalCache::LastSuccessfulMatch((RegExpGlobalCache *)local_150);
                RegExp::SetLastMatchInfo(param_3,puVar15,pIVar14,iVar37,uVar24);
                pIVar14 = (Isolate *)
                          ReplacementStringBuilder::ToString((ReplacementStringBuilder *)&local_178)
                ;
                if (pIVar14 == (Isolate *)0x0) goto LAB_01584bc0;
              }
              uVar28 = *(ulong *)pIVar14;
            }
          }
          RegExpGlobalCache::~RegExpGlobalCache((RegExpGlobalCache *)local_150);
        }
        if (local_f8 != 0) {
          local_f0 = local_f8;
        }
        Zone::~Zone((Zone *)&local_d8);
        pIVar23 = (Isolate *)CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
      }
      if (((uVar28 & 1) == 0) ||
         (pIVar23 = (Isolate *)CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0),
         0x3f < *(ushort *)((uVar28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar28 - 1))))
      goto LAB_01584c18;
      this = *(CanonicalHandleScope **)(param_3 + 0x95b8);
    }
joined_r0x01584c04:
    if (this == (CanonicalHandleScope *)0x0) {
      pIVar14 = *(Isolate **)pIVar2;
      if (pIVar14 == *(Isolate **)(param_3 + 0x95a8)) {
        pIVar14 = (Isolate *)HandleScope::Extend(param_3);
      }
      pIVar23 = (Isolate *)CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
      *(Isolate **)pIVar2 = pIVar14 + 8;
      *(ulong *)pIVar14 = uVar28;
    }
    else {
      pIVar14 = (Isolate *)CanonicalHandleScope::Lookup(this,uVar28);
      pIVar23 = (Isolate *)CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
    }
joined_r0x01584844:
    if (pIVar14 != (Isolate *)0x0) {
      uVar28 = *(ulong *)pIVar14;
      goto LAB_01584c20;
    }
  }
  else {
    puVar15 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar28);
    if ((uVar44 >> 1 & 1) != 0) goto LAB_01583518;
LAB_01583320:
    if ((uVar44 >> 4 & 1) == 0) {
LAB_01584420:
      uVar12 = 0;
LAB_01584428:
      uVar28 = *(ulong *)(param_3 + 0xb0);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        pIVar22 = *(Isolate **)pIVar2;
        if (pIVar22 == *(Isolate **)(param_3 + 0x95a8)) {
          pIVar22 = (Isolate *)HandleScope::Extend(param_3);
        }
        *(Isolate **)pIVar2 = pIVar22 + 8;
        *(ulong *)pIVar22 = uVar28;
      }
      else {
        pIVar22 = (Isolate *)
                  CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar28);
      }
      if (uVar12 <= *(uint *)(*(ulong *)pIVar14 + 7)) {
        pIVar22 = (Isolate *)RegExp::Exec(param_3,param_2,pIVar14,uVar12,puVar15);
        pIVar23 = (Isolate *)CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
        if (pIVar22 == (Isolate *)0x0) goto LAB_01584c18;
      }
      pIVar23 = (Isolate *)CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
      uVar28 = *(ulong *)pIVar22;
      if (((uVar28 & 1) == 0) || ((int)uVar28 != *(int *)(param_3 + 0xb0))) {
        uVar12 = *(uint *)(uVar28 + 0x17);
        iVar37 = *(int *)(uVar28 + 0x13) >> 1;
        if ((uVar44 >> 4 & 1) != 0) {
          *(uint *)(*param_2 + 0x17) = uVar12 & 0xfffffffe;
        }
        IncrementalStringBuilder::IncrementalStringBuilder
                  ((IncrementalStringBuilder *)&local_118,param_3);
        pIVar23 = pIVar14;
        if (*(int *)(*(ulong *)pIVar14 + 7) != iVar37) {
          pIVar23 = (Isolate *)Factory::NewProperSubString((Factory *)param_3,pIVar14,0,iVar37);
        }
        IncrementalStringBuilder::AppendString((IncrementalStringBuilder *)&local_118,pIVar23);
        if (0 < *(int *)(*puVar16 + 7)) {
          local_d8 = &PTR_FUN_01cc9210;
          local_b0 = (long **)0x0;
          local_c0 = pIVar22;
          uStack_d0 = param_3;
          uVar24 = String::Flatten(param_3,pIVar14,0);
          local_c8 = (undefined4)uVar24;
          uStack_c4 = (undefined4)((ulong)uVar24 >> 0x20);
          uVar44 = *(uint *)(*param_2 + 0xb);
          uVar28 = *param_2 & 0xffffffff00000000;
          if (((((uVar44 & 1) == 0) || (uVar44 != *(uint *)(uVar28 + 0xa0))) &&
              ((*(uint *)((uVar28 | uVar44) + 7) & 0xfffffffe) == 4)) &&
             (uVar44 = *(uint *)((uVar28 | uVar44) + 0x2b), (uVar44 & 1) != 0)) {
            plVar43 = (long *)(uVar28 | uVar44);
            uVar44 = *(ushort *)((uVar28 | 7) + (ulong)*(uint *)((long)plVar43 + -1)) - 0x76;
            local_b8 = (Isolate *)CONCAT71(local_b8._1_7_,uVar44 < 0xf);
            if (uVar44 < 0xf) {
              if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                pplVar26 = *(long ***)pIVar2;
                if (pplVar26 == *(long ***)(param_3 + 0x95a8)) {
                  pplVar26 = (long **)HandleScope::Extend(param_3);
                }
                *(long ***)pIVar2 = pplVar26 + 1;
                *pplVar26 = plVar43;
                local_b0 = pplVar26;
              }
              else {
                local_b0 = (long **)CanonicalHandleScope::Lookup
                                              (*(CanonicalHandleScope **)(param_3 + 0x95b8),
                                               (ulong)plVar43);
              }
            }
          }
          else {
            local_b8 = (Isolate *)((ulong)local_b8._1_7_ << 8);
          }
          lVar25 = String::GetSubstitution(param_3,&local_d8,puVar16,0);
          pIVar23 = uStack_d0;
          if (lVar25 == 0) goto LAB_01584c18;
          IncrementalStringBuilder::AppendString((IncrementalStringBuilder *)&local_118,lVar25);
        }
        iVar37 = (int)uVar12 >> 1;
        if (iVar37 != 0) {
          pIVar14 = (Isolate *)
                    Factory::NewProperSubString
                              ((Factory *)param_3,pIVar14,iVar37,
                               *(undefined4 *)(*(ulong *)pIVar14 + 7));
        }
        IncrementalStringBuilder::AppendString((IncrementalStringBuilder *)&local_118,pIVar14);
        pIVar14 = (Isolate *)
                  IncrementalStringBuilder::Finish((IncrementalStringBuilder *)&local_118);
        pIVar23 = uStack_d0;
      }
      else if ((uVar44 >> 4 & 1) != 0) {
        *(undefined4 *)(*param_2 + 0x17) = 0;
      }
      goto joined_r0x01584844;
    }
    uVar12 = *(uint *)(*param_2 + 0x17);
    uVar28 = *param_2 & 0xffffffff00000000 | (ulong)uVar12;
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar17 = *(ulong **)pIVar2;
      if (puVar17 == *(ulong **)(param_3 + 0x95a8)) {
        puVar17 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar2 = puVar17 + 1;
      *puVar17 = uVar28;
      if ((uVar12 & 1) == 0) goto LAB_01583350;
LAB_015842dc:
      puVar17 = (ulong *)Object::ConvertToLength(param_3,puVar17);
      pIVar23 = (Isolate *)CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
    }
    else {
      puVar17 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar28);
      uVar28 = *puVar17;
      if ((uVar28 & 1) != 0) goto LAB_015842dc;
LAB_01583350:
      uVar28 = (ulong)(((uint)(uVar28 >> 1) & 0x7fffffff & ((int)uVar28 >> 0x1f ^ 0xffffffffU)) << 1
                      );
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar17 = *(ulong **)pIVar2;
        if (puVar17 == *(ulong **)(param_3 + 0x95a8)) {
          puVar17 = (ulong *)HandleScope::Extend(param_3);
        }
        pIVar23 = (Isolate *)CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
        *(ulong **)pIVar2 = puVar17 + 1;
        *puVar17 = uVar28;
      }
      else {
        puVar17 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar28);
        pIVar23 = (Isolate *)CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
      }
    }
    if (puVar17 != (ulong *)0x0) {
      uVar28 = *puVar17;
      if ((uVar28 & 1) == 0) {
        uVar12 = 0;
        if (1 < (int)uVar28) {
          uVar12 = (int)uVar28 >> 1;
        }
      }
      else {
        if (*(double *)(uVar28 + 3) < 1.0) goto LAB_01584420;
        dVar48 = (double)NEON_fminnm(*(double *)(uVar28 + 3),0x41efffffffe00000);
        uVar12 = (int)dVar48;
      }
      goto LAB_01584428;
    }
  }
LAB_01584c18:
  uVar28 = *(ulong *)(param_3 + 0x180);
LAB_01584c20:
  *(long *)pIVar2 = lVar7;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  uStack_d0 = pIVar23;
  if (*(long *)(param_3 + 0x95a8) != lVar8) {
    *(long *)(param_3 + 0x95a8) = lVar8;
    HandleScope::DeleteExtensions(param_3);
  }
  goto LAB_01584c48;
  while (puVar45 = puVar45 + 1, puVar45 != puVar39) {
LAB_015838e8:
    lVar25 = *(long *)pIVar2;
    lVar19 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    puVar17 = (ulong *)Object::GetProperty(param_3,*puVar45,param_3 + 0x7b8);
    if (puVar17 == (ulong *)0x0) {
LAB_01583af0:
      uVar28 = *(ulong *)(param_3 + 0x180);
      bVar11 = true;
LAB_01583afc:
      *(long *)pIVar2 = lVar25;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar19) {
        *(long *)(param_3 + 0x95a8) = lVar19;
        HandleScope::DeleteExtensions(param_3);
      }
    }
    else {
      uVar40 = *puVar17;
      if ((uVar40 & 1) == 0) {
        uVar40 = (ulong)(((uint)(uVar40 >> 1) & 0x7fffffff & ((int)uVar40 >> 0x1f ^ 0xffffffffU)) <<
                        1);
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar17 = *(ulong **)pIVar2;
          if (puVar17 == *(ulong **)(param_3 + 0x95a8)) {
            puVar17 = (ulong *)HandleScope::Extend(param_3);
          }
          *(ulong **)pIVar2 = puVar17 + 1;
          *puVar17 = uVar40;
        }
        else {
          puVar17 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar40);
        }
      }
      else {
        puVar17 = (ulong *)Object::ConvertToLength(param_3,puVar17);
      }
      if (puVar17 == (ulong *)0x0) goto LAB_01583af0;
      uVar40 = *puVar17;
      if ((uVar40 & 1) == 0) {
        uVar12 = 0;
        if (1 < (int)uVar40) {
          uVar12 = (int)uVar40 >> 1;
        }
      }
      else if (1.0 <= *(double *)(uVar40 + 3)) {
        dVar48 = (double)NEON_fminnm(*(double *)(uVar40 + 3),0x41efffffffe00000);
        uVar12 = (int)dVar48;
      }
      else {
        uVar12 = 0;
      }
      puVar17 = (ulong *)*puVar45;
      if (((*puVar17 & 1) == 0) ||
         (puVar18 = puVar17, *(ushort *)(uVar34 + *(uint *)(*puVar17 - 1)) < 0xa9)) {
        puVar18 = (ulong *)LookupIterator::GetRootForNonJSReceiver(param_3,puVar17,0);
      }
      local_d8 = (undefined **)CONCAT44(local_d8._4_4_,3);
      uStack_d0._4_4_ = 0;
      local_c8 = 0xc0;
      local_b8 = (Isolate *)0x0;
      local_b0 = (long **)0x0;
      local_a0 = (ulong *)0x0;
      uStack_88 = 0xffffffffffffffff;
      local_90 = 0;
      local_c0 = param_3;
      local_a8 = puVar17;
      local_98 = puVar18;
      LookupIterator::Start<true>((LookupIterator *)&local_d8);
      if (local_d8._4_4_ == 4) {
        pIVar22 = local_c0 + 0xa0;
        uVar40 = *(ulong *)pIVar22;
      }
      else {
        pIVar22 = (Isolate *)Object::GetProperty((LookupIterator *)&local_d8,false);
        if (pIVar22 == (Isolate *)0x0) goto LAB_01583af0;
        uVar40 = *(ulong *)pIVar22;
      }
      if (((uVar40 & 1) == 0) ||
         (0x3f < *(ushort *)((uVar40 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar40 - 1)))) {
        pIVar22 = (Isolate *)Object::ConvertToString(param_3,pIVar22);
      }
      if (pIVar22 == (Isolate *)0x0) goto LAB_01583af0;
      iVar37 = *(int *)(*(ulong *)pIVar22 + 7);
      puVar17 = (ulong *)Object::GetProperty(param_3,*puVar45,param_3 + 0x750);
      if (puVar17 == (ulong *)0x0) goto LAB_01583af0;
      uVar40 = *puVar17;
      if ((uVar40 & 1) != 0) {
        puVar17 = (ulong *)Object::ConvertToInteger(param_3,puVar17);
        if (puVar17 == (ulong *)0x0) goto LAB_01583af0;
        uVar40 = *puVar17;
      }
      if ((uVar40 & 1) == 0) {
        uVar46 = 0;
        if (1 < (int)uVar40) {
          uVar46 = (int)uVar40 >> 1;
        }
      }
      else if (1.0 <= *(double *)(uVar40 + 3)) {
        dVar48 = (double)NEON_fminnm(*(double *)(uVar40 + 3),0x41efffffffe00000);
        uVar46 = (int)dVar48;
      }
      else {
        uVar46 = 0;
      }
      local_160 = (Zone *)&local_118;
      local_168 = (long *)0x0;
      local_178 = (long *)0x0;
      local_170 = (long *)0x0;
      uVar24 = *puVar45;
      uVar4 = uVar44;
      if (uVar46 <= uVar44) {
        uVar4 = uVar46;
      }
      if (uVar12 != 0) {
        uVar46 = 0;
        do {
          puVar17 = (ulong *)Object::GetElement(param_3,uVar24,uVar46);
          if (puVar17 == (ulong *)0x0) {
LAB_01583d78:
            uVar28 = *(ulong *)(param_3 + 0x180);
            goto LAB_01583d7c;
          }
          uVar40 = *puVar17;
          if ((((uVar40 & 1) == 0) ||
              (((int)uVar40 != *(int *)pIVar23 &&
               (0x3f < *(ushort *)((uVar40 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar40 - 1))
               )))) && (puVar17 = (ulong *)Object::ConvertToString(param_3,puVar17),
                       puVar17 == (ulong *)0x0)) goto LAB_01583d78;
          if (local_170 == local_168) {
            lVar42 = (long)local_170 - (long)local_178 >> 3;
            uVar40 = lVar42 + 1;
            if (uVar40 >> 0x1c != 0) goto LAB_01584cc8;
            uVar29 = (long)local_168 - (long)local_178 >> 2;
            if (uVar40 <= uVar29) {
              uVar40 = uVar29;
            }
            if (0x7fffffe < (ulong)((long)local_168 - (long)local_178 >> 3)) {
              uVar40 = 0xfffffff;
            }
            if (uVar40 == 0) {
              lVar20 = 0;
            }
            else {
              uVar29 = uVar40 * 8;
              lVar20 = *(long *)(local_160 + 0x10);
              if (uVar29 < (ulong)(*(long *)(local_160 + 0x18) - lVar20) ||
                  uVar29 - (*(long *)(local_160 + 0x18) - lVar20) == 0) {
                *(ulong *)(local_160 + 0x10) = lVar20 + uVar29;
              }
              else {
                lVar20 = Zone::NewExpand(local_160,uVar29);
              }
            }
            plVar43 = (long *)(lVar20 + lVar42 * 8);
            *plVar43 = (long)puVar17;
            local_168 = (long *)(lVar20 + uVar40 * 8);
            plVar31 = plVar43;
            while (local_170 != local_178) {
              local_170 = local_170 + -1;
              plVar31 = plVar31 + -1;
              *plVar31 = *local_170;
            }
          }
          else {
            *local_170 = (long)puVar17;
            plVar31 = local_178;
            plVar43 = local_170;
          }
          local_178 = plVar31;
          local_170 = plVar43 + 1;
          uVar24 = *puVar45;
          uVar46 = uVar46 + 1;
        } while (uVar46 != uVar12);
      }
      puVar17 = (ulong *)Object::GetProperty(param_3,uVar24,param_3 + 0x728);
      if (puVar17 == (ulong *)0x0) {
LAB_01583dd4:
        uVar28 = *(ulong *)(param_3 + 0x180);
LAB_01583e08:
        bVar11 = true;
      }
      else {
        uVar40 = *puVar17;
        if ((uVar40 & 1) == 0) {
          bVar11 = false;
          if (!bVar1) goto LAB_01583db4;
LAB_01583d1c:
          iVar27 = 2;
          if (!bVar11) {
            iVar27 = 3;
          }
          if ((0xfffe < uVar12) || (uVar46 = iVar27 + uVar12, 0xfffe < uVar46)) {
            puVar41 = (undefined8 *)Factory::NewRangeError((Factory *)param_3,0x132,0,0,0);
            uVar28 = Isolate::Throw(param_3,*puVar41,0);
            goto LAB_01583e08;
          }
          uVar40 = (ulong)uVar46 << 3;
          plVar43 = operator_new__(uVar40,(nothrow_t *)&std::nothrow);
          if (plVar43 == (long *)0x0) {
            plVar43 = (long *)V8::GetCurrentPlatform();
            (**(code **)(*plVar43 + 0x18))();
            plVar43 = operator_new__(uVar40,(nothrow_t *)&std::nothrow);
            if (plVar43 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
            }
          }
          if (uVar46 != 0) {
            memset(plVar43,0,uVar40);
          }
          if (uVar12 != 0) {
            uVar40 = (ulong)uVar12;
            if ((uVar12 < 4) ||
               ((plVar43 < local_178 + uVar40 && (local_178 < (long *)((long)plVar43 + uVar40 * 8)))
               )) {
              uVar29 = 0;
            }
            else {
              uVar29 = uVar40 & 0xfffffffc;
              plVar31 = local_178 + 2;
              plVar36 = (long *)((long)plVar43 + 0x10);
              uVar35 = uVar29;
              do {
                plVar10 = plVar31 + -1;
                lVar42 = plVar31[-2];
                lVar49 = plVar31[1];
                lVar20 = *plVar31;
                plVar31 = plVar31 + 4;
                uVar35 = uVar35 - 4;
                plVar36[-1] = *plVar10;
                plVar36[-2] = lVar42;
                plVar36[1] = lVar49;
                *plVar36 = lVar20;
                plVar36 = plVar36 + 4;
              } while (uVar35 != 0);
              if (uVar29 == uVar40) goto LAB_01583f88;
            }
            lVar42 = uVar40 - uVar29;
            plVar31 = local_178 + uVar29;
            plVar36 = (long *)((long)plVar43 + uVar29 * 8);
            do {
              lVar42 = lVar42 + -1;
              *plVar36 = *plVar31;
              plVar31 = plVar31 + 1;
              plVar36 = plVar36 + 1;
            } while (lVar42 != 0);
          }
LAB_01583f88:
          uVar40 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar4 << 1;
          if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar18 = *(ulong **)pIVar2;
            if (puVar18 == *(ulong **)(param_3 + 0x95a8)) {
              puVar18 = (ulong *)HandleScope::Extend(param_3);
            }
            *(ulong **)pIVar2 = puVar18 + 1;
            *puVar18 = uVar40;
          }
          else {
            puVar18 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar40);
          }
          *(ulong **)((long)plVar43 + (ulong)uVar12 * 8) = puVar18;
          *(Isolate **)((long)plVar43 + (ulong)(uVar12 + 1) * 8) = pIVar14;
          if (!bVar11) {
            *(ulong **)((long)plVar43 + (ulong)(uVar12 + 2) * 8) = puVar17;
          }
          puVar17 = (ulong *)Execution::Call(param_3,puVar16,pIVar23,uVar46,plVar43);
          if ((puVar17 != (ulong *)0x0) &&
             (((uVar40 = *puVar17, (uVar40 & 1) != 0 &&
               (*(ushort *)((uVar40 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar40 - 1)) < 0x40
               )) || (puVar17 = (ulong *)Object::ConvertToString(param_3,puVar17),
                     puVar17 != (ulong *)0x0)))) {
            operator_delete__(plVar43);
            goto joined_r0x01584058;
          }
          uVar28 = *(ulong *)(param_3 + 0x180);
          operator_delete__(plVar43);
LAB_01583d7c:
        }
        else {
          bVar11 = (int)uVar40 == *(int *)pIVar23;
          if (bVar1) goto LAB_01583d1c;
LAB_01583db4:
          if ((((uVar40 & 1) == 0) ||
              (((int)uVar40 != *(int *)pIVar23 &&
               (*(ushort *)((uVar40 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar40 - 1)) < 0xa9
               )))) && (puVar17 = (ulong *)Object::ToObjectImpl(param_3,puVar17,0),
                       puVar17 == (ulong *)0x0)) goto LAB_01583dd4;
          local_c8 = 0;
          uStack_c4 = 0;
          local_d8 = &PTR_FUN_01cc92b0;
          local_b0 = &local_178;
          local_b8 = (Isolate *)CONCAT44(local_b8._4_4_,uVar4);
          local_a0 = (ulong *)0x0;
          local_c0 = pIVar22;
          uStack_d0 = param_3;
          uVar24 = String::Flatten(param_3,pIVar14,0);
          local_c8 = (undefined4)uVar24;
          uStack_c4 = (undefined4)((ulong)uVar24 >> 0x20);
          if ((*puVar17 & 1) == 0) {
            local_a8 = (ulong *)CONCAT71(local_a8._1_7_,1);
LAB_01583eac:
            local_a0 = puVar17;
          }
          else {
            bVar11 = (int)*puVar17 != *(int *)pIVar23;
            local_a8 = (ulong *)CONCAT71(local_a8._1_7_,bVar11);
            if (bVar11) goto LAB_01583eac;
          }
          puVar17 = (ulong *)String::GetSubstitution(param_3,&local_d8,puVar15,0);
          if (puVar17 != (ulong *)0x0) {
joined_r0x01584058:
            if (uVar4 < local_20c) {
              bVar11 = false;
            }
            else {
              if ((local_20c != 0) || (pIVar22 = pIVar14, *(uint *)(*(ulong *)pIVar14 + 7) != uVar4)
                 ) {
                pIVar22 = (Isolate *)
                          Factory::NewProperSubString
                                    ((Factory *)param_3,pIVar14,local_20c,(ulong)uVar4);
              }
              IncrementalStringBuilder::AppendString((IncrementalStringBuilder *)local_150,pIVar22);
              IncrementalStringBuilder::AppendString((IncrementalStringBuilder *)local_150,puVar17);
              bVar11 = false;
              local_20c = uVar4 + iVar37;
            }
            goto joined_r0x01583e14;
          }
          uVar28 = *(ulong *)(param_3 + 0x180);
        }
        bVar11 = true;
      }
joined_r0x01583e14:
      if (local_178 != (long *)0x0) {
        local_170 = local_178;
      }
      if (param_3 != (Isolate *)0x0) goto LAB_01583afc;
    }
    if (bVar11) goto LAB_01583890;
  }
LAB_01584654:
  if (local_20c < uVar44) {
    if ((local_20c != 0) || (*(uint *)(*(ulong *)pIVar14 + 7) != uVar44)) {
      pIVar14 = (Isolate *)Factory::NewProperSubString((Factory *)param_3,pIVar14,local_20c,uVar44);
    }
    IncrementalStringBuilder::AppendString((IncrementalStringBuilder *)local_150,pIVar14);
  }
  puVar16 = (ulong *)IncrementalStringBuilder::Finish((IncrementalStringBuilder *)local_150);
  if (puVar16 == (ulong *)0x0) {
    uVar28 = *(ulong *)(param_3 + 0x180);
  }
  else {
    uVar28 = *puVar16;
  }
LAB_01583890:
  Zone::~Zone((Zone *)&local_118);
  pIVar23 = uStack_d0;
  if (param_3 != (Isolate *)0x0) goto LAB_01584c20;
LAB_01584c48:
  if (*(long *)(lVar9 + 0x28) == local_80) {
    return uVar28;
  }
LAB_01584c9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

