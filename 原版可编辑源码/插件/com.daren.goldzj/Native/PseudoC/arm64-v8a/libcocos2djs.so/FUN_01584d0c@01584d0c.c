
/* WARNING: Type propagation algorithm not settling */

ulong * FUN_01584d0c(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  byte *pbVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  long *plVar16;
  undefined8 uVar17;
  Isolate *pIVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  long lVar23;
  int *piVar24;
  Isolate *pIVar25;
  Isolate *pIVar26;
  undefined8 uVar27;
  long lVar28;
  long **pplVar29;
  CanonicalHandleScope *this;
  undefined8 uVar30;
  int iVar31;
  ulong uVar32;
  undefined **ppuVar33;
  long *plVar34;
  undefined4 uVar35;
  undefined8 *puVar36;
  ulong uVar37;
  ulong uVar38;
  long *plVar39;
  int iVar40;
  long lVar41;
  ulong uVar42;
  undefined8 *puVar43;
  uint uVar44;
  int iVar45;
  undefined8 *puVar46;
  uint uVar47;
  undefined8 *puVar48;
  int iVar49;
  double dVar50;
  long lVar51;
  uint local_25c;
  byte **local_1d0;
  byte *local_1c8;
  char *local_1c0;
  undefined8 local_1b8;
  RuntimeCallStats *local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  long *local_180;
  long *local_178;
  long *local_170;
  Zone *local_168;
  int local_160;
  int local_158 [14];
  undefined8 *local_120;
  undefined8 local_118;
  long lStack_110;
  long local_108;
  long lStack_100;
  long local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  Isolate *local_c8;
  Isolate *local_c0;
  long **local_b8;
  ulong *local_b0;
  ulong *local_a8;
  ulong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  
  lVar7 = tpidr_el0;
  local_88 = *(long *)(lVar7 + 0x28);
  local_190 = 0;
  uStack_1a8 = 0;
  local_1b0 = (RuntimeCallStats *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_1b0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_1b0,(ulong)&local_1b0 | 8,0x1e1);
  }
  if (DAT_01d47270 == (byte *)0x0) {
    plVar16 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47270 = (byte *)(**(code **)(*plVar16 + 0x10))(plVar16,"disabled-by-default-v8.runtime");
  }
  pbVar9 = DAT_01d47270;
  local_1d0 = (byte **)0x0;
  if ((*DAT_01d47270 & 5) != 0) {
    local_e0 = (undefined **)0x0;
    local_d8 = 0;
    uStack_d4 = 0;
    plVar16 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar17 = (**(code **)(*plVar16 + 0x18))
                       (plVar16,0x58,pbVar9,"V8.Runtime_Runtime_RegExpReplaceRT",0,0,0,0,0,0,0,
                        &local_e0,0);
    plVar16 = (long *)CONCAT44(uStack_d4,local_d8);
    local_d8 = 0;
    uStack_d4 = 0;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 8))();
    }
    plVar16 = (long *)local_e0;
    local_e0 = (undefined **)0x0;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 8))();
    }
    local_1d0 = &local_1c8;
    local_1c0 = "V8.Runtime_Runtime_RegExpReplaceRT";
    local_1c8 = pbVar9;
    local_1b8 = uVar17;
  }
  uVar17 = *(undefined8 *)(param_3 + 0x95a0);
  lVar6 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar32 = *param_2;
  if (((uVar32 & 1) == 0) ||
     (*(ushort *)((uVar32 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar32 - 1)) < 0xa9)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSReceiver()");
  }
  uVar32 = param_2[-1];
  if (((uVar32 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar32 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar32 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
  pIVar18 = (Isolate *)v8::internal::String::Flatten(param_3,param_2 + -1,0);
  puVar20 = param_2 + -2;
  uVar32 = *puVar20;
  if ((uVar32 & 1) == 0) {
LAB_01584ea4:
    puVar19 = (ulong *)v8::internal::Object::ConvertToString(param_3,puVar20);
LAB_01584eb4:
    if (puVar19 != (ulong *)0x0) {
      bVar1 = false;
      goto LAB_01584f08;
    }
    param_2 = *(ulong **)(param_3 + 0x180);
  }
  else {
    if ((*(byte *)((uVar32 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar32 - 1)) >> 1 & 1) == 0)
    {
      puVar19 = puVar20;
      if (0x3f < *(ushort *)((uVar32 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar32 - 1)))
      goto LAB_01584ea4;
      goto LAB_01584eb4;
    }
    puVar19 = (ulong *)0x0;
    bVar1 = true;
LAB_01584f08:
    uVar32 = v8::internal::RegExpUtils::IsUnmodifiedRegExp(param_3,param_2);
    uVar11 = uStack_d4;
    uVar35 = local_d8;
    local_d8 = SUB84(param_3,0);
    uVar10 = local_d8;
    uStack_d4 = (undefined4)((ulong)param_3 >> 0x20);
    uVar12 = uStack_d4;
    local_d8 = uVar35;
    if ((uVar32 & 1) == 0) {
      uVar32 = *(ulong *)(param_3 + 0x718);
      uVar37 = (ulong)param_3 | 7;
      local_c0 = param_3 + 0x718;
      uVar44 = *(uint *)(*(ulong *)pIVar18 + 7);
      uVar35 = 3;
      if ((*(short *)(uVar37 + *(uint *)(uVar32 - 1)) == 0x40) &&
         (uVar35 = 3, (*(byte *)(uVar32 + 7) & 1) != 0)) {
        uVar35 = 0;
      }
      local_e0 = (undefined **)CONCAT44(local_e0._4_4_,uVar35);
      uStack_d4 = 0;
      local_d0 = 0xc0;
      local_c8 = param_3;
      if ((*(ushort *)((uVar32 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar32 - 1)) & 0xffe0)
          == 0x20) {
        local_c0 = (Isolate *)v8::internal::StringTable::LookupString(param_3);
      }
      local_b8 = (long **)0x0;
      local_a8 = (ulong *)0x0;
      uStack_90 = 0xffffffffffffffff;
      local_98 = 0xffffffffffffffff;
      local_b0 = param_2;
      local_a0 = param_2;
      v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_e0);
      if (local_e0._4_4_ == 4) {
        pIVar25 = local_c8 + 0xa0;
LAB_015850a8:
        local_e0 = *(undefined ***)pIVar25;
        uVar32 = v8::internal::Object::BooleanValue((Object *)&local_e0,param_3);
        if ((uVar32 & 1) == 0) {
          uVar14 = 0;
        }
        else {
          uVar42 = *(ulong *)(param_3 + 0xab8);
          pIVar25 = param_3 + 0xab8;
          uVar35 = 3;
          if ((*(short *)(uVar37 + *(uint *)(uVar42 - 1)) == 0x40) &&
             (uVar35 = 3, (*(byte *)(uVar42 + 7) & 1) != 0)) {
            uVar35 = 0;
          }
          local_e0 = (undefined **)CONCAT44(local_e0._4_4_,uVar35);
          uStack_d4 = 0;
          local_d0 = 0xc0;
          local_c8 = param_3;
          if ((*(ushort *)((uVar42 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar42 - 1)) &
              0xffe0) == 0x20) {
            pIVar25 = (Isolate *)v8::internal::StringTable::LookupString(param_3);
          }
          local_b8 = (long **)0x0;
          local_a8 = (ulong *)0x0;
          uStack_90 = 0xffffffffffffffff;
          local_98 = 0xffffffffffffffff;
          local_c0 = pIVar25;
          local_b0 = param_2;
          local_a0 = param_2;
          v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_e0);
          if (local_e0._4_4_ == 4) {
            pIVar25 = local_c8 + 0xa0;
          }
          else {
            pIVar25 = (Isolate *)
                      v8::internal::Object::GetProperty((LookupIterator *)&local_e0,false);
            if (pIVar25 == (Isolate *)0x0) goto LAB_01585530;
          }
          local_e0 = *(undefined ***)pIVar25;
          uVar14 = v8::internal::Object::BooleanValue((Object *)&local_e0,param_3);
          lVar28 = v8::internal::RegExpUtils::SetLastIndex(param_3,param_2,0);
          if (lVar28 == 0) goto LAB_01585530;
        }
        v8::internal::Zone::Zone
                  ((Zone *)&local_120,*(AccountingAllocator **)(param_3 + 0x95d0),
                   "../../src/runtime/runtime-regexp.cc:1765");
        pIVar25 = param_3 + 0xa0;
        puVar21 = (ulong *)v8::internal::RegExpUtils::RegExpExec(param_3,param_2,pIVar18);
        if (puVar21 != (ulong *)0x0) {
          puVar46 = (undefined8 *)0x0;
          puVar43 = (undefined8 *)0x0;
          puVar48 = (undefined8 *)0x0;
          uVar42 = *puVar21;
          do {
            if (((uVar42 & 1) != 0) && ((int)uVar42 == *(int *)(param_3 + 0xb0))) {
LAB_0158553c:
              v8::internal::IncrementalStringBuilder::IncrementalStringBuilder
                        ((IncrementalStringBuilder *)local_158,param_3);
              if (puVar46 != puVar43) {
                local_25c = 0;
                goto LAB_01585584;
              }
              local_25c = 0;
              goto LAB_0158611c;
            }
            if (puVar43 == puVar48) {
              lVar28 = (long)puVar43 - (long)puVar46 >> 3;
              uVar42 = lVar28 + 1;
              if (uVar42 >> 0x1c != 0) {
LAB_01586a68:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              uVar38 = (long)puVar48 - (long)puVar46 >> 2;
              if (uVar42 <= uVar38) {
                uVar42 = uVar38;
              }
              if (0x7fffffe < (ulong)((long)puVar48 - (long)puVar46 >> 3)) {
                uVar42 = 0xfffffff;
              }
              if (uVar42 == 0) {
                lVar41 = 0;
              }
              else {
                uVar38 = uVar42 * 8;
                if (uVar38 < (ulong)(local_108 - lStack_110) ||
                    uVar38 - (local_108 - lStack_110) == 0) {
                  lVar41 = lStack_110;
                  lStack_110 = lStack_110 + uVar38;
                }
                else {
                  lVar41 = v8::internal::Zone::NewExpand((Zone *)&local_120,uVar38);
                }
              }
              puVar2 = (undefined8 *)(lVar41 + lVar28 * 8);
              puVar48 = (undefined8 *)(lVar41 + uVar42 * 8);
              *puVar2 = puVar21;
              puVar36 = puVar2;
              while (puVar43 != puVar46) {
                puVar43 = puVar43 + -1;
                puVar36 = puVar36 + -1;
                *puVar36 = *puVar43;
              }
            }
            else {
              *puVar43 = puVar21;
              puVar36 = puVar46;
              puVar2 = puVar43;
            }
            puVar46 = puVar36;
            puVar43 = puVar2 + 1;
            if ((uVar32 & 1) == 0) goto LAB_0158553c;
            if (((*puVar21 & 1) == 0) ||
               (puVar22 = puVar21, *(ushort *)(uVar37 + *(uint *)(*puVar21 - 1)) < 0xa9)) {
              puVar22 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                           (param_3,puVar21,0);
            }
            local_e0 = (undefined **)CONCAT44(local_e0._4_4_,3);
            uStack_d4 = 0;
            local_d0 = 0xc0;
            local_c0 = (Isolate *)0x0;
            local_b8 = (long **)0x0;
            local_a8 = (ulong *)0x0;
            uStack_90 = 0xffffffffffffffff;
            local_98 = 0;
            local_c8 = param_3;
            local_b0 = puVar21;
            local_a0 = puVar22;
            v8::internal::LookupIterator::Start<true>((LookupIterator *)&local_e0);
            if (local_e0._4_4_ == 4) {
              pIVar26 = local_c8 + 0xa0;
              uVar42 = *(ulong *)pIVar26;
              if ((uVar42 & 1) == 0) goto LAB_01585430;
LAB_01585418:
              if (0x3f < *(ushort *)
                          ((uVar42 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar42 - 1)))
              goto LAB_01585430;
            }
            else {
              pIVar26 = (Isolate *)
                        v8::internal::Object::GetProperty((LookupIterator *)&local_e0,false);
              if (pIVar26 == (Isolate *)0x0) break;
              uVar42 = *(ulong *)pIVar26;
              if ((uVar42 & 1) != 0) goto LAB_01585418;
LAB_01585430:
              pIVar26 = (Isolate *)v8::internal::Object::ConvertToString(param_3);
            }
            if ((pIVar26 == (Isolate *)0x0) ||
               (((*(int *)(*(ulong *)pIVar26 + 7) == 0 &&
                 (lVar28 = v8::internal::RegExpUtils::SetAdvancedStringIndex
                                     (param_3,param_2,pIVar18,uVar14 & 1), lVar28 == 0)) ||
                (puVar21 = (ulong *)v8::internal::RegExpUtils::RegExpExec
                                              (param_3,param_2,pIVar18,pIVar25),
                puVar21 == (ulong *)0x0)))) break;
            uVar42 = *puVar21;
          } while( true );
        }
        param_2 = *(ulong **)(param_3 + 0x180);
        goto LAB_01585520;
      }
      pIVar25 = (Isolate *)v8::internal::Object::GetProperty((LookupIterator *)&local_e0,false);
      if (pIVar25 != (Isolate *)0x0) goto LAB_015850a8;
LAB_01585530:
      param_2 = *(ulong **)(param_3 + 0x180);
    }
    else {
      uStack_d4 = uVar11;
      if (bVar1) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!functional_replace");
      }
      uVar44 = *(uint *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) + 0xf);
      puVar20 = (ulong *)v8::internal::String::Flatten(param_3,puVar19,0);
      uVar32 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
      uVar32 = uVar32 | *(uint *)((uVar32 | *(uint *)((uVar32 | *(uint *)(*(ulong *)(param_3 +
                                                                                    0x2bc8) - 1)) +
                                                     0x13)) + 0x247);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar19 = *(ulong **)(param_3 + 0x95a0);
        if (puVar19 == *(ulong **)(param_3 + 0x95a8)) {
          puVar19 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar19 + 1;
        *puVar19 = uVar32;
        if ((uVar44 >> 1 & 1) != 0) goto LAB_01585194;
LAB_01584f94:
        if ((uVar44 >> 4 & 1) != 0) {
          uVar14 = *(uint *)(*param_2 + 0x17);
          uVar32 = *param_2 & 0xffffffff00000000 | (ulong)uVar14;
          if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar21 = *(ulong **)(param_3 + 0x95a0);
            if (puVar21 == *(ulong **)(param_3 + 0x95a8)) {
              puVar21 = (ulong *)v8::internal::HandleScope::Extend(param_3);
            }
            *(ulong **)(param_3 + 0x95a0) = puVar21 + 1;
            *puVar21 = uVar32;
            if ((uVar14 & 1) != 0) goto LAB_01585fac;
LAB_01584fc4:
            uVar32 = (ulong)(((uint)(uVar32 >> 1) & 0x7fffffff & ((int)uVar32 >> 0x1f ^ 0xffffffffU)
                             ) << 1);
            if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar21 = *(ulong **)(param_3 + 0x95a0);
              if (puVar21 == *(ulong **)(param_3 + 0x95a8)) {
                puVar21 = (ulong *)v8::internal::HandleScope::Extend(param_3);
              }
              *(ulong **)(param_3 + 0x95a0) = puVar21 + 1;
              *puVar21 = uVar32;
            }
            else {
              puVar21 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar32);
            }
          }
          else {
            puVar21 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar32);
            uVar32 = *puVar21;
            if ((uVar32 & 1) == 0) goto LAB_01584fc4;
LAB_01585fac:
            puVar21 = (ulong *)v8::internal::Object::ConvertToLength(param_3,puVar21);
          }
          if (puVar21 != (ulong *)0x0) {
            uVar32 = *puVar21;
            if ((uVar32 & 1) == 0) {
              uVar14 = 0;
              if (1 < (int)uVar32) {
                uVar14 = (int)uVar32 >> 1;
              }
            }
            else {
              if (*(double *)(uVar32 + 3) < 1.0) goto LAB_0158526c;
              dVar50 = (double)NEON_fminnm(*(double *)(uVar32 + 3),0x41efffffffe00000);
              uVar14 = (int)dVar50;
            }
            goto LAB_015861f4;
          }
          goto LAB_01586968;
        }
LAB_0158526c:
        uVar14 = 0;
LAB_015861f4:
        uVar32 = *(ulong *)(param_3 + 0xb0);
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          pIVar25 = *(Isolate **)(param_3 + 0x95a0);
          if (pIVar25 == *(Isolate **)(param_3 + 0x95a8)) {
            pIVar25 = (Isolate *)v8::internal::HandleScope::Extend(param_3);
          }
          *(Isolate **)(param_3 + 0x95a0) = pIVar25 + 8;
          *(ulong *)pIVar25 = uVar32;
        }
        else {
          pIVar25 = (Isolate *)
                    v8::internal::CanonicalHandleScope::Lookup
                              (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar32);
        }
        if ((uVar14 <= *(uint *)(*(ulong *)pIVar18 + 7)) &&
           (pIVar25 = (Isolate *)v8::internal::RegExp::Exec(param_3,param_2,pIVar18,uVar14,puVar19),
           pIVar25 == (Isolate *)0x0)) goto LAB_01586968;
        uVar32 = *(ulong *)pIVar25;
        if (((uVar32 & 1) == 0) || ((int)uVar32 != *(int *)(param_3 + 0xb0))) {
          uVar14 = *(uint *)(uVar32 + 0x17);
          iVar45 = *(int *)(uVar32 + 0x13) >> 1;
          if ((uVar44 >> 4 & 1) != 0) {
            *(uint *)(*param_2 + 0x17) = uVar14 & 0xfffffffe;
          }
          v8::internal::IncrementalStringBuilder::IncrementalStringBuilder
                    ((IncrementalStringBuilder *)&local_120,param_3);
          pIVar26 = pIVar18;
          if (*(int *)(*(ulong *)pIVar18 + 7) != iVar45) {
            pIVar26 = (Isolate *)
                      v8::internal::Factory::NewProperSubString((Factory *)param_3,pIVar18,0,iVar45)
            ;
          }
          v8::internal::IncrementalStringBuilder::AppendString
                    ((IncrementalStringBuilder *)&local_120,pIVar26);
          if (0 < *(int *)(*puVar20 + 7)) {
            local_e0 = &PTR_FUN_01cc9210;
            local_b8 = (long **)0x0;
            local_d8 = uVar10;
            uStack_d4 = uVar12;
            local_c8 = pIVar25;
            uVar27 = v8::internal::String::Flatten(param_3,pIVar18,0);
            local_d0 = (undefined4)uVar27;
            uStack_cc = (undefined4)((ulong)uVar27 >> 0x20);
            uVar44 = *(uint *)(*param_2 + 0xb);
            uVar32 = *param_2 & 0xffffffff00000000;
            if ((((uVar44 & 1) == 0) || (uVar44 != *(uint *)(uVar32 + 0xa0))) &&
               (((*(uint *)((uVar32 | uVar44) + 7) & 0xfffffffe) == 4 &&
                (uVar44 = *(uint *)((uVar32 | uVar44) + 0x2b), (uVar44 & 1) != 0)))) {
              plVar16 = (long *)(uVar32 | uVar44);
              uVar44 = *(ushort *)((uVar32 | 7) + (ulong)*(uint *)((long)plVar16 + -1)) - 0x76;
              local_c0 = (Isolate *)CONCAT71(local_c0._1_7_,uVar44 < 0xf);
              if (uVar44 < 0xf) {
                if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                  pplVar29 = *(long ***)(param_3 + 0x95a0);
                  if (pplVar29 == *(long ***)(param_3 + 0x95a8)) {
                    pplVar29 = (long **)v8::internal::HandleScope::Extend(param_3);
                  }
                  *(long ***)(param_3 + 0x95a0) = pplVar29 + 1;
                  *pplVar29 = plVar16;
                  local_b8 = pplVar29;
                }
                else {
                  local_b8 = (long **)v8::internal::CanonicalHandleScope::Lookup
                                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),
                                                 (ulong)plVar16);
                }
              }
            }
            else {
              local_c0 = (Isolate *)((ulong)local_c0._1_7_ << 8);
            }
            lVar28 = v8::internal::String::GetSubstitution(param_3,&local_e0,puVar20,0);
            if (lVar28 == 0) goto LAB_01586968;
            v8::internal::IncrementalStringBuilder::AppendString
                      ((IncrementalStringBuilder *)&local_120,lVar28);
          }
          iVar45 = (int)uVar14 >> 1;
          if (iVar45 != 0) {
            pIVar18 = (Isolate *)
                      v8::internal::Factory::NewProperSubString
                                ((Factory *)param_3,pIVar18,iVar45,
                                 *(undefined4 *)(*(ulong *)pIVar18 + 7));
          }
          v8::internal::IncrementalStringBuilder::AppendString
                    ((IncrementalStringBuilder *)&local_120,pIVar18);
          pIVar18 = (Isolate *)
                    v8::internal::IncrementalStringBuilder::Finish
                              ((IncrementalStringBuilder *)&local_120);
        }
        else if ((uVar44 >> 4 & 1) != 0) {
          *(undefined4 *)(*param_2 + 0x17) = 0;
        }
joined_r0x015863e0:
        if (pIVar18 != (Isolate *)0x0) {
          param_2 = *(ulong **)pIVar18;
          goto LAB_01586970;
        }
      }
      else {
        puVar19 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar32);
        if ((uVar44 >> 1 & 1) == 0) goto LAB_01584f94;
LAB_01585194:
        lVar28 = v8::internal::RegExpUtils::SetLastIndex(param_3,param_2,0);
        if (lVar28 != 0) {
          if (v8::internal::FLAG_regexp_tier_up != '\0') {
            ppuVar33 = (undefined **)*param_2;
            uVar44 = *(uint *)((long)ppuVar33 + 0xb);
            if (((((uVar44 & 1) == 0) ||
                 (uVar44 != *(uint *)(((ulong)ppuVar33 & 0xffffffff00000000) + 0xa0))) &&
                ((*(uint *)(((ulong)ppuVar33 & 0xffffffff00000000 | (ulong)uVar44) + 7) & 0xfffffffe
                 ) == 4)) &&
               (local_e0 = ppuVar33,
               v8::internal::JSRegExp::MarkTierUpForNextExec((JSRegExp *)&local_e0),
               v8::internal::FLAG_trace_regexp_tier_up != '\0')) {
              v8::internal::PrintF
                        ("Forcing tier-up of JSRegExp object %p in RegExpReplace\n",*param_2);
            }
          }
          if (*(int *)(*puVar20 + 7) == 0) {
            uVar32 = *(ulong *)pIVar18;
            uVar37 = uVar32 & 0xffffffff00000000 | 7;
            uVar44 = *(uint *)(*param_2 + 0xb);
            uVar42 = *param_2 & 0xffffffff00000000;
            if ((*(byte *)(uVar37 + *(uint *)(uVar32 - 1)) >> 3 & 1) == 0) {
              if ((((uVar44 & 1) == 0) || (uVar44 != *(uint *)(uVar42 + 0xa0))) &&
                 ((*(uint *)((uVar42 | uVar44) + 7) & 0xfffffffe) == 2)) {
LAB_015860f0:
                if ((*(byte *)(uVar37 + *(uint *)(uVar32 - 1)) >> 3 & 1) == 0) {
                  uVar32 = FUN_0158791c();
                }
                else {
                  uVar32 = FUN_01587700(param_3,pIVar18,param_2,param_3 + 200,puVar19);
                }
                this = *(CanonicalHandleScope **)(param_3 + 0x95b8);
                goto joined_r0x01586874;
              }
              v8::internal::RegExpGlobalCache::RegExpGlobalCache
                        ((RegExpGlobalCache *)&local_e0,param_2,pIVar18,param_3);
              if ((int)local_e0 < 0) {
LAB_0158651c:
                pIVar25 = param_3 + 0x180;
                goto LAB_01586860;
              }
              piVar24 = (int *)v8::internal::RegExpGlobalCache::FetchNext
                                         ((RegExpGlobalCache *)&local_e0);
              if (piVar24 == (int *)0x0) {
LAB_015865b8:
                pIVar25 = param_3 + 0x180;
                if (-1 < (int)local_e0) {
                  pIVar25 = pIVar18;
                }
                goto LAB_01586860;
              }
              uVar44 = *(uint *)(*param_2 + 0xb);
              uVar32 = *param_2 & 0xffffffff00000000;
              if (((uVar44 & 1) != 0) && (uVar44 == *(uint *)(uVar32 + 0xa0))) goto LAB_01586a80;
              uVar32 = uVar32 | uVar44;
              iVar45 = *(int *)(uVar32 + 7) >> 1;
              if (iVar45 == 1) {
                iVar45 = 0;
              }
              else {
                if (iVar45 != 2) goto LAB_01586a80;
                iVar45 = *(int *)(uVar32 + 0x27) >> 1;
              }
              iVar15 = *(int *)(*(ulong *)pIVar18 + 7);
              iVar31 = iVar15 + (*piVar24 - piVar24[1]);
              if (iVar31 == 0) {
LAB_0158679c:
                pIVar25 = param_3 + 200;
              }
              else {
                pIVar25 = (Isolate *)
                          v8::internal::Factory::NewRawTwoByteString((Factory *)param_3,iVar31,0);
                if (pIVar25 == (Isolate *)0x0) {
LAB_01586a98:
                    /* WARNING: Subroutine does not return */
                  V8_Fatal("Check failed: %s.","(location_) != nullptr");
                }
                iVar40 = 0;
                iVar49 = 0;
                do {
                  iVar4 = *piVar24;
                  iVar5 = piVar24[1];
                  if (iVar49 < iVar4) {
                    v8::internal::String::WriteToFlat<unsigned_short>
                              (*(ulong *)pIVar18,*(ulong *)pIVar25 + (long)iVar40 * 2 + 0xb,iVar49,
                               iVar4);
                    iVar40 = (iVar40 - iVar49) + iVar4;
                  }
                  piVar24 = (int *)v8::internal::RegExpGlobalCache::FetchNext
                                             ((RegExpGlobalCache *)&local_e0);
                  iVar49 = iVar5;
                } while (piVar24 != (int *)0x0);
                if ((int)local_e0 < 0) {
LAB_01586858:
                  pIVar25 = param_3 + 0x180;
                }
                else {
                  uVar27 = v8::internal::RegExpGlobalCache::LastSuccessfulMatch
                                     ((RegExpGlobalCache *)&local_e0);
                  v8::internal::RegExp::SetLastMatchInfo(param_3,puVar19,pIVar18,iVar45,uVar27);
                  if (iVar15 - iVar5 != 0 && iVar5 <= iVar15) {
                    v8::internal::String::WriteToFlat<unsigned_short>
                              (*(ulong *)pIVar18,*(ulong *)pIVar25 + (long)iVar40 * 2 + 0xb,iVar5,
                               iVar15);
                    iVar40 = (iVar15 - iVar5) + iVar40;
                  }
                  if (iVar40 == 0) goto LAB_0158679c;
                  uVar44 = iVar40 * 2 + 0xfU & 0xfffffffc;
                  *(int *)(*(ulong *)pIVar25 + 7) = iVar40;
                  uVar32 = *(ulong *)pIVar25;
                  iVar45 = (iVar31 * 2 + 0xfU & 0xfffffffc) - uVar44;
                  if (iVar45 == 0) goto LAB_01586864;
LAB_01586828:
                  uVar37 = v8::internal::Heap::IsLargeObject(uVar32);
                  if ((uVar37 & 1) == 0) {
                    v8::internal::Heap::CreateFillerObjectAt
                              ((Heap *)(param_3 + 0x8850),uVar32 + (long)(int)uVar44 + -1,iVar45,1,1
                              );
                  }
                }
              }
LAB_01586860:
              uVar32 = *(ulong *)pIVar25;
            }
            else {
              if ((((uVar44 & 1) == 0) || (uVar44 != *(uint *)(uVar42 + 0xa0))) &&
                 ((*(uint *)((uVar42 | uVar44) + 7) & 0xfffffffe) == 2)) goto LAB_015860f0;
              v8::internal::RegExpGlobalCache::RegExpGlobalCache
                        ((RegExpGlobalCache *)&local_e0,param_2,pIVar18,param_3);
              if ((int)local_e0 < 0) goto LAB_0158651c;
              piVar24 = (int *)v8::internal::RegExpGlobalCache::FetchNext
                                         ((RegExpGlobalCache *)&local_e0);
              if (piVar24 == (int *)0x0) goto LAB_015865b8;
              uVar44 = *(uint *)(*param_2 + 0xb);
              uVar32 = *param_2 & 0xffffffff00000000;
              if (((uVar44 & 1) != 0) && (uVar44 == *(uint *)(uVar32 + 0xa0))) goto LAB_01586a80;
              uVar32 = uVar32 | uVar44;
              iVar45 = *(int *)(uVar32 + 7) >> 1;
              if (iVar45 == 1) {
                iVar45 = 0;
              }
              else {
                if (iVar45 != 2) goto LAB_01586a80;
                iVar45 = *(int *)(uVar32 + 0x27) >> 1;
              }
              iVar15 = *(int *)(*(ulong *)pIVar18 + 7);
              iVar31 = iVar15 + (*piVar24 - piVar24[1]);
              if (iVar31 == 0) goto LAB_0158679c;
              pIVar25 = (Isolate *)
                        v8::internal::Factory::NewRawOneByteString((Factory *)param_3,iVar31,0);
              if (pIVar25 == (Isolate *)0x0) goto LAB_01586a98;
              iVar40 = 0;
              iVar49 = 0;
              do {
                iVar4 = *piVar24;
                iVar5 = piVar24[1];
                if (iVar49 < iVar4) {
                  v8::internal::String::WriteToFlat<unsigned_char>
                            (*(ulong *)pIVar18,*(ulong *)pIVar25 + (long)iVar40 + 0xb,iVar49,iVar4);
                  iVar40 = (iVar40 - iVar49) + iVar4;
                }
                piVar24 = (int *)v8::internal::RegExpGlobalCache::FetchNext
                                           ((RegExpGlobalCache *)&local_e0);
                iVar49 = iVar5;
              } while (piVar24 != (int *)0x0);
              if ((int)local_e0 < 0) goto LAB_01586858;
              uVar27 = v8::internal::RegExpGlobalCache::LastSuccessfulMatch
                                 ((RegExpGlobalCache *)&local_e0);
              v8::internal::RegExp::SetLastMatchInfo(param_3,puVar19,pIVar18,iVar45,uVar27);
              if (iVar15 - iVar5 != 0 && iVar5 <= iVar15) {
                v8::internal::String::WriteToFlat<unsigned_char>
                          (*(ulong *)pIVar18,*(ulong *)pIVar25 + (long)iVar40 + 0xb,iVar5,iVar15);
                iVar40 = (iVar15 - iVar5) + iVar40;
              }
              if (iVar40 == 0) goto LAB_0158679c;
              uVar44 = iVar40 + 0xfU & 0xfffffffc;
              *(int *)(*(ulong *)pIVar25 + 7) = iVar40;
              uVar32 = *(ulong *)pIVar25;
              iVar45 = (iVar31 + 0xfU & 0xfffffffc) - uVar44;
              if (iVar45 != 0) goto LAB_01586828;
            }
LAB_01586864:
            v8::internal::RegExpGlobalCache::~RegExpGlobalCache((RegExpGlobalCache *)&local_e0);
            this = *(CanonicalHandleScope **)(param_3 + 0x95b8);
          }
          else {
            uVar44 = *(uint *)(*param_2 + 0xb);
            uVar32 = *param_2 & 0xffffffff00000000;
            if (((uVar44 & 1) != 0) && (uVar44 == *(uint *)(uVar32 + 0xa0))) {
LAB_01586a80:
                    /* WARNING: Subroutine does not return */
              V8_Fatal("unreachable code");
            }
            uVar37 = uVar32 | uVar44;
            iVar45 = *(int *)(uVar37 + 7) >> 1;
            if (iVar45 == 1) {
              iVar45 = 0;
            }
            else {
              if (iVar45 != 2) goto LAB_01586a80;
              iVar45 = *(int *)(uVar37 + 0x27) >> 1;
            }
            iVar31 = *(int *)(*(ulong *)pIVar18 + 7);
            if (((uVar44 & 1) == 0) || (uVar44 != *(uint *)(uVar32 + 0xa0))) {
              iVar15 = *(int *)(uVar37 + 7) >> 1;
              if (iVar15 != 2) goto LAB_01585ed0;
              iVar15 = v8::internal::RegExp::IrregexpPrepare(param_3,param_2,pIVar18);
              if (iVar15 != -1) {
                iVar15 = 2;
                goto LAB_01585ed0;
              }
              uVar32 = *(ulong *)(param_3 + 0x180);
            }
            else {
              iVar15 = 0;
LAB_01585ed0:
              v8::internal::Zone::Zone
                        ((Zone *)&local_e0,*(AccountingAllocator **)(param_3 + 0x95d0),
                         "../../src/runtime/runtime-regexp.cc:624");
              lStack_110 = 0;
              local_118 = 0;
              lStack_100 = 0;
              local_108 = 0;
              uStack_f0 = 0;
              local_f8 = 0;
              local_120 = &local_e0;
              local_e8 = &local_e0;
              uVar32 = v8::internal::CompiledReplacement::Compile
                                 ((CompiledReplacement *)&local_120,param_3,param_2,puVar20,iVar45,
                                  iVar31);
              if ((iVar15 == 1) && ((uVar32 & 1) != 0)) {
                if (((*(byte *)((*(ulong *)pIVar18 & 0xffffffff00000000 | 7) +
                               (ulong)*(uint *)(*(ulong *)pIVar18 - 1)) >> 3 & 1) == 0) ||
                   ((*(byte *)((*puVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar20 - 1))
                     >> 3 & 1) == 0)) {
                  uVar32 = FUN_0158791c(param_3,pIVar18,param_2,puVar20,puVar19);
                }
                else {
                  uVar32 = FUN_01587700(param_3,pIVar18,param_2,puVar20,puVar19);
                }
              }
              else {
                v8::internal::RegExpGlobalCache::RegExpGlobalCache
                          ((RegExpGlobalCache *)local_158,param_2,pIVar18,param_3);
                if (local_158[0] < 0) {
                  uVar32 = *(ulong *)(param_3 + 0x180);
                }
                else {
                  piVar24 = (int *)v8::internal::RegExpGlobalCache::FetchNext
                                             ((RegExpGlobalCache *)local_158);
                  if (piVar24 == (int *)0x0) {
                    if (local_158[0] < 0) {
                      uVar32 = *(ulong *)(param_3 + 0x180);
                    }
                    else {
                      uVar32 = *(ulong *)pIVar18;
                    }
                  }
                  else {
                    v8::internal::ReplacementStringBuilder::ReplacementStringBuilder
                              ((ReplacementStringBuilder *)&local_180,param_3 + 0x8850,pIVar18,
                               (int)local_118 * 4 + 5);
                    uVar37 = 0;
                    do {
                      iVar15 = *piVar24;
                      uVar44 = piVar24[1];
                      uVar42 = (ulong)uVar44;
                      uVar47 = (uint)uVar37;
                      uVar14 = iVar15 - uVar47;
                      if (uVar14 != 0 && (int)uVar47 <= iVar15) {
                        v8::internal::ReplacementStringBuilder::EnsureCapacity
                                  ((ReplacementStringBuilder *)&local_180,2);
                        if ((uVar47 >> 0x13 == 0) && (uVar14 < 0x800)) {
                          uVar37 = (ulong)(uVar14 | uVar47 << 0xb);
                        }
                        else {
                          v8::internal::FixedArrayBuilder::Add
                                    ((FixedArrayBuilder *)&local_178,
                                     -(ulong)(-uVar14 >> 0x1f) & 0xfffffffe00000000 |
                                     (ulong)-uVar14 << 1);
                        }
                        v8::internal::FixedArrayBuilder::Add
                                  ((FixedArrayBuilder *)&local_178,
                                   -(uVar37 >> 0x1f) & 0xfffffffe00000000 | uVar37 << 1);
                        iVar40 = local_160 + uVar14;
                        bVar1 = local_160 <= (int)(0xffffff0 - uVar14);
                        local_160 = 0x7fffffff;
                        if (bVar1) {
                          local_160 = iVar40;
                        }
                      }
                      if ((uVar32 & 1) == 0) {
                        v8::internal::CompiledReplacement::Apply
                                  ((CompiledReplacement *)&local_120,
                                   (ReplacementStringBuilder *)&local_180,iVar15,uVar44,piVar24);
                      }
                      else {
                        v8::internal::ReplacementStringBuilder::AddString
                                  ((ReplacementStringBuilder *)&local_180,puVar20);
                      }
                      piVar24 = (int *)v8::internal::RegExpGlobalCache::FetchNext
                                                 ((RegExpGlobalCache *)local_158);
                      uVar37 = uVar42;
                    } while (piVar24 != (int *)0x0);
                    if (local_158[0] < 0) {
LAB_01586910:
                      pIVar18 = param_3 + 0x180;
                    }
                    else {
                      uVar14 = iVar31 - uVar44;
                      if (uVar14 != 0 && (int)uVar44 <= iVar31) {
                        v8::internal::ReplacementStringBuilder::EnsureCapacity
                                  ((ReplacementStringBuilder *)&local_180,2);
                        if ((uVar44 >> 0x13 == 0) && (uVar14 < 0x800)) {
                          uVar42 = (ulong)(uVar14 | uVar44 << 0xb);
                        }
                        else {
                          v8::internal::FixedArrayBuilder::Add
                                    ((FixedArrayBuilder *)&local_178,
                                     -(ulong)(-uVar14 >> 0x1f) & 0xfffffffe00000000 |
                                     (ulong)-uVar14 << 1);
                        }
                        v8::internal::FixedArrayBuilder::Add
                                  ((FixedArrayBuilder *)&local_178,
                                   -(uVar42 >> 0x1f) & 0xfffffffe00000000 | uVar42 << 1);
                        iVar31 = local_160 + uVar14;
                        bVar1 = local_160 <= (int)(0xffffff0 - uVar14);
                        local_160 = 0x7fffffff;
                        if (bVar1) {
                          local_160 = iVar31;
                        }
                      }
                      uVar27 = v8::internal::RegExpGlobalCache::LastSuccessfulMatch
                                         ((RegExpGlobalCache *)local_158);
                      v8::internal::RegExp::SetLastMatchInfo(param_3,puVar19,pIVar18,iVar45,uVar27);
                      pIVar18 = (Isolate *)
                                v8::internal::ReplacementStringBuilder::ToString
                                          ((ReplacementStringBuilder *)&local_180);
                      if (pIVar18 == (Isolate *)0x0) goto LAB_01586910;
                    }
                    uVar32 = *(ulong *)pIVar18;
                  }
                }
                v8::internal::RegExpGlobalCache::~RegExpGlobalCache((RegExpGlobalCache *)local_158);
              }
              if (lStack_100 != 0) {
                local_f8 = lStack_100;
              }
              v8::internal::Zone::~Zone((Zone *)&local_e0);
            }
            if (((uVar32 & 1) == 0) ||
               (0x3f < *(ushort *)((uVar32 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar32 - 1))
               )) goto LAB_01586968;
            this = *(CanonicalHandleScope **)(param_3 + 0x95b8);
          }
joined_r0x01586874:
          if (this == (CanonicalHandleScope *)0x0) {
            pIVar18 = *(Isolate **)(param_3 + 0x95a0);
            if (pIVar18 == *(Isolate **)(param_3 + 0x95a8)) {
              pIVar18 = (Isolate *)v8::internal::HandleScope::Extend(param_3);
            }
            *(Isolate **)(param_3 + 0x95a0) = pIVar18 + 8;
            *(ulong *)pIVar18 = uVar32;
          }
          else {
            pIVar18 = (Isolate *)v8::internal::CanonicalHandleScope::Lookup(this,uVar32);
          }
          goto joined_r0x015863e0;
        }
      }
LAB_01586968:
      param_2 = *(ulong **)(param_3 + 0x180);
    }
  }
  goto LAB_01586970;
  while (puVar46 = puVar46 + 1, puVar46 != puVar43) {
LAB_01585584:
    uVar27 = *(undefined8 *)(param_3 + 0x95a0);
    lVar28 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    puVar21 = (ulong *)v8::internal::Object::GetProperty(param_3,*puVar46,param_3 + 0x7b8);
    if (puVar21 == (ulong *)0x0) {
LAB_01585794:
      param_2 = *(ulong **)(param_3 + 0x180);
      bVar13 = true;
LAB_015857a0:
      *(undefined8 *)(param_3 + 0x95a0) = uVar27;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar28) {
        *(long *)(param_3 + 0x95a8) = lVar28;
        v8::internal::HandleScope::DeleteExtensions(param_3);
      }
    }
    else {
      uVar32 = *puVar21;
      if ((uVar32 & 1) == 0) {
        uVar32 = (ulong)(((uint)(uVar32 >> 1) & 0x7fffffff & ((int)uVar32 >> 0x1f ^ 0xffffffffU)) <<
                        1);
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar21 = *(ulong **)(param_3 + 0x95a0);
          if (puVar21 == *(ulong **)(param_3 + 0x95a8)) {
            puVar21 = (ulong *)v8::internal::HandleScope::Extend(param_3);
          }
          *(ulong **)(param_3 + 0x95a0) = puVar21 + 1;
          *puVar21 = uVar32;
        }
        else {
          puVar21 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar32);
        }
      }
      else {
        puVar21 = (ulong *)v8::internal::Object::ConvertToLength(param_3,puVar21);
      }
      if (puVar21 == (ulong *)0x0) goto LAB_01585794;
      uVar32 = *puVar21;
      if ((uVar32 & 1) == 0) {
        uVar14 = 0;
        if (1 < (int)uVar32) {
          uVar14 = (int)uVar32 >> 1;
        }
      }
      else if (1.0 <= *(double *)(uVar32 + 3)) {
        dVar50 = (double)NEON_fminnm(*(double *)(uVar32 + 3),0x41efffffffe00000);
        uVar14 = (int)dVar50;
      }
      else {
        uVar14 = 0;
      }
      puVar21 = (ulong *)*puVar46;
      if (((*puVar21 & 1) == 0) ||
         (puVar22 = puVar21, *(ushort *)(uVar37 + *(uint *)(*puVar21 - 1)) < 0xa9)) {
        puVar22 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver(param_3,puVar21,0);
      }
      local_e0 = (undefined **)CONCAT44(local_e0._4_4_,3);
      uStack_d4 = 0;
      local_d0 = 0xc0;
      local_c0 = (Isolate *)0x0;
      local_b8 = (long **)0x0;
      local_a8 = (ulong *)0x0;
      uStack_90 = 0xffffffffffffffff;
      local_98 = 0;
      local_c8 = param_3;
      local_b0 = puVar21;
      local_a0 = puVar22;
      v8::internal::LookupIterator::Start<true>((LookupIterator *)&local_e0);
      if (local_e0._4_4_ == 4) {
        pIVar26 = local_c8 + 0xa0;
        uVar32 = *(ulong *)pIVar26;
      }
      else {
        pIVar26 = (Isolate *)v8::internal::Object::GetProperty((LookupIterator *)&local_e0,false);
        if (pIVar26 == (Isolate *)0x0) goto LAB_01585794;
        uVar32 = *(ulong *)pIVar26;
      }
      if (((uVar32 & 1) == 0) ||
         (0x3f < *(ushort *)((uVar32 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar32 - 1)))) {
        pIVar26 = (Isolate *)v8::internal::Object::ConvertToString(param_3,pIVar26);
      }
      if (pIVar26 == (Isolate *)0x0) goto LAB_01585794;
      iVar45 = *(int *)(*(ulong *)pIVar26 + 7);
      puVar21 = (ulong *)v8::internal::Object::GetProperty(param_3,*puVar46,param_3 + 0x750);
      if (puVar21 == (ulong *)0x0) goto LAB_01585794;
      uVar32 = *puVar21;
      if ((uVar32 & 1) != 0) {
        puVar21 = (ulong *)v8::internal::Object::ConvertToInteger(param_3,puVar21);
        if (puVar21 == (ulong *)0x0) goto LAB_01585794;
        uVar32 = *puVar21;
      }
      if ((uVar32 & 1) == 0) {
        uVar47 = 0;
        if (1 < (int)uVar32) {
          uVar47 = (int)uVar32 >> 1;
        }
      }
      else if (1.0 <= *(double *)(uVar32 + 3)) {
        dVar50 = (double)NEON_fminnm(*(double *)(uVar32 + 3),0x41efffffffe00000);
        uVar47 = (int)dVar50;
      }
      else {
        uVar47 = 0;
      }
      local_168 = (Zone *)&local_120;
      local_170 = (long *)0x0;
      local_180 = (long *)0x0;
      local_178 = (long *)0x0;
      uVar30 = *puVar46;
      uVar3 = uVar44;
      if (uVar47 <= uVar44) {
        uVar3 = uVar47;
      }
      if (uVar14 != 0) {
        uVar47 = 0;
        do {
          puVar21 = (ulong *)v8::internal::Object::GetElement(param_3,uVar30,uVar47);
          if (puVar21 == (ulong *)0x0) {
LAB_01585a24:
            param_2 = *(ulong **)(param_3 + 0x180);
            goto LAB_01585a30;
          }
          uVar32 = *puVar21;
          if ((((uVar32 & 1) == 0) ||
              (((int)uVar32 != *(int *)pIVar25 &&
               (0x3f < *(ushort *)((uVar32 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar32 - 1))
               )))) && (puVar21 = (ulong *)v8::internal::Object::ConvertToString(param_3,puVar21),
                       puVar21 == (ulong *)0x0)) goto LAB_01585a24;
          if (local_178 == local_170) {
            lVar41 = (long)local_178 - (long)local_180 >> 3;
            uVar32 = lVar41 + 1;
            if (uVar32 >> 0x1c != 0) goto LAB_01586a68;
            uVar42 = (long)local_170 - (long)local_180 >> 2;
            if (uVar32 <= uVar42) {
              uVar32 = uVar42;
            }
            if (0x7fffffe < (ulong)((long)local_170 - (long)local_180 >> 3)) {
              uVar32 = 0xfffffff;
            }
            if (uVar32 == 0) {
              lVar23 = 0;
            }
            else {
              uVar42 = uVar32 * 8;
              lVar23 = *(long *)(local_168 + 0x10);
              if (uVar42 < (ulong)(*(long *)(local_168 + 0x18) - lVar23) ||
                  uVar42 - (*(long *)(local_168 + 0x18) - lVar23) == 0) {
                *(ulong *)(local_168 + 0x10) = lVar23 + uVar42;
              }
              else {
                lVar23 = v8::internal::Zone::NewExpand(local_168,uVar42);
              }
            }
            plVar16 = (long *)(lVar23 + lVar41 * 8);
            *plVar16 = (long)puVar21;
            local_170 = (long *)(lVar23 + uVar32 * 8);
            plVar34 = plVar16;
            while (local_178 != local_180) {
              local_178 = local_178 + -1;
              plVar34 = plVar34 + -1;
              *plVar34 = *local_178;
            }
          }
          else {
            *local_178 = (long)puVar21;
            plVar34 = local_180;
            plVar16 = local_178;
          }
          local_180 = plVar34;
          local_178 = plVar16 + 1;
          uVar30 = *puVar46;
          uVar47 = uVar47 + 1;
        } while (uVar47 != uVar14);
      }
      puVar21 = (ulong *)v8::internal::Object::GetProperty(param_3,uVar30,param_3 + 0x728);
      if (puVar21 == (ulong *)0x0) {
LAB_01585a84:
        param_2 = *(ulong **)(param_3 + 0x180);
LAB_01585ab8:
        bVar13 = true;
      }
      else {
        uVar32 = *puVar21;
        if ((uVar32 & 1) == 0) {
          bVar13 = false;
          if (bVar1) goto LAB_015859b0;
LAB_01585a64:
          if ((((uVar32 & 1) == 0) ||
              (((int)uVar32 != *(int *)pIVar25 &&
               (*(ushort *)((uVar32 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar32 - 1)) < 0xa9
               )))) && (puVar21 = (ulong *)v8::internal::Object::ToObjectImpl(param_3,puVar21,0),
                       puVar21 == (ulong *)0x0)) goto LAB_01585a84;
          local_d0 = 0;
          uStack_cc = 0;
          local_e0 = &PTR_FUN_01cc92b0;
          local_b8 = &local_180;
          local_c0 = (Isolate *)CONCAT44(local_c0._4_4_,uVar3);
          local_a8 = (ulong *)0x0;
          local_d8 = uVar10;
          uStack_d4 = uVar12;
          local_c8 = pIVar26;
          uVar30 = v8::internal::String::Flatten(param_3,pIVar18,0);
          local_d0 = (undefined4)uVar30;
          uStack_cc = (undefined4)((ulong)uVar30 >> 0x20);
          if ((*puVar21 & 1) == 0) {
            local_b0 = (ulong *)CONCAT71(local_b0._1_7_,1);
LAB_01585b60:
            local_a8 = puVar21;
          }
          else {
            bVar13 = (int)*puVar21 != *(int *)pIVar25;
            local_b0 = (ulong *)CONCAT71(local_b0._1_7_,bVar13);
            if (bVar13) goto LAB_01585b60;
          }
          puVar21 = (ulong *)v8::internal::String::GetSubstitution(param_3,&local_e0,puVar19,0);
          if (puVar21 == (ulong *)0x0) {
            param_2 = *(ulong **)(param_3 + 0x180);
            goto LAB_01585a30;
          }
joined_r0x01585d0c:
          if (uVar3 < local_25c) {
            bVar13 = false;
          }
          else {
            if ((local_25c != 0) || (pIVar26 = pIVar18, *(uint *)(*(ulong *)pIVar18 + 7) != uVar3))
            {
              pIVar26 = (Isolate *)
                        v8::internal::Factory::NewProperSubString
                                  ((Factory *)param_3,pIVar18,local_25c,(ulong)uVar3);
            }
            v8::internal::IncrementalStringBuilder::AppendString
                      ((IncrementalStringBuilder *)local_158,pIVar26);
            v8::internal::IncrementalStringBuilder::AppendString
                      ((IncrementalStringBuilder *)local_158,puVar21);
            bVar13 = false;
            local_25c = uVar3 + iVar45;
          }
        }
        else {
          bVar13 = (int)uVar32 == *(int *)pIVar25;
          if (!bVar1) goto LAB_01585a64;
LAB_015859b0:
          iVar31 = 2;
          if (!bVar13) {
            iVar31 = 3;
          }
          if ((0xfffe < uVar14) || (uVar47 = iVar31 + uVar14, 0xfffe < uVar47)) {
            puVar48 = (undefined8 *)
                      v8::internal::Factory::NewRangeError((Factory *)param_3,0x132,0,0,0);
            param_2 = (ulong *)v8::internal::Isolate::Throw(param_3,*puVar48,0);
            goto LAB_01585ab8;
          }
          uVar32 = (ulong)uVar47 << 3;
          plVar16 = operator_new__(uVar32,(nothrow_t *)&std::nothrow);
          if (plVar16 == (long *)0x0) {
            plVar16 = (long *)v8::internal::V8::GetCurrentPlatform();
            (**(code **)(*plVar16 + 0x18))();
            plVar16 = operator_new__(uVar32,(nothrow_t *)&std::nothrow);
            if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              v8::internal::FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
            }
            if (uVar47 != 0) {
              memset(plVar16,0,uVar32);
            }
          }
          else if (uVar47 != 0) {
            memset(plVar16,0,uVar32);
          }
          if (uVar14 != 0) {
            uVar32 = (ulong)uVar14;
            if ((uVar14 < 4) || ((plVar16 < local_180 + uVar32 && (local_180 < plVar16 + uVar32))))
            {
              uVar42 = 0;
            }
            else {
              uVar42 = uVar32 & 0xfffffffc;
              plVar34 = local_180 + 2;
              plVar39 = plVar16 + 2;
              uVar38 = uVar42;
              do {
                plVar8 = plVar34 + -1;
                lVar41 = plVar34[-2];
                lVar51 = plVar34[1];
                lVar23 = *plVar34;
                plVar34 = plVar34 + 4;
                uVar38 = uVar38 - 4;
                plVar39[-1] = *plVar8;
                plVar39[-2] = lVar41;
                plVar39[1] = lVar51;
                *plVar39 = lVar23;
                plVar39 = plVar39 + 4;
              } while (uVar38 != 0);
              if (uVar42 == uVar32) goto LAB_01585c3c;
            }
            lVar41 = uVar32 - uVar42;
            plVar34 = local_180 + uVar42;
            plVar39 = plVar16 + uVar42;
            do {
              lVar41 = lVar41 + -1;
              *plVar39 = *plVar34;
              plVar34 = plVar34 + 1;
              plVar39 = plVar39 + 1;
            } while (lVar41 != 0);
          }
LAB_01585c3c:
          uVar32 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1;
          if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar22 = *(ulong **)(param_3 + 0x95a0);
            if (puVar22 == *(ulong **)(param_3 + 0x95a8)) {
              puVar22 = (ulong *)v8::internal::HandleScope::Extend(param_3);
            }
            *(ulong **)(param_3 + 0x95a0) = puVar22 + 1;
            *puVar22 = uVar32;
          }
          else {
            puVar22 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar32);
          }
          plVar16[uVar14] = (long)puVar22;
          plVar16[uVar14 + 1] = (long)pIVar18;
          if (!bVar13) {
            plVar16[uVar14 + 2] = (long)puVar21;
          }
          puVar21 = (ulong *)v8::internal::Execution::Call(param_3,puVar20,pIVar25,uVar47,plVar16);
          if (puVar21 == (ulong *)0x0) {
            param_2 = *(ulong **)(param_3 + 0x180);
            operator_delete__(plVar16);
          }
          else {
            uVar32 = *puVar21;
            if ((((uVar32 & 1) != 0) &&
                (*(ushort *)((uVar32 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar32 - 1)) <
                 0x40)) ||
               (puVar21 = (ulong *)v8::internal::Object::ConvertToString(param_3,puVar21),
               puVar21 != (ulong *)0x0)) {
              operator_delete__(plVar16);
              goto joined_r0x01585d0c;
            }
            param_2 = *(ulong **)(param_3 + 0x180);
            operator_delete__(plVar16);
          }
LAB_01585a30:
          bVar13 = true;
        }
      }
      if (local_180 != (long *)0x0) {
        local_178 = local_180;
      }
      if (param_3 != (Isolate *)0x0) goto LAB_015857a0;
    }
    if (bVar13) goto LAB_01585520;
  }
LAB_0158611c:
  if (local_25c < uVar44) {
    if ((local_25c != 0) || (*(uint *)(*(ulong *)pIVar18 + 7) != uVar44)) {
      pIVar18 = (Isolate *)
                v8::internal::Factory::NewProperSubString
                          ((Factory *)param_3,pIVar18,local_25c,uVar44);
    }
    v8::internal::IncrementalStringBuilder::AppendString
              ((IncrementalStringBuilder *)local_158,pIVar18);
  }
  puVar46 = (undefined8 *)
            v8::internal::IncrementalStringBuilder::Finish((IncrementalStringBuilder *)local_158);
  if (puVar46 == (undefined8 *)0x0) {
    param_2 = *(ulong **)(param_3 + 0x180);
  }
  else {
    param_2 = (ulong *)*puVar46;
  }
LAB_01585520:
  v8::internal::Zone::~Zone((Zone *)&local_120);
  if (param_3 == (Isolate *)0x0) goto LAB_01586998;
LAB_01586970:
  *(undefined8 *)(param_3 + 0x95a0) = uVar17;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar6) {
    *(long *)(param_3 + 0x95a8) = lVar6;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
LAB_01586998:
  if ((local_1d0 != (byte **)0x0) && (*local_1c8 != 0)) {
    plVar16 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar16 + 0x28))(plVar16,local_1c8,local_1c0,local_1b8);
  }
  if (local_1b0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_1b0,(RuntimeCallTimer *)((ulong)&local_1b0 | 8));
  }
  if (*(long *)(lVar7 + 0x28) == local_88) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

